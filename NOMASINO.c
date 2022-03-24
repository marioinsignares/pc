
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
    ".\\nomasino.pc"
};


static unsigned long sqlctx = 535123;


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
            void  *sqhstv[16];
   unsigned int   sqhstl[16];
            int   sqhsts[16];
            void  *sqindv[16];
            int   sqinds[16];
   unsigned int   sqharm[16];
   unsigned int   *sqharc[16];
   unsigned short  sqadto[16];
   unsigned short  sqtdso[16];
} sqlstm = {10,16};

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
"UENTA) group by N.NIT,N.CODIGO_NIT,C.CUENTA,S.CUENTA,C.DB_CR,C.IDENTIFICA,C.\
PROCEDIMIENTO,C.PTAJE,E.CODIGO,E.PRO_PEN,E.EPS,C.TABLA,V.SUCURSAL,V.CEN_COS,E.\
GASTO_COMUN,P.SUCURSAL order by E.CODIGO            ";

 static const char *sq0005 = 
"select sucursal ,ptaje ,ultimo  from SUCURSAL where (codigo_emp=:b0 and ptaj\
e>0) order by ultimo,ptaje,sucursal            ";

 static const char *sq0006 = 
"select sucursal ,ptaje ,ultimo  from NOMGASTOS where ((codigo_emp=:b0 and co\
digo=:b1) and ptaje>0) order by ultimo,ptaje,sucursal            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,165,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,140,0,4,201,0,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
67,0,0,3,35,0,9,214,0,0,0,0,0,1,0,
82,0,0,3,0,0,13,221,0,0,1,0,0,1,0,2,9,0,0,
101,0,0,3,0,0,15,235,0,0,0,0,0,1,0,
116,0,0,7,0,0,30,294,0,0,0,0,0,1,0,
131,0,0,8,262,0,2,323,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
166,0,0,9,148,0,2,337,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
193,0,0,10,150,0,4,354,0,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
224,0,0,11,115,0,3,367,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
255,0,0,12,117,0,5,375,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
286,0,0,4,1230,0,9,414,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
317,0,0,4,0,0,13,416,0,0,16,0,0,1,0,2,4,0,0,2,3,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,
9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,3,0,0,
396,0,0,4,0,0,15,431,0,0,0,0,0,1,0,
411,0,0,4,1230,0,9,436,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
442,0,0,4,0,0,13,437,0,0,16,0,0,1,0,2,4,0,0,2,3,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,
9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,3,0,0,
521,0,0,4,0,0,15,456,0,0,0,0,0,1,0,
536,0,0,13,203,0,3,476,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,
575,0,0,4,0,0,15,498,0,0,0,0,0,1,0,
590,0,0,4,1230,0,9,505,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
621,0,0,4,0,0,13,507,0,0,16,0,0,1,0,2,4,0,0,2,3,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,
9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,3,0,0,
700,0,0,14,114,0,4,534,0,0,3,1,0,1,0,2,4,0,0,2,3,0,0,1,9,0,0,
727,0,0,15,115,0,4,543,0,0,3,1,0,1,0,2,4,0,0,2,3,0,0,1,9,0,0,
754,0,0,16,115,0,4,552,0,0,3,1,0,1,0,2,4,0,0,2,3,0,0,1,9,0,0,
781,0,0,17,71,0,4,561,0,0,3,1,0,1,0,2,4,0,0,2,3,0,0,1,9,0,0,
808,0,0,5,123,0,9,616,0,0,1,1,0,1,0,1,9,0,0,
827,0,0,5,0,0,13,617,0,0,3,0,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,
854,0,0,5,0,0,13,629,0,0,3,0,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,
881,0,0,5,0,0,15,632,0,0,0,0,0,1,0,
896,0,0,6,141,0,9,635,0,0,2,2,0,1,0,1,9,0,0,1,3,0,0,
919,0,0,6,0,0,13,636,0,0,3,0,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,
946,0,0,6,0,0,13,648,0,0,3,0,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,
973,0,0,6,0,0,15,651,0,0,0,0,0,1,0,
988,0,0,4,0,0,13,660,0,0,16,0,0,1,0,2,4,0,0,2,3,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,
9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,3,0,0,
1067,0,0,4,0,0,15,674,0,0,0,0,0,1,0,
1082,0,0,18,323,0,3,692,0,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
1157,0,0,19,323,0,3,749,0,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
1232,0,0,20,125,0,4,799,0,0,7,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
1,9,0,0,1,9,0,0,
};


/*****************************************************************
* DEPRECIA.C Version 1.0 - Rev 1.2 - Nov. 30/97.
*
* nomasino.c. Asiento contable de nomina quincenal (Pagos y descuentos)
*
* Uso: nomasino codigo_emp aaaammdd device copias userid/password\n");
*
* Martin A. Toloza L. Creado en Noviembre 27 de 1.997.
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
void grabar_movtod(int li);
double redondo();


/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Empresa (C1) */
/* VARCHAR nomb_emp    [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_emp;

double  nit;
int     digito;
/* VARCHAR codigo_emp  [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

                                 /* Infacu (C2) */
/* VARCHAR vecinf      [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecinf[20];

                                 /* Movto_C (C3) */
/* VARCHAR comprobanteb[07]; */ 
struct { unsigned short len; unsigned char arr[7]; } comprobanteb;

/* VARCHAR consecutivob[07]; */ 
struct { unsigned short len; unsigned char arr[7]; } consecutivob;

/* VARCHAR fechab      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechab;

/* VARCHAR conceptob   [45]; */ 
struct { unsigned short len; unsigned char arr[45]; } conceptob;

                                 /* Movto_D (C4) */
/* VARCHAR secuenciab  [7]; */ 
struct { unsigned short len; unsigned char arr[7]; } secuenciab;

/* VARCHAR secb        [7]; */ 
struct { unsigned short len; unsigned char arr[7]; } secb;

/* VARCHAR infa        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infa;

/* VARCHAR infb        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infb;

/* VARCHAR infc        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infc;

/* VARCHAR infd        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infd;

/* VARCHAR valor_debb  [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } valor_debb;

/* VARCHAR valor_creb  [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } valor_creb;

char    inf         [5][14];
/* VARCHAR li_c        [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } li_c;

                                 /* Control_Mes (C5) */
double  consecutivo;
/* VARCHAR fuenteb     [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } fuenteb;

double  consecutivo16;
                                 /* Acumulados (C6) */
double  nitn;
/* VARCHAR codigo_nitb [06]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nitb;

/* VARCHAR cuentab     [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuentab;

/* VARCHAR sucursalb   [05]; */ 
struct { unsigned short len; unsigned char arr[5]; } sucursalb;

/* VARCHAR cen_cosb    [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } cen_cosb;

int     ultimo;
int     db_cr;
double  valor;
/* VARCHAR identifica  [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } identifica;

/* VARCHAR procedimiento [256]; */ 
struct { unsigned short len; unsigned char arr[256]; } procedimiento;

float   ptaje;
float   ptajesuc;
int     codigo;
/* VARCHAR ano_mes     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR codigox     [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } codigox;

/* VARCHAR fecha_has   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_has;

/* VARCHAR fecha_asto  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_asto;

/* VARCHAR pro_pen     [35]; */ 
struct { unsigned short len; unsigned char arr[35]; } pro_pen;

/* VARCHAR eps         [35]; */ 
struct { unsigned short len; unsigned char arr[35]; } eps;

/* VARCHAR tabla       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } tabla;

/* VARCHAR gasto_comun [2]; */ 
struct { unsigned short len; unsigned char arr[2]; } gasto_comun;

                                 /* Plan (C8) */
/* VARCHAR veca        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } veca;

/* VARCHAR vecb        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecb;

/* VARCHAR vecc        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecc;

/* VARCHAR vecd        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecd;

/* VARCHAR gasto_cc    [2]; */ 
struct { unsigned short len; unsigned char arr[2]; } gasto_cc;

int     codigo_nit;
char    vecplan     [5][14];

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
int     i, j, k, l;
double  valor_deb;
double  valor_cre;
char    cadena[100];
char    login[30];
char    copias[5];
int     staorag;
double  valor_r;
double  valor_d;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 9)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp aaaammdd comprobante concepto(Hasta 40 caracteres) copias pagina device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("      device : s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len   =      strlen(codigo_emp.arr);
       strcpy (fecha_has.arr,  argv[2]);
       fecha_has.len    =      strlen(fecha_has.arr);
       strcpy (comprobanteb.arr,argv[3]);
       comprobanteb.len =      strlen(comprobanteb.arr);
       strcpy (conceptob.arr,argv[4]);
       conceptob.len =         strlen(conceptob.arr);
       strcpy (copias,         argv[5]);
       strcpy (pagina,         argv[6]);
       strcpy (device,         argv[7]);
       strlow (device);

    if ( strlen(fecha_has.arr) != 8 ) {
         printf("Error, la fecha debe ser de 8 digitos y formato AAAAMMDD");
         exit (1);
    }

    if (!strpos ("/", argv[8]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[8]);
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
    strcpy (ano_mes.arr,fecha_has.arr);
    strorg (ano_mes.arr,1,6);
    ano_mes.len  = strlen(ano_mes.arr);

    strcpy (cadena,fecha_has.arr);
    strorg (cadena,1,4);
    anoi         =        atoi(cadena);
    strcpy (cadena,fecha_has.arr);
    strorg (cadena,5,2);
    mesi         =        atoi(cadena);

    /* EXEC SQL select n.nombre, n.nit, n.digito
             into  :nomb_emp, :nit, :digito
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
    sqlstm.sqhstl[0] = (unsigned int  )53;
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



    sprintf(secb.arr,"%5d",1);
    secb.len = strlen(secb.arr);

//    printf("codigo_emp.arr=%s secb.arr=%s fecha_has.arr=%s ", codigo_emp.arr, secb.arr, fecha_has.arr ); getchar();

    /* EXEC SQL DECLARE C6 CURSOR FOR
         SELECT N.NIT, N.CODIGO_NIT, NVL(S.CUENTA,C.CUENTA), C.DB_CR,
                ABS(SUM(DECODE(D.CLASE_PD,1,VALOR_NOVED,0))-SUM(DECODE(D.CLASE_PD,2,VALOR_NOVED,0))),
                C.IDENTIFICA, nvl(C.PROCEDIMIENTO,'X'), C.PTAJE,
                to_date(:fecha_has,'yyyymmdd'), E.PRO_PEN, E.EPS, C.TABLA,
                DECODE(NVL(P.SUCURSAL,0),1,V.SUCURSAL,'001'), decode(substr(C.CUENTA,1,1),'1',1,'2',1,'3',1,V.CEN_COS),
                nvl(E.GASTO_COMUN,'N'), E.CODIGO
         FROM   NOMNOVED D, NOMNOVEC V, NOMCAUCION S, NOMCAUSA C, NOMEMPLE E, NITS N, PLAN P
         WHERE  E.CODIGO_EMP = :codigo_emp                    AND
                E.CODIGO_NIT = N.CODIGO_NIT                   AND
                C.SECUENCIA  = :secb                          AND
                C.CODIGO_EMP = E.CODIGO_EMP                   AND
                C.CODIGO_EMP = S.CODIGO_EMP                   AND
                C.SUCURSAL   = S.SUCURSAL                     AND
                C.CEN_COS    = S.CEN_COS                      AND
                C.SECUENCIA  = S.SECUENCIA                    AND
                D.CONCEPTO   = S.CONCEPTO                     AND
                D.CODIGO_EMP = V.CODIGO_EMP                   AND
                D.FECHA_HAS  = V.FECHA_HAS                    AND
                D.CODIGO     = V.CODIGO                       AND
                V.CODIGO_EMP = E.CODIGO_EMP                   AND
                V.FECHA_HAS  = to_date(:fecha_has,'yyyymmdd') AND
                V.CODIGO     = E.CODIGO                       AND
                V.SUCURSAL   = C.SUCURSAL                     AND
                V.CEN_COS    = C.CEN_COS                      AND
                V.CODIGO_EMP = P.CODIGO_EMP                   AND
                NVL(S.CUENTA,C.CUENTA) = P.CUENTA
         GROUP BY N.NIT, N.CODIGO_NIT, C.CUENTA, S.CUENTA, C.DB_CR,
                  C.IDENTIFICA, C.PROCEDIMIENTO, C.PTAJE, E.CODIGO,
                  E.PRO_PEN, E.EPS, C.TABLA, V.SUCURSAL, V.CEN_COS, 
                  E.GASTO_COMUN, P.SUCURSAL
         ORDER BY E.CODIGO; */ 


    /* EXEC SQL DECLARE C7 CURSOR FOR
             select sucursal, ptaje, ultimo
             from   SUCURSAL
             where  codigo_emp = :codigo_emp and
                    ptaje > 0
             order by ultimo, ptaje, sucursal; */ 


    /* EXEC SQL DECLARE C9 CURSOR FOR
             select sucursal, ptaje, ultimo
             from   NOMGASTOS
             where  codigo_emp = :codigo_emp and
                    codigo     = :codigo     and
                    ptaje > 0
             order by ultimo, ptaje, sucursal; */ 


    hacer_asiento();

    cierre_impresora();

    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )116;
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

/*
  strcpy(fuenteb.arr,"16");
  fuenteb.len = strlen(fuenteb.arr);
*/

/* Lee consecutivo de control_mes Fte 16 Cns ultimo Asiento Nomina (Pagos-Dtos)*/

/*
  EXEC SQL select consecutivo   into :consecutivo16
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mes)       and
                 codigo_emp   = to_number(:codigo_emp);
*/

  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
      fprintf (stderr, "Error leyendo Control_Mes (%d)\n", sqlca.sqlcode);
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo16);
        consecutivob.len = strlen(consecutivob.arr);

        /* EXEC SQL delete from movto_d
                 where codigo_emp   = to_number(:codigo_emp)   and
                       ano_mes      = to_number(:ano_mes)      and
                       consecutivo  = (select consecutivo
                                       from movto_c
                                       where codigo_emp   = to_number(:codigo_emp)   and
                                             clase        = 'NO'                     and
                                             tipo         = '10'                     and
                                             ano_mes      = to_number(:ano_mes)      and
                                             comprobante  = to_number(:comprobanteb)); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "delete  from movto_d  where ((codigo_emp=to_number(:b\
0) and ano_mes=to_number(:b1)) and consecutivo=(select consecutivo  from movto\
_c where ((((codigo_emp=to_number(:b0) and clase='NO') and tipo='10') and ano_\
mes=to_number(:b1)) and comprobante=to_number(:b4))))";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )131;
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
        sqlstm.sqhstv[1] = (         void  *)&ano_mes;
        sqlstm.sqhstl[1] = (unsigned int  )22;
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
        sqlstm.sqhstv[3] = (         void  *)&ano_mes;
        sqlstm.sqhstl[3] = (unsigned int  )22;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&comprobanteb;
        sqlstm.sqhstl[4] = (unsigned int  )9;
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



        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo Movto_D (%d)\n", sqlca.sqlcode);

        /* EXEC SQL delete from movto_c
                 where codigo_emp   = to_number(:codigo_emp)   and
                       clase        = 'NO'                     and
                       tipo         = '10'                     and
                       ano_mes      = to_number(:ano_mes)      and
                       comprobante  = to_number(:comprobanteb); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "delete  from movto_c  where ((((codigo_emp=to_number(\
:b0) and clase='NO') and tipo='10') and ano_mes=to_number(:b1)) and comprobant\
e=to_number(:b2))";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )166;
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
        sqlstm.sqhstv[1] = (         void  *)&ano_mes;
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
            fprintf (stderr, "Error leyendo Movto_C (%d)\n", sqlca.sqlcode);

  }

  strcpy(fuenteb.arr,"08");
  fuenteb.len = strlen(fuenteb.arr);

  /* Lee consecutivo de Control_mes Fte 08 sgte consecutivo */

  /* EXEC SQL select consecutivo+1 into :consecutivo
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mes)       and
                 codigo_emp   = to_number(:codigo_emp) for update; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select (consecutivo+1) into :b0  from control_mes where ((f\
uente=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3)\
) for update ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )193;
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
  sqlstm.sqhstv[2] = (         void  *)&ano_mes;
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
      fprintf (stderr, "Error leyendo Control_Mes 08 (%d)\n", sqlca.sqlcode);
      consecutivo=1;
      sprintf(consecutivob.arr,"%5.0f",consecutivo);
      consecutivob.len = strlen(consecutivob.arr);
               /* Inserta en Control_Mes Fte 08 si no existe (C11) */
      /* EXEC SQL insert into control_mes (fuente, ano_mes, nombre, consecutivo, codigo_emp)
               values (:fuenteb, :ano_mes, 'CONTROL NOMINA P-D',
                       :consecutivob, :codigo_emp); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into control_mes(fuente,ano_mes,nombre,consecuti\
vo,codigo_emp) values (:b0,:b1,'CONTROL NOMINA P-D',:b2,:b3)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )224;
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
      sqlstm.sqhstv[1] = (         void  *)&ano_mes;
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
        sprintf(consecutivob.arr,"%5.0f",consecutivo);
        consecutivob.len = strlen(consecutivob.arr);
               /* Actualiza Cns de Fte 08 en control_mes (C12) */
        /* EXEC SQL update control_mes
                 set    consecutivo = :consecutivob
                 where codigo_emp   = to_number(:codigo_emp)    and
                       ano_mes      = to_number(:ano_mes)       and
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
        sqlstm.offset = (unsigned int  )255;
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
        sqlstm.sqhstv[2] = (         void  *)&ano_mes;
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

/*
  strcpy(fuenteb.arr,"16");
  fuenteb.len = strlen(fuenteb.arr);

  EXEC SQL select consecutivo   into :consecutivo16
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mes)       and
                 codigo_emp   = to_number(:codigo_emp);

  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes 16 (%d)\n", sqlca.sqlcode);
*/
               /* Inserta en Control_Mes Fte 16 si no existe (C11) */
/*
      EXEC SQL insert into control_mes
               values (:fuenteb, :ano_mes, 'CONTROL NOMINA P-D',
                       :consecutivob, :codigo_emp);
     }
  else {
*/
               /* Actualiza Cns de Fte 16 en control_mes (C12) */
/*
        EXEC SQL update control_mes
                 set    consecutivo = :consecutivob
                 where codigo_emp   = to_number(:codigo_emp)    and
                       ano_mes      = to_number(:ano_mes)       and
                       fuente       = :fuenteb;
  }
*/

  /* EXEC SQL OPEN C6; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlbuft((void **)0, 
    "select N.NIT ,N.CODIGO_NIT ,NVL(S.CUENTA,C.CUENTA) ,C.DB_CR ,ABS((sum(D\
ECODE(D.CLASE_PD,1,VALOR_NOVED,0))-sum(DECODE(D.CLASE_PD,2,VALOR_NOVED,0))))\
 ,C.IDENTIFICA ,nvl(C.PROCEDIMIENTO,'X') ,C.PTAJE ,to_date(:b0,'yyyymmdd') ,\
E.PRO_PEN ,E.EPS ,C.TABLA ,DECODE(NVL(P.SUCURSAL,0),1,V.SUCURSAL,'001') ,dec\
ode(substr(C.CUENTA,1,1),'1',1,'2',1,'3',1,V.CEN_COS) ,nvl(E.GASTO_COMUN,'N'\
) ,E.CODIGO  from NOMNOVED D ,NOMNOVEC V ,NOMCAUCION S ,NOMCAUSA C ,NOMEMPLE\
 E ,NITS N ,PLAN P where ((((((((((((((((((E.CODIGO_EMP=:b1 and E.CODIGO_NIT\
=N.CODIGO_NIT) and C.SECUENCIA=:b2) and C.CODIGO_EMP=E.CODIGO_EMP) and C.COD\
IGO_EMP=S.CODIGO_EMP) and C.SUCURSAL=S.SUCURSAL) and C.CEN_COS=S.CEN_COS) an\
d C.SECUENCIA=S.SECUENCIA) and D.CONCEPTO=S.CONCEPTO) and D.CODIGO_EMP=V.COD\
IGO_EMP) and D.FECHA_HAS=V.FECHA_HAS) and D.CODIGO=V.CODIGO) and V.CODIGO_EM\
P=E.CODIGO_EMP) and V.FECHA_HAS=to_date(:b0,'yyyymmdd')) and V.CODIGO=E.CODI\
GO) and V.SUCURSAL=C.SUCURSAL) and V.CEN_COS=C.CEN_COS) and V.CODIGO_EMP=P.C\
ODIGO_EMP) and NVL(S.CUENTA,C.CUENTA)=P.C");
  sqlstm.stmt = sq0004;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )286;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&fecha_has;
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
  sqlstm.sqhstv[2] = (         void  *)&secb;
  sqlstm.sqhstl[2] = (unsigned int  )9;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&fecha_has;
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



  /* EXEC SQL FETCH C6 INTO :nitn,       :codigo_nit,    :cuentab,   :db_cr, :valor,
                         :identifica, :procedimiento, :ptaje,     :fecha_asto,
                         :pro_pen,    :eps,           :tabla,     :sucursalb,
                         :cen_cosb,   :gasto_comun,   :codigo; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 16;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )317;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&nitn;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&codigo_nit;
  sqlstm.sqhstl[1] = (unsigned int  )4;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&cuentab;
  sqlstm.sqhstl[2] = (unsigned int  )17;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&db_cr;
  sqlstm.sqhstl[3] = (unsigned int  )4;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&valor;
  sqlstm.sqhstl[4] = (unsigned int  )8;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&identifica;
  sqlstm.sqhstl[5] = (unsigned int  )32;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&procedimiento;
  sqlstm.sqhstl[6] = (unsigned int  )258;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&ptaje;
  sqlstm.sqhstl[7] = (unsigned int  )4;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&fecha_asto;
  sqlstm.sqhstl[8] = (unsigned int  )22;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&pro_pen;
  sqlstm.sqhstl[9] = (unsigned int  )37;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&eps;
  sqlstm.sqhstl[10] = (unsigned int  )37;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&tabla;
  sqlstm.sqhstl[11] = (unsigned int  )22;
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
  sqlstm.sqhstv[14] = (         void  *)&gasto_comun;
  sqlstm.sqhstl[14] = (unsigned int  )4;
  sqlstm.sqhsts[14] = (         int  )0;
  sqlstm.sqindv[14] = (         void  *)0;
  sqlstm.sqinds[14] = (         int  )0;
  sqlstm.sqharm[14] = (unsigned int  )0;
  sqlstm.sqadto[14] = (unsigned short )0;
  sqlstm.sqtdso[14] = (unsigned short )0;
  sqlstm.sqhstv[15] = (         void  *)&codigo;
  sqlstm.sqhstl[15] = (unsigned int  )4;
  sqlstm.sqhsts[15] = (         int  )0;
  sqlstm.sqindv[15] = (         void  *)0;
  sqlstm.sqinds[15] = (         int  )0;
  sqlstm.sqharm[15] = (unsigned int  )0;
  sqlstm.sqadto[15] = (unsigned short )0;
  sqlstm.sqtdso[15] = (unsigned short )0;
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

   if (sqlca.sqlcode == -1405 )
       staora = 0;
   if (staora != 1403 && staora != 0)
       fprintf (stderr, "Error leyendo C6 (%d)\n", staora);

  if (staora==1403)
     {
      fprintf (stderr, "Error leyendo C6. (%d)\n", sqlca.sqlcode);
      /* EXEC SQL CLOSE C6; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 16;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )396;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      for ( l=2; l<=25; l++ ) {

          sprintf(secb.arr,"%5d",l);
          secb.len = strlen(secb.arr);
          /* EXEC SQL OPEN C6; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 16;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlbuft((void **)0, 
            "select N.NIT ,N.CODIGO_NIT ,NVL(S.CUENTA,C.CUENTA) ,C.DB_CR ,AB\
S((sum(DECODE(D.CLASE_PD,1,VALOR_NOVED,0))-sum(DECODE(D.CLASE_PD,2,VALOR_NOV\
ED,0)))) ,C.IDENTIFICA ,nvl(C.PROCEDIMIENTO,'X') ,C.PTAJE ,to_date(:b0,'yyyy\
mmdd') ,E.PRO_PEN ,E.EPS ,C.TABLA ,DECODE(NVL(P.SUCURSAL,0),1,V.SUCURSAL,'00\
1') ,decode(substr(C.CUENTA,1,1),'1',1,'2',1,'3',1,V.CEN_COS) ,nvl(E.GASTO_C\
OMUN,'N') ,E.CODIGO  from NOMNOVED D ,NOMNOVEC V ,NOMCAUCION S ,NOMCAUSA C ,\
NOMEMPLE E ,NITS N ,PLAN P where ((((((((((((((((((E.CODIGO_EMP=:b1 and E.CO\
DIGO_NIT=N.CODIGO_NIT) and C.SECUENCIA=:b2) and C.CODIGO_EMP=E.CODIGO_EMP) a\
nd C.CODIGO_EMP=S.CODIGO_EMP) and C.SUCURSAL=S.SUCURSAL) and C.CEN_COS=S.CEN\
_COS) and C.SECUENCIA=S.SECUENCIA) and D.CONCEPTO=S.CONCEPTO) and D.CODIGO_E\
MP=V.CODIGO_EMP) and D.FECHA_HAS=V.FECHA_HAS) and D.CODIGO=V.CODIGO) and V.C\
ODIGO_EMP=E.CODIGO_EMP) and V.FECHA_HAS=to_date(:b0,'yyyymmdd')) and V.CODIG\
O=E.CODIGO) and V.SUCURSAL=C.SUCURSAL) and V.CEN_COS=C.CEN_COS) and V.CODIGO\
_EMP=P.CODIGO_EMP) and NVL(S.CUENTA,C.CUENTA)=P.C");
          sqlstm.stmt = sq0004;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )411;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (         void  *)&fecha_has;
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
          sqlstm.sqhstv[2] = (         void  *)&secb;
          sqlstm.sqhstl[2] = (unsigned int  )9;
          sqlstm.sqhsts[2] = (         int  )0;
          sqlstm.sqindv[2] = (         void  *)0;
          sqlstm.sqinds[2] = (         int  )0;
          sqlstm.sqharm[2] = (unsigned int  )0;
          sqlstm.sqadto[2] = (unsigned short )0;
          sqlstm.sqtdso[2] = (unsigned short )0;
          sqlstm.sqhstv[3] = (         void  *)&fecha_has;
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


          /* EXEC SQL FETCH C6 INTO :nitn,       :codigo_nit,    :cuentab,   :db_cr, :valor,
                                 :identifica, :procedimiento, :ptaje,     :fecha_asto,
                                 :pro_pen,    :eps,           :tabla,     :sucursalb,
                                 :cen_cosb,   :gasto_comun,   :codigo; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 16;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )442;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (         void  *)&nitn;
          sqlstm.sqhstl[0] = (unsigned int  )8;
          sqlstm.sqhsts[0] = (         int  )0;
          sqlstm.sqindv[0] = (         void  *)0;
          sqlstm.sqinds[0] = (         int  )0;
          sqlstm.sqharm[0] = (unsigned int  )0;
          sqlstm.sqadto[0] = (unsigned short )0;
          sqlstm.sqtdso[0] = (unsigned short )0;
          sqlstm.sqhstv[1] = (         void  *)&codigo_nit;
          sqlstm.sqhstl[1] = (unsigned int  )4;
          sqlstm.sqhsts[1] = (         int  )0;
          sqlstm.sqindv[1] = (         void  *)0;
          sqlstm.sqinds[1] = (         int  )0;
          sqlstm.sqharm[1] = (unsigned int  )0;
          sqlstm.sqadto[1] = (unsigned short )0;
          sqlstm.sqtdso[1] = (unsigned short )0;
          sqlstm.sqhstv[2] = (         void  *)&cuentab;
          sqlstm.sqhstl[2] = (unsigned int  )17;
          sqlstm.sqhsts[2] = (         int  )0;
          sqlstm.sqindv[2] = (         void  *)0;
          sqlstm.sqinds[2] = (         int  )0;
          sqlstm.sqharm[2] = (unsigned int  )0;
          sqlstm.sqadto[2] = (unsigned short )0;
          sqlstm.sqtdso[2] = (unsigned short )0;
          sqlstm.sqhstv[3] = (         void  *)&db_cr;
          sqlstm.sqhstl[3] = (unsigned int  )4;
          sqlstm.sqhsts[3] = (         int  )0;
          sqlstm.sqindv[3] = (         void  *)0;
          sqlstm.sqinds[3] = (         int  )0;
          sqlstm.sqharm[3] = (unsigned int  )0;
          sqlstm.sqadto[3] = (unsigned short )0;
          sqlstm.sqtdso[3] = (unsigned short )0;
          sqlstm.sqhstv[4] = (         void  *)&valor;
          sqlstm.sqhstl[4] = (unsigned int  )8;
          sqlstm.sqhsts[4] = (         int  )0;
          sqlstm.sqindv[4] = (         void  *)0;
          sqlstm.sqinds[4] = (         int  )0;
          sqlstm.sqharm[4] = (unsigned int  )0;
          sqlstm.sqadto[4] = (unsigned short )0;
          sqlstm.sqtdso[4] = (unsigned short )0;
          sqlstm.sqhstv[5] = (         void  *)&identifica;
          sqlstm.sqhstl[5] = (unsigned int  )32;
          sqlstm.sqhsts[5] = (         int  )0;
          sqlstm.sqindv[5] = (         void  *)0;
          sqlstm.sqinds[5] = (         int  )0;
          sqlstm.sqharm[5] = (unsigned int  )0;
          sqlstm.sqadto[5] = (unsigned short )0;
          sqlstm.sqtdso[5] = (unsigned short )0;
          sqlstm.sqhstv[6] = (         void  *)&procedimiento;
          sqlstm.sqhstl[6] = (unsigned int  )258;
          sqlstm.sqhsts[6] = (         int  )0;
          sqlstm.sqindv[6] = (         void  *)0;
          sqlstm.sqinds[6] = (         int  )0;
          sqlstm.sqharm[6] = (unsigned int  )0;
          sqlstm.sqadto[6] = (unsigned short )0;
          sqlstm.sqtdso[6] = (unsigned short )0;
          sqlstm.sqhstv[7] = (         void  *)&ptaje;
          sqlstm.sqhstl[7] = (unsigned int  )4;
          sqlstm.sqhsts[7] = (         int  )0;
          sqlstm.sqindv[7] = (         void  *)0;
          sqlstm.sqinds[7] = (         int  )0;
          sqlstm.sqharm[7] = (unsigned int  )0;
          sqlstm.sqadto[7] = (unsigned short )0;
          sqlstm.sqtdso[7] = (unsigned short )0;
          sqlstm.sqhstv[8] = (         void  *)&fecha_asto;
          sqlstm.sqhstl[8] = (unsigned int  )22;
          sqlstm.sqhsts[8] = (         int  )0;
          sqlstm.sqindv[8] = (         void  *)0;
          sqlstm.sqinds[8] = (         int  )0;
          sqlstm.sqharm[8] = (unsigned int  )0;
          sqlstm.sqadto[8] = (unsigned short )0;
          sqlstm.sqtdso[8] = (unsigned short )0;
          sqlstm.sqhstv[9] = (         void  *)&pro_pen;
          sqlstm.sqhstl[9] = (unsigned int  )37;
          sqlstm.sqhsts[9] = (         int  )0;
          sqlstm.sqindv[9] = (         void  *)0;
          sqlstm.sqinds[9] = (         int  )0;
          sqlstm.sqharm[9] = (unsigned int  )0;
          sqlstm.sqadto[9] = (unsigned short )0;
          sqlstm.sqtdso[9] = (unsigned short )0;
          sqlstm.sqhstv[10] = (         void  *)&eps;
          sqlstm.sqhstl[10] = (unsigned int  )37;
          sqlstm.sqhsts[10] = (         int  )0;
          sqlstm.sqindv[10] = (         void  *)0;
          sqlstm.sqinds[10] = (         int  )0;
          sqlstm.sqharm[10] = (unsigned int  )0;
          sqlstm.sqadto[10] = (unsigned short )0;
          sqlstm.sqtdso[10] = (unsigned short )0;
          sqlstm.sqhstv[11] = (         void  *)&tabla;
          sqlstm.sqhstl[11] = (unsigned int  )22;
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
          sqlstm.sqhstv[14] = (         void  *)&gasto_comun;
          sqlstm.sqhstl[14] = (unsigned int  )4;
          sqlstm.sqhsts[14] = (         int  )0;
          sqlstm.sqindv[14] = (         void  *)0;
          sqlstm.sqinds[14] = (         int  )0;
          sqlstm.sqharm[14] = (unsigned int  )0;
          sqlstm.sqadto[14] = (unsigned short )0;
          sqlstm.sqtdso[14] = (unsigned short )0;
          sqlstm.sqhstv[15] = (         void  *)&codigo;
          sqlstm.sqhstl[15] = (unsigned int  )4;
          sqlstm.sqhsts[15] = (         int  )0;
          sqlstm.sqindv[15] = (         void  *)0;
          sqlstm.sqinds[15] = (         int  )0;
          sqlstm.sqharm[15] = (unsigned int  )0;
          sqlstm.sqadto[15] = (unsigned short )0;
          sqlstm.sqtdso[15] = (unsigned short )0;
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

          if (sqlca.sqlcode == -1405 )
             staora = 0;
          if (staora != 1403 && staora != 0)
              fprintf (stderr, "Error leyendo C6.. (%d) l=(%d)\n", staora, l);
          else {
               if (staora == 1403 )
                   fprintf (stderr, "Error leyendo C6..1 (%d) l=(%d)\n", staora, l);
               else {
                    fprintf (stderr, "Lo encontre (%d) l=(%d)\n", staora, l);
                    break;
               }
          }
          /* EXEC SQL CLOSE C6; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 16;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )521;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      }
  }
  else {
     if (staora!=0) {
         fprintf (stderr, "Error leyendo C6... (%d)\n", staora);
         exit(0);
     }
  }

  if (l==25) {
      fprintf (stderr, "Error no hay novedades (%d)\n", l);
      exit(0);
  }

  fecha_asto.arr  [fecha_asto.len] = '\0';
//  printf("ano_mes.arr=%s fecha_asto.arr=%s nitn=%12.0f ", ano_mes.arr, fecha_asto.arr, nitn ); getchar();
  strcpy(fechab.arr,fecha_asto.arr);
  fechab.len = strlen(fechab.arr);

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
           values(:codigo_emp, :ano_mes, :comprobanteb, :consecutivob, 'NO',
                  :conceptob,:fechab,'10', '0','','','','',''); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 16;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into movto_c(CODIGO_EMP,ANO_MES,COMPROBANTE,CONSECUT\
IVO,CLASE,DESCRIPCION,FECHA,TIPO,ESTADO,NITB,CODIGO_NITB,VALORB,RETENCION,CONT\
ADO) values (:b0,:b1,:b2,:b3,'NO',:b4,:b5,'10','0','','','','','')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )536;
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
  sqlstm.sqhstv[1] = (         void  *)&ano_mes;
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
  sqlstm.sqhstv[4] = (         void  *)&conceptob;
  sqlstm.sqhstl[4] = (unsigned int  )47;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&fechab;
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



  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
      fprintf (stderr, "Error insertando Movto_C (%d)\n", sqlca.sqlcode);


  /* EXEC SQL CLOSE C6; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 16;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )575;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  for ( l=1; l<=25; l++ ) {

       sprintf(secb.arr,"%5d",l);
       secb.len = strlen(secb.arr);

       /* EXEC SQL OPEN C6; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 16;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlbuft((void **)0, 
         "select N.NIT ,N.CODIGO_NIT ,NVL(S.CUENTA,C.CUENTA) ,C.DB_CR ,ABS((\
sum(DECODE(D.CLASE_PD,1,VALOR_NOVED,0))-sum(DECODE(D.CLASE_PD,2,VALOR_NOVED,\
0)))) ,C.IDENTIFICA ,nvl(C.PROCEDIMIENTO,'X') ,C.PTAJE ,to_date(:b0,'yyyymmd\
d') ,E.PRO_PEN ,E.EPS ,C.TABLA ,DECODE(NVL(P.SUCURSAL,0),1,V.SUCURSAL,'001')\
 ,decode(substr(C.CUENTA,1,1),'1',1,'2',1,'3',1,V.CEN_COS) ,nvl(E.GASTO_COMU\
N,'N') ,E.CODIGO  from NOMNOVED D ,NOMNOVEC V ,NOMCAUCION S ,NOMCAUSA C ,NOM\
EMPLE E ,NITS N ,PLAN P where ((((((((((((((((((E.CODIGO_EMP=:b1 and E.CODIG\
O_NIT=N.CODIGO_NIT) and C.SECUENCIA=:b2) and C.CODIGO_EMP=E.CODIGO_EMP) and \
C.CODIGO_EMP=S.CODIGO_EMP) and C.SUCURSAL=S.SUCURSAL) and C.CEN_COS=S.CEN_CO\
S) and C.SECUENCIA=S.SECUENCIA) and D.CONCEPTO=S.CONCEPTO) and D.CODIGO_EMP=\
V.CODIGO_EMP) and D.FECHA_HAS=V.FECHA_HAS) and D.CODIGO=V.CODIGO) and V.CODI\
GO_EMP=E.CODIGO_EMP) and V.FECHA_HAS=to_date(:b0,'yyyymmdd')) and V.CODIGO=E\
.CODIGO) and V.SUCURSAL=C.SUCURSAL) and V.CEN_COS=C.CEN_COS) and V.CODIGO_EM\
P=P.CODIGO_EMP) and NVL(S.CUENTA,C.CUENTA)=P.C");
       sqlstm.stmt = sq0004;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )590;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&fecha_has;
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
       sqlstm.sqhstv[2] = (         void  *)&secb;
       sqlstm.sqhstl[2] = (unsigned int  )9;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&fecha_has;
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



       /* EXEC SQL FETCH C6 INTO :nitn,       :codigo_nit,    :cuentab,   :db_cr, :valor,
                              :identifica, :procedimiento, :ptaje,     :fecha_asto,
                              :pro_pen,    :eps,           :tabla,     :sucursalb,
                              :cen_cosb,   :gasto_comun,   :codigo; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 16;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )621;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&nitn;
       sqlstm.sqhstl[0] = (unsigned int  )8;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&codigo_nit;
       sqlstm.sqhstl[1] = (unsigned int  )4;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&cuentab;
       sqlstm.sqhstl[2] = (unsigned int  )17;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&db_cr;
       sqlstm.sqhstl[3] = (unsigned int  )4;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor;
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&identifica;
       sqlstm.sqhstl[5] = (unsigned int  )32;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&procedimiento;
       sqlstm.sqhstl[6] = (unsigned int  )258;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&ptaje;
       sqlstm.sqhstl[7] = (unsigned int  )4;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&fecha_asto;
       sqlstm.sqhstl[8] = (unsigned int  )22;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&pro_pen;
       sqlstm.sqhstl[9] = (unsigned int  )37;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&eps;
       sqlstm.sqhstl[10] = (unsigned int  )37;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&tabla;
       sqlstm.sqhstl[11] = (unsigned int  )22;
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
       sqlstm.sqhstv[14] = (         void  *)&gasto_comun;
       sqlstm.sqhstl[14] = (unsigned int  )4;
       sqlstm.sqhsts[14] = (         int  )0;
       sqlstm.sqindv[14] = (         void  *)0;
       sqlstm.sqinds[14] = (         int  )0;
       sqlstm.sqharm[14] = (unsigned int  )0;
       sqlstm.sqadto[14] = (unsigned short )0;
       sqlstm.sqtdso[14] = (unsigned short )0;
       sqlstm.sqhstv[15] = (         void  *)&codigo;
       sqlstm.sqhstl[15] = (unsigned int  )4;
       sqlstm.sqhsts[15] = (         int  )0;
       sqlstm.sqindv[15] = (         void  *)0;
       sqlstm.sqinds[15] = (         int  )0;
       sqlstm.sqharm[15] = (unsigned int  )0;
       sqlstm.sqadto[15] = (unsigned short )0;
       sqlstm.sqtdso[15] = (unsigned short )0;
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

        if (sqlca.sqlcode == -1405 )
           staora = 0;
        if (staora != 1403 && staora != 0)
            fprintf (stderr, "Error leyendo C6 (%d)\n", staora);

        while (staora == 0 ) {

//       printf("secb.arr=<%s> procedimiento <%s>",secb.arr, procedimiento.arr); getchar();
       
              cuentab.arr      [cuentab.len]        = '\0';
              procedimiento.arr[procedimiento.len]  = '\0';
              identifica.arr   [identifica.len]     = '\0';
              pro_pen.arr      [pro_pen.len]        = '\0';
              eps.arr          [eps.len]            = '\0';
              tabla.arr        [tabla.len]          = '\0';
              sucursalb.arr    [sucursalb.len]      = '\0';
              cen_cosb.arr     [cen_cosb.len]       = '\0';
              gasto_comun.arr  [gasto_comun.len]    = '\0';

              if (!strcmp(procedimiento.arr,"EPS") && strlen(eps.arr) > 0) {
                  /* EXEC SQL select nit, codigo_nit
                           into  :nitn, :codigo_nit
                           from   nits
                           where  codigo_nit = (select codigo_nit
                                                from   nomepss
                                                where  nombre = :eps); */ 

{
                  struct sqlexd sqlstm;

                  sqlstm.sqlvsn = 10;
                  sqlstm.arrsiz = 16;
                  sqlstm.sqladtp = &sqladt;
                  sqlstm.sqltdsp = &sqltds;
                  sqlstm.stmt = "select nit ,codigo_nit into :b0,:b1  from n\
its where codigo_nit=(select codigo_nit  from nomepss where nombre=:b2)";
                  sqlstm.iters = (unsigned int  )1;
                  sqlstm.offset = (unsigned int  )700;
                  sqlstm.selerr = (unsigned short)1;
                  sqlstm.cud = sqlcud0;
                  sqlstm.sqlest = (unsigned char  *)&sqlca;
                  sqlstm.sqlety = (unsigned short)256;
                  sqlstm.occurs = (unsigned int  )0;
                  sqlstm.sqhstv[0] = (         void  *)&nitn;
                  sqlstm.sqhstl[0] = (unsigned int  )8;
                  sqlstm.sqhsts[0] = (         int  )0;
                  sqlstm.sqindv[0] = (         void  *)0;
                  sqlstm.sqinds[0] = (         int  )0;
                  sqlstm.sqharm[0] = (unsigned int  )0;
                  sqlstm.sqadto[0] = (unsigned short )0;
                  sqlstm.sqtdso[0] = (unsigned short )0;
                  sqlstm.sqhstv[1] = (         void  *)&codigo_nit;
                  sqlstm.sqhstl[1] = (unsigned int  )4;
                  sqlstm.sqhsts[1] = (         int  )0;
                  sqlstm.sqindv[1] = (         void  *)0;
                  sqlstm.sqinds[1] = (         int  )0;
                  sqlstm.sqharm[1] = (unsigned int  )0;
                  sqlstm.sqadto[1] = (unsigned short )0;
                  sqlstm.sqtdso[1] = (unsigned short )0;
                  sqlstm.sqhstv[2] = (         void  *)&eps;
                  sqlstm.sqhstl[2] = (unsigned int  )37;
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


              }
              else {
                   if (!strcmp(procedimiento.arr,"AFP") && strlen(pro_pen.arr) > 0) {
                       /* EXEC SQL select nit, codigo_nit
                                into  :nitn, :codigo_nit
                                from   nits
                                where  codigo_nit = (select codigo_nit
                                                     from   nompensi
                                                     where  nombre = :pro_pen); */ 

{
                       struct sqlexd sqlstm;

                       sqlstm.sqlvsn = 10;
                       sqlstm.arrsiz = 16;
                       sqlstm.sqladtp = &sqladt;
                       sqlstm.sqltdsp = &sqltds;
                       sqlstm.stmt = "select nit ,codigo_nit into :b0,:b1  f\
rom nits where codigo_nit=(select codigo_nit  from nompensi where nombre=:b2)";
                       sqlstm.iters = (unsigned int  )1;
                       sqlstm.offset = (unsigned int  )727;
                       sqlstm.selerr = (unsigned short)1;
                       sqlstm.cud = sqlcud0;
                       sqlstm.sqlest = (unsigned char  *)&sqlca;
                       sqlstm.sqlety = (unsigned short)256;
                       sqlstm.occurs = (unsigned int  )0;
                       sqlstm.sqhstv[0] = (         void  *)&nitn;
                       sqlstm.sqhstl[0] = (unsigned int  )8;
                       sqlstm.sqhsts[0] = (         int  )0;
                       sqlstm.sqindv[0] = (         void  *)0;
                       sqlstm.sqinds[0] = (         int  )0;
                       sqlstm.sqharm[0] = (unsigned int  )0;
                       sqlstm.sqadto[0] = (unsigned short )0;
                       sqlstm.sqtdso[0] = (unsigned short )0;
                       sqlstm.sqhstv[1] = (         void  *)&codigo_nit;
                       sqlstm.sqhstl[1] = (unsigned int  )4;
                       sqlstm.sqhsts[1] = (         int  )0;
                       sqlstm.sqindv[1] = (         void  *)0;
                       sqlstm.sqinds[1] = (         int  )0;
                       sqlstm.sqharm[1] = (unsigned int  )0;
                       sqlstm.sqadto[1] = (unsigned short )0;
                       sqlstm.sqtdso[1] = (unsigned short )0;
                       sqlstm.sqhstv[2] = (         void  *)&pro_pen;
                       sqlstm.sqhstl[2] = (unsigned int  )37;
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


                   }
                   else {
                        if (!strcmp(procedimiento.arr,"FSP") && strlen(pro_pen.arr) > 0) {
                            /* EXEC SQL select nit, codigo_nit
                                     into  :nitn, :codigo_nit
                                     from   nits
                                     where  codigo_nit = (select codigo_nit
                                                          from   nompensi
                                                          where  nombre = :pro_pen); */ 

{
                            struct sqlexd sqlstm;

                            sqlstm.sqlvsn = 10;
                            sqlstm.arrsiz = 16;
                            sqlstm.sqladtp = &sqladt;
                            sqlstm.sqltdsp = &sqltds;
                            sqlstm.stmt = "select nit ,codigo_nit into :b0,:\
b1  from nits where codigo_nit=(select codigo_nit  from nompensi where nombre=\
:b2)";
                            sqlstm.iters = (unsigned int  )1;
                            sqlstm.offset = (unsigned int  )754;
                            sqlstm.selerr = (unsigned short)1;
                            sqlstm.cud = sqlcud0;
                            sqlstm.sqlest = (unsigned char  *)&sqlca;
                            sqlstm.sqlety = (unsigned short)256;
                            sqlstm.occurs = (unsigned int  )0;
                            sqlstm.sqhstv[0] = (         void  *)&nitn;
                            sqlstm.sqhstl[0] = (unsigned int  )8;
                            sqlstm.sqhsts[0] = (         int  )0;
                            sqlstm.sqindv[0] = (         void  *)0;
                            sqlstm.sqinds[0] = (         int  )0;
                            sqlstm.sqharm[0] = (unsigned int  )0;
                            sqlstm.sqadto[0] = (unsigned short )0;
                            sqlstm.sqtdso[0] = (unsigned short )0;
                            sqlstm.sqhstv[1] = (         void  *)&codigo_nit;
                            sqlstm.sqhstl[1] = (unsigned int  )4;
                            sqlstm.sqhsts[1] = (         int  )0;
                            sqlstm.sqindv[1] = (         void  *)0;
                            sqlstm.sqinds[1] = (         int  )0;
                            sqlstm.sqharm[1] = (unsigned int  )0;
                            sqlstm.sqadto[1] = (unsigned short )0;
                            sqlstm.sqtdso[1] = (unsigned short )0;
                            sqlstm.sqhstv[2] = (         void  *)&pro_pen;
                            sqlstm.sqhstl[2] = (unsigned int  )37;
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


                        }
                        else {
                             if (!strcmp(procedimiento.arr,"NIT")) {
                                 /* EXEC SQL select nit, codigo_nit
                                          into  :nitn, :codigo_nit
                                          from   nits
                                          where  nit = to_number(:tabla); */ 

{
                                 struct sqlexd sqlstm;

                                 sqlstm.sqlvsn = 10;
                                 sqlstm.arrsiz = 16;
                                 sqlstm.sqladtp = &sqladt;
                                 sqlstm.sqltdsp = &sqltds;
                                 sqlstm.stmt = "select nit ,codigo_nit into \
:b0,:b1  from nits where nit=to_number(:b2)";
                                 sqlstm.iters = (unsigned int  )1;
                                 sqlstm.offset = (unsigned int  )781;
                                 sqlstm.selerr = (unsigned short)1;
                                 sqlstm.cud = sqlcud0;
                                 sqlstm.sqlest = (unsigned char  *)&sqlca;
                                 sqlstm.sqlety = (unsigned short)256;
                                 sqlstm.occurs = (unsigned int  )0;
                                 sqlstm.sqhstv[0] = (         void  *)&nitn;
                                 sqlstm.sqhstl[0] = (unsigned int  )8;
                                 sqlstm.sqhsts[0] = (         int  )0;
                                 sqlstm.sqindv[0] = (         void  *)0;
                                 sqlstm.sqinds[0] = (         int  )0;
                                 sqlstm.sqharm[0] = (unsigned int  )0;
                                 sqlstm.sqadto[0] = (unsigned short )0;
                                 sqlstm.sqtdso[0] = (unsigned short )0;
                                 sqlstm.sqhstv[1] = (         void  *)&codigo_nit;
                                 sqlstm.sqhstl[1] = (unsigned int  )4;
                                 sqlstm.sqhsts[1] = (         int  )0;
                                 sqlstm.sqindv[1] = (         void  *)0;
                                 sqlstm.sqinds[1] = (         int  )0;
                                 sqlstm.sqharm[1] = (unsigned int  )0;
                                 sqlstm.sqadto[1] = (unsigned short )0;
                                 sqlstm.sqtdso[1] = (unsigned short )0;
                                 sqlstm.sqhstv[2] = (         void  *)&tabla;
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


//                                          printf("tabla=<%s> :nitn=<%15.0f> :codigo_nit=<%5d>",tabla.arr,nitn,codigo_nit); getchar();
                             }
                        }
                   }
              }

              if (codigo_nit==0)
                 strcpy(codigo_nitb.arr,"");
              else sprintf(codigo_nitb.arr,"%5d",codigo_nit);
              codigo_nitb.len = strlen(codigo_nitb.arr);

              secuencia++;
              sprintf(secuenciab.arr,"%6.0f",secuencia);
              secuenciab.len = strlen(secuenciab.arr);

//  printf("1) codigo_emp=%s ano_mes=%s comprobanteb.arr=%s consecutivob.arr=%s secuenciab.arr=%s cuentab.arr=%s fechab.arr=%s ",codigo_emp.arr,   ano_mes.arr,   comprobanteb.arr,   consecutivob.arr, secuenciab.arr, cuentab.arr, fechab.arr ); getchar();
/*
              if (valor > 0) {
                 strcpy(codigox.arr,cuentab.arr);
                 codigox.len = strlen(codigox.arr);
                 ver_inf();
                 if (!strcmp(gasto_comun.arr,"C")  &&  !strcmp(gasto_cc.arr,"C")) {
                    EXEC SQL OPEN C7;
                    EXEC SQL FETCH C7 INTO :sucursalb, :ptajesuc, :ultimo;
                    sucursalb.arr    [sucursalb.len]      = '\0';
                    staorag = sqlca.sqlcode;
                    valor_r = valor;
                    valor_d = valor;
                    while (staorag == 0 ) {
                           if (ultimo==0) {
                               valor = redondo(valor_r * ptajesuc/100,2);
                               valor_d -= valor;
                           }
                           else valor = valor_d;
                           grabar_movtod();
                           EXEC SQL FETCH C7 INTO :sucursalb, :ptajesuc, :ultimo;
                           staorag = sqlca.sqlcode;
                    }
                    EXEC SQL CLOSE C7;
                 }
                 else grabar_movtod();
              }
*/
              if (valor > 0) {
                 strcpy(codigox.arr,cuentab.arr);
                 codigox.len = strlen(codigox.arr);
                 ver_inf();
                 if ((!strcmp(gasto_comun.arr,"C") || !strcmp(gasto_comun.arr,"S")) && !strcmp(gasto_cc.arr,"C")) {
                    valor_d = valor;
                    valor_r = valor;
                    if (!strcmp(gasto_comun.arr,"C")) {
                        /* EXEC SQL OPEN C7; */ 

{
                        struct sqlexd sqlstm;

                        sqlstm.sqlvsn = 10;
                        sqlstm.arrsiz = 16;
                        sqlstm.sqladtp = &sqladt;
                        sqlstm.sqltdsp = &sqltds;
                        sqlstm.stmt = sq0005;
                        sqlstm.iters = (unsigned int  )1;
                        sqlstm.offset = (unsigned int  )808;
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


                        /* EXEC SQL FETCH C7 INTO :sucursalb, :ptajesuc, :ultimo; */ 

{
                        struct sqlexd sqlstm;

                        sqlstm.sqlvsn = 10;
                        sqlstm.arrsiz = 16;
                        sqlstm.sqladtp = &sqladt;
                        sqlstm.sqltdsp = &sqltds;
                        sqlstm.iters = (unsigned int  )1;
                        sqlstm.offset = (unsigned int  )827;
                        sqlstm.cud = sqlcud0;
                        sqlstm.sqlest = (unsigned char  *)&sqlca;
                        sqlstm.sqlety = (unsigned short)256;
                        sqlstm.occurs = (unsigned int  )0;
                        sqlstm.sqhstv[0] = (         void  *)&sucursalb;
                        sqlstm.sqhstl[0] = (unsigned int  )7;
                        sqlstm.sqhsts[0] = (         int  )0;
                        sqlstm.sqindv[0] = (         void  *)0;
                        sqlstm.sqinds[0] = (         int  )0;
                        sqlstm.sqharm[0] = (unsigned int  )0;
                        sqlstm.sqadto[0] = (unsigned short )0;
                        sqlstm.sqtdso[0] = (unsigned short )0;
                        sqlstm.sqhstv[1] = (         void  *)&ptajesuc;
                        sqlstm.sqhstl[1] = (unsigned int  )4;
                        sqlstm.sqhsts[1] = (         int  )0;
                        sqlstm.sqindv[1] = (         void  *)0;
                        sqlstm.sqinds[1] = (         int  )0;
                        sqlstm.sqharm[1] = (unsigned int  )0;
                        sqlstm.sqadto[1] = (unsigned short )0;
                        sqlstm.sqtdso[1] = (unsigned short )0;
                        sqlstm.sqhstv[2] = (         void  *)&ultimo;
                        sqlstm.sqhstl[2] = (unsigned int  )4;
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


                        sucursalb.arr    [sucursalb.len]      = '\0';
                        staorag = sqlca.sqlcode;
                        while (staorag == 0 ) {
                               if (ultimo==0) {
                                   valor = redondo(valor_r * ptajesuc/100,2);
                                   valor_d -= valor;
                               }
                               else valor = valor_d;
//                             printf("gasto_comun<%s> codigo<%d> sucursalb.arr<%s> nitn<%14.0f> valor_r<%12.2f> valor_d<%12.2f> valor<%12.2f> ",gasto_comun.arr, codigo, sucursalb.arr, nitn, valor_r, valor_d, valor); getchar();
                               grabar_movtod(0);
                               grabar_movtod(1);
                               /* EXEC SQL FETCH C7 INTO :sucursalb, :ptajesuc, :ultimo; */ 

{
                               struct sqlexd sqlstm;

                               sqlstm.sqlvsn = 10;
                               sqlstm.arrsiz = 16;
                               sqlstm.sqladtp = &sqladt;
                               sqlstm.sqltdsp = &sqltds;
                               sqlstm.iters = (unsigned int  )1;
                               sqlstm.offset = (unsigned int  )854;
                               sqlstm.cud = sqlcud0;
                               sqlstm.sqlest = (unsigned char  *)&sqlca;
                               sqlstm.sqlety = (unsigned short)256;
                               sqlstm.occurs = (unsigned int  )0;
                               sqlstm.sqhstv[0] = (         void  *)&sucursalb;
                               sqlstm.sqhstl[0] = (unsigned int  )7;
                               sqlstm.sqhsts[0] = (         int  )0;
                               sqlstm.sqindv[0] = (         void  *)0;
                               sqlstm.sqinds[0] = (         int  )0;
                               sqlstm.sqharm[0] = (unsigned int  )0;
                               sqlstm.sqadto[0] = (unsigned short )0;
                               sqlstm.sqtdso[0] = (unsigned short )0;
                               sqlstm.sqhstv[1] = (         void  *)&ptajesuc;
                               sqlstm.sqhstl[1] = (unsigned int  )4;
                               sqlstm.sqhsts[1] = (         int  )0;
                               sqlstm.sqindv[1] = (         void  *)0;
                               sqlstm.sqinds[1] = (         int  )0;
                               sqlstm.sqharm[1] = (unsigned int  )0;
                               sqlstm.sqadto[1] = (unsigned short )0;
                               sqlstm.sqtdso[1] = (unsigned short )0;
                               sqlstm.sqhstv[2] = (         void  *)&ultimo;
                               sqlstm.sqhstl[2] = (unsigned int  )4;
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


                               staorag = sqlca.sqlcode;
                        }
                        /* EXEC SQL CLOSE C7; */ 

{
                        struct sqlexd sqlstm;

                        sqlstm.sqlvsn = 10;
                        sqlstm.arrsiz = 16;
                        sqlstm.sqladtp = &sqladt;
                        sqlstm.sqltdsp = &sqltds;
                        sqlstm.iters = (unsigned int  )1;
                        sqlstm.offset = (unsigned int  )881;
                        sqlstm.cud = sqlcud0;
                        sqlstm.sqlest = (unsigned char  *)&sqlca;
                        sqlstm.sqlety = (unsigned short)256;
                        sqlstm.occurs = (unsigned int  )0;
                        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                    }
                    else {
                        /* EXEC SQL OPEN C9; */ 

{
                        struct sqlexd sqlstm;

                        sqlstm.sqlvsn = 10;
                        sqlstm.arrsiz = 16;
                        sqlstm.sqladtp = &sqladt;
                        sqlstm.sqltdsp = &sqltds;
                        sqlstm.stmt = sq0006;
                        sqlstm.iters = (unsigned int  )1;
                        sqlstm.offset = (unsigned int  )896;
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
                        sqlstm.sqhstv[1] = (         void  *)&codigo;
                        sqlstm.sqhstl[1] = (unsigned int  )4;
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


                        /* EXEC SQL FETCH C9 INTO :sucursalb, :ptajesuc, :ultimo; */ 

{
                        struct sqlexd sqlstm;

                        sqlstm.sqlvsn = 10;
                        sqlstm.arrsiz = 16;
                        sqlstm.sqladtp = &sqladt;
                        sqlstm.sqltdsp = &sqltds;
                        sqlstm.iters = (unsigned int  )1;
                        sqlstm.offset = (unsigned int  )919;
                        sqlstm.cud = sqlcud0;
                        sqlstm.sqlest = (unsigned char  *)&sqlca;
                        sqlstm.sqlety = (unsigned short)256;
                        sqlstm.occurs = (unsigned int  )0;
                        sqlstm.sqhstv[0] = (         void  *)&sucursalb;
                        sqlstm.sqhstl[0] = (unsigned int  )7;
                        sqlstm.sqhsts[0] = (         int  )0;
                        sqlstm.sqindv[0] = (         void  *)0;
                        sqlstm.sqinds[0] = (         int  )0;
                        sqlstm.sqharm[0] = (unsigned int  )0;
                        sqlstm.sqadto[0] = (unsigned short )0;
                        sqlstm.sqtdso[0] = (unsigned short )0;
                        sqlstm.sqhstv[1] = (         void  *)&ptajesuc;
                        sqlstm.sqhstl[1] = (unsigned int  )4;
                        sqlstm.sqhsts[1] = (         int  )0;
                        sqlstm.sqindv[1] = (         void  *)0;
                        sqlstm.sqinds[1] = (         int  )0;
                        sqlstm.sqharm[1] = (unsigned int  )0;
                        sqlstm.sqadto[1] = (unsigned short )0;
                        sqlstm.sqtdso[1] = (unsigned short )0;
                        sqlstm.sqhstv[2] = (         void  *)&ultimo;
                        sqlstm.sqhstl[2] = (unsigned int  )4;
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


                        sucursalb.arr    [sucursalb.len]      = '\0';
                        staorag = sqlca.sqlcode;
                        while (staorag == 0 ) {
                               if (ultimo==0) {
                                   valor = redondo(valor_r * ptajesuc/100,2);
                                   valor_d -= valor;
                               }
                               else valor = valor_d;
//                             printf("gasto_comun<%s> codigo<%d> sucursalb.arr<%s> nitn<%14.0f> valor_r<%12.2f> valor_d<%12.2f> valor<%12.2f> ",gasto_comun.arr, codigo, sucursalb.arr, nitn, valor_r, valor_d, valor); getchar();
                               grabar_movtod(0);
                               grabar_movtod(1);
                               /* EXEC SQL FETCH C9 INTO :sucursalb, :ptajesuc, :ultimo; */ 

{
                               struct sqlexd sqlstm;

                               sqlstm.sqlvsn = 10;
                               sqlstm.arrsiz = 16;
                               sqlstm.sqladtp = &sqladt;
                               sqlstm.sqltdsp = &sqltds;
                               sqlstm.iters = (unsigned int  )1;
                               sqlstm.offset = (unsigned int  )946;
                               sqlstm.cud = sqlcud0;
                               sqlstm.sqlest = (unsigned char  *)&sqlca;
                               sqlstm.sqlety = (unsigned short)256;
                               sqlstm.occurs = (unsigned int  )0;
                               sqlstm.sqhstv[0] = (         void  *)&sucursalb;
                               sqlstm.sqhstl[0] = (unsigned int  )7;
                               sqlstm.sqhsts[0] = (         int  )0;
                               sqlstm.sqindv[0] = (         void  *)0;
                               sqlstm.sqinds[0] = (         int  )0;
                               sqlstm.sqharm[0] = (unsigned int  )0;
                               sqlstm.sqadto[0] = (unsigned short )0;
                               sqlstm.sqtdso[0] = (unsigned short )0;
                               sqlstm.sqhstv[1] = (         void  *)&ptajesuc;
                               sqlstm.sqhstl[1] = (unsigned int  )4;
                               sqlstm.sqhsts[1] = (         int  )0;
                               sqlstm.sqindv[1] = (         void  *)0;
                               sqlstm.sqinds[1] = (         int  )0;
                               sqlstm.sqharm[1] = (unsigned int  )0;
                               sqlstm.sqadto[1] = (unsigned short )0;
                               sqlstm.sqtdso[1] = (unsigned short )0;
                               sqlstm.sqhstv[2] = (         void  *)&ultimo;
                               sqlstm.sqhstl[2] = (unsigned int  )4;
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


                               staorag = sqlca.sqlcode;
                        }
                        /* EXEC SQL CLOSE C9; */ 

{
                        struct sqlexd sqlstm;

                        sqlstm.sqlvsn = 10;
                        sqlstm.arrsiz = 16;
                        sqlstm.sqladtp = &sqladt;
                        sqlstm.sqltdsp = &sqltds;
                        sqlstm.iters = (unsigned int  )1;
                        sqlstm.offset = (unsigned int  )973;
                        sqlstm.cud = sqlcud0;
                        sqlstm.sqlest = (unsigned char  *)&sqlca;
                        sqlstm.sqlety = (unsigned short)256;
                        sqlstm.occurs = (unsigned int  )0;
                        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                    }
                 }
                 else {
                       grabar_movtod(0);
                       grabar_movtod(1);
                 }
              }

              /* EXEC SQL FETCH C6 INTO :nitn,       :codigo_nit,    :cuentab,   :db_cr, :valor,
                                     :identifica, :procedimiento, :ptaje,     :fecha_asto,
                                     :pro_pen,    :eps,           :tabla,     :sucursalb,
                                     :cen_cosb,   :gasto_comun,   :codigo; */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 10;
              sqlstm.arrsiz = 16;
              sqlstm.sqladtp = &sqladt;
              sqlstm.sqltdsp = &sqltds;
              sqlstm.iters = (unsigned int  )1;
              sqlstm.offset = (unsigned int  )988;
              sqlstm.cud = sqlcud0;
              sqlstm.sqlest = (unsigned char  *)&sqlca;
              sqlstm.sqlety = (unsigned short)256;
              sqlstm.occurs = (unsigned int  )0;
              sqlstm.sqhstv[0] = (         void  *)&nitn;
              sqlstm.sqhstl[0] = (unsigned int  )8;
              sqlstm.sqhsts[0] = (         int  )0;
              sqlstm.sqindv[0] = (         void  *)0;
              sqlstm.sqinds[0] = (         int  )0;
              sqlstm.sqharm[0] = (unsigned int  )0;
              sqlstm.sqadto[0] = (unsigned short )0;
              sqlstm.sqtdso[0] = (unsigned short )0;
              sqlstm.sqhstv[1] = (         void  *)&codigo_nit;
              sqlstm.sqhstl[1] = (unsigned int  )4;
              sqlstm.sqhsts[1] = (         int  )0;
              sqlstm.sqindv[1] = (         void  *)0;
              sqlstm.sqinds[1] = (         int  )0;
              sqlstm.sqharm[1] = (unsigned int  )0;
              sqlstm.sqadto[1] = (unsigned short )0;
              sqlstm.sqtdso[1] = (unsigned short )0;
              sqlstm.sqhstv[2] = (         void  *)&cuentab;
              sqlstm.sqhstl[2] = (unsigned int  )17;
              sqlstm.sqhsts[2] = (         int  )0;
              sqlstm.sqindv[2] = (         void  *)0;
              sqlstm.sqinds[2] = (         int  )0;
              sqlstm.sqharm[2] = (unsigned int  )0;
              sqlstm.sqadto[2] = (unsigned short )0;
              sqlstm.sqtdso[2] = (unsigned short )0;
              sqlstm.sqhstv[3] = (         void  *)&db_cr;
              sqlstm.sqhstl[3] = (unsigned int  )4;
              sqlstm.sqhsts[3] = (         int  )0;
              sqlstm.sqindv[3] = (         void  *)0;
              sqlstm.sqinds[3] = (         int  )0;
              sqlstm.sqharm[3] = (unsigned int  )0;
              sqlstm.sqadto[3] = (unsigned short )0;
              sqlstm.sqtdso[3] = (unsigned short )0;
              sqlstm.sqhstv[4] = (         void  *)&valor;
              sqlstm.sqhstl[4] = (unsigned int  )8;
              sqlstm.sqhsts[4] = (         int  )0;
              sqlstm.sqindv[4] = (         void  *)0;
              sqlstm.sqinds[4] = (         int  )0;
              sqlstm.sqharm[4] = (unsigned int  )0;
              sqlstm.sqadto[4] = (unsigned short )0;
              sqlstm.sqtdso[4] = (unsigned short )0;
              sqlstm.sqhstv[5] = (         void  *)&identifica;
              sqlstm.sqhstl[5] = (unsigned int  )32;
              sqlstm.sqhsts[5] = (         int  )0;
              sqlstm.sqindv[5] = (         void  *)0;
              sqlstm.sqinds[5] = (         int  )0;
              sqlstm.sqharm[5] = (unsigned int  )0;
              sqlstm.sqadto[5] = (unsigned short )0;
              sqlstm.sqtdso[5] = (unsigned short )0;
              sqlstm.sqhstv[6] = (         void  *)&procedimiento;
              sqlstm.sqhstl[6] = (unsigned int  )258;
              sqlstm.sqhsts[6] = (         int  )0;
              sqlstm.sqindv[6] = (         void  *)0;
              sqlstm.sqinds[6] = (         int  )0;
              sqlstm.sqharm[6] = (unsigned int  )0;
              sqlstm.sqadto[6] = (unsigned short )0;
              sqlstm.sqtdso[6] = (unsigned short )0;
              sqlstm.sqhstv[7] = (         void  *)&ptaje;
              sqlstm.sqhstl[7] = (unsigned int  )4;
              sqlstm.sqhsts[7] = (         int  )0;
              sqlstm.sqindv[7] = (         void  *)0;
              sqlstm.sqinds[7] = (         int  )0;
              sqlstm.sqharm[7] = (unsigned int  )0;
              sqlstm.sqadto[7] = (unsigned short )0;
              sqlstm.sqtdso[7] = (unsigned short )0;
              sqlstm.sqhstv[8] = (         void  *)&fecha_asto;
              sqlstm.sqhstl[8] = (unsigned int  )22;
              sqlstm.sqhsts[8] = (         int  )0;
              sqlstm.sqindv[8] = (         void  *)0;
              sqlstm.sqinds[8] = (         int  )0;
              sqlstm.sqharm[8] = (unsigned int  )0;
              sqlstm.sqadto[8] = (unsigned short )0;
              sqlstm.sqtdso[8] = (unsigned short )0;
              sqlstm.sqhstv[9] = (         void  *)&pro_pen;
              sqlstm.sqhstl[9] = (unsigned int  )37;
              sqlstm.sqhsts[9] = (         int  )0;
              sqlstm.sqindv[9] = (         void  *)0;
              sqlstm.sqinds[9] = (         int  )0;
              sqlstm.sqharm[9] = (unsigned int  )0;
              sqlstm.sqadto[9] = (unsigned short )0;
              sqlstm.sqtdso[9] = (unsigned short )0;
              sqlstm.sqhstv[10] = (         void  *)&eps;
              sqlstm.sqhstl[10] = (unsigned int  )37;
              sqlstm.sqhsts[10] = (         int  )0;
              sqlstm.sqindv[10] = (         void  *)0;
              sqlstm.sqinds[10] = (         int  )0;
              sqlstm.sqharm[10] = (unsigned int  )0;
              sqlstm.sqadto[10] = (unsigned short )0;
              sqlstm.sqtdso[10] = (unsigned short )0;
              sqlstm.sqhstv[11] = (         void  *)&tabla;
              sqlstm.sqhstl[11] = (unsigned int  )22;
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
              sqlstm.sqhstv[14] = (         void  *)&gasto_comun;
              sqlstm.sqhstl[14] = (unsigned int  )4;
              sqlstm.sqhsts[14] = (         int  )0;
              sqlstm.sqindv[14] = (         void  *)0;
              sqlstm.sqinds[14] = (         int  )0;
              sqlstm.sqharm[14] = (unsigned int  )0;
              sqlstm.sqadto[14] = (unsigned short )0;
              sqlstm.sqtdso[14] = (unsigned short )0;
              sqlstm.sqhstv[15] = (         void  *)&codigo;
              sqlstm.sqhstl[15] = (unsigned int  )4;
              sqlstm.sqhsts[15] = (         int  )0;
              sqlstm.sqindv[15] = (         void  *)0;
              sqlstm.sqinds[15] = (         int  )0;
              sqlstm.sqharm[15] = (unsigned int  )0;
              sqlstm.sqadto[15] = (unsigned short )0;
              sqlstm.sqtdso[15] = (unsigned short )0;
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

              if (sqlca.sqlcode == -1405 )
                 staora = 0;
              if (staora != 1403 && staora != 0)
                  fprintf (stderr, "Error leyendo C6 (%d)\n", staora);
//  printf("4) codigo_nitb=%s infa=%s infb.arr=%s infc.arr=%s infd.arr=%s valor_debb.arr=%s valor_creb.arr=%s",codigo_nitb.arr, infa.arr, infb.arr, infc.arr, infd.arr, valor_debb.arr, valor_creb.arr  ); getchar();
        }

        /* EXEC SQL CLOSE C6; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 16;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1067;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  }
}

void grabar_movtod(li)
{

    sprintf(li_c.arr,"%d",li);
    li_c.len = strlen(li_c.arr);
              if (valor > 0 && db_cr == 0) {

                 sprintf(valor_debb.arr,"%10.2f",valor);
                 valor_debb.len = strlen(valor_debb.arr);
                 strcpy (valor_creb.arr,"");
                 valor_creb.len = strlen(valor_creb.arr);

                                          /* Graba en movto_d el Debito (C4) */

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
                                 to_number(:ano_mes), 
                                 to_number(:consecutivob), 
                                 to_number(:secuenciab),
                                 :cuentab, :infa, :infb, :infc, :infd,
                                 to_number(:codigo_nitb), 
                                 to_number(:valor_debb, '999999999.99'), 
                                 to_number(:valor_creb, '999999999.99'), 
                                 :sucursalb, :cen_cosb, :li_c); */ 

{
                 struct sqlexd sqlstm;

                 sqlstm.sqlvsn = 10;
                 sqlstm.arrsiz = 16;
                 sqlstm.sqladtp = &sqladt;
                 sqlstm.sqltdsp = &sqltds;
                 sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSE\
CUTIVO,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUC\
URSAL,CEN_COS,LIBRO) values (to_number(:b0),to_number(:b1),to_number(:b2),to_n\
umber(:b3),:b4,:b5,:b6,:b7,:b8,to_number(:b9),to_number(:b10,'999999999.99'),t\
o_number(:b11,'999999999.99'),:b12,:b13,:b14)";
                 sqlstm.iters = (unsigned int  )1;
                 sqlstm.offset = (unsigned int  )1082;
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
                 sqlstm.sqhstv[1] = (         void  *)&ano_mes;
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
                 sqlstm.sqhstl[4] = (unsigned int  )17;
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
                 sqlstm.sqhstv[14] = (         void  *)&li_c;
                 sqlstm.sqhstl[14] = (unsigned int  )7;
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
        	       printf("ano_mesf <%s>",ano_mes.arr);
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
                 printf("cen_cosb <%s>\n",cen_cosb.arr);
	               printf("libro <%s>\n",li); getchar();
	           }

              }
              else if (valor > 0 ) {

                      strcpy (valor_debb.arr,"");
                      valor_debb.len = strlen(valor_debb.arr);
                      sprintf(valor_creb.arr,"%10.2f",valor);
                      valor_creb.len = strlen(valor_creb.arr);

//  printf("2) codigo_emp=%s ano_mes=%s comprobanteb.arr=%s consecutivob.arr=%s secuenciab.arr=%s cuentab.arr=%s fechab.arr=%s ",codigo_emp.arr,   ano_mes.arr,   comprobanteb.arr,   consecutivob.arr, secuenciab.arr, cuentab.arr, fechab.arr); getchar();
//  printf("3) codigo_nitb=%s infa=%s infb.arr=%s infc.arr=%s infd.arr=%s valor_debb.arr=%s valor_creb.arr=%s",codigo_nitb.arr, infa.arr, infb.arr, infc.arr, infd.arr, valor_debb.arr, valor_creb.arr  ); getchar();
                                         /* Graba en movto_d el Credito (C4) */

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
                                       to_number(:ano_mes), 
                                       to_number(:consecutivob), 
                                       to_number(:secuenciab),
                                       :cuentab, :infa, :infb, :infc, :infd,
                                       to_number(:codigo_nitb), 
                                       to_number(:valor_debb, '999999999.99'), 
                                       to_number(:valor_creb, '999999999.99'), 
                                       :sucursalb, :cen_cosb, :li_c); */ 

{
                      struct sqlexd sqlstm;

                      sqlstm.sqlvsn = 10;
                      sqlstm.arrsiz = 16;
                      sqlstm.sqladtp = &sqladt;
                      sqlstm.sqltdsp = &sqltds;
                      sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,\
CONSECUTIVO,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CR\
E,SUCURSAL,CEN_COS,LIBRO) values (to_number(:b0),to_number(:b1),to_number(:b2)\
,to_number(:b3),:b4,:b5,:b6,:b7,:b8,to_number(:b9),to_number(:b10,'999999999.9\
9'),to_number(:b11,'999999999.99'),:b12,:b13,:b14)";
                      sqlstm.iters = (unsigned int  )1;
                      sqlstm.offset = (unsigned int  )1157;
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
                      sqlstm.sqhstv[1] = (         void  *)&ano_mes;
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
                      sqlstm.sqhstl[4] = (unsigned int  )17;
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
                      sqlstm.sqhstv[14] = (         void  *)&li_c;
                      sqlstm.sqhstl[14] = (unsigned int  )7;
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
		               printf("ano_mesf <%s>",ano_mes.arr);
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
		               printf("cen_cosb <%s>\n",cen_cosb.arr);
		               printf("libro <%s>\n",li); getchar();
		           }

              }
}

void ver_inf()
{
  /* EXEC SQL select infa, infb, infc, infd, nvl(gasto_comun,'D')
           into :veca, :vecb, :vecc, :vecd, :gasto_cc
           from   plan
           where  codigo_emp = :codigo_emp and
                  cuenta     = :cuentab; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 16;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select infa ,infb ,infc ,infd ,nvl(gasto_comun,'D') into :b\
0,:b1,:b2,:b3,:b4  from plan where (codigo_emp=:b5 and cuenta=:b6)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1232;
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
  sqlstm.sqhstv[4] = (         void  *)&gasto_cc;
  sqlstm.sqhstl[4] = (unsigned int  )4;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[5] = (unsigned int  )5;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&cuentab;
  sqlstm.sqhstl[6] = (unsigned int  )17;
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
              strcpy(inf[i],codigox.arr);
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
