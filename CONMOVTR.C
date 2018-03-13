
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
    ".\\conmovtr.pc"
};


static unsigned long sqlctx = 525931;


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
            void  *sqhstv[17];
   unsigned int   sqhstl[17];
            int   sqhsts[17];
            void  *sqindv[17];
            int   sqinds[17];
   unsigned int   sqharm[17];
   unsigned int   *sqharc[17];
   unsigned short  sqadto[17];
   unsigned short  sqtdso[17];
} sqlstm = {10,17};

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
"select inf  from infacu            ";

 static const char *sq0002 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cue\
nta ,nvl(codigo_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado ,sucursal\
 ,cen_cos  from movto_d d ,movto_c c where (((((((((d.codigo_emp(+)=c.codigo_e\
mp and d.ano_mes(+)=c.ano_mes) and d.consecutivo(+)=c.consecutivo) and d.libro\
=:b0) and c.codigo_emp=to_number(:b1)) and c.ano_mes=to_number(:b2)) and c.tip\
o>=to_number(:b3)) and c.tipo<=to_number(:b4)) and c.comprobante>=to_number(:b\
5)) and c.comprobante<=to_number(:b6)) order by tipo,comprobante            ";

 static const char *sq0003 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cue\
nta ,nvl(codigo_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado ,sucursal\
 ,cen_cos  from movto_d d ,movto_c c where (((((((((d.codigo_emp(+)=c.codigo_e\
mp and d.ano_mes(+)=c.ano_mes) and d.consecutivo(+)=c.consecutivo) and d.libro\
=:b0) and c.codigo_emp=to_number(:b1)) and c.ano_mes=to_number(:b2)) and c.tip\
o>=to_number(:b3)) and c.tipo<=to_number(:b4)) and c.comprobante>=to_number(:b\
5)) and c.comprobante<=to_number(:b6)) order by c.consecutivo,secuencia       \
     ";

 static const char *sq0004 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cue\
nta ,nvl(codigo_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado ,sucursal\
 ,cen_cos  from movto_d d ,movto_c c where (((((((((d.codigo_emp(+)=c.codigo_e\
mp and d.ano_mes(+)=c.ano_mes) and d.consecutivo(+)=c.consecutivo) and d.libro\
=:b0) and c.codigo_emp=to_number(:b1)) and c.ano_mes=to_number(:b2)) and c.tip\
o>=to_number(:b3)) and c.tipo<=to_number(:b4)) and c.comprobante>=to_number(:b\
5)) and c.comprobante<=to_number(:b6)) order by c.fecha            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,160,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,5,35,0,9,254,0,0,0,0,0,1,0,
51,0,0,5,0,0,13,261,0,0,1,0,0,1,0,2,9,0,0,
70,0,0,5,0,0,15,275,0,0,0,0,0,1,0,
85,0,0,6,140,0,4,277,0,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
116,0,0,2,620,0,9,287,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
159,0,0,3,627,0,9,291,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
202,0,0,4,611,0,9,295,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
245,0,0,2,0,0,13,304,0,0,17,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,
4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,
328,0,0,3,0,0,13,311,0,0,17,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,
4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,
411,0,0,4,0,0,13,318,0,0,17,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,
4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,
494,0,0,2,0,0,15,357,0,0,0,0,0,1,0,
509,0,0,3,0,0,15,361,0,0,0,0,0,1,0,
524,0,0,4,0,0,15,365,0,0,0,0,0,1,0,
539,0,0,7,0,0,30,374,0,0,0,0,0,1,0,
554,0,0,8,99,0,4,442,0,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,9,
0,0,
593,0,0,9,54,0,4,453,0,0,2,1,0,1,0,2,9,0,0,1,4,0,0,
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

/* VARCHAR tipo_ini   [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } tipo_ini;

/* VARCHAR tipo_fin   [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } tipo_fin;

/* VARCHAR cmp_ini    [7]; */ 
struct { unsigned short len; unsigned char arr[7]; } cmp_ini;

/* VARCHAR cmp_fin    [8]; */ 
struct { unsigned short len; unsigned char arr[8]; } cmp_fin;

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

/* VARCHAR descripcion[20][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } descripcion[20];

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

double	wval_deb;
double	wval_cre;
/* VARCHAR nomb_emp   [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nomb_emp;

/* VARCHAR nomb_nit   [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_nit;

/* VARCHAR codigo     [13]; */ 
struct { unsigned short len; unsigned char arr[13]; } codigo;

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

/* VARCHAR librob        [4]; */ 
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
char    login[40];

void titulos();
void lista_movto();
void totales_cpt();
void totales();

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 11)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp aaaamm orden(T,C,F) tipo_ini tipo_fin\n");
        printf ("      comp_ini comp_fin device timbrado (s/n) libro userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("      device : s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (orden,          argv[3]);
       strcpy (tipo_ini.arr,   argv[4]);
       tipo_ini.len    =       strlen(tipo_ini.arr);
       strcpy (tipo_fin.arr,   argv[5]);
       tipo_fin.len    =       strlen(tipo_fin.arr);
       strcpy (cmp_ini.arr,    argv[6]);
       cmp_ini.len     =       strlen(cmp_ini.arr);
       strcpy (cmp_fin.arr,    argv[7]);
       cmp_fin.len     =       strlen(cmp_fin.arr);
       strcpy (device,         argv[8]);
       strlow (device);
       strcpy (timbrado,       argv[9]);
       strlow (timbrado);
       strcpy (librob.arr,     argv[10]);
       librob.len  =           strlen(librob.arr);

    if (!strpos ("/", argv[11]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[11]);
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
    abre_impresora("1");


    strcpy (ano_mes.arr,    argv[2]);
    ano_mes.len    =        strlen(ano_mes.arr);
    strcpy (cadena,         ano_mes.arr);
    strorg (cadena,1,4);
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
                 nvl(codigo_nit,970), nvl(valor_deb,0), nvl(valor_cre,0), estado, sucursal, cen_cos
	        from   movto_d d, movto_c c
          where  d.codigo_emp(+)  = c.codigo_emp                  and
                 d.ano_mes(+)     = c.ano_mes                     and
                 d.consecutivo(+) = c.consecutivo                 and
                 d.libro          = :librob                       and
                 c.codigo_emp     = to_number(:codigo_emp)        and
                 c.ano_mes        = to_number(:ano_mes)           and
                 c.tipo          >= to_number(:tipo_ini)          and
                 c.tipo          <= to_number(:tipo_fin)          and
                 c.comprobante   >= to_number(:cmp_ini)           and
                 c.comprobante   <= to_number(:cmp_fin)
          order by tipo, comprobante; */ 


     /* EXEC SQL DECLARE C2B CURSOR FOR
          select nvl(infa,'0'), decode(clase,'XX','0',nvl(infb,'0')),
                 nvl(infc,'0'), nvl(infd,'0'),
                 comprobante, c.consecutivo,
                 clase, descripcion, fecha, tipo, cuenta,
                 nvl(codigo_nit,970), nvl(valor_deb,0), nvl(valor_cre,0), estado, sucursal, cen_cos
	        from   movto_d d, movto_c c
          where  d.codigo_emp(+)  = c.codigo_emp                  and
                 d.ano_mes(+)     = c.ano_mes                     and
                 d.consecutivo(+) = c.consecutivo                 and
                 d.libro          = :librob                       and
                 c.codigo_emp     = to_number(:codigo_emp)        and
                 c.ano_mes        = to_number(:ano_mes)           and
                 c.tipo          >= to_number(:tipo_ini)          and
                 c.tipo          <= to_number(:tipo_fin)          and
                 c.comprobante   >= to_number(:cmp_ini)           and
                 c.comprobante   <= to_number(:cmp_fin)
          order by c.consecutivo, secuencia; */ 


     /* EXEC SQL DECLARE C2C CURSOR FOR
          select nvl(infa,'0'), decode(clase,'XX','0',nvl(infb,'0')),
                 nvl(infc,'0'), nvl(infd,'0'),
                 comprobante, c.consecutivo,
                 clase, descripcion, fecha, tipo, cuenta,
                 nvl(codigo_nit,970), nvl(valor_deb,0), nvl(valor_cre,0), estado, sucursal, cen_cos
      	  from   movto_d d, movto_c c
          where  d.codigo_emp(+)  = c.codigo_emp                  and
                 d.ano_mes(+)     = c.ano_mes                     and
                 d.consecutivo(+) = c.consecutivo                 and
                 d.libro          = :librob                       and
                 c.codigo_emp     = to_number(:codigo_emp)        and
                 c.ano_mes        = to_number(:ano_mes)           and
                 c.tipo          >= to_number(:tipo_ini)          and
                 c.tipo          <= to_number(:tipo_fin)          and
                 c.comprobante   >= to_number(:cmp_ini)           and
                 c.comprobante   <= to_number(:cmp_fin)
          order by c.fecha; */ 


     /* EXEC SQL DECLARE C13 CURSOR FOR
              select inf
              from   infacu; */ 


    /* EXEC SQL OPEN C13; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
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
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = 0;
    traidos = 0;
    num_ret = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C13 INTO :vecinf; */ 

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
    sqlstm.offset = (unsigned int  )85;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_emp;
    sqlstm.sqhstl[0] = (unsigned int  )62;
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
        fprintf (stderr, "Error leyendo EMPRESAS (%d)\n", sqlca.sqlcode);

    if (!strcmp (orden,"T")) {
       /* EXEC SQL OPEN C2A; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
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
       sqlstm.sqhstv[0] = (         void  *)&librob;
       sqlstm.sqhstl[0] = (unsigned int  )6;
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
       sqlstm.sqhstv[3] = (         void  *)&tipo_ini;
       sqlstm.sqhstl[3] = (unsigned int  )5;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&tipo_fin;
       sqlstm.sqhstl[4] = (unsigned int  )5;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&cmp_ini;
       sqlstm.sqhstl[5] = (unsigned int  )9;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&cmp_fin;
       sqlstm.sqhstl[6] = (unsigned int  )10;
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

          sqlstm.sqlvsn = 10;
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
          sqlstm.sqhstv[0] = (         void  *)&librob;
          sqlstm.sqhstl[0] = (unsigned int  )6;
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
          sqlstm.sqhstv[3] = (         void  *)&tipo_ini;
          sqlstm.sqhstl[3] = (unsigned int  )5;
          sqlstm.sqhsts[3] = (         int  )0;
          sqlstm.sqindv[3] = (         void  *)0;
          sqlstm.sqinds[3] = (         int  )0;
          sqlstm.sqharm[3] = (unsigned int  )0;
          sqlstm.sqadto[3] = (unsigned short )0;
          sqlstm.sqtdso[3] = (unsigned short )0;
          sqlstm.sqhstv[4] = (         void  *)&tipo_fin;
          sqlstm.sqhstl[4] = (unsigned int  )5;
          sqlstm.sqhsts[4] = (         int  )0;
          sqlstm.sqindv[4] = (         void  *)0;
          sqlstm.sqinds[4] = (         int  )0;
          sqlstm.sqharm[4] = (unsigned int  )0;
          sqlstm.sqadto[4] = (unsigned short )0;
          sqlstm.sqtdso[4] = (unsigned short )0;
          sqlstm.sqhstv[5] = (         void  *)&cmp_ini;
          sqlstm.sqhstl[5] = (unsigned int  )9;
          sqlstm.sqhsts[5] = (         int  )0;
          sqlstm.sqindv[5] = (         void  *)0;
          sqlstm.sqinds[5] = (         int  )0;
          sqlstm.sqharm[5] = (unsigned int  )0;
          sqlstm.sqadto[5] = (unsigned short )0;
          sqlstm.sqtdso[5] = (unsigned short )0;
          sqlstm.sqhstv[6] = (         void  *)&cmp_fin;
          sqlstm.sqhstl[6] = (unsigned int  )10;
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

             sqlstm.sqlvsn = 10;
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
             sqlstm.sqhstv[0] = (         void  *)&librob;
             sqlstm.sqhstl[0] = (unsigned int  )6;
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
             sqlstm.sqhstv[3] = (         void  *)&tipo_ini;
             sqlstm.sqhstl[3] = (unsigned int  )5;
             sqlstm.sqhsts[3] = (         int  )0;
             sqlstm.sqindv[3] = (         void  *)0;
             sqlstm.sqinds[3] = (         int  )0;
             sqlstm.sqharm[3] = (unsigned int  )0;
             sqlstm.sqadto[3] = (unsigned short )0;
             sqlstm.sqtdso[3] = (unsigned short )0;
             sqlstm.sqhstv[4] = (         void  *)&tipo_fin;
             sqlstm.sqhstl[4] = (unsigned int  )5;
             sqlstm.sqhsts[4] = (         int  )0;
             sqlstm.sqindv[4] = (         void  *)0;
             sqlstm.sqinds[4] = (         int  )0;
             sqlstm.sqharm[4] = (unsigned int  )0;
             sqlstm.sqadto[4] = (unsigned short )0;
             sqlstm.sqtdso[4] = (unsigned short )0;
             sqlstm.sqhstv[5] = (         void  *)&cmp_ini;
             sqlstm.sqhstl[5] = (unsigned int  )9;
             sqlstm.sqhsts[5] = (         int  )0;
             sqlstm.sqindv[5] = (         void  *)0;
             sqlstm.sqinds[5] = (         int  )0;
             sqlstm.sqharm[5] = (unsigned int  )0;
             sqlstm.sqadto[5] = (unsigned short )0;
             sqlstm.sqtdso[5] = (unsigned short )0;
             sqlstm.sqhstv[6] = (         void  *)&cmp_fin;
             sqlstm.sqhstl[6] = (unsigned int  )10;
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
                                  :valor_deb,   :valor_cre, :estado, sucursal, cen_cos; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 17;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )20;
          sqlstm.offset = (unsigned int  )245;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
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
          sqlstm.sqhstl[4] = (unsigned int  )8;
          sqlstm.sqhsts[4] = (         int  )8;
          sqlstm.sqindv[4] = (         void  *)0;
          sqlstm.sqinds[4] = (         int  )0;
          sqlstm.sqharm[4] = (unsigned int  )0;
          sqlstm.sqharc[4] = (unsigned int   *)0;
          sqlstm.sqadto[4] = (unsigned short )0;
          sqlstm.sqtdso[4] = (unsigned short )0;
          sqlstm.sqhstv[5] = (         void  *)consecutivo;
          sqlstm.sqhstl[5] = (unsigned int  )8;
          sqlstm.sqhsts[5] = (         int  )8;
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
          sqlstm.sqhstl[7] = (unsigned int  )52;
          sqlstm.sqhsts[7] = (         int  )52;
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
          sqlstm.sqhstl[9] = (unsigned int  )4;
          sqlstm.sqhsts[9] = (         int  )4;
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
          sqlstm.sqhstl[11] = (unsigned int  )8;
          sqlstm.sqhsts[11] = (         int  )8;
          sqlstm.sqindv[11] = (         void  *)0;
          sqlstm.sqinds[11] = (         int  )0;
          sqlstm.sqharm[11] = (unsigned int  )0;
          sqlstm.sqharc[11] = (unsigned int   *)0;
          sqlstm.sqadto[11] = (unsigned short )0;
          sqlstm.sqtdso[11] = (unsigned short )0;
          sqlstm.sqhstv[12] = (         void  *)valor_deb;
          sqlstm.sqhstl[12] = (unsigned int  )8;
          sqlstm.sqhsts[12] = (         int  )8;
          sqlstm.sqindv[12] = (         void  *)0;
          sqlstm.sqinds[12] = (         int  )0;
          sqlstm.sqharm[12] = (unsigned int  )0;
          sqlstm.sqharc[12] = (unsigned int   *)0;
          sqlstm.sqadto[12] = (unsigned short )0;
          sqlstm.sqtdso[12] = (unsigned short )0;
          sqlstm.sqhstv[13] = (         void  *)valor_cre;
          sqlstm.sqhstl[13] = (unsigned int  )8;
          sqlstm.sqhsts[13] = (         int  )8;
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
                                 :consecutivo, :clase, :descripcion,
                                 :fecha, :tipo, :cuenta, :codigo_nit,
                                 :valor_deb, :valor_cre, :estado, sucursal, cen_cos; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 17;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )20;
          sqlstm.offset = (unsigned int  )328;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
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
          sqlstm.sqhstl[4] = (unsigned int  )8;
          sqlstm.sqhsts[4] = (         int  )8;
          sqlstm.sqindv[4] = (         void  *)0;
          sqlstm.sqinds[4] = (         int  )0;
          sqlstm.sqharm[4] = (unsigned int  )0;
          sqlstm.sqharc[4] = (unsigned int   *)0;
          sqlstm.sqadto[4] = (unsigned short )0;
          sqlstm.sqtdso[4] = (unsigned short )0;
          sqlstm.sqhstv[5] = (         void  *)consecutivo;
          sqlstm.sqhstl[5] = (unsigned int  )8;
          sqlstm.sqhsts[5] = (         int  )8;
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
          sqlstm.sqhstl[7] = (unsigned int  )52;
          sqlstm.sqhsts[7] = (         int  )52;
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
          sqlstm.sqhstl[9] = (unsigned int  )4;
          sqlstm.sqhsts[9] = (         int  )4;
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
          sqlstm.sqhstl[11] = (unsigned int  )8;
          sqlstm.sqhsts[11] = (         int  )8;
          sqlstm.sqindv[11] = (         void  *)0;
          sqlstm.sqinds[11] = (         int  )0;
          sqlstm.sqharm[11] = (unsigned int  )0;
          sqlstm.sqharc[11] = (unsigned int   *)0;
          sqlstm.sqadto[11] = (unsigned short )0;
          sqlstm.sqtdso[11] = (unsigned short )0;
          sqlstm.sqhstv[12] = (         void  *)valor_deb;
          sqlstm.sqhstl[12] = (unsigned int  )8;
          sqlstm.sqhsts[12] = (         int  )8;
          sqlstm.sqindv[12] = (         void  *)0;
          sqlstm.sqinds[12] = (         int  )0;
          sqlstm.sqharm[12] = (unsigned int  )0;
          sqlstm.sqharc[12] = (unsigned int   *)0;
          sqlstm.sqadto[12] = (unsigned short )0;
          sqlstm.sqtdso[12] = (unsigned short )0;
          sqlstm.sqhstv[13] = (         void  *)valor_cre;
          sqlstm.sqhstl[13] = (unsigned int  )8;
          sqlstm.sqhsts[13] = (         int  )8;
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
                                 :consecutivo, :clase, :descripcion,
                                 :fecha, :tipo, :cuenta, :codigo_nit,
                                 :valor_deb, :valor_cre, :estado, sucursal, cen_cos; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 17;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )20;
          sqlstm.offset = (unsigned int  )411;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
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
          sqlstm.sqhstl[4] = (unsigned int  )8;
          sqlstm.sqhsts[4] = (         int  )8;
          sqlstm.sqindv[4] = (         void  *)0;
          sqlstm.sqinds[4] = (         int  )0;
          sqlstm.sqharm[4] = (unsigned int  )0;
          sqlstm.sqharc[4] = (unsigned int   *)0;
          sqlstm.sqadto[4] = (unsigned short )0;
          sqlstm.sqtdso[4] = (unsigned short )0;
          sqlstm.sqhstv[5] = (         void  *)consecutivo;
          sqlstm.sqhstl[5] = (unsigned int  )8;
          sqlstm.sqhsts[5] = (         int  )8;
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
          sqlstm.sqhstl[7] = (unsigned int  )52;
          sqlstm.sqhsts[7] = (         int  )52;
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
          sqlstm.sqhstl[9] = (unsigned int  )4;
          sqlstm.sqhsts[9] = (         int  )4;
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
          sqlstm.sqhstl[11] = (unsigned int  )8;
          sqlstm.sqhsts[11] = (         int  )8;
          sqlstm.sqindv[11] = (         void  *)0;
          sqlstm.sqinds[11] = (         int  )0;
          sqlstm.sqharm[11] = (unsigned int  )0;
          sqlstm.sqharc[11] = (unsigned int   *)0;
          sqlstm.sqadto[11] = (unsigned short )0;
          sqlstm.sqtdso[11] = (unsigned short )0;
          sqlstm.sqhstv[12] = (         void  *)valor_deb;
          sqlstm.sqhstl[12] = (unsigned int  )8;
          sqlstm.sqhsts[12] = (         int  )8;
          sqlstm.sqindv[12] = (         void  *)0;
          sqlstm.sqinds[12] = (         int  )0;
          sqlstm.sqharm[12] = (unsigned int  )0;
          sqlstm.sqharc[12] = (unsigned int   *)0;
          sqlstm.sqadto[12] = (unsigned short )0;
          sqlstm.sqtdso[12] = (unsigned short )0;
          sqlstm.sqhstv[13] = (         void  *)valor_cre;
          sqlstm.sqhstl[13] = (unsigned int  )8;
          sqlstm.sqhsts[13] = (         int  )8;
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

          if (traidos == 0) tipo_an=tipo[0];

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

              strcpy (vecmov[0], infa[loop_2].arr);
              strcpy (vecmov[1], infb[loop_2].arr);
              strcpy (vecmov[2], infc[loop_2].arr);
              strcpy (vecmov[3], infd[loop_2].arr);

              lista_movto();
          }
          num_ret = traidos;
    }
    if (!strcmp (orden,"T")) {
       /* EXEC SQL CLOSE C2A; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 17;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )494;
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

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 17;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )509;
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

             sqlstm.sqlvsn = 10;
             sqlstm.arrsiz = 17;
             sqlstm.sqladtp = &sqladt;
             sqlstm.sqltdsp = &sqltds;
             sqlstm.iters = (unsigned int  )1;
             sqlstm.offset = (unsigned int  )524;
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

    totales();

    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 17;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )539;
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

         strcpy  (cuentab.arr, cuenta[loop_2].arr);
         cuentab.len = strlen(cuentab.arr);

         strcpy  (sucursalb.arr, sucursal[loop_2].arr);
         sucursalb.len = strlen(sucursalb.arr);

         strcpy  (cen_cosb.arr, cen_cos[loop_2].arr);
         cen_cosb.len = strlen(cen_cosb.arr);

         if (strcmp(estado[loop_2].arr, "2")) {

            /* EXEC SQL select infa, infb, infc, infd
                            into :veca, :vecb, :vecc, :vecd
                     from   plan
                     where  codigo_emp = (:codigo_emp) and
                            cuenta     = (:cuentab); */ 

{
            struct sqlexd sqlstm;

            sqlstm.sqlvsn = 10;
            sqlstm.arrsiz = 17;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b\
3  from plan where (codigo_emp=:b4 and cuenta=:b5)";
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )554;
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

               sqlstm.sqlvsn = 10;
               sqlstm.arrsiz = 17;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.stmt = "select nombre into :b0  from nits where codigo\
_nit=:b1";
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )593;
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
               sqlstm.sqhstl[1] = (unsigned int  )8;
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
                  printf ("Nit (%-d) no existe\n", codigo_nit);
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
                    }
                }
            }
         }
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
  fprintf (fp,"\n");
  con_lin +=7;
}

