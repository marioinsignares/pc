
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
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    ".\\rotulos.pc"
};


static const unsigned long sqlctx = 1305837411;


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
   unsigned char    *sqhstv[6];
   unsigned long    sqhstl[6];
	    short   *sqindv[6];
   unsigned long    sqharm[6];
   unsigned long     *sqharc[6];
} sqlstm = {8,6};

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

 static const char *sq0005 = 
"select nvl(numero_despacho,0)  from despachoc where ((codigo_cliente_e=:b0 a\
nd fecha=to_date(:b1,'DD-MON-YYYY')) and numero_despacho_e=:b2)           ";
 static const char *sq0006 = 
"select nvl(numero,0)  from telefonos where codigo_nit=:b0 order by orden    \
        ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,113,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,39,0,4,142,0,1,0,0,1,0,2,9,0,0,
46,0,0,3,146,0,4,149,0,4,3,0,1,0,2,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
76,0,0,4,388,0,4,157,0,6,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,
0,
114,0,0,5,150,0,9,181,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
140,0,0,5,0,0,15,197,0,0,0,0,1,0,
154,0,0,7,0,0,30,199,0,0,0,0,1,0,
168,0,0,5,0,0,13,305,0,1,0,0,1,0,2,4,0,0,
186,0,0,6,84,0,9,329,0,1,1,0,1,0,1,9,0,0,
204,0,0,6,0,0,13,332,0,1,0,0,1,0,2,4,0,0,
222,0,0,6,0,0,15,351,0,0,0,0,1,0,
};


/*****************************************************************
* ROTULOS.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* ordenes.c. Listado de Los Rotulos de despacho.
*
* Uso : ordenes numero_orden fecha_documento device userid/password
*
* Mario E. Santiago I. Creado Junio 9-1990.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void titulos();
void lista_ordenes();
void telefonos();

				     /* Parametros de comunicacion con ORACLE */

                                            /* Variables globales del usuario */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

/* VARCHAR codigo_cliente[8]; */ 
struct { unsigned short len; unsigned char arr[8]; } codigo_cliente;

/* VARCHAR nomb_clie[41]; */ 
struct { unsigned short len; unsigned char arr[41]; } nomb_clie;

/* VARCHAR nomb_ciu[22]; */ 
struct { unsigned short len; unsigned char arr[22]; } nomb_ciu;

/* VARCHAR direccion[46]; */ 
struct { unsigned short len; unsigned char arr[46]; } direccion;

double  telefono;
/* VARCHAR codigo_nit_c[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nit_c;

double  numero_despacho;
double  numero_orden;
/* VARCHAR mensaje[102]; */ 
struct { unsigned short len; unsigned char arr[102]; } mensaje;

/* VARCHAR despacho[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } despacho;

/* VARCHAR cliente[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } cliente;

/* VARCHAR fecha[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha;

int     tot_pag;


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


int     con_pag;                                   /* Contador de Paginas */
int     con_lin;                                   /* Contador de Lineas  */
int     aa;
int     mm;
int     dd;
int     oraest  = 0;
int     traidos = 0;
        		                /* Variables de recepcion para datos */
char    direcc[45];
char    mensaje1[100];
char    mensaje2[100];

char    cadena [100];
char    wcadena[100];
char    cadena2[100];

void main(argc, argv)
int     argc;
char    *argv[];
{
char	device[6];
int	status = 0;

    if (argc < 6)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : rotulode fecha('DD-MON-YYYY') codigo_cliente numero_despacho device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("      device : s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (fecha.arr,argv[1]);
       fecha.len = strlen(fecha.arr);
       strupp(fecha.arr);
       fecha.len = strlen(fecha.arr);
       if ( strlen(fecha.arr) != 11 ) {
          printf("Error, la fecha debe ser de 11 digitos y formato DD-MON-YYYY %s",fecha.arr);
          getchar();
          exit (1);
       }

       strcpy (codigo_cliente.arr,(argv[2]));
       codigo_cliente.len = strlen(codigo_cliente.arr);

       strcpy (despacho.arr, argv[3]);
       despacho.len = strlen(despacho.arr);

       strcpy (device,  argv[4]);
       strlow (device);

       if (!strpos ("/", argv[5]))
       {
          printf ("user id/password incorrecto.\n");
	        exit (1);
       }

       strcpy (uid.arr,    argv[5]);
       uid.len   =  strlen(uid.arr);

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

/************************************************
 * Recuperar datos en el area de datos definida *
 * una fila al tiempo. (ofetch).                *
 * Aqui se hace la primera lectura del cursor 0.*
 ************************************************/

/* C4 */

    /* EXEC SQL select mensaje
             into  :mensaje
             from   mensajes; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.stmt = "select mensaje into :b0  from mensajes ";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)28;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&mensaje;
    sqlstm.sqhstl[0] = (unsigned long  )104;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    mensaje.arr   [mensaje.len] = '\0';

/* C3 */
    /* EXEC SQL select ceil(count(*)/25)
             into  :tot_pag
             from   despachoc
             where  codigo_cliente_e  = :codigo_cliente and
                    fecha             = to_date(:fecha,'DD-MON-YYYY') and
                    numero_despacho_e = :despacho; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = "select ceil((count(*) /25)) into :b0  from despachoc wher\
e ((codigo_cliente_e=:b1 and fecha=to_date(:b2,'DD-MON-YYYY')) and numero_desp\
acho_e=:b3)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)46;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&tot_pag;
    sqlstm.sqhstl[0] = (unsigned long  )4;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_cliente;
    sqlstm.sqhstl[1] = (unsigned long  )10;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&fecha;
    sqlstm.sqhstl[2] = (unsigned long  )22;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&despacho;
    sqlstm.sqhstl[3] = (unsigned long  )12;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



/* C1 */
    /* EXEC SQL select cl.codigo_cliente, n.nombre,
                    nvl(n.ciudad_env,nvl(n.nombre_muni,c.nombre)),
                    nvl(n.direccion2,n.direccion), n.codigo_nit
             into  :cliente, :nomb_clie, :nomb_ciu, :direccion, :codigo_nit_c
             from   nits n, ciudades c, clientes cl
             where  n.codigo_nit      = cl.codigo_nit            and
                    n.codigo_ciu      = c.codigo                 and
                    cl.codigo_cliente = :codigo_cliente
             group by cl.codigo_cliente, n.nombre, n.nombre_muni, c.nombre,
                      n.direccion, n.ciudad_env, n.direccion2, n.codigo_nit; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 6;
    sqlstm.stmt = "select cl.codigo_cliente ,n.nombre ,nvl(n.ciudad_env,nvl(\
n.nombre_muni,c.nombre)) ,nvl(n.direccion2,n.direccion) ,n.codigo_nit into :b0\
,:b1,:b2,:b3,:b4  from nits n ,ciudades c ,clientes cl where ((n.codigo_nit=cl\
.codigo_nit and n.codigo_ciu=c.codigo) and cl.codigo_cliente=:b5) group by cl.\
codigo_cliente,n.nombre,n.nombre_muni,c.nombre,n.direccion,n.ciudad_env,n.dire\
ccion2,n.codigo_nit";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)76;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&cliente;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&nomb_clie;
    sqlstm.sqhstl[1] = (unsigned long  )43;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&nomb_ciu;
    sqlstm.sqhstl[2] = (unsigned long  )24;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&direccion;
    sqlstm.sqhstl[3] = (unsigned long  )48;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&codigo_nit_c;
    sqlstm.sqhstl[4] = (unsigned long  )8;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&codigo_cliente;
    sqlstm.sqhstl[5] = (unsigned long  )10;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    cliente.arr     [cliente.len]   = '\0';
    nomb_clie.arr   [nomb_clie.len] = '\0';
    nomb_ciu.arr    [nomb_ciu.len]  = '\0';
    direccion.arr   [direccion.len] = '\0';

/* C2 */
    /* EXEC SQL DECLARE C2 CURSOR FOR
             select nvl(numero_despacho,0)
             from   despachoc
             where  codigo_cliente_e = :codigo_cliente and
                    fecha            = to_date(:fecha,'DD-MON-YYYY') and
                    numero_despacho_e = :despacho; */ 


    /* EXEC SQL OPEN C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 6;
    sqlstm.stmt = sq0005;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)114;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
    sqlstm.sqhstl[0] = (unsigned long  )10;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&fecha;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&despacho;
    sqlstm.sqhstl[2] = (unsigned long  )12;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    fprintf (fp, "%s%c\r",set_vertical,18);

    /* EXEC SQL DECLARE C3 CURSOR FOR
             select nvl(numero,0)
             from   telefonos
             where  codigo_nit = :codigo_nit_c
             order  by orden; */ 


    titulos();

    cierre_impresora();
/************************************************
 * Desconectarse de ORACLE. (ologof)            *
 ************************************************/
    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 6;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)140;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 6;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)154;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    exit   (0);
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
  char *fmtnum();
  int i, j, k, nl;
  while (!oraest) {
    con_pag++;
//    fprintf (fp,"%s                                 %5.0f%s%s\n",ancho_on,numero_despacho,ancho_off,alto_off);
//  fprintf (fp,"%-65s%s%5.0f%s%s\n","                                 ",ancho_on,numero_despacho,ancho_off,alto_off);
    fprintf (fp,"%-65s%s%5s%s\n","                                 ",ancho_on,despacho.arr,ancho_off);
    strorg(nomb_clie.arr,1,38);
    nomb_clie.len = strlen(nomb_clie.arr);
    strorg(nomb_clie.arr,1,38);
    fprintf (fp,"%s%-8s%66s%d%s%d\n\n%-40s  %-38s\n",diezcpi,cliente.arr,"Pagina # ",con_pag," de ",tot_pag,nomb_clie.arr,nomb_clie.arr);
    if (strlen(direccion.arr) > 37) {
        nl=strlen(direccion.arr);
        i=25;
        while (direccion.arr[i]!=' ')
               i--;
        for (j=0;j<i;j++) {
            direcc[j]=direccion.arr[j];
        }
        direcc[j+1]='\0';
        fprintf (fp,"       %s\n",direcc);
        k=0;
        for (j=i+1;j<=nl;j++) {
            direcc[k]=direccion.arr[j];
            k++;
        }
        direcc[j+1]='\0';
        fprintf (fp,"       %s\n",direcc);
    }
    else fprintf (fp,"\n%s\n",direccion.arr);

    fprintf (fp,"%41s"," ");
    i=0;
    for (i=1;i<6;i++) {
        lista_ordenes();
    }
    
    fprintf (fp,"\n");
    strorg(nomb_ciu.arr,1,18);
    nomb_ciu.len = strlen(nomb_ciu.arr);

    telefonos();
    fprintf (fp,"%-18s%-17s",nomb_ciu.arr,cadena2);

    fprintf (fp,"%6s"," ");
    i=0;
    for (i=1;i<6;i++) {
        lista_ordenes();
    }
    fprintf (fp,"\n");
    fprintf (fp,"%41s"," ");
    i=0;
    for (i=1;i<6;i++) {
        lista_ordenes();
    }
    fprintf (fp,"\n");
    strcpy(cadena,fecha.arr);
    strcpy(wcadena,cadena);
    fecha_oracle(wcadena);
    strcpy(cadena,wcadena);
    fprintf (fp,"%-20s  %s%s%6s%s%s",cadena,alto_on,ancho_on,despacho.arr,ancho_off,alto_off);
    fprintf (fp,"%7s"," ");
    i=0;
    for (i=1;i<6;i++) {
        lista_ordenes();
    }
    fprintf (fp,"\n");
    fprintf (fp,"%41s","                                         ");
    for (i=1;i<6;i++) {
        lista_ordenes();
    }
    fprintf (fp,"\n");
/*      fprintf (fp,"%41s"," ");
    for (i=1;i<6;i++) {
     lista_ordenes();
    }  */
    con_lin = 11;
    strcpy(mensaje1,mensaje.arr);
    strorg(mensaje1,1,65);
    strcpy(mensaje2,mensaje.arr);
    strorg(mensaje2,66,34);
    fprintf (fp,"%42s%s%s%s"," ",condensado_on,mensaje1,condensado_off);
    fprintf (fp,"%s\n",line_feed8vo);
//  fprintf (fp,"%42s%s%s%s\n\n\n%s%s"," ",condensado_on,mensaje2,condensado_off,line_feed6,salte_pagina);
    fprintf (fp,"%42s%s%s%s\n\n\n%s"," ",condensado_on,mensaje2,condensado_off,line_feed6);
    for(i=1;i<=3;++i)
        fprintf (fp,"\n");
    con_lin = 18;
  }
}

void lista_ordenes()
{
  if (!oraest) {

      /* EXEC SQL FETCH C2 INTO :numero_orden; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 6;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)168;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&numero_orden;
      sqlstm.sqhstl[0] = (unsigned long  )8;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



      oraest  = sqlca.sqlcode;
      if (oraest == -1405)
          oraest  = 0;
      else if (oraest)
               fprintf (stderr, "Error leyendo C2 (%d)\n", oraest);

      fprintf (fp,"%s ",elite);
      if (!oraest) {
             if (numero_orden > 0)
                fprintf (fp,"%8.0f",numero_orden);
             else
                fprintf (fp,"%8s"," ");
      }
      fprintf (fp,"%s",diezcpi);
  }
}

void telefonos()
{
 int     oraest3 = 0;
 strcpy(cadena2,"");
 traidos = 0;
 /* EXEC SQL OPEN C3; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.stmt = sq0006;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)186;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo_nit_c;
 sqlstm.sqhstl[0] = (unsigned long  )8;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 while (oraest3 == 0) {

        /* EXEC SQL FETCH C3 INTO :telefono; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 6;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)204;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&telefono;
        sqlstm.sqhstl[0] = (unsigned long  )8;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        oraest3  = sqlca.sqlcode;
        if (oraest3 == 1403 || traidos == 2) break;
        if (oraest3 != 1403 && oraest3 != 0)
            fprintf (stderr, "Error leyendo C3 (%d)\n", oraest3);

        traidos++;
        if (traidos == 1) {
            sprintf (cadena,"%8.0f",telefono);
            strcpy  (cadena2,cadena);
        }
        else {
             if (telefono > 0) {
                 sprintf (cadena,"-%7.0f",telefono);
                 strcat  (cadena2,cadena);
             }
        }
 }
 /* EXEC SQL CLOSE C3; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)222;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}
