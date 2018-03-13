
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
           char  filnam[15];
};
static const struct sqlcxp sqlfpn =
{
    14,
    ".\\ajusteinf.pc"
};


static unsigned long sqlctx = 1047051;


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

 static const char *sq0003 = 
"select inf  from infacu            ";

 static const char *sq0004 = 
"select cuenta_db ,cuenta_cr ,sum((nvl(valor_deb,0)-nvl(valor_cre,0))) ,last_\
day(to_date(:b0,'yyyymm')) ,sucursal ,cen_cos  from acumulados a ,ajusteinf i \
where (((((a.codigo_emp=:b1 and a.codigo_emp=i.codigo_emp) and a.libro=:b2) an\
d a.ano_mes>=:b3) and a.ano_mes<=:b4) and substr(a.cuenta,1,length(i.cuenta))=\
i.cuenta) group by i.cuenta,cuenta_db,cuenta_cr,sucursal,cen_cos order by i.cu\
enta,sucursal,cen_cos            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,150,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,140,0,4,199,0,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
67,0,0,3,35,0,9,212,0,0,0,0,0,1,0,
82,0,0,3,0,0,13,220,0,0,1,0,0,1,0,2,9,0,0,
101,0,0,3,0,0,15,234,0,0,0,0,0,1,0,
116,0,0,4,421,0,9,250,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
151,0,0,3,0,0,15,257,0,0,0,0,0,1,0,
166,0,0,4,0,0,15,258,0,0,0,0,0,1,0,
181,0,0,5,0,0,30,260,0,0,0,0,0,1,0,
196,0,0,6,134,0,4,271,0,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
227,0,0,7,147,0,2,286,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
254,0,0,8,115,0,2,297,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
281,0,0,9,165,0,4,312,0,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
312,0,0,10,121,0,3,328,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
343,0,0,11,117,0,5,339,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
374,0,0,12,161,0,4,351,0,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
405,0,0,13,121,0,3,362,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
436,0,0,14,117,0,5,369,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
467,0,0,4,0,0,13,376,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,
506,0,0,15,222,0,3,387,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
541,0,0,16,216,0,3,442,0,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
616,0,0,17,216,0,3,483,0,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
691,0,0,18,216,0,3,539,0,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
766,0,0,19,216,0,3,581,0,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
841,0,0,4,0,0,13,609,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,
872,0,0,20,99,0,4,622,0,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,
9,0,0,
};


/*****************************************************************
* AJUSTEINF.PC Version 1.0 - Rev 1.2 - Jun. 30/92.
*
* ajusteinf.pc. Ajuste por inflacion.
*
* Uso: ajusteinf codigo_emp aamm device copias userid/password
*
* Martin A. Toloza L. Creado en Noviembre 25 de 1.997.
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
/* VARCHAR nomb_emp    [41]; */ 
struct { unsigned short len; unsigned char arr[41]; } nomb_emp;

double  nit;
int     digito;
/* VARCHAR codigo_emp  [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

                                 /* Infacu (C2) */
/* VARCHAR vecinf      [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecinf[20];

                                 /* Movto_C (C3) */
/* VARCHAR ano_mesf    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesf;

/* VARCHAR comprobanteb[7]; */ 
struct { unsigned short len; unsigned char arr[7]; } comprobanteb;

/* VARCHAR consecutivob[7]; */ 
struct { unsigned short len; unsigned char arr[7]; } consecutivob;

/* VARCHAR fechab      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechab;

                                 /* Movto_D (C4) */
/* VARCHAR secuenciab  [7]; */ 
struct { unsigned short len; unsigned char arr[7]; } secuenciab;

/* VARCHAR cuentab     [11]; */ 
struct { unsigned short len; unsigned char arr[11]; } cuentab;

/* VARCHAR infa        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infa;

/* VARCHAR infb        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infb;

/* VARCHAR infc        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infc;

/* VARCHAR infd        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infd;

/* VARCHAR codigo_nitb [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nitb;

/* VARCHAR valor_debb  [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } valor_debb;

/* VARCHAR valor_creb  [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } valor_creb;

char    inf         [5][14];
                                 /* Control_Mes (C5) */
double  consecutivo;
/* VARCHAR fuenteb     [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } fuenteb;

double  consecutivo12;
                                 /* Acumulados (C6) */
/* VARCHAR cuenta_db   [11]; */ 
struct { unsigned short len; unsigned char arr[11]; } cuenta_db;

/* VARCHAR cuenta_cr   [11]; */ 
struct { unsigned short len; unsigned char arr[11]; } cuenta_cr;

double  valor;
/* VARCHAR fecha_asto  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_asto;

/* VARCHAR ano_mesi    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR ano_mes     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR codigo      [11]; */ 
struct { unsigned short len; unsigned char arr[11]; } codigo;

                                 /* Plan (C8) */
/* VARCHAR veca        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } veca;

/* VARCHAR vecb        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecb;

/* VARCHAR vecc        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecc;

/* VARCHAR vecd        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecd;

char    vecplan     [5][14];

/* sucursales y c.costo */

/* VARCHAR sucursal_aj[05]; */ 
struct { unsigned short len; unsigned char arr[5]; } sucursal_aj;

/* VARCHAR cen_cos_aj [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } cen_cos_aj;

/* VARCHAR sucursalb  [05]; */ 
struct { unsigned short len; unsigned char arr[5]; } sucursalb;

/* VARCHAR cen_cosb   [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } cen_cosb;

/* VARCHAR libro      [04]; */ 
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
double  nitn;
int     diai;
int     mesx, mesi, mesf;
int     anox, anoi, anof;
int     i, j, k;
float   ptaje;
char    ptajeb[7];
char    cadena[100];
char    login[20];
char    copias[5];
int     codigo_nit;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 10)
       {
	      printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp aaaamm copias pagina device ptaje nro_cpbte libro userid/password@esquema\n");
      	printf ("      device : t salida por terminal\n");
      	printf ("      device : s salida standar     \n");
      	printf ("               Px salida por impresora (x nro printer)\n");
        printf ("      libro(0= COLGAAP 1=IFRS)\n");
      	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (copias,           argv[3]);
       strcpy (pagina,           argv[4]);
       strcpy (device,           argv[5]);
       strlow (device);
       strcpy (ptajeb,           argv[6]);
       ptaje = ( float ) atof(ptajeb);
       strcpy (comprobanteb.arr, argv[7]);
       comprobanteb.len =        strlen(comprobanteb.arr);

       strcpy (libro.arr,        argv[8]);
       libro.len        =        strlen(libro.arr);
    if (!strpos ("/", argv[9]))
       {
        printf ("user id/password@esquema incorrecto.\n");
	      exit (1);
       }

    strcpy (uid.arr,    argv[9]);
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
    mesf=mesi+1;
    if (mesi==12) {
        sprintf (ano_mes.arr, "%d%02d",anoi,13);
        ano_mes.len  =      strlen(ano_mes.arr);
        sprintf (ano_mesi.arr,"%d%02d",anoi,13);
        ano_mesi.len =     strlen(ano_mesi.arr);
        anof=anoi+1;
        mesf=1;
    }
    sprintf (ano_mesf.arr,"%d%02d",anof,mesf);
    ano_mesf.len =       strlen(ano_mesf.arr);

//    printf("Paso-1"); getchar();
    /* EXEC SQL select n.nombre, n.nit, n.digito
                    into :nomb_emp, :nit, :digito
             from   nits n, empresas e
             where  n.codigo_nit = e.codigo_nit and
                    e.codigo_emp = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select n.nombre ,n.nit ,n.digito into :b0,:b1,:b2  from n\
its n ,empresas e where (n.codigo_nit=e.codigo_nit and e.codigo_emp=to_number(\
:b3))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )36;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_emp;
    sqlstm.sqhstl[0] = (unsigned int  )43;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&nit;
    sqlstm.sqhstl[1] = (unsigned int  )8;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&digito;
    sqlstm.sqhstl[2] = (unsigned int  )4;
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



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Empresa (%d)\n", sqlca.sqlcode);

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
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )67;
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
//    printf("Paso-2"); getchar();
    while (staora == 0) {

          /* EXEC SQL FETCH C2 INTO :vecinf; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )20;
          sqlstm.offset = (unsigned int  )82;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (         void  *)vecinf;
          sqlstm.sqhstl[0] = (unsigned int  )16;
          sqlstm.sqhsts[0] = (         int  )16;
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



          if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
             fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);

          staora  = sqlca.sqlcode;
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
    sqlstm.offset = (unsigned int  )101;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



//    printf("Paso-3"); getchar();
    /* EXEC SQL DECLARE C6 CURSOR FOR
             select cuenta_db, cuenta_cr, sum(nvl(valor_deb,0)-nvl(valor_cre,0)),
                    last_day(to_date(:ano_mesf,'yyyymm')), sucursal, cen_cos
             from  acumulados a, ajusteinf i
             where a.codigo_emp =  :codigo_emp                     and
                   a.codigo_emp = i.codigo_emp                     and
                   a.libro      =  :libro                          and
                   a.ano_mes   >=  :ano_mesi                       and
                   a.ano_mes   <=  :ano_mes                        and
                   substr(a.cuenta,1,length(i.cuenta)) = i.cuenta
             group by i.cuenta, cuenta_db, cuenta_cr, sucursal, cen_cos
             order by i.cuenta, sucursal, cen_cos; */ 


    /* EXEC SQL OPEN C6; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0004;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )116;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&ano_mesf;
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
    sqlstm.sqhstv[2] = (         void  *)&libro;
    sqlstm.sqhstl[2] = (unsigned int  )6;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&ano_mesi;
    sqlstm.sqhstl[3] = (unsigned int  )22;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&ano_mes;
    sqlstm.sqhstl[4] = (unsigned int  )22;
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


//    printf("Paso-4"); getchar();

    hacer_asiento();

    cierre_impresora();

    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )151;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL CLOSE C6; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )166;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL COMMIT WORK RELEASE; */ 

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
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    exit   (0);
}

void hacer_asiento()
{
  strcpy(fuenteb.arr,"12");
  fuenteb.len = strlen(fuenteb.arr);

 /* Lee consecutivo de control_mes Fte 12 Cns ultimo Asiento Aj x Inflacion */
  /* EXEC SQL select consecutivo   into :consecutivo12
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
  sqlstm.offset = (unsigned int  )196;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&consecutivo12;
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



  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
      fprintf (stderr, "Error leyendo Control_Mes (%d)\n", sqlca.sqlcode);
//    printf("Paso-5"); getchar();
  }
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo12);
        consecutivob.len = strlen(consecutivob.arr);
//    printf("Paso-5.1"); getchar();

        /* EXEC SQL delete from movto_c
                 where codigo_emp   = to_number(:codigo_emp)   and
                       comprobante  = to_number(:comprobanteb) and
                       clase        = 'CD'                     and
                       tipo         = '8'                      and
                       ano_mes      = to_number(:ano_mesf); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "delete  from movto_c  where ((((codigo_emp=to_number(\
:b0) and comprobante=to_number(:b1)) and clase='CD') and tipo='8') and ano_mes\
=to_number(:b2))";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )227;
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
        sqlstm.sqhstl[1] = (unsigned int  )9;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
        sqlstm.sqhstl[2] = (unsigned int  )22;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
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
            fprintf (stderr, "Error leyendo Movto_Cx (%d)\n", sqlca.sqlcode);
//    printf("Paso-5.2 %s %s %s",codigo_emp.arr, ano_mesf.arr, consecutivob.arr); getchar();

        /* EXEC SQL delete from movto_d
                 where codigo_emp   = to_number(:codigo_emp)   and
                       ano_mes      = to_number(:ano_mesf)     and
                       consecutivo  = to_number(:consecutivob); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "delete  from movto_d  where ((codigo_emp=to_number(:b\
0) and ano_mes=to_number(:b1)) and consecutivo=to_number(:b2))";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )254;
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
        sqlstm.sqhstl[1] = (unsigned int  )22;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&consecutivob;
        sqlstm.sqhstl[2] = (unsigned int  )9;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
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



//    printf("Paso-5.3"); getchar();
        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo Movto_D (%d)\n", sqlca.sqlcode);
  }

  strcpy(fuenteb.arr,"08");
  fuenteb.len = strlen(fuenteb.arr);

  /* Lee consecutivo de Control_mes Fte 08 sgte consecutivo */

  /* EXEC SQL select consecutivo+1 into :consecutivo
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesf)      and
                 codigo_emp   = to_number(:codigo_emp)
                 for update of consecutivo; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select (consecutivo+1) into :b0  from control_mes where ((f\
uente=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3)\
) for update of consecutivo ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )281;
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



//    printf("Paso-5.4"); getchar();
  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes Fte 08 (%d)\n", sqlca.sqlcode);
      consecutivo=1;
      sprintf(consecutivob.arr,"%5.0f",consecutivo);
      consecutivob.len = strlen(consecutivob.arr);
               /* Inserta en Control_Mes Fte 08 si no existe (C11) */
//    printf("Paso-5.5"); getchar();
      /* EXEC SQL insert into control_mes
               (fuente, ano_mes, nombre, consecutivo, codigo_emp)
               values (:fuenteb, :ano_mesf, 'CONTROL AJUSTE INFLACION',
                       :consecutivob, :codigo_emp); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into control_mes(fuente,ano_mes,nombre,consecuti\
vo,codigo_emp) values (:b0,:b1,'CONTROL AJUSTE INFLACION',:b2,:b3)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )312;
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
      sqlstm.sqhstl[1] = (unsigned int  )22;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&consecutivob;
      sqlstm.sqhstl[2] = (unsigned int  )9;
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


//    printf("Paso-5.5.1"); getchar();
     }
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo);
        consecutivob.len = strlen(consecutivob.arr);
               /* Actualiza Cns de Fte 08 en control_mes (C12) */
//    printf("Paso-5.6"); getchar();
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
        sqlstm.offset = (unsigned int  )343;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&consecutivob;
        sqlstm.sqhstl[0] = (unsigned int  )9;
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
        sqlstm.sqhstl[2] = (unsigned int  )22;
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


//    printf("Paso-5.6.1"); getchar();
  }

//    printf("Paso-6"); getchar();
  strcpy(fuenteb.arr,"12");
  fuenteb.len = strlen(fuenteb.arr);

  /* EXEC SQL select consecutivo   into :consecutivo12
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesf)      and
                 codigo_emp   = to_number(:codigo_emp)
                 for update of consecutivo; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3)) fo\
r update of consecutivo ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )374;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&consecutivo12;
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



  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes Fte 12 (%d)\n", sqlca.sqlcode);
               /* Inserta en Control_Mes Fte 12 si no existe (C11) */
      /* EXEC SQL insert into control_mes
               (fuente, ano_mes, nombre, consecutivo, codigo_emp)
               values (:fuenteb, :ano_mesf, 'CONTROL AJUSTE INFLACION',
                       :consecutivob, :codigo_emp); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into control_mes(fuente,ano_mes,nombre,consecuti\
vo,codigo_emp) values (:b0,:b1,'CONTROL AJUSTE INFLACION',:b2,:b3)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )405;
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
      sqlstm.sqhstl[1] = (unsigned int  )22;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&consecutivob;
      sqlstm.sqhstl[2] = (unsigned int  )9;
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
               /* Actualiza Cns de Fte 12 en control_mes (C12) */
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
        sqlstm.offset = (unsigned int  )436;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&consecutivob;
        sqlstm.sqhstl[0] = (unsigned int  )9;
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
        sqlstm.sqhstl[2] = (unsigned int  )22;
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

  /* EXEC SQL FETCH C6 INTO :cuenta_db, :cuenta_cr, :valor, :fecha_asto, :sucursal_aj, :cen_cos_aj; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )467;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&cuenta_db;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&cuenta_cr;
  sqlstm.sqhstl[1] = (unsigned int  )13;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&valor;
  sqlstm.sqhstl[2] = (unsigned int  )8;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&fecha_asto;
  sqlstm.sqhstl[3] = (unsigned int  )22;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&sucursal_aj;
  sqlstm.sqhstl[4] = (unsigned int  )7;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&cen_cos_aj;
  sqlstm.sqhstl[5] = (unsigned int  )5;
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


//    printf("Paso-7"); getchar();

  fecha_asto.arr  [fecha_asto.len] = '\0';
  strcpy(fechab.arr,fecha_asto.arr);
  fechab.len = strlen(fechab.arr);


//  printf("1) %s %s %s %s %s",codigo_emp.arr, ano_mesf.arr, comprobanteb.arr, consecutivob.arr, fechab.arr); getchar();


  /* EXEC SQL insert into movto_c
           (codigo_emp, ano_mes, comprobante, consecutivo, clase,
            descripcion, fecha, tipo, estado, nitb, codigo_nitb, valorb, retencion, contado)
           values(:codigo_emp, :ano_mesf, :comprobanteb, :consecutivob, 'CD',
                  'AJUSTES POR INFLACION',:fechab,'8', '0','','','','',''); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into movto_c(codigo_emp,ano_mes,comprobante,consecut\
ivo,clase,descripcion,fecha,tipo,estado,nitb,codigo_nitb,valorb,retencion,cont\
ado) values (:b0,:b1,:b2,:b3,'CD','AJUSTES POR INFLACION',:b4,'8','0','','',''\
,'','')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )506;
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
  sqlstm.sqhstl[1] = (unsigned int  )22;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&comprobanteb;
  sqlstm.sqhstl[2] = (unsigned int  )9;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&consecutivob;
  sqlstm.sqhstl[3] = (unsigned int  )9;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&fechab;
  sqlstm.sqhstl[4] = (unsigned int  )22;
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



  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
      fprintf (stderr, "Error leyendo Movto_Cy (%d)\n", sqlca.sqlcode);
      fprintf(stderr,"codigo_emp <%s>",codigo_emp.arr);
      fprintf(stderr,"ano_mesf <%s>",ano_mesf.arr);
      fprintf(stderr,"comprobanteb <%s>",comprobanteb.arr);
      fprintf(stderr,"consecutivob <%s>",consecutivob.arr);
      fprintf(stderr,"fechab <%s>",fechab.arr); getchar();
  }

  staora  = 0;
  while (staora == 0) {

//    printf("Paso-8"); getchar();
        cuenta_db.arr   [cuenta_db.len]  = '\0';
        cuenta_cr.arr   [cuenta_cr.len]  = '\0';
        fecha_asto.arr  [fecha_asto.len] = '\0';
        secuencia++;

        sprintf(secuenciab.arr,"%6.0f",secuencia);
        secuenciab.len = strlen(secuenciab.arr);
        if (codigo_nit==0)
           strcpy(codigo_nitb.arr,"");
        else sprintf(codigo_nitb.arr,"%5d",codigo_nit);
        codigo_nitb.len = strlen(codigo_nitb.arr);
        if (valor<0)
           valor=valor*-1;
        valor=valor*ptaje/100;
        valor=redondo(valor);

        if (valor> 0) {
           strcpy(codigo.arr,cuenta_db.arr);
           codigo.len = strlen(codigo.arr);
           strcpy(cuentab.arr,cuenta_db.arr);
           cuentab.len = strlen(cuentab.arr);
           ver_inf();
           sprintf(valor_debb.arr,"%10.2f",valor);
           valor_debb.len = strlen(valor_debb.arr);
           strcpy (valor_creb.arr,"");
/*
           valor_debb.arr[strpos(".",valor_debb.arr)-1] = ',';
*/
           valor_creb.len = strlen(valor_creb.arr);

           strcpy(sucursalb.arr,sucursal_aj.arr);
           sucursalb.len = strlen(sucursalb.arr);
           strcpy(cen_cosb.arr,cen_cos_aj.arr);
           cen_cosb.len = strlen(cen_cosb.arr);

                                          /* Graba en movto_d el Debito (C4) */
           /* EXEC SQL insert into movto_d
                    (codigo_emp, ano_mes, consecutivo, secuencia,
                     cuenta, infa, infb, infc, infd, codigo_nit, 
                     valor_deb, valor_cre, sucursal, cen_cos, libro)
                    values(:codigo_emp, :ano_mesf, :consecutivob, :secuenciab,
                           :cuentab, :infa, :infb, :infc, :infd,
                           :codigo_nitb, :valor_debb, :valor_creb,:sucursalb,:cen_cosb,:libro); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 10;
           sqlstm.arrsiz = 15;
           sqlstm.sqladtp = &sqladt;
           sqlstm.sqltdsp = &sqltds;
           sqlstm.stmt = "insert into movto_d(codigo_emp,ano_mes,consecutivo\
,secuencia,cuenta,infa,infb,infc,infd,codigo_nit,valor_deb,valor_cre,sucursal,\
cen_cos,libro) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b12,\
:b13,:b14)";
           sqlstm.iters = (unsigned int  )1;
           sqlstm.offset = (unsigned int  )541;
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
           sqlstm.sqhstl[1] = (unsigned int  )22;
           sqlstm.sqhsts[1] = (         int  )0;
           sqlstm.sqindv[1] = (         void  *)0;
           sqlstm.sqinds[1] = (         int  )0;
           sqlstm.sqharm[1] = (unsigned int  )0;
           sqlstm.sqadto[1] = (unsigned short )0;
           sqlstm.sqtdso[1] = (unsigned short )0;
           sqlstm.sqhstv[2] = (         void  *)&consecutivob;
           sqlstm.sqhstl[2] = (unsigned int  )9;
           sqlstm.sqhsts[2] = (         int  )0;
           sqlstm.sqindv[2] = (         void  *)0;
           sqlstm.sqinds[2] = (         int  )0;
           sqlstm.sqharm[2] = (unsigned int  )0;
           sqlstm.sqadto[2] = (unsigned short )0;
           sqlstm.sqtdso[2] = (unsigned short )0;
           sqlstm.sqhstv[3] = (         void  *)&secuenciab;
           sqlstm.sqhstl[3] = (unsigned int  )9;
           sqlstm.sqhsts[3] = (         int  )0;
           sqlstm.sqindv[3] = (         void  *)0;
           sqlstm.sqinds[3] = (         int  )0;
           sqlstm.sqharm[3] = (unsigned int  )0;
           sqlstm.sqadto[3] = (unsigned short )0;
           sqlstm.sqtdso[3] = (unsigned short )0;
           sqlstm.sqhstv[4] = (         void  *)&cuentab;
           sqlstm.sqhstl[4] = (unsigned int  )13;
           sqlstm.sqhsts[4] = (         int  )0;
           sqlstm.sqindv[4] = (         void  *)0;
           sqlstm.sqinds[4] = (         int  )0;
           sqlstm.sqharm[4] = (unsigned int  )0;
           sqlstm.sqadto[4] = (unsigned short )0;
           sqlstm.sqtdso[4] = (unsigned short )0;
           sqlstm.sqhstv[5] = (         void  *)&infa;
           sqlstm.sqhstl[5] = (unsigned int  )16;
           sqlstm.sqhsts[5] = (         int  )0;
           sqlstm.sqindv[5] = (         void  *)0;
           sqlstm.sqinds[5] = (         int  )0;
           sqlstm.sqharm[5] = (unsigned int  )0;
           sqlstm.sqadto[5] = (unsigned short )0;
           sqlstm.sqtdso[5] = (unsigned short )0;
           sqlstm.sqhstv[6] = (         void  *)&infb;
           sqlstm.sqhstl[6] = (unsigned int  )16;
           sqlstm.sqhsts[6] = (         int  )0;
           sqlstm.sqindv[6] = (         void  *)0;
           sqlstm.sqinds[6] = (         int  )0;
           sqlstm.sqharm[6] = (unsigned int  )0;
           sqlstm.sqadto[6] = (unsigned short )0;
           sqlstm.sqtdso[6] = (unsigned short )0;
           sqlstm.sqhstv[7] = (         void  *)&infc;
           sqlstm.sqhstl[7] = (unsigned int  )16;
           sqlstm.sqhsts[7] = (         int  )0;
           sqlstm.sqindv[7] = (         void  *)0;
           sqlstm.sqinds[7] = (         int  )0;
           sqlstm.sqharm[7] = (unsigned int  )0;
           sqlstm.sqadto[7] = (unsigned short )0;
           sqlstm.sqtdso[7] = (unsigned short )0;
           sqlstm.sqhstv[8] = (         void  *)&infd;
           sqlstm.sqhstl[8] = (unsigned int  )16;
           sqlstm.sqhsts[8] = (         int  )0;
           sqlstm.sqindv[8] = (         void  *)0;
           sqlstm.sqinds[8] = (         int  )0;
           sqlstm.sqharm[8] = (unsigned int  )0;
           sqlstm.sqadto[8] = (unsigned short )0;
           sqlstm.sqtdso[8] = (unsigned short )0;
           sqlstm.sqhstv[9] = (         void  *)&codigo_nitb;
           sqlstm.sqhstl[9] = (unsigned int  )8;
           sqlstm.sqhsts[9] = (         int  )0;
           sqlstm.sqindv[9] = (         void  *)0;
           sqlstm.sqinds[9] = (         int  )0;
           sqlstm.sqharm[9] = (unsigned int  )0;
           sqlstm.sqadto[9] = (unsigned short )0;
           sqlstm.sqtdso[9] = (unsigned short )0;
           sqlstm.sqhstv[10] = (         void  *)&valor_debb;
           sqlstm.sqhstl[10] = (unsigned int  )17;
           sqlstm.sqhsts[10] = (         int  )0;
           sqlstm.sqindv[10] = (         void  *)0;
           sqlstm.sqinds[10] = (         int  )0;
           sqlstm.sqharm[10] = (unsigned int  )0;
           sqlstm.sqadto[10] = (unsigned short )0;
           sqlstm.sqtdso[10] = (unsigned short )0;
           sqlstm.sqhstv[11] = (         void  *)&valor_creb;
           sqlstm.sqhstl[11] = (unsigned int  )17;
           sqlstm.sqhsts[11] = (         int  )0;
           sqlstm.sqindv[11] = (         void  *)0;
           sqlstm.sqinds[11] = (         int  )0;
           sqlstm.sqharm[11] = (unsigned int  )0;
           sqlstm.sqadto[11] = (unsigned short )0;
           sqlstm.sqtdso[11] = (unsigned short )0;
           sqlstm.sqhstv[12] = (         void  *)&sucursalb;
           sqlstm.sqhstl[12] = (unsigned int  )7;
           sqlstm.sqhsts[12] = (         int  )0;
           sqlstm.sqindv[12] = (         void  *)0;
           sqlstm.sqinds[12] = (         int  )0;
           sqlstm.sqharm[12] = (unsigned int  )0;
           sqlstm.sqadto[12] = (unsigned short )0;
           sqlstm.sqtdso[12] = (unsigned short )0;
           sqlstm.sqhstv[13] = (         void  *)&cen_cosb;
           sqlstm.sqhstl[13] = (unsigned int  )5;
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



           if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
               printf("Error Grabando Debito (%d)\n", sqlca.sqlcode);
               printf("codigo_emp <%s>",codigo_emp.arr);
               printf("ano_mesf <%s>",ano_mesf.arr);
               printf("consecutivob <%s>",consecutivob.arr);
               printf("secuenciab <%s>",secuenciab.arr);
               printf("cuentab <%s>",cuentab.arr);
               printf("infa <%s>",infa.arr);
               printf("infb <%s>",infb.arr);
               printf("infc <%s>",infc.arr);
               printf("infd <%s>",infd.arr);
               printf("codigo_nitb <%s>\n",codigo_nitb.arr);
               printf("valor_debb <%s>\n",valor_debb.arr);
               printf("valor_creb <%s>\n",valor_creb.arr);
               printf("sucursalb <%s>\n",sucursalb.arr);
               printf("cen_cosb <%s>\n",cen_cosb.arr); getchar();
           }

           strcpy(codigo.arr,cuenta_cr.arr);
           codigo.len = strlen(codigo.arr);
           strcpy(cuentab.arr,cuenta_cr.arr);
           cuentab.len = strlen(cuentab.arr);
           ver_inf();
           strcpy (valor_debb.arr,"");
           valor_debb.len = strlen(valor_debb.arr);
           sprintf(valor_creb.arr,"%10.2f",valor);
           valor_creb.len = strlen(valor_creb.arr);
/*
           valor_creb.arr[strpos(".",valor_creb.arr)-1] = ',';
*/
           valor_creb.len = strlen(valor_creb.arr);
                                         /* Graba en movto_d el Credito (C4) */

           /* EXEC SQL insert into movto_d
                    (codigo_emp, ano_mes, consecutivo, secuencia,
                     cuenta, infa, infb, infc, infd, codigo_nit, 
                     valor_deb, valor_cre, sucursal, cen_cos, libro)
                    values(:codigo_emp, :ano_mesf, :consecutivob, :secuenciab,
                           :cuentab, :infa, :infb, :infc, :infd,
                           :codigo_nitb, :valor_debb, :valor_creb,:sucursalb,:cen_cosb,:libro); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 10;
           sqlstm.arrsiz = 15;
           sqlstm.sqladtp = &sqladt;
           sqlstm.sqltdsp = &sqltds;
           sqlstm.stmt = "insert into movto_d(codigo_emp,ano_mes,consecutivo\
,secuencia,cuenta,infa,infb,infc,infd,codigo_nit,valor_deb,valor_cre,sucursal,\
cen_cos,libro) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b12,\
:b13,:b14)";
           sqlstm.iters = (unsigned int  )1;
           sqlstm.offset = (unsigned int  )616;
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
           sqlstm.sqhstl[1] = (unsigned int  )22;
           sqlstm.sqhsts[1] = (         int  )0;
           sqlstm.sqindv[1] = (         void  *)0;
           sqlstm.sqinds[1] = (         int  )0;
           sqlstm.sqharm[1] = (unsigned int  )0;
           sqlstm.sqadto[1] = (unsigned short )0;
           sqlstm.sqtdso[1] = (unsigned short )0;
           sqlstm.sqhstv[2] = (         void  *)&consecutivob;
           sqlstm.sqhstl[2] = (unsigned int  )9;
           sqlstm.sqhsts[2] = (         int  )0;
           sqlstm.sqindv[2] = (         void  *)0;
           sqlstm.sqinds[2] = (         int  )0;
           sqlstm.sqharm[2] = (unsigned int  )0;
           sqlstm.sqadto[2] = (unsigned short )0;
           sqlstm.sqtdso[2] = (unsigned short )0;
           sqlstm.sqhstv[3] = (         void  *)&secuenciab;
           sqlstm.sqhstl[3] = (unsigned int  )9;
           sqlstm.sqhsts[3] = (         int  )0;
           sqlstm.sqindv[3] = (         void  *)0;
           sqlstm.sqinds[3] = (         int  )0;
           sqlstm.sqharm[3] = (unsigned int  )0;
           sqlstm.sqadto[3] = (unsigned short )0;
           sqlstm.sqtdso[3] = (unsigned short )0;
           sqlstm.sqhstv[4] = (         void  *)&cuentab;
           sqlstm.sqhstl[4] = (unsigned int  )13;
           sqlstm.sqhsts[4] = (         int  )0;
           sqlstm.sqindv[4] = (         void  *)0;
           sqlstm.sqinds[4] = (         int  )0;
           sqlstm.sqharm[4] = (unsigned int  )0;
           sqlstm.sqadto[4] = (unsigned short )0;
           sqlstm.sqtdso[4] = (unsigned short )0;
           sqlstm.sqhstv[5] = (         void  *)&infa;
           sqlstm.sqhstl[5] = (unsigned int  )16;
           sqlstm.sqhsts[5] = (         int  )0;
           sqlstm.sqindv[5] = (         void  *)0;
           sqlstm.sqinds[5] = (         int  )0;
           sqlstm.sqharm[5] = (unsigned int  )0;
           sqlstm.sqadto[5] = (unsigned short )0;
           sqlstm.sqtdso[5] = (unsigned short )0;
           sqlstm.sqhstv[6] = (         void  *)&infb;
           sqlstm.sqhstl[6] = (unsigned int  )16;
           sqlstm.sqhsts[6] = (         int  )0;
           sqlstm.sqindv[6] = (         void  *)0;
           sqlstm.sqinds[6] = (         int  )0;
           sqlstm.sqharm[6] = (unsigned int  )0;
           sqlstm.sqadto[6] = (unsigned short )0;
           sqlstm.sqtdso[6] = (unsigned short )0;
           sqlstm.sqhstv[7] = (         void  *)&infc;
           sqlstm.sqhstl[7] = (unsigned int  )16;
           sqlstm.sqhsts[7] = (         int  )0;
           sqlstm.sqindv[7] = (         void  *)0;
           sqlstm.sqinds[7] = (         int  )0;
           sqlstm.sqharm[7] = (unsigned int  )0;
           sqlstm.sqadto[7] = (unsigned short )0;
           sqlstm.sqtdso[7] = (unsigned short )0;
           sqlstm.sqhstv[8] = (         void  *)&infd;
           sqlstm.sqhstl[8] = (unsigned int  )16;
           sqlstm.sqhsts[8] = (         int  )0;
           sqlstm.sqindv[8] = (         void  *)0;
           sqlstm.sqinds[8] = (         int  )0;
           sqlstm.sqharm[8] = (unsigned int  )0;
           sqlstm.sqadto[8] = (unsigned short )0;
           sqlstm.sqtdso[8] = (unsigned short )0;
           sqlstm.sqhstv[9] = (         void  *)&codigo_nitb;
           sqlstm.sqhstl[9] = (unsigned int  )8;
           sqlstm.sqhsts[9] = (         int  )0;
           sqlstm.sqindv[9] = (         void  *)0;
           sqlstm.sqinds[9] = (         int  )0;
           sqlstm.sqharm[9] = (unsigned int  )0;
           sqlstm.sqadto[9] = (unsigned short )0;
           sqlstm.sqtdso[9] = (unsigned short )0;
           sqlstm.sqhstv[10] = (         void  *)&valor_debb;
           sqlstm.sqhstl[10] = (unsigned int  )17;
           sqlstm.sqhsts[10] = (         int  )0;
           sqlstm.sqindv[10] = (         void  *)0;
           sqlstm.sqinds[10] = (         int  )0;
           sqlstm.sqharm[10] = (unsigned int  )0;
           sqlstm.sqadto[10] = (unsigned short )0;
           sqlstm.sqtdso[10] = (unsigned short )0;
           sqlstm.sqhstv[11] = (         void  *)&valor_creb;
           sqlstm.sqhstl[11] = (unsigned int  )17;
           sqlstm.sqhsts[11] = (         int  )0;
           sqlstm.sqindv[11] = (         void  *)0;
           sqlstm.sqinds[11] = (         int  )0;
           sqlstm.sqharm[11] = (unsigned int  )0;
           sqlstm.sqadto[11] = (unsigned short )0;
           sqlstm.sqtdso[11] = (unsigned short )0;
           sqlstm.sqhstv[12] = (         void  *)&sucursalb;
           sqlstm.sqhstl[12] = (unsigned int  )7;
           sqlstm.sqhsts[12] = (         int  )0;
           sqlstm.sqindv[12] = (         void  *)0;
           sqlstm.sqinds[12] = (         int  )0;
           sqlstm.sqharm[12] = (unsigned int  )0;
           sqlstm.sqadto[12] = (unsigned short )0;
           sqlstm.sqtdso[12] = (unsigned short )0;
           sqlstm.sqhstv[13] = (         void  *)&cen_cosb;
           sqlstm.sqhstl[13] = (unsigned int  )5;
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



           if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
               printf("Error Grabando Credito (%d)\n", sqlca.sqlcode);
               printf("codigo_emp <%s>",codigo_emp.arr);
               printf("ano_mesf <%s>",ano_mesf.arr);
               printf("consecutivob <%s>",consecutivob.arr);
               printf("secuenciab <%s>",secuenciab.arr);
               printf("cuentab <%s>",cuentab.arr);
               printf("infa <%s>",infa.arr);
               printf("infb <%s>",infb.arr);
               printf("infc <%s>",infc.arr);
               printf("infd <%s>",infd.arr);
               printf("codigo_nitb <%s>\n",codigo_nitb.arr);
               printf("valor_debb <%s>\n",valor_debb.arr);
               printf("valor_creb <%s>\n",valor_creb.arr);
               printf("sucursalb <%s>\n",sucursalb.arr);
               printf("cen_cosb <%s>\n",cen_cosb.arr); getchar();
           }
        }

        else

        {
           valor=valor*-1;

           if (valor != 0) {
              strcpy(codigo.arr,cuenta_db.arr);
              codigo.len = strlen(codigo.arr);
              strcpy(cuentab.arr,cuenta_db.arr);
              cuentab.len = strlen(cuentab.arr);
              secuencia++;

              sprintf(secuenciab.arr,"%6.0f",secuencia);
              secuenciab.len = strlen(secuenciab.arr);

              ver_inf();

              strcpy (valor_debb.arr,"");
              valor_debb.len = strlen(valor_debb.arr);
              sprintf(valor_creb.arr,"%10.2f",valor);
              valor_creb.len = strlen(valor_creb.arr);
              valor_creb.len = strlen(valor_creb.arr);

              strcpy(sucursalb.arr,sucursal_aj.arr);
              sucursalb.len = strlen(sucursalb.arr);
              strcpy(cen_cosb.arr,cen_cos_aj.arr);
              cen_cosb.len = strlen(cen_cosb.arr);

                                          /* Graba en movto_d el Debito (C4) */
              /* EXEC SQL insert into movto_d
                    (codigo_emp, ano_mes, consecutivo, secuencia,
                     cuenta, infa, infb, infc, infd, codigo_nit, 
                     valor_deb, valor_cre, sucursal, cen_cos, libro)
                       values(:codigo_emp, :ano_mesf, :consecutivob, :secuenciab,
                              :cuentab, :infa, :infb, :infc, :infd,
                              :codigo_nitb, :valor_debb, :valor_creb,:sucursalb,:cen_cosb,:libro); */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 10;
              sqlstm.arrsiz = 15;
              sqlstm.sqladtp = &sqladt;
              sqlstm.sqltdsp = &sqltds;
              sqlstm.stmt = "insert into movto_d(codigo_emp,ano_mes,consecut\
ivo,secuencia,cuenta,infa,infb,infc,infd,codigo_nit,valor_deb,valor_cre,sucurs\
al,cen_cos,libro) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b\
12,:b13,:b14)";
              sqlstm.iters = (unsigned int  )1;
              sqlstm.offset = (unsigned int  )691;
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
              sqlstm.sqhstl[1] = (unsigned int  )22;
              sqlstm.sqhsts[1] = (         int  )0;
              sqlstm.sqindv[1] = (         void  *)0;
              sqlstm.sqinds[1] = (         int  )0;
              sqlstm.sqharm[1] = (unsigned int  )0;
              sqlstm.sqadto[1] = (unsigned short )0;
              sqlstm.sqtdso[1] = (unsigned short )0;
              sqlstm.sqhstv[2] = (         void  *)&consecutivob;
              sqlstm.sqhstl[2] = (unsigned int  )9;
              sqlstm.sqhsts[2] = (         int  )0;
              sqlstm.sqindv[2] = (         void  *)0;
              sqlstm.sqinds[2] = (         int  )0;
              sqlstm.sqharm[2] = (unsigned int  )0;
              sqlstm.sqadto[2] = (unsigned short )0;
              sqlstm.sqtdso[2] = (unsigned short )0;
              sqlstm.sqhstv[3] = (         void  *)&secuenciab;
              sqlstm.sqhstl[3] = (unsigned int  )9;
              sqlstm.sqhsts[3] = (         int  )0;
              sqlstm.sqindv[3] = (         void  *)0;
              sqlstm.sqinds[3] = (         int  )0;
              sqlstm.sqharm[3] = (unsigned int  )0;
              sqlstm.sqadto[3] = (unsigned short )0;
              sqlstm.sqtdso[3] = (unsigned short )0;
              sqlstm.sqhstv[4] = (         void  *)&cuentab;
              sqlstm.sqhstl[4] = (unsigned int  )13;
              sqlstm.sqhsts[4] = (         int  )0;
              sqlstm.sqindv[4] = (         void  *)0;
              sqlstm.sqinds[4] = (         int  )0;
              sqlstm.sqharm[4] = (unsigned int  )0;
              sqlstm.sqadto[4] = (unsigned short )0;
              sqlstm.sqtdso[4] = (unsigned short )0;
              sqlstm.sqhstv[5] = (         void  *)&infa;
              sqlstm.sqhstl[5] = (unsigned int  )16;
              sqlstm.sqhsts[5] = (         int  )0;
              sqlstm.sqindv[5] = (         void  *)0;
              sqlstm.sqinds[5] = (         int  )0;
              sqlstm.sqharm[5] = (unsigned int  )0;
              sqlstm.sqadto[5] = (unsigned short )0;
              sqlstm.sqtdso[5] = (unsigned short )0;
              sqlstm.sqhstv[6] = (         void  *)&infb;
              sqlstm.sqhstl[6] = (unsigned int  )16;
              sqlstm.sqhsts[6] = (         int  )0;
              sqlstm.sqindv[6] = (         void  *)0;
              sqlstm.sqinds[6] = (         int  )0;
              sqlstm.sqharm[6] = (unsigned int  )0;
              sqlstm.sqadto[6] = (unsigned short )0;
              sqlstm.sqtdso[6] = (unsigned short )0;
              sqlstm.sqhstv[7] = (         void  *)&infc;
              sqlstm.sqhstl[7] = (unsigned int  )16;
              sqlstm.sqhsts[7] = (         int  )0;
              sqlstm.sqindv[7] = (         void  *)0;
              sqlstm.sqinds[7] = (         int  )0;
              sqlstm.sqharm[7] = (unsigned int  )0;
              sqlstm.sqadto[7] = (unsigned short )0;
              sqlstm.sqtdso[7] = (unsigned short )0;
              sqlstm.sqhstv[8] = (         void  *)&infd;
              sqlstm.sqhstl[8] = (unsigned int  )16;
              sqlstm.sqhsts[8] = (         int  )0;
              sqlstm.sqindv[8] = (         void  *)0;
              sqlstm.sqinds[8] = (         int  )0;
              sqlstm.sqharm[8] = (unsigned int  )0;
              sqlstm.sqadto[8] = (unsigned short )0;
              sqlstm.sqtdso[8] = (unsigned short )0;
              sqlstm.sqhstv[9] = (         void  *)&codigo_nitb;
              sqlstm.sqhstl[9] = (unsigned int  )8;
              sqlstm.sqhsts[9] = (         int  )0;
              sqlstm.sqindv[9] = (         void  *)0;
              sqlstm.sqinds[9] = (         int  )0;
              sqlstm.sqharm[9] = (unsigned int  )0;
              sqlstm.sqadto[9] = (unsigned short )0;
              sqlstm.sqtdso[9] = (unsigned short )0;
              sqlstm.sqhstv[10] = (         void  *)&valor_debb;
              sqlstm.sqhstl[10] = (unsigned int  )17;
              sqlstm.sqhsts[10] = (         int  )0;
              sqlstm.sqindv[10] = (         void  *)0;
              sqlstm.sqinds[10] = (         int  )0;
              sqlstm.sqharm[10] = (unsigned int  )0;
              sqlstm.sqadto[10] = (unsigned short )0;
              sqlstm.sqtdso[10] = (unsigned short )0;
              sqlstm.sqhstv[11] = (         void  *)&valor_creb;
              sqlstm.sqhstl[11] = (unsigned int  )17;
              sqlstm.sqhsts[11] = (         int  )0;
              sqlstm.sqindv[11] = (         void  *)0;
              sqlstm.sqinds[11] = (         int  )0;
              sqlstm.sqharm[11] = (unsigned int  )0;
              sqlstm.sqadto[11] = (unsigned short )0;
              sqlstm.sqtdso[11] = (unsigned short )0;
              sqlstm.sqhstv[12] = (         void  *)&sucursalb;
              sqlstm.sqhstl[12] = (unsigned int  )7;
              sqlstm.sqhsts[12] = (         int  )0;
              sqlstm.sqindv[12] = (         void  *)0;
              sqlstm.sqinds[12] = (         int  )0;
              sqlstm.sqharm[12] = (unsigned int  )0;
              sqlstm.sqadto[12] = (unsigned short )0;
              sqlstm.sqtdso[12] = (unsigned short )0;
              sqlstm.sqhstv[13] = (         void  *)&cen_cosb;
              sqlstm.sqhstl[13] = (unsigned int  )5;
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



              if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
                  printf("Error Grabando Credito (%d)\n", sqlca.sqlcode);
                  printf("codigo_emp <%s>",codigo_emp.arr);
                  printf("ano_mesf <%s>",ano_mesf.arr);
                  printf("consecutivob <%s>",consecutivob.arr);
                  printf("secuenciab <%s>",secuenciab.arr);
                  printf("cuentab <%s>",cuentab.arr);
                  printf("infa <%s>",infa.arr);
                  printf("infb <%s>",infb.arr);
                  printf("infc <%s>",infc.arr);
                  printf("infd <%s>",infd.arr);
                  printf("codigo_nitb <%s>\n",codigo_nitb.arr);
                  printf("valor_debb <%s>\n",valor_debb.arr);
                  printf("valor_creb <%s>\n",valor_creb.arr); getchar();
              }

              strcpy(codigo.arr,cuenta_cr.arr);
              codigo.len = strlen(codigo.arr);
              strcpy(cuentab.arr,cuenta_cr.arr);
              cuentab.len = strlen(cuentab.arr);
              ver_inf();

              sprintf(valor_debb.arr,"%10.2f",valor);
              valor_debb.len = strlen(valor_debb.arr);
              strcpy (valor_creb.arr,"");
              valor_creb.len = strlen(valor_creb.arr);

              strcpy(sucursalb.arr,sucursal_aj.arr);
              sucursalb.len = strlen(sucursalb.arr);
              strcpy(cen_cosb.arr,cen_cos_aj.arr);
              cen_cosb.len = strlen(cen_cosb.arr);

                                         /* Graba en movto_d el Credito (C4) */

              /* EXEC SQL insert into movto_d
                    (codigo_emp, ano_mes, consecutivo, secuencia,
                     cuenta, infa, infb, infc, infd, codigo_nit, 
                     valor_deb, valor_cre, sucursal, cen_cos, libro)
                       values(:codigo_emp, :ano_mesf, :consecutivob, :secuenciab,
                              :cuentab, :infa, :infb, :infc, :infd,
                              :codigo_nitb, :valor_debb, :valor_creb,:sucursalb,:cen_cosb,:libro); */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 10;
              sqlstm.arrsiz = 15;
              sqlstm.sqladtp = &sqladt;
              sqlstm.sqltdsp = &sqltds;
              sqlstm.stmt = "insert into movto_d(codigo_emp,ano_mes,consecut\
ivo,secuencia,cuenta,infa,infb,infc,infd,codigo_nit,valor_deb,valor_cre,sucurs\
al,cen_cos,libro) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b\
12,:b13,:b14)";
              sqlstm.iters = (unsigned int  )1;
              sqlstm.offset = (unsigned int  )766;
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
              sqlstm.sqhstl[1] = (unsigned int  )22;
              sqlstm.sqhsts[1] = (         int  )0;
              sqlstm.sqindv[1] = (         void  *)0;
              sqlstm.sqinds[1] = (         int  )0;
              sqlstm.sqharm[1] = (unsigned int  )0;
              sqlstm.sqadto[1] = (unsigned short )0;
              sqlstm.sqtdso[1] = (unsigned short )0;
              sqlstm.sqhstv[2] = (         void  *)&consecutivob;
              sqlstm.sqhstl[2] = (unsigned int  )9;
              sqlstm.sqhsts[2] = (         int  )0;
              sqlstm.sqindv[2] = (         void  *)0;
              sqlstm.sqinds[2] = (         int  )0;
              sqlstm.sqharm[2] = (unsigned int  )0;
              sqlstm.sqadto[2] = (unsigned short )0;
              sqlstm.sqtdso[2] = (unsigned short )0;
              sqlstm.sqhstv[3] = (         void  *)&secuenciab;
              sqlstm.sqhstl[3] = (unsigned int  )9;
              sqlstm.sqhsts[3] = (         int  )0;
              sqlstm.sqindv[3] = (         void  *)0;
              sqlstm.sqinds[3] = (         int  )0;
              sqlstm.sqharm[3] = (unsigned int  )0;
              sqlstm.sqadto[3] = (unsigned short )0;
              sqlstm.sqtdso[3] = (unsigned short )0;
              sqlstm.sqhstv[4] = (         void  *)&cuentab;
              sqlstm.sqhstl[4] = (unsigned int  )13;
              sqlstm.sqhsts[4] = (         int  )0;
              sqlstm.sqindv[4] = (         void  *)0;
              sqlstm.sqinds[4] = (         int  )0;
              sqlstm.sqharm[4] = (unsigned int  )0;
              sqlstm.sqadto[4] = (unsigned short )0;
              sqlstm.sqtdso[4] = (unsigned short )0;
              sqlstm.sqhstv[5] = (         void  *)&infa;
              sqlstm.sqhstl[5] = (unsigned int  )16;
              sqlstm.sqhsts[5] = (         int  )0;
              sqlstm.sqindv[5] = (         void  *)0;
              sqlstm.sqinds[5] = (         int  )0;
              sqlstm.sqharm[5] = (unsigned int  )0;
              sqlstm.sqadto[5] = (unsigned short )0;
              sqlstm.sqtdso[5] = (unsigned short )0;
              sqlstm.sqhstv[6] = (         void  *)&infb;
              sqlstm.sqhstl[6] = (unsigned int  )16;
              sqlstm.sqhsts[6] = (         int  )0;
              sqlstm.sqindv[6] = (         void  *)0;
              sqlstm.sqinds[6] = (         int  )0;
              sqlstm.sqharm[6] = (unsigned int  )0;
              sqlstm.sqadto[6] = (unsigned short )0;
              sqlstm.sqtdso[6] = (unsigned short )0;
              sqlstm.sqhstv[7] = (         void  *)&infc;
              sqlstm.sqhstl[7] = (unsigned int  )16;
              sqlstm.sqhsts[7] = (         int  )0;
              sqlstm.sqindv[7] = (         void  *)0;
              sqlstm.sqinds[7] = (         int  )0;
              sqlstm.sqharm[7] = (unsigned int  )0;
              sqlstm.sqadto[7] = (unsigned short )0;
              sqlstm.sqtdso[7] = (unsigned short )0;
              sqlstm.sqhstv[8] = (         void  *)&infd;
              sqlstm.sqhstl[8] = (unsigned int  )16;
              sqlstm.sqhsts[8] = (         int  )0;
              sqlstm.sqindv[8] = (         void  *)0;
              sqlstm.sqinds[8] = (         int  )0;
              sqlstm.sqharm[8] = (unsigned int  )0;
              sqlstm.sqadto[8] = (unsigned short )0;
              sqlstm.sqtdso[8] = (unsigned short )0;
              sqlstm.sqhstv[9] = (         void  *)&codigo_nitb;
              sqlstm.sqhstl[9] = (unsigned int  )8;
              sqlstm.sqhsts[9] = (         int  )0;
              sqlstm.sqindv[9] = (         void  *)0;
              sqlstm.sqinds[9] = (         int  )0;
              sqlstm.sqharm[9] = (unsigned int  )0;
              sqlstm.sqadto[9] = (unsigned short )0;
              sqlstm.sqtdso[9] = (unsigned short )0;
              sqlstm.sqhstv[10] = (         void  *)&valor_debb;
              sqlstm.sqhstl[10] = (unsigned int  )17;
              sqlstm.sqhsts[10] = (         int  )0;
              sqlstm.sqindv[10] = (         void  *)0;
              sqlstm.sqinds[10] = (         int  )0;
              sqlstm.sqharm[10] = (unsigned int  )0;
              sqlstm.sqadto[10] = (unsigned short )0;
              sqlstm.sqtdso[10] = (unsigned short )0;
              sqlstm.sqhstv[11] = (         void  *)&valor_creb;
              sqlstm.sqhstl[11] = (unsigned int  )17;
              sqlstm.sqhsts[11] = (         int  )0;
              sqlstm.sqindv[11] = (         void  *)0;
              sqlstm.sqinds[11] = (         int  )0;
              sqlstm.sqharm[11] = (unsigned int  )0;
              sqlstm.sqadto[11] = (unsigned short )0;
              sqlstm.sqtdso[11] = (unsigned short )0;
              sqlstm.sqhstv[12] = (         void  *)&sucursalb;
              sqlstm.sqhstl[12] = (unsigned int  )7;
              sqlstm.sqhsts[12] = (         int  )0;
              sqlstm.sqindv[12] = (         void  *)0;
              sqlstm.sqinds[12] = (         int  )0;
              sqlstm.sqharm[12] = (unsigned int  )0;
              sqlstm.sqadto[12] = (unsigned short )0;
              sqlstm.sqtdso[12] = (unsigned short )0;
              sqlstm.sqhstv[13] = (         void  *)&cen_cosb;
              sqlstm.sqhstl[13] = (unsigned int  )5;
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



              if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
                  printf("Error Grabando Debito (%d)\n", sqlca.sqlcode);
                  printf("codigo_emp <%s>",codigo_emp.arr);
                  printf("ano_mesf <%s>",ano_mesf.arr);
                  printf("consecutivob <%s>",consecutivob.arr);
                  printf("secuenciab <%s>",secuenciab.arr);
                  printf("cuentab <%s>",cuentab.arr);
                  printf("infa <%s>",infa.arr);
                  printf("infb <%s>",infb.arr);
                  printf("infc <%s>",infc.arr);
                  printf("infd <%s>",infd.arr);
                  printf("codigo_nitb <%s>\n",codigo_nitb.arr);
                  printf("valor_debb <%s>\n",valor_debb.arr);
                  printf("valor_creb <%s>\n",valor_creb.arr);
                  printf("sucursalb <%s>\n",sucursalb.arr);
                  printf("cen_cosb <%s>\n",cen_cosb.arr); getchar();
              }
           }
        }

        /* EXEC SQL FETCH C6 INTO :cuenta_db, :cuenta_cr, :valor, :fecha_asto; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 15;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )841;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&cuenta_db;
        sqlstm.sqhstl[0] = (unsigned int  )13;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&cuenta_cr;
        sqlstm.sqhstl[1] = (unsigned int  )13;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&valor;
        sqlstm.sqhstl[2] = (unsigned int  )8;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&fecha_asto;
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



//  printf("2) %s %s %s %s %s",codigo_emp.arr, ano_mesf.arr, comprobanteb.arr, consecutivob.arr, fechab.arr); getchar();

        staora  = sqlca.sqlcode;

        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo C6 (%d)\n", sqlca.sqlcode);
  }
}

void ver_inf()
{
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
  sqlstm.offset = (unsigned int  )872;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&veca;
  sqlstm.sqhstl[0] = (unsigned int  )16;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&vecb;
  sqlstm.sqhstl[1] = (unsigned int  )16;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&vecc;
  sqlstm.sqhstl[2] = (unsigned int  )16;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&vecd;
  sqlstm.sqhstl[3] = (unsigned int  )16;
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
  sqlstm.sqhstl[5] = (unsigned int  )13;
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



  if (sqlca.sqlcode == 1403)
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
          sprintf(inf[i],"%12.0f",nitn);
      }
      for (j=1;j<=k;j++) {
          if (!strcmp(vecplan[i],vecinf[j].arr) && strcmp(vecplan[i],"") ) {
              strcpy(inf[i],codigo.arr);
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
