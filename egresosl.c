
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

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,0,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[14];
};
static const struct sqlcxp sqlfpn =
{
    13,
    ".\\egresosl.pc"
};


static unsigned long sqlctx = 523851;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
            void  *sqhstv[10];
   unsigned int   sqhstl[10];
            int   sqhsts[10];
            void  *sqindv[10];
            int   sqinds[10];
   unsigned int   sqharm[10];
   unsigned int   *sqharc[10];
   unsigned short  sqadto[10];
   unsigned short  sqtdso[10];
} sqlstm = {10,10};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned long *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned long *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned long *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(char *, int *);

 static const char *sq0002 = 
"select cuenta ,nvl(infa,' ') ,nvl(infb,' ') ,nvl(infc,' ') ,nvl(infd,' ') ,c\
odigo_nit ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,d.consecutivo ,d.secuencia  fro\
m movto_d d ,movto_c c where (((((((d.codigo_emp=c.codigo_emp and d.ano_mes=c.\
ano_mes) and d.consecutivo=c.consecutivo) and d.libro=to_number(:b0)) and c.co\
digo_emp=:b1) and c.clase='EG') and c.comprobante=:b2) and c.ano_mes>=:b3) ord\
er by cuenta,secuencia            ";

 static const char *sq0004 = 
"select decode(infa,inf,codigo_egr,'') ,decode(infb,inf,codigo_egr,'') ,decod\
e(infc,inf,codigo_egr,'') ,decode(infd,inf,codigo_egr,'') ,infa ,infb ,infc ,i\
nfd  from inf ,plan where ((inf.inf in (infa,infb,infc,infd) and codigo_emp=:b\
0) and cuenta=:b1)           ";

 static const char *sq0003 = 
"select cuenta ,nvl(infa,' ') ,nvl(infb,' ') ,nvl(infc,' ') ,nvl(infd,' ') ,n\
vl(valor_deb,0) ,nvl(valor_cre,0)  from movto_d d ,movto_c c where (((((((((d.\
codigo_emp=c.codigo_emp and d.ano_mes=c.ano_mes) and d.consecutivo=c.consecuti\
vo) and d.libro=to_number(:b0)) and c.codigo_emp=to_number(:b1)) and c.clase='\
EG') and c.comprobante=to_number(:b2)) and substr(cuenta,1,4) in ('1110','1120\
')) and valor_cre is  not null ) and c.ano_mes>=:b3)           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,149,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,422,0,9,258,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
67,0,0,2,0,0,13,260,0,0,10,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,
0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
122,0,0,2,0,0,13,300,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,
0,0,2,4,0,0,2,4,0,0,
169,0,0,2,0,0,15,310,0,0,0,0,0,1,0,
184,0,0,4,261,0,9,322,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
207,0,0,4,0,0,15,327,0,0,0,0,0,1,0,
222,0,0,4,0,0,13,384,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,
269,0,0,5,65,0,4,442,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
292,0,0,3,451,0,9,455,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
323,0,0,3,0,0,13,458,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,
0,0,2,4,0,0,
366,0,0,3,0,0,15,494,0,0,0,0,0,1,0,
381,0,0,6,239,0,4,505,0,0,9,3,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
};


/*****************************************************************
* EGRESOS.C Version 1.0 - Rev 1.2 - Sep. 23/94.
*
* egresos.c. Listado de Los Egresos preimpresos.
*
* Uso : egresos device userid/password
*
* Mario E. Santiago I. Creado Septiembre 23-1994.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(int argc, char *argv[]);
void lista_cuentas();
void imprima_ctas();
void imprime_valor();
void leer_inf();
void imprime_nit();
void lista_cheques();
void titulos();
void leer_nit();
void monletr();
				     /* Parametros de comunicacion con ORACLE */

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

/* VARCHAR fecha[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha;

/* VARCHAR ano_mes[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

int     a2k;
double  nit;
double  codigo_nit;
double  codigo_nit2;
/* VARCHAR codigo_bco[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_bco;

double  valor_cheques;
/* VARCHAR concepto[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } concepto;

double  numero_factura;
double  valor_factura;
double  valor_efectivos;
double  consecutivo;
double  secuencia;
/* VARCHAR nombre[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } nombre;

/* VARCHAR nomb_nit[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } nomb_nit;

/* VARCHAR cuenta1[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuenta1;

/* VARCHAR inf2a[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } inf2a;

/* VARCHAR inf2b[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } inf2b;

/* VARCHAR inf2c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } inf2c;

/* VARCHAR inf2d[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } inf2d;

/* VARCHAR inf1a[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } inf1a;

/* VARCHAR inf1b[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } inf1b;

/* VARCHAR inf1c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } inf1c;

/* VARCHAR inf1d[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } inf1d;

/* VARCHAR cuenta[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuenta;

/* VARCHAR infa[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infa;

/* VARCHAR infb[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infb;

/* VARCHAR infc[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infc;

/* VARCHAR infd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infd;

/* VARCHAR vselinfa[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vselinfa;

/* VARCHAR vselinfb[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vselinfb;

/* VARCHAR vselinfc[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vselinfc;

/* VARCHAR vselinfd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vselinfd;

/* VARCHAR codigo_emp[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_emp;

/* VARCHAR codigo_nitb[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_nitb;

/* VARCHAR numero_egreso[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } numero_egreso;

/* VARCHAR ultimo[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ultimo;

/* VARCHAR cuentab[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuentab;

/* VARCHAR nombre_emp[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } nombre_emp;

double  valor_deb;
double  valor_cre;
double  nvalor_deb;
double  ult_listado;
double  ult_grabado;
/* VARCHAR libro[04]; */ 
struct { unsigned short len; unsigned char arr[4]; } libro;


/* EXEC SQL END DECLARE SECTION; */ 

/* EXEC SQL INCLUDE SQLCA;
 */ 
/*
 * $Header: sqlca.h,v 1.3 1994/12/12 19:27:27 jbasu Exp $ sqlca.h 
 */

/* Copyright (c) 1985,1986, 1998 by Oracle Corporation. */
 
/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************

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
 
MODIFIED
    lvbcheng   07/31/98 -  long to int
    jbasu      12/12/94 -  Bug 217878: note this is an SOSD file
    losborne   08/11/92 -  No sqlca var if SQLCA_NONE macro set 
  Clare      12/06/84 - Ch SQLCA to not be an extern.
  Clare      10/21/85 - Add initialization.
  Bradbury   01/05/86 - Only initialize when SQLCA_INIT set
  Clare      06/12/86 - Add SQLCA_STORAGE_CLASS option.
*/
 
#ifndef SQLCA
#define SQLCA 1
 
struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ int     sqlabc;
         /* b4  */ int     sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ int     sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef   SQLCA_STORAGE_CLASS
SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif
 
#ifdef  SQLCA_INIT
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
#endif
         ;
#endif
 
#endif
 
/* end SQLCA */


char inf    [4][20];
char inf1   [4][20];
char inf2   [4][20];
char vselinf[4][4];
char vecinf [4][4];
char cnombre_emp[61];
                                            /* Variables globales del usuario */
int  con_pag=0;                                   /* Contador de Paginas */
int  con_lin=33;                                   /* Contador de Lineas  */
int  cl;
int  staora = 0;
int  staorai= 0;

        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[100];
char    wcadena[20];
char    cadena [200];
char    cadena2[200];
int     imp_nit;
char    ccuenta[20];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int     i;
double  j;
int	status = 0;

    if (argc < 5)
       {
	      printf ("Incorrecta invocacion:\n");
        printf ("Uso : egresos codigo_emp device egreso libro(0= COLGAAP 1=IFRS) userid/password\n");
      	printf ("      device : t salida por terminal\n");
      	printf ("      device : s salida standar     \n");
      	printf ("               Px salida por impresora (x nro printer)\n");
      	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (device,         argv[2]);
       strlow (device);
       ult_grabado =           atof(argv[3]);
       ult_listado =           ult_grabado-1;
       strcpy (libro.arr,      argv[4]);
       libro.len =             strlen(libro.arr);


    if (!strpos ("/", argv[5]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[5]);
    uid.len  = strlen( uid.arr );

/******************************************************
 * Establecer conexion concurrente con ORACLE (orlon) *
 ******************************************************/

    /* EXEC SQL CONNECT :uid; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )100;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&uid;
    sqlstm.sqhstl[0] = (unsigned int  )102;
    sqlstm.sqhsts[0] = (         int  )102;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
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
	   fprintf (stderr,"User Name/Password(%s) es Invalido. Re-intente.\n",uid.arr);
	   exit (1);
	  }
       else
          if (sqlca.sqlcode)
	     exit (1);

    busco_impresora(device);
    abre_impresora("1");

    strcpy (ano_mes.arr,    "200112");
    ano_mes.len    =        strlen(ano_mes.arr);
    /* C4 */
/*
    EXEC SQL select 8572, 8571

    EXEC SQL select consecutivo, ult_listado
             into  :ult_grabado, :ult_listado
	     from   control_egr
             where  codigo_emp = to_number(:codigo_emp);
*/
    /* EXEC SQL DECLARE C2 CURSOR FOR
             select cuenta, nvl(infa,' '), nvl(infb,' '), nvl(infc,' '), nvl(infd,' '),
                    codigo_nit, nvl(valor_deb,0), nvl(valor_cre,0),
                    d.consecutivo, d.secuencia
             from   movto_d d, movto_c c
             where  d.codigo_emp     = c.codigo_emp                  and
                    d.ano_mes        = c.ano_mes                     and
                    d.consecutivo    = c.consecutivo                 and
                    d.libro          = to_number(:libro)             and
                    c.codigo_emp     =  :codigo_emp                  and
                    c.clase          = 'EG'                          and
                    c.comprobante    = :numero_egreso                and
                    c.ano_mes       >= :ano_mes
             order by cuenta, secuencia; */ 


    /* EXEC SQL DECLARE C3 CURSOR FOR
         select cuenta, nvl(infa,' '), nvl(infb,' '), nvl(infc,' '), nvl(infd,' '),
                nvl(valor_deb,0), nvl(valor_cre,0)
         from   movto_d d, movto_c c
         where  d.codigo_emp     = c.codigo_emp                  and
                d.ano_mes        = c.ano_mes                     and
                d.consecutivo    = c.consecutivo                 and
                d.libro          = to_number(:libro)             and
                c.codigo_emp     = to_number(:codigo_emp)        and
                c.clase          = 'EG'                          and
                c.comprobante    = to_number(:numero_egreso)     and
                substr(cuenta,1,4) in ('1110','1120')            and
                valor_cre        is NOT NULL                     and
                c.ano_mes       >= :ano_mes; */ 


    /* EXEC SQL DECLARE C6 CURSOR FOR
             select decode(infa,inf,codigo_egr,''),
                    decode(infb,inf,codigo_egr,''),
                    decode(infc,inf,codigo_egr,''),
                    decode(infd,inf,codigo_egr,''),
                    infa,infb,infc,infd
             from inf, plan
             where inf.inf   in (infa, infb, infc, infd) and
                   codigo_emp = :codigo_emp              and
                   cuenta     = :cuentab; */ 

    ult_listado++;

    for (j=ult_listado;j<=ult_grabado;j++) {

         sprintf(numero_egreso.arr,"%8.0f",j);
         strtri (numero_egreso.arr);
         numero_egreso.len = strlen(numero_egreso.arr);
         lista_cuentas();
         for (i=1;i<=25-con_lin;i++) {
              fprintf (fp,"\n");
         }
         con_lin+=i;

         lista_cheques();

         for (i=1;i<=34-con_lin;i++) {
              fprintf (fp,"\n");
         }
         con_lin=33;

    }

    cierre_impresora();

/************************************************
 * Desconectarse de ORACLE. (ologof)            *
 ************************************************/
    exit   (0);
}

void lista_cuentas()
{
  int staora2;
  int mover;

  cuenta.arr  [cuenta.len] = '\0';

  /* EXEC SQL OPEN C2; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = sq0002;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )36;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&libro;
  sqlstm.sqhstl[0] = (unsigned int  )6;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[1] = (unsigned int  )8;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&numero_egreso;
  sqlstm.sqhstl[2] = (unsigned int  )22;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&ano_mes;
  sqlstm.sqhstl[3] = (unsigned int  )22;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  staora2 = 0;
  /* EXEC SQL FETCH C2 INTO :cuenta, :infa, :infb, :infc, :infd,
                         :codigo_nit2, :valor_deb, :valor_cre,
                         :consecutivo, :secuencia; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 10;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )67;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&cuenta;
  sqlstm.sqhstl[0] = (unsigned int  )22;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&infa;
  sqlstm.sqhstl[1] = (unsigned int  )22;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&infb;
  sqlstm.sqhstl[2] = (unsigned int  )22;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&infc;
  sqlstm.sqhstl[3] = (unsigned int  )22;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&infd;
  sqlstm.sqhstl[4] = (unsigned int  )22;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&codigo_nit2;
  sqlstm.sqhstl[5] = (unsigned int  )8;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&valor_deb;
  sqlstm.sqhstl[6] = (unsigned int  )8;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&valor_cre;
  sqlstm.sqhstl[7] = (unsigned int  )8;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&consecutivo;
  sqlstm.sqhstl[8] = (unsigned int  )8;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&secuencia;
  sqlstm.sqhstl[9] = (unsigned int  )8;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  strcpy(nombre_emp.arr,"");
  nombre_emp.arr  [nombre_emp.len] = '\0';
  strcpy(cnombre_emp,nombre_emp.arr);

  strcpy(cnombre_emp, nombre_emp.arr);
  strcpy(ccuenta, cuenta.arr);

  sqlca.sqlcode = 0;
  while (staora2 == 0) {
         staora2 = sqlca.sqlcode;
         if (staora2 ==  1403) break;
         if (staora2 == -1405)
             staora2  = 0;
         else if (staora2 != 1403 && staora2 != 0)
                  fprintf (stderr, "Error leyendo C2 (%d)\n", staora2);

         cuenta.arr  [cuenta.len] = '\0';
         infa.arr    [infa.len]   = '\0';
         infb.arr    [infb.len]   = '\0';
         infc.arr    [infc.len]   = '\0';
         infd.arr    [infd.len]   = '\0';
         strcpy(inf[0],  infa.arr);
         strcpy(inf[1],  infb.arr);
         strcpy(inf[2],  infc.arr);
         strcpy(inf[3],  infd.arr);

         if (!memcmp(cuenta.arr,"1110",4) || !memcmp(cuenta.arr,"1120",4)) {
             if (valor_deb > 0) {
                 imprima_ctas();
             }
             else {
                   mover = 1;
             }
         }
         else {
               imprima_ctas();
         }
         /* EXEC SQL FETCH C2 INTO :cuenta, :infa, :infb, :infc, :infd,
                                :codigo_nit2, :valor_deb, :valor_cre; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 10;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )122;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&cuenta;
         sqlstm.sqhstl[0] = (unsigned int  )22;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)&infa;
         sqlstm.sqhstl[1] = (unsigned int  )22;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&infb;
         sqlstm.sqhstl[2] = (unsigned int  )22;
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (         void  *)&infc;
         sqlstm.sqhstl[3] = (unsigned int  )22;
         sqlstm.sqhsts[3] = (         int  )0;
         sqlstm.sqindv[3] = (         void  *)0;
         sqlstm.sqinds[3] = (         int  )0;
         sqlstm.sqharm[3] = (unsigned int  )0;
         sqlstm.sqadto[3] = (unsigned short )0;
         sqlstm.sqtdso[3] = (unsigned short )0;
         sqlstm.sqhstv[4] = (         void  *)&infd;
         sqlstm.sqhstl[4] = (unsigned int  )22;
         sqlstm.sqhsts[4] = (         int  )0;
         sqlstm.sqindv[4] = (         void  *)0;
         sqlstm.sqinds[4] = (         int  )0;
         sqlstm.sqharm[4] = (unsigned int  )0;
         sqlstm.sqadto[4] = (unsigned short )0;
         sqlstm.sqtdso[4] = (unsigned short )0;
         sqlstm.sqhstv[5] = (         void  *)&codigo_nit2;
         sqlstm.sqhstl[5] = (unsigned int  )8;
         sqlstm.sqhsts[5] = (         int  )0;
         sqlstm.sqindv[5] = (         void  *)0;
         sqlstm.sqinds[5] = (         int  )0;
         sqlstm.sqharm[5] = (unsigned int  )0;
         sqlstm.sqadto[5] = (unsigned short )0;
         sqlstm.sqtdso[5] = (unsigned short )0;
         sqlstm.sqhstv[6] = (         void  *)&valor_deb;
         sqlstm.sqhstl[6] = (unsigned int  )8;
         sqlstm.sqhsts[6] = (         int  )0;
         sqlstm.sqindv[6] = (         void  *)0;
         sqlstm.sqinds[6] = (         int  )0;
         sqlstm.sqharm[6] = (unsigned int  )0;
         sqlstm.sqadto[6] = (unsigned short )0;
         sqlstm.sqtdso[6] = (unsigned short )0;
         sqlstm.sqhstv[7] = (         void  *)&valor_cre;
         sqlstm.sqhstl[7] = (unsigned int  )8;
         sqlstm.sqhsts[7] = (         int  )0;
         sqlstm.sqindv[7] = (         void  *)0;
         sqlstm.sqinds[7] = (         int  )0;
         sqlstm.sqharm[7] = (unsigned int  )0;
         sqlstm.sqadto[7] = (unsigned short )0;
         sqlstm.sqtdso[7] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



         if (mover == 1) {
             strcpy(ccuenta, cuenta.arr);
             strcpy(cnombre_emp,nombre_emp.arr);
             mover = 0;
         }
  }

  /* EXEC SQL CLOSE C2; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 10;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )169;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void imprima_ctas()
{
  int i, imp;

  if (con_lin > 25)
      titulos();
  strcpy  (cuentab.arr,cuenta.arr);
  cuentab.len = strlen(cuentab.arr);

  /* EXEC SQL OPEN C6; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 10;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = sq0004;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )184;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&cuentab;
  sqlstm.sqhstl[1] = (unsigned int  )22;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  for (i=0;i<4;i++) {
      strcpy(vecinf[i],"");
  }
  leer_inf();
  /* EXEC SQL CLOSE C6; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 10;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )207;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  imp=0;
  fprintf (fp,"%-12s",cuenta.arr);
  for (i=0;i<4;i++) {
      if (strcmp(vecinf[i],"*") && strcmp(vecinf[i],"=")) {
          if (strcmp(inf[i],"")) {
              if (strlen(inf[i])<=9) {
                  fprintf (fp,"%-2s%-9s",vecinf[i],inf[i]);
              }
              else {
                 fprintf (fp,"%-11s",inf[i]);
              }
              imp=1;
          }
          else {
               fprintf (fp,"%-2s%-9s"," "," ");
          }
      }
      else {
            fprintf (fp,"%-2s%-9s"," "," ");
      }
  }

  if (imp == 0) {
      imprime_nit();
      imprime_valor();
      fprintf(fp,"\n");
  }
  else {
        imprime_valor();
        if ( imp != 1 )
            imprime_nit();
        fprintf(fp,"\n");
  }
     con_lin++;
}

void imprime_valor()
{

  if (valor_deb != 0) {
      sprintf (cadena,"%9.2f",valor_deb);
      fprintf (fp,"%15s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
  }
  else {
        sprintf (cadena,"%9.2f",valor_cre);
        fprintf (fp,"%15s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
  }
}

void leer_inf()
{
  int i;
  staorai = 0;

  while (staorai==0) {
         /* EXEC SQL FETCH C6 INTO :vselinfa, :vselinfb, :vselinfc,
                                :vselinfd, :inf2a, :inf2b, :inf2c, :inf2d; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 10;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )222;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&vselinfa;
         sqlstm.sqhstl[0] = (unsigned int  )22;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)&vselinfb;
         sqlstm.sqhstl[1] = (unsigned int  )22;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&vselinfc;
         sqlstm.sqhstl[2] = (unsigned int  )22;
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (         void  *)&vselinfd;
         sqlstm.sqhstl[3] = (unsigned int  )22;
         sqlstm.sqhsts[3] = (         int  )0;
         sqlstm.sqindv[3] = (         void  *)0;
         sqlstm.sqinds[3] = (         int  )0;
         sqlstm.sqharm[3] = (unsigned int  )0;
         sqlstm.sqadto[3] = (unsigned short )0;
         sqlstm.sqtdso[3] = (unsigned short )0;
         sqlstm.sqhstv[4] = (         void  *)&inf2a;
         sqlstm.sqhstl[4] = (unsigned int  )22;
         sqlstm.sqhsts[4] = (         int  )0;
         sqlstm.sqindv[4] = (         void  *)0;
         sqlstm.sqinds[4] = (         int  )0;
         sqlstm.sqharm[4] = (unsigned int  )0;
         sqlstm.sqadto[4] = (unsigned short )0;
         sqlstm.sqtdso[4] = (unsigned short )0;
         sqlstm.sqhstv[5] = (         void  *)&inf2b;
         sqlstm.sqhstl[5] = (unsigned int  )22;
         sqlstm.sqhsts[5] = (         int  )0;
         sqlstm.sqindv[5] = (         void  *)0;
         sqlstm.sqinds[5] = (         int  )0;
         sqlstm.sqharm[5] = (unsigned int  )0;
         sqlstm.sqadto[5] = (unsigned short )0;
         sqlstm.sqtdso[5] = (unsigned short )0;
         sqlstm.sqhstv[6] = (         void  *)&inf2c;
         sqlstm.sqhstl[6] = (unsigned int  )22;
         sqlstm.sqhsts[6] = (         int  )0;
         sqlstm.sqindv[6] = (         void  *)0;
         sqlstm.sqinds[6] = (         int  )0;
         sqlstm.sqharm[6] = (unsigned int  )0;
         sqlstm.sqadto[6] = (unsigned short )0;
         sqlstm.sqtdso[6] = (unsigned short )0;
         sqlstm.sqhstv[7] = (         void  *)&inf2d;
         sqlstm.sqhstl[7] = (unsigned int  )22;
         sqlstm.sqhsts[7] = (         int  )0;
         sqlstm.sqindv[7] = (         void  *)0;
         sqlstm.sqinds[7] = (         int  )0;
         sqlstm.sqharm[7] = (unsigned int  )0;
         sqlstm.sqadto[7] = (unsigned short )0;
         sqlstm.sqtdso[7] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



         staorai  = sqlca.sqlcode;
         if (staorai ==  1403) break;
         if (staorai == -1405)
             staorai  = 0;
         else if (staorai != 1403 && staorai != 0)
                  fprintf (stderr, "Error leyendo C6 (%d)\n", staorai);

         vselinfa.arr[vselinfa.len] = '\0';
         vselinfb.arr[vselinfb.len] = '\0';
         vselinfc.arr[vselinfc.len] = '\0';
         vselinfd.arr[vselinfd.len] = '\0';
         inf2a.arr   [inf2a.len]    = '\0';
         inf2b.arr   [inf2b.len]    = '\0';
         inf2c.arr   [inf2c.len]    = '\0';
         inf2d.arr   [inf2d.len]    = '\0';
         strcpy(vselinf[0],vselinfa.arr);
         strcpy(vselinf[1],vselinfb.arr);
         strcpy(vselinf[2],vselinfc.arr);
         strcpy(vselinf[3],vselinfd.arr);
         strcpy(inf2   [0],inf2a.arr);
         strcpy(inf2   [1],inf2b.arr);
         strcpy(inf2   [2],inf2c.arr);
         strcpy(inf2   [3],inf2d.arr);

         for (i=0;i<4;i++) {
              if (strcmp(vselinf[i],"")) {
                  strcpy(vecinf[i],vselinf[i]);
                  i=5;
              }
         }
  }
}

void imprime_nit()
{
  int i;
  imp_nit=0;
  for (i=0;i<4;i++) {
      if (!strcmp(vecinf[i],"=")) {
          if (!strcmp(inf2[i],"NIT")) {
              if (codigo_nit != codigo_nit2) {
                  imp_nit=1;
                  leer_nit();
                  fprintf(fp,"\r            %-44s",nomb_nit.arr);
              }
          }
      }
  }
}

void leer_nit()
{
  sprintf(codigo_nitb.arr,"%5.0f",codigo_nit2);
  codigo_nitb.len =    strlen(codigo_nitb.arr);

  /* EXEC SQL select nombre
           into :nomb_nit
           from   nits
           where  codigo_nit = to_number(:codigo_nitb); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 10;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select nombre into :b0  from nits where codigo_nit=to_numbe\
r(:b1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )269;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&nomb_nit;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&codigo_nitb;
  sqlstm.sqhstl[1] = (unsigned int  )22;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
      fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);

  nomb_nit.arr  [nomb_nit.len] = '\0';
}

void lista_cheques()
{
  /* EXEC SQL OPEN C3; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 10;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = sq0003;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )292;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&libro;
  sqlstm.sqhstl[0] = (unsigned int  )6;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[1] = (unsigned int  )8;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&numero_egreso;
  sqlstm.sqhstl[2] = (unsigned int  )22;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&ano_mes;
  sqlstm.sqhstl[3] = (unsigned int  )22;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  staora = 0;
  while (staora==0) {
         /* EXEC SQL FETCH C3 INTO :cuenta1, :inf1a, :inf1b, :inf1c, :inf1d,
                                :valor_deb, :valor_cre; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 10;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )323;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&cuenta1;
         sqlstm.sqhstl[0] = (unsigned int  )22;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)&inf1a;
         sqlstm.sqhstl[1] = (unsigned int  )22;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&inf1b;
         sqlstm.sqhstl[2] = (unsigned int  )22;
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (         void  *)&inf1c;
         sqlstm.sqhstl[3] = (unsigned int  )22;
         sqlstm.sqhsts[3] = (         int  )0;
         sqlstm.sqindv[3] = (         void  *)0;
         sqlstm.sqinds[3] = (         int  )0;
         sqlstm.sqharm[3] = (unsigned int  )0;
         sqlstm.sqadto[3] = (unsigned short )0;
         sqlstm.sqtdso[3] = (unsigned short )0;
         sqlstm.sqhstv[4] = (         void  *)&inf1d;
         sqlstm.sqhstl[4] = (unsigned int  )22;
         sqlstm.sqhsts[4] = (         int  )0;
         sqlstm.sqindv[4] = (         void  *)0;
         sqlstm.sqinds[4] = (         int  )0;
         sqlstm.sqharm[4] = (unsigned int  )0;
         sqlstm.sqadto[4] = (unsigned short )0;
         sqlstm.sqtdso[4] = (unsigned short )0;
         sqlstm.sqhstv[5] = (         void  *)&valor_deb;
         sqlstm.sqhstl[5] = (unsigned int  )8;
         sqlstm.sqhsts[5] = (         int  )0;
         sqlstm.sqindv[5] = (         void  *)0;
         sqlstm.sqinds[5] = (         int  )0;
         sqlstm.sqharm[5] = (unsigned int  )0;
         sqlstm.sqadto[5] = (unsigned short )0;
         sqlstm.sqtdso[5] = (unsigned short )0;
         sqlstm.sqhstv[6] = (         void  *)&valor_cre;
         sqlstm.sqhstl[6] = (unsigned int  )8;
         sqlstm.sqhsts[6] = (         int  )0;
         sqlstm.sqindv[6] = (         void  *)0;
         sqlstm.sqinds[6] = (         int  )0;
         sqlstm.sqharm[6] = (unsigned int  )0;
         sqlstm.sqadto[6] = (unsigned short )0;
         sqlstm.sqtdso[6] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



         staora  = sqlca.sqlcode;
         if (staora ==  1403) break;
         if (staora == -1405)
             staora  = 0;
         else if (staora != 1403 && staora != 0)
                  fprintf (stderr, "Error leyendo C3 (%d)\n", staora);

         cuenta1.arr [cuenta1.len] = '\0';
         inf1a.arr  [inf1a.len]    = '\0';
         inf1b.arr  [inf1b.len]    = '\0';
         inf1c.arr  [inf1c.len]    = '\0';
         inf1d.arr  [inf1d.len]    = '\0';

         strcpy (inf1[0], inf1a.arr);
         strcpy (inf1[1], inf1b.arr);
         strcpy (inf1[2], inf1c.arr);
         strcpy (inf1[3], inf1d.arr);

         fprintf (fp,"%-9s",cuenta1.arr);
         fprintf (fp,"%8s ",inf1[2]);
         strcpy  (cadena,cuenta1.arr);
         strorg  (cadena,7,2);
         fprintf (fp,"%2s ",cadena);
         fprintf (fp,"%6s",inf1[0]);
         if (!strcmp(inf1[1],"ANULADO")) {
            fprintf (fp,"%14s\n",inf1[1]);
         }
         else {
              sprintf (cadena,"%9.2f",valor_cre);
              fprintf (fp,"%14s\n",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
         }
         con_lin++;
  }
  /* EXEC SQL CLOSE C3; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 10;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )366;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
    /* C1 */
    /* EXEC SQL select fecha, codigo_nit, nitb, nombre, nvl(valorb,0), descripcion
             into  :fecha, :codigo_nit, :nit, :nombre, :valor_cheques, :concepto
	     from   movto_c c, nits n
             where  c.comprobante    =  :numero_egreso       and
                    c.clase          = 'EG'                  and
                    c.codigo_emp     =  :codigo_emp          and
                    c.codigo_nitb    = n.codigo_nit          and
                    c.ano_mes       >= :ano_mes; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 10;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select fecha ,codigo_nit ,nitb ,nombre ,nvl(valorb,0) ,de\
scripcion into :b0,:b1,:b2,:b3,:b4,:b5  from movto_c c ,nits n where ((((c.com\
probante=:b6 and c.clase='EG') and c.codigo_emp=:b7) and c.codigo_nitb=n.codig\
o_nit) and c.ano_mes>=:b8)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )381;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&fecha;
    sqlstm.sqhstl[0] = (unsigned int  )22;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&codigo_nit;
    sqlstm.sqhstl[1] = (unsigned int  )8;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&nit;
    sqlstm.sqhstl[2] = (unsigned int  )8;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&nombre;
    sqlstm.sqhstl[3] = (unsigned int  )102;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&valor_cheques;
    sqlstm.sqhstl[4] = (unsigned int  )8;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&concepto;
    sqlstm.sqhstl[5] = (unsigned int  )102;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&numero_egreso;
    sqlstm.sqhstl[6] = (unsigned int  )22;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[7] = (unsigned int  )8;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         void  *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned int  )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (         void  *)&ano_mes;
    sqlstm.sqhstl[8] = (unsigned int  )22;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         void  *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned int  )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo C1 (%d)\n", sqlca.sqlcode);

    fecha.arr    [fecha.len]    = '\0';
    nombre.arr   [nombre.len]   = '\0';
    concepto.arr [concepto.len] = '\0';

    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    fecha_numero3(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"%s\n%28s\n%s%s%71s\n\n",ancho_on,numero_egreso.arr,ancho_off,diezcpi,cadena);
    fprintf (fp,"%-56s",nombre.arr);
    sprintf (cadena,"%12.0f",nit);
    fprintf (fp,"%15s\n\n",fmtnum("zzz,zzz,zzz,zzz",cadena,r_t));
    monletr (valor_cheques,cadena);
    fprintf (fp,"%s%-96s%s",condensado_on,cadena,condensado_off);
    sprintf (cadena,"%9.2f",valor_cheques);
    fprintf (fp,"%15s\n\n\n\n",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
    fprintf (fp,"%12s%s\n"," ",concepto.arr);
    con_lin = 11;
}
