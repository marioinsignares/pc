
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

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[14];
};
static const struct sqlcxp sqlfpn =
{
    13,
    ".\\conmovtx.pc"
};


static const unsigned long sqlctx = 936912786;


static struct sqlexd {
   unsigned long    sqlvsn;
   unsigned long   arrsiz;
   unsigned long   iters;
   unsigned short   offset;
   unsigned short   selerr;
   unsigned short   sqlety;
   unsigned short   unused;
	 const    short   *cud;
   unsigned char    *sqlest;
	 const    char    *stmt;
   unsigned char  * *sqphsv;
   unsigned long   *sqphsl;
	    short  * *sqpind;
   unsigned long   *sqparm;
   unsigned long   * *sqparc;
   unsigned char    *sqhstv[15];
   unsigned long    sqhstl[15];
	    short   *sqindv[15];
   unsigned long    sqharm[15];
   unsigned long     *sqharc[15];
} sqlstm = {8,15};

/* Prototypes */
extern void sqlcxt (void **, const unsigned long *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, const unsigned long *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, const unsigned long *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(char *, unsigned long *);

 static const char *sq0006 = 
"select inf  from infacu            ";
 static const char *sq0003 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cue\
nta ,nvl(codigo_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado  from mov\
to_d d ,movto_c c where (((((((((d.codigo_emp(+)=c.codigo_emp and d.ano_mes(+)\
=c.ano_mes) and d.consecutivo(+)=c.consecutivo) and c.codigo_emp=to_number(:b0\
)) and c.ano_mes=to_number(:b1)) and c.tipo>=to_number(:b2)) and c.tipo<=to_nu\
mber(:b3)) and c.comprobante>=to_number(:b4)) and c.comprobante<=to_number(:b5\
)) and c.estado='9') order by tipo,comprobante            ";
 static const char *sq0004 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cue\
nta ,nvl(codigo_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado  from mov\
to_d d ,movto_c c where (((((((((d.codigo_emp(+)=c.codigo_emp and d.ano_mes(+)\
=c.ano_mes) and d.consecutivo(+)=c.consecutivo) and c.codigo_emp=to_number(:b0\
)) and c.ano_mes=to_number(:b1)) and c.tipo>=to_number(:b2)) and c.tipo<=to_nu\
mber(:b3)) and c.comprobante>=to_number(:b4)) and c.comprobante<=to_number(:b5\
)) and c.estado='9') order by c.consecutivo,secuencia            ";
 static const char *sq0005 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cue\
nta ,nvl(codigo_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado  from mov\
to_d d ,movto_c c where (((((((((d.codigo_emp(+)=c.codigo_emp and d.ano_mes(+)\
=c.ano_mes) and d.consecutivo(+)=c.consecutivo) and c.codigo_emp=to_number(:b0\
)) and c.ano_mes=to_number(:b1)) and c.tipo>=to_number(:b2)) and c.tipo<=to_nu\
mber(:b3)) and c.comprobante>=to_number(:b4)) and c.comprobante<=to_number(:b5\
)) and c.estado='9') order by c.fecha            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,164,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,34,0,4,185,0,1,0,0,1,0,2,3,0,0,
46,0,0,6,35,0,9,267,0,0,0,0,1,0,
60,0,0,6,0,0,13,274,0,1,0,0,1,0,2,9,0,0,
78,0,0,6,0,0,15,288,0,0,0,0,1,0,
92,0,0,7,140,0,4,290,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
122,0,0,3,602,0,9,300,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
160,0,0,4,609,0,9,304,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
198,0,0,5,593,0,9,308,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
236,0,0,3,0,0,13,317,0,15,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
310,0,0,4,0,0,13,324,0,15,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
384,0,0,5,0,0,13,331,0,15,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
458,0,0,3,0,0,15,375,0,0,0,0,1,0,
472,0,0,4,0,0,15,379,0,0,0,0,1,0,
486,0,0,5,0,0,15,383,0,0,0,0,1,0,
500,0,0,8,0,0,30,392,0,0,0,0,1,0,
514,0,0,9,99,0,4,450,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,9,0,
0,
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
#include <sqlproto.h>
#include <math.h>

void titulos();
int  lista_movto();
void totales_cpt();
void totales();
				     /* Parametros de comunicacion con ORACLE */

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;
 
                                            /* Variables globales del usuario */
/* VARCHAR codigo_emp [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_emp;

/* VARCHAR vecinf     [20][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } vecinf[20];

/* VARCHAR ano_mes    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR tipo_ini   [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } tipo_ini;

/* VARCHAR tipo_fin   [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } tipo_fin;

/* VARCHAR cmp_ini    [9]; */ 
struct { unsigned short len; unsigned char arr[9]; } cmp_ini;

/* VARCHAR cmp_fin    [9]; */ 
struct { unsigned short len; unsigned char arr[9]; } cmp_fin;

/* VARCHAR veca       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } veca;

/* VARCHAR vecb       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecb;

/* VARCHAR vecc       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecc;

/* VARCHAR vecd       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecd;


/* Tabla MOVTO_C y MOVTO_D */

/* VARCHAR infa       [20][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } infa[20];

/* VARCHAR infb       [20][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } infb[20];

/* VARCHAR infc       [20][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } infc[20];

/* VARCHAR infd       [20][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } infd[20];

double  comprobante[20];
double  consecutivo[20];
/* VARCHAR clase      [20][6]; */ 
struct { unsigned short len; unsigned char arr[6]; } clase[20];

/* VARCHAR descripcion[20][60]; */ 
struct { unsigned short len; unsigned char arr[62]; } descripcion[20];

/* VARCHAR fecha      [20][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } fecha[20];

int     tipo       [20];
/* VARCHAR cuenta     [20][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } cuenta[20];

double  codigo_nit [20];
double  valor_deb  [20];
double  valor_cre  [20];
/* VARCHAR estado     [20][5]; */ 
struct { unsigned short len; unsigned char arr[6]; } estado[20];

double	wval_deb;
double	wval_cre;
/* VARCHAR nomb_emp   [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nomb_emp;

/* VARCHAR codigo     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo;

/* VARCHAR cuentab    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuentab;

double  cons;
/* VARCHAR cuentax    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuentax;

double  codigo_nitb;
double  nit;
int     digito;
int     a2k;

/* EXEC SQL END DECLARE SECTION; */ 

/* EXEC SQL INCLUDE SQLCA;
 */ 
/* Copyright (c) 1985,1986 by Oracle Corporation. */

/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
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

*/

#ifndef SQLCA
#define SQLCA 1

struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ long    sqlabc;
         /* b4  */ long    sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ long    sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef SQLCA_STORAGE_CLASS
  SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif

# ifdef  SQLCA_INIT
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
#endif /* SQLCA_INIT */
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
char    wcadena[100];
char    login[20];

void main(argc, argv)
int     argc;
char    *argv[];
{
char	device[6];
int	status = 0;

    if (argc < 10)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp aaaamm orden(T,C,F) tipo_ini tipo_fin\n");
        printf ("      comp_ini comp_fin device timbrado (s/n) userid/password\n");
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

    if (!strpos ("/", argv[10]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[10]);
    uid.len = strlen(uid.arr);
/*
    if (!strcmp (orden,"T")) {
        strcpi(" tipo, comprobante           ",1,29,movto,973);
    }
    else if (!strcmp(orden,"C"))
             strcpi(" c.consecutivo, secuencia    ",1,29,movto,973);
         else if (!strcmp(orden,"F"))
                  strcpi(" c.fecha                     ",1,29,movto,973);
*/
/******************************************************
 * Establecer conexion concurrente con ORACLE (orlon) *
 ******************************************************/
    /* EXEC SQL CONNECT :uid; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.iters = (unsigned long  )100;
    sqlstm.offset = (unsigned short)2;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&uid;
    sqlstm.sqhstl[0] = (unsigned long  )102;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
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

    /* EXEC SQL select y2k
             into   :a2k
             from   ano2000; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.stmt = "select y2k into :b0  from ano2000 ";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)28;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&a2k;
    sqlstm.sqhstl[0] = (unsigned long  )4;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    if (sqlca.sqlcode != 0 ) {
       fprintf (stderr, "Error, No existe registro alguno en tabla Y2K (%d)\n", sqlca.sqlcode);
       exit (1);
    }

    strcpy (ano_mes.arr,    argv[2]);
    ano_mes.len    =        strlen(ano_mes.arr);
    periodoy2k(ano_mes.arr,a2k);
    ano_mes.len    =        strlen(ano_mes.arr);
    strcpy (cadena,         ano_mes.arr);
    strorg (cadena,1,a2k);
    anoi           =        atoi(cadena);
    strcpy (cadena,         ano_mes.arr);
    strorg (cadena,a2k+1,2);
    mesi           =        atoi(cadena);
    if (mesi==13)
        mesi=12;

    /* EXEC SQL DECLARE C2A CURSOR FOR
          select nvl(infa,'0'), decode(clase,'XX','0',nvl(infb,'0')),
                 nvl(infc,'0'), nvl(infd,'0'),
                 comprobante, c.consecutivo,
                 clase, descripcion, fecha, tipo, cuenta,
                 nvl(codigo_nit,970), nvl(valor_deb,0), nvl(valor_cre,0), estado
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
                 c.estado         =   '9' 
          order by tipo, comprobante; */ 


     /* EXEC SQL DECLARE C2B CURSOR FOR
          select nvl(infa,'0'), decode(clase,'XX','0',nvl(infb,'0')),
                 nvl(infc,'0'), nvl(infd,'0'),
                 comprobante, c.consecutivo,
                 clase, descripcion, fecha, tipo, cuenta,
                 nvl(codigo_nit,970), nvl(valor_deb,0), nvl(valor_cre,0), estado
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
                 c.estado         =   '9' 
          order by c.consecutivo, secuencia; */ 


     /* EXEC SQL DECLARE C2C CURSOR FOR
          select nvl(infa,'0'), decode(clase,'XX','0',nvl(infb,'0')),
                 nvl(infc,'0'), nvl(infd,'0'),
                 comprobante, c.consecutivo,
                 clase, descripcion, fecha, tipo, cuenta,
                 nvl(codigo_nit,970), nvl(valor_deb,0), nvl(valor_cre,0), estado
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
                 c.estado         =   '9' 
          order by c.fecha; */ 


     /* EXEC SQL DECLARE C13 CURSOR FOR
              select inf
              from   infacu; */ 


    /* EXEC SQL OPEN C13; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.stmt = sq0006;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)46;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = 0;
    traidos = 0;
    num_ret = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C13 INTO :vecinf; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 3;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)60;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)vecinf;
          sqlstm.sqhstl[0] = (unsigned long  )24;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqharc[0] = (unsigned long   *)0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
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

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)78;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



     /* EXEC SQL select n.nombre, n.nit, n.digito
                     into :nomb_emp, :nit, :digito
              from   nits n, empresas e
              where  n.codigo_nit = e.codigo_nit and
                     e.codigo_emp = to_number(:codigo_emp); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 4;
     sqlstm.stmt = "select n.nombre ,n.nit ,n.digito into :b0,:b1,:b2  from \
nits n ,empresas e where (n.codigo_nit=e.codigo_nit and e.codigo_emp=to_number\
(:b3))";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)92;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
     sqlstm.sqhstl[0] = (unsigned long  )62;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&nit;
     sqlstm.sqhstl[1] = (unsigned long  )8;
     sqlstm.sqindv[1] = (         short *)0;
     sqlstm.sqharm[1] = (unsigned long )0;
     sqlstm.sqhstv[2] = (unsigned char  *)&digito;
     sqlstm.sqhstl[2] = (unsigned long  )4;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
     sqlstm.sqhstl[3] = (unsigned long  )8;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
        fprintf (stderr, "Error leyendo EMPRESAS (%d)\n", sqlca.sqlcode);

    if (!strcmp (orden,"T")) {
       /* EXEC SQL OPEN C2A; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 6;
       sqlstm.stmt = sq0003;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)122;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
       sqlstm.sqhstl[0] = (unsigned long  )8;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
       sqlstm.sqhstl[1] = (unsigned long  )22;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&tipo_ini;
       sqlstm.sqhstl[2] = (unsigned long  )8;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&tipo_fin;
       sqlstm.sqhstl[3] = (unsigned long  )8;
       sqlstm.sqindv[3] = (         short *)0;
       sqlstm.sqharm[3] = (unsigned long )0;
       sqlstm.sqhstv[4] = (unsigned char  *)&cmp_ini;
       sqlstm.sqhstl[4] = (unsigned long  )11;
       sqlstm.sqindv[4] = (         short *)0;
       sqlstm.sqharm[4] = (unsigned long )0;
       sqlstm.sqhstv[5] = (unsigned char  *)&cmp_fin;
       sqlstm.sqhstl[5] = (unsigned long  )11;
       sqlstm.sqindv[5] = (         short *)0;
       sqlstm.sqharm[5] = (unsigned long )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    }
    else
       if (!strcmp (orden,"C")) {
          /* EXEC SQL OPEN C2B; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 6;
          sqlstm.stmt = sq0004;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)160;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
          sqlstm.sqhstl[0] = (unsigned long  )8;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
          sqlstm.sqhstl[1] = (unsigned long  )22;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&tipo_ini;
          sqlstm.sqhstl[2] = (unsigned long  )8;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqhstv[3] = (unsigned char  *)&tipo_fin;
          sqlstm.sqhstl[3] = (unsigned long  )8;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqhstv[4] = (unsigned char  *)&cmp_ini;
          sqlstm.sqhstl[4] = (unsigned long  )11;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqhstv[5] = (unsigned char  *)&cmp_fin;
          sqlstm.sqhstl[5] = (unsigned long  )11;
          sqlstm.sqindv[5] = (         short *)0;
          sqlstm.sqharm[5] = (unsigned long )0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


       }
       else
          if (!strcmp (orden,"F")) {
             /* EXEC SQL OPEN C2C; */ 

{
             struct sqlexd sqlstm;

             sqlstm.sqlvsn = 8;
             sqlstm.arrsiz = 6;
             sqlstm.stmt = sq0005;
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)198;
             sqlstm.cud = sqlcud0;
             sqlstm.sqlest = (unsigned char  *)&sqlca;
             sqlstm.sqlety = (unsigned short)0;
             sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
             sqlstm.sqhstl[0] = (unsigned long  )8;
             sqlstm.sqindv[0] = (         short *)0;
             sqlstm.sqharm[0] = (unsigned long )0;
             sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
             sqlstm.sqhstl[1] = (unsigned long  )22;
             sqlstm.sqindv[1] = (         short *)0;
             sqlstm.sqharm[1] = (unsigned long )0;
             sqlstm.sqhstv[2] = (unsigned char  *)&tipo_ini;
             sqlstm.sqhstl[2] = (unsigned long  )8;
             sqlstm.sqindv[2] = (         short *)0;
             sqlstm.sqharm[2] = (unsigned long )0;
             sqlstm.sqhstv[3] = (unsigned char  *)&tipo_fin;
             sqlstm.sqhstl[3] = (unsigned long  )8;
             sqlstm.sqindv[3] = (         short *)0;
             sqlstm.sqharm[3] = (unsigned long )0;
             sqlstm.sqhstv[4] = (unsigned char  *)&cmp_ini;
             sqlstm.sqhstl[4] = (unsigned long  )11;
             sqlstm.sqindv[4] = (         short *)0;
             sqlstm.sqharm[4] = (unsigned long )0;
             sqlstm.sqhstv[5] = (unsigned char  *)&cmp_fin;
             sqlstm.sqhstl[5] = (unsigned long  )11;
             sqlstm.sqindv[5] = (         short *)0;
             sqlstm.sqharm[5] = (unsigned long )0;
             sqlstm.sqphsv = sqlstm.sqhstv;
             sqlstm.sqphsl = sqlstm.sqhstl;
             sqlstm.sqpind = sqlstm.sqindv;
             sqlstm.sqparm = sqlstm.sqharm;
             sqlstm.sqparc = sqlstm.sqharc;
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
                                 :fecha, :tipo, :cuenta, :codigo_nit,
                                 :valor_deb, :valor_cre, :estado; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 15;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)236;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)infa;
          sqlstm.sqhstl[0] = (unsigned long  )24;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqharc[0] = (unsigned long   *)0;
          sqlstm.sqhstv[1] = (unsigned char  *)infb;
          sqlstm.sqhstl[1] = (unsigned long  )24;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqharc[1] = (unsigned long   *)0;
          sqlstm.sqhstv[2] = (unsigned char  *)infc;
          sqlstm.sqhstl[2] = (unsigned long  )24;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqharc[2] = (unsigned long   *)0;
          sqlstm.sqhstv[3] = (unsigned char  *)infd;
          sqlstm.sqhstl[3] = (unsigned long  )24;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqharc[3] = (unsigned long   *)0;
          sqlstm.sqhstv[4] = (unsigned char  *)comprobante;
          sqlstm.sqhstl[4] = (unsigned long  )8;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqharc[4] = (unsigned long   *)0;
          sqlstm.sqhstv[5] = (unsigned char  *)consecutivo;
          sqlstm.sqhstl[5] = (unsigned long  )8;
          sqlstm.sqindv[5] = (         short *)0;
          sqlstm.sqharm[5] = (unsigned long )0;
          sqlstm.sqharc[5] = (unsigned long   *)0;
          sqlstm.sqhstv[6] = (unsigned char  *)clase;
          sqlstm.sqhstl[6] = (unsigned long  )8;
          sqlstm.sqindv[6] = (         short *)0;
          sqlstm.sqharm[6] = (unsigned long )0;
          sqlstm.sqharc[6] = (unsigned long   *)0;
          sqlstm.sqhstv[7] = (unsigned char  *)descripcion;
          sqlstm.sqhstl[7] = (unsigned long  )64;
          sqlstm.sqindv[7] = (         short *)0;
          sqlstm.sqharm[7] = (unsigned long )0;
          sqlstm.sqharc[7] = (unsigned long   *)0;
          sqlstm.sqhstv[8] = (unsigned char  *)fecha;
          sqlstm.sqhstl[8] = (unsigned long  )24;
          sqlstm.sqindv[8] = (         short *)0;
          sqlstm.sqharm[8] = (unsigned long )0;
          sqlstm.sqharc[8] = (unsigned long   *)0;
          sqlstm.sqhstv[9] = (unsigned char  *)tipo;
          sqlstm.sqhstl[9] = (unsigned long  )4;
          sqlstm.sqindv[9] = (         short *)0;
          sqlstm.sqharm[9] = (unsigned long )0;
          sqlstm.sqharc[9] = (unsigned long   *)0;
          sqlstm.sqhstv[10] = (unsigned char  *)cuenta;
          sqlstm.sqhstl[10] = (unsigned long  )24;
          sqlstm.sqindv[10] = (         short *)0;
          sqlstm.sqharm[10] = (unsigned long )0;
          sqlstm.sqharc[10] = (unsigned long   *)0;
          sqlstm.sqhstv[11] = (unsigned char  *)codigo_nit;
          sqlstm.sqhstl[11] = (unsigned long  )8;
          sqlstm.sqindv[11] = (         short *)0;
          sqlstm.sqharm[11] = (unsigned long )0;
          sqlstm.sqharc[11] = (unsigned long   *)0;
          sqlstm.sqhstv[12] = (unsigned char  *)valor_deb;
          sqlstm.sqhstl[12] = (unsigned long  )8;
          sqlstm.sqindv[12] = (         short *)0;
          sqlstm.sqharm[12] = (unsigned long )0;
          sqlstm.sqharc[12] = (unsigned long   *)0;
          sqlstm.sqhstv[13] = (unsigned char  *)valor_cre;
          sqlstm.sqhstl[13] = (unsigned long  )8;
          sqlstm.sqindv[13] = (         short *)0;
          sqlstm.sqharm[13] = (unsigned long )0;
          sqlstm.sqharc[13] = (unsigned long   *)0;
          sqlstm.sqhstv[14] = (unsigned char  *)estado;
          sqlstm.sqhstl[14] = (unsigned long  )8;
          sqlstm.sqindv[14] = (         short *)0;
          sqlstm.sqharm[14] = (unsigned long )0;
          sqlstm.sqharc[14] = (unsigned long   *)0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


          }
          else
             if (!strcmp (orden,"C")) {
          /* EXEC SQL FETCH C2B INTO :infa, :infb, :infc, :infd, :comprobante,
                                 :consecutivo, :clase, :descripcion,
                                 :fecha, :tipo, :cuenta, :codigo_nit,
                                 :valor_deb, :valor_cre, :estado; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 15;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)310;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)infa;
          sqlstm.sqhstl[0] = (unsigned long  )24;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqharc[0] = (unsigned long   *)0;
          sqlstm.sqhstv[1] = (unsigned char  *)infb;
          sqlstm.sqhstl[1] = (unsigned long  )24;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqharc[1] = (unsigned long   *)0;
          sqlstm.sqhstv[2] = (unsigned char  *)infc;
          sqlstm.sqhstl[2] = (unsigned long  )24;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqharc[2] = (unsigned long   *)0;
          sqlstm.sqhstv[3] = (unsigned char  *)infd;
          sqlstm.sqhstl[3] = (unsigned long  )24;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqharc[3] = (unsigned long   *)0;
          sqlstm.sqhstv[4] = (unsigned char  *)comprobante;
          sqlstm.sqhstl[4] = (unsigned long  )8;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqharc[4] = (unsigned long   *)0;
          sqlstm.sqhstv[5] = (unsigned char  *)consecutivo;
          sqlstm.sqhstl[5] = (unsigned long  )8;
          sqlstm.sqindv[5] = (         short *)0;
          sqlstm.sqharm[5] = (unsigned long )0;
          sqlstm.sqharc[5] = (unsigned long   *)0;
          sqlstm.sqhstv[6] = (unsigned char  *)clase;
          sqlstm.sqhstl[6] = (unsigned long  )8;
          sqlstm.sqindv[6] = (         short *)0;
          sqlstm.sqharm[6] = (unsigned long )0;
          sqlstm.sqharc[6] = (unsigned long   *)0;
          sqlstm.sqhstv[7] = (unsigned char  *)descripcion;
          sqlstm.sqhstl[7] = (unsigned long  )64;
          sqlstm.sqindv[7] = (         short *)0;
          sqlstm.sqharm[7] = (unsigned long )0;
          sqlstm.sqharc[7] = (unsigned long   *)0;
          sqlstm.sqhstv[8] = (unsigned char  *)fecha;
          sqlstm.sqhstl[8] = (unsigned long  )24;
          sqlstm.sqindv[8] = (         short *)0;
          sqlstm.sqharm[8] = (unsigned long )0;
          sqlstm.sqharc[8] = (unsigned long   *)0;
          sqlstm.sqhstv[9] = (unsigned char  *)tipo;
          sqlstm.sqhstl[9] = (unsigned long  )4;
          sqlstm.sqindv[9] = (         short *)0;
          sqlstm.sqharm[9] = (unsigned long )0;
          sqlstm.sqharc[9] = (unsigned long   *)0;
          sqlstm.sqhstv[10] = (unsigned char  *)cuenta;
          sqlstm.sqhstl[10] = (unsigned long  )24;
          sqlstm.sqindv[10] = (         short *)0;
          sqlstm.sqharm[10] = (unsigned long )0;
          sqlstm.sqharc[10] = (unsigned long   *)0;
          sqlstm.sqhstv[11] = (unsigned char  *)codigo_nit;
          sqlstm.sqhstl[11] = (unsigned long  )8;
          sqlstm.sqindv[11] = (         short *)0;
          sqlstm.sqharm[11] = (unsigned long )0;
          sqlstm.sqharc[11] = (unsigned long   *)0;
          sqlstm.sqhstv[12] = (unsigned char  *)valor_deb;
          sqlstm.sqhstl[12] = (unsigned long  )8;
          sqlstm.sqindv[12] = (         short *)0;
          sqlstm.sqharm[12] = (unsigned long )0;
          sqlstm.sqharc[12] = (unsigned long   *)0;
          sqlstm.sqhstv[13] = (unsigned char  *)valor_cre;
          sqlstm.sqhstl[13] = (unsigned long  )8;
          sqlstm.sqindv[13] = (         short *)0;
          sqlstm.sqharm[13] = (unsigned long )0;
          sqlstm.sqharc[13] = (unsigned long   *)0;
          sqlstm.sqhstv[14] = (unsigned char  *)estado;
          sqlstm.sqhstl[14] = (unsigned long  )8;
          sqlstm.sqindv[14] = (         short *)0;
          sqlstm.sqharm[14] = (unsigned long )0;
          sqlstm.sqharc[14] = (unsigned long   *)0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


             }
             else
                if (!strcmp (orden,"F")) {
          /* EXEC SQL FETCH C2C INTO :infa, :infb, :infc, :infd, :comprobante,
                                 :consecutivo, :clase, :descripcion,
                                 :fecha, :tipo, :cuenta, :codigo_nit,
                                 :valor_deb, :valor_cre, :estado; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 15;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)384;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)infa;
          sqlstm.sqhstl[0] = (unsigned long  )24;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqharc[0] = (unsigned long   *)0;
          sqlstm.sqhstv[1] = (unsigned char  *)infb;
          sqlstm.sqhstl[1] = (unsigned long  )24;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqharc[1] = (unsigned long   *)0;
          sqlstm.sqhstv[2] = (unsigned char  *)infc;
          sqlstm.sqhstl[2] = (unsigned long  )24;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqharc[2] = (unsigned long   *)0;
          sqlstm.sqhstv[3] = (unsigned char  *)infd;
          sqlstm.sqhstl[3] = (unsigned long  )24;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqharc[3] = (unsigned long   *)0;
          sqlstm.sqhstv[4] = (unsigned char  *)comprobante;
          sqlstm.sqhstl[4] = (unsigned long  )8;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqharc[4] = (unsigned long   *)0;
          sqlstm.sqhstv[5] = (unsigned char  *)consecutivo;
          sqlstm.sqhstl[5] = (unsigned long  )8;
          sqlstm.sqindv[5] = (         short *)0;
          sqlstm.sqharm[5] = (unsigned long )0;
          sqlstm.sqharc[5] = (unsigned long   *)0;
          sqlstm.sqhstv[6] = (unsigned char  *)clase;
          sqlstm.sqhstl[6] = (unsigned long  )8;
          sqlstm.sqindv[6] = (         short *)0;
          sqlstm.sqharm[6] = (unsigned long )0;
          sqlstm.sqharc[6] = (unsigned long   *)0;
          sqlstm.sqhstv[7] = (unsigned char  *)descripcion;
          sqlstm.sqhstl[7] = (unsigned long  )64;
          sqlstm.sqindv[7] = (         short *)0;
          sqlstm.sqharm[7] = (unsigned long )0;
          sqlstm.sqharc[7] = (unsigned long   *)0;
          sqlstm.sqhstv[8] = (unsigned char  *)fecha;
          sqlstm.sqhstl[8] = (unsigned long  )24;
          sqlstm.sqindv[8] = (         short *)0;
          sqlstm.sqharm[8] = (unsigned long )0;
          sqlstm.sqharc[8] = (unsigned long   *)0;
          sqlstm.sqhstv[9] = (unsigned char  *)tipo;
          sqlstm.sqhstl[9] = (unsigned long  )4;
          sqlstm.sqindv[9] = (         short *)0;
          sqlstm.sqharm[9] = (unsigned long )0;
          sqlstm.sqharc[9] = (unsigned long   *)0;
          sqlstm.sqhstv[10] = (unsigned char  *)cuenta;
          sqlstm.sqhstl[10] = (unsigned long  )24;
          sqlstm.sqindv[10] = (         short *)0;
          sqlstm.sqharm[10] = (unsigned long )0;
          sqlstm.sqharc[10] = (unsigned long   *)0;
          sqlstm.sqhstv[11] = (unsigned char  *)codigo_nit;
          sqlstm.sqhstl[11] = (unsigned long  )8;
          sqlstm.sqindv[11] = (         short *)0;
          sqlstm.sqharm[11] = (unsigned long )0;
          sqlstm.sqharc[11] = (unsigned long   *)0;
          sqlstm.sqhstv[12] = (unsigned char  *)valor_deb;
          sqlstm.sqhstl[12] = (unsigned long  )8;
          sqlstm.sqindv[12] = (         short *)0;
          sqlstm.sqharm[12] = (unsigned long )0;
          sqlstm.sqharc[12] = (unsigned long   *)0;
          sqlstm.sqhstv[13] = (unsigned char  *)valor_cre;
          sqlstm.sqhstl[13] = (unsigned long  )8;
          sqlstm.sqindv[13] = (         short *)0;
          sqlstm.sqharm[13] = (unsigned long )0;
          sqlstm.sqharc[13] = (unsigned long   *)0;
          sqlstm.sqhstv[14] = (unsigned char  *)estado;
          sqlstm.sqhstl[14] = (unsigned long  )8;
          sqlstm.sqindv[14] = (         short *)0;
          sqlstm.sqharm[14] = (unsigned long )0;
          sqlstm.sqharc[14] = (unsigned long   *)0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                }

          if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
             fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);

          if (traidos == 0) tipo_an=tipo[0];

          staora  = sqlca.sqlcode;
          if (sqlca.sqlcode == -1405) 
              staora = 0;

          traidos = sqlca.sqlerrd[2];

          for (loop_2 = 0; loop_2 < (traidos - num_ret); loop_2++) {
          printf("Entrando");
          getchar();
              infa       [loop_2].arr  [infa       [loop_2].len] = '\0';
              infb       [loop_2].arr  [infb       [loop_2].len] = '\0';
              infc       [loop_2].arr  [infc       [loop_2].len] = '\0';
              infd       [loop_2].arr  [infd       [loop_2].len] = '\0';
              clase      [loop_2].arr  [clase      [loop_2].len] = '\0';
              descripcion[loop_2].arr  [descripcion[loop_2].len] = '\0';
              fecha      [loop_2].arr  [fecha      [loop_2].len] = '\0';
              cuenta     [loop_2].arr  [cuenta     [loop_2].len] = '\0';
              estado     [loop_2].arr  [estado     [loop_2].len] = '\0';

              strcpy (vecmov[0], infa[loop_2].arr);
              strcpy (vecmov[1], infb[loop_2].arr);
              strcpy (vecmov[2], infc[loop_2].arr);
              strcpy (vecmov[3], infd[loop_2].arr);
          printf("Saliendo1");
          getchar();

              lista_movto();
          printf("Saliendo2");
          getchar();
          }
          num_ret = traidos;
    }
    if (!strcmp (orden,"T")) {
       /* EXEC SQL CLOSE C2A; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 15;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)458;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    }
    else
       if (!strcmp (orden,"C")) {
          /* EXEC SQL CLOSE C2B; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 15;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)472;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


       }
       else
          if (!strcmp (orden,"F")) {
             /* EXEC SQL CLOSE C2C; */ 

{
             struct sqlexd sqlstm;

             sqlstm.sqlvsn = 8;
             sqlstm.arrsiz = 15;
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)486;
             sqlstm.cud = sqlcud0;
             sqlstm.sqlest = (unsigned char  *)&sqlca;
             sqlstm.sqlety = (unsigned short)0;
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

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 15;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)500;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
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
 char fecha[20];
 extern char mes[12][12];
 double decimal;
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
     fmtnum("zzz,zzz,zzz,zzz",cadena,r_t);
     fprintf (fp,"%s%s%25s %18s",condensado_on,ancho_on,"NIT :",r_t);
     if (digito > 0) {
        sprintf (cadena,"%d",digito);
        fprintf (fp,"-%s",fmtnum("z",cadena,r_t));
     }
     else if (digito == 0)
             fprintf (fp,"-%s","0");
     fprintf(fp,"%s\n\n",ancho_off);
 }
 fecha_system(fecha);
 fprintf(fp,"%s%s%s%-44s%s%10s / %d",diezcpi,condensado_on,"FECHA PROCESO : ",fecha,"PERIODO : ",mes[mesi-1],anoi);
 fprintf(fp,"%48s %d\n\n","PAGINA ",con_pag);
 fprintf(fp,"%89s","   CUENTA    DESCRIPCION                               FECHA   TC CL  DOCUM.    INFA/INFC");
 fprintf(fp,"%48s\n\n","    INFB/INFD        DEBITOS       CREDITOS  CNS");
 con_lin = 6;
 printf("TITULOS");
 getchar();
}


int lista_movto()
{
         strcpy  (cuentab.arr, cuenta[loop_2].arr);
         cuentab.len = strlen(cuentab.arr);

         if (strcmp(estado[loop_2].arr, "2")) {

            /* EXEC SQL select infa, infb, infc, infd
                            into :veca, :vecb, :vecc, :vecd
                     from   plan
                     where  codigo_emp = (:codigo_emp) and
                            cuenta     = (:cuentab); */ 

{
            struct sqlexd sqlstm;

            sqlstm.sqlvsn = 8;
            sqlstm.arrsiz = 15;
            sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b\
3  from plan where (codigo_emp=:b4 and cuenta=:b5)";
            sqlstm.iters = (unsigned long  )1;
            sqlstm.offset = (unsigned short)514;
            sqlstm.selerr = (unsigned short)1;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)0;
            sqlstm.sqhstv[0] = (unsigned char  *)&veca;
            sqlstm.sqhstl[0] = (unsigned long  )22;
            sqlstm.sqindv[0] = (         short *)0;
            sqlstm.sqharm[0] = (unsigned long )0;
            sqlstm.sqhstv[1] = (unsigned char  *)&vecb;
            sqlstm.sqhstl[1] = (unsigned long  )22;
            sqlstm.sqindv[1] = (         short *)0;
            sqlstm.sqharm[1] = (unsigned long )0;
            sqlstm.sqhstv[2] = (unsigned char  *)&vecc;
            sqlstm.sqhstl[2] = (unsigned long  )22;
            sqlstm.sqindv[2] = (         short *)0;
            sqlstm.sqharm[2] = (unsigned long )0;
            sqlstm.sqhstv[3] = (unsigned char  *)&vecd;
            sqlstm.sqhstl[3] = (unsigned long  )22;
            sqlstm.sqindv[3] = (         short *)0;
            sqlstm.sqharm[3] = (unsigned long )0;
            sqlstm.sqhstv[4] = (unsigned char  *)&codigo_emp;
            sqlstm.sqhstl[4] = (unsigned long  )8;
            sqlstm.sqindv[4] = (         short *)0;
            sqlstm.sqharm[4] = (unsigned long )0;
            sqlstm.sqhstv[5] = (unsigned char  *)&cuentab;
            sqlstm.sqhstl[5] = (unsigned long  )22;
            sqlstm.sqindv[5] = (         short *)0;
            sqlstm.sqharm[5] = (unsigned long )0;
            sqlstm.sqphsv = sqlstm.sqhstv;
            sqlstm.sqphsl = sqlstm.sqhstl;
            sqlstm.sqpind = sqlstm.sqindv;
            sqlstm.sqparm = sqlstm.sqharm;
            sqlstm.sqparc = sqlstm.sqharc;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



            if (sqlca.sqlcode == 1403) 
               fprintf (stderr,"Cuentab (%-s) no existe\n", cuentab.arr);

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
         fmtnum("   99999999",cuenta[loop_2].arr,r_t);
         fprintf (fp,"%-13s",r_t);
         fprintf (fp,"%-41s",descripcion[loop_2].arr);
         strcpy  (cadena,fecha[loop_2].arr);
         strcpy (wcadena, cadena);
         numero_fechaf(wcadena);
         strcpy  (cadena, wcadena);
         fprintf (fp,"%s ",cadena);
         fprintf (fp,"%02d ",tipo[loop_2]);
         fprintf (fp,"%-3s",clase[loop_2].arr);
         sprintf (cadena,"%6.0f",comprobante[loop_2]);
         fmtnum("zzzzz9",cadena,r_t);
         fprintf (fp,"%-7s",r_t);
         fprintf (fp,"%13s",vecmov[0]);
         fprintf (fp,"%13s",vecmov[1]);
         sprintf (cadena,"%9.2f",valor_deb[loop_2]);
         fmtnum("zzzz,zzz,zz9.99",cadena,r_t);
         fprintf (fp,"%15s",r_t);
         sprintf (cadena,"%9.2f",valor_cre[loop_2]);
         fmtnum("zzzz,zzz,zz9.99",cadena,r_t);
         fprintf (fp,"%15s",r_t);
         sprintf (cadena,"%5f",consecutivo[loop_2]);
         fmtnum("z,zzz",cadena,r_t);
         fprintf (fp,"%5s\n",r_t);
         fprintf (fp,"%89s",vecmov[2]);
         fprintf (fp,"%13s\n",vecmov[3]);
         tot_deb[0] += valor_deb[loop_2];
         tot_deb[1] += valor_deb[loop_2];
         tot_cre[0] += valor_cre[loop_2];
         tot_cre[1] += valor_cre[loop_2];
         con_lin +=2;
printf("lista_movto4");
getchar();
         return 0;
}

void totales_cpt()
{
printf("totales_cpt");
getchar();
  if (con_lin > 60)
      titulos();
  fprintf (fp,"\n%102s","Totales comprobante ========================> ");
  sprintf (cadena,"%9.2f",tot_deb[0]);
  fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%17s",r_t);
  sprintf (cadena,"%9.2f",tot_cre[0]);
  fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%17s\n\n",r_t);
  if (tot_deb[0] != tot_cre[0])  {
      fprintf (fp,"\n%102s","****  MOVIMIENTO DESCUADRADO ****  ===========> ");
      sprintf (cadena,"%9.2f",tot_deb[0]-tot_cre[0]);
      fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t);
      fprintf (fp,"%17s\n",r_t);
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
printf("totales");
getchar();
  if (con_lin > 60)
      titulos();
  if (!strcmp(orden,"T"))
      totales_cpt();
  fprintf (fp,"\n%102s","Total del movimiento listado ===============> ");
  sprintf (cadena,"%9.2f",tot_deb[1]);
  fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%17s",r_t);
  sprintf (cadena,"%9.2f",tot_cre[1]);
  fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%17s\n\n",r_t);
  if (tot_deb[1] != tot_cre[1])  {
      fprintf (fp,"\n%102s","****  MOVIMIENTO DESCUADRADO ****  ===========> ");
      sprintf (cadena,"%9.2f",tot_deb[1]-tot_cre[1]);
      fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t);
      fprintf (fp,"%17s\n",r_t);
  }
  fprintf (fp,"\n\n\nPROCESADO POR : ______________________  REVISADO POR : ______________________");
  fprintf (fp,"\n");
  con_lin +=7;
}
