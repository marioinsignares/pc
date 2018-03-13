/*****************************************************************
* ORDENES.C Version 1.0 - Rev 1.2 - May. 04/98.
*
* marcasob.pc. Marca los sobres de RFX-10
*
* Uso : marcasob numero_documento diametro device userid/password
*
* Martin A. Toloza L. Creado Marzo 04-1998.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void esferas();
                                     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
EXEC SQL BEGIN DECLARE SECTION;

VARCHAR uid[100]; 
                                 /* Ajustesal (C1) */
VARCHAR fecha           [10];
VARCHAR codigo          [12];
int     diametro;
int     cantidad;
VARCHAR numero_documento[9];
                                 /* Esf_cil (C2) */
double  esfera;
VARCHAR codesfcil       [4];

EXEC SQL END DECLARE SECTION;
EXEC SQL INCLUDE SQLCA;
                                            /* Variables globales del usuario */
#define A_F1     "###,###.##"
int	staora = 0;
int	oraest = 0;
int     i;
int     j;
int     k;
int     l;
char    dia[3];
char    codart[12];
char    esfcil[4];
char    cadena[20];
char    linea1[4][30];
char    linea2[4][30];
char    r_t[20];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 3)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : marcasob numero_documento diametro device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (numero_documento.arr, argv[1]);
       numero_documento.len =        strlen(numero_documento.arr);
       strcpy (dia,                  argv[2]);
       strcpy (device,               argv[3]);
       strlow (device);

    if (!strpos ("/", argv[4]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,   argv[4]);
    uid.len   =        strlen(uid.arr);

/******************************************************
 * Establecer conexion concurrente con ORACLE (orlon) *
 ******************************************************/
    EXEC SQL CONNECT :uid;

    if (sqlca.sqlcode==-1915)
       {
	fprintf (stderr,"Oracle Base de Datos no esta activa. SGA (%d)\n",
		 	sqlca.sqlcode);
        exit (1);
       }
    else
       if (sqlca.sqlcode==-1017)
	  {
	   fprintf (stderr,"User Name/Password es Invalido. Re-intente.\n");
	   exit (1);
	  }
       else
          if (sqlca.sqlcode)
	     exit (1);

    busco_impresora(device);
    abre_impresora("1");

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/

 EXEC SQL DECLARE C1 CURSOR FOR
          select fecha_documento, codigo_articulo,
                 decode(substr(codigo_articulo,2,1),'1',65,'2',70,'3',75),
                 cantidad
          from   ajustesal_d d, ajustesal_c c
          where  to_number(to_char(fecha_documento,'yymm'))
                                  = ano_mes             and
                 c.consecutivo    = d.consecutivo       and
                 numero_documento =  :numero_documento;

 EXEC SQL OPEN C1;
 staora  = 0;
 fprintf (fp,"%s%s\r",ancho_on,diezcpi);
 while (staora == 0) {

        EXEC SQL FETCH C1 INTO :fecha, :codigo, :diametro, :cantidad;

        staora  = sqlca.sqlcode;
        if (staora ==  1403) break;
        if (staora == -1405)
            staora  = 0;
        else if (staora)
                 fprintf (stderr, "Error Leyendo C1 (%d)\n", staora);

        fecha.arr   [fecha.len]  = '\0';
        codigo.arr  [codigo.len] = '\0';
        strcpy (codart,codigo.arr);
        k = cantidad;
        for (i=1; i<=cantidad;i++) {
            if ( ( k - 4 ) > 0 ) {
               l = 4;
               k = k - 4;
            }
            else {
               l = k;
               k = 0;
            }
            fprintf (fp,"\r");
            for (j=1; j<=l;j++) {
            if (codart[2]=='6' && (codart[3]=='0'||codart[3]=='1' ||
                codart[3]=='2')) {
               esfcil[0]=codart[4];
               esfcil[1]=codart[5];
               esfcil[2]=codart[6];
               esfcil[3]='\0';
               esferas();
               if (codart[3]=='0') {
                  if (strcmp(dia,"99"))
                     diametro=atoi(dia);
                  sprintf(linea1[j],"NEUTRO %2d",diametro);
                  sprintf(linea2[j],"%-8s",numero_documento.arr);
               }
               else if (codart[3]=='1') {
                        if (strcmp(dia,"99"))
                           diametro=atoi(dia);
                        sprintf(linea1[j]," +%02.2f %2d",esfera,diametro);
                        sprintf(linea2[j],"%-8s",numero_documento.arr);
                    }
                    else {
                           if (strcmp(dia,"99"))
                              diametro=atoi(dia);
                              sprintf(linea1[j]," -%02.2f %2d",esfera,diametro);
                              sprintf(linea2[j],"%-8s",numero_documento.arr);
                    }
            }
            else {
                  esfcil[0]='0';
                  esfcil[1]=codart[4];
                  esfcil[2]=codart[5];
                  esfcil[3]='\0';
                  esferas();
                  if (codart[3]=='0' || codart[3]=='3')
                     strcpy (linea1[j],"PL");
                  if (codart[3]=='4')
                     strcpy (linea1[j],"+");
                  if (codart[3]=='5')
                     strcpy (linea1[j],"-");
                  if (esfera > 0) {
                     sprintf (cadena,"%02.2f",esfera);
                     strcpy (linea1[j],cadena);
                  }
                  esfcil[0]='0';
                  esfcil[1]=codart[6];
                  esfcil[2]=codart[7];
                  esfcil[3]='\0';
                  esferas();
                  if (strcmp(dia,"99"))
                      diametro=atoi(dia);
                  sprintf (cadena," -%02.2f %2d",esfera,diametro);
                  strcpy(linea1[j],cadena);
                  sprintf (linea2[j],"-8s",numero_documento.arr);
            }
            fprintf (fp, "%31s %31s %31s %31s\n",linea1[1],linea1[2],linea1[3],linea1[4]);
            fprintf (fp, "%31s %31s %31s %31s\n",linea2[1],linea2[2],linea2[3],linea2[4]);
            fprintf (fp,"\r\n\n\n\n\n");
        }
 }
 fprintf (fp,"%s%s\r",ancho_off,diezcpi);
 
 cierre_impresora();

 EXEC SQL CLOSE C1;

 EXEC SQL COMMIT WORK RELEASE;

 exit   (0);
}

void esferas()
{
  strcpy (codesfcil.arr,esfcil);
  codesfcil.len = strlen(codesfcil.arr);
  EXEC SQL select esf_cil into :esfera
           from   esf_cil
           where  codigo_esf_cil = :codesfcil;
  oraest  = sqlca.sqlcode;
  if (oraest != 1403 && oraest != 0) 
      fprintf (stderr, "Error Leyendo C2 (%d)\n", oraest);
}
