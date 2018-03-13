
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
           char  filnam[16];
};
static const struct sqlcxp sqlfpn =
{
    15,
    ".\\compdiario.pc"
};


static unsigned long sqlctx = 2099107;


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
            void  *sqhstv[11];
   unsigned int   sqhstl[11];
            int   sqhsts[11];
            void  *sqindv[11];
            int   sqinds[11];
   unsigned int   sqharm[11];
   unsigned int   *sqharc[11];
   unsigned short  sqadto[11];
   unsigned short  sqtdso[11];
} sqlstm = {10,11};

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
"select tipo ,p.cuenta ,nombre ,sum(nvl(valor_deb,0)) ,sum(nvl(valor_cre,0)) \
,db_cr  from movto_d d ,movto_c c ,plan p where (((((((((((((((d.codigo_emp(+)\
=c.codigo_emp and d.ano_mes(+)=c.ano_mes) and d.consecutivo(+)=c.consecutivo) \
and c.codigo_emp=to_number(:b0)) and c.ano_mes>=to_number(:b1)) and c.ano_mes<\
=to_number(:b2)) and c.tipo>=to_number(:b3)) and c.tipo<=to_number(:b4)) and d\
.sucursal>=:b5) and d.sucursal<=:b6) and d.cen_cos>=to_number(:b7)) and d.cen_\
cos<=to_number(:b8)) and d.libro=to_number(:b9)) and p.cuenta=substr(d.cuenta,\
1,decode(to_number(p.nivel),0,1,(to_number(p.nivel)* 2)))) and p.codigo_emp=d.\
codigo_emp) and p.nivel=:b10) group by tipo,p.cuenta,nombre,db_cr order by to_\
number(tipo),p.cuenta,nombre,db_cr            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,153,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,140,0,4,216,0,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
67,0,0,3,88,0,4,227,0,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
94,0,0,4,88,0,4,241,0,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
121,0,0,5,746,0,9,276,0,0,11,11,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
180,0,0,5,0,0,13,285,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,
0,0,
219,0,0,5,0,0,15,304,0,0,0,0,0,1,0,
234,0,0,6,0,0,30,311,0,0,0,0,0,1,0,
249,0,0,7,96,0,4,390,0,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
};


/*****************************************************************
* COMPDIARIO.C Version 1.0 - Rev 1.2 - Dic. 20/93.
*
* compdiario.c. Listado del movimiento de cuentas auxiliares
*
* Uso : codigo_emp cuentai cuentaf ano_mesi ano_mesf codigoi codigof
*       niti nitf device userid/password
*
* Mario E. Santiago I. Creado Diciembre 20-1993.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <math.h>

void listado();
void titulos();
void totales();
				     /* Parametros de comunicacion con ORACLE */

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;


/* VARCHAR nomb_emp   [41]; */ 
struct { unsigned short len; unsigned char arr[41]; } nomb_emp;

/* VARCHAR nivel      [2]; */ 
struct { unsigned short len; unsigned char arr[2]; } nivel;

double  nit;
int     digito;
/* VARCHAR codigo_emp [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;


/* MOVTO */

/* VARCHAR tipo       [20][04]; */ 
struct { unsigned short len; unsigned char arr[6]; } tipo[20];

/* VARCHAR cuenta     [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } cuenta[20];

/* VARCHAR nombre_cta [20][61]; */ 
struct { unsigned short len; unsigned char arr[62]; } nombre_cta[20];

double  valor_deb  [20];
double  valor_cre  [20];
/* VARCHAR db_cr      [20][03]; */ 
struct { unsigned short len; unsigned char arr[6]; } db_cr[20];


/* VARCHAR ano_mesi   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR ano_mesf   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesf;

/* VARCHAR tipoi      [4]; */ 
struct { unsigned short len; unsigned char arr[4]; } tipoi;

/* VARCHAR tipof      [4]; */ 
struct { unsigned short len; unsigned char arr[4]; } tipof;


/* VARCHAR nombre_tip [21]; */ 
struct { unsigned short len; unsigned char arr[21]; } nombre_tip;

/* VARCHAR tipob[4]; */ 
struct { unsigned short len; unsigned char arr[4]; } tipob;


/* VARCHAR sucursal   [20][05]; */ 
struct { unsigned short len; unsigned char arr[6]; } sucursal[20];

/* VARCHAR cen_cos    [20][3]; */ 
struct { unsigned short len; unsigned char arr[6]; } cen_cos[20];

/* VARCHAR sucursali  [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } sucursali;

/* VARCHAR sucursalf  [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } sucursalf;

/* VARCHAR cen_cosi   [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } cen_cosi;

/* VARCHAR cen_cosf   [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } cen_cosf;

/* VARCHAR nomb_suci  [12]; */ 
struct { unsigned short len; unsigned char arr[12]; } nomb_suci;

/* VARCHAR nomb_sucf  [12]; */ 
struct { unsigned short len; unsigned char arr[12]; } nomb_sucf;

/* VARCHAR librob     [4]; */ 
struct { unsigned short len; unsigned char arr[4]; } librob;


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
char    pagina[4];                                   /* Contador de Paginas */
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                   /* Contador de Lineas  */
int     cl;
int     anof;
int     mesf;
int     anof2;
int     mesf2;
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[100];
int     diai;
int     mesi;
int     anoi;
double  nitn;
double  total_deb;
double  total_cre;
char    cadena[100];
char    cadena2[240];
char    copias[5];

int     traidos    =0;
int     staora     =0;
int     num_ret    =0;
int     loop_2     =0;
char    timbrado   [2];


void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 16)
       {
	      printf ("Incorrecta invocacion:\n");
        printf ("Uso : compdiario codigo_emp sucursali sucursalf c.costoi c.costof ano_mesi ano_mesf tipoi tipof copias pagina\n");
        printf ("               device timbrado (s/n) nivel libro userid/password nombre usuario y password\n");
        printf ("      device : t salida por terminal\n");
	      printf ("               s salida standar     \n");
	      printf ("               Px salida por impresora (x nro printer)\n");
        printf ("      libro(0= COLGAAP 1=IFRS)\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len  =       strlen(codigo_emp.arr);

       strcpy (sucursali.arr,  argv[2]);
       sucursali.len  =        strlen(sucursali.arr);
       strcpy (sucursalf.arr,  argv[3]);
       sucursalf.len  =        strlen(sucursalf.arr);
       strcpy (cen_cosi.arr,   argv[4]);
       cen_cosi.len   =        strlen(cen_cosi.arr);
       strcpy (cen_cosf.arr,   argv[5]);
       cen_cosf.len   =        strlen(cen_cosf.arr);

       strcpy (tipoi.arr,      argv[8]);
       tipoi.len       =       strlen(tipoi.arr);
       strcpy (tipof.arr,      argv[9]);
       tipof.len       =       strlen(tipof.arr);
       strcpy (copias,         argv[10]);
       strcpy (pagina,         argv[11]);
       strcpy (device,         argv[12]);
       strlow (device);
       strcpy (timbrado,       argv[13]);
       strlow (timbrado);
       strcpy (nivel.arr,      argv[14]);
       nivel.len = strlen(nivel.arr);
       strcpy (librob.arr,     argv[15]);
       librob.len  =           strlen(librob.arr);

    if (!strpos ("/", argv[16]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

     strcpy (uid.arr, argv[16]);
     uid.len = strlen(uid.arr);

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

    strcpy (ano_mesi.arr,   argv[6]);
    ano_mesi.len =          strlen(ano_mesi.arr);

    strcpy (ano_mesf.arr,   argv[7]);
    ano_mesf.len =          strlen(ano_mesf.arr);

    strcpy (cadena,ano_mesi.arr);
    strorg (cadena,1,4);
    anoi         =          atoi(cadena);
    strcpy (cadena,ano_mesi.arr);
    strorg (cadena,5,2);
    mesi         =          atoi(cadena);

    strcpy (cadena,ano_mesf.arr);
    strorg (cadena,1,4);
    anof         =          atoi(cadena);
    anof2        =          atoi(cadena);

    strcpy (cadena,ano_mesf.arr);
    strorg (cadena,5,2);
    mesf         =          atoi(cadena);
    mesf2        =          atoi(cadena);
    if (mesf==13) {
        mesi=1;
        mesf2=12;
    }
    else {
         if (mesf==1) {
             anof--;
             mesf=12;
         }
         else {
               mesf--;
         }
    }

    /* C1 */

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
        fprintf (stderr, "Error leyendo Empresa C1 (%d)\n", sqlca.sqlcode);

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
    sqlstm.sqhstl[2] = (unsigned int  )5;
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
    sqlstm.sqhstl[2] = (unsigned int  )5;
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
        select tipo, p.cuenta , nombre, sum(nvl(valor_deb,0)),
               sum(nvl(valor_cre,0)), db_cr
	from   movto_d d, movto_c c, plan p
        where  d.codigo_emp(+)  = c.codigo_emp                  and
               d.ano_mes(+)     = c.ano_mes                     and
               d.consecutivo(+) = c.consecutivo                 and
               c.codigo_emp     = to_number(:codigo_emp)        and
               c.ano_mes       >= to_number(:ano_mesi)          and
               c.ano_mes       <= to_number(:ano_mesf)          and
               c.tipo          >= to_number(:tipoi)             and
               c.tipo          <= to_number(:tipof)             and
       	       d.sucursal      >= (:sucursali)                  and
               d.sucursal      <= (:sucursalf)                  and
               d.cen_cos       >= to_number(:cen_cosi)          and
               d.cen_cos       <= to_number(:cen_cosf)          and
               d.libro          = to_number(:librob)            and
               p.cuenta         = substr(d.cuenta,1,decode(to_number(p.nivel),0,1,to_number(p.nivel)*2)) and
               p.codigo_emp     = d.codigo_emp                  and
               p.nivel          = :nivel
        group by tipo, p.cuenta, nombre, db_cr
        order by to_number(tipo), p.cuenta, nombre, db_cr; */ 


    /* EXEC SQL OPEN C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 11;
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
    sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[0] = (unsigned int  )5;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&ano_mesi;
    sqlstm.sqhstl[1] = (unsigned int  )22;
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
    sqlstm.sqhstv[3] = (         void  *)&tipoi;
    sqlstm.sqhstl[3] = (unsigned int  )6;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&tipof;
    sqlstm.sqhstl[4] = (unsigned int  )6;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&sucursali;
    sqlstm.sqhstl[5] = (unsigned int  )12;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&sucursalf;
    sqlstm.sqhstl[6] = (unsigned int  )12;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (         void  *)&cen_cosi;
    sqlstm.sqhstl[7] = (unsigned int  )6;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         void  *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned int  )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (         void  *)&cen_cosf;
    sqlstm.sqhstl[8] = (unsigned int  )6;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         void  *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned int  )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (         void  *)&librob;
    sqlstm.sqhstl[9] = (unsigned int  )6;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         void  *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned int  )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (         void  *)&nivel;
    sqlstm.sqhstl[10] = (unsigned int  )4;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         void  *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned int  )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
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



    strcpy(tipob.arr,"");
    tipob.len = strlen(tipob.arr);
    staora  = 0;
    traidos = 0;
    num_ret = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C2 INTO :tipo,      :cuenta,    :nombre_cta,
                                 :valor_deb, :valor_cre, :db_cr; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 11;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )20;
          sqlstm.offset = (unsigned int  )180;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (         void  *)tipo;
          sqlstm.sqhstl[0] = (unsigned int  )6;
          sqlstm.sqhsts[0] = (         int  )8;
          sqlstm.sqindv[0] = (         void  *)0;
          sqlstm.sqinds[0] = (         int  )0;
          sqlstm.sqharm[0] = (unsigned int  )0;
          sqlstm.sqharc[0] = (unsigned int   *)0;
          sqlstm.sqadto[0] = (unsigned short )0;
          sqlstm.sqtdso[0] = (unsigned short )0;
          sqlstm.sqhstv[1] = (         void  *)cuenta;
          sqlstm.sqhstl[1] = (unsigned int  )16;
          sqlstm.sqhsts[1] = (         int  )16;
          sqlstm.sqindv[1] = (         void  *)0;
          sqlstm.sqinds[1] = (         int  )0;
          sqlstm.sqharm[1] = (unsigned int  )0;
          sqlstm.sqharc[1] = (unsigned int   *)0;
          sqlstm.sqadto[1] = (unsigned short )0;
          sqlstm.sqtdso[1] = (unsigned short )0;
          sqlstm.sqhstv[2] = (         void  *)nombre_cta;
          sqlstm.sqhstl[2] = (unsigned int  )63;
          sqlstm.sqhsts[2] = (         int  )64;
          sqlstm.sqindv[2] = (         void  *)0;
          sqlstm.sqinds[2] = (         int  )0;
          sqlstm.sqharm[2] = (unsigned int  )0;
          sqlstm.sqharc[2] = (unsigned int   *)0;
          sqlstm.sqadto[2] = (unsigned short )0;
          sqlstm.sqtdso[2] = (unsigned short )0;
          sqlstm.sqhstv[3] = (         void  *)valor_deb;
          sqlstm.sqhstl[3] = (unsigned int  )8;
          sqlstm.sqhsts[3] = (         int  )8;
          sqlstm.sqindv[3] = (         void  *)0;
          sqlstm.sqinds[3] = (         int  )0;
          sqlstm.sqharm[3] = (unsigned int  )0;
          sqlstm.sqharc[3] = (unsigned int   *)0;
          sqlstm.sqadto[3] = (unsigned short )0;
          sqlstm.sqtdso[3] = (unsigned short )0;
          sqlstm.sqhstv[4] = (         void  *)valor_cre;
          sqlstm.sqhstl[4] = (unsigned int  )8;
          sqlstm.sqhsts[4] = (         int  )8;
          sqlstm.sqindv[4] = (         void  *)0;
          sqlstm.sqinds[4] = (         int  )0;
          sqlstm.sqharm[4] = (unsigned int  )0;
          sqlstm.sqharc[4] = (unsigned int   *)0;
          sqlstm.sqadto[4] = (unsigned short )0;
          sqlstm.sqtdso[4] = (unsigned short )0;
          sqlstm.sqhstv[5] = (         void  *)db_cr;
          sqlstm.sqhstl[5] = (unsigned int  )5;
          sqlstm.sqhsts[5] = (         int  )8;
          sqlstm.sqindv[5] = (         void  *)0;
          sqlstm.sqinds[5] = (         int  )0;
          sqlstm.sqharm[5] = (unsigned int  )0;
          sqlstm.sqharc[5] = (unsigned int   *)0;
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



          if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
             fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);

          staora  = sqlca.sqlcode;
          traidos = sqlca.sqlerrd[2];

          for (loop_2 = 0; loop_2 < (traidos - num_ret); loop_2++) {
              tipo       [loop_2].arr  [tipo       [loop_2].len] = '\0';
              cuenta     [loop_2].arr  [cuenta     [loop_2].len] = '\0';
              nombre_cta [loop_2].arr  [nombre_cta [loop_2].len] = '\0';
              db_cr      [loop_2].arr  [db_cr      [loop_2].len] = '\0';

              listado();
          }
          num_ret = traidos;
    }
    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 11;
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


    totales();

    cierre_impresora();
/************************************************
 * Desconectarse de ORACLE. (ologof)            *
 ************************************************/
    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 11;
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


    exit   (0);
}

void listado()
{
  if (con_lin > 60)
      titulos();

  if (strcmp(tipob.arr,tipo[loop_2].arr)) {
      totales();
      titulos();
  }

  if (atoi(pagina)<=con_pag) {
      fprintf (fp,"%-10s",cuenta[loop_2].arr);
      fprintf (fp,"%-71s",nombre_cta[loop_2].arr);
  }
  if (atoi(pagina)<=con_pag) {
      sprintf (cadena,"%9.2f",valor_deb[loop_2]);
      fprintf (fp,"%20s",fmtnum("zzzz,zzz,zzz.zz",cadena,r_t));
      total_deb+=valor_deb[loop_2];
      sprintf (cadena,"%9.2f",valor_cre[loop_2]);
      fprintf (fp,"%20s\n",fmtnum("zzzz,zzz,zzz.zz",cadena,r_t));
      total_cre+=valor_cre[loop_2];
  }
  con_lin ++;
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 con_pag++;
 con_lin = 10;
 if (atoi(pagina)>con_pag)
    return;
 if (!strcmp(codigo_emp.arr,"3"))
    strcpy(nomb_emp.arr," ");
 fprintf(fp,"%s",salte_pagina);
 if (strcmp(timbrado,"s")) {
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
    if (!strcmp(librob.arr,"0")) {
         strcpy(cadena2," - COLGAAP");
    }
    else {
         strcpy(cadena2," - IFRS");
    }
    fprintf(fp,"\n%15s%s%s%s\n\n"," ","COMPROBANTE DE DIARIO DE CONTABILIDAD",cadena2,ancho_off);
    fecha_system(cadena);
    if (strcmp(timbrado,"s"))
       fprintf(fp,"%s%-35s%s%10s / %d A %10s / %d","FECHA PROCESO : ",cadena,"PERIODO DE : ",mes[mesi-1],anoi,mes[mesf2-1],anof2);
    else
       fprintf(fp,"%s%-35s%s%10s / %d A %10s / %d"," "," ","PERIODO DE : ",mes[mesi-1],anoi,mes[mesf2-1],anof2);
 }
 else {
    fecha_system(cadena);
    fprintf(fp,"%s%-35s%s%10s / %d A %10s / %d","                "," ","PERIODO DE : ",mes[mesi-1],anoi,mes[mesf2-1],anof2);
 }
 fprintf(fp,"%45s %d\n\n","PAGINA ",con_pag);
 strcpy(tipob.arr,tipo[loop_2].arr);
 tipob.len = strlen(tipob.arr);

/* C3 */
 /* EXEC SQL select nombre
          into  :nombre_tip
  	  from   tipos_cpt
          where  codigo_emp  = to_number(:codigo_emp)   and
                 tipo        = to_number(:tipob); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 11;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select nombre into :b0  from tipos_cpt where (codigo_emp=to_\
number(:b1) and tipo=to_number(:b2))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )249;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nombre_tip;
 sqlstm.sqhstl[0] = (unsigned int  )23;
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
 sqlstm.sqhstv[2] = (         void  *)&tipob;
 sqlstm.sqhstl[2] = (unsigned int  )6;
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



 nombre_tip.arr  [nombre_tip.len] = '\0';

 fprintf(fp,"%s%s%02d %s%s%s\n",ancho_on,enfatizado_on,atoi(tipo[loop_2].arr),nombre_tip.arr,ancho_off,enfatizado_off);
 fprintf(fp,"%s%121s%s\n\n",enfatizado_on,"CUENTA   NOMBRE  CUENTA                                                                       DEBITOS            CREDITOS",enfatizado_off);
}

void totales()
{
  if (con_lin>60)
     titulos();
  if (atoi(pagina)<=con_pag) {
      fprintf (fp,"%121s\n","--------------      --------------");
      sprintf (cadena,"%9.2f",total_deb);
      fprintf (fp,"%82s %18s","SUMAS IGUALES ======> ",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
      sprintf (cadena,"%9.2f",total_cre);
      fprintf (fp,"%20s\n",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
      total_deb=total_cre=0;
  }
  con_lin++;
  fprintf(fp,"\n\n%36s%s\n%39s%10s / %d A %10s / %d\n","Resumen del movimiento de ",nombre_tip.arr,"comprendido en el periodo de ",mes[mesi-1],anoi,mes[mesf2-1],anof2);
}
