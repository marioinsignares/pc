
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned long magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[14];
};
static const struct sqlcxp sqlfpn =
{
    13,
    ".\\marcasob.pc"
};


static const unsigned long sqlctx = 1240494720;


static struct sqlexd {
   unsigned long    sqlvsn;
   unsigned long   arrsiz;
   unsigned long   iters;
   unsigned short   offset;
   unsigned short   selerr;
   unsigned short   sqlety;
   unsigned short   unused;
	 const    short   *cud;
   unsigned char    *sqlest;
	 const    char    *stmt;
   unsigned char  * *sqphsv;
   unsigned long   *sqphsl;
	    short  * *sqpind;
   unsigned long   *sqparm;
   unsigned long   * *sqparc;
   unsigned char    *sqhstv[5];
   unsigned long    sqhstl[5];
	    short   *sqindv[5];
   unsigned long    sqharm[5];
   unsigned long     *sqharc[5];
} sqlstm = {8,5};

/* Prototypes */
extern void sqlcxt (void **, const unsigned long *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, const unsigned long *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, const unsigned long *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(char *, unsigned long *);

 static const char *sq0003 = 
"select fecha_documento ,codigo_articulo ,decode(substr(codigo_articulo,2,1),\
'1',65,'2',70,'3',75) ,cantidad ,nvl(marca,'*')  from ajustesal_d d ,ajustesal\
_c c where ((to_char(fecha_documento,lpad('mm',(:b0+2),'y'))=d.ano_mes and c.c\
onsecutivo=d.consecutivo) and numero_documento=:b1)           ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,102,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,34,0,4,127,0,1,0,0,1,0,2,3,0,0,
46,0,0,3,294,0,9,145,0,2,2,0,1,0,1,3,0,0,1,9,0,0,
68,0,0,3,0,0,13,154,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,2,3,0,0,2,9,0,0,
102,0,0,3,0,0,15,174,0,0,0,0,1,0,
116,0,0,3,0,0,15,225,0,0,0,0,1,0,
130,0,0,4,0,0,30,227,0,0,0,0,1,0,
144,0,0,5,62,0,4,331,0,2,1,0,1,0,2,4,0,0,1,9,0,0,
};


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
void llenado();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;


                                 /* Ajustesal (C1) */
/* VARCHAR fecha          [100][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } fecha[100];

/* VARCHAR codigo         [100][30]; */ 
struct { unsigned short len; unsigned char arr[30]; } codigo[100];

int     diametro       [100];
int     cantidad       [100];
/* VARCHAR marca          [100][02]; */ 
struct { unsigned short len; unsigned char arr[2]; } marca[100];


int     a2k;
/* VARCHAR numero_documento[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } numero_documento;

double  esfera;
/* VARCHAR codesfcil       [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codesfcil;


/* EXEC SQL END DECLARE SECTION; */ 

/* EXEC SQL INCLUDE SQLCA;
 */ 
/* Copyright (c) 1985,1986 by Oracle Corporation. */

/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
  If the symbol SQLCA_STORAGE_CLASS is defined, then the SQLCA
  will be defined to have this storage class. For example:

    #define SQLCA_STORAGE_CLASS extern

  will define the SQLCA as an extern.

  If the symbol SQLCA_INIT is defined, then the SQLCA will be
  statically initialized. Although this is not necessary in order
  to use the SQLCA, it is a good pgming practice not to have
  unitialized variables. However, some C compilers/OS's don't
  allow automatic variables to be init'd in this manner. Therefore,
  if you are INCLUDE'ing the SQLCA in a place where it would be
  an automatic AND your C compiler/OS doesn't allow this style
  of initialization, then SQLCA_INIT should be left undefined --
  all others can define SQLCA_INIT if they wish.

  If the symbol SQLCA_NONE is defined, then the SQLCA variable will
  not be defined at all.  The symbol SQLCA_NONE should not be defined
  in source modules that have embedded SQL.  However, source modules
  that have no embedded SQL, but need to manipulate a sqlca struct
  passed in as a parameter, can set the SQLCA_NONE symbol to avoid
  creation of an extraneous sqlca variable.

*/

#ifndef SQLCA
#define SQLCA 1

struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ long    sqlabc;
         /* b4  */ long    sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ long    sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef SQLCA_STORAGE_CLASS
  SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif

# ifdef  SQLCA_INIT
         = {
         {'S', 'Q', 'L', 'C', 'A', ' ', ' ', ' '},
         sizeof(struct sqlca),
         0,
         { 0, {0}},
         {'N', 'O', 'T', ' ', 'S', 'E', 'T', ' '},
         {0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}
         }
#endif /* SQLCA_INIT */
         ;

#endif 

#endif 

/* end SQLCA */

                                            /* Variables globales del usuario */
#define A_F1     "###,###.##"
int     traidos    =0;
int     staora     =0;
int     num_ret    =0;
int     loop_1     =0;
int     oraest     =0;
int     a          =0;
double  n          =0;
int     i          =0;
int     j          =0;
int     k          =0;
int     l          =0;
int     o          =0;
int     p          =0;
char    dia[3];
char    codart[20];
char    esfcil[10];
char    cadena[70];
char    r_t[20];
char    linea1[4][30];
char    linea2[4][30];


void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;
double  n;

    if (argc < 5)
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
    /* EXEC SQL CONNECT :uid; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.iters = (unsigned long  )100;
    sqlstm.offset = (unsigned short)2;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&uid;
    sqlstm.sqhstl[0] = (unsigned long  )102;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



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

 /* EXEC SQL select y2k
          into   :a2k
          from   ano2000; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.stmt = "select y2k into :b0  from ano2000 ";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)28;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&a2k;
 sqlstm.sqhstl[0] = (unsigned long  )4;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 if (sqlca.sqlcode != 0 ) {
    fprintf (stderr, "Error, No existe registro alguno en tabla Y2K (%d)\n", sqlca.sqlcode);
    exit (1);
 }

 /* EXEC SQL DECLARE C1 CURSOR FOR
          select fecha_documento, codigo_articulo,
                 decode(substr(codigo_articulo,2,1),'1',65,'2',70,'3',75),
                 cantidad, nvl(marca,'*')
          from   ajustesal_d d, ajustesal_c c
          where  to_char(fecha_documento,lpad('mm',:a2k+2,'y'))
                                  = d.ano_mes             and
                 c.consecutivo    = d.consecutivo       and
                 numero_documento =  :numero_documento; */ 


 /* EXEC SQL OPEN C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.stmt = sq0003;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)46;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&a2k;
 sqlstm.sqhstl[0] = (unsigned long  )4;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&numero_documento;
 sqlstm.sqhstl[1] = (unsigned long  )12;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 staora  = 0;
 fprintf (fp,"%s%s\r",ancho_on,condensado_on);

 staora  = 0;
 traidos = 0;
 num_ret = 0;
 while (staora == 0) {

       /* EXEC SQL FETCH C1 INTO :fecha, :codigo, :diametro, :cantidad, :marca; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 5;
       sqlstm.iters = (unsigned long  )100;
       sqlstm.offset = (unsigned short)68;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)fecha;
       sqlstm.sqhstl[0] = (unsigned long  )24;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqharc[0] = (unsigned long   *)0;
       sqlstm.sqhstv[1] = (unsigned char  *)codigo;
       sqlstm.sqhstl[1] = (unsigned long  )32;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqharc[1] = (unsigned long   *)0;
       sqlstm.sqhstv[2] = (unsigned char  *)diametro;
       sqlstm.sqhstl[2] = (unsigned long  )4;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqharc[2] = (unsigned long   *)0;
       sqlstm.sqhstv[3] = (unsigned char  *)cantidad;
       sqlstm.sqhstl[3] = (unsigned long  )4;
       sqlstm.sqindv[3] = (         short *)0;
       sqlstm.sqharm[3] = (unsigned long )0;
       sqlstm.sqharc[3] = (unsigned long   *)0;
       sqlstm.sqhstv[4] = (unsigned char  *)marca;
       sqlstm.sqhstl[4] = (unsigned long  )4;
       sqlstm.sqindv[4] = (         short *)0;
       sqlstm.sqharm[4] = (unsigned long )0;
       sqlstm.sqharc[4] = (unsigned long   *)0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



       if (staora == -1405)
           staora  = 0;
       else if (staora)
              fprintf (stderr, "Error Leyendo C1 (%d)\n", staora);

       staora  = sqlca.sqlcode;
       traidos = sqlca.sqlerrd[2];

       for (loop_1 = 0; loop_1 < (traidos - num_ret); loop_1++) {
           fecha[loop_1].arr  [fecha[loop_1].len]  = '\0';
           codigo[loop_1].arr [codigo[loop_1].len] = '\0';
           marca[loop_1].arr  [marca[loop_1].len]  = '\0';
       }
       num_ret = traidos;
 }

// printf("%5d %5d",k, traidos); getchar();

 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 5;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)102;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 p = 0;

 k = cantidad[a];
 o = k;
 while ( traidos > 0 ) {

        n = (double)(o)/4.0;
        n = ceil(n);

//        printf("k=%d,n=%1.0f,o=%d",k,n,o); getchar();

        for (i=1; i<=n; i++) {
            if ( ( o - 4 ) >= 0 ) {
               l = 4;
               llenado();
            }
            else {
                  l+= k;
                  llenado();
                  p = l;
//                  printf("l=%d p=%d ",l,p); getchar();
                  if ( l < 4 && traidos > 1 ) {
                     break;
                  }
            }
            fprintf (fp,"\r");
            fprintf (fp, "%-26s %-26s %-26s %-26s\n\n",linea1[0],linea1[1],linea1[2],linea1[3]);
            fprintf (fp, "%-26s %-26s %-26s %-26s\n",linea2[0],linea2[1],linea2[2],linea2[3]);
            fprintf (fp,"\r\n\n\n");
            p = 0;
            l = 0;
            if ( o < 4 )
               o = 0;
            else
               o = o - 4;
//            printf("o=%d,k=%d",o,k); getchar();
        }
        if ( k == 0 ) {
            traidos--;
            a++;
            k = k + cantidad[a];
            o = o + cantidad[a];
//            printf("a=%d,k=%d,o=%d",a,k,o); getchar();
        }
 }
 fprintf (fp,"%s%s\r",ancho_off,diezcpi);

 cierre_impresora();

 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 5;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)116;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 /* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 5;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)130;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 exit   (0);
}

void llenado()
{
//            printf("p=%d j=%d l=%d k=%d i=%d a=%d ",p,j,l,k,i,a); getchar();

            for (j=p;j<l;j++) {
//                printf("j=%d,l=%d",j,l); getchar();
                if (codigo[a].arr[2]=='6' && (codigo[a].arr[3]=='0'||codigo[a].arr[3]=='1' ||
                    codigo[a].arr[3]=='2')) {
                   esfcil[0]=codigo[a].arr[4];
                   esfcil[1]=codigo[a].arr[5];
                   esfcil[2]=codigo[a].arr[6];
                   esfcil[3]='\0';
                   esferas();
                   if (codigo[a].arr[3]=='0') {
                      if (strcmp(dia,"99"))
                         diametro[a]=atoi(dia);
                      sprintf(linea1[j],"NEUTRO        %2d",diametro[a]);
                      if (codigo[a].arr[0]=='6') {
                         strcat(linea1[j],"/");
                         strcat(linea1[j],marca[a].arr);
                      }
                      sprintf(linea2[j],"%6s",numero_documento.arr);
                      if (codigo[a].arr[0]=='6') {
                         strcat (linea2[j],"     POLICARBONATO");
                      }
                   }
                   else if (codigo[a].arr[3]=='1') {
                            if (strcmp(dia,"99"))
                               diametro[a]=atoi(dia);
                            sprintf(linea1[j]," +%02.2f       %2d",esfera,diametro[a]);
                            if (codigo[a].arr[0]=='6') {
                               strcat(linea1[j],"/");
                               strcat(linea1[j],marca[a].arr);
                            }
                            sprintf(linea2[j],"%6s",numero_documento.arr);
                            if (codigo[a].arr[0]=='6') {
                               strcat (linea2[j],"     POLICARBONATO");
                            }
                        }
                        else {
                               if (strcmp(dia,"99"))
                                  diametro[a]=atoi(dia);
                               sprintf(linea1[j]," -%02.2f       %2d",esfera,diametro[a]);
                               sprintf(linea2[j],"%6s",numero_documento.arr);
                               if (codigo[a].arr[0]=='6') {
                                  strcat(linea1[j],"/");
                                  strcat(linea1[j],marca[a].arr);
                               }
                               if (codigo[a].arr[0]=='6') {
                                  strcat (linea2[j],"     POLICARBONATO");
                               }
                        }
                }
                else {
                      esfcil[0]='0';
                      esfcil[1]=codigo[a].arr[4];
                      esfcil[2]=codigo[a].arr[5];
                      esfcil[3]='\0';
                      esferas();
                      strcpy (linea1[j],"");
                      if (codigo[a].arr[3]=='0' || codigo[a].arr[3]=='3') {
                         strcat (linea1[j],"PL");
                      }
                      if (codigo[a].arr[3]=='4') {
                         strcat (linea1[j],"+");
                      }
                      if (codigo[a].arr[3]=='5') {
                         strcat (linea1[j],"-");
                      }
                      if (esfera > 0) {
                         sprintf (cadena,"%02.2f",esfera);
                         strcat (linea1[j],cadena);
                      }
                      esfcil[0]='0';
                      esfcil[1]=codigo[a].arr[6];
                      esfcil[2]=codigo[a].arr[7];
                      esfcil[3]='\0';
                      esferas();
                      if (strcmp(dia,"99"))
                          diametro[a]=atoi(dia);
                      sprintf (cadena," -%02.2f       %2d",esfera,diametro[a]);
                      strcat(linea1[j],cadena);
                      if (codigo[a].arr[0]=='6') {
                         strcat(linea1[j],"/");
                         strcat(linea1[j],marca[a].arr);
                      }
                      sprintf (linea2[j],"%6s",numero_documento.arr);
                      if (codigo[a].arr[0]=='6') {
                         strcat (linea2[j],"     POLICARBONATO");
                      }
                }
            k--;
            }
}

void esferas()
{
  strcpy (codesfcil.arr,esfcil);
  codesfcil.len = strlen(codesfcil.arr);
  /* EXEC SQL select esf_cil into :esfera
           from   esf_cil
           where  codigo_esf_cil = :codesfcil; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 5;
  sqlstm.stmt = "select esf_cil into :b0  from esf_cil where codigo_esf_cil=\
:b1";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)144;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&esfera;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&codesfcil;
  sqlstm.sqhstl[1] = (unsigned long  )12;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  oraest  = sqlca.sqlcode;
  if (oraest != 1403 && oraest != 0)
      fprintf (stderr, "Error Leyendo C2 (%d)\n", oraest);
}
