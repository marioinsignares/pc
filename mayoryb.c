
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
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    ".\\mayoryb.pc"
};


static unsigned long sqlctx = 265915;


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
            void  *sqhstv[9];
   unsigned int   sqhstl[9];
            int   sqhsts[9];
            void  *sqindv[9];
            int   sqinds[9];
   unsigned int   sqharm[9];
   unsigned int   *sqharc[9];
   unsigned short  sqadto[9];
   unsigned short  sqtdso[9];
} sqlstm = {10,9};

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

 static const char *sq0005 = 
"select nvl(p.cuenta,'999999999') ,Substr(p.nombre,1,37) ,sum(nvl(a.valor_deb\
,0)) ,sum(nvl(a.valor_cre,0)) ,p.db_cr  from acumulados a ,plan p where ((((((\
((((a.ano_mes(+)>=:b0 and a.ano_mes(+)<:b1) and a.sucursal>=:b2) and a.sucursa\
l<=:b3) and a.cen_cos>=to_number(:b4)) and a.cen_cos<=to_number(:b5)) and a.li\
bro=to_number(:b6)) and p.cuenta=substr(a.cuenta(+),1,decode(to_number(p.nivel\
),0,1,(to_number(p.nivel)* 2)))) and p.nivel=:b7) and p.codigo_emp=a.codigo_em\
p) and p.codigo_emp=:b8) group by p.cuenta,p.nombre,p.db_cr order by p.cuenta \
           ";

 static const char *sq0006 = 
"select nvl(p.cuenta,'999999999') ,Substr(p.nombre,1,37) ,sum(nvl(a.valor_deb\
,0)) ,sum(nvl(a.valor_cre,0)) ,p.db_cr  from acumulados a ,plan p where ((((((\
(((a.ano_mes=:b0 and a.sucursal>=:b1) and a.sucursal<=:b2) and a.cen_cos>=to_n\
umber(:b3)) and a.cen_cos<=to_number(:b4)) and a.libro=to_number(:b5)) and p.n\
ivel=:b6) and p.cuenta=substr(a.cuenta,1,decode(to_number(p.nivel),0,1,(to_num\
ber(p.nivel)* 2)))) and p.codigo_emp=a.codigo_emp) and p.codigo_emp=:b7) group\
 by p.cuenta,p.nombre,p.db_cr order by p.cuenta            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,146,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,129,0,4,188,0,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
67,0,0,3,88,0,4,200,0,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
94,0,0,4,88,0,4,214,0,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
121,0,0,5,555,0,9,267,0,0,9,9,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
172,0,0,6,525,0,9,268,0,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,
219,0,0,5,0,0,15,281,0,0,0,0,0,1,0,
234,0,0,6,0,0,15,282,0,0,0,0,0,1,0,
249,0,0,7,0,0,30,284,0,0,0,0,0,1,0,
264,0,0,5,0,0,13,510,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
299,0,0,6,0,0,13,527,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
};


/*****************************************************************
* MAYORYB.PC Version 1.0 - Rev 1.2 - Jun. 30/92.
*
* mayoryb.pc. Libro de Mayor y Balnaces
*
* Uso : mayoryb codigo_emp aamm copias device timbrado (s/n) userid/password
*
* Martin A. Toloza L. Creado Diciembre 23-1997.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <math.h>

void titulos();
void imprime_anterior();
void imprime_actual();
void imprime_sumas();
void imprime_del_mes();
void lista_balance();
void imprime_anterior();
void imprime_actual();
void imprime_sumas();
void totales();
void leer_C2();
void leer_C3();

				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Empresas (C1) */
/* VARCHAR nomb_emp      [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nomb_emp;

double  nit;
int     digito;
/* VARCHAR codigo_emp    [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_emp;

/* VARCHAR niv           [2]; */ 
struct { unsigned short len; unsigned char arr[2]; } niv;

                                 /* Acumulados (C2) */
/* VARCHAR cuenta        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuenta;

/* VARCHAR nombre_cta    [70]; */ 
struct { unsigned short len; unsigned char arr[70]; } nombre_cta;

double  valor_deb;
double  valor_cre;
/* VARCHAR db_cr         [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } db_cr;

/* VARCHAR ano_mesi      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR ano_mes       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

                                 /* Acumulados (C3) */
/* VARCHAR cuentam       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuentam;

/* VARCHAR nombre_ctam   [70]; */ 
struct { unsigned short len; unsigned char arr[70]; } nombre_ctam;

double  valor_debm;
double  valor_crem;
/* VARCHAR db_crm        [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } db_crm;


/* VARCHAR sucursali     [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } sucursali;

/* VARCHAR sucursalf     [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } sucursalf;

/* VARCHAR cen_cosi      [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } cen_cosi;

/* VARCHAR cen_cosf      [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } cen_cosf;

/* VARCHAR nomb_suci     [12]; */ 
struct { unsigned short len; unsigned char arr[12]; } nomb_suci;

/* VARCHAR nomb_sucf     [12]; */ 
struct { unsigned short len; unsigned char arr[12]; } nomb_sucf;

/* VARCHAR libro         [04]; */ 
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

                                            /* Variables globales del usuario */
char *fmtnum(), r_t[100];
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                  /* Contador de Lineas  */
int     cl;
int     oraest;
int     oraestm;
int     mesi;
int     anoi;
double  valor_debx=0;
double  valor_crex=0;
double  tot_deb;
double  tot_cre;
double  tot_debm;
double  tot_crem;
double  tot_deba;
double  tot_crea;
char    cadena[100];
char    cadena2[90];
char    cadenon[200];
char    login[20];
char    copias[5];
char	timbrado[2];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 11)
       {
	      printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp sucursali sucursalf c.costoi c.costof aaaamm copias device timbrado (s/n) nivel libro(0= COLGAAP 1=IFRS) userid/password\n");
      	printf ("      device : t salida por terminal\n");
      	printf ("      device : s salida standar     \n");
      	printf ("               Px salida por impresora (x nro printer)\n");
        printf ("      libro(0= COLGAAP 1=IFRS)\n");
      	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len = strlen(codigo_emp.arr);

       strcpy (sucursali.arr,  argv[2]);
       sucursali.len  =        strlen(sucursali.arr);
       strcpy (sucursalf.arr,  argv[3]);
       sucursalf.len  =        strlen(sucursalf.arr);
       strcpy (cen_cosi.arr,   argv[4]);
       cen_cosi.len   =        strlen(cen_cosi.arr);
       strcpy (cen_cosf.arr,   argv[5]);
       cen_cosf.len   =        strlen(cen_cosf.arr);

       strcpy (copias,         argv[7]);
       strcpy (device,         argv[8]);
       strlow (device);
       strcpy (timbrado,       argv[9]);
       strlow (timbrado);
       strcpy (niv.arr,        argv[10]);
       niv.len = strlen(niv.arr);
       strcpy (libro.arr, argv[11]);
       libro.len =        strlen(libro.arr);

    if (!strpos ("/", argv[12]))
       {
        printf ("user id/password incorrecto.\n");
 	      exit (1);
       }

    strcpy (uid.arr,   argv[12]);
    uid.len   =        strlen(uid.arr);

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

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/
    strcpy (ano_mes.arr,   argv[6]);
    ano_mes.len = strlen(ano_mes.arr);
    if (ano_mes.len != 6) {
       printf("Error, la el periodo debe ser asi: AAAAMM");
       getchar();
       exit (1);
    }
    strcpy (cadena,         argv[6]);
    strorg (cadena,1,4);
    anoi=atoi(cadena);
    strcpy (cadena,         argv[6]);
    strorg (cadena,5,2);
    mesi=atoi(cadena);
    if (mesi==13)
        mesi=12;
    sprintf (ano_mesi.arr,"%d%02d",anoi-1,13);
    ano_mesi.len =       strlen(ano_mesi.arr);

    /* EXEC SQL select n.nombre, n.nit, n.digito
                    into :nomb_emp, :nit, :digito
             from   nits n, empresas e
             where  n.codigo_nit = e.codigo_nit and
                    e.codigo_emp =  :codigo_emp; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select n.nombre ,n.nit ,n.digito into :b0,:b1,:b2  from n\
its n ,empresas e where (n.codigo_nit=e.codigo_nit and e.codigo_emp=:b3)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )36;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_emp;
    sqlstm.sqhstl[0] = (unsigned int  )52;
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
    sqlstm.sqhstl[3] = (unsigned int  )8;
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
    nomb_emp.arr   [nomb_emp.len] = '\0';

/* Cx */

    /* EXEC SQL select nombre
             into  :nomb_suci
             from   sucursal
             where  sucursal   = :sucursali   and
                    codigo_emp = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select nombre into :b0  from sucursal where (sucursal=:b1\
 and codigo_emp=to_number(:b2))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )67;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_suci;
    sqlstm.sqhstl[0] = (unsigned int  )14;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&sucursali;
    sqlstm.sqhstl[1] = (unsigned int  )12;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[2] = (unsigned int  )8;
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



    if (sqlca.sqlcode == 0)
        nomb_emp.arr [nomb_emp.len] = '\0';

    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Sucursali=%s (%d)\n",sucursali.arr, sqlca.sqlcode);

/* Cx1 */

    /* EXEC SQL select nombre
             into  :nomb_sucf
             from   sucursal
             where  sucursal   = :sucursalf   and
                    codigo_emp = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select nombre into :b0  from sucursal where (sucursal=:b1\
 and codigo_emp=to_number(:b2))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )94;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_sucf;
    sqlstm.sqhstl[0] = (unsigned int  )14;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&sucursalf;
    sqlstm.sqhstl[1] = (unsigned int  )12;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[2] = (unsigned int  )8;
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



    if (sqlca.sqlcode == 0)
        nomb_emp.arr [nomb_emp.len] = '\0';

    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Sucursalf=%s (%d)\n",sucursalf.arr, sqlca.sqlcode);

    /* EXEC SQL DECLARE C2 CURSOR FOR
             select nvl(p.cuenta,'999999999'), Substr(p.nombre,1,37),
                    sum(nvl(a.valor_deb,0)),
                    sum(nvl(a.valor_cre,0)),
                    p.db_cr
             from  acumulados a, plan p
             where a.ano_mes(+) >=  :ano_mesi              and
                   a.ano_mes(+) <   :ano_mes               and
        	         a.sucursal   >= (:sucursali)            and
                   a.sucursal   <= (:sucursalf)            and
                   a.cen_cos    >= to_number(:cen_cosi)    and
                   a.cen_cos    <= to_number(:cen_cosf)    and
                   a.libro       = to_number(:libro)       and
                   p.cuenta      =  substr(a.cuenta(+),1,decode(to_number(p.nivel),0,1,to_number(p.nivel)*2))
                                                           and
                   p.nivel       =  :niv                   and
                   p.codigo_emp  = a.codigo_emp            and
                   p.codigo_emp  =  :codigo_emp
             group by p.cuenta, p.nombre, p.db_cr
             order by p.cuenta; */ 


    /* EXEC SQL DECLARE C3 CURSOR FOR
             select nvl(p.cuenta,'999999999'), Substr(p.nombre,1,37),
                    sum(nvl(a.valor_deb,0)),
                    sum(nvl(a.valor_cre,0)),
                    p.db_cr
             from  acumulados a, plan p
             where a.ano_mes    =  :ano_mes                and
        	         a.sucursal   >= (:sucursali)            and
                   a.sucursal   <= (:sucursalf)            and
                   a.cen_cos    >= to_number(:cen_cosi)    and
                   a.cen_cos    <= to_number(:cen_cosf)    and
                   a.libro       = to_number(:libro)       and
                   p.nivel      =  :niv                    and
                   p.cuenta     =  substr(a.cuenta,1,decode(to_number(p.nivel),0,1,to_number(p.nivel)*2))
                                                           and
                   p.codigo_emp = a.codigo_emp             and
                   p.codigo_emp =  :codigo_emp
             group by p.cuenta, p.nombre, p.db_cr
             order by p.cuenta; */ 


    /* EXEC SQL OPEN C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0005;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )121;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&ano_mesi;
    sqlstm.sqhstl[0] = (unsigned int  )22;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&ano_mes;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&sucursali;
    sqlstm.sqhstl[2] = (unsigned int  )12;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&sucursalf;
    sqlstm.sqhstl[3] = (unsigned int  )12;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&cen_cosi;
    sqlstm.sqhstl[4] = (unsigned int  )6;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&cen_cosf;
    sqlstm.sqhstl[5] = (unsigned int  )6;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&libro;
    sqlstm.sqhstl[6] = (unsigned int  )6;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (         void  *)&niv;
    sqlstm.sqhstl[7] = (unsigned int  )4;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         void  *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned int  )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[8] = (unsigned int  )8;
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


    /* EXEC SQL OPEN C3; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0006;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )172;
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
    sqlstm.sqhstv[1] = (         void  *)&sucursali;
    sqlstm.sqhstl[1] = (unsigned int  )12;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&sucursalf;
    sqlstm.sqhstl[2] = (unsigned int  )12;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&cen_cosi;
    sqlstm.sqhstl[3] = (unsigned int  )6;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&cen_cosf;
    sqlstm.sqhstl[4] = (unsigned int  )6;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&libro;
    sqlstm.sqhstl[5] = (unsigned int  )6;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&niv;
    sqlstm.sqhstl[6] = (unsigned int  )4;
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



    oraest=0;
    leer_C2();

    oraestm=0;
    leer_C3();

    lista_balance();
    totales();

    cierre_impresora();

    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )219;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL CLOSE C3; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )234;
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
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )249;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
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
 con_pag++;
 fprintf(fp,"%s",salte_pagina);
 if (strcmp(timbrado,"s")) {
     if (!strcmp(codigo_emp.arr,"3"))
        fprintf(fp,".");
     strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
     fprintf(fp,"%s%s%s%s%s\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
     sprintf (cadena,"%12.0f",nit);
     fprintf (fp,"%s%s%25s %18s",condensado_on,ancho_on,"NIT :",fmtnum("zzz,zzz,zzz,zzz",cadena,r_t));
     if (digito > 0) {
        sprintf (cadena,"%d",digito);
        fprintf (fp,"-%s",fmtnum("z",cadena,r_t));
     }
     else if (digito == 0)
             fprintf (fp,"-%s","0");
     sprintf(cadena2,"SUCURSAL: %s %s A %s %s C.COSTO: %s A %s",sucursali.arr,nomb_suci.arr,sucursalf.arr,nomb_sucf.arr,cen_cosi.arr,cen_cosf.arr);
     strful(cadena,(int)(80-strlen(cadena2))/2,' ');
     fprintf(fp,"\n%s%s%s%s",condensado_on,ancho_on,cadena,cadena2);
     fprintf(fp,"\n%20s%s%s\n\n"," ","LIBRO DE MAYOR Y BALANCES",ancho_off);
     fecha_system(cadena);
     if (strcmp(timbrado,"s"))
        fprintf(fp,"%s%s%s%-44s%s%10s / %d",diezcpi,condensado_on,"FECHA PROCESO : ",cadena,"PERIODO : ",mes[mesi-1],anoi);
     else
        fprintf(fp,"%s%s%s%-44s%s%10s / %d",diezcpi,condensado_on,"                "," "   ,"PERIODO : ",mes[mesi-1],anoi);
 }
 else {
     fecha_system(cadena);
     fprintf(fp,"%s%s%s%-44s%s%10s / %d",diezcpi,condensado_on,"                "," ","PERIODO : ",mes[mesi-1],anoi);
 }
 fprintf(fp,"%54s %d\n\n","PAGINA ",con_pag);
 fprintf(fp,"%40s%116s\n",enfatizado_on,"           -----SALDO ANTERIOR-----            -----MOVTOS DEL MES-----              -----SALDO ACTUAL-----");
 fprintf(fp,"%s%s%155s%s\n\n",diezcpi,condensado_on,"CUENTA   NOMBRE DE LA CUENTA                              DEBITOS          CREDITOS           DEBITOS          CREDITOS           DEBITOS          CREDITOS",enfatizado_off);
 con_lin = 9;
}

void lista_balance()
{
 while (oraest==0 || oraestm==0) {
        if (strcmp(cuenta.arr,cuentam.arr)==0) {
//            printf("1.1) cuenta.arr=<%s> cuentam.arr<%s>",cuenta.arr,cuentam.arr); getchar();
            imprime_anterior();
            imprime_actual();
            leer_C2();
            leer_C3();
        }
        else {
              if (strcmp(cuenta.arr,cuentam.arr)<0 && strlen(cuenta.arr) != 0 ) {
                  imprime_anterior();
                  imprime_sumas();
//                  printf("2.1) cuenta.arr=<%s> cuentam.arr<%s>",cuenta.arr,cuentam.arr); getchar();
                  leer_C2();
              }
              else {
                    imprime_del_mes();
                    imprime_actual();
//                    printf("3.1) cuenta.arr=<%s> cuentam.arr<%s>",cuenta.arr,cuentam.arr); getchar();
                    leer_C3();
              }
        }
/*        if (valor_debx>0 || valor_crex>0) { */
            fprintf(fp,"%s",cadenon);
            valor_debx=valor_crex=0;
            strcpy(cadenon,"");
        /*}   */
//        printf("1) oraest<%d>, oraestm<%d>",oraest,oraestm); getchar();
 }
}

void imprime_anterior()
{
  if (con_lin > 60)
      titulos();
  sprintf (cadena2,"%-9s",fmtnum("ZZZZZZZZ",cuenta.arr,r_t));
  strcpy  (cadenon,cadena2);
  sprintf (cadena2,"%-38s",nombre_cta.arr);
  strcat  (cadenon,cadena2);
  if (!strcmp(db_cr.arr,"DB")) {
     valor_debx=valor_deb-valor_cre;
     if (valor_debx < 0) {
         valor_crex=valor_debx * -1;
         valor_debx=0;
     }
  }
  else {
        valor_crex=valor_cre-valor_deb;
        if (valor_crex < 0) {
            valor_debx=valor_crex * -1;
            valor_crex=0;
        }
  }
  tot_deb += valor_debx;
  tot_cre += valor_crex;
  sprintf (cadena,"%13.2f",valor_debx);
  sprintf (cadena2,"%18s",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  strcat  (cadenon,cadena2);
  sprintf (cadena,"%13.2f",valor_crex);
  sprintf (cadena2,"%18s",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  strcat  (cadenon,cadena2);
}

void imprime_actual()
{
  sprintf (cadena,"%13.2f",valor_debm);
  sprintf (cadena2,"%18s",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  strcat  (cadenon,cadena2);
  sprintf (cadena,"%13.2f",valor_crem);
  sprintf (cadena2,"%18s",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  strcat  (cadenon,cadena2);
  tot_debm += valor_debm;
  tot_crem += valor_crem;

  if (!strcmp(db_crm.arr,"DB")) {
     valor_debx=(valor_debx-valor_crex)+(valor_debm-valor_crem);
     valor_crex=0;
     if (valor_debx < 0) {
         valor_crex=valor_debx * -1;
         valor_debx=0;
     }
  }
  else {
        valor_crex=(valor_crex-valor_debx)+(valor_crem-valor_debm);
        valor_debx=0;
        if (valor_crex < 0) {
            valor_debx=valor_crex * -1;
            valor_crex=0;
        }
  }
  tot_deba += valor_debx;
  tot_crea += valor_crex;
  sprintf (cadena,"%13.2f",valor_debx);
  sprintf (cadena2,"%18s",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  strcat  (cadenon,cadena2);
  sprintf (cadena,"%13.2f",valor_crex);
  sprintf (cadena2,"%18s\n",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  strcat  (cadenon,cadena2);
  con_lin ++;
}

void imprime_sumas()
{
  sprintf (cadena2,"%18s",fmtnum("zz,zzz,zzz,zz9.99","0.00",r_t));
  strcat  (cadenon,cadena2);
  sprintf (cadena2,"%18s",fmtnum("zz,zzz,zzz,zz9.99","0.00",r_t));
  strcat  (cadenon,cadena2);

  if (!strcmp(db_cr.arr,"DB")) {
     if (valor_debx < 0) {
         valor_crex=valor_debx * -1;
         valor_debx=0;
     }
  }
  else {
        if (valor_crex < 0) {
            valor_debx=valor_crex * -1;
            valor_crex=0;
        }
  }
  tot_deba += valor_debx;
  tot_crea += valor_crex;
  sprintf (cadena,"%13.2f",valor_debx);
  sprintf (cadena2,"%18s",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  strcat  (cadenon,cadena2);
  sprintf (cadena,"%13.2f",valor_crex);
  sprintf (cadena2,"%18s\n",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  strcat  (cadenon,cadena2);
  con_lin ++;
}

void imprime_del_mes()
{
  if (con_lin > 60)
      titulos();
  sprintf (cadena2,"%-9s",fmtnum("ZZZZZZZZ",cuentam.arr,r_t));
  strcpy  (cadenon,cadena2);
  sprintf (cadena2,"%-38s",nombre_ctam.arr);
  strcat  (cadenon,cadena2);
  valor_debx=0;
  valor_crex=0;
  sprintf (cadena,"%13.2f",valor_debx);
  sprintf (cadena2,"%18s",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  strcat  (cadenon,cadena2);
  sprintf (cadena,"%13.2f",valor_crex);
  sprintf (cadena2,"%18s",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  strcat  (cadenon,cadena2);
}

void totales()
{
  if (con_lin > 60)
      titulos();
  fprintf (fp,"%47s%18s%18s%18s%18s%18s%18s\n"," "," -----------------"," -----------------"," -----------------"," -----------------"," -----------------"," -----------------");
  fprintf (fp,"%s","              SUMAS IGUALES =================> ");
  sprintf (cadena,"%13.2f",tot_deb);
  fprintf (fp,"%18s",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
  sprintf (cadena,"%13.2f",tot_cre);
  fprintf (fp,"%18s",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
  sprintf (cadena,"%13.2f",tot_debm);
  fprintf (fp,"%18s",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
  sprintf (cadena,"%13.2f",tot_crem);
  fprintf (fp,"%18s",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
  sprintf (cadena,"%13.2f",tot_deba);
  fprintf (fp,"%18s",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
  sprintf (cadena,"%13.2f",tot_crea);
  fprintf (fp,"%18s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
  fprintf (fp,"%47s%18s%18s%18s%18s%18s%18s\n"," "," ================="," ================="," ================="," ================="," ================="," =================");
  if (abs((long int)(tot_deb-tot_cre) > 0)) {
      fprintf (fp,"\n%s","  ****  BALANCE DESCUADRADO ****  ===========> ");
      sprintf (cadena,"%13.2f",tot_deb-tot_cre);
      fprintf (fp,"%18s",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
  }
}

void leer_C2()
{
 /* EXEC SQL FETCH C2 INTO :cuenta, :nombre_cta, :valor_deb, :valor_cre, :db_cr; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )264;
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
 sqlstm.sqhstv[1] = (         void  *)&nombre_cta;
 sqlstm.sqhstl[1] = (unsigned int  )72;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&valor_deb;
 sqlstm.sqhstl[2] = (unsigned int  )8;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&valor_cre;
 sqlstm.sqhstl[3] = (unsigned int  )8;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&db_cr;
 sqlstm.sqhstl[4] = (unsigned int  )8;
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



 oraest  = sqlca.sqlcode;
 if (oraest == -1405)
     oraest  = 0;
 else if (oraest) {
          strcpy(cuenta.arr,"9999999999");
          fprintf (stderr, "Error leyendo C2-1 (%d), codigo_emp.arr<%s>, ano_mesi.arr<%s>, ano_mes.arr<%s>, :sucursali.arr<%s>, :sucursalf.arr<%s>, :cen_cosi.arr<%s>, :cen_cosf.arr<%s>, :niv.arr<%s>\n", oraest, codigo_emp.arr, ano_mesi.arr, ano_mes.arr, sucursali.arr, sucursalf.arr, cen_cosi.arr, cen_cosf.arr, niv.arr); 
      }

 cuenta.arr      [cuenta.len]     = '\0';
 nombre_cta.arr  [nombre_cta.len] = '\0';
 db_cr.arr       [db_cr.len]      = '\0';
}

void leer_C3()
{
 /* EXEC SQL FETCH C3 INTO :cuentam, :nombre_ctam, :valor_debm, :valor_crem, :db_crm; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )299;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&cuentam;
 sqlstm.sqhstl[0] = (unsigned int  )22;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&nombre_ctam;
 sqlstm.sqhstl[1] = (unsigned int  )72;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&valor_debm;
 sqlstm.sqhstl[2] = (unsigned int  )8;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&valor_crem;
 sqlstm.sqhstl[3] = (unsigned int  )8;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&db_crm;
 sqlstm.sqhstl[4] = (unsigned int  )8;
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



 oraestm  = sqlca.sqlcode;
 if (oraestm == -1405)
     oraestm  = 0;
 else if (oraestm == -1002) {
          fprintf (stderr, "Error leyendo C3-1 (%d)\n", oraestm);
          strcpy(cuentam.arr,"9999999999");
          cuentam.len = strlen(cuentam.arr);
          oraestm = 1403;
      }
 else if (oraestm) {
          strcpy(cuentam.arr,"9999999999");
          cuentam.len = strlen(cuentam.arr);
          fprintf (stderr, "Error leyendo C3-2 (%d)\n", oraestm);
      }

 cuentam.arr     [cuentam.len]     = '\0';
 nombre_ctam.arr [nombre_ctam.len] = '\0';
 db_crm.arr      [db_crm.len]      = '\0';
}

