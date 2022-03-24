
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
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
    ".\\conmovto.pc"
};


static unsigned int sqlctx = 525907;


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
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
            void  *sqhstv[18];
   unsigned int   sqhstl[18];
            int   sqhsts[18];
            void  *sqindv[18];
            int   sqinds[18];
   unsigned int   sqharm[18];
   unsigned int   *sqharc[18];
   unsigned short  sqadto[18];
   unsigned short  sqtdso[18];
} sqlstm = {12,18};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(char *, int *);

 static const char *sq0005 = 
"select inf  from infacu            ";

 static const char *sq0002 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cue\
nta ,nvl(codigo_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado ,sucursal\
 ,cen_cos ,d.libro  from movto_d d ,movto_c c where (((((((((d.codigo_emp(+)=c\
.codigo_emp and d.ano_mes(+)=c.ano_mes) and d.consecutivo(+)=c.consecutivo) an\
d c.codigo_emp=to_number(:b0)) and c.ano_mes=to_number(:b1)) and c.tipo>=to_nu\
mber(:b2)) and c.tipo<=to_number(:b3)) and c.comprobante>=to_number(:b4)) and \
c.comprobante<=to_number(:b5)) and d.libro=to_number(:b6)) order by tipo,compr\
obante            ";

 static const char *sq0003 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cue\
nta ,nvl(codigo_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado ,sucursal\
 ,cen_cos ,d.libro  from movto_d d ,movto_c c where ((((((((((d.codigo_emp(+)=\
c.codigo_emp and d.ano_mes(+)=c.ano_mes) and d.consecutivo(+)=c.consecutivo) a\
nd c.codigo_emp=to_number(:b0)) and c.ano_mes=to_number(:b1)) and c.tipo>=to_n\
umber(:b2)) and c.tipo<=to_number(:b3)) and c.comprobante>=to_number(:b4)) and\
 c.comprobante<=to_number(:b5)) and d.libro=to_number(:b6)) and c.estado<>'9')\
 order by c.consecutivo,secuencia            ";

 static const char *sq0004 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cue\
nta ,nvl(codigo_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado ,sucursal\
 ,cen_cos ,d.libro  from movto_d d ,movto_c c where ((((((((((d.codigo_emp(+)=\
c.codigo_emp and d.ano_mes(+)=c.ano_mes) and d.consecutivo(+)=c.consecutivo) a\
nd c.codigo_emp=to_number(:b0)) and c.ano_mes=to_number(:b1)) and c.tipo>=to_n\
umber(:b2)) and c.tipo<=to_number(:b3)) and c.comprobante>=to_number(:b4)) and\
 c.comprobante<=to_number(:b5)) and d.libro=to_number(:b6)) and c.estado<>'9')\
 order by c.fecha            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4114,178,0,0,
5,0,0,1,0,0,27,176,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,5,35,0,9,270,0,0,0,0,0,1,0,
51,0,0,5,0,0,13,277,0,0,1,0,0,1,0,2,9,0,0,
70,0,0,5,0,0,15,291,0,0,0,0,0,1,0,
85,0,0,6,140,0,4,293,0,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
116,0,0,2,640,0,9,303,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
159,0,0,3,667,0,9,307,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
202,0,0,4,651,0,9,311,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
245,0,0,2,0,0,13,320,0,0,18,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,
4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,2,9,0,0,
332,0,0,3,0,0,13,327,0,0,18,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,
4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,2,9,0,0,
419,0,0,4,0,0,13,334,0,0,18,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,
4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,2,9,0,0,
506,0,0,7,0,0,29,385,0,0,0,0,0,1,0,
521,0,0,2,0,0,15,394,0,0,0,0,0,1,0,
536,0,0,3,0,0,15,398,0,0,0,0,0,1,0,
551,0,0,4,0,0,15,402,0,0,0,0,0,1,0,
566,0,0,8,0,0,30,412,0,0,0,0,0,1,0,
581,0,0,9,99,0,4,485,0,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,9,
0,0,
620,0,0,10,54,0,4,496,0,0,2,1,0,1,0,2,9,0,0,1,4,0,0,
643,0,0,11,189,0,4,679,0,0,7,6,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
686,0,0,12,60,0,3,698,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,
725,0,0,13,238,0,5,711,0,0,8,8,0,1,0,1,4,0,0,1,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,
772,0,0,14,231,0,5,729,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,4,0,0,
815,0,0,15,241,0,4,747,0,0,9,8,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
866,0,0,16,68,0,3,767,0,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,
913,0,0,17,276,0,5,777,0,0,10,10,0,1,0,1,4,0,0,1,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
968,0,0,18,122,0,4,800,0,0,3,2,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,
995,0,0,19,69,0,3,813,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
1018,0,0,20,120,0,5,823,0,0,3,3,0,1,0,1,4,0,0,1,9,0,0,1,9,0,0,
};


/*****************************************************************
* CONMOVTO.C Version 1.0 - Rev 1.2 - Jun. 30/92.
*                          rev 1.6 - Nov. 11/97.
*
* ordenes.c. Listado y actualizacion del movimiento contable
*
* Uso : codigo_emp aamm s/n orden (T,C,F) tipo_ini tipo_fin comp_ini comp_fin device userid/password\n";
*
* Mario E. Santiago I. Creado Junio 30-1992.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <math.h>
				     /* Parametros de comunicacion con ORACLE */

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                            /* Variables globales del usuario */
/* VARCHAR codigo_emp [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

/* VARCHAR vecinf     [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecinf[20];

/* VARCHAR ano_mes    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR tipo_ini   [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } tipo_ini;

/* VARCHAR tipo_fin   [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } tipo_fin;

/* VARCHAR cmp_ini    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cmp_ini;

/* VARCHAR cmp_fin    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cmp_fin;

/* VARCHAR veca       [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } veca;

/* VARCHAR vecb       [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecb;

/* VARCHAR vecc       [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecc;

/* VARCHAR vecd       [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecd;


/* Tabla MOVTO_C y MOVTO_D */

/* VARCHAR infa       [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infa[20];

/* VARCHAR infb       [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infb[20];

/* VARCHAR infc       [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infc[20];

/* VARCHAR infd       [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infd[20];

double  comprobante[20];
double  consecutivo[20];
/* VARCHAR clase      [20][3]; */ 
struct { unsigned short len; unsigned char arr[6]; } clase[20];

/* VARCHAR descripcion[20][41]; */ 
struct { unsigned short len; unsigned char arr[42]; } descripcion[20];

/* VARCHAR fecha      [20][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } fecha[20];

int     tipo       [20];
/* VARCHAR cuenta     [20][15]; */ 
struct { unsigned short len; unsigned char arr[18]; } cuenta[20];

double  codigo_nit [20];
double  valor_deb  [20];
double  valor_cre  [20];
/* VARCHAR estado     [20][2]; */ 
struct { unsigned short len; unsigned char arr[2]; } estado[20];

/* VARCHAR sucursal   [20][05]; */ 
struct { unsigned short len; unsigned char arr[6]; } sucursal[20];

/* VARCHAR cen_cos    [20][3]; */ 
struct { unsigned short len; unsigned char arr[6]; } cen_cos[20];

/* VARCHAR libro      [20][2]; */ 
struct { unsigned short len; unsigned char arr[2]; } libro[20];

double	wval_deb;
double	wval_cre;
/* VARCHAR nomb_emp   [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_emp;

/* VARCHAR nomb_nit   [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_nit;

/* VARCHAR codigo     [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } codigo;

/* VARCHAR cuentab    [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuentab;

double  cons;
/* VARCHAR cuentax    [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuentax;

double  codigo_nitb;
double  nit;
int     digito;
/* VARCHAR cen_cosb   [05]; */ 
struct { unsigned short len; unsigned char arr[5]; } cen_cosb;

/* VARCHAR sucursalb  [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } sucursalb;

/* VARCHAR librob     [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } librob;

double  consecutivo_an;

/* EXEC SQL END DECLARE SECTION; */ 

/* EXEC SQL INCLUDE SQLCA;
 */ 
/*
 * $Header: sqlca.h 24-apr-2003.12:50:58 mkandarp Exp $ sqlca.h 
 */

/* Copyright (c) 1985, 2003, Oracle Corporation.  All rights reserved.  */
 
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


int     traidos    =0;
int     staora     =0;
int     num_ret    =0;
int     loop_2     =0;
int     loop_13    =0;
int     con_pag    =0;                                /* Contador de Paginas */
int     con_lin    =66;                               /* Contador de Lineas  */
int     cl;
char    vecmov     [5][14];
char    vecplan    [5][14];
char    asiento    [2];
char    orden      [2];
char    ordenar    [30];
char    timbrado   [2];
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[100];
int     pos;

double  doble;
double  x;
double  num;
int     diai;
int     mesi;
int     anoi;
int     tipo_an;
int     i;
int     j;
int     k;
double  tot_deb[2];
double  tot_cre[2];
char    cadena[100];
char    login[30];

void titulos();
void lista_movto();
void totales_cpt();
void totales();
void actualizo();
void voy_ins_acumulados();
void voy_actu_acumulados();
void voy_marco_movto();
void actualizo_nit();
void voy_ins_acumulanit();
void voy_actu_acumulanit();
void actualizo_cntrl();
void voy_ins_actualizocnt();
void voy_actu_actualizocnt();

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;
int     nrec   = 0;
    if (argc < 13)
       {
	printf ("Incorrecta invocacion:\n");
  printf ("Uso : codigo_emp aaaamm asiento(s/n) orden(T,C,F) tipo_ini tipo_fin\n");
  printf ("      comp_ini comp_fin device timbrado (s/n) libro(0=COLGAAP, 1=IFRS) userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("      device : s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (asiento,        argv[3]);
       strlow (asiento);
       strcpy (orden,          argv[4]);
       strcpy (tipo_ini.arr,   argv[5]);
       tipo_ini.len    =       strlen(tipo_ini.arr);
       strcpy (tipo_fin.arr,   argv[6]);
       tipo_fin.len    =       strlen(tipo_fin.arr);
       strcpy (cmp_ini.arr,    argv[7]);
       cmp_ini.len     =       strlen(cmp_ini.arr);
       strcpy (cmp_fin.arr,    argv[8]);
       cmp_fin.len     =       strlen(cmp_fin.arr);
       strcpy (device,         argv[9]);
       strlow (device);
       strcpy (timbrado,       argv[10]);
       strlow (timbrado);
       strcpy (librob.arr,    argv[11]);
       librob.len      =       strlen(librob.arr);


    if (!strpos ("/", argv[12]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[12]);
    uid.len = strlen(uid.arr);
/******************************************************
 * Establecer conexion concurrente con ORACLE (orlon) *
 ******************************************************/
    /* EXEC SQL CONNECT :uid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
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
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
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

    strcpy (ano_mes.arr,    argv[2]);
    ano_mes.len    =        strlen(ano_mes.arr);
    strcpy (cadena,         ano_mes.arr);
    anoi           =        atoi(cadena);
    strcpy (cadena,         ano_mes.arr);
    strorg (cadena,5,2);
    mesi           =        atoi(cadena);
    if (mesi==13)
        mesi=12;

    /* EXEC SQL DECLARE C2A CURSOR FOR
          select nvl(infa,'0'), decode(clase,'XX','0',nvl(infb,'0')),
                 nvl(infc,'0'), nvl(infd,'0'),
                 comprobante, c.consecutivo,
                 clase, descripcion, fecha, tipo, cuenta,
                 nvl(codigo_nit,970), nvl(valor_deb,0), nvl(valor_cre,0), estado, sucursal, cen_cos, d.libro
	        from   movto_d d, movto_c c
          where  d.codigo_emp(+)  = c.codigo_emp                  and
                 d.ano_mes(+)     = c.ano_mes                     and
                 d.consecutivo(+) = c.consecutivo                 and
                 c.codigo_emp     = to_number(:codigo_emp)        and
                 c.ano_mes        = to_number(:ano_mes)           and
                 c.tipo          >= to_number(:tipo_ini)          and
                 c.tipo          <= to_number(:tipo_fin)          and
                 c.comprobante   >= to_number(:cmp_ini)           and
                 c.comprobante   <= to_number(:cmp_fin)           and
                 d.libro          = to_number(:librob)           /o and
                 c.estado        <>   '9'                        o/
          order by tipo, comprobante; */ 


     /* EXEC SQL DECLARE C2B CURSOR FOR
          select nvl(infa,'0'), decode(clase,'XX','0',nvl(infb,'0')),
                 nvl(infc,'0'), nvl(infd,'0'),
                 comprobante, c.consecutivo,
                 clase, descripcion, fecha, tipo, cuenta,
                 nvl(codigo_nit,970), nvl(valor_deb,0), nvl(valor_cre,0), estado, sucursal, cen_cos, d.libro
	        from   movto_d d, movto_c c
          where  d.codigo_emp(+)  = c.codigo_emp                  and
                 d.ano_mes(+)     = c.ano_mes                     and
                 d.consecutivo(+) = c.consecutivo                 and
                 c.codigo_emp     = to_number(:codigo_emp)        and
                 c.ano_mes        = to_number(:ano_mes)           and
                 c.tipo          >= to_number(:tipo_ini)          and
                 c.tipo          <= to_number(:tipo_fin)          and
                 c.comprobante   >= to_number(:cmp_ini)           and
                 c.comprobante   <= to_number(:cmp_fin)           and
                 d.libro          = to_number(:librob)            and
                 c.estado        <>   '9'
          order by c.consecutivo, secuencia; */ 


     /* EXEC SQL DECLARE C2C CURSOR FOR
          select nvl(infa,'0'), decode(clase,'XX','0',nvl(infb,'0')),
                 nvl(infc,'0'), nvl(infd,'0'),
                 comprobante, c.consecutivo,
                 clase, descripcion, fecha, tipo, cuenta,
                 nvl(codigo_nit,970), nvl(valor_deb,0), nvl(valor_cre,0), estado, sucursal, cen_cos, d.libro
	        from   movto_d d, movto_c c
          where  d.codigo_emp(+)  = c.codigo_emp                  and
                 d.ano_mes(+)     = c.ano_mes                     and
                 d.consecutivo(+) = c.consecutivo                 and
                 c.codigo_emp     = to_number(:codigo_emp)        and
                 c.ano_mes        = to_number(:ano_mes)           and
                 c.tipo          >= to_number(:tipo_ini)          and
                 c.tipo          <= to_number(:tipo_fin)          and
                 c.comprobante   >= to_number(:cmp_ini)           and
                 c.comprobante   <= to_number(:cmp_fin)           and
                 d.libro          = to_number(:librob)            and
                 c.estado        <>   '9'
          order by c.fecha; */ 


     /* EXEC SQL DECLARE C13 CURSOR FOR
              select inf
              from   infacu; */ 


    /* EXEC SQL OPEN C13; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0005;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )36;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = 0;
    traidos = 0;
    num_ret = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C13 INTO :vecinf; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )20;
          sqlstm.offset = (unsigned int  )51;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqfoff = (           int )0;
          sqlstm.sqfmod = (unsigned int )2;
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
             fprintf (stderr, "Error leyendo C13 (%d)\n", sqlca.sqlcode);

          staora  = sqlca.sqlcode;
          traidos = sqlca.sqlerrd[2];

          for (loop_13 = 0; loop_13 < (traidos - num_ret); loop_13++) {
              vecinf[loop_13].arr  [vecinf[loop_13].len] = '\0';
          }
          num_ret = traidos;
    }
    k = traidos;
    /* EXEC SQL CLOSE C13; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
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



    /* EXEC SQL select n.nombre, n.nit, n.digito
                    into :nomb_emp, :nit, :digito
             from   nits n, empresas e
             where  n.codigo_nit = e.codigo_nit and
                    e.codigo_emp = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select n.nombre ,n.nit ,n.digito into :b0,:b1,:b2  from n\
its n ,empresas e where (n.codigo_nit=e.codigo_nit and e.codigo_emp=to_number(\
:b3))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )85;
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
    sqlstm.sqhstl[1] = (unsigned int  )sizeof(double);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&digito;
    sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
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
        fprintf (stderr, "Error leyendo EMPRESAS (%d)\n", sqlca.sqlcode);

    if (!strcmp (orden,"T")) {
       /* EXEC SQL OPEN C2A; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 12;
       sqlstm.arrsiz = 7;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = sq0002;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )116;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqcmod = (unsigned int )0;
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
       sqlstm.sqhstv[2] = (         void  *)&tipo_ini;
       sqlstm.sqhstl[2] = (unsigned int  )12;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&tipo_fin;
       sqlstm.sqhstl[3] = (unsigned int  )12;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&cmp_ini;
       sqlstm.sqhstl[4] = (unsigned int  )22;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&cmp_fin;
       sqlstm.sqhstl[5] = (unsigned int  )22;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&librob;
       sqlstm.sqhstl[6] = (unsigned int  )4;
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


    }
    else
       if (!strcmp (orden,"C")) {
          /* EXEC SQL OPEN C2B; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 7;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = sq0003;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )159;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqcmod = (unsigned int )0;
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
          sqlstm.sqhstv[2] = (         void  *)&tipo_ini;
          sqlstm.sqhstl[2] = (unsigned int  )12;
          sqlstm.sqhsts[2] = (         int  )0;
          sqlstm.sqindv[2] = (         void  *)0;
          sqlstm.sqinds[2] = (         int  )0;
          sqlstm.sqharm[2] = (unsigned int  )0;
          sqlstm.sqadto[2] = (unsigned short )0;
          sqlstm.sqtdso[2] = (unsigned short )0;
          sqlstm.sqhstv[3] = (         void  *)&tipo_fin;
          sqlstm.sqhstl[3] = (unsigned int  )12;
          sqlstm.sqhsts[3] = (         int  )0;
          sqlstm.sqindv[3] = (         void  *)0;
          sqlstm.sqinds[3] = (         int  )0;
          sqlstm.sqharm[3] = (unsigned int  )0;
          sqlstm.sqadto[3] = (unsigned short )0;
          sqlstm.sqtdso[3] = (unsigned short )0;
          sqlstm.sqhstv[4] = (         void  *)&cmp_ini;
          sqlstm.sqhstl[4] = (unsigned int  )22;
          sqlstm.sqhsts[4] = (         int  )0;
          sqlstm.sqindv[4] = (         void  *)0;
          sqlstm.sqinds[4] = (         int  )0;
          sqlstm.sqharm[4] = (unsigned int  )0;
          sqlstm.sqadto[4] = (unsigned short )0;
          sqlstm.sqtdso[4] = (unsigned short )0;
          sqlstm.sqhstv[5] = (         void  *)&cmp_fin;
          sqlstm.sqhstl[5] = (unsigned int  )22;
          sqlstm.sqhsts[5] = (         int  )0;
          sqlstm.sqindv[5] = (         void  *)0;
          sqlstm.sqinds[5] = (         int  )0;
          sqlstm.sqharm[5] = (unsigned int  )0;
          sqlstm.sqadto[5] = (unsigned short )0;
          sqlstm.sqtdso[5] = (unsigned short )0;
          sqlstm.sqhstv[6] = (         void  *)&librob;
          sqlstm.sqhstl[6] = (unsigned int  )4;
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


       }
       else
          if (!strcmp (orden,"F")) {
             /* EXEC SQL OPEN C2C; */ 

{
             struct sqlexd sqlstm;
             sqlstm.sqlvsn = 12;
             sqlstm.arrsiz = 7;
             sqlstm.sqladtp = &sqladt;
             sqlstm.sqltdsp = &sqltds;
             sqlstm.stmt = sq0004;
             sqlstm.iters = (unsigned int  )1;
             sqlstm.offset = (unsigned int  )202;
             sqlstm.selerr = (unsigned short)1;
             sqlstm.cud = sqlcud0;
             sqlstm.sqlest = (unsigned char  *)&sqlca;
             sqlstm.sqlety = (unsigned short)256;
             sqlstm.occurs = (unsigned int  )0;
             sqlstm.sqcmod = (unsigned int )0;
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
             sqlstm.sqhstv[2] = (         void  *)&tipo_ini;
             sqlstm.sqhstl[2] = (unsigned int  )12;
             sqlstm.sqhsts[2] = (         int  )0;
             sqlstm.sqindv[2] = (         void  *)0;
             sqlstm.sqinds[2] = (         int  )0;
             sqlstm.sqharm[2] = (unsigned int  )0;
             sqlstm.sqadto[2] = (unsigned short )0;
             sqlstm.sqtdso[2] = (unsigned short )0;
             sqlstm.sqhstv[3] = (         void  *)&tipo_fin;
             sqlstm.sqhstl[3] = (unsigned int  )12;
             sqlstm.sqhsts[3] = (         int  )0;
             sqlstm.sqindv[3] = (         void  *)0;
             sqlstm.sqinds[3] = (         int  )0;
             sqlstm.sqharm[3] = (unsigned int  )0;
             sqlstm.sqadto[3] = (unsigned short )0;
             sqlstm.sqtdso[3] = (unsigned short )0;
             sqlstm.sqhstv[4] = (         void  *)&cmp_ini;
             sqlstm.sqhstl[4] = (unsigned int  )22;
             sqlstm.sqhsts[4] = (         int  )0;
             sqlstm.sqindv[4] = (         void  *)0;
             sqlstm.sqinds[4] = (         int  )0;
             sqlstm.sqharm[4] = (unsigned int  )0;
             sqlstm.sqadto[4] = (unsigned short )0;
             sqlstm.sqtdso[4] = (unsigned short )0;
             sqlstm.sqhstv[5] = (         void  *)&cmp_fin;
             sqlstm.sqhstl[5] = (unsigned int  )22;
             sqlstm.sqhsts[5] = (         int  )0;
             sqlstm.sqindv[5] = (         void  *)0;
             sqlstm.sqinds[5] = (         int  )0;
             sqlstm.sqharm[5] = (unsigned int  )0;
             sqlstm.sqadto[5] = (unsigned short )0;
             sqlstm.sqtdso[5] = (unsigned short )0;
             sqlstm.sqhstv[6] = (         void  *)&librob;
             sqlstm.sqhstl[6] = (unsigned int  )4;
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


          }

    staora  = 0;
    traidos = 0;
    num_ret = 0;
    while (staora == 0) {

          if (!strcmp (orden,"T")) {
          /* EXEC SQL FETCH C2A INTO :infa, :infb, :infc, :infd, :comprobante,
                                  :consecutivo, :clase, :descripcion,
                                  :fecha, :tipo,:cuenta, :codigo_nit,
                                  :valor_deb,   :valor_cre, :estado, :sucursal, :cen_cos, :libro; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 18;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )20;
          sqlstm.offset = (unsigned int  )245;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqfoff = (           int )0;
          sqlstm.sqfmod = (unsigned int )2;
          sqlstm.sqhstv[0] = (         void  *)infa;
          sqlstm.sqhstl[0] = (unsigned int  )16;
          sqlstm.sqhsts[0] = (         int  )16;
          sqlstm.sqindv[0] = (         void  *)0;
          sqlstm.sqinds[0] = (         int  )0;
          sqlstm.sqharm[0] = (unsigned int  )0;
          sqlstm.sqharc[0] = (unsigned int   *)0;
          sqlstm.sqadto[0] = (unsigned short )0;
          sqlstm.sqtdso[0] = (unsigned short )0;
          sqlstm.sqhstv[1] = (         void  *)infb;
          sqlstm.sqhstl[1] = (unsigned int  )16;
          sqlstm.sqhsts[1] = (         int  )16;
          sqlstm.sqindv[1] = (         void  *)0;
          sqlstm.sqinds[1] = (         int  )0;
          sqlstm.sqharm[1] = (unsigned int  )0;
          sqlstm.sqharc[1] = (unsigned int   *)0;
          sqlstm.sqadto[1] = (unsigned short )0;
          sqlstm.sqtdso[1] = (unsigned short )0;
          sqlstm.sqhstv[2] = (         void  *)infc;
          sqlstm.sqhstl[2] = (unsigned int  )16;
          sqlstm.sqhsts[2] = (         int  )16;
          sqlstm.sqindv[2] = (         void  *)0;
          sqlstm.sqinds[2] = (         int  )0;
          sqlstm.sqharm[2] = (unsigned int  )0;
          sqlstm.sqharc[2] = (unsigned int   *)0;
          sqlstm.sqadto[2] = (unsigned short )0;
          sqlstm.sqtdso[2] = (unsigned short )0;
          sqlstm.sqhstv[3] = (         void  *)infd;
          sqlstm.sqhstl[3] = (unsigned int  )16;
          sqlstm.sqhsts[3] = (         int  )16;
          sqlstm.sqindv[3] = (         void  *)0;
          sqlstm.sqinds[3] = (         int  )0;
          sqlstm.sqharm[3] = (unsigned int  )0;
          sqlstm.sqharc[3] = (unsigned int   *)0;
          sqlstm.sqadto[3] = (unsigned short )0;
          sqlstm.sqtdso[3] = (unsigned short )0;
          sqlstm.sqhstv[4] = (         void  *)comprobante;
          sqlstm.sqhstl[4] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[4] = (         int  )sizeof(double);
          sqlstm.sqindv[4] = (         void  *)0;
          sqlstm.sqinds[4] = (         int  )0;
          sqlstm.sqharm[4] = (unsigned int  )0;
          sqlstm.sqharc[4] = (unsigned int   *)0;
          sqlstm.sqadto[4] = (unsigned short )0;
          sqlstm.sqtdso[4] = (unsigned short )0;
          sqlstm.sqhstv[5] = (         void  *)consecutivo;
          sqlstm.sqhstl[5] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[5] = (         int  )sizeof(double);
          sqlstm.sqindv[5] = (         void  *)0;
          sqlstm.sqinds[5] = (         int  )0;
          sqlstm.sqharm[5] = (unsigned int  )0;
          sqlstm.sqharc[5] = (unsigned int   *)0;
          sqlstm.sqadto[5] = (unsigned short )0;
          sqlstm.sqtdso[5] = (unsigned short )0;
          sqlstm.sqhstv[6] = (         void  *)clase;
          sqlstm.sqhstl[6] = (unsigned int  )5;
          sqlstm.sqhsts[6] = (         int  )8;
          sqlstm.sqindv[6] = (         void  *)0;
          sqlstm.sqinds[6] = (         int  )0;
          sqlstm.sqharm[6] = (unsigned int  )0;
          sqlstm.sqharc[6] = (unsigned int   *)0;
          sqlstm.sqadto[6] = (unsigned short )0;
          sqlstm.sqtdso[6] = (unsigned short )0;
          sqlstm.sqhstv[7] = (         void  *)descripcion;
          sqlstm.sqhstl[7] = (unsigned int  )43;
          sqlstm.sqhsts[7] = (         int  )44;
          sqlstm.sqindv[7] = (         void  *)0;
          sqlstm.sqinds[7] = (         int  )0;
          sqlstm.sqharm[7] = (unsigned int  )0;
          sqlstm.sqharc[7] = (unsigned int   *)0;
          sqlstm.sqadto[7] = (unsigned short )0;
          sqlstm.sqtdso[7] = (unsigned short )0;
          sqlstm.sqhstv[8] = (         void  *)fecha;
          sqlstm.sqhstl[8] = (unsigned int  )22;
          sqlstm.sqhsts[8] = (         int  )24;
          sqlstm.sqindv[8] = (         void  *)0;
          sqlstm.sqinds[8] = (         int  )0;
          sqlstm.sqharm[8] = (unsigned int  )0;
          sqlstm.sqharc[8] = (unsigned int   *)0;
          sqlstm.sqadto[8] = (unsigned short )0;
          sqlstm.sqtdso[8] = (unsigned short )0;
          sqlstm.sqhstv[9] = (         void  *)tipo;
          sqlstm.sqhstl[9] = (unsigned int  )sizeof(int);
          sqlstm.sqhsts[9] = (         int  )sizeof(int);
          sqlstm.sqindv[9] = (         void  *)0;
          sqlstm.sqinds[9] = (         int  )0;
          sqlstm.sqharm[9] = (unsigned int  )0;
          sqlstm.sqharc[9] = (unsigned int   *)0;
          sqlstm.sqadto[9] = (unsigned short )0;
          sqlstm.sqtdso[9] = (unsigned short )0;
          sqlstm.sqhstv[10] = (         void  *)cuenta;
          sqlstm.sqhstl[10] = (unsigned int  )17;
          sqlstm.sqhsts[10] = (         int  )20;
          sqlstm.sqindv[10] = (         void  *)0;
          sqlstm.sqinds[10] = (         int  )0;
          sqlstm.sqharm[10] = (unsigned int  )0;
          sqlstm.sqharc[10] = (unsigned int   *)0;
          sqlstm.sqadto[10] = (unsigned short )0;
          sqlstm.sqtdso[10] = (unsigned short )0;
          sqlstm.sqhstv[11] = (         void  *)codigo_nit;
          sqlstm.sqhstl[11] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[11] = (         int  )sizeof(double);
          sqlstm.sqindv[11] = (         void  *)0;
          sqlstm.sqinds[11] = (         int  )0;
          sqlstm.sqharm[11] = (unsigned int  )0;
          sqlstm.sqharc[11] = (unsigned int   *)0;
          sqlstm.sqadto[11] = (unsigned short )0;
          sqlstm.sqtdso[11] = (unsigned short )0;
          sqlstm.sqhstv[12] = (         void  *)valor_deb;
          sqlstm.sqhstl[12] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[12] = (         int  )sizeof(double);
          sqlstm.sqindv[12] = (         void  *)0;
          sqlstm.sqinds[12] = (         int  )0;
          sqlstm.sqharm[12] = (unsigned int  )0;
          sqlstm.sqharc[12] = (unsigned int   *)0;
          sqlstm.sqadto[12] = (unsigned short )0;
          sqlstm.sqtdso[12] = (unsigned short )0;
          sqlstm.sqhstv[13] = (         void  *)valor_cre;
          sqlstm.sqhstl[13] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[13] = (         int  )sizeof(double);
          sqlstm.sqindv[13] = (         void  *)0;
          sqlstm.sqinds[13] = (         int  )0;
          sqlstm.sqharm[13] = (unsigned int  )0;
          sqlstm.sqharc[13] = (unsigned int   *)0;
          sqlstm.sqadto[13] = (unsigned short )0;
          sqlstm.sqtdso[13] = (unsigned short )0;
          sqlstm.sqhstv[14] = (         void  *)estado;
          sqlstm.sqhstl[14] = (unsigned int  )4;
          sqlstm.sqhsts[14] = (         int  )4;
          sqlstm.sqindv[14] = (         void  *)0;
          sqlstm.sqinds[14] = (         int  )0;
          sqlstm.sqharm[14] = (unsigned int  )0;
          sqlstm.sqharc[14] = (unsigned int   *)0;
          sqlstm.sqadto[14] = (unsigned short )0;
          sqlstm.sqtdso[14] = (unsigned short )0;
          sqlstm.sqhstv[15] = (         void  *)sucursal;
          sqlstm.sqhstl[15] = (unsigned int  )7;
          sqlstm.sqhsts[15] = (         int  )8;
          sqlstm.sqindv[15] = (         void  *)0;
          sqlstm.sqinds[15] = (         int  )0;
          sqlstm.sqharm[15] = (unsigned int  )0;
          sqlstm.sqharc[15] = (unsigned int   *)0;
          sqlstm.sqadto[15] = (unsigned short )0;
          sqlstm.sqtdso[15] = (unsigned short )0;
          sqlstm.sqhstv[16] = (         void  *)cen_cos;
          sqlstm.sqhstl[16] = (unsigned int  )5;
          sqlstm.sqhsts[16] = (         int  )8;
          sqlstm.sqindv[16] = (         void  *)0;
          sqlstm.sqinds[16] = (         int  )0;
          sqlstm.sqharm[16] = (unsigned int  )0;
          sqlstm.sqharc[16] = (unsigned int   *)0;
          sqlstm.sqadto[16] = (unsigned short )0;
          sqlstm.sqtdso[16] = (unsigned short )0;
          sqlstm.sqhstv[17] = (         void  *)libro;
          sqlstm.sqhstl[17] = (unsigned int  )4;
          sqlstm.sqhsts[17] = (         int  )4;
          sqlstm.sqindv[17] = (         void  *)0;
          sqlstm.sqinds[17] = (         int  )0;
          sqlstm.sqharm[17] = (unsigned int  )0;
          sqlstm.sqharc[17] = (unsigned int   *)0;
          sqlstm.sqadto[17] = (unsigned short )0;
          sqlstm.sqtdso[17] = (unsigned short )0;
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
          else
             if (!strcmp (orden,"C")) {
          /* EXEC SQL FETCH C2B INTO :infa, :infb, :infc, :infd, :comprobante,
                                 :consecutivo,  :clase, :descripcion,
                                 :fecha, :tipo, :cuenta, :codigo_nit,
                                 :valor_deb,    :valor_cre, :estado, :sucursal, :cen_cos, :libro; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 18;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )20;
          sqlstm.offset = (unsigned int  )332;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqfoff = (           int )0;
          sqlstm.sqfmod = (unsigned int )2;
          sqlstm.sqhstv[0] = (         void  *)infa;
          sqlstm.sqhstl[0] = (unsigned int  )16;
          sqlstm.sqhsts[0] = (         int  )16;
          sqlstm.sqindv[0] = (         void  *)0;
          sqlstm.sqinds[0] = (         int  )0;
          sqlstm.sqharm[0] = (unsigned int  )0;
          sqlstm.sqharc[0] = (unsigned int   *)0;
          sqlstm.sqadto[0] = (unsigned short )0;
          sqlstm.sqtdso[0] = (unsigned short )0;
          sqlstm.sqhstv[1] = (         void  *)infb;
          sqlstm.sqhstl[1] = (unsigned int  )16;
          sqlstm.sqhsts[1] = (         int  )16;
          sqlstm.sqindv[1] = (         void  *)0;
          sqlstm.sqinds[1] = (         int  )0;
          sqlstm.sqharm[1] = (unsigned int  )0;
          sqlstm.sqharc[1] = (unsigned int   *)0;
          sqlstm.sqadto[1] = (unsigned short )0;
          sqlstm.sqtdso[1] = (unsigned short )0;
          sqlstm.sqhstv[2] = (         void  *)infc;
          sqlstm.sqhstl[2] = (unsigned int  )16;
          sqlstm.sqhsts[2] = (         int  )16;
          sqlstm.sqindv[2] = (         void  *)0;
          sqlstm.sqinds[2] = (         int  )0;
          sqlstm.sqharm[2] = (unsigned int  )0;
          sqlstm.sqharc[2] = (unsigned int   *)0;
          sqlstm.sqadto[2] = (unsigned short )0;
          sqlstm.sqtdso[2] = (unsigned short )0;
          sqlstm.sqhstv[3] = (         void  *)infd;
          sqlstm.sqhstl[3] = (unsigned int  )16;
          sqlstm.sqhsts[3] = (         int  )16;
          sqlstm.sqindv[3] = (         void  *)0;
          sqlstm.sqinds[3] = (         int  )0;
          sqlstm.sqharm[3] = (unsigned int  )0;
          sqlstm.sqharc[3] = (unsigned int   *)0;
          sqlstm.sqadto[3] = (unsigned short )0;
          sqlstm.sqtdso[3] = (unsigned short )0;
          sqlstm.sqhstv[4] = (         void  *)comprobante;
          sqlstm.sqhstl[4] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[4] = (         int  )sizeof(double);
          sqlstm.sqindv[4] = (         void  *)0;
          sqlstm.sqinds[4] = (         int  )0;
          sqlstm.sqharm[4] = (unsigned int  )0;
          sqlstm.sqharc[4] = (unsigned int   *)0;
          sqlstm.sqadto[4] = (unsigned short )0;
          sqlstm.sqtdso[4] = (unsigned short )0;
          sqlstm.sqhstv[5] = (         void  *)consecutivo;
          sqlstm.sqhstl[5] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[5] = (         int  )sizeof(double);
          sqlstm.sqindv[5] = (         void  *)0;
          sqlstm.sqinds[5] = (         int  )0;
          sqlstm.sqharm[5] = (unsigned int  )0;
          sqlstm.sqharc[5] = (unsigned int   *)0;
          sqlstm.sqadto[5] = (unsigned short )0;
          sqlstm.sqtdso[5] = (unsigned short )0;
          sqlstm.sqhstv[6] = (         void  *)clase;
          sqlstm.sqhstl[6] = (unsigned int  )5;
          sqlstm.sqhsts[6] = (         int  )8;
          sqlstm.sqindv[6] = (         void  *)0;
          sqlstm.sqinds[6] = (         int  )0;
          sqlstm.sqharm[6] = (unsigned int  )0;
          sqlstm.sqharc[6] = (unsigned int   *)0;
          sqlstm.sqadto[6] = (unsigned short )0;
          sqlstm.sqtdso[6] = (unsigned short )0;
          sqlstm.sqhstv[7] = (         void  *)descripcion;
          sqlstm.sqhstl[7] = (unsigned int  )43;
          sqlstm.sqhsts[7] = (         int  )44;
          sqlstm.sqindv[7] = (         void  *)0;
          sqlstm.sqinds[7] = (         int  )0;
          sqlstm.sqharm[7] = (unsigned int  )0;
          sqlstm.sqharc[7] = (unsigned int   *)0;
          sqlstm.sqadto[7] = (unsigned short )0;
          sqlstm.sqtdso[7] = (unsigned short )0;
          sqlstm.sqhstv[8] = (         void  *)fecha;
          sqlstm.sqhstl[8] = (unsigned int  )22;
          sqlstm.sqhsts[8] = (         int  )24;
          sqlstm.sqindv[8] = (         void  *)0;
          sqlstm.sqinds[8] = (         int  )0;
          sqlstm.sqharm[8] = (unsigned int  )0;
          sqlstm.sqharc[8] = (unsigned int   *)0;
          sqlstm.sqadto[8] = (unsigned short )0;
          sqlstm.sqtdso[8] = (unsigned short )0;
          sqlstm.sqhstv[9] = (         void  *)tipo;
          sqlstm.sqhstl[9] = (unsigned int  )sizeof(int);
          sqlstm.sqhsts[9] = (         int  )sizeof(int);
          sqlstm.sqindv[9] = (         void  *)0;
          sqlstm.sqinds[9] = (         int  )0;
          sqlstm.sqharm[9] = (unsigned int  )0;
          sqlstm.sqharc[9] = (unsigned int   *)0;
          sqlstm.sqadto[9] = (unsigned short )0;
          sqlstm.sqtdso[9] = (unsigned short )0;
          sqlstm.sqhstv[10] = (         void  *)cuenta;
          sqlstm.sqhstl[10] = (unsigned int  )17;
          sqlstm.sqhsts[10] = (         int  )20;
          sqlstm.sqindv[10] = (         void  *)0;
          sqlstm.sqinds[10] = (         int  )0;
          sqlstm.sqharm[10] = (unsigned int  )0;
          sqlstm.sqharc[10] = (unsigned int   *)0;
          sqlstm.sqadto[10] = (unsigned short )0;
          sqlstm.sqtdso[10] = (unsigned short )0;
          sqlstm.sqhstv[11] = (         void  *)codigo_nit;
          sqlstm.sqhstl[11] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[11] = (         int  )sizeof(double);
          sqlstm.sqindv[11] = (         void  *)0;
          sqlstm.sqinds[11] = (         int  )0;
          sqlstm.sqharm[11] = (unsigned int  )0;
          sqlstm.sqharc[11] = (unsigned int   *)0;
          sqlstm.sqadto[11] = (unsigned short )0;
          sqlstm.sqtdso[11] = (unsigned short )0;
          sqlstm.sqhstv[12] = (         void  *)valor_deb;
          sqlstm.sqhstl[12] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[12] = (         int  )sizeof(double);
          sqlstm.sqindv[12] = (         void  *)0;
          sqlstm.sqinds[12] = (         int  )0;
          sqlstm.sqharm[12] = (unsigned int  )0;
          sqlstm.sqharc[12] = (unsigned int   *)0;
          sqlstm.sqadto[12] = (unsigned short )0;
          sqlstm.sqtdso[12] = (unsigned short )0;
          sqlstm.sqhstv[13] = (         void  *)valor_cre;
          sqlstm.sqhstl[13] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[13] = (         int  )sizeof(double);
          sqlstm.sqindv[13] = (         void  *)0;
          sqlstm.sqinds[13] = (         int  )0;
          sqlstm.sqharm[13] = (unsigned int  )0;
          sqlstm.sqharc[13] = (unsigned int   *)0;
          sqlstm.sqadto[13] = (unsigned short )0;
          sqlstm.sqtdso[13] = (unsigned short )0;
          sqlstm.sqhstv[14] = (         void  *)estado;
          sqlstm.sqhstl[14] = (unsigned int  )4;
          sqlstm.sqhsts[14] = (         int  )4;
          sqlstm.sqindv[14] = (         void  *)0;
          sqlstm.sqinds[14] = (         int  )0;
          sqlstm.sqharm[14] = (unsigned int  )0;
          sqlstm.sqharc[14] = (unsigned int   *)0;
          sqlstm.sqadto[14] = (unsigned short )0;
          sqlstm.sqtdso[14] = (unsigned short )0;
          sqlstm.sqhstv[15] = (         void  *)sucursal;
          sqlstm.sqhstl[15] = (unsigned int  )7;
          sqlstm.sqhsts[15] = (         int  )8;
          sqlstm.sqindv[15] = (         void  *)0;
          sqlstm.sqinds[15] = (         int  )0;
          sqlstm.sqharm[15] = (unsigned int  )0;
          sqlstm.sqharc[15] = (unsigned int   *)0;
          sqlstm.sqadto[15] = (unsigned short )0;
          sqlstm.sqtdso[15] = (unsigned short )0;
          sqlstm.sqhstv[16] = (         void  *)cen_cos;
          sqlstm.sqhstl[16] = (unsigned int  )5;
          sqlstm.sqhsts[16] = (         int  )8;
          sqlstm.sqindv[16] = (         void  *)0;
          sqlstm.sqinds[16] = (         int  )0;
          sqlstm.sqharm[16] = (unsigned int  )0;
          sqlstm.sqharc[16] = (unsigned int   *)0;
          sqlstm.sqadto[16] = (unsigned short )0;
          sqlstm.sqtdso[16] = (unsigned short )0;
          sqlstm.sqhstv[17] = (         void  *)libro;
          sqlstm.sqhstl[17] = (unsigned int  )4;
          sqlstm.sqhsts[17] = (         int  )4;
          sqlstm.sqindv[17] = (         void  *)0;
          sqlstm.sqinds[17] = (         int  )0;
          sqlstm.sqharm[17] = (unsigned int  )0;
          sqlstm.sqharc[17] = (unsigned int   *)0;
          sqlstm.sqadto[17] = (unsigned short )0;
          sqlstm.sqtdso[17] = (unsigned short )0;
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
             else
                if (!strcmp (orden,"F")) {
          /* EXEC SQL FETCH C2C INTO :infa, :infb, :infc, :infd, :comprobante,
                                 :consecutivo,  :clase, :descripcion,
                                 :fecha, :tipo, :cuenta, :codigo_nit,
                                 :valor_deb,    :valor_cre, :estado, :sucursal, :cen_cos, :libro; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 18;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )20;
          sqlstm.offset = (unsigned int  )419;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqfoff = (           int )0;
          sqlstm.sqfmod = (unsigned int )2;
          sqlstm.sqhstv[0] = (         void  *)infa;
          sqlstm.sqhstl[0] = (unsigned int  )16;
          sqlstm.sqhsts[0] = (         int  )16;
          sqlstm.sqindv[0] = (         void  *)0;
          sqlstm.sqinds[0] = (         int  )0;
          sqlstm.sqharm[0] = (unsigned int  )0;
          sqlstm.sqharc[0] = (unsigned int   *)0;
          sqlstm.sqadto[0] = (unsigned short )0;
          sqlstm.sqtdso[0] = (unsigned short )0;
          sqlstm.sqhstv[1] = (         void  *)infb;
          sqlstm.sqhstl[1] = (unsigned int  )16;
          sqlstm.sqhsts[1] = (         int  )16;
          sqlstm.sqindv[1] = (         void  *)0;
          sqlstm.sqinds[1] = (         int  )0;
          sqlstm.sqharm[1] = (unsigned int  )0;
          sqlstm.sqharc[1] = (unsigned int   *)0;
          sqlstm.sqadto[1] = (unsigned short )0;
          sqlstm.sqtdso[1] = (unsigned short )0;
          sqlstm.sqhstv[2] = (         void  *)infc;
          sqlstm.sqhstl[2] = (unsigned int  )16;
          sqlstm.sqhsts[2] = (         int  )16;
          sqlstm.sqindv[2] = (         void  *)0;
          sqlstm.sqinds[2] = (         int  )0;
          sqlstm.sqharm[2] = (unsigned int  )0;
          sqlstm.sqharc[2] = (unsigned int   *)0;
          sqlstm.sqadto[2] = (unsigned short )0;
          sqlstm.sqtdso[2] = (unsigned short )0;
          sqlstm.sqhstv[3] = (         void  *)infd;
          sqlstm.sqhstl[3] = (unsigned int  )16;
          sqlstm.sqhsts[3] = (         int  )16;
          sqlstm.sqindv[3] = (         void  *)0;
          sqlstm.sqinds[3] = (         int  )0;
          sqlstm.sqharm[3] = (unsigned int  )0;
          sqlstm.sqharc[3] = (unsigned int   *)0;
          sqlstm.sqadto[3] = (unsigned short )0;
          sqlstm.sqtdso[3] = (unsigned short )0;
          sqlstm.sqhstv[4] = (         void  *)comprobante;
          sqlstm.sqhstl[4] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[4] = (         int  )sizeof(double);
          sqlstm.sqindv[4] = (         void  *)0;
          sqlstm.sqinds[4] = (         int  )0;
          sqlstm.sqharm[4] = (unsigned int  )0;
          sqlstm.sqharc[4] = (unsigned int   *)0;
          sqlstm.sqadto[4] = (unsigned short )0;
          sqlstm.sqtdso[4] = (unsigned short )0;
          sqlstm.sqhstv[5] = (         void  *)consecutivo;
          sqlstm.sqhstl[5] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[5] = (         int  )sizeof(double);
          sqlstm.sqindv[5] = (         void  *)0;
          sqlstm.sqinds[5] = (         int  )0;
          sqlstm.sqharm[5] = (unsigned int  )0;
          sqlstm.sqharc[5] = (unsigned int   *)0;
          sqlstm.sqadto[5] = (unsigned short )0;
          sqlstm.sqtdso[5] = (unsigned short )0;
          sqlstm.sqhstv[6] = (         void  *)clase;
          sqlstm.sqhstl[6] = (unsigned int  )5;
          sqlstm.sqhsts[6] = (         int  )8;
          sqlstm.sqindv[6] = (         void  *)0;
          sqlstm.sqinds[6] = (         int  )0;
          sqlstm.sqharm[6] = (unsigned int  )0;
          sqlstm.sqharc[6] = (unsigned int   *)0;
          sqlstm.sqadto[6] = (unsigned short )0;
          sqlstm.sqtdso[6] = (unsigned short )0;
          sqlstm.sqhstv[7] = (         void  *)descripcion;
          sqlstm.sqhstl[7] = (unsigned int  )43;
          sqlstm.sqhsts[7] = (         int  )44;
          sqlstm.sqindv[7] = (         void  *)0;
          sqlstm.sqinds[7] = (         int  )0;
          sqlstm.sqharm[7] = (unsigned int  )0;
          sqlstm.sqharc[7] = (unsigned int   *)0;
          sqlstm.sqadto[7] = (unsigned short )0;
          sqlstm.sqtdso[7] = (unsigned short )0;
          sqlstm.sqhstv[8] = (         void  *)fecha;
          sqlstm.sqhstl[8] = (unsigned int  )22;
          sqlstm.sqhsts[8] = (         int  )24;
          sqlstm.sqindv[8] = (         void  *)0;
          sqlstm.sqinds[8] = (         int  )0;
          sqlstm.sqharm[8] = (unsigned int  )0;
          sqlstm.sqharc[8] = (unsigned int   *)0;
          sqlstm.sqadto[8] = (unsigned short )0;
          sqlstm.sqtdso[8] = (unsigned short )0;
          sqlstm.sqhstv[9] = (         void  *)tipo;
          sqlstm.sqhstl[9] = (unsigned int  )sizeof(int);
          sqlstm.sqhsts[9] = (         int  )sizeof(int);
          sqlstm.sqindv[9] = (         void  *)0;
          sqlstm.sqinds[9] = (         int  )0;
          sqlstm.sqharm[9] = (unsigned int  )0;
          sqlstm.sqharc[9] = (unsigned int   *)0;
          sqlstm.sqadto[9] = (unsigned short )0;
          sqlstm.sqtdso[9] = (unsigned short )0;
          sqlstm.sqhstv[10] = (         void  *)cuenta;
          sqlstm.sqhstl[10] = (unsigned int  )17;
          sqlstm.sqhsts[10] = (         int  )20;
          sqlstm.sqindv[10] = (         void  *)0;
          sqlstm.sqinds[10] = (         int  )0;
          sqlstm.sqharm[10] = (unsigned int  )0;
          sqlstm.sqharc[10] = (unsigned int   *)0;
          sqlstm.sqadto[10] = (unsigned short )0;
          sqlstm.sqtdso[10] = (unsigned short )0;
          sqlstm.sqhstv[11] = (         void  *)codigo_nit;
          sqlstm.sqhstl[11] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[11] = (         int  )sizeof(double);
          sqlstm.sqindv[11] = (         void  *)0;
          sqlstm.sqinds[11] = (         int  )0;
          sqlstm.sqharm[11] = (unsigned int  )0;
          sqlstm.sqharc[11] = (unsigned int   *)0;
          sqlstm.sqadto[11] = (unsigned short )0;
          sqlstm.sqtdso[11] = (unsigned short )0;
          sqlstm.sqhstv[12] = (         void  *)valor_deb;
          sqlstm.sqhstl[12] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[12] = (         int  )sizeof(double);
          sqlstm.sqindv[12] = (         void  *)0;
          sqlstm.sqinds[12] = (         int  )0;
          sqlstm.sqharm[12] = (unsigned int  )0;
          sqlstm.sqharc[12] = (unsigned int   *)0;
          sqlstm.sqadto[12] = (unsigned short )0;
          sqlstm.sqtdso[12] = (unsigned short )0;
          sqlstm.sqhstv[13] = (         void  *)valor_cre;
          sqlstm.sqhstl[13] = (unsigned int  )sizeof(double);
          sqlstm.sqhsts[13] = (         int  )sizeof(double);
          sqlstm.sqindv[13] = (         void  *)0;
          sqlstm.sqinds[13] = (         int  )0;
          sqlstm.sqharm[13] = (unsigned int  )0;
          sqlstm.sqharc[13] = (unsigned int   *)0;
          sqlstm.sqadto[13] = (unsigned short )0;
          sqlstm.sqtdso[13] = (unsigned short )0;
          sqlstm.sqhstv[14] = (         void  *)estado;
          sqlstm.sqhstl[14] = (unsigned int  )4;
          sqlstm.sqhsts[14] = (         int  )4;
          sqlstm.sqindv[14] = (         void  *)0;
          sqlstm.sqinds[14] = (         int  )0;
          sqlstm.sqharm[14] = (unsigned int  )0;
          sqlstm.sqharc[14] = (unsigned int   *)0;
          sqlstm.sqadto[14] = (unsigned short )0;
          sqlstm.sqtdso[14] = (unsigned short )0;
          sqlstm.sqhstv[15] = (         void  *)sucursal;
          sqlstm.sqhstl[15] = (unsigned int  )7;
          sqlstm.sqhsts[15] = (         int  )8;
          sqlstm.sqindv[15] = (         void  *)0;
          sqlstm.sqinds[15] = (         int  )0;
          sqlstm.sqharm[15] = (unsigned int  )0;
          sqlstm.sqharc[15] = (unsigned int   *)0;
          sqlstm.sqadto[15] = (unsigned short )0;
          sqlstm.sqtdso[15] = (unsigned short )0;
          sqlstm.sqhstv[16] = (         void  *)cen_cos;
          sqlstm.sqhstl[16] = (unsigned int  )5;
          sqlstm.sqhsts[16] = (         int  )8;
          sqlstm.sqindv[16] = (         void  *)0;
          sqlstm.sqinds[16] = (         int  )0;
          sqlstm.sqharm[16] = (unsigned int  )0;
          sqlstm.sqharc[16] = (unsigned int   *)0;
          sqlstm.sqadto[16] = (unsigned short )0;
          sqlstm.sqtdso[16] = (unsigned short )0;
          sqlstm.sqhstv[17] = (         void  *)libro;
          sqlstm.sqhstl[17] = (unsigned int  )4;
          sqlstm.sqhsts[17] = (         int  )4;
          sqlstm.sqindv[17] = (         void  *)0;
          sqlstm.sqinds[17] = (         int  )0;
          sqlstm.sqharm[17] = (unsigned int  )0;
          sqlstm.sqharc[17] = (unsigned int   *)0;
          sqlstm.sqadto[17] = (unsigned short )0;
          sqlstm.sqtdso[17] = (unsigned short )0;
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

          staora  = sqlca.sqlcode;
          if (staora == -1405)
              staora  = 0;
          else if (staora)
                   fprintf (stderr, "Error leyendo C2 (%d)\n", staora);

/*
          printf("inicio <%d>, codigo_emp<%s>, ano_mes<%s>, tipo_ini<%s>, tipo_fin<%s>, cmp_ini<%s>, cmp_fin<%s>, librob<%s>,  comprobante=<%10.0f> consecutivo=<%10.0f>\n",staora, codigo_emp.arr, ano_mes.arr, tipo_ini.arr, tipo_fin.arr, cmp_ini.arr, cmp_fin.arr, librob.arr, comprobante, consecutivo); getchar();
*/

          if (traidos == 0) {
              tipo_an        = tipo[0];
              consecutivo_an = consecutivo[0];
          }

          traidos = sqlca.sqlerrd[2];

          for (loop_2 = 0; loop_2 < (traidos - num_ret); loop_2++) {
              infa       [loop_2].arr  [infa       [loop_2].len] = '\0';
              infb       [loop_2].arr  [infb       [loop_2].len] = '\0';
              infc       [loop_2].arr  [infc       [loop_2].len] = '\0';
              infd       [loop_2].arr  [infd       [loop_2].len] = '\0';
              clase      [loop_2].arr  [clase      [loop_2].len] = '\0';
              descripcion[loop_2].arr  [descripcion[loop_2].len] = '\0';
              fecha      [loop_2].arr  [fecha      [loop_2].len] = '\0';
              cuenta     [loop_2].arr  [cuenta     [loop_2].len] = '\0';
              estado     [loop_2].arr  [estado     [loop_2].len] = '\0';
              sucursal   [loop_2].arr  [sucursal   [loop_2].len] = '\0';
              cen_cos    [loop_2].arr  [cen_cos    [loop_2].len] = '\0';
              libro      [loop_2].arr  [libro      [loop_2].len] = '\0';

              strcpy (vecmov[0], infa[loop_2].arr);
              strcpy (vecmov[1], infb[loop_2].arr);
              strcpy (vecmov[2], infc[loop_2].arr);
              strcpy (vecmov[3], infd[loop_2].arr);

              lista_movto();
              if (!strcmp(asiento,"s"))
                  if (strcmp(estado[loop_2].arr, "2")) {
                      if (consecutivo_an != consecutivo[loop_2]) {
                          voy_marco_movto();
                          consecutivo_an = consecutivo[loop_2];
                      }
                      nrec++;
                      if (nrec >= 100) {
                          /* EXEC SQL COMMIT; */ 

{
                          struct sqlexd sqlstm;
                          sqlstm.sqlvsn = 12;
                          sqlstm.arrsiz = 18;
                          sqlstm.sqladtp = &sqladt;
                          sqlstm.sqltdsp = &sqltds;
                          sqlstm.iters = (unsigned int  )1;
                          sqlstm.offset = (unsigned int  )506;
                          sqlstm.cud = sqlcud0;
                          sqlstm.sqlest = (unsigned char  *)&sqlca;
                          sqlstm.sqlety = (unsigned short)256;
                          sqlstm.occurs = (unsigned int  )0;
                          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                          nrec = 0;
                      }
                  }
          }
          num_ret = traidos;
    }
    voy_marco_movto();
    if (!strcmp (orden,"T")) {
       /* EXEC SQL CLOSE C2A; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 12;
       sqlstm.arrsiz = 18;
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
    else
       if (!strcmp (orden,"C")) {
          /* EXEC SQL CLOSE C2B; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 18;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )536;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


       }
       else
          if (!strcmp (orden,"F")) {
             /* EXEC SQL CLOSE C2C; */ 

{
             struct sqlexd sqlstm;
             sqlstm.sqlvsn = 12;
             sqlstm.arrsiz = 18;
             sqlstm.sqladtp = &sqladt;
             sqlstm.sqltdsp = &sqltds;
             sqlstm.iters = (unsigned int  )1;
             sqlstm.offset = (unsigned int  )551;
             sqlstm.cud = sqlcud0;
             sqlstm.sqlest = (unsigned char  *)&sqlca;
             sqlstm.sqlety = (unsigned short)256;
             sqlstm.occurs = (unsigned int  )0;
             sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


          }

/*****************************************
** COMMIT LOS CAMBIOS A LA BASE DE DATOS *
******************************************/

    if (strcmp(asiento,"s"))
        totales();

    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 18;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )566;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    cierre_impresora();

    exit   (0);
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 extern char mes[12][12];
 char   fecha_s[40];
 double decimal;
 fecha_system(fecha_s);
 con_pag++;
 doble=atof(codigo_emp.arr);
 num=doble/2;
 decimal=modf(num,&x);
 if (doble==1)
    decimal=0;
 if (decimal==0)
     fprintf(fp,"%s",salte_pagina);
 else fprintf(fp,"%s.",salte_pagina);
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
     fprintf(fp,"%s\n\n",ancho_off);
     if (strcmp(timbrado,"s"))
        fprintf(fp,"%s%s%s%-44s%s%10s / %d",diezcpi,condensado_on,"FECHA PROCESO : ",fecha_s,"PERIODO : ",mes[mesi-1],anoi);
     else
        fprintf(fp,"%s%s%s%-44s%s%10s / %d",diezcpi,condensado_on,"                "," "    ,"PERIODO : ",mes[mesi-1],anoi);
 }
 else {
      fprintf(fp,"%s%s%s%-44s%s%10s / %d",diezcpi,condensado_on,"                "," ","PERIODO : ",mes[mesi-1],anoi);
 }
 fprintf(fp,"%48s %d\n\n","PAGINA ",con_pag);
 fprintf(fp,"%89s","   CUENTA  DESCRIPCION                             FECHA/SC/CC TC CL  DOCUM.    INFA/INFC");
 fprintf(fp,"%48s\n\n","    INFB/INFD        DEBITOS       CREDITOS  CNS");
 con_lin = 6;
}

void lista_movto()
{
char	wcadena[80];

/*         printf("lista_movto\n"); getchar();*/

         strcpy  (cuentab.arr, cuenta[loop_2].arr);
         cuentab.len = strlen(cuentab.arr);

         strcpy  (sucursalb.arr, sucursal[loop_2].arr);
         sucursalb.len = strlen(sucursalb.arr);

         strcpy  (cen_cosb.arr, cen_cos[loop_2].arr);
         cen_cosb.len = strlen(cen_cosb.arr);

         strcpy  (librob.arr, libro[loop_2].arr);
         librob.len = strlen(librob.arr);

         if (strcmp(estado[loop_2].arr, "2")) {

            /* EXEC SQL select infa, infb, infc, infd
                            into :veca, :vecb, :vecc, :vecd
                     from   plan
                     where  codigo_emp = (:codigo_emp) and
                            cuenta     = (:cuentab); */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 12;
            sqlstm.arrsiz = 18;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b\
3  from plan where (codigo_emp=:b4 and cuenta=:b5)";
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )581;
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
            sqlstm.sqhstl[5] = (unsigned int  )17;
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

            nomb_nit.arr[0] = '\0';
            if (codigo_nit[loop_2] != 970) {
               /* EXEC SQL select nombre
                        into :nomb_nit
                        from  nits
                        where codigo_nit = :codigo_nit[loop_2]; */ 

{
               struct sqlexd sqlstm;
               sqlstm.sqlvsn = 12;
               sqlstm.arrsiz = 18;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.stmt = "select nombre into :b0  from nits where codigo\
_nit=:b1";
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )620;
               sqlstm.selerr = (unsigned short)1;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)256;
               sqlstm.occurs = (unsigned int  )0;
               sqlstm.sqhstv[0] = (         void  *)&nomb_nit;
               sqlstm.sqhstl[0] = (unsigned int  )53;
               sqlstm.sqhsts[0] = (         int  )0;
               sqlstm.sqindv[0] = (         void  *)0;
               sqlstm.sqinds[0] = (         int  )0;
               sqlstm.sqharm[0] = (unsigned int  )0;
               sqlstm.sqadto[0] = (unsigned short )0;
               sqlstm.sqtdso[0] = (unsigned short )0;
               sqlstm.sqhstv[1] = (         void  *)&codigo_nit[loop_2];
               sqlstm.sqhstl[1] = (unsigned int  )sizeof(double);
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


               nomb_nit.arr[nomb_nit.len] = '\0';
               if (sqlca.sqlcode == 1403)
                  printf ("Codigo_Nit (%10.0f) no existe en Cuenta(%s)\n", codigo_nit,cuentab.arr);
            }

            veca.arr[veca.len] = '\0';
            vecb.arr[vecb.len] = '\0';
            vecc.arr[vecc.len] = '\0';
            vecd.arr[vecd.len] = '\0';
            strcpy (vecplan[0], veca.arr);
            strcpy (vecplan[1], vecb.arr);
            strcpy (vecplan[2], vecc.arr);
            strcpy (vecplan[3], vecd.arr);

         }
         strcpy(codigo.arr,"0");
         codigo.len = strlen(codigo.arr);
         if (strcmp(estado[loop_2].arr, "2")) {
            i=j=0;
            for (i=0;i<4;i++) {
                for (j=0;j<k;j++) {
                    if (!strcmp(vecplan[i],vecinf[j].arr)) {
                        strcpy(codigo.arr,vecmov[i]);
                        codigo.len = strlen(codigo.arr);
/*
                        if (!strcmp(cuentab.arr,"11100505")) {
                           fprintf(stderr,"codigo=%s, comprobante=%8.0f, cns=%5.0f\n",codigo.arr,comprobante[loop_2],consecutivo[loop_2]);
                        }
*/
                    }
                }
            }
         }


         if (strcmp(asiento,"s")) {
             if (tipo_an != tipo[loop_2] && !strcmp(orden,"T"))
                totales_cpt();
             if (con_lin > 60)
                 titulos();
             fprintf (fp,"%-11s",fmtnum(" 99999999",cuenta[loop_2].arr,r_t));
             fprintf (fp,"%-41s",descripcion[loop_2].arr);
             strcpy  (cadena,fecha[loop_2].arr);
             strcpy  (wcadena, cadena);
             numero_fechaf(wcadena);
             strcpy  (cadena, wcadena);
             fprintf (fp,"%s ",cadena);
             fprintf (fp,"%02d ",tipo[loop_2]);
             fprintf (fp,"%-3s",clase[loop_2].arr);
             sprintf (cadena,"%8.0f",comprobante[loop_2]);
             fprintf (fp,"%-9s",fmtnum("zzzzzzz9",cadena,r_t));
             fprintf (fp,"%12s",vecmov[0]);
             fprintf (fp,"%12s",vecmov[1]);
             sprintf (cadena,"%9.2f",valor_deb[loop_2]);
             fprintf (fp,"%15s",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
             sprintf (cadena,"%9.2f",valor_cre[loop_2]);
             fprintf (fp,"%15s",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
             sprintf (cadena,"%5f",consecutivo[loop_2]);
             fprintf (fp,"%5s\n",fmtnum("z,zzz",cadena,r_t));
             if (codigo_nit[loop_2] > 0)
                fprintf (fp,"%-13s%-41s"," ",nomb_nit.arr);

             fprintf (fp,"%03s",sucursalb.arr);
             fprintf (fp,"%4s%2s"," ",cen_cosb.arr);
             fprintf (fp,"%26s",vecmov[2]);
             fprintf (fp,"%13s\n",vecmov[3]);
             tot_deb[0] += valor_deb[loop_2];
             tot_deb[1] += valor_deb[loop_2];
             tot_cre[0] += valor_cre[loop_2];
             tot_cre[1] += valor_cre[loop_2];
             con_lin +=2;
         }
         if (strcmp(estado[loop_2].arr,"2")) {
             if (!strcmp(asiento,"s")) {
                 actualizo();
                 if (codigo_nit[loop_2] > 0 || strcmp(codigo.arr,"0")) {
                     if (!memcmp(cuenta[loop_2].arr,"130505",6)) {
                         if (codigo_nit[loop_2] > 0 &&
                             !strcmp(cuenta[loop_2].arr,"13050501") &&
                             (!strcmp(codigo_emp.arr,"1") ||
                              !strcmp(codigo_emp.arr,"2")
                             || !strcmp(codigo_emp.arr,"3"))){
                             strcpy(codigo.arr,"13050501");
                             codigo.len = strlen(codigo.arr);
                             codigo_nitb=970;
                         }
                         else if (codigo_nit[loop_2] > 0 &&
                                !strcmp(cuenta[loop_2].arr,"13050590") &&
                                (!strcmp(codigo_emp.arr,"1") ||
                                 !strcmp(codigo_emp.arr,"2")
                                || !strcmp(codigo_emp.arr,"3"))){
                                strcpy(codigo.arr,"13050590");
                                codigo.len = strlen(codigo.arr);
                                codigo_nitb=970;
                              }
                              else {
                                   if (codigo_nit[loop_2] > 0 && strcmp(codigo.arr,"0")) {
                                       if (!strcmp(cuenta[loop_2].arr,"13050525") || 
                                           !strcmp(cuenta[loop_2].arr,"13050526")) {
                                           codigo_nitb=codigo_nit[loop_2];
                                       }
                                       else {
                                            strcpy(codigo.arr,cuenta[loop_2].arr);
                                            codigo.len = strlen(codigo.arr);
                                            codigo_nitb=970;
                                       }   
                                   }
                                   else {
                                         if (codigo_nit[loop_2] > 0 &&
                                            (!strcmp(cuenta[loop_2].arr,"13050501") ||
                                             !strcmp(cuenta[loop_2].arr,"13050590"))){
                                             codigo_nitb=codigo_nit[loop_2];
                                         }
                                         else {
                                              codigo_nitb=codigo_nit[loop_2];
                                        }
                                   }
                              }
                     }
                     else if (codigo_nit[loop_2]==0)
                             codigo_nitb=970;
                          else codigo_nitb=codigo_nit[loop_2];
                     actualizo_nit();
                 }
             }
         }
}

void totales_cpt()
{
  if (con_lin > 60)
      titulos();
  fprintf (fp,"\n%102s","Totales comprobante ========================> ");
  sprintf (cadena,"%9.2f",tot_deb[0]);
  fprintf (fp,"%17s",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  sprintf (cadena,"%9.2f",tot_cre[0]);
  fprintf (fp,"%17s\n\n",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  if (tot_deb[0] != tot_cre[0])  {
      fprintf (fp,"\n%102s","****  MOVIMIENTO DESCUADRADO ****  ===========> ");
      sprintf (cadena,"%9.2f",tot_deb[0]-tot_cre[0]);
      fprintf (fp,"%17s\n",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
      con_lin++;
  }
  fprintf (fp,"\n");
  tot_deb[0]=0;
  tot_cre[0]=0;
  tipo_an=tipo[loop_2];
  con_lin +=3;
}

void totales()
{
  if (con_lin > 60)
      titulos();
  if (!strcmp(orden,"T"))
      totales_cpt();
  fprintf (fp,"\n%102s","Total del movimiento listado ===============> ");
  sprintf (cadena,"%9.2f",tot_deb[1]);
  fprintf (fp,"%17s",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  sprintf (cadena,"%9.2f",tot_cre[1]);
  fprintf (fp,"%17s\n\n",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  if (tot_deb[1] != tot_cre[1])  {
      fprintf (fp,"\n%102s","****  MOVIMIENTO DESCUADRADO ****  ===========> ");
      sprintf (cadena,"%9.2f",tot_deb[1]-tot_cre[1]);
      fprintf (fp,"%17s\n",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  }
  fprintf (fp,"\n\n\nPROCESADO POR : ______________________  REVISADO POR : ______________________");
  if (!strcmp(asiento,"s")) {
      strupp(login);
      actualizo_cntrl();
      fprintf (fp,"    ASIENTO # %02d%02d-%05.0f  HECHO POR : %s",anoi,mesi,cons+1,login);
  }
  fprintf (fp,"\n");
  con_lin +=7;
}

void actualizo()
{
/* printf("actualizo\n"); */
     /* EXEC SQL select 'x' into :cuentax
	            from   acumulados
              where  codigo_emp       = to_number(:codigo_emp)  and
                     ano_mes          = to_number(:ano_mes)     and
                     cuenta           =          (:cuentab)     and
                     sucursal         =          (:sucursalb)   and
                     cen_cos          = to_number(:cen_cosb)    and
                     libro            = to_number(:librob); */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 18;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select 'x' into :b0  from acumulados where (((((codigo_e\
mp=to_number(:b1) and ano_mes=to_number(:b2)) and cuenta=:b3) and sucursal=:b4\
) and cen_cos=to_number(:b5)) and libro=to_number(:b6))";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )643;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&cuentax;
     sqlstm.sqhstl[0] = (unsigned int  )17;
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
     sqlstm.sqhstv[3] = (         void  *)&cuentab;
     sqlstm.sqhstl[3] = (unsigned int  )17;
     sqlstm.sqhsts[3] = (         int  )0;
     sqlstm.sqindv[3] = (         void  *)0;
     sqlstm.sqinds[3] = (         int  )0;
     sqlstm.sqharm[3] = (unsigned int  )0;
     sqlstm.sqadto[3] = (unsigned short )0;
     sqlstm.sqtdso[3] = (unsigned short )0;
     sqlstm.sqhstv[4] = (         void  *)&sucursalb;
     sqlstm.sqhstl[4] = (unsigned int  )5;
     sqlstm.sqhsts[4] = (         int  )0;
     sqlstm.sqindv[4] = (         void  *)0;
     sqlstm.sqinds[4] = (         int  )0;
     sqlstm.sqharm[4] = (unsigned int  )0;
     sqlstm.sqadto[4] = (unsigned short )0;
     sqlstm.sqtdso[4] = (unsigned short )0;
     sqlstm.sqhstv[5] = (         void  *)&cen_cosb;
     sqlstm.sqhstl[5] = (unsigned int  )7;
     sqlstm.sqhsts[5] = (         int  )0;
     sqlstm.sqindv[5] = (         void  *)0;
     sqlstm.sqinds[5] = (         int  )0;
     sqlstm.sqharm[5] = (unsigned int  )0;
     sqlstm.sqadto[5] = (unsigned short )0;
     sqlstm.sqtdso[5] = (unsigned short )0;
     sqlstm.sqhstv[6] = (         void  *)&librob;
     sqlstm.sqhstl[6] = (unsigned int  )4;
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
        voy_ins_acumulados();
     else if (!sqlca.sqlcode) voy_actu_acumulados();
          else if (sqlca.sqlcode != -1400)
                   printf("Error cuenta = (%-s) rutina actualizo (%d)\n",cuentab.arr, sqlca.sqlcode);

}

void voy_ins_acumulados()
{
 /*printf("voy_ins_acumulados");*/
 /* EXEC SQL insert into acumulados
          values (:codigo_emp, :ano_mes, :cuentab, 0, 0, :sucursalb, :cen_cosb, :librob); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into acumulados  values (:b0,:b1,:b2,0,0,:b3,:b4,:b5)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )686;
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
 sqlstm.sqhstv[2] = (         void  *)&cuentab;
 sqlstm.sqhstl[2] = (unsigned int  )17;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&sucursalb;
 sqlstm.sqhstl[3] = (unsigned int  )5;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&cen_cosb;
 sqlstm.sqhstl[4] = (unsigned int  )7;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&librob;
 sqlstm.sqhstl[5] = (unsigned int  )4;
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


 if (sqlca.sqlcode == 0) voy_actu_acumulados();
 else if (sqlca.sqlcode != -1400)
          printf("Error cuenta = (%-s) rutina voy_ins_acumulados (%d)\n",cuentab.arr, sqlca.sqlcode);
}

void voy_actu_acumulados()
{
 /*printf("voy_actu_acumulados");*/
  wval_deb = valor_deb[loop_2];
  wval_cre = valor_cre[loop_2];

  /* EXEC SQL update acumulados
           set   valor_deb      = valor_deb + :wval_deb,
                 valor_cre      = valor_cre + :wval_cre
           where codigo_emp     = to_number(:codigo_emp) and
                 ano_mes        = to_number(:ano_mes)    and
                 cuenta         = to_number(:cuentab)    and
                 sucursal       =          (:sucursalb)  and
                 cen_cos        = to_number(:cen_cosb)   and
                 libro          = to_number(:librob); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update acumulados  set valor_deb=(valor_deb+:b0),valor_cre=\
(valor_cre+:b1) where (((((codigo_emp=to_number(:b2) and ano_mes=to_number(:b3\
)) and cuenta=to_number(:b4)) and sucursal=:b5) and cen_cos=to_number(:b6)) an\
d libro=to_number(:b7))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )725;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&wval_deb;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(double);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&wval_cre;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(double);
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
  sqlstm.sqhstv[4] = (         void  *)&cuentab;
  sqlstm.sqhstl[4] = (unsigned int  )17;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&sucursalb;
  sqlstm.sqhstl[5] = (unsigned int  )5;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&cen_cosb;
  sqlstm.sqhstl[6] = (unsigned int  )7;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&librob;
  sqlstm.sqhstl[7] = (unsigned int  )4;
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



 if (sqlca.sqlcode) {
     if (sqlca.sqlcode != -1400)
          printf("Error cuenta = (%-s) rutina voy_actu_acumulados (%d)\n",cuentab.arr, sqlca.sqlcode);
 }
}

void voy_marco_movto()
{
  /* EXEC SQL update movto_c set    estado = '9'
           where  codigo_emp   = to_number(:codigo_emp) and
                  tipo        >=          (:tipo_ini)   and
                  tipo        <=          (:tipo_fin)   and
                  comprobante >= to_number(:cmp_ini)    and
                  comprobante <= to_number(:cmp_fin)    and
                  ano_mes      = to_number(:ano_mes)    and
                  consecutivo  = :consecutivo_an        and
                  estado      <> '2'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update movto_c  set estado='9' where (((((((codigo_emp=to_n\
umber(:b0) and tipo>=:b1) and tipo<=:b2) and comprobante>=to_number(:b3)) and \
comprobante<=to_number(:b4)) and ano_mes=to_number(:b5)) and consecutivo=:b6) \
and estado<>'2')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )772;
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
  sqlstm.sqhstv[1] = (         void  *)&tipo_ini;
  sqlstm.sqhstl[1] = (unsigned int  )12;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&tipo_fin;
  sqlstm.sqhstl[2] = (unsigned int  )12;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&cmp_ini;
  sqlstm.sqhstl[3] = (unsigned int  )22;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&cmp_fin;
  sqlstm.sqhstl[4] = (unsigned int  )22;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&ano_mes;
  sqlstm.sqhstl[5] = (unsigned int  )22;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&consecutivo_an;
  sqlstm.sqhstl[6] = (unsigned int  )sizeof(double);
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


// printf("voy_marco_movto codigo_emp %s tipo_ini %s tipo_fin %s cmp_ini %s cmp_fin %s ano_mes %s sqlca.sqlcode %d\n", codigo_emp.arr, tipo_ini.arr, tipo_fin.arr, cmp_ini.arr, cmp_fin.arr, ano_mes.arr, sqlca.sqlcode); getchar();

 if (sqlca.sqlcode) printf("Error rutina voy_marco_movto (%d)\n",
                           sqlca.sqlcode);
}

void actualizo_nit()
{
/* printf("actualizo_nit\n");*/
     /* EXEC SQL select cuenta into :cuentax
	            from   acumulanit
              where  codigo_emp       = to_number(:codigo_emp)  and
                     ano_mes          = to_number(:ano_mes)     and
                     cuenta           = to_number(:cuentab)     and
                     codigo           =          (:codigo)      and
                     codigo_nit       =           :codigo_nitb  and
                     sucursal         =          (:sucursalb)   and
                     cen_cos          = to_number(:cen_cosb)    and
                     libro            = to_number(:librob); */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 18;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select cuenta into :b0  from acumulanit where (((((((cod\
igo_emp=to_number(:b1) and ano_mes=to_number(:b2)) and cuenta=to_number(:b3)) \
and codigo=:b4) and codigo_nit=:b5) and sucursal=:b6) and cen_cos=to_number(:b\
7)) and libro=to_number(:b8))";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )815;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&cuentax;
     sqlstm.sqhstl[0] = (unsigned int  )17;
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
     sqlstm.sqhstv[3] = (         void  *)&cuentab;
     sqlstm.sqhstl[3] = (unsigned int  )17;
     sqlstm.sqhsts[3] = (         int  )0;
     sqlstm.sqindv[3] = (         void  *)0;
     sqlstm.sqinds[3] = (         int  )0;
     sqlstm.sqharm[3] = (unsigned int  )0;
     sqlstm.sqadto[3] = (unsigned short )0;
     sqlstm.sqtdso[3] = (unsigned short )0;
     sqlstm.sqhstv[4] = (         void  *)&codigo;
     sqlstm.sqhstl[4] = (unsigned int  )17;
     sqlstm.sqhsts[4] = (         int  )0;
     sqlstm.sqindv[4] = (         void  *)0;
     sqlstm.sqinds[4] = (         int  )0;
     sqlstm.sqharm[4] = (unsigned int  )0;
     sqlstm.sqadto[4] = (unsigned short )0;
     sqlstm.sqtdso[4] = (unsigned short )0;
     sqlstm.sqhstv[5] = (         void  *)&codigo_nitb;
     sqlstm.sqhstl[5] = (unsigned int  )sizeof(double);
     sqlstm.sqhsts[5] = (         int  )0;
     sqlstm.sqindv[5] = (         void  *)0;
     sqlstm.sqinds[5] = (         int  )0;
     sqlstm.sqharm[5] = (unsigned int  )0;
     sqlstm.sqadto[5] = (unsigned short )0;
     sqlstm.sqtdso[5] = (unsigned short )0;
     sqlstm.sqhstv[6] = (         void  *)&sucursalb;
     sqlstm.sqhstl[6] = (unsigned int  )5;
     sqlstm.sqhsts[6] = (         int  )0;
     sqlstm.sqindv[6] = (         void  *)0;
     sqlstm.sqinds[6] = (         int  )0;
     sqlstm.sqharm[6] = (unsigned int  )0;
     sqlstm.sqadto[6] = (unsigned short )0;
     sqlstm.sqtdso[6] = (unsigned short )0;
     sqlstm.sqhstv[7] = (         void  *)&cen_cosb;
     sqlstm.sqhstl[7] = (unsigned int  )7;
     sqlstm.sqhsts[7] = (         int  )0;
     sqlstm.sqindv[7] = (         void  *)0;
     sqlstm.sqinds[7] = (         int  )0;
     sqlstm.sqharm[7] = (unsigned int  )0;
     sqlstm.sqadto[7] = (unsigned short )0;
     sqlstm.sqtdso[7] = (unsigned short )0;
     sqlstm.sqhstv[8] = (         void  *)&librob;
     sqlstm.sqhstl[8] = (unsigned int  )4;
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



     if (sqlca.sqlcode == 1403) voy_ins_acumulanit();
     else if (sqlca.sqlcode == 0) voy_actu_acumulanit();
          else if (sqlca.sqlcode != -1400)
                   printf("Error cuenta = (%-s) rutina voy_actu_acumulados\n (%d)",cuentab.arr, sqlca.sqlcode);
}

void voy_ins_acumulanit()
{
 /*printf("voy_ins_acumulanit");*/
  /* EXEC SQL insert into acumulanit
        values (:codigo_emp, :ano_mes, :cuentab, :codigo, :codigo_nitb, 0, 0, :sucursalb, :cen_cosb, :librob); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into acumulanit  values (:b0,:b1,:b2,:b3,:b4,0,0,:b5\
,:b6,:b7)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )866;
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
  sqlstm.sqhstv[2] = (         void  *)&cuentab;
  sqlstm.sqhstl[2] = (unsigned int  )17;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&codigo;
  sqlstm.sqhstl[3] = (unsigned int  )17;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&codigo_nitb;
  sqlstm.sqhstl[4] = (unsigned int  )sizeof(double);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&sucursalb;
  sqlstm.sqhstl[5] = (unsigned int  )5;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&cen_cosb;
  sqlstm.sqhstl[6] = (unsigned int  )7;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&librob;
  sqlstm.sqhstl[7] = (unsigned int  )4;
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



  if (sqlca.sqlcode == 0) voy_actu_acumulanit();
  else if (sqlca.sqlcode != -1400)
           printf("Error cuenta = (%-s) rutina voy_ins_acumulanit (%d)\n",cuentab.arr, sqlca.sqlcode);
}

void voy_actu_acumulanit()
{
  /* EXEC SQL update acumulanit
              set   valor_deb = valor_deb + :wval_deb,
                    valor_cre = valor_cre + :wval_cre
           where codigo_emp     = to_number(:codigo_emp)  and
                 ano_mes        = to_number(:ano_mes)     and
                 cuenta         = to_number(:cuentab)     and
                 codigo         =          (:codigo)      and
                 codigo_nit     =           :codigo_nitb  and
                 sucursal       =          (:sucursalb)   and
                 cen_cos        = to_number(:cen_cosb)    and
                 libro          = to_number(:librob); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update acumulanit  set valor_deb=(valor_deb+:b0),valor_cre=\
(valor_cre+:b1) where (((((((codigo_emp=to_number(:b2) and ano_mes=to_number(:\
b3)) and cuenta=to_number(:b4)) and codigo=:b5) and codigo_nit=:b6) and sucurs\
al=:b7) and cen_cos=to_number(:b8)) and libro=to_number(:b9))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )913;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&wval_deb;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(double);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&wval_cre;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(double);
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
  sqlstm.sqhstv[4] = (         void  *)&cuentab;
  sqlstm.sqhstl[4] = (unsigned int  )17;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&codigo;
  sqlstm.sqhstl[5] = (unsigned int  )17;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&codigo_nitb;
  sqlstm.sqhstl[6] = (unsigned int  )sizeof(double);
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&sucursalb;
  sqlstm.sqhstl[7] = (unsigned int  )5;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&cen_cosb;
  sqlstm.sqhstl[8] = (unsigned int  )7;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&librob;
  sqlstm.sqhstl[9] = (unsigned int  )4;
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


 if (sqlca.sqlcode) {
    if (sqlca.sqlcode != -1400)
        printf("Error cuenta = (%-s) rutina voy_actu_acumulanit (%d)\n",cuentab.arr, sqlca.sqlcode);
 }
/*
printf("vald=%10.0f,valc=%10.0f,coemp=%s,aamm=%s,ctab=%s,cod=%s,conitb=%10.0f\n",wval_deb,wval_cre,codigo_emp.arr,ano_mes.arr,cuentab.arr,codigo.arr,codigo_nitb);getchar();
*/
}

void actualizo_cntrl()
{
 /*printf("actualizo_cntrl\n");*/
  /* EXEC SQL select consecutivo into :cons
	         from   control_mes
           where  fuente           = 10                      and
                  ano_mes          = to_number(:ano_mes)     and
                  codigo_emp       = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=10 and ano_mes=to_number(:b1)) and codigo_emp=to_number(:b2))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )968;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&cons;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(double);
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


  if (sqlca.sqlcode == 1403) voy_ins_actualizocnt();
  else if (sqlca.sqlcode == 0) voy_actu_actualizocnt();
       else printf("Error rutina actualizo_cntrl (%d)\n", sqlca.sqlcode);
}

void voy_ins_actualizocnt()
{
 /*printf("voy_ins_actualizocnt");*/
  /* EXEC SQL insert into control_mes
        values (10, :ano_mes, 'ASIENTOS CONTABLES', 1, :codigo_emp,0); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into control_mes  values (10,:b0,'ASIENTOS CONTABLES\
',1,:b1,0)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )995;
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



  if (sqlca.sqlcode == 0) voy_actu_actualizocnt();
  else printf("Error rutina voy_ins_actualizocnt (%d)\n", sqlca.sqlcode);
}

void voy_actu_actualizocnt()
{
 /*printf("voy_actu_actualizocnt");*/
   /* EXEC SQL update control_mes
	          set consecutivo = :cons + 1
            where  fuente           = 10                     and
                   ano_mes          = to_number(:ano_mes)    and
                   codigo_emp       = to_number(:codigo_emp); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 18;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update control_mes  set consecutivo=(:b0+1) where ((fuente\
=10 and ano_mes=to_number(:b1)) and codigo_emp=to_number(:b2))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1018;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&cons;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(double);
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



  if (sqlca.sqlcode) printf("Error rutina voy_actu_actualizocnt (%d)\n",
                             sqlca.sqlcode);
}
