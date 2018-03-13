
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
    ".\\anexobal.pc"
};


static unsigned long sqlctx = 521483;


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
            void  *sqhstv[19];
   unsigned int   sqhstl[19];
            int   sqhsts[19];
            void  *sqindv[19];
            int   sqinds[19];
   unsigned int   sqharm[19];
   unsigned int   *sqharc[19];
   unsigned short  sqadto[19];
   unsigned short  sqtdso[19];
} sqlstm = {10,19};

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

 static const char *sq0009 = 
"select inf  from infacu            ";

 static const char *sq0010 = 
"select cuenta  from cta_anexos where ((((((codigo_emp=:b0 and cuenta>=:b1) a\
nd cuenta<=:b2) and sucursal>=:b3) and sucursal<=:b4) and cen_cos>=to_number(:\
b5)) and cen_cos<=to_number(:b6)) order by cuenta            ";

 static const char *sq0006 = 
"select cuenta ,nombre ,nvl(nit,0) ,decode(codigo,'0','',codigo) ,sucursal ,c\
en_cos ,sum(valor_deb) ,sum(valor_cre)  from acumulanit a ,nits where ((((((((\
((nits.codigo_nit(+)=a.codigo_nit and a.codigo_emp=to_number(:b0)) and ano_mes\
>=to_number(:b1)) and ano_mes<=to_number(:b2)) and cuenta>=:b3) and cuenta<=:b\
4) and sucursal>=:b5) and sucursal<=:b6) and cen_cos>=to_number(:b7)) and cen_\
cos<=to_number(:b8)) and a.libro=to_number(:b9)) group by cuenta,nombre,codigo\
,sucursal,cen_cos,a.codigo_nit,nit order by cuenta,sucursal,cen_cos,codigo,nit\
            ";

 static const char *sq0004 = 
"select plan.cuenta ,a.sucursal ,a.cen_cos ,plan.nombre ,db_cr ,nivel ,sum(va\
lor_deb) ,sum(valor_cre)  from acumulados a ,plan where (((((((((((a.codigo_em\
p=to_number(:b0) and a.codigo_emp=plan.codigo_emp) and ano_mes>=to_number(:b1)\
) and ano_mes<=to_number(:b2)) and plan.cuenta=substr(a.cuenta,1,decode(to_num\
ber(nivel),0,1,(to_number(nivel)* 2)))) and plan.cuenta>=:b3) and plan.cuenta<\
=:b4) and a.sucursal>=:b5) and a.sucursal<=:b6) and a.cen_cos>=to_number(:b7))\
 and a.cen_cos<=to_number(:b8)) and a.libro=to_number(:b9)) group by plan.cuen\
ta,a.sucursal,a.cen_cos,plan.nombre,nivel,db_cr order by plan.cuenta,a.sucursa\
l,a.cen_cos,plan.nombre,nivel,db_cr            ";

 static const char *sq0005 = 
"select plan.cuenta ,plan.nombre ,db_cr ,nivel ,sum(valor_deb) ,sum(valor_cre\
)  from acumulados a ,plan where (((((((((((a.codigo_emp=to_number(:b0) and a.\
codigo_emp=plan.codigo_emp) and ano_mes>=to_number(:b1)) and ano_mes<=to_numbe\
r(:b2)) and plan.cuenta=substr(a.cuenta,1,decode(to_number(nivel),0,1,(to_numb\
er(nivel)* 2)))) and plan.cuenta>=:b3) and plan.cuenta<=:b4) and a.sucursal>=:\
b5) and a.sucursal<=:b6) and a.cen_cos>=to_number(:b7)) and a.cen_cos<=to_numb\
er(:b8)) and a.libro=to_number(:b9)) group by plan.cuenta,plan.nombre,nivel,db\
_cr order by plan.cuenta,plan.nombre,nivel,db_cr            ";

 static const char *sq0012 = 
"select libro ,nombre  from libro where libro=to_number(:b0)           ";

 static const char *sq0015 = 
"select nombre  from ACTIVOS where (CODIGO=:b0 and codigo_emp=:b1)           ";

 static const char *sq0016 = 
"select nombre  from bienes where codbienes=:b0           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,795,203,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,88,0,772,254,0,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
63,0,0,3,88,0,772,268,0,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
90,0,0,7,140,0,772,346,0,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
121,0,0,8,619,0,772,360,0,0,19,18,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
212,0,0,9,35,0,777,392,0,0,0,0,0,1,0,
227,0,0,9,0,0,781,399,0,0,1,0,0,1,0,2,9,0,0,
246,0,0,9,0,0,783,413,0,0,0,0,0,1,0,
261,0,0,10,215,0,777,429,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,
304,0,0,10,0,0,781,430,0,0,1,0,0,1,0,2,9,0,0,
323,0,0,10,0,0,783,444,0,0,0,0,0,1,0,
338,0,0,10,215,0,777,445,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,
381,0,0,10,0,0,781,446,0,0,1,0,0,1,0,2,9,0,0,
400,0,0,4,0,0,783,460,0,0,0,0,0,1,0,
415,0,0,5,0,0,783,462,0,0,0,0,0,1,0,
430,0,0,6,0,0,783,463,0,0,0,0,0,1,0,
445,0,0,10,0,0,781,473,0,0,1,0,0,1,0,2,9,0,0,
464,0,0,11,0,0,798,484,0,0,0,0,0,1,0,
479,0,0,6,556,0,777,501,0,0,10,10,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
534,0,0,6,0,0,781,502,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,
3,0,0,2,4,0,0,2,4,0,0,
581,0,0,4,669,0,777,530,0,0,10,10,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
636,0,0,4,0,0,781,531,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,9,0,0,2,
3,0,0,2,4,0,0,2,4,0,0,
683,0,0,5,604,0,777,535,0,0,10,10,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
738,0,0,5,0,0,781,536,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,
4,0,0,
777,0,0,12,70,0,777,607,0,0,1,1,0,1,0,1,9,0,0,
796,0,0,12,0,0,781,608,0,0,2,0,0,1,0,2,9,0,0,2,9,0,0,
819,0,0,12,0,0,783,614,0,0,0,0,0,1,0,
834,0,0,6,0,0,781,628,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,
3,0,0,2,4,0,0,2,4,0,0,
881,0,0,4,0,0,781,665,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,9,0,0,2,
3,0,0,2,4,0,0,2,4,0,0,
928,0,0,5,0,0,781,669,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,
4,0,0,
967,0,0,4,0,0,781,692,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,9,0,0,2,
3,0,0,2,4,0,0,2,4,0,0,
1014,0,0,5,0,0,781,696,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,
4,0,0,
1053,0,0,6,0,0,781,716,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,
3,0,0,2,4,0,0,2,4,0,0,
1100,0,0,13,99,0,772,814,0,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,
1,9,0,0,
1139,0,0,10,0,0,781,936,0,0,1,0,0,1,0,2,9,0,0,
1158,0,0,6,0,0,781,971,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,
3,0,0,2,4,0,0,2,4,0,0,
1205,0,0,14,55,0,772,1010,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
1228,0,0,15,76,0,777,1043,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
1251,0,0,15,0,0,781,1044,0,0,1,0,0,1,0,2,9,0,0,
1270,0,0,16,57,0,777,1054,0,0,1,1,0,1,0,1,9,0,0,
1289,0,0,16,0,0,781,1055,0,0,1,0,0,1,0,2,9,0,0,
1308,0,0,15,0,0,783,1069,0,0,0,0,0,1,0,
1323,0,0,16,0,0,783,1070,0,0,0,0,0,1,0,
1338,0,0,17,110,0,772,1080,0,0,5,4,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
1373,0,0,18,143,0,772,1106,0,0,6,5,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,
1412,0,0,19,142,0,772,1134,0,0,6,5,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,
};


/*****************************************************************
* BALANCEP.C Version 1.0 - Rev 1.2 - Jun. 30/92.
*
* anexobal.c. Anexo al balance de prueba
*
* Uso: anexobal codigo_emp aamm cuentai cuentaf device copias userid/password\n");
*
* Mario E. Santiago I. Creado Noviembre 19-1993.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <math.h>

void trabajo();
void titulos();
void lista_balance();
void imprime_acumulados();
void imprime_acumulanit();
void ver_anexo();
void leer_articulos();
void leer_bienes();
void leer_bancos();
void leer_varios();
void leer_import();
void totales();

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

				     /* Parametros de comunicacion con ORACLE */
/* VARCHAR nomb_emp   [61]; */ 
struct { unsigned short len; unsigned char arr[61]; } nomb_emp;

double  nit;
int     digito;
/* VARCHAR codigo_emp [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;


/* VARCHAR cuenta     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuenta;

/* VARCHAR nombre_cta [70]; */ 
struct { unsigned short len; unsigned char arr[70]; } nombre_cta;

/* VARCHAR db_cr      [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } db_cr;

int     nivel;
double  valor_deb;
double  valor_cre;
double  valors;

/* VARCHAR ano_mesi   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR ano_mes    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR cuentai    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuentai;

/* VARCHAR cuentaf    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuentaf;


/* VARCHAR cuentan    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuentan;

/* VARCHAR cuentax    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuentax;


/* VARCHAR	nombre_var [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nombre_var;

/* VARCHAR	nombre_bco [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nombre_bco;

/* VARCHAR	nombre_art [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nombre_art;

/* VARCHAR	nombre_imp [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nombre_imp;

/* VARCHAR	nombre_bien[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nombre_bien;

/* VARCHAR	nombre_ctan[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nombre_ctan;

/* VARCHAR	nombre_ctam[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nombre_ctam;

/* VARCHAR	codigo     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo;

/* VARCHAR	codigob    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigob;

/* VARCHAR infa       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infa;

/* VARCHAR infb       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infb;

/* VARCHAR infc       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infc;

/* VARCHAR infd       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infd;

double  total_no5;
double  valor_debn;
double  valor_cren;
/* VARCHAR vecinf     [20][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } vecinf[20];

/* VARCHAR cuentab    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuentab;

/* VARCHAR veca       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } veca;

/* VARCHAR vecb       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecb;

/* VARCHAR vecc       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecc;

/* VARCHAR vecd       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecd;

double  nitn;
/* VARCHAR sucursal   [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } sucursal;

/* VARCHAR sucursali  [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } sucursali;

/* VARCHAR sucursalf  [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } sucursalf;

/* VARCHAR sucursalb  [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } sucursalb;

/* VARCHAR sucursaln  [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } sucursaln;

/* VARCHAR cen_cosi   [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } cen_cosi;

/* VARCHAR cen_cosf   [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } cen_cosf;

/* VARCHAR cen_cosb   [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } cen_cosb;

int     cen_cosn;
int     cen_cos;
/* VARCHAR nomb_suci  [12]; */ 
struct { unsigned short len; unsigned char arr[12]; } nomb_suci;

/* VARCHAR nomb_sucf  [12]; */ 
struct { unsigned short len; unsigned char arr[12]; } nomb_sucf;

/* VARCHAR librob        [4]; */ 
struct { unsigned short len; unsigned char arr[4]; } librob;

/* VARCHAR lib[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } lib;

/* VARCHAR nomblib[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } nomblib;


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


double  valor_niv3=0;
double  valor_niv4=0;
char    cuenta_adl  [20];
char    cuenta_an   [20];
char    sucursal_an [05];
int     cen_cos_an;
char    g_nombre    [70];
char    nombre_ctan2[50];
char    nombre_adl  [50];
int     traidos;
int     num_ret;
int     loop_4;
int     staora;
int     staorad  = 0;
int     staoran  = 0;
int     staorax  = 0;
char    pagina[4];                                   /* Contador de Paginas */
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                   /* Contador de Lineas  */
int     cl;
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[100];
int     diai;
int     mesi;
int     anoi;
double  nitn_an;
char    codigo_an[20];
double  valor_debx;
double  valor_crex;
double  total[5];
char    cadena[100];
char    cadena2[240];
char    cadena3[240];
char    cadenon[240];
char    copias [5];
char    timbrado[2];
char    por_suc[2];
char    un_mes[2];
char    vecplan[5][20];
int     entre;
int     i;
int     j;
int     k;
int     sub_anexos;

/* EXEC ORACLE OPTION (RELEASE_CURSOR=YES); */ 

/* EXEC ORACLE OPTION (HOLD_CURSOR=YES); */ 


void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 16)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp aaaamm cuentai cuentaf sucursali sucursalf c.costoi c.costof copias pagina device timbrado(s/n) por sucursal(s/n) un solo mes(s/n) libro userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("      device : s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
  printf ("      libro(0= COLGAAP 1=IFRS)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (cuentai.arr,    argv[3]);
       cuentai.len    =        strlen(cuentai.arr);
       strcpy (cuentaf.arr,    argv[4]);
       cuentaf.len    =        strlen(cuentaf.arr);
       strcpy (sucursali.arr,  argv[5]);
       sucursali.len  =        strlen(sucursali.arr);
       strcpy (sucursalf.arr,  argv[6]);
       sucursalf.len  =        strlen(sucursalf.arr);
       strcpy (cen_cosi.arr,   argv[7]);
       cen_cosi.len   =        strlen(cen_cosi.arr);
       strcpy (cen_cosf.arr,   argv[8]);
       cen_cosf.len   =        strlen(cen_cosf.arr);
       strcpy (copias,         argv[9]);
       strcpy (pagina,         argv[10]);
       strcpy (device,         argv[11]);
       strlow (device);
       strcpy (timbrado,       argv[12]);
       strlow (timbrado);
       strcpy (por_suc,        argv[13]);
       strlow (por_suc);
       strcpy (un_mes,         argv[14]);
       strlow (un_mes);
       strcpy (librob.arr,     argv[15]);
       librob.len  =           strlen(librob.arr);

    if (!strpos ("/", argv[16]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy(uid.arr,argv[16]);
    uid.len = strlen(uid.arr);

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

/***********************************************
 * Pasa la sentencia SQL a ORACLE. (osql3).    *
 * e identifica la localizacion y tipo  de  un *
 * area en el programa para recuperar datos de *
 * ORACLE. (odefin).                           *
 ***********************************************/
    strcpy (ano_mes.arr,    argv[2]);
    ano_mes.len    =        strlen(ano_mes.arr);

    strcpy (cadena,ano_mes.arr);
    strorg (cadena,1,4);
    anoi=atoi(cadena);

    strcpy (cadena,ano_mes.arr);
    strorg (cadena,5,2);
    mesi=atoi(cadena);

    if (mesi==13)
        mesi=12;
    if (strcmp(un_mes,"s")) {
        sprintf (ano_mesi.arr,"%04d%02d",anoi-1,13);
        ano_mesi.len   =        strlen(ano_mesi.arr);
    }
    else {
        strcpy (ano_mesi.arr,    argv[2]);
        ano_mesi.len   =        strlen(ano_mesi.arr);
    }

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
    sqlstm.offset = (unsigned int  )36;
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
    sqlstm.offset = (unsigned int  )63;
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

        if (!strcmp(por_suc,"s")) {
    	    /* EXEC SQL DECLARE C2A CURSOR FOR
   	     select plan.cuenta, a.sucursal, a.cen_cos, plan.nombre, db_cr, nivel, sum(valor_deb),
               	    sum(valor_cre)
    	     from acumulados a, plan
    	     where  a.codigo_emp = to_number(:codigo_emp)     and
            	    a.codigo_emp = plan.codigo_emp            and
          	    ano_mes     >= to_number(:ano_mesi)       and
          	    ano_mes     <= to_number(:ano_mes)        and
          	    plan.cuenta  =
          	    substr(a.cuenta,1,decode(to_number(nivel),0,1,to_number(nivel)*2))
                                                    	      and
          	    plan.cuenta >= (:cuentai)                 and
          	    plan.cuenta <= (:cuentaf)                 and
          	    a.sucursal  >= (:sucursali)               and
          	    a.sucursal  <= (:sucursalf)               and
          	    a.cen_cos   >= to_number(:cen_cosi)       and
          	    a.cen_cos   <= to_number(:cen_cosf)       and
                a.libro      = to_number(:librob)
    	    group by plan.cuenta, a.sucursal, a.cen_cos, plan.nombre, nivel, db_cr
    	    order by plan.cuenta, a.sucursal, a.cen_cos, plan.nombre, nivel, db_cr; */ 

        }
        else {
    	    /* EXEC SQL DECLARE C2 CURSOR FOR
   	     select plan.cuenta, plan.nombre, db_cr, nivel, sum(valor_deb),
            	    sum(valor_cre)
    	     from acumulados a, plan
    	     where  a.codigo_emp = to_number(:codigo_emp)     and
          	    a.codigo_emp = plan.codigo_emp            and
          	    ano_mes     >= to_number(:ano_mesi)       and
          	    ano_mes     <= to_number(:ano_mes)        and
          	    plan.cuenta  =
          	    substr(a.cuenta,1,decode(to_number(nivel),0,1,to_number(nivel)*2))
                                                    	      and
          	    plan.cuenta >= (:cuentai)                 and
          	    plan.cuenta <= (:cuentaf)                 and
          	    a.sucursal  >= (:sucursali)               and
          	    a.sucursal  <= (:sucursalf)               and
          	    a.cen_cos   >= to_number(:cen_cosi)       and
          	    a.cen_cos   <= to_number(:cen_cosf)       and
                a.libro      = to_number(:librob)
    	     group by plan.cuenta, plan.nombre, nivel, db_cr
    	     order by plan.cuenta, plan.nombre, nivel, db_cr; */ 

        }

    	/* EXEC SQL DECLARE C3 CURSOR FOR
    	select cuenta, nombre, nvl(nit,0), decode(codigo,'0','',codigo),
    	       sucursal, cen_cos,
               sum(valor_deb), sum(valor_cre)
    	from acumulanit a, nits
    	where nits.codigo_nit(+)    = a.codigo_nit            and
           	a.codigo_emp          = to_number(:codigo_emp)  and
           	ano_mes              >= to_number(:ano_mesi)    and
           	ano_mes              <= to_number(:ano_mes)     and
           	cuenta               >= (:cuentai)              and
           	cuenta               <= (:cuentaf)              and
          	sucursal             >= (:sucursali)            and
          	sucursal             <= (:sucursalf)            and
          	cen_cos              >= to_number(:cen_cosi)    and
          	cen_cos              <= to_number(:cen_cosf)    and
            a.libro               = to_number(:librob)
    	group by cuenta, nombre, codigo, sucursal, cen_cos, a.codigo_nit, nit
    	order by cuenta, sucursal, cen_cos, codigo, nit; */ 


/* C1 */

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
    sqlstm.offset = (unsigned int  )90;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_emp;
    sqlstm.sqhstl[0] = (unsigned int  )63;
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



    if (sqlca.sqlcode == 0)
        nomb_emp.arr [nomb_emp.len] = '\0';

    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Empresa (%d)\n", sqlca.sqlcode);

    /* C9 */

    /* EXEC SQL select nvl(sum(valor_deb)-sum(valor_cre),0)
             into :total_no5
             from acumulados a
             where codigo_emp = to_number(:codigo_emp)      and
                   ano_mes   >= to_number(:ano_mesi)        and
                   ano_mes   <= to_number(:ano_mes)         and
                   cuenta    >= (:cuentai)                  and
                   cuenta    <= (:cuentaf)                  and
             	     sucursal  >= (:sucursali)                and
          	       sucursal  <= (:sucursalf)                and
          	       cen_cos   >= to_number(:cen_cosi)        and
          	       cen_cos   <= to_number(:cen_cosf)        and
                   a.libro   = to_number(:librob)           and
                   not exists (select *
                               from  acumulanit
                               where codigo_emp = to_number(:codigo_emp) and
                                     ano_mes   >= to_number(:ano_mesi)   and
                                     ano_mes   <= to_number(:ano_mes)    and
              	                     sucursal  >= (:sucursali)           and
              	                     sucursal  <= (:sucursalf)           and
              	                     cen_cos   >= to_number(:cen_cosi)   and
              	                     cen_cos   <= to_number(:cen_cosf)   and
                                     libro      = to_number(:librob)     and
                                     a.cuenta   = cuenta); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select nvl((sum(valor_deb)-sum(valor_cre)),0) into :b0  f\
rom acumulados a where ((((((((((codigo_emp=to_number(:b1) and ano_mes>=to_num\
ber(:b2)) and ano_mes<=to_number(:b3)) and cuenta>=:b4) and cuenta<=:b5) and s\
ucursal>=:b6) and sucursal<=:b7) and cen_cos>=to_number(:b8)) and cen_cos<=to_\
number(:b9)) and a.libro=to_number(:b10)) and  not exists (select *  from acum\
ulanit where ((((((((codigo_emp=to_number(:b1) and ano_mes>=to_number(:b2)) an\
d ano_mes<=to_number(:b3)) and sucursal>=:b6) and sucursal<=:b7) and cen_cos>=\
to_number(:b8)) and cen_cos<=to_number(:b9)) and libro=to_number(:b10)) and a.\
cuenta=cuenta)))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )121;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&total_no5;
    sqlstm.sqhstl[0] = (unsigned int  )8;
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
    sqlstm.sqhstv[4] = (         void  *)&cuentai;
    sqlstm.sqhstl[4] = (unsigned int  )22;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&cuentaf;
    sqlstm.sqhstl[5] = (unsigned int  )22;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&sucursali;
    sqlstm.sqhstl[6] = (unsigned int  )12;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (         void  *)&sucursalf;
    sqlstm.sqhstl[7] = (unsigned int  )12;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         void  *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned int  )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (         void  *)&cen_cosi;
    sqlstm.sqhstl[8] = (unsigned int  )6;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         void  *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned int  )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (         void  *)&cen_cosf;
    sqlstm.sqhstl[9] = (unsigned int  )6;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         void  *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned int  )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (         void  *)&librob;
    sqlstm.sqhstl[10] = (unsigned int  )6;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         void  *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned int  )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[11] = (unsigned int  )5;
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         void  *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned int  )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (         void  *)&ano_mesi;
    sqlstm.sqhstl[12] = (unsigned int  )22;
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         void  *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned int  )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (         void  *)&ano_mes;
    sqlstm.sqhstl[13] = (unsigned int  )22;
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         void  *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned int  )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (         void  *)&sucursali;
    sqlstm.sqhstl[14] = (unsigned int  )12;
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         void  *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned int  )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (         void  *)&sucursalf;
    sqlstm.sqhstl[15] = (unsigned int  )12;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         void  *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned int  )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (         void  *)&cen_cosi;
    sqlstm.sqhstl[16] = (unsigned int  )6;
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         void  *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned int  )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (         void  *)&cen_cosf;
    sqlstm.sqhstl[17] = (unsigned int  )6;
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         void  *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned int  )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (         void  *)&librob;
    sqlstm.sqhstl[18] = (unsigned int  )6;
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         void  *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned int  )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
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
        fprintf (stderr, "C9 Error leyendo Acumulados, ano_mesi (%-s), ano_mes (%-s), cuentai (%-s), cuentaf (%-s), (%d)\n", ano_mesi.arr,  ano_mes.arr , cuentai.arr, cuentaf.arr, sqlca.sqlcode);

    /* EXEC SQL DECLARE C4 CURSOR FOR
    select inf
    from   infacu; */ 


    /* EXEC SQL OPEN C4; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0009;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )212;
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

          /* EXEC SQL FETCH C4 INTO :vecinf; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 19;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )20;
          sqlstm.offset = (unsigned int  )227;
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



          if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
             fprintf (stderr, "Error leyendo C4 (%d)\n", sqlca.sqlcode);

          staora  = sqlca.sqlcode;
          traidos = sqlca.sqlerrd[2];

          for (loop_4 = 0; loop_4 < (traidos - num_ret); loop_4++) {
              vecinf[loop_4].arr  [vecinf[loop_4].len] = '\0';
          }
          num_ret = traidos;
    }
    k = traidos;
    /* EXEC SQL CLOSE C4; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )246;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    trabajo();

    /* EXEC SQL DECLARE C11 CURSOR FOR
    select cuenta
    from   cta_anexos
    where  codigo_emp = :codigo_emp          and
           cuenta    >= :cuentai             and
           cuenta    <= :cuentaf             and
           sucursal  >= (:sucursali)         and
      	   sucursal  <= (:sucursalf)         and
      	   cen_cos   >= to_number(:cen_cosi) and
      	   cen_cos   <= to_number(:cen_cosf)
    order  by cuenta; */ 


    /* EXEC SQL OPEN  C11; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0010;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )261;
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
    sqlstm.sqhstv[1] = (         void  *)&cuentai;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&cuentaf;
    sqlstm.sqhstl[2] = (unsigned int  )22;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&sucursali;
    sqlstm.sqhstl[3] = (unsigned int  )12;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&sucursalf;
    sqlstm.sqhstl[4] = (unsigned int  )12;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&cen_cosi;
    sqlstm.sqhstl[5] = (unsigned int  )6;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&cen_cosf;
    sqlstm.sqhstl[6] = (unsigned int  )6;
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


    /* EXEC SQL FETCH C11 INTO :cuentax; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )304;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&cuentax;
    sqlstm.sqhstl[0] = (unsigned int  )22;
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


    if (!sqlca.sqlcode)
       cuentax.arr [cuentax.len] = '\0';
    staorax  = sqlca.sqlcode;
    if (staorax) {
       strcpy(cuentax.arr,"9999999999");
       cuentax.len = strlen(cuentax.arr);
    }
    lista_balance();
    totales();

    staorad=0;
    staoran=0;
    con_lin=66;
    /* EXEC SQL CLOSE C11; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )323;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL OPEN  C11; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0010;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )338;
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
    sqlstm.sqhstv[1] = (         void  *)&cuentai;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&cuentaf;
    sqlstm.sqhstl[2] = (unsigned int  )22;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&sucursali;
    sqlstm.sqhstl[3] = (unsigned int  )12;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&sucursalf;
    sqlstm.sqhstl[4] = (unsigned int  )12;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&cen_cosi;
    sqlstm.sqhstl[5] = (unsigned int  )6;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&cen_cosf;
    sqlstm.sqhstl[6] = (unsigned int  )6;
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


    /* EXEC SQL FETCH C11 INTO :cuentax; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )381;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&cuentax;
    sqlstm.sqhstl[0] = (unsigned int  )22;
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


    if (!sqlca.sqlcode)
        cuentax.arr [cuentax.len] = '\0';
    staorax  = sqlca.sqlcode;
    if (staorax) {
       strcpy(cuentax.arr,"9999999999");
       cuentax.len = strlen(cuentax.arr);
    }
    while (staorax==0) {
          for (i=0;i<=5;i++) {
               total[i]=0;
          }
          sub_anexos=1;
          if (!strcmp(por_suc,"s"))
              /* EXEC SQL CLOSE C2A; */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 10;
              sqlstm.arrsiz = 19;
              sqlstm.sqladtp = &sqladt;
              sqlstm.sqltdsp = &sqltds;
              sqlstm.iters = (unsigned int  )1;
              sqlstm.offset = (unsigned int  )400;
              sqlstm.cud = sqlcud0;
              sqlstm.sqlest = (unsigned char  *)&sqlca;
              sqlstm.sqlety = (unsigned short)256;
              sqlstm.occurs = (unsigned int  )0;
              sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


          else
              /* EXEC SQL CLOSE C2; */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 10;
              sqlstm.arrsiz = 19;
              sqlstm.sqladtp = &sqladt;
              sqlstm.sqltdsp = &sqltds;
              sqlstm.iters = (unsigned int  )1;
              sqlstm.offset = (unsigned int  )415;
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
          sqlstm.arrsiz = 19;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )430;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


          strcpy(cuentai.arr,cuentax.arr);
          cuentai.len = strlen(cuentai.arr);
          strcpy(cuentaf.arr,cuentax.arr);
          cuentaf.len = strlen(cuentaf.arr);
          trabajo();
          lista_balance();
          fprintf(fp,"\n");
          con_lin++;
          totales();
          /* EXEC SQL FETCH C11 INTO :cuentax; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 19;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )445;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (         void  *)&cuentax;
          sqlstm.sqhstl[0] = (unsigned int  )22;
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


          cuentax.arr [cuentax.len] = '\0';
          staorax  = sqlca.sqlcode;
    }

/************************************************
 * Recuperar datos en el area de datos definida *
 * una fila al tiempo. (ofetch).                *
 * Aqui se hace la primera lectura del cursor 0.*
 ************************************************/
    cierre_impresora();
    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )464;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    exit   (0);
}

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/
void trabajo()
{
static int cuantas = 0;

cuantas++;
//printf ("trabajo nro. %-d\n", cuantas);

    staorad=0;
    staoran=0;

    /* EXEC SQL OPEN  C3; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0006;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )479;
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
    sqlstm.sqhstv[2] = (         void  *)&ano_mes;
    sqlstm.sqhstl[2] = (unsigned int  )22;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&cuentai;
    sqlstm.sqhstl[3] = (unsigned int  )22;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&cuentaf;
    sqlstm.sqhstl[4] = (unsigned int  )22;
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


    /* EXEC SQL FETCH C3 INTO :cuentan, :nombre_ctam, :nitn,
                           :codigo,  :sucursaln, :cen_cosn,
                           :valor_debn,  :valor_cren; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )534;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&cuentan;
    sqlstm.sqhstl[0] = (unsigned int  )22;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&nombre_ctam;
    sqlstm.sqhstl[1] = (unsigned int  )52;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&nitn;
    sqlstm.sqhstl[2] = (unsigned int  )8;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&codigo;
    sqlstm.sqhstl[3] = (unsigned int  )22;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&sucursaln;
    sqlstm.sqhstl[4] = (unsigned int  )12;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&cen_cosn;
    sqlstm.sqhstl[5] = (unsigned int  )4;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&valor_debn;
    sqlstm.sqhstl[6] = (unsigned int  )8;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (         void  *)&valor_cren;
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


    cuentan.arr     [cuentan.len]     = '\0';
    sucursaln.arr   [sucursaln.len]   = '\0';
    nombre_ctam.arr [nombre_ctam.len] = '\0';
    codigo.arr      [codigo.len]      = '\0';
    staoran  = sqlca.sqlcode;
    if ((staoran == -1405 || staoran == 0) && strlen(nombre_ctam.arr)) {
        strcpy(g_nombre,nombre_ctam.arr);
        strcpy(nombre_ctan.arr,nombre_ctam.arr);
        nombre_ctan.len = strlen(nombre_ctan.arr);
    }
    else {
          strcpy(nombre_ctan.arr,g_nombre);
          nombre_ctan.len = strlen(nombre_ctan.arr);
    }
    if (staoran == 1403) {
        strcpy(cuentan.arr,"9999999999");
        cuentan.len = strlen(cuentan.arr);
    }
    else if (staoran == -1405) {
             strcpy (codigo.arr, "");
             codigo.len = 0;
         }
         else if (staoran) fprintf (stderr, "Error en Acumulanit C3, %-d\n", staoran);

    if (!strcmp(por_suc,"s")) {
       /* EXEC SQL OPEN  C2A; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 19;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = sq0004;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )581;
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
       sqlstm.sqhstv[2] = (         void  *)&ano_mes;
       sqlstm.sqhstl[2] = (unsigned int  )22;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&cuentai;
       sqlstm.sqhstl[3] = (unsigned int  )22;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&cuentaf;
       sqlstm.sqhstl[4] = (unsigned int  )22;
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


       /* EXEC SQL FETCH C2A INTO :cuenta, :sucursal, :cen_cos, :nombre_cta, :db_cr, :nivel,
                               :valor_deb, :valor_cre; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 19;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )636;
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
       sqlstm.sqhstv[1] = (         void  *)&sucursal;
       sqlstm.sqhstl[1] = (unsigned int  )12;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&cen_cos;
       sqlstm.sqhstl[2] = (unsigned int  )4;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&nombre_cta;
       sqlstm.sqhstl[3] = (unsigned int  )72;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&db_cr;
       sqlstm.sqhstl[4] = (unsigned int  )5;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&nivel;
       sqlstm.sqhstl[5] = (unsigned int  )4;
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


    }
    else {
       /* EXEC SQL OPEN  C2; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 19;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = sq0005;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )683;
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
       sqlstm.sqhstv[2] = (         void  *)&ano_mes;
       sqlstm.sqhstl[2] = (unsigned int  )22;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&cuentai;
       sqlstm.sqhstl[3] = (unsigned int  )22;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&cuentaf;
       sqlstm.sqhstl[4] = (unsigned int  )22;
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


       /* EXEC SQL FETCH C2 INTO :cuenta, :nombre_cta, :db_cr, :nivel,
                              :valor_deb, :valor_cre; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 19;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )738;
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
       sqlstm.sqhstv[2] = (         void  *)&db_cr;
       sqlstm.sqhstl[2] = (unsigned int  )5;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&nivel;
       sqlstm.sqhstl[3] = (unsigned int  )4;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_deb;
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_cre;
       sqlstm.sqhstl[5] = (unsigned int  )8;
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


    }
    cuenta.arr     [cuenta.len]     = '\0';
    nombre_cta.arr [nombre_cta.len] = '\0';
    db_cr.arr      [db_cr.len]      = '\0';
    sucursal.arr   [sucursal.len]   = '\0';
    staorad  = sqlca.sqlcode;
    if (!staorad) {
       if (strcmp(cuenta.arr,cuentan.arr) <= 0)
           strcpy(g_nombre,nombre_cta.arr);
    }
    if (staorad == 1403) {
        strcpy(cuenta.arr,"9999999999");
        cuenta.len = strlen(cuenta.arr);
    }
    else if (staorad) fprintf (stderr, "Error1, %-d\n", staorad);
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 char fecha[30];
 con_pag++;
 
 fprintf(fp,"%s",salte_pagina);
 if (strcmp(timbrado,"s")) {
    if (atoi(pagina)>con_pag)
       return;
    if (!strcmp(codigo_emp.arr,"3"))
       fprintf(fp,".");
    strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
    fprintf(fp,"%s%s%s%s%s\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);

    sprintf(cadena2,"SUCURSAL: %s %s A %s %s C.COSTO: %s A %s",sucursali.arr,nomb_suci.arr,sucursalf.arr,nomb_sucf.arr,cen_cosi.arr,cen_cosf.arr);
    strful(cadena,(int)(80-strlen(cadena2))/2,' ');
    fprintf(fp,"%s%s%s%s\n",condensado_on,ancho_on,cadena,cadena2);

    sprintf (cadena,"%12.0f",nit);
    fmtnum("zzz,zzz,zzz,zzz",cadena,r_t);
    fprintf (fp,"%s%s%25s %18s",condensado_on,ancho_on,"NIT :",r_t);
    if (digito > 0) {
       sprintf (cadena,"%d",digito);
       fmtnum("z",cadena,r_t);
       fprintf (fp,"-%s",r_t);
    }
    else if (digito == 0)
            fprintf (fp,"-%s","0");
    fprintf(fp,"\n%20s%s%s\n\n"," ","ANEXOS AL BALANCE DE PRUEBA",ancho_off);
    fecha_system(fecha);
   /* printf("mesi=%d\n",mesi); */
    if (strcmp(timbrado,"s"))
       fprintf(fp,"%s%s%-44s%s%10s / %d",condensado_on,"FECHA PROCESO : ",fecha,"PERIODO : ",mes[mesi-1],anoi);
    else
       fprintf(fp,"%s%s%-44s%s%10s / %d",condensado_on,"                "," ",  "PERIODO : ",mes[mesi-1],anoi);
 }
 else {
    fecha_system(fecha);
   /* printf("mesi=%d\n",mesi); */
    fprintf(fp,"%s%s%-44s%s%10s / %d",condensado_on,"                "," ","PERIODO : ",mes[mesi-1],anoi);
 }

 /* EXEC SQL DECLARE clibro CURSOR FOR 
      select libro, nombre
      from libro
      where libro = to_number(:librob); */ 

 
 /* EXEC SQL OPEN clibro; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 19;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0012;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )777;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&librob;
 sqlstm.sqhstl[0] = (unsigned int  )6;
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


 /* EXEC SQL FETCH clibro into :lib, :nomblib; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 19;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )796;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&lib;
 sqlstm.sqhstl[0] = (unsigned int  )7;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&nomblib;
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


 if (!sqlca.sqlcode) {
     lib.arr [lib.len] = '\0';
     nomblib.arr [nomblib.len] = '\0';
 }

 /* EXEC SQL CLOSE clibro; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 19;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )819;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  
 fprintf(fp,"%8s %2s %6s %34s %d\n\n","LIBRO:",lib.arr,nomblib.arr,"PAGINA ",con_pag);
 fprintf(fp,"%s%s%s%161s%s\n\n",enfatizado_on,diezcpi,condensado_on,"CUENTA   SUC CC   NIT      CODIGO     NOMBRE DE LA CUENTA                        AUXILIAR #2    AUXILIAR #1      SUBCUENTA         CUENTA          GRUPO          CLASE",enfatizado_off);
 con_lin = 9;
}

void lista_balance()
{
 while (staorad==0 || staoran==0) {
        if (strcmp(cuenta.arr,cuentan.arr)==0) {
            imprime_acumulados();
            imprime_acumulanit();
            if (entre==0) {
                /* EXEC SQL FETCH C3 INTO :cuentan, :nombre_ctam, :nitn,
                                       :codigo,  :sucursaln, :cen_cosn,
                                       :valor_debn,  :valor_cren; */ 

{
                struct sqlexd sqlstm;

                sqlstm.sqlvsn = 10;
                sqlstm.arrsiz = 19;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )834;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)256;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqhstv[0] = (         void  *)&cuentan;
                sqlstm.sqhstl[0] = (unsigned int  )22;
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         void  *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned int  )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (         void  *)&nombre_ctam;
                sqlstm.sqhstl[1] = (unsigned int  )52;
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         void  *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned int  )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqhstv[2] = (         void  *)&nitn;
                sqlstm.sqhstl[2] = (unsigned int  )8;
                sqlstm.sqhsts[2] = (         int  )0;
                sqlstm.sqindv[2] = (         void  *)0;
                sqlstm.sqinds[2] = (         int  )0;
                sqlstm.sqharm[2] = (unsigned int  )0;
                sqlstm.sqadto[2] = (unsigned short )0;
                sqlstm.sqtdso[2] = (unsigned short )0;
                sqlstm.sqhstv[3] = (         void  *)&codigo;
                sqlstm.sqhstl[3] = (unsigned int  )22;
                sqlstm.sqhsts[3] = (         int  )0;
                sqlstm.sqindv[3] = (         void  *)0;
                sqlstm.sqinds[3] = (         int  )0;
                sqlstm.sqharm[3] = (unsigned int  )0;
                sqlstm.sqadto[3] = (unsigned short )0;
                sqlstm.sqtdso[3] = (unsigned short )0;
                sqlstm.sqhstv[4] = (         void  *)&sucursaln;
                sqlstm.sqhstl[4] = (unsigned int  )12;
                sqlstm.sqhsts[4] = (         int  )0;
                sqlstm.sqindv[4] = (         void  *)0;
                sqlstm.sqinds[4] = (         int  )0;
                sqlstm.sqharm[4] = (unsigned int  )0;
                sqlstm.sqadto[4] = (unsigned short )0;
                sqlstm.sqtdso[4] = (unsigned short )0;
                sqlstm.sqhstv[5] = (         void  *)&cen_cosn;
                sqlstm.sqhstl[5] = (unsigned int  )4;
                sqlstm.sqhsts[5] = (         int  )0;
                sqlstm.sqindv[5] = (         void  *)0;
                sqlstm.sqinds[5] = (         int  )0;
                sqlstm.sqharm[5] = (unsigned int  )0;
                sqlstm.sqadto[5] = (unsigned short )0;
                sqlstm.sqtdso[5] = (unsigned short )0;
                sqlstm.sqhstv[6] = (         void  *)&valor_debn;
                sqlstm.sqhstl[6] = (unsigned int  )8;
                sqlstm.sqhsts[6] = (         int  )0;
                sqlstm.sqindv[6] = (         void  *)0;
                sqlstm.sqinds[6] = (         int  )0;
                sqlstm.sqharm[6] = (unsigned int  )0;
                sqlstm.sqadto[6] = (unsigned short )0;
                sqlstm.sqtdso[6] = (unsigned short )0;
                sqlstm.sqhstv[7] = (         void  *)&valor_cren;
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


                cuentan.arr     [cuentan.len]     = '\0';
                sucursaln.arr   [sucursaln.len]   = '\0';
                nombre_ctam.arr [nombre_ctam.len] = '\0';
                codigo.arr      [codigo.len]      = '\0';
                staoran = sqlca.sqlcode;
                if ((staoran == -1405 || staoran == 0)
                     && strlen(nombre_ctam.arr)) {
                     staoran = 0;
                   if (nitn != 1) {
                       strcpy(g_nombre,nombre_ctam.arr);
                       strcpy(nombre_ctan.arr,nombre_ctam.arr);
                       nombre_ctan.len = strlen(nombre_ctan.arr);
                   }
                   else {
                         strcpy(nombre_ctan.arr,g_nombre);
                         nombre_ctan.len = strlen(nombre_ctan.arr);
                   }
                }
                else {
                      strcpy(nombre_ctan.arr,g_nombre);
                      nombre_ctan.len = strlen(nombre_ctan.arr);
                }
                if (staoran == 1403) {
                    strcpy(cuentan.arr,"9999999999");
                    cuentan.len = strlen(cuentan.arr);
                }
                else if (staoran == -1405) {
                        strcpy (codigo.arr, "");
                        codigo.len = 0;
                        staoran = 0;
                     }
                else if (staoran) fprintf (stderr, "Error2, %-d\n", staoran);
            }
            if (!strcmp(por_suc,"s")) {
               /* EXEC SQL FETCH C2A INTO :cuenta, :sucursal, :cen_cos, :nombre_cta, :db_cr, :nivel,
                                       :valor_deb, :valor_cre; */ 

{
               struct sqlexd sqlstm;

               sqlstm.sqlvsn = 10;
               sqlstm.arrsiz = 19;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )881;
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
               sqlstm.sqhstv[1] = (         void  *)&sucursal;
               sqlstm.sqhstl[1] = (unsigned int  )12;
               sqlstm.sqhsts[1] = (         int  )0;
               sqlstm.sqindv[1] = (         void  *)0;
               sqlstm.sqinds[1] = (         int  )0;
               sqlstm.sqharm[1] = (unsigned int  )0;
               sqlstm.sqadto[1] = (unsigned short )0;
               sqlstm.sqtdso[1] = (unsigned short )0;
               sqlstm.sqhstv[2] = (         void  *)&cen_cos;
               sqlstm.sqhstl[2] = (unsigned int  )4;
               sqlstm.sqhsts[2] = (         int  )0;
               sqlstm.sqindv[2] = (         void  *)0;
               sqlstm.sqinds[2] = (         int  )0;
               sqlstm.sqharm[2] = (unsigned int  )0;
               sqlstm.sqadto[2] = (unsigned short )0;
               sqlstm.sqtdso[2] = (unsigned short )0;
               sqlstm.sqhstv[3] = (         void  *)&nombre_cta;
               sqlstm.sqhstl[3] = (unsigned int  )72;
               sqlstm.sqhsts[3] = (         int  )0;
               sqlstm.sqindv[3] = (         void  *)0;
               sqlstm.sqinds[3] = (         int  )0;
               sqlstm.sqharm[3] = (unsigned int  )0;
               sqlstm.sqadto[3] = (unsigned short )0;
               sqlstm.sqtdso[3] = (unsigned short )0;
               sqlstm.sqhstv[4] = (         void  *)&db_cr;
               sqlstm.sqhstl[4] = (unsigned int  )5;
               sqlstm.sqhsts[4] = (         int  )0;
               sqlstm.sqindv[4] = (         void  *)0;
               sqlstm.sqinds[4] = (         int  )0;
               sqlstm.sqharm[4] = (unsigned int  )0;
               sqlstm.sqadto[4] = (unsigned short )0;
               sqlstm.sqtdso[4] = (unsigned short )0;
               sqlstm.sqhstv[5] = (         void  *)&nivel;
               sqlstm.sqhstl[5] = (unsigned int  )4;
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


            }
            else {
               /* EXEC SQL FETCH C2 INTO :cuenta, :nombre_cta, :db_cr, :nivel,
                                      :valor_deb, :valor_cre; */ 

{
               struct sqlexd sqlstm;

               sqlstm.sqlvsn = 10;
               sqlstm.arrsiz = 19;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )928;
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
               sqlstm.sqhstv[2] = (         void  *)&db_cr;
               sqlstm.sqhstl[2] = (unsigned int  )5;
               sqlstm.sqhsts[2] = (         int  )0;
               sqlstm.sqindv[2] = (         void  *)0;
               sqlstm.sqinds[2] = (         int  )0;
               sqlstm.sqharm[2] = (unsigned int  )0;
               sqlstm.sqadto[2] = (unsigned short )0;
               sqlstm.sqtdso[2] = (unsigned short )0;
               sqlstm.sqhstv[3] = (         void  *)&nivel;
               sqlstm.sqhstl[3] = (unsigned int  )4;
               sqlstm.sqhsts[3] = (         int  )0;
               sqlstm.sqindv[3] = (         void  *)0;
               sqlstm.sqinds[3] = (         int  )0;
               sqlstm.sqharm[3] = (unsigned int  )0;
               sqlstm.sqadto[3] = (unsigned short )0;
               sqlstm.sqtdso[3] = (unsigned short )0;
               sqlstm.sqhstv[4] = (         void  *)&valor_deb;
               sqlstm.sqhstl[4] = (unsigned int  )8;
               sqlstm.sqhsts[4] = (         int  )0;
               sqlstm.sqindv[4] = (         void  *)0;
               sqlstm.sqinds[4] = (         int  )0;
               sqlstm.sqharm[4] = (unsigned int  )0;
               sqlstm.sqadto[4] = (unsigned short )0;
               sqlstm.sqtdso[4] = (unsigned short )0;
               sqlstm.sqhstv[5] = (         void  *)&valor_cre;
               sqlstm.sqhstl[5] = (unsigned int  )8;
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


            }
            cuenta.arr     [cuenta.len]     = '\0';
            nombre_cta.arr [nombre_cta.len] = '\0';
            db_cr.arr      [db_cr.len]      = '\0';
            sucursal.arr   [sucursal.len]   = '\0';
            staorad = sqlca.sqlcode;
            if (!staorad) {
               if (strcmp(cuenta.arr,cuentan.arr) <= 0)
                   strcpy(g_nombre,nombre_cta.arr);
            }
            if (staorad) {
                strcpy(cuenta.arr,"9999999999");
                cuenta.len = strlen(cuenta.arr);
            }
        }
        else {
              if (strcmp(cuenta.arr,cuentan.arr)<0) {
                  if (valor_deb!=0 || valor_cre!=0) {
                      imprime_acumulados();
                  }
                  if (!strcmp(por_suc,"s")) {
                     /* EXEC SQL FETCH C2A INTO :cuenta, :sucursal, :cen_cos, :nombre_cta, :db_cr, :nivel,
                                             :valor_deb, :valor_cre; */ 

{
                     struct sqlexd sqlstm;

                     sqlstm.sqlvsn = 10;
                     sqlstm.arrsiz = 19;
                     sqlstm.sqladtp = &sqladt;
                     sqlstm.sqltdsp = &sqltds;
                     sqlstm.iters = (unsigned int  )1;
                     sqlstm.offset = (unsigned int  )967;
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
                     sqlstm.sqhstv[1] = (         void  *)&sucursal;
                     sqlstm.sqhstl[1] = (unsigned int  )12;
                     sqlstm.sqhsts[1] = (         int  )0;
                     sqlstm.sqindv[1] = (         void  *)0;
                     sqlstm.sqinds[1] = (         int  )0;
                     sqlstm.sqharm[1] = (unsigned int  )0;
                     sqlstm.sqadto[1] = (unsigned short )0;
                     sqlstm.sqtdso[1] = (unsigned short )0;
                     sqlstm.sqhstv[2] = (         void  *)&cen_cos;
                     sqlstm.sqhstl[2] = (unsigned int  )4;
                     sqlstm.sqhsts[2] = (         int  )0;
                     sqlstm.sqindv[2] = (         void  *)0;
                     sqlstm.sqinds[2] = (         int  )0;
                     sqlstm.sqharm[2] = (unsigned int  )0;
                     sqlstm.sqadto[2] = (unsigned short )0;
                     sqlstm.sqtdso[2] = (unsigned short )0;
                     sqlstm.sqhstv[3] = (         void  *)&nombre_cta;
                     sqlstm.sqhstl[3] = (unsigned int  )72;
                     sqlstm.sqhsts[3] = (         int  )0;
                     sqlstm.sqindv[3] = (         void  *)0;
                     sqlstm.sqinds[3] = (         int  )0;
                     sqlstm.sqharm[3] = (unsigned int  )0;
                     sqlstm.sqadto[3] = (unsigned short )0;
                     sqlstm.sqtdso[3] = (unsigned short )0;
                     sqlstm.sqhstv[4] = (         void  *)&db_cr;
                     sqlstm.sqhstl[4] = (unsigned int  )5;
                     sqlstm.sqhsts[4] = (         int  )0;
                     sqlstm.sqindv[4] = (         void  *)0;
                     sqlstm.sqinds[4] = (         int  )0;
                     sqlstm.sqharm[4] = (unsigned int  )0;
                     sqlstm.sqadto[4] = (unsigned short )0;
                     sqlstm.sqtdso[4] = (unsigned short )0;
                     sqlstm.sqhstv[5] = (         void  *)&nivel;
                     sqlstm.sqhstl[5] = (unsigned int  )4;
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


                  }
                  else {
                     /* EXEC SQL FETCH C2 INTO :cuenta, :nombre_cta, :db_cr, :nivel,
                                            :valor_deb, :valor_cre; */ 

{
                     struct sqlexd sqlstm;

                     sqlstm.sqlvsn = 10;
                     sqlstm.arrsiz = 19;
                     sqlstm.sqladtp = &sqladt;
                     sqlstm.sqltdsp = &sqltds;
                     sqlstm.iters = (unsigned int  )1;
                     sqlstm.offset = (unsigned int  )1014;
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
                     sqlstm.sqhstv[2] = (         void  *)&db_cr;
                     sqlstm.sqhstl[2] = (unsigned int  )5;
                     sqlstm.sqhsts[2] = (         int  )0;
                     sqlstm.sqindv[2] = (         void  *)0;
                     sqlstm.sqinds[2] = (         int  )0;
                     sqlstm.sqharm[2] = (unsigned int  )0;
                     sqlstm.sqadto[2] = (unsigned short )0;
                     sqlstm.sqtdso[2] = (unsigned short )0;
                     sqlstm.sqhstv[3] = (         void  *)&nivel;
                     sqlstm.sqhstl[3] = (unsigned int  )4;
                     sqlstm.sqhsts[3] = (         int  )0;
                     sqlstm.sqindv[3] = (         void  *)0;
                     sqlstm.sqinds[3] = (         int  )0;
                     sqlstm.sqharm[3] = (unsigned int  )0;
                     sqlstm.sqadto[3] = (unsigned short )0;
                     sqlstm.sqtdso[3] = (unsigned short )0;
                     sqlstm.sqhstv[4] = (         void  *)&valor_deb;
                     sqlstm.sqhstl[4] = (unsigned int  )8;
                     sqlstm.sqhsts[4] = (         int  )0;
                     sqlstm.sqindv[4] = (         void  *)0;
                     sqlstm.sqinds[4] = (         int  )0;
                     sqlstm.sqharm[4] = (unsigned int  )0;
                     sqlstm.sqadto[4] = (unsigned short )0;
                     sqlstm.sqtdso[4] = (unsigned short )0;
                     sqlstm.sqhstv[5] = (         void  *)&valor_cre;
                     sqlstm.sqhstl[5] = (unsigned int  )8;
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


                  }
                  cuenta.arr     [cuenta.len]     = '\0';
                  nombre_cta.arr [nombre_cta.len] = '\0';
                  db_cr.arr      [db_cr.len]      = '\0';
                  sucursal.arr   [sucursal.len]   = '\0';
                  staorad = sqlca.sqlcode;
                  if (!staorad) {
                     if (strcmp(cuenta.arr,cuentan.arr) <= 0)
                         strcpy(g_nombre,nombre_cta.arr);
                  }
                  if (staorad) {
                      strcpy(cuenta.arr,"9999999999");
                      cuenta.len = strlen(cuenta.arr);
                  }
              }
              else {
                    imprime_acumulanit();
                    if (entre==0) {
               	        /* EXEC SQL FETCH C3 INTO :cuentan, :nombre_ctam, :nitn,
                                       	       :codigo,  :sucursaln,   :cen_cosn,
                                               :valor_debn,  :valor_cren; */ 

{
                        struct sqlexd sqlstm;

                        sqlstm.sqlvsn = 10;
                        sqlstm.arrsiz = 19;
                        sqlstm.sqladtp = &sqladt;
                        sqlstm.sqltdsp = &sqltds;
                        sqlstm.iters = (unsigned int  )1;
                        sqlstm.offset = (unsigned int  )1053;
                        sqlstm.cud = sqlcud0;
                        sqlstm.sqlest = (unsigned char  *)&sqlca;
                        sqlstm.sqlety = (unsigned short)256;
                        sqlstm.occurs = (unsigned int  )0;
                        sqlstm.sqhstv[0] = (         void  *)&cuentan;
                        sqlstm.sqhstl[0] = (unsigned int  )22;
                        sqlstm.sqhsts[0] = (         int  )0;
                        sqlstm.sqindv[0] = (         void  *)0;
                        sqlstm.sqinds[0] = (         int  )0;
                        sqlstm.sqharm[0] = (unsigned int  )0;
                        sqlstm.sqadto[0] = (unsigned short )0;
                        sqlstm.sqtdso[0] = (unsigned short )0;
                        sqlstm.sqhstv[1] = (         void  *)&nombre_ctam;
                        sqlstm.sqhstl[1] = (unsigned int  )52;
                        sqlstm.sqhsts[1] = (         int  )0;
                        sqlstm.sqindv[1] = (         void  *)0;
                        sqlstm.sqinds[1] = (         int  )0;
                        sqlstm.sqharm[1] = (unsigned int  )0;
                        sqlstm.sqadto[1] = (unsigned short )0;
                        sqlstm.sqtdso[1] = (unsigned short )0;
                        sqlstm.sqhstv[2] = (         void  *)&nitn;
                        sqlstm.sqhstl[2] = (unsigned int  )8;
                        sqlstm.sqhsts[2] = (         int  )0;
                        sqlstm.sqindv[2] = (         void  *)0;
                        sqlstm.sqinds[2] = (         int  )0;
                        sqlstm.sqharm[2] = (unsigned int  )0;
                        sqlstm.sqadto[2] = (unsigned short )0;
                        sqlstm.sqtdso[2] = (unsigned short )0;
                        sqlstm.sqhstv[3] = (         void  *)&codigo;
                        sqlstm.sqhstl[3] = (unsigned int  )22;
                        sqlstm.sqhsts[3] = (         int  )0;
                        sqlstm.sqindv[3] = (         void  *)0;
                        sqlstm.sqinds[3] = (         int  )0;
                        sqlstm.sqharm[3] = (unsigned int  )0;
                        sqlstm.sqadto[3] = (unsigned short )0;
                        sqlstm.sqtdso[3] = (unsigned short )0;
                        sqlstm.sqhstv[4] = (         void  *)&sucursaln;
                        sqlstm.sqhstl[4] = (unsigned int  )12;
                        sqlstm.sqhsts[4] = (         int  )0;
                        sqlstm.sqindv[4] = (         void  *)0;
                        sqlstm.sqinds[4] = (         int  )0;
                        sqlstm.sqharm[4] = (unsigned int  )0;
                        sqlstm.sqadto[4] = (unsigned short )0;
                        sqlstm.sqtdso[4] = (unsigned short )0;
                        sqlstm.sqhstv[5] = (         void  *)&cen_cosn;
                        sqlstm.sqhstl[5] = (unsigned int  )4;
                        sqlstm.sqhsts[5] = (         int  )0;
                        sqlstm.sqindv[5] = (         void  *)0;
                        sqlstm.sqinds[5] = (         int  )0;
                        sqlstm.sqharm[5] = (unsigned int  )0;
                        sqlstm.sqadto[5] = (unsigned short )0;
                        sqlstm.sqtdso[5] = (unsigned short )0;
                        sqlstm.sqhstv[6] = (         void  *)&valor_debn;
                        sqlstm.sqhstl[6] = (unsigned int  )8;
                        sqlstm.sqhsts[6] = (         int  )0;
                        sqlstm.sqindv[6] = (         void  *)0;
                        sqlstm.sqinds[6] = (         int  )0;
                        sqlstm.sqharm[6] = (unsigned int  )0;
                        sqlstm.sqadto[6] = (unsigned short )0;
                        sqlstm.sqtdso[6] = (unsigned short )0;
                        sqlstm.sqhstv[7] = (         void  *)&valor_cren;
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



                        cuentan.arr     [cuentan.len]     = '\0';
                        sucursaln.arr   [sucursaln.len]   = '\0';
                        nombre_ctam.arr [nombre_ctam.len] = '\0';
                        codigo.arr      [codigo.len]      = '\0';
                        staoran = sqlca.sqlcode;
                        if ((staoran == -1405 || staoran == 0)
                            && strlen(nombre_ctam.arr)) {
                           staoran = 0;
                           if (nitn != 1) {
                               strcpy(g_nombre,nombre_ctam.arr);
                               strcpy(nombre_ctan.arr,nombre_ctam.arr);
                               nombre_ctan.len = strlen(nombre_ctan.arr);
                           }
                           else {
                                 strcpy(nombre_ctan.arr,g_nombre);
                                 nombre_ctan.len = strlen(nombre_ctan.arr);
                           }
                        }
                        else {
                              strcpy(nombre_ctan.arr,g_nombre);
                              nombre_ctan.len = strlen(nombre_ctan.arr);
                        }
                        if (staoran == 1403) {
                            strcpy(cuentan.arr,"9999999999");
                            cuentan.len = strlen(cuentan.arr);
                        }
                        else if (staoran == -1405) {
                                staoran = 0;
                                strcpy (codigo.arr, "");
                                codigo.len = 0;
                             }
                        else if (staoran) fprintf (stderr, "Error3, %-d\n", staoran);
                    }
              }
        }
// if (strcmp(cuenta.arr,"94152001")==0) {
//     printf("%s %s %f12.0 %s staorad==%d || staoran==%d",cuenta.arr,cuentan.arr,nitn,g_nombre,staorad,staoran); getchar();
// }
 }
 imprime_acumulanit();

}

void imprime_acumulados()
{
  if (!strcmp(cuenta.arr,"9999999999"))
      return;
  if (con_lin > 60)
      titulos();

  if (atoi(pagina)<=con_pag) {
     if (!strcmp(por_suc,"s"))
         sprintf (cadena2,"%-9s %3s %1d %-10s %-10s ",cuenta.arr,sucursal.arr,cen_cos," "," ");
     else
         sprintf (cadena2,"%-9s%29s",cuenta.arr," ");
     strcpy  (cadenon,cadena2);
     strorg  (nombre_cta.arr,1,39);
     sprintf (cadena2,"%-39s",nombre_cta.arr);
     strcat  (cadenon,cadena2);
  }
//  valors+=valor_deb-valor_cre;
  valor_deb-=valor_cre;
  total[nivel]+=valor_deb;
  if (nivel==3)
     valor_niv3=valor_deb;
  sprintf (cadena,"%9.2f",valor_deb);
  strful(cadena3,(int)((5-nivel)*14),' ');
  if (atoi(pagina)<=con_pag) {
     if (valor_deb != 0) {
        fprintf (fp,"%s",cadenon);
        fmtnum("zzzzz,zzz,zz9.99",cadena,r_t);
        fprintf (fp,"%s%16s\n",cadena3,r_t);
	fflush(fp);
        con_lin++;
     }
  }
}

void imprime_acumulanit()
{
  if (!strcmp(cuentan.arr,"9999999999"))
      return;
  if (con_lin > 60)
      titulos();
  strcpy(cuentab.arr,cuentan.arr);
  cuentab.len   = strlen(cuentab.arr);

  strcpy(sucursalb.arr,sucursaln.arr);
  sucursalb.len = strlen(sucursalb.arr);

  sprintf(cen_cosb.arr,"%2d",cen_cosn);
  cen_cosb.len = strlen(cen_cosb.arr);

  /* C5 */
  /* EXEC SQL select infa, infb, infc, infd
           into  :veca, :vecb, :vecc, :vecd
           from   plan
           where  codigo_emp = :codigo_emp and
                  cuenta     = :cuentab; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 19;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b3  from pl\
an where (codigo_emp=:b4 and cuenta=:b5)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1100;
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


  veca.arr     [veca.len]     = '\0';
  vecb.arr     [vecb.len]     = '\0';
  vecc.arr     [vecc.len]     = '\0';
  vecd.arr     [vecd.len]     = '\0';
  if (sqlca.sqlcode == 1403) {
      printf ("Cuentab (%-s) no existe en plan\n", cuentab.arr);
      exit(1);
  }

  strcpy (vecplan[0], veca.arr);
  strcpy (vecplan[1], vecb.arr);
  strcpy (vecplan[2], vecc.arr);
  strcpy (vecplan[3], vecd.arr);

  i=j=0;
  if (sub_anexos==0) {
    for (i=0;i<4;i++) {
        for (j=0;j<k;j++) {
            if (!strcmp(vecplan[i],vecinf[j].arr)) {
                if ((!strcmp(vecplan[i],"CODART") && nitn==1) ||
                    (!strcmp(vecplan[i],"CODART") && nitn==0)) {
                   strcpy(codigob.arr,codigo.arr);
                   codigob.len = strlen(codigob.arr);
                   leer_articulos();
                   j=k+1;
                   i=4;
                }
                else {
                     if (!strcmp(vecplan[i],"CODBIENES")) {
                          strcpy(codigob.arr,codigo.arr);
                          codigob.len = strlen(codigob.arr);
                          leer_bienes();
                        j=k+1;
                        i=4;
                     }
                     else if (!strcmp(vecplan[i],"CTA-CTE") ||
                              !strcmp(vecplan[i],"PAGARE-#")) {
                              strcpy(codigob.arr,codigo.arr);
                              codigob.len = strlen(codigob.arr);
                              leer_bancos();
                              j=k+1;
                              i=4;
                            }
                          else if (!strcmp(vecplan[i],"COD-VAR") ||
                                   !strcmp(vecplan[i],"POLIZA")) {
                                   strcpy(codigob.arr,codigo.arr);
                                   codigob.len = strlen(codigob.arr);
                                   leer_varios();
                                   j=k+1;
                                   i=4;
                               }
                          else if (!strcmp(vecplan[i],"IMPORT-US")) {
                                   strcpy(codigob.arr,codigo.arr);
                                   codigob.len = strlen(codigob.arr);
                                   leer_import();
                                   j=k+1;
                                   i=4;
                               }
                }
            }
        }
    }
}
  valor_debx=valor_debn;
  valor_crex=valor_cren;
  if (nitn==1) {
      nitn=0;
      valor_debx-=valor_crex;
      if (!strlen(codigo.arr) && valor_debx != 0) {
         strcpy(nombre_ctan.arr,g_nombre);
         nombre_ctan.len = strlen(nombre_ctan.arr);
      }
      else if (!memcmp(codigo.arr,"13050501",8)) {
               strcpy(nombre_ctan.arr,g_nombre);
               nombre_ctan.len = strlen(nombre_ctan.arr);
           }
  }

  valor_debx=0;
  valor_crex=0;
  entre=0;
  strcpy(codigo_an,codigo.arr);
  strcpy(cuenta_an,cuentan.arr);
  nitn_an=nitn;
  if (strcmp(sucursal_an,sucursaln.arr)!=0) {
//     if (nivel==4) {
//        fprintf (fp,"%s",cadenon);
//        fprintf (fp,"%s","TOTAL SUCURSAL --------->");
//        sprintf (cadena,"%9.2f",valors);
//        fmtnum("zzzzz,zzz,zz9.99",cadena,r_t);
//        fprintf (fp,"%s%16s\n",cadena3,r_t);
//        valors=0;
//     }
     strcpy(sucursal_an,sucursaln.arr);
     cen_cos_an=cen_cosn;
  }
  strcpy(nombre_ctan2,nombre_ctan.arr);
  while(strcmp(cuentan.arr,cuentax.arr)==0 && strcmp(codigo_an,codigo.arr)==0 && sub_anexos==0) {
        ver_anexo();
        strcpy(nombre_ctan.arr,nombre_ctan2);
        nombre_ctan.len = strlen(nombre_ctan.arr);
        nitn=nitn_an=0;
        entre=1;
  }

  if (entre==0) {
     valor_debx=valor_debn;
     valor_crex=valor_cren;
  }

  sprintf (cadena,"%10.0f",nitn_an);
  fmtnum("ZZZZZZZZZZ",cadena,r_t);
  if (atoi(pagina)<=con_pag) {
     sprintf (cadena2,"%-9s %3s %1d %-10s %-10s ",cuenta_an,sucursal_an,cen_cos_an,r_t,codigo_an);
     strcpy(cadenon,cadena2);

     while(strcmp(cuentax.arr,cuentan.arr)<0 && sub_anexos==0) {
         /* EXEC SQL FETCH C11 INTO :cuentax; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 19;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )1139;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&cuentax;
         sqlstm.sqhstl[0] = (unsigned int  )22;
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


         cuentax.arr [cuentax.len] = '\0';
         staorax  = sqlca.sqlcode;
         if (staorax != -1405 && staorax != 0) {
            strcpy(cuentax.arr,"9999999999");
            cuentax.len = strlen(cuentax.arr);
         }
     }

     strorg(nombre_ctan.arr,1,39);
     nombre_ctan.len = strlen(nombre_ctan.arr);
     sprintf (cadena2,"%-39s",nombre_ctan.arr);
     strcat(cadenon,cadena2);
  }
  valor_debx-=valor_crex;
  valor_niv4=valor_debx;
  total[5]+=valor_debx;
  sprintf (cadena,"%9.2f",valor_debx);
  if (atoi(pagina)<=con_pag) {
     if (valor_debx != 0) {
        fprintf (fp,"%s",cadenon);
        fmtnum("zzzzz,zzz,zz9.99",cadena,r_t);
        fprintf (fp,"%15s\n",r_t);
fflush(fp);
        con_lin ++;
     }
  }
}

void ver_anexo()
{
 entre=1;
 valor_debx+=valor_debn;
 valor_crex+=valor_cren;

 /* EXEC SQL FETCH C3 INTO :cuentan, :nombre_ctam, :nitn,
                        :codigo,  :sucursaln,   :cen_cosn,
                        :valor_debn,  :valor_cren; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 19;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1158;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&cuentan;
 sqlstm.sqhstl[0] = (unsigned int  )22;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&nombre_ctam;
 sqlstm.sqhstl[1] = (unsigned int  )52;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&nitn;
 sqlstm.sqhstl[2] = (unsigned int  )8;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&codigo;
 sqlstm.sqhstl[3] = (unsigned int  )22;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&sucursaln;
 sqlstm.sqhstl[4] = (unsigned int  )12;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&cen_cosn;
 sqlstm.sqhstl[5] = (unsigned int  )4;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&valor_debn;
 sqlstm.sqhstl[6] = (unsigned int  )8;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&valor_cren;
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



 cuentan.arr     [cuentan.len]     = '\0';
 sucursaln.arr   [sucursaln.len]   = '\0';
 nombre_ctam.arr [nombre_ctam.len] = '\0';
 codigo.arr      [codigo.len]      = '\0';
 staoran = sqlca.sqlcode;
 if ((staoran == -1405 || staoran == 0) && strlen(nombre_ctam.arr)) {
     if (nitn != 1) {
         strcpy(g_nombre,nombre_ctam.arr);
         strcpy(nombre_ctan.arr,nombre_ctam.arr);
         nombre_ctan.len = strlen(nombre_ctan.arr);
     }
     else {
           strcpy(nombre_ctan.arr,g_nombre);
           nombre_ctan.len = strlen(nombre_ctan.arr);
     }
 }
 else {
       strcpy(nombre_ctan.arr,g_nombre);
       nombre_ctan.len = strlen(nombre_ctan.arr);
 }
 if (staoran == 1403) {
     strcpy(cuentan.arr,"9999999999");
     cuentan.len = strlen(cuentan.arr);
 }
 else if (staoran == -1405) {
          strcpy (codigo.arr, "");
          codigo.len = 0;
      }
      else if (staoran) fprintf (stderr, "Error4, %-d\n", staoran);
}

void leer_articulos()
{
int	staora;
/* C6 */
    /* EXEC SQL select nombre
             into  :nombre_art
             from   articulos
             where  codart = (:codigob); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select nombre into :b0  from articulos where codart=:b1";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1205;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nombre_art;
    sqlstm.sqhstl[0] = (unsigned int  )52;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&codigob;
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



    staora = sqlca.sqlcode;
    nombre_art.arr [nombre_art.len] = '\0';
    if (!staora) {
        strcpy(g_nombre,nombre_art.arr);
        strcpy(nombre_ctan.arr,nombre_art.arr);
        nombre_ctan.len = strlen(nombre_ctan.arr);
    }
    else {
          strcpy(nombre_ctan.arr,g_nombre);
          nombre_ctan.len = strlen(nombre_ctan.arr);
    }
//    fprintf (stderr,"Error-1 (%d), cuentab (%-s), Codigo (%-s) , nombre_art(%s), nombre_ctan(%s) en articulos\n", staora, cuentab.arr, codigob.arr, nombre_art.arr, nombre_ctan.arr);
}

void leer_bienes()
{
int	staora;
    /* EXEC SQL DECLARE C1 CURSOR FOR
       select nombre
       from   ACTIVOS
       where  CODIGO = (:codigob) and
              codigo_emp = (:codigo_emp); */ 

    /* EXEC SQL DECLARE C7 CURSOR FOR
       select nombre
       from   bienes
       where  codbienes = (:codigob); */ 


    staora = 0;
    /* EXEC SQL OPEN  C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0015;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1228;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&codigob;
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


    /* EXEC SQL FETCH C1 INTO :nombre_bien; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1251;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nombre_bien;
    sqlstm.sqhstl[0] = (unsigned int  )52;
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


    staora = sqlca.sqlcode;
    nombre_bien.arr [nombre_bien.len] = '\0';
    if (!staora) {
        strcpy(g_nombre,nombre_bien.arr);
        strcpy(nombre_ctan.arr,nombre_bien.arr);
        nombre_ctan.len = strlen(nombre_ctan.arr);
    }
    else {
          staora = 0;
          /* EXEC SQL OPEN  C7; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 19;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = sq0016;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )1270;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (         void  *)&codigob;
          sqlstm.sqhstl[0] = (unsigned int  )22;
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


          /* EXEC SQL FETCH C7 INTO :nombre_bien; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 19;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )1289;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (         void  *)&nombre_bien;
          sqlstm.sqhstl[0] = (unsigned int  )52;
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


          staora = sqlca.sqlcode;
          nombre_bien.arr [nombre_bien.len] = '\0';
          if (!staora) {
              strcpy(g_nombre,nombre_bien.arr);
              strcpy(nombre_ctan.arr,nombre_bien.arr);
              nombre_ctan.len = strlen(nombre_ctan.arr);
          }
          else {
               strcpy(nombre_ctan.arr,g_nombre);
               nombre_ctan.len = strlen(nombre_ctan.arr);
          }
    }

    /* EXEC SQL CLOSE C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1308;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1323;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



//    fprintf (stderr,"Error-2 (%d), cuentab (%-s), Codigo (%-s) , nombre_bien(%s), nombre_ctan(%s) en bienes\n", staora, cuentab.arr, codigob.arr, nombre_bien.arr, nombre_ctan.arr);
}

void leer_bancos()
{
int	staora;

/* C8 */
    /* EXEC SQL select nombre
             into  :nombre_bco
             from   ctacte
             where  cuenta     = (:cuentab)   and
                    cta_cte    = (:codigob)   and
                    sucursal   = (:sucursalb) and
                    codigo_emp = (:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select nombre into :b0  from ctacte where (((cuenta=:b1 a\
nd cta_cte=:b2) and sucursal=:b3) and codigo_emp=:b4)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1338;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nombre_bco;
    sqlstm.sqhstl[0] = (unsigned int  )52;
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
    sqlstm.sqhstv[2] = (         void  *)&codigob;
    sqlstm.sqhstl[2] = (unsigned int  )22;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&sucursalb;
    sqlstm.sqhstl[3] = (unsigned int  )12;
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



    staora = sqlca.sqlcode;
    nombre_bco.arr [nombre_bco.len] = '\0';
    if (!staora) {
        strcpy(g_nombre,nombre_bco.arr);
        strcpy(nombre_ctan.arr,nombre_bco.arr);
        nombre_ctan.len = strlen(nombre_ctan.arr);
    }
    else {
          strcpy(nombre_ctan.arr,g_nombre);
          nombre_ctan.len = strlen(nombre_ctan.arr);
    }
//    fprintf (stderr,"Error-3 (%d), cuentab (%-s), Codigo (%-s) , nombre_bco(%s), nombre_ctan(%s) en bancos\n", staora, cuentab.arr, codigob.arr, nombre_bco.arr, nombre_ctan.arr);
}

void leer_varios()
{
int	staora;
/* C10 */
    /* EXEC SQL select nombre
             into  :nombre_var
             from   cta_varias
             where  cuenta     = :cuentab             and
                    cod_var    = :codigob             and
                    sucursal   = :sucursalb           and
                    cen_cos    = to_number(:cen_cosb) and
                    codigo_emp = :codigo_emp; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select nombre into :b0  from cta_varias where ((((cuenta=\
:b1 and cod_var=:b2) and sucursal=:b3) and cen_cos=to_number(:b4)) and codigo_\
emp=:b5)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1373;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nombre_var;
    sqlstm.sqhstl[0] = (unsigned int  )52;
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
    sqlstm.sqhstv[2] = (         void  *)&codigob;
    sqlstm.sqhstl[2] = (unsigned int  )22;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&sucursalb;
    sqlstm.sqhstl[3] = (unsigned int  )12;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&cen_cosb;
    sqlstm.sqhstl[4] = (unsigned int  )6;
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



    staora = sqlca.sqlcode;
    nombre_var.arr [nombre_var.len] = '\0';
    if (!staora) {
        strcpy(g_nombre,nombre_var.arr);
        strcpy(nombre_ctan.arr,nombre_var.arr);
        nombre_ctan.len = strlen(nombre_ctan.arr);
    }
    else {
          strcpy(nombre_ctan.arr,g_nombre);
          nombre_ctan.len = strlen(nombre_ctan.arr);
    }
//    fprintf (stderr,"Error-4 (%d), cuentab (%-s), Codigo (%-s) , nombre_var(%s), nombre_ctan(%s) en varias\n", staora, cuentab.arr, codigob.arr, nombre_var.arr, nombre_ctan.arr);

}

void leer_import()
{
int	staora;
/* C12 */
    /* EXEC SQL select nombre
             into  :nombre_imp
             from   cta_import
             where  cuenta     = (:cuentab)    and
                    import     = (:codigob)    and
                    codigo_emp = (:codigo_emp) and
                    sucursal   = (:sucursalb)  and
                    cen_cos    = to_number(:cen_cosb); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 19;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select nombre into :b0  from cta_import where ((((cuenta=\
:b1 and import=:b2) and codigo_emp=:b3) and sucursal=:b4) and cen_cos=to_numbe\
r(:b5))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1412;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nombre_imp;
    sqlstm.sqhstl[0] = (unsigned int  )52;
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
    sqlstm.sqhstv[2] = (         void  *)&codigob;
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
    sqlstm.sqhstv[4] = (         void  *)&sucursalb;
    sqlstm.sqhstl[4] = (unsigned int  )12;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&cen_cosb;
    sqlstm.sqhstl[5] = (unsigned int  )6;
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


    staora = sqlca.sqlcode;
    nombre_imp.arr [nombre_imp.len] = '\0';
//    printf("staora (%d), cuentab(%s), codigob(%s), codigo_emp(%s), sucursalb.arr(%s), cen_cosb.arr(%s), nombre_imp.arr (%s)",staora,cuentab.arr,codigob.arr,codigo_emp.arr,sucursalb.arr,cen_cosb.arr,nombre_imp.arr); getchar();
    if (!staora) {
        strcpy(g_nombre,nombre_imp.arr);
        strcpy(nombre_ctan.arr,nombre_imp.arr);
        nombre_ctan.len = strlen(nombre_ctan.arr);
    }
    else {
          strcpy(nombre_ctan.arr,g_nombre);
          nombre_ctan.len = strlen(nombre_ctan.arr);
    }
//    fprintf (stderr,"Error-5 (%d), cuentab (%-s), Codigo (%-s) , nombre_imp(%s), nombre_ctan(%s) en import\n", staora, cuentab.arr, codigob.arr, nombre_imp.arr, nombre_ctan.arr);

}

void totales()
{
  if (con_lin > 60)
      titulos();
  if (atoi(pagina)>con_pag)
     return;
  fprintf (fp,"%71s%15s%15s%15s%15s%15s%15s\n"," "," --------------"," --------------"," --------------"," --------------"," --------------"," --------------");
  sprintf (cadena,"%9.2f",total[5]);
  fmtnum("zzzzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%71s%16s"," ",r_t);
  sprintf (cadena,"%9.2f",total[4]);
  fmtnum("zzzzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%16s",r_t);
  sprintf (cadena,"%9.2f",total[3]);
  fmtnum("zzzzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%16s",r_t);
  sprintf (cadena,"%9.2f",total[2]);
  fmtnum("zzzzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%16s",r_t);
  sprintf (cadena,"%9.2f",total[1]);
  fmtnum("zzzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%16s",r_t);
  sprintf (cadena,"%9.2f",total[0]);
  fmtnum("zzzzzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%16s\n",r_t);
  fprintf (fp,"%71s%15s%15s%15s%15s%15s%15s\n"," "," =============="," =============="," =============="," =============="," =============="," ==============");
  con_lin+=3;
  if (abs((long int)total_no5) > 0 && sub_anexos == 0) {
      sprintf (cadena,"%9.2f",total_no5);
      fprintf (fp,"%71s%15s\n","Total suma de las cuentas sin AUXILIAR #2 ====>     ",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
      fprintf (fp,"%71s%15s\n"," "," ==============");
      total[5]+=total_no5;
      sprintf (cadena,"%9.2f",total[5]);
      fmtnum("zzzz,zzz,zz9.99",cadena,r_t);
      fprintf (fp,"%71s%15s\n"," ",r_t);
      fprintf (fp,"%71s%15s\n"," "," ==============");
      con_lin+=4;
  }
}

