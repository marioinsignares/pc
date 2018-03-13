
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
           char  filnam[12];
};
static const struct sqlcxp sqlfpn =
{
    11,
    ".\\cierre.pc"
};


static unsigned long sqlctx = 130019;


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
            void  *sqhstv[15];
   unsigned int   sqhstl[15];
            int   sqhsts[15];
            void  *sqindv[15];
            int   sqinds[15];
   unsigned int   sqharm[15];
   unsigned int   *sqharc[15];
   unsigned short  sqadto[15];
   unsigned short  sqtdso[15];
} sqlstm = {10,15};

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
"select inf  from infacu            ";

 static const char *sq0003 = 
"select a.cuenta ,c.imputa ,c.nit ,c.codigo_nit ,a.codigo_nit ,n.nit ,sum((nv\
l(a.valor_deb,0)-nvl(a.valor_cre,0))) ,last_day(to_date(:b0,'yymm')) ,a.codigo\
 ,c.cod_var ,a.sucursal ,a.cen_cos  from acumulanit a ,cierre c ,nits n where \
((((((a.codigo_emp=:b1 and a.codigo_emp=c.codigo_emp) and a.ano_mes>=:b2) and \
a.ano_mes<=:b0) and a.cuenta=c.cuenta) and a.libro=to_number(:b4)) and a.codig\
o_nit=n.codigo_nit) group by a.cuenta,c.imputa,c.nit,c.codigo_nit,a.codigo_nit\
,n.nit,a.codigo,c.cod_var,a.sucursal,a.cen_cos order by a.cuenta            ";

 static const char *sq0004 = 
"select c.consecutivo  from movto_c c ,movto_d d where ((((((((c.codigo_emp=t\
o_number(:b0) and c.comprobante=to_number(:b1)) and c.clase='CD') and c.tipo='\
7') and c.ano_mes=to_number(:b2)) and c.codigo_emp=d.codigo_emp) and c.ano_mes\
=d.ano_mes) and c.consecutivo=d.consecutivo) and d.libro=to_number(:b3)) group\
 by c.consecutivo           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,145,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,35,0,9,189,0,0,0,0,0,1,0,
51,0,0,2,0,0,13,196,0,0,1,0,0,1,0,2,9,0,0,
70,0,0,2,0,0,15,214,0,0,0,0,0,1,0,
85,0,0,3,542,0,9,249,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
120,0,0,3,0,0,15,255,0,0,0,0,0,1,0,
135,0,0,5,0,0,30,258,0,0,0,0,0,1,0,
150,0,0,4,338,0,9,270,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
181,0,0,4,0,0,13,271,0,0,1,0,0,1,0,2,4,0,0,
200,0,0,4,0,0,15,272,0,0,0,0,0,1,0,
215,0,0,6,142,0,2,288,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
246,0,0,7,180,0,2,297,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
277,0,0,8,138,0,4,314,0,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
308,0,0,9,121,0,3,328,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
339,0,0,10,117,0,5,340,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
370,0,0,11,134,0,4,350,0,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
401,0,0,12,121,0,3,360,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
432,0,0,13,117,0,5,369,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
463,0,0,3,0,0,13,376,0,0,12,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
526,0,0,14,224,0,3,390,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
561,0,0,15,347,0,3,466,0,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
636,0,0,16,347,0,3,556,0,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
711,0,0,17,347,0,3,653,0,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
786,0,0,18,347,0,3,747,0,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
861,0,0,3,0,0,13,800,0,0,10,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
916,0,0,19,62,0,4,820,0,0,2,1,0,1,0,2,4,0,0,1,9,0,0,
939,0,0,20,99,0,4,825,0,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,
9,0,0,
};


/*****************************************************************
* CIERRE.PC Version 1.0 - Rev 1.2 - Feb. 14/02.
*
* cierre.pc. Cierre de otras cuentas
*
* Uso: ajusteinf codigo_emp aamm device copias userid/password
*
* Mario Santiago I. Creado en Febrero 14 de 2.002.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <math.h>

double redondo();

void hacer_asiento();
void ver_inf();

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Empresa (C1) */
/* VARCHAR nomb_emp    [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nomb_emp;

int     digito;
int     a2k;
/* VARCHAR codigo_emp  [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

                                 /* Infacu (C2) */
/* VARCHAR vecinf      [20][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } vecinf[20];

                                 /* Movto_C (C3) */
/* VARCHAR ano_mesf    [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } ano_mesf;

/* VARCHAR comprobanteb[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } comprobanteb;

/* VARCHAR consecutivob[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } consecutivob;

/* VARCHAR fechab      [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } fechab;

                                 /* Movto_D (C4) */
/* VARCHAR secuenciab  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } secuenciab;

/* VARCHAR cuentab     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuentab;

/* VARCHAR infa        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infa;

/* VARCHAR infb        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infb;

/* VARCHAR infc        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infc;

/* VARCHAR infd        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infd;

/* VARCHAR codigo_nitb [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_nitb;

/* VARCHAR valor_debb  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } valor_debb;

/* VARCHAR valor_creb  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } valor_creb;

char    inf         [5][20];
                                 /* Control_Mes (C5) */
double  consecutivo;
/* VARCHAR fuenteb     [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } fuenteb;

double  consecutivo14;
                                 /* Acumulados (C6) */
/* VARCHAR cuenta      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuenta;

/* VARCHAR imputa      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } imputa;

double  valor;
double  nit;
double  nitc;
float   cod_nitc;
float   codigo_nit;
/* VARCHAR fecha_asto  [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } fecha_asto;

/* VARCHAR ano_mesi    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR ano_mes     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR codigovar   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigovar;

/* VARCHAR cod_var     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cod_var;

/* VARCHAR codigo      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo;

                                 /* Plan (C8) */
/* VARCHAR veca        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } veca;

/* VARCHAR vecb        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecb;

/* VARCHAR vecc        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecc;

/* VARCHAR vecd        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecd;

char    vecplan     [5][20];

/* VARCHAR sucursal    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } sucursal;

/* VARCHAR cen_cos     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cen_cos;

/* VARCHAR libro       [04]; */ 
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

				     /* Parametros de comunicacion con ORACLE */
                                            /* Variables globales del usuario */
char    pagina[4];                                   /* Contador de Paginas */
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                  /* Contador de Lineas  */
int     cl;
int     staora     =0;
int     traidos    =0;
int     num_ret    =0;
int     loop_2     =0;
double  secuencia  =0;
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[100];
int     diai;
int     mesx, mesi, mesf;
int     anox, anoi, anof;
int     i, j, k;
char    cadena[200];
char    login[30];
char    copias[5];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 7)
       {
	      printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp aaaamm copias device nro_cpbte libro userid/password\n");
      	printf ("      device : t salida por terminal\n");
      	printf ("      device : s salida standar     \n");
      	printf ("               Px salida por impresora (x nro printer)\n");
        printf ("      libro(0= COLGAAP 1=IFRS)\n");
	      printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (copias,         argv[3]);
       strcpy (device,         argv[4]);
       strlow (device);
       strcpy (comprobanteb.arr, argv[5]);
       comprobanteb.len =      strlen(comprobanteb.arr);
       strcpy (libro.arr, argv[6]);
       libro.len =        strlen(libro.arr);

    if (!strpos ("/", argv[7]))
       {
        printf ("user id/password incorrecto.\n");
	      exit (1);
       }

    strcpy (uid.arr,    argv[7]);
    uid.len =           strlen(uid.arr);

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
	   fprintf (stderr,"User Name/Password es Invalido. Re-intente.\n");
	   exit (1);
	  }
       else
          if (sqlca.sqlcode)
	     exit (1);

    busco_impresora(device);
    abre_impresora(copias);

/*********************************************
 * Procesar una sentencia SQL (oexec).       *
 *********************************************/
    strcpy (ano_mes.arr,   argv[2]);
    ano_mes.len = strlen(ano_mes.arr);
    strcpy (cadena,argv[2]);
    strorg (cadena,1,4);
    anoi         =        atoi(cadena);
    strcpy (cadena,argv[2]);
    strorg (cadena,5,2);
    mesi         =        atoi(cadena);
    sprintf (ano_mesi.arr,"%04d%02d",anoi-1,13);
    ano_mesi.len = strlen(ano_mesi.arr);

    anof=anoi;
    mesf=13;
    sprintf (ano_mesf.arr,"%d%02d",anof,mesf);
    ano_mesf.len =       strlen(ano_mesf.arr);

    /* EXEC SQL DECLARE C2 CURSOR FOR
             select inf
             from   infacu; */ 


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
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = 0;
    traidos = 0;
    num_ret = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C2 INTO :vecinf; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )20;
          sqlstm.offset = (unsigned int  )51;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (         void  *)vecinf;
          sqlstm.sqhstl[0] = (unsigned int  )22;
          sqlstm.sqhsts[0] = (         int  )24;
          sqlstm.sqindv[0] = (         void  *)0;
          sqlstm.sqinds[0] = (         int  )0;
          sqlstm.sqharm[0] = (unsigned int  )0;
          sqlstm.sqharc[0] = (unsigned int   *)0;
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



          if ( sqlca.sqlcode != 1403 && sqlca.sqlcode != 0 && sqlca.sqlcode != -1405 )
             fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);
          else {
               if (sqlca.sqlcode == -1405)
                  staora = 0;
               else staora  = sqlca.sqlcode;
          }

          traidos = sqlca.sqlerrd[2];

          for (loop_2 = 0; loop_2 < (traidos - num_ret); loop_2++) {
              vecinf[loop_2].arr  [vecinf[loop_2].len] = '\0';
          }
          num_ret = traidos;
    }
    k = traidos;
    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )70;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL DECLARE C6 CURSOR FOR
             select a.cuenta, c.imputa, c.nit, c.codigo_nit, a.codigo_nit,
                    n.nit,
                    sum(nvl(a.valor_deb,0)-nvl(a.valor_cre,0)),
                    last_day(to_date(:ano_mes,'yymm')),
                    a.codigo, c.cod_var,
                    a.sucursal, a.cen_cos
             from  acumulanit a, cierre c, nits n
             where a.codigo_emp =  :codigo_emp                         and
                   a.codigo_emp = c.codigo_emp                         and
                   a.ano_mes   >=  :ano_mesi                           and
                   a.ano_mes   <=  :ano_mes                            and
                   a.cuenta     = c.cuenta                             and
                   a.libro      = to_number(:libro)                    and
                   a.codigo_nit = n.codigo_nit
             group by a.cuenta, c.imputa, c.nit, c.codigo_nit, a.codigo_nit,
                      n.nit, a.codigo, c.cod_var, a.sucursal, a.cen_cos
             order by a.cuenta; */ 


    /* EXEC SQL DECLARE C7 CURSOR FOR
        select c.consecutivo
        from movto_c c, movto_d d
        where c.codigo_emp   = to_number(:codigo_emp)   and
              c.comprobante  = to_number(:comprobanteb) and
              c.clase        = 'CD'                     and
              c.tipo         = '7'                      and
              c.ano_mes      = to_number(:ano_mesf)     and
              c.codigo_emp   = d.codigo_emp             and
              c.ano_mes      = d.ano_mes                and
              c.consecutivo  = d.consecutivo            and
              d.libro        = to_number(:libro)
        group by c.consecutivo; */ 


    /* EXEC SQL OPEN C6; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )85;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&ano_mes;
    sqlstm.sqhstl[0] = (unsigned int  )22;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[1] = (unsigned int  )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&ano_mesi;
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
    sqlstm.sqhstv[4] = (         void  *)&libro;
    sqlstm.sqhstl[4] = (unsigned int  )6;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
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



    hacer_asiento();

    cierre_impresora();

    /* EXEC SQL CLOSE C6; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )120;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



//    EXEC SQL ROLLBACK;
    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )135;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    exit   (0);
}

void hacer_asiento()
{
  strcpy(fuenteb.arr,"14");
  fuenteb.len = strlen(fuenteb.arr);

 /* Lee consecutivo de control_mes Fte 14 Cns ultimo Asiento Cierre otras cuentas */
  
  /* EXEC SQL OPEN C7; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = sq0004;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )150;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned int  )5;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&comprobanteb;
  sqlstm.sqhstl[1] = (unsigned int  )22;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
  sqlstm.sqhstl[2] = (unsigned int  )32;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&libro;
  sqlstm.sqhstl[3] = (unsigned int  )6;
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


  /* EXEC SQL FETCH C7 INTO :consecutivo14; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )181;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&consecutivo14;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
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


  /* EXEC SQL CLOSE C7; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )200;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


/*
  EXEC SQL select consecutivo   into :consecutivo14
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesf)      and
                 codigo_emp   = to_number(:codigo_emp);
*/
  if ( sqlca.sqlcode != 1403 && sqlca.sqlcode != 0 && sqlca.sqlcode != -1405 )
      fprintf (stderr, "Error leyendo Control_Mes (%d)\n", sqlca.sqlcode);
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo14);
        consecutivob.len = strlen(consecutivob.arr);

//        printf("<%s> <%s> <%s> ", codigo_emp.arr, ano_mesf.arr, consecutivob.arr); getchar();

        /* EXEC SQL delete from movto_d
                 where codigo_emp   = to_number(:codigo_emp)   and
                       ano_mes      = to_number(:ano_mesf)     and
                       libro        = to_number(:libro)        and
                       consecutivo  = to_number(:consecutivob); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "delete  from movto_d  where (((codigo_emp=to_number(:\
b0) and ano_mes=to_number(:b1)) and libro=to_number(:b2)) and consecutivo=to_n\
umber(:b3))";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )215;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned int  )5;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&ano_mesf;
        sqlstm.sqhstl[1] = (unsigned int  )32;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&libro;
        sqlstm.sqhstl[2] = (unsigned int  )6;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&consecutivob;
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



        if ( sqlca.sqlcode != 1403 && sqlca.sqlcode != 0 && sqlca.sqlcode != -1405 )
            fprintf (stderr, "Error leyendo Movto_D (%d)\n", sqlca.sqlcode);

        /* EXEC SQL delete from movto_c
                 where codigo_emp   = to_number(:codigo_emp)   and
                       comprobante  = to_number(:comprobanteb) and
                       clase        = 'CD'                     and
                       tipo         = '7'                      and
                       ano_mes      = to_number(:ano_mesf)     and
                       consecutivo  = to_number(:consecutivob); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "delete  from movto_c  where (((((codigo_emp=to_number\
(:b0) and comprobante=to_number(:b1)) and clase='CD') and tipo='7') and ano_me\
s=to_number(:b2)) and consecutivo=to_number(:b3))";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )246;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned int  )5;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&comprobanteb;
        sqlstm.sqhstl[1] = (unsigned int  )22;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
        sqlstm.sqhstl[2] = (unsigned int  )32;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&consecutivob;
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



        if ( sqlca.sqlcode != 1403 && sqlca.sqlcode != 0 && sqlca.sqlcode != -1405 )
            fprintf (stderr, "Error leyendo Movto_Cx (%d)\n", sqlca.sqlcode);
  }

  strcpy(fuenteb.arr,"08");
  fuenteb.len = strlen(fuenteb.arr);

  /* Lee consecutivo de Control_mes Fte 08 sgte consecutivo */

  /* EXEC SQL select consecutivo+1 into :consecutivo
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesf)      and
                 codigo_emp   = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select (consecutivo+1) into :b0  from control_mes where ((f\
uente=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3)\
)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )277;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&consecutivo;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&fuenteb;
  sqlstm.sqhstl[1] = (unsigned int  )5;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
  sqlstm.sqhstl[2] = (unsigned int  )32;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[3] = (unsigned int  )5;
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



  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes 08 (%d)\n", sqlca.sqlcode);
      consecutivo=1;
      sprintf(consecutivob.arr,"%5.0f",consecutivo);
      consecutivob.len = strlen(consecutivob.arr);
               /* Inserta en Control_Mes Fte 08 si no existe (C11) */

      /* EXEC SQL insert into control_mes
               values (to_number(:fuenteb), 
                       to_number(:ano_mesf), 
                       'CONTROL CIERRE OTR. CTAS', 
                       to_number(:consecutivob), 
                       to_number(:codigo_emp), 
                       0); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into control_mes values (to_number(:b0),to_numbe\
r(:b1),'CONTROL CIERRE OTR. CTAS',to_number(:b2),to_number(:b3),0)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )308;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&fuenteb;
      sqlstm.sqhstl[0] = (unsigned int  )5;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&ano_mesf;
      sqlstm.sqhstl[1] = (unsigned int  )32;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&consecutivob;
      sqlstm.sqhstl[2] = (unsigned int  )22;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned int  )5;
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


     }
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo);
        consecutivob.len = strlen(consecutivob.arr);
               /* Actualiza Cns de Fte 08 en control_mes (C12) */
        /* EXEC SQL update control_mes
                 set    consecutivo = :consecutivob
                 where codigo_emp   = to_number(:codigo_emp)    and
                       ano_mes      = to_number(:ano_mesf)      and
                       fuente       = :fuenteb; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((codig\
o_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3)";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )339;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&consecutivob;
        sqlstm.sqhstl[0] = (unsigned int  )22;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
        sqlstm.sqhstl[1] = (unsigned int  )5;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
        sqlstm.sqhstl[2] = (unsigned int  )32;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&fuenteb;
        sqlstm.sqhstl[3] = (unsigned int  )5;
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


  }

  strcpy(fuenteb.arr,"14");
  fuenteb.len = strlen(fuenteb.arr);

  /* EXEC SQL select consecutivo   into :consecutivo14
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesf)      and
                 codigo_emp   = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )370;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&consecutivo14;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&fuenteb;
  sqlstm.sqhstl[1] = (unsigned int  )5;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
  sqlstm.sqhstl[2] = (unsigned int  )32;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[3] = (unsigned int  )5;
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



  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes 14 (%d)\n", sqlca.sqlcode);
               /* Inserta en Control_Mes Fte 14 si no existe (C11) */
      /* EXEC SQL insert into control_mes
               values (to_number(:fuenteb), 
                       to_number(:ano_mesf), 
                       'CONTROL CIERRE OTR. CTAS',
                       to_number(:consecutivob), 
                       to_number(:codigo_emp), 0); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into control_mes values (to_number(:b0),to_numbe\
r(:b1),'CONTROL CIERRE OTR. CTAS',to_number(:b2),to_number(:b3),0)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )401;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&fuenteb;
      sqlstm.sqhstl[0] = (unsigned int  )5;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&ano_mesf;
      sqlstm.sqhstl[1] = (unsigned int  )32;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&consecutivob;
      sqlstm.sqhstl[2] = (unsigned int  )22;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned int  )5;
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


     }
  else {
               /* Actualiza Cns de Fte 14 en control_mes (C12) */
        /* EXEC SQL update control_mes
                 set    consecutivo = :consecutivob
                 where codigo_emp   = to_number(:codigo_emp)    and
                       ano_mes      = to_number(:ano_mesf)      and
                       fuente       = :fuenteb; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((codig\
o_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3)";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )432;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&consecutivob;
        sqlstm.sqhstl[0] = (unsigned int  )22;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
        sqlstm.sqhstl[1] = (unsigned int  )5;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
        sqlstm.sqhstl[2] = (unsigned int  )32;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&fuenteb;
        sqlstm.sqhstl[3] = (unsigned int  )5;
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


  }

  /* EXEC SQL FETCH C6 INTO :cuenta, :imputa, :nitc, :cod_nitc, :codigo_nit, :nit, :valor, :fecha_asto, :codigo, :cod_var, :sucursal, :cen_cos; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 12;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )463;
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
  sqlstm.sqhstv[1] = (         void  *)&imputa;
  sqlstm.sqhstl[1] = (unsigned int  )22;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&nitc;
  sqlstm.sqhstl[2] = (unsigned int  )8;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&cod_nitc;
  sqlstm.sqhstl[3] = (unsigned int  )4;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&codigo_nit;
  sqlstm.sqhstl[4] = (unsigned int  )4;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&nit;
  sqlstm.sqhstl[5] = (unsigned int  )8;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&valor;
  sqlstm.sqhstl[6] = (unsigned int  )8;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&fecha_asto;
  sqlstm.sqhstl[7] = (unsigned int  )32;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&codigo;
  sqlstm.sqhstl[8] = (unsigned int  )22;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&cod_var;
  sqlstm.sqhstl[9] = (unsigned int  )22;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&sucursal;
  sqlstm.sqhstl[10] = (unsigned int  )22;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&cen_cos;
  sqlstm.sqhstl[11] = (unsigned int  )22;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)0;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
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



  cuenta.arr      [cuenta.len]     = '\0';
  imputa.arr      [imputa.len]     = '\0';
  fecha_asto.arr  [fecha_asto.len] = '\0';
  codigo.arr      [codigo.len]     = '\0';
  cod_var.arr     [cod_var.len]    = '\0';
  sucursal.arr    [sucursal.len]   = '\0';
  cen_cos.arr     [cen_cos.len]    = '\0';
  strcpy(fechab.arr,fecha_asto.arr);
  fechab.len = strlen(fechab.arr);

//  printf("1) %s %s %13.0f %6.0f %6.0f %15.0f %s",cuenta.arr, imputa.arr, nitc, cod_nitc, codigo_nit, valor, fecha_asto.arr); getchar();

  /* EXEC SQL insert into movto_c
           (CODIGO_EMP,
      	    ANO_MES,
      	    COMPROBANTE,
      	    CONSECUTIVO,
      	    CLASE,
      	    DESCRIPCION,
      	    FECHA,
      	    TIPO,
      	    ESTADO,
      	    NITB,
      	    CODIGO_NITB,
      	    VALORB,
      	    RETENCION,
      	    CONTADO)
           values(:codigo_emp, :ano_mesf, :comprobanteb, :consecutivob, 'CD',
                  'CIERRE DE OTRAS CUENTAS',:fechab,'7', '0','','','','',''); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 12;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into movto_c(CODIGO_EMP,ANO_MES,COMPROBANTE,CONSECUT\
IVO,CLASE,DESCRIPCION,FECHA,TIPO,ESTADO,NITB,CODIGO_NITB,VALORB,RETENCION,CONT\
ADO) values (:b0,:b1,:b2,:b3,'CD','CIERRE DE OTRAS CUENTAS',:b4,'7','0','','',\
'','','')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )526;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned int  )5;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&ano_mesf;
  sqlstm.sqhstl[1] = (unsigned int  )32;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&comprobanteb;
  sqlstm.sqhstl[2] = (unsigned int  )22;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&consecutivob;
  sqlstm.sqhstl[3] = (unsigned int  )22;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&fechab;
  sqlstm.sqhstl[4] = (unsigned int  )32;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
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



  if ( sqlca.sqlcode != 1403 && sqlca.sqlcode != 0 && sqlca.sqlcode != -1405 )
      fprintf (stderr, "Error leyendo Movto_Cy (%d)\n", sqlca.sqlcode);

  staora  = 0;
  while (staora == 0) {

        cuenta.arr      [cuenta.len]     = '\0';
        imputa.arr      [imputa.len]     = '\0';
        fecha_asto.arr  [fecha_asto.len] = '\0';
        codigo.arr      [codigo.len]     = '\0';
        cod_var.arr     [cod_var.len]    = '\0';
//  printf("2) %s %s %s %s %s %s",codigo_emp.arr, ano_mesf.arr, comprobanteb.arr, consecutivob.arr, fechab.arr, fecha_asto.arr); getchar();

        if (valor > 0) {
//           printf("valor <%10.2f> mayor de 0", valor ); getchar();
           secuencia++;
           sprintf(secuenciab.arr,"%6.0f",secuencia);
           secuenciab.len = strlen(secuenciab.arr);

           if (cod_nitc==0)
              strcpy(codigo_nitb.arr,"");
           else sprintf(codigo_nitb.arr,"%5.0f",cod_nitc);
           codigo_nitb.len = strlen(codigo_nitb.arr);

           if (!strcmp(cod_var.arr,"")) {
              strcpy(codigovar.arr,imputa.arr);
              codigovar.len = strlen(codigovar.arr);
           }
           else {
                 strcpy(codigovar.arr,cod_var.arr);
                 codigovar.len = strlen(cod_var.arr);
           }

           strcpy(cuentab.arr,imputa.arr);
           cuentab.len = strlen(cuentab.arr);

           ver_inf();

           sprintf(valor_debb.arr,"%10.2f",valor);
           valor_debb.len = strlen(valor_debb.arr);

           strcpy (valor_creb.arr,"");
           valor_creb.len = strlen(valor_creb.arr);

          /* Graba en movto_d el Debito (C4) */
/*
               printf("1) codigo_emp <%s>",codigo_emp.arr);
               printf("ano_mesf <%s>",ano_mesf.arr);
               printf("consecutivob <%s>",consecutivob.arr);
               printf("secuenciab <%s>",secuenciab.arr);
               printf("cuentab <%s>",cuentab.arr);
               printf("infa <%s>",infa.arr);
               printf("infb <%s>",infb.arr);
               printf("infc <%s>",infc.arr);
               printf("infd <%s>",infd.arr);
               printf("codigo_nitb <%s>",codigo_nitb.arr);
               printf("valor_debb <%s>",valor_debb.arr); getchar();
*/
           /* EXEC SQL insert into movto_d
           	    (CODIGO_EMP,
        		     ANO_MES,
        		     CONSECUTIVO,
        		     SECUENCIA,
        		     CUENTA,
        	 	     INFA,
        		     INFB,
        		     INFC,
        		     INFD,
        		     CODIGO_NIT,
        		     VALOR_DEB,
        		     VALOR_CRE,
        		     SUCURSAL,
        		     CEN_COS,
                 LIBRO)
                    values(to_number(:codigo_emp),  
                           to_number(:ano_mesf), 
                           to_number(:consecutivob),
                           to_number(:secuenciab),  
                           :cuentab,  
                           :infa, 
                           :infb, 
                           :infc, 
                           :infd,
                           to_number(:codigo_nitb), 
                           to_number(:valor_debb,'9999999999.99'), 
                           to_number(:valor_creb,'9999999999.99'), 
                           :sucursal, 
                           to_number(:cen_cos),
                           to_number(:libro)); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 10;
           sqlstm.arrsiz = 15;
           sqlstm.sqladtp = &sqladt;
           sqlstm.sqltdsp = &sqltds;
           sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO\
,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,\
CEN_COS,LIBRO) values (to_number(:b0),to_number(:b1),to_number(:b2),to_number(\
:b3),:b4,:b5,:b6,:b7,:b8,to_number(:b9),to_number(:b10,'9999999999.99'),to_num\
ber(:b11,'9999999999.99'),:b12,to_number(:b13),to_number(:b14))";
           sqlstm.iters = (unsigned int  )1;
           sqlstm.offset = (unsigned int  )561;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)256;
           sqlstm.occurs = (unsigned int  )0;
           sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
           sqlstm.sqhstl[0] = (unsigned int  )5;
           sqlstm.sqhsts[0] = (         int  )0;
           sqlstm.sqindv[0] = (         void  *)0;
           sqlstm.sqinds[0] = (         int  )0;
           sqlstm.sqharm[0] = (unsigned int  )0;
           sqlstm.sqadto[0] = (unsigned short )0;
           sqlstm.sqtdso[0] = (unsigned short )0;
           sqlstm.sqhstv[1] = (         void  *)&ano_mesf;
           sqlstm.sqhstl[1] = (unsigned int  )32;
           sqlstm.sqhsts[1] = (         int  )0;
           sqlstm.sqindv[1] = (         void  *)0;
           sqlstm.sqinds[1] = (         int  )0;
           sqlstm.sqharm[1] = (unsigned int  )0;
           sqlstm.sqadto[1] = (unsigned short )0;
           sqlstm.sqtdso[1] = (unsigned short )0;
           sqlstm.sqhstv[2] = (         void  *)&consecutivob;
           sqlstm.sqhstl[2] = (unsigned int  )22;
           sqlstm.sqhsts[2] = (         int  )0;
           sqlstm.sqindv[2] = (         void  *)0;
           sqlstm.sqinds[2] = (         int  )0;
           sqlstm.sqharm[2] = (unsigned int  )0;
           sqlstm.sqadto[2] = (unsigned short )0;
           sqlstm.sqtdso[2] = (unsigned short )0;
           sqlstm.sqhstv[3] = (         void  *)&secuenciab;
           sqlstm.sqhstl[3] = (unsigned int  )22;
           sqlstm.sqhsts[3] = (         int  )0;
           sqlstm.sqindv[3] = (         void  *)0;
           sqlstm.sqinds[3] = (         int  )0;
           sqlstm.sqharm[3] = (unsigned int  )0;
           sqlstm.sqadto[3] = (unsigned short )0;
           sqlstm.sqtdso[3] = (unsigned short )0;
           sqlstm.sqhstv[4] = (         void  *)&cuentab;
           sqlstm.sqhstl[4] = (unsigned int  )22;
           sqlstm.sqhsts[4] = (         int  )0;
           sqlstm.sqindv[4] = (         void  *)0;
           sqlstm.sqinds[4] = (         int  )0;
           sqlstm.sqharm[4] = (unsigned int  )0;
           sqlstm.sqadto[4] = (unsigned short )0;
           sqlstm.sqtdso[4] = (unsigned short )0;
           sqlstm.sqhstv[5] = (         void  *)&infa;
           sqlstm.sqhstl[5] = (unsigned int  )22;
           sqlstm.sqhsts[5] = (         int  )0;
           sqlstm.sqindv[5] = (         void  *)0;
           sqlstm.sqinds[5] = (         int  )0;
           sqlstm.sqharm[5] = (unsigned int  )0;
           sqlstm.sqadto[5] = (unsigned short )0;
           sqlstm.sqtdso[5] = (unsigned short )0;
           sqlstm.sqhstv[6] = (         void  *)&infb;
           sqlstm.sqhstl[6] = (unsigned int  )22;
           sqlstm.sqhsts[6] = (         int  )0;
           sqlstm.sqindv[6] = (         void  *)0;
           sqlstm.sqinds[6] = (         int  )0;
           sqlstm.sqharm[6] = (unsigned int  )0;
           sqlstm.sqadto[6] = (unsigned short )0;
           sqlstm.sqtdso[6] = (unsigned short )0;
           sqlstm.sqhstv[7] = (         void  *)&infc;
           sqlstm.sqhstl[7] = (unsigned int  )22;
           sqlstm.sqhsts[7] = (         int  )0;
           sqlstm.sqindv[7] = (         void  *)0;
           sqlstm.sqinds[7] = (         int  )0;
           sqlstm.sqharm[7] = (unsigned int  )0;
           sqlstm.sqadto[7] = (unsigned short )0;
           sqlstm.sqtdso[7] = (unsigned short )0;
           sqlstm.sqhstv[8] = (         void  *)&infd;
           sqlstm.sqhstl[8] = (unsigned int  )22;
           sqlstm.sqhsts[8] = (         int  )0;
           sqlstm.sqindv[8] = (         void  *)0;
           sqlstm.sqinds[8] = (         int  )0;
           sqlstm.sqharm[8] = (unsigned int  )0;
           sqlstm.sqadto[8] = (unsigned short )0;
           sqlstm.sqtdso[8] = (unsigned short )0;
           sqlstm.sqhstv[9] = (         void  *)&codigo_nitb;
           sqlstm.sqhstl[9] = (unsigned int  )12;
           sqlstm.sqhsts[9] = (         int  )0;
           sqlstm.sqindv[9] = (         void  *)0;
           sqlstm.sqinds[9] = (         int  )0;
           sqlstm.sqharm[9] = (unsigned int  )0;
           sqlstm.sqadto[9] = (unsigned short )0;
           sqlstm.sqtdso[9] = (unsigned short )0;
           sqlstm.sqhstv[10] = (         void  *)&valor_debb;
           sqlstm.sqhstl[10] = (unsigned int  )22;
           sqlstm.sqhsts[10] = (         int  )0;
           sqlstm.sqindv[10] = (         void  *)0;
           sqlstm.sqinds[10] = (         int  )0;
           sqlstm.sqharm[10] = (unsigned int  )0;
           sqlstm.sqadto[10] = (unsigned short )0;
           sqlstm.sqtdso[10] = (unsigned short )0;
           sqlstm.sqhstv[11] = (         void  *)&valor_creb;
           sqlstm.sqhstl[11] = (unsigned int  )22;
           sqlstm.sqhsts[11] = (         int  )0;
           sqlstm.sqindv[11] = (         void  *)0;
           sqlstm.sqinds[11] = (         int  )0;
           sqlstm.sqharm[11] = (unsigned int  )0;
           sqlstm.sqadto[11] = (unsigned short )0;
           sqlstm.sqtdso[11] = (unsigned short )0;
           sqlstm.sqhstv[12] = (         void  *)&sucursal;
           sqlstm.sqhstl[12] = (unsigned int  )22;
           sqlstm.sqhsts[12] = (         int  )0;
           sqlstm.sqindv[12] = (         void  *)0;
           sqlstm.sqinds[12] = (         int  )0;
           sqlstm.sqharm[12] = (unsigned int  )0;
           sqlstm.sqadto[12] = (unsigned short )0;
           sqlstm.sqtdso[12] = (unsigned short )0;
           sqlstm.sqhstv[13] = (         void  *)&cen_cos;
           sqlstm.sqhstl[13] = (unsigned int  )22;
           sqlstm.sqhsts[13] = (         int  )0;
           sqlstm.sqindv[13] = (         void  *)0;
           sqlstm.sqinds[13] = (         int  )0;
           sqlstm.sqharm[13] = (unsigned int  )0;
           sqlstm.sqadto[13] = (unsigned short )0;
           sqlstm.sqtdso[13] = (unsigned short )0;
           sqlstm.sqhstv[14] = (         void  *)&libro;
           sqlstm.sqhstl[14] = (unsigned int  )6;
           sqlstm.sqhsts[14] = (         int  )0;
           sqlstm.sqindv[14] = (         void  *)0;
           sqlstm.sqinds[14] = (         int  )0;
           sqlstm.sqharm[14] = (unsigned int  )0;
           sqlstm.sqadto[14] = (unsigned short )0;
           sqlstm.sqtdso[14] = (unsigned short )0;
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



           if ( sqlca.sqlcode != 1403 && sqlca.sqlcode != 0 ) {
               printf ("1) codigo_emp   (%s)(%d)\n", codigo_emp.arr, codigo_emp.len);
               printf ("ano_mesf     (%s)(%d)\n", ano_mesf.arr, ano_mesf.len);
               printf ("consecutivob (%s)(%d)\n", consecutivob.arr, consecutivob.len);
               printf ("secuenciab   (%s)(%d)\n", secuenciab.arr, secuenciab.len);
               printf ("cuentab      (%s)(%d)\n", cuentab.arr, cuentab.len);
               printf ("infa         (%s)(%d)\n", infa.arr, infa.len);
               printf ("infb         (%s)(%d)\n", infb.arr, infb.len);
               printf ("infc         (%s)(%d)\n", infc.arr, infc.len);
               printf ("infd         (%s)(%d)\n", infd.arr, infd.len);
               printf ("codigo_nitb  (%s)(%d)\n", codigo_nitb.arr, codigo_nitb.len);
               printf ("valor_debb   (%s)(%d)\n", valor_debb.arr, valor_debb.len);
               printf ("valor_creb   (%s)(%d)\n", valor_creb.arr, valor_creb.len);
               printf ("sucursal     (%s)(%d)\n", sucursal.arr, sucursal.len);
               printf ("cen_cos      (%s)(%d)\n", cen_cos.arr, cen_cos.len);
               printf ("Error Grabando Debito (%d)\n", sqlca.sqlcode);
               exit (0);
           }

           secuencia++;
           sprintf(secuenciab.arr,"%6.0f",secuencia);
           secuenciab.len = strlen(secuenciab.arr);

           if (codigo_nit==0)
              strcpy(codigo_nitb.arr,"");
           else sprintf(codigo_nitb.arr,"%5.0f",codigo_nit);
           codigo_nitb.len = strlen(codigo_nitb.arr);

           strcpy(codigovar.arr,codigo.arr);
           codigovar.len = strlen(codigovar.arr);
           strcpy(cuentab.arr,cuenta.arr);
           cuentab.len = strlen(cuentab.arr);

           strcpy(cuentab.arr,cuenta.arr);
           cuentab.len = strlen(cuentab.arr);

           ver_inf();

           strcpy (valor_debb.arr,"");
           valor_debb.len = strlen(valor_debb.arr);

           sprintf(valor_creb.arr,"%10.2f",valor);
           valor_creb.len = strlen(valor_creb.arr);

          /* Graba en movto_d el Credito (C4) */
/*
               printf("2) codigo_emp <%s>",codigo_emp.arr);
               printf("ano_mesf <%s>",ano_mesf.arr);
               printf("consecutivob <%s>",consecutivob.arr);
               printf("secuenciab <%s>",secuenciab.arr);
               printf("cuentab <%s>",cuentab.arr);
               printf("infa <%s>",infa.arr);
               printf("infb <%s>",infb.arr);
               printf("infc <%s>",infc.arr);
               printf("infd <%s>",infd.arr);
               printf("codigo_nitb <%s>",codigo_nitb.arr);
               printf("valor_creb <%s>",valor_creb.arr); getchar();
*/
           /* EXEC SQL insert into movto_d
           	    (CODIGO_EMP,
        		     ANO_MES,
        		     CONSECUTIVO,
        		     SECUENCIA,
        		     CUENTA,
        	 	     INFA,
        		     INFB,
        		     INFC,
        		     INFD,
        		     CODIGO_NIT,
        		     VALOR_DEB,
        		     VALOR_CRE,
        		     SUCURSAL,
        		     CEN_COS,
                 LIBRO)
                    values(to_number(:codigo_emp),  
                           to_number(:ano_mesf), 
                           to_number(:consecutivob),
                           to_number(:secuenciab),  
                           :cuentab,  
                           :infa, 
                           :infb, 
                           :infc, 
                           :infd,
                           to_number(:codigo_nitb), 
                           to_number(:valor_debb,'9999999999.99'), 
                           to_number(:valor_creb,'9999999999.99'), 
                           :sucursal, 
                           to_number(:cen_cos),
                           to_number(:libro)); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 10;
           sqlstm.arrsiz = 15;
           sqlstm.sqladtp = &sqladt;
           sqlstm.sqltdsp = &sqltds;
           sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO\
,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,\
CEN_COS,LIBRO) values (to_number(:b0),to_number(:b1),to_number(:b2),to_number(\
:b3),:b4,:b5,:b6,:b7,:b8,to_number(:b9),to_number(:b10,'9999999999.99'),to_num\
ber(:b11,'9999999999.99'),:b12,to_number(:b13),to_number(:b14))";
           sqlstm.iters = (unsigned int  )1;
           sqlstm.offset = (unsigned int  )636;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)256;
           sqlstm.occurs = (unsigned int  )0;
           sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
           sqlstm.sqhstl[0] = (unsigned int  )5;
           sqlstm.sqhsts[0] = (         int  )0;
           sqlstm.sqindv[0] = (         void  *)0;
           sqlstm.sqinds[0] = (         int  )0;
           sqlstm.sqharm[0] = (unsigned int  )0;
           sqlstm.sqadto[0] = (unsigned short )0;
           sqlstm.sqtdso[0] = (unsigned short )0;
           sqlstm.sqhstv[1] = (         void  *)&ano_mesf;
           sqlstm.sqhstl[1] = (unsigned int  )32;
           sqlstm.sqhsts[1] = (         int  )0;
           sqlstm.sqindv[1] = (         void  *)0;
           sqlstm.sqinds[1] = (         int  )0;
           sqlstm.sqharm[1] = (unsigned int  )0;
           sqlstm.sqadto[1] = (unsigned short )0;
           sqlstm.sqtdso[1] = (unsigned short )0;
           sqlstm.sqhstv[2] = (         void  *)&consecutivob;
           sqlstm.sqhstl[2] = (unsigned int  )22;
           sqlstm.sqhsts[2] = (         int  )0;
           sqlstm.sqindv[2] = (         void  *)0;
           sqlstm.sqinds[2] = (         int  )0;
           sqlstm.sqharm[2] = (unsigned int  )0;
           sqlstm.sqadto[2] = (unsigned short )0;
           sqlstm.sqtdso[2] = (unsigned short )0;
           sqlstm.sqhstv[3] = (         void  *)&secuenciab;
           sqlstm.sqhstl[3] = (unsigned int  )22;
           sqlstm.sqhsts[3] = (         int  )0;
           sqlstm.sqindv[3] = (         void  *)0;
           sqlstm.sqinds[3] = (         int  )0;
           sqlstm.sqharm[3] = (unsigned int  )0;
           sqlstm.sqadto[3] = (unsigned short )0;
           sqlstm.sqtdso[3] = (unsigned short )0;
           sqlstm.sqhstv[4] = (         void  *)&cuentab;
           sqlstm.sqhstl[4] = (unsigned int  )22;
           sqlstm.sqhsts[4] = (         int  )0;
           sqlstm.sqindv[4] = (         void  *)0;
           sqlstm.sqinds[4] = (         int  )0;
           sqlstm.sqharm[4] = (unsigned int  )0;
           sqlstm.sqadto[4] = (unsigned short )0;
           sqlstm.sqtdso[4] = (unsigned short )0;
           sqlstm.sqhstv[5] = (         void  *)&infa;
           sqlstm.sqhstl[5] = (unsigned int  )22;
           sqlstm.sqhsts[5] = (         int  )0;
           sqlstm.sqindv[5] = (         void  *)0;
           sqlstm.sqinds[5] = (         int  )0;
           sqlstm.sqharm[5] = (unsigned int  )0;
           sqlstm.sqadto[5] = (unsigned short )0;
           sqlstm.sqtdso[5] = (unsigned short )0;
           sqlstm.sqhstv[6] = (         void  *)&infb;
           sqlstm.sqhstl[6] = (unsigned int  )22;
           sqlstm.sqhsts[6] = (         int  )0;
           sqlstm.sqindv[6] = (         void  *)0;
           sqlstm.sqinds[6] = (         int  )0;
           sqlstm.sqharm[6] = (unsigned int  )0;
           sqlstm.sqadto[6] = (unsigned short )0;
           sqlstm.sqtdso[6] = (unsigned short )0;
           sqlstm.sqhstv[7] = (         void  *)&infc;
           sqlstm.sqhstl[7] = (unsigned int  )22;
           sqlstm.sqhsts[7] = (         int  )0;
           sqlstm.sqindv[7] = (         void  *)0;
           sqlstm.sqinds[7] = (         int  )0;
           sqlstm.sqharm[7] = (unsigned int  )0;
           sqlstm.sqadto[7] = (unsigned short )0;
           sqlstm.sqtdso[7] = (unsigned short )0;
           sqlstm.sqhstv[8] = (         void  *)&infd;
           sqlstm.sqhstl[8] = (unsigned int  )22;
           sqlstm.sqhsts[8] = (         int  )0;
           sqlstm.sqindv[8] = (         void  *)0;
           sqlstm.sqinds[8] = (         int  )0;
           sqlstm.sqharm[8] = (unsigned int  )0;
           sqlstm.sqadto[8] = (unsigned short )0;
           sqlstm.sqtdso[8] = (unsigned short )0;
           sqlstm.sqhstv[9] = (         void  *)&codigo_nitb;
           sqlstm.sqhstl[9] = (unsigned int  )12;
           sqlstm.sqhsts[9] = (         int  )0;
           sqlstm.sqindv[9] = (         void  *)0;
           sqlstm.sqinds[9] = (         int  )0;
           sqlstm.sqharm[9] = (unsigned int  )0;
           sqlstm.sqadto[9] = (unsigned short )0;
           sqlstm.sqtdso[9] = (unsigned short )0;
           sqlstm.sqhstv[10] = (         void  *)&valor_debb;
           sqlstm.sqhstl[10] = (unsigned int  )22;
           sqlstm.sqhsts[10] = (         int  )0;
           sqlstm.sqindv[10] = (         void  *)0;
           sqlstm.sqinds[10] = (         int  )0;
           sqlstm.sqharm[10] = (unsigned int  )0;
           sqlstm.sqadto[10] = (unsigned short )0;
           sqlstm.sqtdso[10] = (unsigned short )0;
           sqlstm.sqhstv[11] = (         void  *)&valor_creb;
           sqlstm.sqhstl[11] = (unsigned int  )22;
           sqlstm.sqhsts[11] = (         int  )0;
           sqlstm.sqindv[11] = (         void  *)0;
           sqlstm.sqinds[11] = (         int  )0;
           sqlstm.sqharm[11] = (unsigned int  )0;
           sqlstm.sqadto[11] = (unsigned short )0;
           sqlstm.sqtdso[11] = (unsigned short )0;
           sqlstm.sqhstv[12] = (         void  *)&sucursal;
           sqlstm.sqhstl[12] = (unsigned int  )22;
           sqlstm.sqhsts[12] = (         int  )0;
           sqlstm.sqindv[12] = (         void  *)0;
           sqlstm.sqinds[12] = (         int  )0;
           sqlstm.sqharm[12] = (unsigned int  )0;
           sqlstm.sqadto[12] = (unsigned short )0;
           sqlstm.sqtdso[12] = (unsigned short )0;
           sqlstm.sqhstv[13] = (         void  *)&cen_cos;
           sqlstm.sqhstl[13] = (unsigned int  )22;
           sqlstm.sqhsts[13] = (         int  )0;
           sqlstm.sqindv[13] = (         void  *)0;
           sqlstm.sqinds[13] = (         int  )0;
           sqlstm.sqharm[13] = (unsigned int  )0;
           sqlstm.sqadto[13] = (unsigned short )0;
           sqlstm.sqtdso[13] = (unsigned short )0;
           sqlstm.sqhstv[14] = (         void  *)&libro;
           sqlstm.sqhstl[14] = (unsigned int  )6;
           sqlstm.sqhsts[14] = (         int  )0;
           sqlstm.sqindv[14] = (         void  *)0;
           sqlstm.sqinds[14] = (         int  )0;
           sqlstm.sqharm[14] = (unsigned int  )0;
           sqlstm.sqadto[14] = (unsigned short )0;
           sqlstm.sqtdso[14] = (unsigned short )0;
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



           if ( sqlca.sqlcode != 1403 && sqlca.sqlcode != 0 ) {
               printf ("2) codigo_emp   (%s)(%d)\n", codigo_emp.arr, codigo_emp.len);
               printf ("ano_mesf     (%s)(%d)\n", ano_mesf.arr, ano_mesf.len);
               printf ("consecutivob (%s)(%d)\n", consecutivob.arr, consecutivob.len);
               printf ("secuenciab   (%s)(%d)\n", secuenciab.arr, secuenciab.len);
               printf ("cuentab      (%s)(%d)\n", cuentab.arr, cuentab.len);
               printf ("infa         (%s)(%d)\n", infa.arr, infa.len);
               printf ("infb         (%s)(%d)\n", infb.arr, infb.len);
               printf ("infc         (%s)(%d)\n", infc.arr, infc.len);
               printf ("infd         (%s)(%d)\n", infd.arr, infd.len);
               printf ("codigo_nitb  (%s)(%d)\n", codigo_nitb.arr, codigo_nitb.len);
               printf ("valor_debb   (%s)(%d)\n", valor_debb.arr, valor_debb.len);
               printf ("valor_creb   (%s)(%d)\n", valor_creb.arr, valor_creb.len);
               printf ("sucursal     (%s)(%d)\n", sucursal.arr, sucursal.len);
               printf ("cen_cos      (%s)(%d)\n", cen_cos.arr, cen_cos.len);
               printf ("Error Grabando Credito (%d)\n", sqlca.sqlcode);
               exit (0);
           }
        }
        else {
           if (valor < 0) {
//              printf("valor <%10.2f> menor de 0", valor ); getchar();
              secuencia++;
              sprintf(secuenciab.arr,"%6.0f",secuencia);
              secuenciab.len = strlen(secuenciab.arr);

              if (cod_nitc==0)
                 strcpy(codigo_nitb.arr,"");
              else sprintf(codigo_nitb.arr,"%5.0f",cod_nitc);
              codigo_nitb.len = strlen(codigo_nitb.arr);

              if (!strcmp(cod_var.arr,"")) {
                 strcpy(codigovar.arr,imputa.arr);
                 codigovar.len = strlen(codigovar.arr);
              }
              else {
                    strcpy(codigovar.arr,cod_var.arr);
                    codigovar.len = strlen(cod_var.arr);
              }

              strcpy(cuentab.arr,imputa.arr);
              cuentab.len = strlen(cuentab.arr);

              ver_inf();

              sprintf(valor_creb.arr,"%10.2f",valor*-1);
              valor_creb.len = strlen(valor_creb.arr);

              strcpy (valor_debb.arr,"");
              valor_debb.len = strlen(valor_debb.arr);

              /* Graba en movto_d el Credito (C4) */
/*
                  printf("3) codigo_emp <%s>",codigo_emp.arr);
                  printf("ano_mesf <%s>",ano_mesf.arr);
                  printf("consecutivob <%s>",consecutivob.arr);
                  printf("secuenciab <%s>",secuenciab.arr);
                  printf("cuentab <%s>",cuentab.arr);
                  printf("infa <%s>",infa.arr);
                  printf("infb <%s>",infb.arr);
                  printf("infc <%s>",infc.arr);
                  printf("infd <%s>",infd.arr);
                  printf("codigo_nitb <%s>",codigo_nitb.arr);
                  printf("valor_creb <%s>",valor_creb.arr); getchar();
*/
              /* EXEC SQL insert into movto_d
           	    (CODIGO_EMP,
        		     ANO_MES,
        		     CONSECUTIVO,
        		     SECUENCIA,
        		     CUENTA,
        	 	     INFA,
        		     INFB,
        		     INFC,
        		     INFD,
        		     CODIGO_NIT,
        		     VALOR_DEB,
        		     VALOR_CRE,
        		     SUCURSAL,
        		     CEN_COS,
                 LIBRO)
                    values(to_number(:codigo_emp),  
                           to_number(:ano_mesf), 
                           to_number(:consecutivob),
                           to_number(:secuenciab),  
                           :cuentab,  
                           :infa, 
                           :infb, 
                           :infc, 
                           :infd,
                           to_number(:codigo_nitb), 
                           to_number(:valor_debb,'9999999999.99'), 
                           to_number(:valor_creb,'9999999999.99'), 
                           :sucursal, 
                           to_number(:cen_cos),
                           to_number(:libro)); */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 10;
              sqlstm.arrsiz = 15;
              sqlstm.sqladtp = &sqladt;
              sqlstm.sqltdsp = &sqltds;
              sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUT\
IVO,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURS\
AL,CEN_COS,LIBRO) values (to_number(:b0),to_number(:b1),to_number(:b2),to_numb\
er(:b3),:b4,:b5,:b6,:b7,:b8,to_number(:b9),to_number(:b10,'9999999999.99'),to_\
number(:b11,'9999999999.99'),:b12,to_number(:b13),to_number(:b14))";
              sqlstm.iters = (unsigned int  )1;
              sqlstm.offset = (unsigned int  )711;
              sqlstm.cud = sqlcud0;
              sqlstm.sqlest = (unsigned char  *)&sqlca;
              sqlstm.sqlety = (unsigned short)256;
              sqlstm.occurs = (unsigned int  )0;
              sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
              sqlstm.sqhstl[0] = (unsigned int  )5;
              sqlstm.sqhsts[0] = (         int  )0;
              sqlstm.sqindv[0] = (         void  *)0;
              sqlstm.sqinds[0] = (         int  )0;
              sqlstm.sqharm[0] = (unsigned int  )0;
              sqlstm.sqadto[0] = (unsigned short )0;
              sqlstm.sqtdso[0] = (unsigned short )0;
              sqlstm.sqhstv[1] = (         void  *)&ano_mesf;
              sqlstm.sqhstl[1] = (unsigned int  )32;
              sqlstm.sqhsts[1] = (         int  )0;
              sqlstm.sqindv[1] = (         void  *)0;
              sqlstm.sqinds[1] = (         int  )0;
              sqlstm.sqharm[1] = (unsigned int  )0;
              sqlstm.sqadto[1] = (unsigned short )0;
              sqlstm.sqtdso[1] = (unsigned short )0;
              sqlstm.sqhstv[2] = (         void  *)&consecutivob;
              sqlstm.sqhstl[2] = (unsigned int  )22;
              sqlstm.sqhsts[2] = (         int  )0;
              sqlstm.sqindv[2] = (         void  *)0;
              sqlstm.sqinds[2] = (         int  )0;
              sqlstm.sqharm[2] = (unsigned int  )0;
              sqlstm.sqadto[2] = (unsigned short )0;
              sqlstm.sqtdso[2] = (unsigned short )0;
              sqlstm.sqhstv[3] = (         void  *)&secuenciab;
              sqlstm.sqhstl[3] = (unsigned int  )22;
              sqlstm.sqhsts[3] = (         int  )0;
              sqlstm.sqindv[3] = (         void  *)0;
              sqlstm.sqinds[3] = (         int  )0;
              sqlstm.sqharm[3] = (unsigned int  )0;
              sqlstm.sqadto[3] = (unsigned short )0;
              sqlstm.sqtdso[3] = (unsigned short )0;
              sqlstm.sqhstv[4] = (         void  *)&cuentab;
              sqlstm.sqhstl[4] = (unsigned int  )22;
              sqlstm.sqhsts[4] = (         int  )0;
              sqlstm.sqindv[4] = (         void  *)0;
              sqlstm.sqinds[4] = (         int  )0;
              sqlstm.sqharm[4] = (unsigned int  )0;
              sqlstm.sqadto[4] = (unsigned short )0;
              sqlstm.sqtdso[4] = (unsigned short )0;
              sqlstm.sqhstv[5] = (         void  *)&infa;
              sqlstm.sqhstl[5] = (unsigned int  )22;
              sqlstm.sqhsts[5] = (         int  )0;
              sqlstm.sqindv[5] = (         void  *)0;
              sqlstm.sqinds[5] = (         int  )0;
              sqlstm.sqharm[5] = (unsigned int  )0;
              sqlstm.sqadto[5] = (unsigned short )0;
              sqlstm.sqtdso[5] = (unsigned short )0;
              sqlstm.sqhstv[6] = (         void  *)&infb;
              sqlstm.sqhstl[6] = (unsigned int  )22;
              sqlstm.sqhsts[6] = (         int  )0;
              sqlstm.sqindv[6] = (         void  *)0;
              sqlstm.sqinds[6] = (         int  )0;
              sqlstm.sqharm[6] = (unsigned int  )0;
              sqlstm.sqadto[6] = (unsigned short )0;
              sqlstm.sqtdso[6] = (unsigned short )0;
              sqlstm.sqhstv[7] = (         void  *)&infc;
              sqlstm.sqhstl[7] = (unsigned int  )22;
              sqlstm.sqhsts[7] = (         int  )0;
              sqlstm.sqindv[7] = (         void  *)0;
              sqlstm.sqinds[7] = (         int  )0;
              sqlstm.sqharm[7] = (unsigned int  )0;
              sqlstm.sqadto[7] = (unsigned short )0;
              sqlstm.sqtdso[7] = (unsigned short )0;
              sqlstm.sqhstv[8] = (         void  *)&infd;
              sqlstm.sqhstl[8] = (unsigned int  )22;
              sqlstm.sqhsts[8] = (         int  )0;
              sqlstm.sqindv[8] = (         void  *)0;
              sqlstm.sqinds[8] = (         int  )0;
              sqlstm.sqharm[8] = (unsigned int  )0;
              sqlstm.sqadto[8] = (unsigned short )0;
              sqlstm.sqtdso[8] = (unsigned short )0;
              sqlstm.sqhstv[9] = (         void  *)&codigo_nitb;
              sqlstm.sqhstl[9] = (unsigned int  )12;
              sqlstm.sqhsts[9] = (         int  )0;
              sqlstm.sqindv[9] = (         void  *)0;
              sqlstm.sqinds[9] = (         int  )0;
              sqlstm.sqharm[9] = (unsigned int  )0;
              sqlstm.sqadto[9] = (unsigned short )0;
              sqlstm.sqtdso[9] = (unsigned short )0;
              sqlstm.sqhstv[10] = (         void  *)&valor_debb;
              sqlstm.sqhstl[10] = (unsigned int  )22;
              sqlstm.sqhsts[10] = (         int  )0;
              sqlstm.sqindv[10] = (         void  *)0;
              sqlstm.sqinds[10] = (         int  )0;
              sqlstm.sqharm[10] = (unsigned int  )0;
              sqlstm.sqadto[10] = (unsigned short )0;
              sqlstm.sqtdso[10] = (unsigned short )0;
              sqlstm.sqhstv[11] = (         void  *)&valor_creb;
              sqlstm.sqhstl[11] = (unsigned int  )22;
              sqlstm.sqhsts[11] = (         int  )0;
              sqlstm.sqindv[11] = (         void  *)0;
              sqlstm.sqinds[11] = (         int  )0;
              sqlstm.sqharm[11] = (unsigned int  )0;
              sqlstm.sqadto[11] = (unsigned short )0;
              sqlstm.sqtdso[11] = (unsigned short )0;
              sqlstm.sqhstv[12] = (         void  *)&sucursal;
              sqlstm.sqhstl[12] = (unsigned int  )22;
              sqlstm.sqhsts[12] = (         int  )0;
              sqlstm.sqindv[12] = (         void  *)0;
              sqlstm.sqinds[12] = (         int  )0;
              sqlstm.sqharm[12] = (unsigned int  )0;
              sqlstm.sqadto[12] = (unsigned short )0;
              sqlstm.sqtdso[12] = (unsigned short )0;
              sqlstm.sqhstv[13] = (         void  *)&cen_cos;
              sqlstm.sqhstl[13] = (unsigned int  )22;
              sqlstm.sqhsts[13] = (         int  )0;
              sqlstm.sqindv[13] = (         void  *)0;
              sqlstm.sqinds[13] = (         int  )0;
              sqlstm.sqharm[13] = (unsigned int  )0;
              sqlstm.sqadto[13] = (unsigned short )0;
              sqlstm.sqtdso[13] = (unsigned short )0;
              sqlstm.sqhstv[14] = (         void  *)&libro;
              sqlstm.sqhstl[14] = (unsigned int  )6;
              sqlstm.sqhsts[14] = (         int  )0;
              sqlstm.sqindv[14] = (         void  *)0;
              sqlstm.sqinds[14] = (         int  )0;
              sqlstm.sqharm[14] = (unsigned int  )0;
              sqlstm.sqadto[14] = (unsigned short )0;
              sqlstm.sqtdso[14] = (unsigned short )0;
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



           if ( sqlca.sqlcode != 1403 && sqlca.sqlcode != 0 ) {
               printf ("3) codigo_emp   (%s)(%d)\n", codigo_emp.arr, codigo_emp.len);
               printf ("ano_mesf     (%s)(%d)\n", ano_mesf.arr, ano_mesf.len);
               printf ("consecutivob (%s)(%d)\n", consecutivob.arr, consecutivob.len);
               printf ("secuenciab   (%s)(%d)\n", secuenciab.arr, secuenciab.len);
               printf ("cuentab      (%s)(%d)\n", cuentab.arr, cuentab.len);
               printf ("infa         (%s)(%d)\n", infa.arr, infa.len);
               printf ("infb         (%s)(%d)\n", infb.arr, infb.len);
               printf ("infc         (%s)(%d)\n", infc.arr, infc.len);
               printf ("infd         (%s)(%d)\n", infd.arr, infd.len);
               printf ("codigo_nitb  (%s)(%d)\n", codigo_nitb.arr, codigo_nitb.len);
               printf ("valor_debb   (%s)(%d)\n", valor_debb.arr, valor_debb.len);
               printf ("valor_creb   (%s)(%d)\n", valor_creb.arr, valor_creb.len);
               printf ("sucursal     (%s)(%d)\n", sucursal.arr, sucursal.len);
               printf ("cen_cos      (%s)(%d)\n", cen_cos.arr, cen_cos.len);
               printf  ("Error Grabando Credito (%d)\n", sqlca.sqlcode);
               exit (0);
           }

              secuencia++;
              sprintf(secuenciab.arr,"%6.0f",secuencia);
              secuenciab.len = strlen(secuenciab.arr);
              /////////////////////////////////////////////////////////////////////////////////
              // Ojo aqui puede haber problemas ver inf's en plan de la cuenta 24080101      //
              // si tiene nit y codigo al mismo tiempo, pues esta colocando codigo_nit = 970 //
              // para esa cuenta que tiene valor $-3,811,715.00 de la pagina 4 del anexo al  //
              // balance del mes de Diciembre de 2001                                        //
              /////////////////////////////////////////////////////////////////////////////////
              if (codigo_nit==0)
                 strcpy(codigo_nitb.arr,"");
              else sprintf(codigo_nitb.arr,"%5.0f",codigo_nit);
              codigo_nitb.len = strlen(codigo_nitb.arr);

              codigo_nitb.len = strlen(codigo_nitb.arr);
              strcpy(codigovar.arr,codigo.arr);
              codigovar.len = strlen(codigovar.arr);

              strcpy(cuentab.arr,cuenta.arr);
              cuentab.len = strlen(cuentab.arr);

              ver_inf();

              strcpy (valor_creb.arr,"");
              valor_creb.len = strlen(valor_creb.arr);

              sprintf(valor_debb.arr,"%10.2f",valor*-1);
              valor_debb.len = strlen(valor_debb.arr);

              /* Graba en movto_d el Debito (C4) */
/*
                  printf("4) codigo_emp <%s>",codigo_emp.arr);
                  printf("ano_mesf <%s>",ano_mesf.arr);
                  printf("consecutivob <%s>",consecutivob.arr);
                  printf("secuenciab <%s>",secuenciab.arr);
                  printf("cuentab <%s>",cuentab.arr);
                  printf("infa <%s>",infa.arr);
                  printf("infb <%s>",infb.arr);
                  printf("infc <%s>",infc.arr);
                  printf("infd <%s>",infd.arr);
                  printf("codigo_nitb <%s>",codigo_nitb.arr);
                  printf("valor_debb <%s>",valor_debb.arr); getchar();
*/
              /* EXEC SQL insert into movto_d
           	    (CODIGO_EMP,
        		     ANO_MES,
        		     CONSECUTIVO,
        		     SECUENCIA,
        		     CUENTA,
        	 	     INFA,
        		     INFB,
        		     INFC,
        		     INFD,
        		     CODIGO_NIT,
        		     VALOR_DEB,
        		     VALOR_CRE,
        		     SUCURSAL,
        		     CEN_COS,
                 LIBRO)
                    values(to_number(:codigo_emp),  
                           to_number(:ano_mesf), 
                           to_number(:consecutivob),
                           to_number(:secuenciab),  
                           :cuentab,  
                           :infa, 
                           :infb, 
                           :infc, 
                           :infd,
                           to_number(:codigo_nitb), 
                           to_number(:valor_debb,'9999999999.99'), 
                           to_number(:valor_creb,'9999999999.99'), 
                           :sucursal, 
                           to_number(:cen_cos),
                           to_number(:libro)); */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 10;
              sqlstm.arrsiz = 15;
              sqlstm.sqladtp = &sqladt;
              sqlstm.sqltdsp = &sqltds;
              sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUT\
IVO,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURS\
AL,CEN_COS,LIBRO) values (to_number(:b0),to_number(:b1),to_number(:b2),to_numb\
er(:b3),:b4,:b5,:b6,:b7,:b8,to_number(:b9),to_number(:b10,'9999999999.99'),to_\
number(:b11,'9999999999.99'),:b12,to_number(:b13),to_number(:b14))";
              sqlstm.iters = (unsigned int  )1;
              sqlstm.offset = (unsigned int  )786;
              sqlstm.cud = sqlcud0;
              sqlstm.sqlest = (unsigned char  *)&sqlca;
              sqlstm.sqlety = (unsigned short)256;
              sqlstm.occurs = (unsigned int  )0;
              sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
              sqlstm.sqhstl[0] = (unsigned int  )5;
              sqlstm.sqhsts[0] = (         int  )0;
              sqlstm.sqindv[0] = (         void  *)0;
              sqlstm.sqinds[0] = (         int  )0;
              sqlstm.sqharm[0] = (unsigned int  )0;
              sqlstm.sqadto[0] = (unsigned short )0;
              sqlstm.sqtdso[0] = (unsigned short )0;
              sqlstm.sqhstv[1] = (         void  *)&ano_mesf;
              sqlstm.sqhstl[1] = (unsigned int  )32;
              sqlstm.sqhsts[1] = (         int  )0;
              sqlstm.sqindv[1] = (         void  *)0;
              sqlstm.sqinds[1] = (         int  )0;
              sqlstm.sqharm[1] = (unsigned int  )0;
              sqlstm.sqadto[1] = (unsigned short )0;
              sqlstm.sqtdso[1] = (unsigned short )0;
              sqlstm.sqhstv[2] = (         void  *)&consecutivob;
              sqlstm.sqhstl[2] = (unsigned int  )22;
              sqlstm.sqhsts[2] = (         int  )0;
              sqlstm.sqindv[2] = (         void  *)0;
              sqlstm.sqinds[2] = (         int  )0;
              sqlstm.sqharm[2] = (unsigned int  )0;
              sqlstm.sqadto[2] = (unsigned short )0;
              sqlstm.sqtdso[2] = (unsigned short )0;
              sqlstm.sqhstv[3] = (         void  *)&secuenciab;
              sqlstm.sqhstl[3] = (unsigned int  )22;
              sqlstm.sqhsts[3] = (         int  )0;
              sqlstm.sqindv[3] = (         void  *)0;
              sqlstm.sqinds[3] = (         int  )0;
              sqlstm.sqharm[3] = (unsigned int  )0;
              sqlstm.sqadto[3] = (unsigned short )0;
              sqlstm.sqtdso[3] = (unsigned short )0;
              sqlstm.sqhstv[4] = (         void  *)&cuentab;
              sqlstm.sqhstl[4] = (unsigned int  )22;
              sqlstm.sqhsts[4] = (         int  )0;
              sqlstm.sqindv[4] = (         void  *)0;
              sqlstm.sqinds[4] = (         int  )0;
              sqlstm.sqharm[4] = (unsigned int  )0;
              sqlstm.sqadto[4] = (unsigned short )0;
              sqlstm.sqtdso[4] = (unsigned short )0;
              sqlstm.sqhstv[5] = (         void  *)&infa;
              sqlstm.sqhstl[5] = (unsigned int  )22;
              sqlstm.sqhsts[5] = (         int  )0;
              sqlstm.sqindv[5] = (         void  *)0;
              sqlstm.sqinds[5] = (         int  )0;
              sqlstm.sqharm[5] = (unsigned int  )0;
              sqlstm.sqadto[5] = (unsigned short )0;
              sqlstm.sqtdso[5] = (unsigned short )0;
              sqlstm.sqhstv[6] = (         void  *)&infb;
              sqlstm.sqhstl[6] = (unsigned int  )22;
              sqlstm.sqhsts[6] = (         int  )0;
              sqlstm.sqindv[6] = (         void  *)0;
              sqlstm.sqinds[6] = (         int  )0;
              sqlstm.sqharm[6] = (unsigned int  )0;
              sqlstm.sqadto[6] = (unsigned short )0;
              sqlstm.sqtdso[6] = (unsigned short )0;
              sqlstm.sqhstv[7] = (         void  *)&infc;
              sqlstm.sqhstl[7] = (unsigned int  )22;
              sqlstm.sqhsts[7] = (         int  )0;
              sqlstm.sqindv[7] = (         void  *)0;
              sqlstm.sqinds[7] = (         int  )0;
              sqlstm.sqharm[7] = (unsigned int  )0;
              sqlstm.sqadto[7] = (unsigned short )0;
              sqlstm.sqtdso[7] = (unsigned short )0;
              sqlstm.sqhstv[8] = (         void  *)&infd;
              sqlstm.sqhstl[8] = (unsigned int  )22;
              sqlstm.sqhsts[8] = (         int  )0;
              sqlstm.sqindv[8] = (         void  *)0;
              sqlstm.sqinds[8] = (         int  )0;
              sqlstm.sqharm[8] = (unsigned int  )0;
              sqlstm.sqadto[8] = (unsigned short )0;
              sqlstm.sqtdso[8] = (unsigned short )0;
              sqlstm.sqhstv[9] = (         void  *)&codigo_nitb;
              sqlstm.sqhstl[9] = (unsigned int  )12;
              sqlstm.sqhsts[9] = (         int  )0;
              sqlstm.sqindv[9] = (         void  *)0;
              sqlstm.sqinds[9] = (         int  )0;
              sqlstm.sqharm[9] = (unsigned int  )0;
              sqlstm.sqadto[9] = (unsigned short )0;
              sqlstm.sqtdso[9] = (unsigned short )0;
              sqlstm.sqhstv[10] = (         void  *)&valor_debb;
              sqlstm.sqhstl[10] = (unsigned int  )22;
              sqlstm.sqhsts[10] = (         int  )0;
              sqlstm.sqindv[10] = (         void  *)0;
              sqlstm.sqinds[10] = (         int  )0;
              sqlstm.sqharm[10] = (unsigned int  )0;
              sqlstm.sqadto[10] = (unsigned short )0;
              sqlstm.sqtdso[10] = (unsigned short )0;
              sqlstm.sqhstv[11] = (         void  *)&valor_creb;
              sqlstm.sqhstl[11] = (unsigned int  )22;
              sqlstm.sqhsts[11] = (         int  )0;
              sqlstm.sqindv[11] = (         void  *)0;
              sqlstm.sqinds[11] = (         int  )0;
              sqlstm.sqharm[11] = (unsigned int  )0;
              sqlstm.sqadto[11] = (unsigned short )0;
              sqlstm.sqtdso[11] = (unsigned short )0;
              sqlstm.sqhstv[12] = (         void  *)&sucursal;
              sqlstm.sqhstl[12] = (unsigned int  )22;
              sqlstm.sqhsts[12] = (         int  )0;
              sqlstm.sqindv[12] = (         void  *)0;
              sqlstm.sqinds[12] = (         int  )0;
              sqlstm.sqharm[12] = (unsigned int  )0;
              sqlstm.sqadto[12] = (unsigned short )0;
              sqlstm.sqtdso[12] = (unsigned short )0;
              sqlstm.sqhstv[13] = (         void  *)&cen_cos;
              sqlstm.sqhstl[13] = (unsigned int  )22;
              sqlstm.sqhsts[13] = (         int  )0;
              sqlstm.sqindv[13] = (         void  *)0;
              sqlstm.sqinds[13] = (         int  )0;
              sqlstm.sqharm[13] = (unsigned int  )0;
              sqlstm.sqadto[13] = (unsigned short )0;
              sqlstm.sqtdso[13] = (unsigned short )0;
              sqlstm.sqhstv[14] = (         void  *)&libro;
              sqlstm.sqhstl[14] = (unsigned int  )6;
              sqlstm.sqhsts[14] = (         int  )0;
              sqlstm.sqindv[14] = (         void  *)0;
              sqlstm.sqinds[14] = (         int  )0;
              sqlstm.sqharm[14] = (unsigned int  )0;
              sqlstm.sqadto[14] = (unsigned short )0;
              sqlstm.sqtdso[14] = (unsigned short )0;
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



           if ( sqlca.sqlcode != 1403 && sqlca.sqlcode != 0 ) {
               printf ("4) codigo_emp   (%s)(%d)\n", codigo_emp.arr, codigo_emp.len);
               printf ("ano_mesf     (%s)(%d)\n", ano_mesf.arr, ano_mesf.len);
               printf ("consecutivob (%s)(%d)\n", consecutivob.arr, consecutivob.len);
               printf ("secuenciab   (%s)(%d)\n", secuenciab.arr, secuenciab.len);
               printf ("cuentab      (%s)(%d)\n", cuentab.arr, cuentab.len);
               printf ("infa         (%s)(%d)\n", infa.arr, infa.len);
               printf ("infb         (%s)(%d)\n", infb.arr, infb.len);
               printf ("infc         (%s)(%d)\n", infc.arr, infc.len);
               printf ("infd         (%s)(%d)\n", infd.arr, infd.len);
               printf ("codigo_nitb  (%s)(%d)\n", codigo_nitb.arr, codigo_nitb.len);
               printf ("valor_debb   (%s)(%d)\n", valor_debb.arr, valor_debb.len);
               printf ("valor_creb   (%s)(%d)\n", valor_creb.arr, valor_creb.len);
               printf ("sucursal     (%s)(%d)\n", sucursal.arr, sucursal.len);
               printf ("cen_cos      (%s)(%d)\n", cen_cos.arr, cen_cos.len);
               printf  ("Error Grabando Credito (%d)\n", sqlca.sqlcode);
               exit (0);
           }

           }
        }
        /* EXEC SQL FETCH C6 INTO :cuenta, :imputa, :nitc, :cod_nitc, :codigo_nit, :nit, :valor, :fecha_asto, :codigo, :cod_var; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 15;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )861;
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
        sqlstm.sqhstv[1] = (         void  *)&imputa;
        sqlstm.sqhstl[1] = (unsigned int  )22;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&nitc;
        sqlstm.sqhstl[2] = (unsigned int  )8;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&cod_nitc;
        sqlstm.sqhstl[3] = (unsigned int  )4;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&codigo_nit;
        sqlstm.sqhstl[4] = (unsigned int  )4;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&nit;
        sqlstm.sqhstl[5] = (unsigned int  )8;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&valor;
        sqlstm.sqhstl[6] = (unsigned int  )8;
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqhstv[7] = (         void  *)&fecha_asto;
        sqlstm.sqhstl[7] = (unsigned int  )32;
        sqlstm.sqhsts[7] = (         int  )0;
        sqlstm.sqindv[7] = (         void  *)0;
        sqlstm.sqinds[7] = (         int  )0;
        sqlstm.sqharm[7] = (unsigned int  )0;
        sqlstm.sqadto[7] = (unsigned short )0;
        sqlstm.sqtdso[7] = (unsigned short )0;
        sqlstm.sqhstv[8] = (         void  *)&codigo;
        sqlstm.sqhstl[8] = (unsigned int  )22;
        sqlstm.sqhsts[8] = (         int  )0;
        sqlstm.sqindv[8] = (         void  *)0;
        sqlstm.sqinds[8] = (         int  )0;
        sqlstm.sqharm[8] = (unsigned int  )0;
        sqlstm.sqadto[8] = (unsigned short )0;
        sqlstm.sqtdso[8] = (unsigned short )0;
        sqlstm.sqhstv[9] = (         void  *)&cod_var;
        sqlstm.sqhstl[9] = (unsigned int  )22;
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



        if ( sqlca.sqlcode != 1403 && sqlca.sqlcode != 0 && sqlca.sqlcode != -1405 ) {
             fprintf (stderr, "Error leyendo C6 (%d)\n", sqlca.sqlcode);
             staora = sqlca.sqlcode;
        }
        else {
             if ( sqlca.sqlcode == -1405 )
                  staora = 0;
             else {
                  fprintf (stderr, "2) Error leyendo C6 (%d)\n", sqlca.sqlcode);
                  staora = sqlca.sqlcode;
             }
        }

  }
}

void ver_inf()
{
  /* EXEC SQL select nit
           into  :nit
           from   nits
           where  codigo_nit = to_number(:codigo_nitb); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 15;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select nit into :b0  from nits where codigo_nit=to_number(:\
b1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )916;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&nit;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&codigo_nitb;
  sqlstm.sqhstl[1] = (unsigned int  )12;
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



  /* EXEC SQL select infa, infb, infc, infd
           into :veca, :vecb, :vecc, :vecd
           from   plan
           where  codigo_emp = :codigo_emp and
                  cuenta     = :cuentab; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 15;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b3  from pl\
an where (codigo_emp=:b4 and cuenta=:b5)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )939;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&veca;
  sqlstm.sqhstl[0] = (unsigned int  )22;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&vecb;
  sqlstm.sqhstl[1] = (unsigned int  )22;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&vecc;
  sqlstm.sqhstl[2] = (unsigned int  )22;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&vecd;
  sqlstm.sqhstl[3] = (unsigned int  )22;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[4] = (unsigned int  )5;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&cuentab;
  sqlstm.sqhstl[5] = (unsigned int  )22;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
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



  if ( sqlca.sqlcode == 1403 )
      printf ("Cuentab (%-s) no existe\n", cuentab.arr);

  veca.arr [veca.len] = '\0';
  vecb.arr [vecb.len] = '\0';
  vecc.arr [vecc.len] = '\0';
  vecd.arr [vecd.len] = '\0';

  strcpy (vecplan[1], veca.arr);
  strcpy (vecplan[2], vecb.arr);
  strcpy (vecplan[3], vecc.arr);
  strcpy (vecplan[4], vecd.arr);

  for (i=1;i<=4;i++) {
       strcpy(inf[i],"");
  }
  i=j=0;
  for (i=1;i<=4;i++) {
      if (!strcmp(vecplan[i],"NIT")) {
          sprintf(inf[i],"%12.0f",nit);
      }
      for (j=1;j<=k;j++) {
          if (!strcmp(vecplan[i],vecinf[j].arr) && strcmp(vecplan[i],"") ) {
//              printf ("vecplan[%d]=%s vecinf[%d].arr=%s",i,vecplan[i],j,vecinf[j].arr);getchar();
              if (strcmp(codigovar.arr,"") || !strcmp(codigovar.arr,"0")) {
                  strcpy(inf[i],codigovar.arr);
              }
          }
      }
  }

  strcpy (infa.arr, inf[1]);
  strcpy (infb.arr, inf[2]);
  strcpy (infc.arr, inf[3]);
  strcpy (infd.arr, inf[4]);
  infa.len = strlen(infa.arr);
  infb.len = strlen(infb.arr);
  infc.len = strlen(infc.arr);
  infd.len = strlen(infd.arr);
}

