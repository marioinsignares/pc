
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
    ".\\perdygan.pc"
};


static unsigned long sqlctx = 533819;


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

 static const char *sq0009 = 
"select inf  from infacu            ";

 static const char *sq0005 = 
"select p.cuenta ,p.nombre ,db_cr ,columna ,totalizo ,acumule ,nivel ,indenta\
cion ,efectos ,nvl(valor,0) ,salto ,raya ,ptaje ,cuenta_r ,imprime_cta  from p\
lan p ,secuencia s where (((p.codigo_emp=:b0 and s.cuenta=p.cuenta) and s.clas\
e='PYG') and s.codigo_emp=p.codigo_emp) group by p.cuenta,p.nombre,db_cr,colum\
na,totalizo,acumule,nivel,consecutivo,indentacion,efectos,valor,salto,raya,pta\
je,cuenta_r,imprime_cta order by s.consecutivo            ";

 static const char *sq0008 = 
"select c.consecutivo  from movto_c c ,movto_d d where ((((((((c.codigo_emp=t\
o_number(:b0) and c.comprobante=999) and c.clase='CD') and c.tipo='7') and c.a\
no_mes=to_number(:b1)) and c.codigo_emp=d.codigo_emp) and c.ano_mes=d.ano_mes)\
 and c.consecutivo=d.consecutivo) and d.libro=to_number(:b2)) group by c.conse\
cutivo           ";

 static const char *sq0006 = 
"select a.cuenta ,a.codigo ,a.codigo_nit ,n.nit ,((nvl(sum(valor_deb),0)-nvl(\
sum(valor_cre),0))* (-1)) ,a.sucursal ,a.cen_cos  from acumulanit a ,secuencia\
 s ,nits n where (((((((((((((a.codigo_emp=:b0 and a.ano_mes>=:b1) and a.ano_m\
es<=:b2) and a.cuenta like (s.cuenta||'%')) and substr(s.cuenta,1,1)<>'0') and\
 a.codigo_emp=s.codigo_emp) and a.codigo_nit=n.codigo_nit(+)) and a.libro=to_n\
umber(:b3)) and a.sucursal>=:b4) and a.sucursal<=:b5) and a.cen_cos>=to_number\
(:b6)) and a.cen_cos<=to_number(:b7)) and s.clase='PYG') and s.valor is null )\
 group by s.cuenta,a.cuenta,a.sucursal,a.cen_cos,a.codigo,a.codigo_nit,n.nit,s\
.consecutivo order by s.consecutivo,n.nit,a.codigo            ";

 static const char *sq0007 = 
"select nvl(s.cuenta_r,s.cuenta) ,s.codigo_r ,s.codigo_nit_r ,n.nit ,(s.valor\
* (-1)) ,sucursal ,cen_cos  from secuencia s ,nits n where (((s.codigo_emp=:b0\
 and s.valor is  not null ) and s.clase='PYG') and s.codigo_nit_r=n.codigo_nit\
(+))           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,247,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,140,0,4,299,0,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
67,0,0,3,88,0,4,311,0,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
94,0,0,4,88,0,4,325,0,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
121,0,0,9,35,0,9,405,0,0,0,0,0,1,0,
136,0,0,9,0,0,13,410,0,0,1,0,0,1,0,2,9,0,0,
155,0,0,9,0,0,15,420,0,0,0,0,0,1,0,
170,0,0,10,0,0,30,427,0,0,0,0,0,1,0,
185,0,0,5,446,0,9,476,0,0,1,1,0,1,0,1,9,0,0,
204,0,0,5,0,0,13,479,0,0,15,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,3,0,0,2,
3,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,4,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,
279,0,0,11,377,0,4,557,0,0,13,11,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
346,0,0,12,377,0,4,581,0,0,13,11,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
413,0,0,13,377,0,4,622,0,0,13,11,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
480,0,0,5,0,0,15,743,0,0,0,0,0,1,0,
495,0,0,14,118,0,5,764,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
522,0,0,8,327,0,9,783,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
549,0,0,8,0,0,13,784,0,0,1,0,0,1,0,2,3,0,0,
568,0,0,8,0,0,15,785,0,0,0,0,0,1,0,
583,0,0,15,109,0,2,803,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
614,0,0,16,160,0,4,815,0,0,5,4,0,1,0,2,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
649,0,0,17,324,0,2,825,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
680,0,0,18,112,0,2,846,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
707,0,0,19,112,0,2,856,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
734,0,0,20,340,0,3,870,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
769,0,0,21,396,0,3,883,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
804,0,0,22,165,0,4,899,0,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
835,0,0,23,132,0,3,912,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
866,0,0,24,117,0,5,925,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
897,0,0,25,161,0,4,939,0,0,4,3,0,1,0,2,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
928,0,0,26,132,0,3,947,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
959,0,0,27,161,0,4,956,0,0,4,3,0,1,0,2,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
990,0,0,28,117,0,5,967,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1021,0,0,6,684,0,9,978,0,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,
1068,0,0,29,235,0,3,982,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1099,0,0,6,0,0,13,1007,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,4,0,0,2,
9,0,0,2,9,0,0,
1142,0,0,30,347,0,3,1053,0,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
1217,0,0,6,0,0,15,1107,0,0,0,0,0,1,0,
1232,0,0,7,247,0,9,1111,0,0,1,1,0,1,0,1,9,0,0,
1251,0,0,7,0,0,13,1115,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,4,0,0,2,
9,0,0,2,9,0,0,
1294,0,0,31,347,0,3,1151,0,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
1369,0,0,7,0,0,15,1208,0,0,0,0,0,1,0,
1384,0,0,32,394,0,5,1217,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,
1423,0,0,33,446,0,5,1233,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,
1462,0,0,34,99,0,4,1254,0,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,
1,9,0,0,
1501,0,0,35,99,0,4,1296,0,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,
1,9,0,0,
};


/*****************************************************************
* PERDYGAN.C Version 1.0 - Rev 1.2 - Jun. 30/92.
*
* perdygan.c. Perdida y ganancias
*
* Uso: perdygan codigo_emp aamm device copias userid/password\n");
*
* Mario E. Santiago I. Creado en Marzo 19 de 1.994.
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
void imprime_acumulados();
void actualizo_secuencia();
void hacer_cierre();
void cierre_ejercicio();
void ver_inf();
void ver_inf2();

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;


/* VARCHAR nomb_emp   [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_emp;

double  nit;
int     digito;
/* VARCHAR codigo_emp [4]; */ 
struct { unsigned short len; unsigned char arr[4]; } codigo_emp;


                                            /* Variables globales del usuario */
char    pagina[4];                                   /* Contador de Paginas */
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                   /* Contador de Lineas  */
int     cl;
/* VARCHAR ano_mesi[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR ano_mes13[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes13;

/* VARCHAR ano_mes[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

int     oraestn;
int     oraestx;
int     oraestd;
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[255];
double  secuencia;
int     diai;
int     mesi;
int     anoi;

/* Columnas de la tabla Plan y Secuencia */

/* VARCHAR cuenta     [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuenta;

/* VARCHAR nombre_cta [72]; */ 
struct { unsigned short len; unsigned char arr[72]; } nombre_cta;

/* VARCHAR db_cr      [09]; */ 
struct { unsigned short len; unsigned char arr[9]; } db_cr;

/* VARCHAR imprime_cta[09]; */ 
struct { unsigned short len; unsigned char arr[9]; } imprime_cta;

/* VARCHAR libro      [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } libro;

/* VARCHAR cuenta_r   [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuenta_r;

/* VARCHAR raya       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } raya;

double  valor;
float   ptaje;
int     columna;
int     totalizo;
int     acumule;
int     nivel;
int     indentacion;
int     efectos;
int     salto;

int     i, j, k;
union efec {
      int  efec_ent;
      struct  efec_imp {
        unsigned clear_buffer : 1;
        unsigned subrayado    : 1;
        unsigned alto         : 1;
        unsigned enfatizado   : 1;
        unsigned ancho        : 1;
        unsigned condensado   : 1;
        unsigned elite        : 1;
        unsigned diezcpi      : 1;
      } efec_char;
} efec_u;

/* Columnas de la tabla Acumulados */

/* VARCHAR nivelb [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } nivelb;

/* VARCHAR cuentab[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuentab;

double  valor_deb;
double  valor_cre;

/* Columnas de la tabla Movto_c */

/* VARCHAR fechab      [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } fechab;

/* VARCHAR consecutivob[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } consecutivob;


/* Columnas de la tabla Movto_d */

/* VARCHAR secuenciab [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } secuenciab;

/* VARCHAR infa       [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } infa;

/* VARCHAR infb       [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } infb;

/* VARCHAR infc       [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } infc;

/* VARCHAR infd       [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } infd;

/* VARCHAR codigo_nitb[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_nitb;

/* VARCHAR valor_debb [25]; */ 
struct { unsigned short len; unsigned char arr[25]; } valor_debb;

/* VARCHAR valor_creb [25]; */ 
struct { unsigned short len; unsigned char arr[25]; } valor_creb;

char    inf        [5][15];

/* Columnas de la tabla Control_mes */

/* VARCHAR fuenteb  [9]; */ 
struct { unsigned short len; unsigned char arr[9]; } fuenteb;

double  consecutivo;
int  consecutivo11;

/* Columnas de la tabla Control_mes */

/* VARCHAR codigo   [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } codigo;

double  nitn;
int     codigo_nit;

/* Columnas de la tabla Infacu */

/* VARCHAR info     [25]; */ 
struct { unsigned short len; unsigned char arr[25]; } info;


/* Columnas de la tabla Plan */

/* VARCHAR vecplana [25]; */ 
struct { unsigned short len; unsigned char arr[25]; } vecplana;

/* VARCHAR vecplanb [25]; */ 
struct { unsigned short len; unsigned char arr[25]; } vecplanb;

/* VARCHAR vecplanc [25]; */ 
struct { unsigned short len; unsigned char arr[25]; } vecplanc;

/* VARCHAR vecpland [25]; */ 
struct { unsigned short len; unsigned char arr[25]; } vecpland;

char    vecplan  [5][25];

/* Columnas de Update Secuencias */

/* VARCHAR valorb   [26]; */ 
struct { unsigned short len; unsigned char arr[26]; } valorb;

/* VARCHAR cuenta_rb[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuenta_rb;


/* Columnas de Update Secuencias */

/* VARCHAR cuenta_rs[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuenta_rs;

/* VARCHAR codigo_rs[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } codigo_rs;


double  capital;
double  reserva;
double  reservan;
double  imporrenta;
double  total[10];
char    cadena[240];
char    cadena2[240];
char    cadena3[240];
char    cadena4[240];
char    cadena5[240];
char    cadenon[240];
char    login[220];
char    copias[5];
char    cierre[2];
char    vecinf[20][24];
char    timbrado[2];

/* sucursales y c.costo */

/* VARCHAR sucursal   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } sucursal;

/* VARCHAR cen_cos    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cen_cos;

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


/* VARCHAR sucursalb  [05]; */ 
struct { unsigned short len; unsigned char arr[5]; } sucursalb;

/* VARCHAR cen_cosb   [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } cen_cosb;

/* VARCHAR sucursal_rs[05]; */ 
struct { unsigned short len; unsigned char arr[5]; } sucursal_rs;

/* VARCHAR cen_cos_rs [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } cen_cos_rs;

int     cuantos;

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


extern double redondo();

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	staora;
int	status = 0;

    if (argc < 13)
       {
	      printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp sucursali sucursalf c.costoi c.costof aaaamm copias pagina device cierre(#) timbrado(s/n) libro(0= COLGAAP 1=IFRS) userid/password\n");
      	printf ("      cierre : 0=Solo imprime el G Y P\n");
      	printf ("      cierre : 1=Hace el movimiento del cierre\n");
      	printf ("      cierre : 2=Hace la actualizacion de los saldos\n");
      	printf ("      cierre : 3=P Y G de un mes\n\n");
      	printf ("      device : t salida por terminal\n");
      	printf ("      device : s salida standar     \n");
        printf ("      libro(0= COLGAAP 1=IFRS)\n");
      	printf ("               Px salida por impresora (x nro printer)\n");
      	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr,     argv[1]);
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
       strcpy (pagina,         argv[8]);
       strcpy (device,         argv[9]);
       strlow (device);
       strcpy (cierre,         argv[10]);
       strcpy (timbrado,       argv[11]);
       strlow (timbrado);
       strcpy (libro.arr, argv[12]);
       libro.len =        strlen(libro.arr);

    if (!strpos ("/", argv[13]))
       {
        printf ("user id/password incorrecto.\n");
	      exit (1);
       }

    strcpy (uid.arr,    argv[13]);
    uid.len = strlen(uid.arr);

/*
*****************************************************
* Establecer conexion concurrente con ORACLE (orlon) *
*****************************************************
*/

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

/*
**********************************************
* Pasa la sentencia SQL a ORACLE. (osql3).    *
* e identifica la localizacion y tipo  de  un *
* area en el programa para recuperar datos de *
* ORACLE. (odefin).                           *
**********************************************
*/
    strcpy (ano_mes.arr,   argv[6]);
    ano_mes.len =          strlen(ano_mes.arr);

    strcpy (cadena,ano_mes.arr);
    strorg (cadena,1,4);
    anoi         =          atoi(cadena);

    strcpy (cadena,ano_mes.arr);
    strorg (cadena,5,2);
    mesi         =          atoi(cadena);

    if (!strcmp(cierre,"3")) {
       sprintf (ano_mesi.arr,"%d%02d",anoi,mesi);
       ano_mesi.len = strlen(ano_mesi.arr);
       sprintf (ano_mes13.arr,"%d%02d",anoi,mesi);
       ano_mes13.len = strlen(ano_mes13.arr);
       }
    else {
       sprintf (ano_mesi.arr,"%d%02d",anoi-1,13);
       ano_mesi.len = strlen(ano_mesi.arr);
       sprintf (ano_mes13.arr,"%d%02d",anoi,13);
       ano_mes13.len = strlen(ano_mes13.arr);
    }
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



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Empresa (%d)\n", sqlca.sqlcode);


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



    if (sqlca.sqlcode == 0)
        nomb_emp.arr [nomb_emp.len] = '\0';

    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Sucursalf=%s (%d)\n",sucursalf.arr, sqlca.sqlcode);

     /* EXEC SQL DECLARE C2 CURSOR FOR
              select p.cuenta, p.nombre, db_cr, columna,
                     totalizo, acumule, nivel, indentacion, efectos,
                     nvl(valor,0), salto, raya, ptaje, cuenta_r, imprime_cta
              from   plan p, secuencia s
              where  p.codigo_emp = :codigo_emp and
                     s.cuenta     = p.cuenta          and
                     s.clase      = 'PYG'                and
                     s.codigo_emp = p.codigo_emp
              group by p.cuenta, p.nombre, db_cr, columna, totalizo,
                       acumule, nivel, consecutivo, indentacion, efectos,
                       valor, salto, raya, ptaje, cuenta_r, imprime_cta
              order by s.consecutivo; */ 


      /* EXEC SQL DECLARE C9 CURSOR FOR
               select a.cuenta, a.codigo, a.codigo_nit, n.nit,
                      (nvl(sum(valor_deb),0)-nvl(sum(valor_cre),0))*-1,
                      a.sucursal, a.cen_cos
               from   acumulanit a, secuencia s, nits n
               where  a.codigo_emp = :codigo_emp                and
                      a.ano_mes   >= :ano_mesi                  and
                      a.ano_mes   <= :ano_mes                   and
                      a.cuenta like s.cuenta||'%'               and
                      substr(s.cuenta,1,1) <> '0'               and
                      a.codigo_emp = s.codigo_emp               and
                      a.codigo_nit = n.codigo_nit(+)            and
                      a.libro      = to_number(:libro)          and
        	            a.sucursal  >= (:sucursali)               and
                      a.sucursal  <= (:sucursalf)               and
                      a.cen_cos   >= to_number(:cen_cosi)       and
                      a.cen_cos   <= to_number(:cen_cosf)       and
                      s.clase      = 'PYG'                      and
                      s.valor     is NULL
               group by s.cuenta, a.cuenta, a.sucursal, a.cen_cos, a.codigo, a.codigo_nit,
                      n.nit, s.consecutivo
               order by s.consecutivo, n.nit, a.codigo; */ 


      /* EXEC SQL DECLARE C23 CURSOR FOR
               select nvl(s.cuenta_r,s.cuenta), s.codigo_r, s.codigo_nit_r,
                      n.nit, s.valor*-1, sucursal, cen_cos
               from   secuencia s, nits n
               where  s.codigo_emp    =      :codigo_emp and
                      s.valor         is not NULL          and
                      s.clase         = 'PYG'              and
                      s.codigo_nit_r  = n.codigo_nit(+); */ 


      /* EXEC SQL DECLARE C27 CURSOR FOR
              select c.consecutivo
              from movto_c c, movto_d d
              where c.codigo_emp   = to_number(:codigo_emp)   and
                    c.comprobante  = 999                      and
                    c.clase        = 'CD'                     and
                    c.tipo         = '7'                      and
                    c.ano_mes      = to_number(:ano_mes13)    and
                    c.codigo_emp   = d.codigo_emp             and
                    c.ano_mes      = d.ano_mes                and
                    c.consecutivo  = d.consecutivo            and
                    d.libro        = to_number(:libro)
              group by c.consecutivo; */ 



    imprime_acumulados();

    cierre_impresora();

    /* EXEC SQL DECLARE C10 CURSOR FOR
                     select inf from infacu; */ 


    /* EXEC SQL OPEN C10; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0009;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )121;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora = 0;
    k=0;
    while (!staora) {
          /* EXEC SQL FETCH C10 INTO :info; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )136;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (         void  *)&info;
          sqlstm.sqhstl[0] = (unsigned int  )27;
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
          if (staora) break;

          info.arr [info.len] = '\0';
          strcpy(vecinf[k], info.arr);
          k++;
    }

    /* EXEC SQL CLOSE C10; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )155;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (!strcmp(cierre,"1"))
       hacer_cierre();
    if (!strcmp(cierre,"2"))
       cierre_ejercicio();

    /* EXEC SQL commit WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )170;
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
     if (atoi(pagina)>con_pag)
         return;
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
     fprintf(fp,"\n%20s%s%s\n\n"," ","     ESTADO DE RESULTADO     ",ancho_off);
     fecha_system(cadena);
     fprintf(fp,"%s%s%-44s%s%10s / %d",condensado_on,"FECHA PROCESO : ",cadena,"PERIODO : ",mes[mesi-1],anoi);
     fprintf(fp,"%54s %d%s\n\n","PAGINA ",con_pag,elite);
 }
 else {
     fprintf(fp,"%s%30s%s%10s / %d%41s %d\n\n",elite," ","PERIODO : ",mes[mesi-1],anoi,"PAGINA ",con_pag);
 }
 con_lin = 6;
}

void imprime_acumulados()
{
double valor_tempo;
int	staora;

    staora = 0;
    /* EXEC SQL OPEN C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0005;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )185;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
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



 while (!staora) {
    /* EXEC SQL FETCH C2 INTO :cuenta,   :nombre_cta, :db_cr, :columna,
                           :totalizo, :acumule,    :nivel, :indentacion,
                           :efectos,  :valor,      :salto, :raya,
                           :ptaje,    :cuenta_r,   :imprime_cta; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 15;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )204;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&cuenta;
    sqlstm.sqhstl[0] = (unsigned int  )17;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&nombre_cta;
    sqlstm.sqhstl[1] = (unsigned int  )74;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&db_cr;
    sqlstm.sqhstl[2] = (unsigned int  )11;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&columna;
    sqlstm.sqhstl[3] = (unsigned int  )4;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&totalizo;
    sqlstm.sqhstl[4] = (unsigned int  )4;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&acumule;
    sqlstm.sqhstl[5] = (unsigned int  )4;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&nivel;
    sqlstm.sqhstl[6] = (unsigned int  )4;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (         void  *)&indentacion;
    sqlstm.sqhstl[7] = (unsigned int  )4;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         void  *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned int  )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (         void  *)&efectos;
    sqlstm.sqhstl[8] = (unsigned int  )4;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         void  *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned int  )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (         void  *)&valor;
    sqlstm.sqhstl[9] = (unsigned int  )8;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         void  *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned int  )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (         void  *)&salto;
    sqlstm.sqhstl[10] = (unsigned int  )4;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         void  *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned int  )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (         void  *)&raya;
    sqlstm.sqhstl[11] = (unsigned int  )22;
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         void  *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned int  )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (         void  *)&ptaje;
    sqlstm.sqhstl[12] = (unsigned int  )4;
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         void  *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned int  )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (         void  *)&cuenta_r;
    sqlstm.sqhstl[13] = (unsigned int  )17;
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         void  *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned int  )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (         void  *)&imprime_cta;
    sqlstm.sqhstl[14] = (unsigned int  )11;
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



      staora = sqlca.sqlcode;
      if (sqlca.sqlcode == 1403) break;
      if (sqlca.sqlcode == -1405) staora = 0;

      cuenta.arr      [cuenta.len]      = '\0';
      nombre_cta.arr  [nombre_cta.len]  = '\0';
      db_cr.arr       [db_cr.len]       = '\0';
      raya.arr        [raya.len]        = '\0';
      cuenta_r.arr    [cuenta_r.len]    = '\0';
      imprime_cta.arr [imprime_cta.len] = '\0';


      if (con_lin > 60) titulos();
      strcpy(cadena2,"");
      if (!strcmp(imprime_cta.arr,"S")) {
          if (strcmp(cuenta_r.arr,"")) {
              sprintf (cadena2,"%-9s",cuenta_r.arr);
              strorg  (cadena2,1,6);
              sprintf (cadena2,"%-9s",cadena2);
          }
          else {
                sprintf (cadena2,"%-9s",cuenta.arr);
                strorg  (cadena2,1,6);
                sprintf (cadena2,"%-9s",cadena2);
          }
      }
      strful  (cadena3,(int)(indentacion),' ');
      strcpy  (cadenon,cadena3);
      strcat  (cadenon,cadena2);
      sprintf (cadena2,"%-50s",nombre_cta.arr);
      strcat  (cadenon,cadena2);
      strcpy  (cadena3,"");
      strcpy  (cadena4,"");
      strcpy  (cadena5,"");
      efec_u.efec_ent = efectos;
      if (!memcmp(cuenta.arr,"0",1)) {
         /* if (efec_u.efec_char.diezcpi) {
              strcpy(cadena4,diezcpi);
          }*/
          if (efec_u.efec_char.elite) {
              strcpy(cadena4,elite);
              strcpy(cadena5,diezcpi);
          }
          if (efec_u.efec_char.condensado) {
              strcpy(cadena4,condensado_on);
              strcpy(cadena5,condensado_off);
          }
          if (efec_u.efec_char.ancho) {
              strcpy(cadena4,ancho_on);
              strcpy(cadena5,ancho_off);
          }
          if (efec_u.efec_char.enfatizado) {
              strcpy(cadena4,enfatizado_on);
              strcpy(cadena5,enfatizado_off);
          }
          if (efec_u.efec_char.alto) {
              strcpy(cadena4,alto_on);
              strcpy(cadena5,alto_off);
          }
          if (efec_u.efec_char.subrayado) {
              strcat(cadena4,subrayado_on);
              strcat(cadena5,subrayado_off);
          }
          if (efec_u.efec_char.clear_buffer) {
              strcpy(cadena4,clear_buffer);
          }
          if (totalizo == 0) {
              if (!memcmp(cuenta_r.arr,"330505",6)) {
                  strcpy(cuentab.arr,"3115");
                  cuentab.len = strlen(cuentab.arr);
                  sprintf(nivelb.arr,"%d",2);
                  nivelb.len = strlen(nivelb.arr);

               /* EXEC SQL select nvl(sum(valor_deb),0), nvl(sum(valor_cre),0)
                               into :valor_deb, :valor_cre
                        from acumulados
                        where codigo_emp   = to_number(:codigo_emp)       and
                              ano_mes     >= to_number(:ano_mesi  )       and
                              ano_mes     <= to_number(:ano_mes   )       and
                              libro        = to_number(:libro)            and
       	                      sucursal    >= (:sucursali)                 and
                              sucursal    <= (:sucursalf)                 and
                              cen_cos     >= to_number(:cen_cosi)         and
                              cen_cos     <= to_number(:cen_cosf)         and
                              substr(cuenta,1,decode(to_number(:nivelb),0,1,
                                                     to_number(:nivelb)*2))
                                           = :cuentab; */ 

{
               struct sqlexd sqlstm;

               sqlstm.sqlvsn = 10;
               sqlstm.arrsiz = 15;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.stmt = "select nvl(sum(valor_deb),0) ,nvl(sum(valor_cr\
e),0) into :b0,:b1  from acumulados where ((((((((codigo_emp=to_number(:b2) an\
d ano_mes>=to_number(:b3)) and ano_mes<=to_number(:b4)) and libro=to_number(:b\
5)) and sucursal>=:b6) and sucursal<=:b7) and cen_cos>=to_number(:b8)) and cen\
_cos<=to_number(:b9)) and substr(cuenta,1,decode(to_number(:b10),0,1,(to_numbe\
r(:b10)* 2)))=:b12)";
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )279;
               sqlstm.selerr = (unsigned short)1;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)256;
               sqlstm.occurs = (unsigned int  )0;
               sqlstm.sqhstv[0] = (         void  *)&valor_deb;
               sqlstm.sqhstl[0] = (unsigned int  )8;
               sqlstm.sqhsts[0] = (         int  )0;
               sqlstm.sqindv[0] = (         void  *)0;
               sqlstm.sqinds[0] = (         int  )0;
               sqlstm.sqharm[0] = (unsigned int  )0;
               sqlstm.sqadto[0] = (unsigned short )0;
               sqlstm.sqtdso[0] = (unsigned short )0;
               sqlstm.sqhstv[1] = (         void  *)&valor_cre;
               sqlstm.sqhstl[1] = (unsigned int  )8;
               sqlstm.sqhsts[1] = (         int  )0;
               sqlstm.sqindv[1] = (         void  *)0;
               sqlstm.sqinds[1] = (         int  )0;
               sqlstm.sqharm[1] = (unsigned int  )0;
               sqlstm.sqadto[1] = (unsigned short )0;
               sqlstm.sqtdso[1] = (unsigned short )0;
               sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
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
               sqlstm.sqhstv[5] = (         void  *)&libro;
               sqlstm.sqhstl[5] = (unsigned int  )6;
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
               sqlstm.sqhstv[10] = (         void  *)&nivelb;
               sqlstm.sqhstl[10] = (unsigned int  )7;
               sqlstm.sqhsts[10] = (         int  )0;
               sqlstm.sqindv[10] = (         void  *)0;
               sqlstm.sqinds[10] = (         int  )0;
               sqlstm.sqharm[10] = (unsigned int  )0;
               sqlstm.sqadto[10] = (unsigned short )0;
               sqlstm.sqtdso[10] = (unsigned short )0;
               sqlstm.sqhstv[11] = (         void  *)&nivelb;
               sqlstm.sqhstl[11] = (unsigned int  )7;
               sqlstm.sqhsts[11] = (         int  )0;
               sqlstm.sqindv[11] = (         void  *)0;
               sqlstm.sqinds[11] = (         int  )0;
               sqlstm.sqharm[11] = (unsigned int  )0;
               sqlstm.sqadto[11] = (unsigned short )0;
               sqlstm.sqtdso[11] = (unsigned short )0;
               sqlstm.sqhstv[12] = (         void  *)&cuentab;
               sqlstm.sqhstl[12] = (unsigned int  )17;
               sqlstm.sqhsts[12] = (         int  )0;
               sqlstm.sqindv[12] = (         void  *)0;
               sqlstm.sqinds[12] = (         int  )0;
               sqlstm.sqharm[12] = (unsigned int  )0;
               sqlstm.sqadto[12] = (unsigned short )0;
               sqlstm.sqtdso[12] = (unsigned short )0;
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
                  printf ("Error leyendo acumulados E1 (%d)\n",sqlca.sqlcode);

                  capital=(valor_cre-valor_deb)*.5;
                  strcpy(cuentab.arr,"330505");
                  cuentab.len = strlen(cuentab.arr);
                  sprintf(nivelb.arr,"%d",3);
                  nivelb.len  = strlen(nivelb.arr);

               /* EXEC SQL select nvl(sum(valor_deb),0), nvl(sum(valor_cre),0)
                               into :valor_deb, :valor_cre
                        from acumulados
                        where codigo_emp   = to_number(:codigo_emp)       and
                              ano_mes     >= to_number(:ano_mesi  )       and
                              ano_mes     <= to_number(:ano_mes   )       and
                              libro        = to_number(:libro)            and
       	                      sucursal    >= (:sucursali)                 and
                              sucursal    <= (:sucursalf)                 and
                              cen_cos     >= to_number(:cen_cosi)         and
                              cen_cos     <= to_number(:cen_cosf)         and
                              substr(cuenta,1,decode(to_number(:nivelb),0,1,
                                                     to_number(:nivelb)*2))
                                           = :cuentab; */ 

{
               struct sqlexd sqlstm;

               sqlstm.sqlvsn = 10;
               sqlstm.arrsiz = 15;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.stmt = "select nvl(sum(valor_deb),0) ,nvl(sum(valor_cr\
e),0) into :b0,:b1  from acumulados where ((((((((codigo_emp=to_number(:b2) an\
d ano_mes>=to_number(:b3)) and ano_mes<=to_number(:b4)) and libro=to_number(:b\
5)) and sucursal>=:b6) and sucursal<=:b7) and cen_cos>=to_number(:b8)) and cen\
_cos<=to_number(:b9)) and substr(cuenta,1,decode(to_number(:b10),0,1,(to_numbe\
r(:b10)* 2)))=:b12)";
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )346;
               sqlstm.selerr = (unsigned short)1;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)256;
               sqlstm.occurs = (unsigned int  )0;
               sqlstm.sqhstv[0] = (         void  *)&valor_deb;
               sqlstm.sqhstl[0] = (unsigned int  )8;
               sqlstm.sqhsts[0] = (         int  )0;
               sqlstm.sqindv[0] = (         void  *)0;
               sqlstm.sqinds[0] = (         int  )0;
               sqlstm.sqharm[0] = (unsigned int  )0;
               sqlstm.sqadto[0] = (unsigned short )0;
               sqlstm.sqtdso[0] = (unsigned short )0;
               sqlstm.sqhstv[1] = (         void  *)&valor_cre;
               sqlstm.sqhstl[1] = (unsigned int  )8;
               sqlstm.sqhsts[1] = (         int  )0;
               sqlstm.sqindv[1] = (         void  *)0;
               sqlstm.sqinds[1] = (         int  )0;
               sqlstm.sqharm[1] = (unsigned int  )0;
               sqlstm.sqadto[1] = (unsigned short )0;
               sqlstm.sqtdso[1] = (unsigned short )0;
               sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
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
               sqlstm.sqhstv[5] = (         void  *)&libro;
               sqlstm.sqhstl[5] = (unsigned int  )6;
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
               sqlstm.sqhstv[10] = (         void  *)&nivelb;
               sqlstm.sqhstl[10] = (unsigned int  )7;
               sqlstm.sqhsts[10] = (         int  )0;
               sqlstm.sqindv[10] = (         void  *)0;
               sqlstm.sqinds[10] = (         int  )0;
               sqlstm.sqharm[10] = (unsigned int  )0;
               sqlstm.sqadto[10] = (unsigned short )0;
               sqlstm.sqtdso[10] = (unsigned short )0;
               sqlstm.sqhstv[11] = (         void  *)&nivelb;
               sqlstm.sqhstl[11] = (unsigned int  )7;
               sqlstm.sqhsts[11] = (         int  )0;
               sqlstm.sqindv[11] = (         void  *)0;
               sqlstm.sqinds[11] = (         int  )0;
               sqlstm.sqharm[11] = (unsigned int  )0;
               sqlstm.sqadto[11] = (unsigned short )0;
               sqlstm.sqtdso[11] = (unsigned short )0;
               sqlstm.sqhstv[12] = (         void  *)&cuentab;
               sqlstm.sqhstl[12] = (unsigned int  )17;
               sqlstm.sqhsts[12] = (         int  )0;
               sqlstm.sqindv[12] = (         void  *)0;
               sqlstm.sqinds[12] = (         int  )0;
               sqlstm.sqharm[12] = (unsigned int  )0;
               sqlstm.sqadto[12] = (unsigned short )0;
               sqlstm.sqtdso[12] = (unsigned short )0;
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
                  printf ("Error leyendo acumulados E2 (%d)\n",sqlca.sqlcode);

                  reserva=(valor_cre-valor_deb);
                  /*if (capital > reserva)
                      fprintf (fp,"%s%-44s%s",cadena4,cadenon,cadena5); */
              }
              else if(memcmp(cuenta_r.arr,"330505",6) &&
                      memcmp(cuenta_r.arr,"240405",6))
                       fprintf (fp,"%s%-44s%s",cadena4,cadenon,cadena5);
          }
      }
      else {
            if (valor != 0) {
               if (valor==-.001) {
                   valor=0;
               }
               valor_deb=valor;
               valor_cre=0;
            }
            else {
                  strcpy(cuentab.arr,cuenta.arr);
                  cuentab.len = strlen(cuentab.arr);
                  sprintf(nivelb.arr,"%d",nivel);
                  nivelb.len = strlen(nivelb.arr);

               /* EXEC SQL select nvl(sum(valor_deb),0), nvl(sum(valor_cre),0)
                               into :valor_deb, :valor_cre
                        from acumulados
                        where codigo_emp   = to_number(:codigo_emp)       and
                              ano_mes     >= to_number(:ano_mesi  )       and
                              ano_mes     <= to_number(:ano_mes   )       and
       	                      sucursal    >= (:sucursali)                 and
                              sucursal    <= (:sucursalf)                 and
                              libro        = to_number(:libro)            and
                              cen_cos     >= to_number(:cen_cosi)         and
                              cen_cos     <= to_number(:cen_cosf)         and
                              substr(cuenta,1,decode(to_number(:nivelb),0,1,
                                                     to_number(:nivelb)*2))
                                           = :cuentab; */ 

{
               struct sqlexd sqlstm;

               sqlstm.sqlvsn = 10;
               sqlstm.arrsiz = 15;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.stmt = "select nvl(sum(valor_deb),0) ,nvl(sum(valor_cr\
e),0) into :b0,:b1  from acumulados where ((((((((codigo_emp=to_number(:b2) an\
d ano_mes>=to_number(:b3)) and ano_mes<=to_number(:b4)) and sucursal>=:b5) and\
 sucursal<=:b6) and libro=to_number(:b7)) and cen_cos>=to_number(:b8)) and cen\
_cos<=to_number(:b9)) and substr(cuenta,1,decode(to_number(:b10),0,1,(to_numbe\
r(:b10)* 2)))=:b12)";
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )413;
               sqlstm.selerr = (unsigned short)1;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)256;
               sqlstm.occurs = (unsigned int  )0;
               sqlstm.sqhstv[0] = (         void  *)&valor_deb;
               sqlstm.sqhstl[0] = (unsigned int  )8;
               sqlstm.sqhsts[0] = (         int  )0;
               sqlstm.sqindv[0] = (         void  *)0;
               sqlstm.sqinds[0] = (         int  )0;
               sqlstm.sqharm[0] = (unsigned int  )0;
               sqlstm.sqadto[0] = (unsigned short )0;
               sqlstm.sqtdso[0] = (unsigned short )0;
               sqlstm.sqhstv[1] = (         void  *)&valor_cre;
               sqlstm.sqhstl[1] = (unsigned int  )8;
               sqlstm.sqhsts[1] = (         int  )0;
               sqlstm.sqindv[1] = (         void  *)0;
               sqlstm.sqinds[1] = (         int  )0;
               sqlstm.sqharm[1] = (unsigned int  )0;
               sqlstm.sqadto[1] = (unsigned short )0;
               sqlstm.sqtdso[1] = (unsigned short )0;
               sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
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
               sqlstm.sqhstv[7] = (         void  *)&libro;
               sqlstm.sqhstl[7] = (unsigned int  )6;
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
               sqlstm.sqhstv[10] = (         void  *)&nivelb;
               sqlstm.sqhstl[10] = (unsigned int  )7;
               sqlstm.sqhsts[10] = (         int  )0;
               sqlstm.sqindv[10] = (         void  *)0;
               sqlstm.sqinds[10] = (         int  )0;
               sqlstm.sqharm[10] = (unsigned int  )0;
               sqlstm.sqadto[10] = (unsigned short )0;
               sqlstm.sqtdso[10] = (unsigned short )0;
               sqlstm.sqhstv[11] = (         void  *)&nivelb;
               sqlstm.sqhstl[11] = (unsigned int  )7;
               sqlstm.sqhsts[11] = (         int  )0;
               sqlstm.sqindv[11] = (         void  *)0;
               sqlstm.sqinds[11] = (         int  )0;
               sqlstm.sqharm[11] = (unsigned int  )0;
               sqlstm.sqadto[11] = (unsigned short )0;
               sqlstm.sqtdso[11] = (unsigned short )0;
               sqlstm.sqhstv[12] = (         void  *)&cuentab;
               sqlstm.sqhstl[12] = (unsigned int  )17;
               sqlstm.sqhsts[12] = (         int  )0;
               sqlstm.sqindv[12] = (         void  *)0;
               sqlstm.sqinds[12] = (         int  )0;
               sqlstm.sqharm[12] = (unsigned int  )0;
               sqlstm.sqadto[12] = (unsigned short )0;
               sqlstm.sqtdso[12] = (unsigned short )0;
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
                  printf ("Error leyendo acumulados E3 (%d)\n",sqlca.sqlcode);
            }
            valor_deb-=valor_cre;
            total[acumule]+=valor_deb;
            sprintf (cadena,"%9.2f",valor_deb);
            strful(cadena3,(int)((columna)*16+44),' ');
            if (valor_deb !=0) {
                fprintf(fp,"\r%s",cadenon);
                fprintf(fp,"\r%s%16s",cadena3,fmtnum("zzzzz,zzz,zz9.99",cadena,r_t));
            }
            else salto=0;
            if (totalizo > 0 && valor_deb !=0) {
               fprintf (fp,"\n");
               con_lin++;
            }
      }
      if (totalizo > 0) {
          strful (cadena2,44,' ');
          strcpy (cadena3,cadena2);
          strful (cadena2,(int)((columna)*16),' ');
          strcat (cadena3,cadena2);
          sprintf(cadena,"%9.2f",total[totalizo]);
          total[acumule+1]+=total[totalizo];
          total[totalizo]=0;
          if (!strcmp(raya.arr,"L")) {
              fprintf(fp,"\r%s%16s",cadena3,"---------------");
              fprintf(fp,"%16s",fmtnum("zzzzz,zzz,zz9.99",cadena,r_t));
          }
          if (!strcmp(raya.arr,"U")) {
              fprintf(fp,"\r%s%16s%16s\n",cadena3," ","---------------");
              fprintf (fp,"%s%-44s%s",cadena4,nombre_cta.arr,cadena5);
              fprintf(fp,"\r%s%16s",cadena3," ");
              fprintf(fp,"%16s",fmtnum("zzzzz,zzz,zz9.99",cadena,r_t));
              con_lin++;
          }
          if (!strcmp(raya.arr,"D")) {
              fprintf(fp,"\r%s%16s%16s\n",cadena3," ","---------------");
              fprintf(fp,"%16s\n",fmtnum("zzzzz,zzz,zz9.99",cadena,r_t));
              fprintf(fp,"\r%s%16s%16s",cadena3," ","---------------");
              con_lin+=2;
          }
          if (salto==0)
             salto=1;
          for (i=1;i<=salto;i++) {
               fprintf (fp,"\n");
               con_lin++;
               salto=0;
          }
      }
      if (ptaje > 0) {
          if (total[acumule] < 0) {
              if (!memcmp(cuenta_r.arr,"240405",6)) {
                  imporrenta=redondo((total[acumule]*ptaje*-1)/1000)*1000;
                  sprintf(cadena,"%9.2f",imporrenta);
                  total[acumule]+=imporrenta;
                  fprintf (fp,"%s%-44s%s",cadena4,cadenon,cadena5);
                  fprintf(fp,"\r%46s%2.0f%-28s"," ",ptaje*100,"%");
                  fprintf(fp,"%16s",fmtnum("zzzzz,zzz,zz9.99",cadena,r_t));
              }
              else {
                    if (!memcmp(cuenta_r.arr,"330505",6)) {
/*
                        if (capital > reserva) {
                            reservan=(total[acumule]-imporrenta)*ptaje*-1;
                            if (capital < reserva+reservan) {
                                reservan=capital-reserva;
                            }
                            sprintf(cadena,"%9.2f",reservan);
                            total[acumule]+=reservan;
                            fprintf (fp,"%s%-44s%s",cadena4,cadenon,cadena5);
                            fprintf(fp,"\r%46s%2.0f%-28s"," ",ptaje*100,"%");
                            fprintf(fp,"%16s",fmtnum("zzzzz,zzz,zz9.99",cadena,r_t));
                        }
                        else {
*/
                              salto=0;
                              sprintf(cadena,"%9.2f",-0);
/*
                        }
*/
                    }
                    else {
                          sprintf(cadena,"%9.2f",total[acumule]*ptaje);
                          total[acumule]+=total[acumule]*ptaje;
                          fprintf(fp,"\r%46s%2.0f%-28s"," ",ptaje*100,"%");
//                          printf("%s",cadena); getchar();
                          fprintf(fp,"%16s",fmtnum("zzzzz,zzz,zz9.99",cadena,r_t));
                    }
              }
          }
      }
      if (strcmp(cuenta_r.arr,"")) {
         if (!memcmp(cuenta_r.arr,"360505",6)) {
             valor_tempo = atof(cadena);
             sprintf(cadena,"%9.2f",valor_tempo*-1);
//             printf("1) %s",cadena); getchar();
             actualizo_secuencia();
         }
      }

      for (i=1;i<=salto;i++) {
           fprintf (fp,"\n");
           con_lin++;
      }
 }
/* EXEC SQL CLOSE C2; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 10;
sqlstm.arrsiz = 15;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )480;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)256;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



fprintf(fp,"\n\n\n\nTEODORO TARUD JAAR                                                           \n");
fprintf(fp,"------------------                                        -------------------\n");
if ( !strcmp(codigo_emp.arr,"1") ||
     !strcmp(codigo_emp.arr,"2") ||
     !strcmp(codigo_emp.arr,"4"))
    fprintf(fp,"    GERENTE                                                   REVISOR FISCAL \n");
else
    fprintf(fp,"    GERENTE                                                     CONTADOR     \n");
fprintf(fp,"                                                               MAT.          \n");
}

void actualizo_secuencia()
{
  strcpy(valorb.arr,cadena);
  valorb.len = strlen(valorb.arr);
  strcpy(cuenta_rb.arr,cuenta_r.arr);
  cuenta_rb.len = strlen(cuenta_r.arr);
//  printf("2) %s %s",cuenta_r.arr,cadena); getchar();

  /* EXEC SQL update secuencia
                  set valor  = to_number(:valorb,'999999999999.99')
           where  cuenta_r   = :cuenta_rb  and
                  codigo_emp = :codigo_emp and
                  clase      = 'PYG'; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 15;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update secuencia  set valor=to_number(:b0,'999999999999.99'\
) where ((cuenta_r=:b1 and codigo_emp=:b2) and clase='PYG')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )495;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&valorb;
  sqlstm.sqhstl[0] = (unsigned int  )28;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&cuenta_rb;
  sqlstm.sqhstl[1] = (unsigned int  )17;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
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


}

void hacer_cierre()
{
int	staora;
int i;
    i = 0;

     strcpy(fuenteb.arr,"11");
     fuenteb.len = strlen(fuenteb.arr);

  /* Lee consecutivo de control_mes Fte 11 Cns ultimo cierre*/
     staora=0;

     /* EXEC SQL OPEN C27; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 15;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = sq0008;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )522;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
     sqlstm.sqhstl[0] = (unsigned int  )6;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&ano_mes13;
     sqlstm.sqhstl[1] = (unsigned int  )22;
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


     /* EXEC SQL FETCH C27 INTO :consecutivo11; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 15;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )549;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&consecutivo11;
     sqlstm.sqhstl[0] = (unsigned int  )4;
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


     /* EXEC SQL CLOSE C27; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 15;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )568;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


/*
     EXEC SQL select consecutivo into :consecutivo11
              from   control_mes
              where  fuente       = to_number(:fuenteb)    and
                     ano_mes      = to_number(:ano_mes13)  and
                     codigo_emp   = to_number(:codigo_emp)
              for update of consecutivo;
*/
  staora=sqlca.sqlcode;
  if (staora)
        printf("Error leyendo control_mes fuente 11.1 (%d) %s %s %s %s\n", sqlca.sqlcode,codigo_emp.arr, ano_mes13.arr, fuenteb.arr, consecutivob.arr); 
  else {
        sprintf(consecutivob.arr,"%d",consecutivo11);
        consecutivob.len = strlen(consecutivob.arr);
//        printf("%s %s %s %s",codigo_emp.arr, ano_mes13.arr, fuenteb.arr, consecutivob.arr); getchar();

        /* Borra movto_d con base en consecutivo */
        /* EXEC SQL delete from movto_d
                 where  codigo_emp   = :codigo_emp and
                        ano_mes      = :ano_mes13  and
                        consecutivo  = :consecutivob and
                        libro        = to_number(:libro); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 15;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "delete  from movto_d  where (((codigo_emp=:b0 and ano\
_mes=:b1) and consecutivo=:b2) and libro=to_number(:b3))";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )583;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned int  )6;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&ano_mes13;
        sqlstm.sqhstl[1] = (unsigned int  )22;
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



        staora=sqlca.sqlcode;
        if (staora)
           printf ("Error borrando movto_d (%d), codigo_emp (%s), ano_mes13 (%s) fuenteb (%s), consecutivob(%s) \n", staora,codigo_emp.arr,ano_mes13.arr, fuenteb.arr, consecutivob.arr);

//       EXEC SQL commit;

        /* EXEC SQL select count(*) 
                 into :cuantos
                 from movto_d
                 where codigo_emp   = to_number(:codigo_emp)   and
                       ano_mes      = to_number(:ano_mes)      and
                       consecutivo  = to_number(:consecutivob) and
                       libro        = to_number(:libro); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 15;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "select count(*)  into :b0  from movto_d where (((codi\
go_emp=to_number(:b1) and ano_mes=to_number(:b2)) and consecutivo=to_number(:b\
3)) and libro=to_number(:b4))";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )614;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&cuantos;
        sqlstm.sqhstl[0] = (unsigned int  )4;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
        sqlstm.sqhstl[1] = (unsigned int  )6;
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
        sqlstm.sqhstv[3] = (         void  *)&consecutivob;
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



        if (sqlca.sqlcode == 1403 ) {
          /* Borra movto_c con base en consecutivo */
            /* EXEC SQL delete from movto_c c
                     where  c.codigo_emp   = :codigo_emp and
                            c.comprobante  = 999         and
                            c.clase        = 'CD'        and
                            c.tipo         = '7'         and
                            c.ano_mes      = :ano_mes13  and
                            exists(select 'x'
                                   from movto_d d
                                   where d.codigo_emp  = c.codigo_emp  and
                                         d.ano_mes     = c.ano_mes     and
                                         d.consecutivo = c.consecutivo and
                                         d.libro       = to_number(:libro)) and
                            c.consecutivo  = to_number(:consecutivob); */ 

{
            struct sqlexd sqlstm;

            sqlstm.sqlvsn = 10;
            sqlstm.arrsiz = 15;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.stmt = "delete  from movto_c c  where ((((((c.codigo_emp=\
:b0 and c.comprobante=999) and c.clase='CD') and c.tipo='7') and c.ano_mes=:b1\
) and exists (select 'x'  from movto_d d where (((d.codigo_emp=c.codigo_emp an\
d d.ano_mes=c.ano_mes) and d.consecutivo=c.consecutivo) and d.libro=to_number(\
:b2)))) and c.consecutivo=to_number(:b3))";
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )649;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)256;
            sqlstm.occurs = (unsigned int  )0;
            sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
            sqlstm.sqhstl[0] = (unsigned int  )6;
            sqlstm.sqhsts[0] = (         int  )0;
            sqlstm.sqindv[0] = (         void  *)0;
            sqlstm.sqinds[0] = (         int  )0;
            sqlstm.sqharm[0] = (unsigned int  )0;
            sqlstm.sqadto[0] = (unsigned short )0;
            sqlstm.sqtdso[0] = (unsigned short )0;
            sqlstm.sqhstv[1] = (         void  *)&ano_mes13;
            sqlstm.sqhstl[1] = (unsigned int  )22;
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



           staora=sqlca.sqlcode;
           if (staora)
               printf ("Error borrando movto_c (%d), codigo_emp (%s), ano_mes13 (%s) fuenteb (%s), consecutivob(%s) \n", staora,codigo_emp.arr,ano_mes13.arr, fuenteb.arr, consecutivob.arr);
        }
//       EXEC SQL commit;

        staora=0;
        /* EXEC SQL delete from acumulanit
                 where  codigo_emp   = to_number(:codigo_emp)       and
                        ano_mes      = to_number(:ano_mes13)        and
                        libro        = to_number(:libro); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 15;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "delete  from acumulanit  where ((codigo_emp=to_number\
(:b0) and ano_mes=to_number(:b1)) and libro=to_number(:b2))";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )680;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned int  )6;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&ano_mes13;
        sqlstm.sqhstl[1] = (unsigned int  )22;
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


        staora=sqlca.sqlcode;
        if (staora)
           printf ("Error borrando acumulanit (%d), codigo_emp (%s), ano_mes13 (%s) \n", sqlca.sqlcode,codigo_emp.arr,ano_mes13.arr);

        staora=0;

        /* EXEC SQL delete from acumulados
                 where  codigo_emp   = to_number(:codigo_emp) and
                        ano_mes      = to_number(:ano_mes13) and
                        libro        = to_number(:libro); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 15;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "delete  from acumulados  where ((codigo_emp=to_number\
(:b0) and ano_mes=to_number(:b1)) and libro=to_number(:b2))";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )707;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned int  )6;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&ano_mes13;
        sqlstm.sqhstl[1] = (unsigned int  )22;
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


        staora=sqlca.sqlcode;
        if (staora)
           printf ("Error borrando acumulados (%d), codigo_emp (%s), ano_mes13 (%s) \n", sqlca.sqlcode,codigo_emp.arr,ano_mes13.arr);

  //     EXEC SQL commit;
  }
     sprintf(fechab.arr,"31-DIC-%04d",anoi);
     fechab.len = strlen(fechab.arr);

  /* Inserta en acumulados valores_deb y valor_cre en cero */
  /* EXEC SQL insert into acumulados
  (CODIGO_EMP,ANO_MES,CUENTA,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS,LIBRO)
           select codigo_emp, :ano_mes13, cuenta, 0, 0, sucursal, cen_cos, libro
           from   acumulados
           where  codigo_emp   = to_number(:codigo_emp) and
                  ano_mes     >= to_number(:ano_mesi)   and
                  ano_mes     <= to_number(:ano_mes)    and
                  libro        = to_number(:libro)
           group by codigo_emp, cuenta, sucursal, cen_cos, libro; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 15;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into acumulados(CODIGO_EMP,ANO_MES,CUENTA,VALOR_DEB,\
VALOR_CRE,SUCURSAL,CEN_COS,LIBRO)select codigo_emp ,:b0 ,cuenta ,0 ,0 ,sucursa\
l ,cen_cos ,libro  from acumulados where (((codigo_emp=to_number(:b1) and ano_\
mes>=to_number(:b2)) and ano_mes<=to_number(:b3)) and libro=to_number(:b4)) gr\
oup by codigo_emp,cuenta,sucursal,cen_cos,libro";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )734;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&ano_mes13;
  sqlstm.sqhstl[0] = (unsigned int  )22;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[1] = (unsigned int  )6;
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



  printf ("Inserte en acumulados (%d), codigo_emp (%s), ano_mesi (%s), ano_mes (%s), libro (%s)) \n", sqlca.sqlcode,codigo_emp.arr,ano_mesi.arr, ano_mes.arr, libro.arr);

  /* Inserta en acumulanit valores_deb y valor_cre en cero */
  /* EXEC SQL insert into acumulanit
  (CODIGO_EMP, ANO_MES, CUENTA, CODIGO, CODIGO_NIT, VALOR_DEB, VALOR_CRE, SUCURSAL, CEN_COS,LIBRO)
           select codigo_emp, :ano_mes13, cuenta, codigo, codigo_nit, 0, 0, sucursal, cen_cos, libro
           from   acumulanit
           where  codigo_emp   = to_number(:codigo_emp) and
                  ano_mes     >= to_number(:ano_mesi)   and
                  ano_mes     <= to_number(:ano_mes)    and
                  libro        = to_number(:libro)
           group by codigo_emp, cuenta, codigo, codigo_nit, sucursal, cen_cos, libro; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 15;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into acumulanit(CODIGO_EMP,ANO_MES,CUENTA,CODIGO,COD\
IGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS,LIBRO)select codigo_emp ,:b0 ,cue\
nta ,codigo ,codigo_nit ,0 ,0 ,sucursal ,cen_cos ,libro  from acumulanit where\
 (((codigo_emp=to_number(:b1) and ano_mes>=to_number(:b2)) and ano_mes<=to_num\
ber(:b3)) and libro=to_number(:b4)) group by codigo_emp,cuenta,codigo,codigo_n\
it,sucursal,cen_cos,libro";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )769;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&ano_mes13;
  sqlstm.sqhstl[0] = (unsigned int  )22;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[1] = (unsigned int  )6;
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



     strcpy(fuenteb.arr,"08");
     fuenteb.len = strlen(fuenteb.arr);

  printf ("Inserte en acumulanit (%d), codigo_emp (%s), ano_mesi (%s), ano_mes (%s), libro (%s)) \n", sqlca.sqlcode,codigo_emp.arr,ano_mesi.arr, ano_mes.arr, libro.arr);

  /* Lee consecutivo de control_mes Fte 08 sgte consecutivo */
  /* EXEC SQL select consecutivo+1 into :consecutivo
           from   control_mes
           where  fuente       = to_number(:fuenteb)    and
                  ano_mes      = to_number(:ano_mes13)  and
                  codigo_emp   = to_number(:codigo_emp)
                  for update of consecutivo; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 15;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select (consecutivo+1) into :b0  from control_mes where ((f\
uente=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3)\
) for update of consecutivo ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )804;
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
  sqlstm.sqhstl[1] = (unsigned int  )11;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&ano_mes13;
  sqlstm.sqhstl[2] = (unsigned int  )22;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
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



  if (sqlca.sqlcode) {
      consecutivo=1;
      sprintf(consecutivob.arr,"%5.0f",consecutivo);
      consecutivob.len = strlen(consecutivob.arr);

      /* Inserta en control_mes Fte 08 si no existe */
      /* EXEC SQL insert into control_mes
      (FUENTE,ANO_MES,NOMBRE,CONSECUTIVO,CODIGO_EMP,VERSION)
               values (:fuenteb, :ano_mes13, 'CONTROL DE CIERRE PERIODO',
                       :consecutivob, :codigo_emp,1); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 15;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into control_mes(FUENTE,ANO_MES,NOMBRE,CONSECUTI\
VO,CODIGO_EMP,VERSION) values (:b0,:b1,'CONTROL DE CIERRE PERIODO',:b2,:b3,1)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )835;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&fuenteb;
      sqlstm.sqhstl[0] = (unsigned int  )11;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&ano_mes13;
      sqlstm.sqhstl[1] = (unsigned int  )22;
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



      if (sqlca.sqlcode)
         printf ("Error (C17), insert control_mes (%d)\n", sqlca.sqlcode);
  }
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo);
        consecutivob.len = strlen(consecutivob.arr);

        /* Actualiza Cns de Fte 08 en control_mes */
        /* EXEC SQL update control_mes
                        set    consecutivo = :consecutivob
                 where  codigo_emp   = to_number(:codigo_emp) and
                        ano_mes      = to_number(:ano_mes13)  and
                        fuente       = :fuenteb; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 15;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((codig\
o_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3)";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )866;
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
        sqlstm.sqhstl[1] = (unsigned int  )6;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&ano_mes13;
        sqlstm.sqhstl[2] = (unsigned int  )22;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&fuenteb;
        sqlstm.sqhstl[3] = (unsigned int  )11;
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
           printf ("Error (C18), update control_mes (%d)\n", sqlca.sqlcode);
  }
  sprintf(fechab.arr,"31-DIC-%04d",anoi);
  fechab.len = strlen(fechab.arr);
  strcpy(fuenteb.arr,"11");
  fuenteb.len = strlen(fuenteb.arr);

  /* EXEC SQL select consecutivo into :consecutivo11
           from   control_mes
           where  fuente       = to_number(:fuenteb)    and
                  ano_mes      = to_number(:ano_mes13)  and
                  codigo_emp   = to_number(:codigo_emp)
           for update of consecutivo; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 15;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3)) fo\
r update of consecutivo ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )897;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&consecutivo11;
  sqlstm.sqhstl[0] = (unsigned int  )4;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&fuenteb;
  sqlstm.sqhstl[1] = (unsigned int  )11;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&ano_mes13;
  sqlstm.sqhstl[2] = (unsigned int  )22;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
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



  if (sqlca.sqlcode) {
      /* EXEC SQL insert into control_mes
              (FUENTE,ANO_MES,NOMBRE,CONSECUTIVO,CODIGO_EMP,VERSION)
               values (:fuenteb, :ano_mes13, 'CONTROL DE CIERRE PERIODO',
                       :consecutivob, :codigo_emp,1); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 15;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into control_mes(FUENTE,ANO_MES,NOMBRE,CONSECUTI\
VO,CODIGO_EMP,VERSION) values (:b0,:b1,'CONTROL DE CIERRE PERIODO',:b2,:b3,1)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )928;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&fuenteb;
      sqlstm.sqhstl[0] = (unsigned int  )11;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&ano_mes13;
      sqlstm.sqhstl[1] = (unsigned int  )22;
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



      if (sqlca.sqlcode)
         printf ("Error (C17), insert control_mes (%d)\n", sqlca.sqlcode);
  }
  else {
        /* EXEC SQL select consecutivo into :consecutivo11
                 from   control_mes
                 where  fuente       = to_number(:fuenteb)    and
                        ano_mes      = to_number(:ano_mes13)  and
                        codigo_emp   = to_number(:codigo_emp)
                 for update of consecutivo; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 15;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "select consecutivo into :b0  from control_mes where (\
(fuente=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b\
3)) for update of consecutivo ";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )959;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&consecutivo11;
        sqlstm.sqhstl[0] = (unsigned int  )4;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&fuenteb;
        sqlstm.sqhstl[1] = (unsigned int  )11;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&ano_mes13;
        sqlstm.sqhstl[2] = (unsigned int  )22;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
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



        if (sqlca.sqlcode)
           printf ("Error leyendo control_mes fuente 11.2 (%d)\n", sqlca.sqlcode);

        /* Actualiza Cns de Fte 11 en control_mes */
        /* EXEC SQL update control_mes
                        set    consecutivo = :consecutivob
                 where  codigo_emp   = to_number(:codigo_emp) and
                        ano_mes      = to_number(:ano_mes13)  and
                        fuente       = :fuenteb; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 15;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((codig\
o_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3)";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )990;
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
        sqlstm.sqhstl[1] = (unsigned int  )6;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&ano_mes13;
        sqlstm.sqhstl[2] = (unsigned int  )22;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&fuenteb;
        sqlstm.sqhstl[3] = (unsigned int  )11;
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
           printf ("Error (C18), update control_mes (%d)\n", sqlca.sqlcode);
  }

  /* Selecciona valores para movto_d */
  /* EXEC SQL OPEN C9; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 15;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = sq0006;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1021;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned int  )6;
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
  sqlstm.sqhstv[3] = (         void  *)&libro;
  sqlstm.sqhstl[3] = (unsigned int  )6;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&sucursali;
  sqlstm.sqhstl[4] = (unsigned int  )12;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&sucursalf;
  sqlstm.sqhstl[5] = (unsigned int  )12;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&cen_cosi;
  sqlstm.sqhstl[6] = (unsigned int  )6;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&cen_cosf;
  sqlstm.sqhstl[7] = (unsigned int  )6;
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



  /* Grava en movto_c */
//  printf(":codigo_emp <%s> :ano_mes13 <%s> :consecutivob <%s> :fechab<%s>",codigo_emp.arr, ano_mes13.arr, consecutivob.arr, fechab.arr); getchar();
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
           values(:codigo_emp, :ano_mes13, 999, :consecutivob, 'CD',
                  'MOVIMIENTO DE CIERRE DEL EJERCICIO',:fechab, '7', '0','','','','',''); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 15;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into movto_c(CODIGO_EMP,ANO_MES,COMPROBANTE,CONSECUT\
IVO,CLASE,DESCRIPCION,FECHA,TIPO,ESTADO,NITB,CODIGO_NITB,VALORB,RETENCION,CONT\
ADO) values (:b0,:b1,999,:b2,'CD','MOVIMIENTO DE CIERRE DEL EJERCICIO',:b3,'7'\
,'0','','','','','')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1068;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned int  )6;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&ano_mes13;
  sqlstm.sqhstl[1] = (unsigned int  )22;
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
  sqlstm.sqhstv[3] = (         void  *)&fechab;
  sqlstm.sqhstl[3] = (unsigned int  )32;
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
     printf ("Error (C6), insert movto_c (%d)\n", sqlca.sqlcode);

  printf ("Inserte en movto_c (%d), codigo_emp (%s), ano_mes13 (%s), consecutivob (%s)) \n", sqlca.sqlcode,codigo_emp.arr,ano_mes13.arr, consecutivob.arr);

  staora=0;
  while (staora != 1403) {
        /* EXEC SQL FETCH C9 INTO :cuenta, :codigo, :codigo_nit,
                               :nitn,   :valor,  :sucursal,
                               :cen_cos; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 15;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1099;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&cuenta;
        sqlstm.sqhstl[0] = (unsigned int  )17;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&codigo;
        sqlstm.sqhstl[1] = (unsigned int  )17;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&codigo_nit;
        sqlstm.sqhstl[2] = (unsigned int  )4;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&nitn;
        sqlstm.sqhstl[3] = (unsigned int  )8;
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
        sqlstm.sqhstv[5] = (         void  *)&sucursal;
        sqlstm.sqhstl[5] = (unsigned int  )22;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&cen_cos;
        sqlstm.sqhstl[6] = (unsigned int  )22;
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



        staora = sqlca.sqlcode;
        i++;
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode == -1405) {
            staora = 0;
        } else {
                if (staora)
                    printf ("Error (C9), select (%d) i=(%d)\n", staora,i);
        }

        cuenta.arr     [cuenta.len]     = '\0';
        codigo.arr     [codigo.len]     = '\0';
        sucursal.arr   [sucursal.len]   = '\0';
        cen_cos.arr    [cen_cos.len]    = '\0';

        secuencia++;
        sprintf(secuenciab.arr,"%6.0f",secuencia);
        secuenciab.len = strlen(secuenciab.arr);
        strcpy(cuentab.arr,cuenta.arr);
        cuentab.len = strlen(cuentab.arr);
        ver_inf();
        strcpy(valor_debb.arr,"");
        strcpy(valor_creb.arr,"");
        valor_debb.len = strlen(valor_debb.arr);
        valor_creb.len = strlen(valor_creb.arr);
        sprintf(codigo_nitb.arr,"%5d",codigo_nit);
        codigo_nitb.len = strlen(codigo_nitb.arr);
        if (valor>0) {
           sprintf(valor_debb.arr,"%10.2f",valor);
           valor_debb.len = strlen(valor_debb.arr);
        }
        else {
              valor=valor*-1;
              sprintf(valor_creb.arr,"%10.2f",valor);
              valor_creb.len = strlen(valor_creb.arr);
        }
        strcpy(sucursalb.arr,sucursal.arr);
        sucursalb.len = strlen(sucursal.arr);
        strcpy(cen_cosb.arr,cen_cos.arr);
        cen_cosb.len = strlen(cen_cosb.arr);

        if (valor> 0) {
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
                           to_number(:ano_mes13), 
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
                           :sucursalb, 
                           to_number(:cen_cosb),
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
           sqlstm.offset = (unsigned int  )1142;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)256;
           sqlstm.occurs = (unsigned int  )0;
           sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
           sqlstm.sqhstl[0] = (unsigned int  )6;
           sqlstm.sqhsts[0] = (         int  )0;
           sqlstm.sqindv[0] = (         void  *)0;
           sqlstm.sqinds[0] = (         int  )0;
           sqlstm.sqharm[0] = (unsigned int  )0;
           sqlstm.sqadto[0] = (unsigned short )0;
           sqlstm.sqtdso[0] = (unsigned short )0;
           sqlstm.sqhstv[1] = (         void  *)&ano_mes13;
           sqlstm.sqhstl[1] = (unsigned int  )22;
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
           sqlstm.sqhstl[4] = (unsigned int  )17;
           sqlstm.sqhsts[4] = (         int  )0;
           sqlstm.sqindv[4] = (         void  *)0;
           sqlstm.sqinds[4] = (         int  )0;
           sqlstm.sqharm[4] = (unsigned int  )0;
           sqlstm.sqadto[4] = (unsigned short )0;
           sqlstm.sqtdso[4] = (unsigned short )0;
           sqlstm.sqhstv[5] = (         void  *)&infa;
           sqlstm.sqhstl[5] = (unsigned int  )17;
           sqlstm.sqhsts[5] = (         int  )0;
           sqlstm.sqindv[5] = (         void  *)0;
           sqlstm.sqinds[5] = (         int  )0;
           sqlstm.sqharm[5] = (unsigned int  )0;
           sqlstm.sqadto[5] = (unsigned short )0;
           sqlstm.sqtdso[5] = (unsigned short )0;
           sqlstm.sqhstv[6] = (         void  *)&infb;
           sqlstm.sqhstl[6] = (unsigned int  )17;
           sqlstm.sqhsts[6] = (         int  )0;
           sqlstm.sqindv[6] = (         void  *)0;
           sqlstm.sqinds[6] = (         int  )0;
           sqlstm.sqharm[6] = (unsigned int  )0;
           sqlstm.sqadto[6] = (unsigned short )0;
           sqlstm.sqtdso[6] = (unsigned short )0;
           sqlstm.sqhstv[7] = (         void  *)&infc;
           sqlstm.sqhstl[7] = (unsigned int  )17;
           sqlstm.sqhsts[7] = (         int  )0;
           sqlstm.sqindv[7] = (         void  *)0;
           sqlstm.sqinds[7] = (         int  )0;
           sqlstm.sqharm[7] = (unsigned int  )0;
           sqlstm.sqadto[7] = (unsigned short )0;
           sqlstm.sqtdso[7] = (unsigned short )0;
           sqlstm.sqhstv[8] = (         void  *)&infd;
           sqlstm.sqhstl[8] = (unsigned int  )17;
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
           sqlstm.sqhstl[10] = (unsigned int  )27;
           sqlstm.sqhsts[10] = (         int  )0;
           sqlstm.sqindv[10] = (         void  *)0;
           sqlstm.sqinds[10] = (         int  )0;
           sqlstm.sqharm[10] = (unsigned int  )0;
           sqlstm.sqadto[10] = (unsigned short )0;
           sqlstm.sqtdso[10] = (unsigned short )0;
           sqlstm.sqhstv[11] = (         void  *)&valor_creb;
           sqlstm.sqhstl[11] = (unsigned int  )27;
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



        printf ("1) Inserte en movto_d (%d), codigo_emp (%s), ano_mes13 (%s), consecutivob (%s), secuenciab (%s) \n", sqlca.sqlcode,codigo_emp.arr,ano_mes13.arr,consecutivob.arr,secuenciab.arr);

        if (sqlca.sqlcode) {
           printf ("Error, insert movto_d (%d) \n", sqlca.sqlcode);
           printf ("codigo_emp   (%s)(%d)\n", codigo_emp.arr, codigo_emp.len);
           printf ("ano_mes13    (%s)(%d)\n", ano_mes13.arr, ano_mes13.len);
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
           printf ("sucursalb    (%s)(%d)\n", sucursalb.arr, sucursalb.len);
           printf ("cen_cosb     (%s)(%d)\n", cen_cosb.arr, cen_cosb.len);
           exit (0);
        }
        }
  }
  /* EXEC SQL CLOSE C9; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 15;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1217;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}




  /* Selecciona valores GENERADOS para movto_d */
  /* EXEC SQL OPEN C23; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 15;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = sq0007;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1232;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
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



  staora = 0;
  while (!staora) {
        /* EXEC SQL FETCH C23 INTO :cuenta_rs, :codigo_rs, :codigo_nit, :nitn,
                                :valor, :sucursal_rs, :cen_cos_rs; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 15;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1251;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&cuenta_rs;
        sqlstm.sqhstl[0] = (unsigned int  )17;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&codigo_rs;
        sqlstm.sqhstl[1] = (unsigned int  )17;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&codigo_nit;
        sqlstm.sqhstl[2] = (unsigned int  )4;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&nitn;
        sqlstm.sqhstl[3] = (unsigned int  )8;
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
        sqlstm.sqhstv[5] = (         void  *)&sucursal_rs;
        sqlstm.sqhstl[5] = (unsigned int  )7;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&cen_cos_rs;
        sqlstm.sqhstl[6] = (unsigned int  )5;
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



        staora = sqlca.sqlcode;
        if (staora == 1403) break;
        if (sqlca.sqlcode == -1405) staora = 0;

        cuenta_rs.arr      [cuenta_rs.len]      = '\0';
        codigo_rs.arr      [codigo_rs.len]      = '\0';

        secuencia++;
        sprintf(secuenciab.arr,"%6.0f",secuencia);
        strcpy(cuentab.arr,cuenta_rs.arr);
        secuenciab.len = strlen(secuenciab.arr);
        cuentab.len = strlen(cuentab.arr);
        ver_inf2();
        strcpy(valor_debb.arr,"");
        strcpy(valor_creb.arr,"");
        valor_debb.len = strlen(valor_debb.arr);
        valor_creb.len = strlen(valor_creb.arr);
        sprintf(codigo_nitb.arr,"%5d",codigo_nit);
        codigo_nitb.len = strlen(codigo_nitb.arr);
        if (valor>0) {
           sprintf(valor_debb.arr,"%10.2f",valor);
           valor_debb.len = strlen(valor_debb.arr);
        }
        else {
              valor=valor*-1;
              sprintf(valor_creb.arr,"%10.2f",valor);
              valor_creb.len = strlen(valor_creb.arr);
        }
        strcpy(sucursalb.arr,sucursal_rs.arr);
        sucursalb.len = strlen(sucursal.arr);
        strcpy(cen_cosb.arr,cen_cos_rs.arr);
        cen_cosb.len = strlen(cen_cosb.arr);
        if (valor> 0) {
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
                           to_number(:ano_mes13), 
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
                           :sucursalb, 
                           to_number(:cen_cosb),
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
           sqlstm.offset = (unsigned int  )1294;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)256;
           sqlstm.occurs = (unsigned int  )0;
           sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
           sqlstm.sqhstl[0] = (unsigned int  )6;
           sqlstm.sqhsts[0] = (         int  )0;
           sqlstm.sqindv[0] = (         void  *)0;
           sqlstm.sqinds[0] = (         int  )0;
           sqlstm.sqharm[0] = (unsigned int  )0;
           sqlstm.sqadto[0] = (unsigned short )0;
           sqlstm.sqtdso[0] = (unsigned short )0;
           sqlstm.sqhstv[1] = (         void  *)&ano_mes13;
           sqlstm.sqhstl[1] = (unsigned int  )22;
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
           sqlstm.sqhstl[4] = (unsigned int  )17;
           sqlstm.sqhsts[4] = (         int  )0;
           sqlstm.sqindv[4] = (         void  *)0;
           sqlstm.sqinds[4] = (         int  )0;
           sqlstm.sqharm[4] = (unsigned int  )0;
           sqlstm.sqadto[4] = (unsigned short )0;
           sqlstm.sqtdso[4] = (unsigned short )0;
           sqlstm.sqhstv[5] = (         void  *)&infa;
           sqlstm.sqhstl[5] = (unsigned int  )17;
           sqlstm.sqhsts[5] = (         int  )0;
           sqlstm.sqindv[5] = (         void  *)0;
           sqlstm.sqinds[5] = (         int  )0;
           sqlstm.sqharm[5] = (unsigned int  )0;
           sqlstm.sqadto[5] = (unsigned short )0;
           sqlstm.sqtdso[5] = (unsigned short )0;
           sqlstm.sqhstv[6] = (         void  *)&infb;
           sqlstm.sqhstl[6] = (unsigned int  )17;
           sqlstm.sqhsts[6] = (         int  )0;
           sqlstm.sqindv[6] = (         void  *)0;
           sqlstm.sqinds[6] = (         int  )0;
           sqlstm.sqharm[6] = (unsigned int  )0;
           sqlstm.sqadto[6] = (unsigned short )0;
           sqlstm.sqtdso[6] = (unsigned short )0;
           sqlstm.sqhstv[7] = (         void  *)&infc;
           sqlstm.sqhstl[7] = (unsigned int  )17;
           sqlstm.sqhsts[7] = (         int  )0;
           sqlstm.sqindv[7] = (         void  *)0;
           sqlstm.sqinds[7] = (         int  )0;
           sqlstm.sqharm[7] = (unsigned int  )0;
           sqlstm.sqadto[7] = (unsigned short )0;
           sqlstm.sqtdso[7] = (unsigned short )0;
           sqlstm.sqhstv[8] = (         void  *)&infd;
           sqlstm.sqhstl[8] = (unsigned int  )17;
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
           sqlstm.sqhstl[10] = (unsigned int  )27;
           sqlstm.sqhsts[10] = (         int  )0;
           sqlstm.sqindv[10] = (         void  *)0;
           sqlstm.sqinds[10] = (         int  )0;
           sqlstm.sqharm[10] = (unsigned int  )0;
           sqlstm.sqadto[10] = (unsigned short )0;
           sqlstm.sqtdso[10] = (unsigned short )0;
           sqlstm.sqhstv[11] = (         void  *)&valor_creb;
           sqlstm.sqhstl[11] = (unsigned int  )27;
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



        printf ("2) Inserte en movto_d (%d), codigo_emp (%s), ano_mes13 (%s), consecutivob (%s), secuenciab (%s) \n", sqlca.sqlcode,codigo_emp.arr,ano_mes13.arr,consecutivob.arr,secuenciab.arr);

        if (sqlca.sqlcode) {
           printf ("Error, insert movto_d (%d) \n", sqlca.sqlcode);
           printf ("codigo_emp   (%s)(%d)\n", codigo_emp.arr, codigo_emp.len);
           printf ("ano_mes13    (%s)(%d)\n", ano_mes13.arr, ano_mes13.len);
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
           printf ("sucursalb    (%s)(%d)\n", sucursalb.arr, sucursalb.len);
           printf ("cen_cosb     (%s)(%d)\n", cen_cosb.arr, cen_cosb.len);
           exit (0);
        }
           staora = sqlca.sqlcode;
           if (sqlca.sqlcode == -1405) staora = 0;

        }
  }
  /* EXEC SQL CLOSE C23; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 15;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1369;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void cierre_ejercicio()
{
 /* Hace el cierre definitivo del ejercicio en el mes 13 */
 /* Suma desde el mes 13 del ano anterior hasta el actual y el resultado */
 /* lo deja en el mes 13 del ano en curso */
 /* Para el archivo de acumulados */
 /* EXEC SQL update acumulados a
                 set (valor_deb, valor_cre) =
                     (select nvl(sum(valor_deb),0), nvl(sum(valor_cre),0)
                      from  acumulados
                      where cuenta       = a.cuenta              and
                            sucursal     = a.sucursal            and
                            cen_cos      = a.cen_cos             and
                            ano_mes     >= to_number(:ano_mesi)  and
                            ano_mes     <= to_number(:ano_mes13) and
                            libro        = to_number(:libro)     and
                            codigo_emp   = a.codigo_emp)
           where ano_mes      = to_number(:ano_mes13)   and
                 libro        = to_number(:libro)       and
                 codigo_emp   = to_number(:codigo_emp); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 15;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update acumulados a  set (valor_deb,valor_cre)=(select nvl(s\
um(valor_deb),0) ,nvl(sum(valor_cre),0)  from acumulados where ((((((cuenta=a.\
cuenta and sucursal=a.sucursal) and cen_cos=a.cen_cos) and ano_mes>=to_number(\
:b0)) and ano_mes<=to_number(:b1)) and libro=to_number(:b2)) and codigo_emp=a.\
codigo_emp)) where ((ano_mes=to_number(:b1) and libro=to_number(:b2)) and codi\
go_emp=to_number(:b5))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1384;
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
 sqlstm.sqhstv[1] = (         void  *)&ano_mes13;
 sqlstm.sqhstl[1] = (unsigned int  )22;
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
 sqlstm.sqhstv[3] = (         void  *)&ano_mes13;
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
 sqlstm.sqhstv[5] = (         void  *)&codigo_emp;
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



 /* Para el archivo de acumulanit */
 /* EXEC SQL update acumulanit a
                 set (valor_deb, valor_cre) =
                     (select nvl(sum(valor_deb),0), nvl(sum(valor_cre),0)
                      from  acumulanit
                      where codigo_nit   = a.codigo_nit          and
                            codigo       = a.codigo              and
                            cuenta       = a.cuenta              and
                            sucursal     = a.sucursal            and
                            cen_cos      = a.cen_cos             and
                            libro        = to_number(:libro)     and
                            ano_mes     >= to_number(:ano_mesi)  and
                            ano_mes     <= to_number(:ano_mes13) and
                            codigo_emp   = a.codigo_emp)
          where ano_mes      = to_number(:ano_mes13)   and
                libro        = to_number(:libro)       and
                codigo_emp   = to_number(:codigo_emp); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 15;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update acumulanit a  set (valor_deb,valor_cre)=(select nvl(s\
um(valor_deb),0) ,nvl(sum(valor_cre),0)  from acumulanit where ((((((((codigo_\
nit=a.codigo_nit and codigo=a.codigo) and cuenta=a.cuenta) and sucursal=a.sucu\
rsal) and cen_cos=a.cen_cos) and libro=to_number(:b0)) and ano_mes>=to_number(\
:b1)) and ano_mes<=to_number(:b2)) and codigo_emp=a.codigo_emp)) where ((ano_m\
es=to_number(:b2) and libro=to_number(:b0)) and codigo_emp=to_number(:b5))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1423;
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
 sqlstm.sqhstv[1] = (         void  *)&ano_mesi;
 sqlstm.sqhstl[1] = (unsigned int  )22;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&ano_mes13;
 sqlstm.sqhstl[2] = (unsigned int  )22;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&ano_mes13;
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
 sqlstm.sqhstv[5] = (         void  *)&codigo_emp;
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



}

void ver_inf()
{
  /* EXEC SQL select infa, infb, infc, infd
                  into :vecplana, :vecplanb, :vecplanc, :vecpland
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
  sqlstm.offset = (unsigned int  )1462;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&vecplana;
  sqlstm.sqhstl[0] = (unsigned int  )27;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&vecplanb;
  sqlstm.sqhstl[1] = (unsigned int  )27;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&vecplanc;
  sqlstm.sqhstl[2] = (unsigned int  )27;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&vecpland;
  sqlstm.sqhstl[3] = (unsigned int  )27;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[4] = (unsigned int  )6;
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



  vecplana.arr [vecplana.len] = '\0';
  vecplanb.arr [vecplanb.len] = '\0';
  vecplanc.arr [vecplanc.len] = '\0';
  vecpland.arr [vecpland.len] = '\0';

  strcpy (vecplan[0], vecplana.arr);
  strcpy (vecplan[1], vecplanb.arr);
  strcpy (vecplan[2], vecplanc.arr);
  strcpy (vecplan[3], vecpland.arr);

  for (i=0;i<4;i++) {
       strcpy(inf[i],"");
  }
  i=j=0;
  for (i=0;i<4;i++) {
      if (!strcmp(vecplan[i],"NIT")) {
          sprintf(inf[i],"%12.0f",nitn);
      }
      for (j=0;j<k;j++) {
          if (!strcmp(vecplan[i],vecinf[j])) {
              strcpy(inf[i],codigo.arr);
          }
      }
  }
  strcpy (infa.arr, inf[0]);
  strcpy (infb.arr, inf[1]);
  strcpy (infc.arr, inf[2]);
  strcpy (infd.arr, inf[3]);
  infa.len = strlen(infa.arr);
  infb.len = strlen(infb.arr);
  infc.len = strlen(infc.arr);
  infd.len = strlen(infd.arr);
}

void ver_inf2()
{
  /* EXEC SQL select infa, infb, infc, infd
                  into :vecplana, :vecplanb, :vecplanc, :vecpland
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
  sqlstm.offset = (unsigned int  )1501;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&vecplana;
  sqlstm.sqhstl[0] = (unsigned int  )27;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&vecplanb;
  sqlstm.sqhstl[1] = (unsigned int  )27;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&vecplanc;
  sqlstm.sqhstl[2] = (unsigned int  )27;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&vecpland;
  sqlstm.sqhstl[3] = (unsigned int  )27;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[4] = (unsigned int  )6;
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



  vecplana.arr [vecplana.len] = '\0';
  vecplanb.arr [vecplanb.len] = '\0';
  vecplanc.arr [vecplanc.len] = '\0';
  vecpland.arr [vecpland.len] = '\0';

  strcpy (vecplan[0], vecplana.arr);
  strcpy (vecplan[1], vecplanb.arr);
  strcpy (vecplan[2], vecplanc.arr);
  strcpy (vecplan[3], vecpland.arr);

  for (i=0;i<4;i++) {
       strcpy(inf[i],"");
  }
  i=j=0;
  for (i=0;i<4;i++) {
      if (!strcmp(vecplan[i],"NIT")) {
          sprintf(inf[i],"%12.0f",nitn);
      }
      for (j=0;j<k;j++) {
          if (!strcmp(vecplan[i],vecinf[j])) {
              strcpy(inf[i],codigo_rs.arr);
          }
      }
  }
  strcpy (infa.arr, inf[0]);
  strcpy (infb.arr, inf[1]);
  strcpy (infc.arr, inf[2]);
  strcpy (infd.arr, inf[3]);
  infa.len = strlen(infa.arr);
  infb.len = strlen(infb.arr);
  infc.len = strlen(infc.arr);
  infd.len = strlen(infd.arr);
}
