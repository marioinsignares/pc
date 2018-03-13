
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
    ".\\conmovtb.pc"
};


static const unsigned long sqlctx = 1227980440;


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
   unsigned char    *sqhstv[17];
   unsigned long    sqhstl[17];
	    short   *sqindv[17];
   unsigned long    sqharm[17];
   unsigned long     *sqharc[17];
} sqlstm = {8,17};

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

 static const char *sq0005 = 
"select inf  from infacu            ";
 static const char *sq0002 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cue\
nta ,nvl(codigo_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado ,sucursal\
 ,cen_cos  from movto_d d ,movto_c c where (((((((((d.codigo_emp(+)=c.codigo_e\
mp and d.ano_mes(+)=c.ano_mes) and d.consecutivo(+)=c.consecutivo) and c.codig\
o_emp=to_number(:b0)) and c.ano_mes=to_number(:b1)) and c.tipo>=to_number(:b2)\
) and c.tipo<=to_number(:b3)) and c.comprobante>=to_number(:b4)) and c.comprob\
ante<=to_number(:b5)) and c.estado<>'9') order by tipo,comprobante            ";
 static const char *sq0003 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cue\
nta ,nvl(codigo_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado ,sucursal\
 ,cen_cos  from movto_d d ,movto_c c where (((((((((d.codigo_emp(+)=c.codigo_e\
mp and d.ano_mes(+)=c.ano_mes) and d.consecutivo(+)=c.consecutivo) and c.codig\
o_emp=to_number(:b0)) and c.ano_mes=to_number(:b1)) and c.tipo>=to_number(:b2)\
) and c.tipo<=to_number(:b3)) and c.comprobante>=to_number(:b4)) and c.comprob\
ante<=to_number(:b5)) and c.estado<>'9') order by c.consecutivo,secuencia     \
       ";
 static const char *sq0004 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cue\
nta ,nvl(codigo_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado ,sucursal\
 ,cen_cos  from movto_d d ,movto_c c where (((((((((d.codigo_emp(+)=c.codigo_e\
mp and d.ano_mes(+)=c.ano_mes) and d.consecutivo(+)=c.consecutivo) and c.codig\
o_emp=to_number(:b0)) and c.ano_mes=to_number(:b1)) and c.tipo>=to_number(:b2)\
) and c.tipo<=to_number(:b3)) and c.comprobante>=to_number(:b4)) and c.comprob\
ante<=to_number(:b5)) and c.estado<>'9') order by c.fecha            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,172,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,5,35,0,9,263,0,0,0,0,1,0,
42,0,0,5,0,0,13,270,0,1,0,0,1,0,2,9,0,0,
60,0,0,5,0,0,15,284,0,0,0,0,1,0,
74,0,0,6,140,0,4,286,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
104,0,0,2,622,0,9,296,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
142,0,0,3,629,0,9,300,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
180,0,0,4,613,0,9,304,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
218,0,0,2,0,0,13,313,0,17,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,
9,0,0,2,9,0,0,
300,0,0,3,0,0,13,320,0,17,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,
9,0,0,2,9,0,0,
382,0,0,4,0,0,13,327,0,17,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,
9,0,0,2,9,0,0,
464,0,0,7,0,0,29,367,0,0,0,0,1,0,
478,0,0,2,0,0,15,375,0,0,0,0,1,0,
492,0,0,3,0,0,15,379,0,0,0,0,1,0,
506,0,0,4,0,0,15,383,0,0,0,0,1,0,
520,0,0,8,0,0,30,393,0,0,0,0,1,0,
534,0,0,9,99,0,4,461,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,9,0,
0,
572,0,0,10,54,0,4,472,0,2,1,0,1,0,2,9,0,0,1,4,0,0,
594,0,0,11,162,0,4,649,0,6,5,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
632,0,0,12,55,0,3,667,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
666,0,0,13,211,0,5,680,0,7,7,0,1,0,1,4,0,0,1,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,9,0,0,
708,0,0,14,209,0,5,697,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
746,0,0,15,214,0,4,714,0,8,7,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,
0,0,1,9,0,0,1,9,0,0,
792,0,0,16,63,0,3,733,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,1,9,
0,0,1,9,0,0,
834,0,0,17,249,0,5,743,0,9,9,0,1,0,1,4,0,0,1,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,4,0,0,1,9,0,0,1,9,0,0,
884,0,0,18,122,0,4,765,0,3,2,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,
910,0,0,19,112,0,3,778,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
932,0,0,20,120,0,5,789,0,3,3,0,1,0,1,4,0,0,1,9,0,0,1,9,0,0,
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
    if (argc < 12)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp aaaamm asiento(s/n) orden(T,C,F) tipo_ini tipo_fin\n");
        printf ("      comp_ini comp_fin device timbrado (s/n) userid/password\n");
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
                 nvl(codigo_nit,970), nvl(valor_deb,0), nvl(valor_cre,0), estado, sucursal, cen_cos
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
                 c.estado        <>   '9'
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
                 c.codigo_emp     = to_number(:codigo_emp)        and
                 c.ano_mes        = to_number(:ano_mes)           and
                 c.tipo          >= to_number(:tipo_ini)          and
                 c.tipo          <= to_number(:tipo_fin)          and
                 c.comprobante   >= to_number(:cmp_ini)           and
                 c.comprobante   <= to_number(:cmp_fin)           and
                 c.estado        <>   '9'
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
                 c.codigo_emp     = to_number(:codigo_emp)        and
                 c.ano_mes        = to_number(:ano_mes)           and
                 c.tipo          >= to_number(:tipo_ini)          and
                 c.tipo          <= to_number(:tipo_fin)          and
                 c.comprobante   >= to_number(:cmp_ini)           and
                 c.comprobante   <= to_number(:cmp_fin)           and
                 c.estado        <>   '9'
          order by c.fecha; */ 


     /* EXEC SQL DECLARE C13 CURSOR FOR
              select inf
              from   infacu; */ 


    /* EXEC SQL OPEN C13; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.stmt = sq0005;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)28;
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
          sqlstm.offset = (unsigned short)42;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)vecinf;
          sqlstm.sqhstl[0] = (unsigned long  )16;
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
    sqlstm.offset = (unsigned short)60;
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
    sqlstm.stmt = "select n.nombre ,n.nit ,n.digito into :b0,:b1,:b2  from n\
its n ,empresas e where (n.codigo_nit=e.codigo_nit and e.codigo_emp=to_number(\
:b3))";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)74;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
    sqlstm.sqhstl[0] = (unsigned long  )53;
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
    sqlstm.sqhstl[3] = (unsigned long  )5;
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
       sqlstm.stmt = sq0002;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)104;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
       sqlstm.sqhstl[0] = (unsigned long  )5;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
       sqlstm.sqhstl[1] = (unsigned long  )22;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&tipo_ini;
       sqlstm.sqhstl[2] = (unsigned long  )12;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&tipo_fin;
       sqlstm.sqhstl[3] = (unsigned long  )12;
       sqlstm.sqindv[3] = (         short *)0;
       sqlstm.sqharm[3] = (unsigned long )0;
       sqlstm.sqhstv[4] = (unsigned char  *)&cmp_ini;
       sqlstm.sqhstl[4] = (unsigned long  )9;
       sqlstm.sqindv[4] = (         short *)0;
       sqlstm.sqharm[4] = (unsigned long )0;
       sqlstm.sqhstv[5] = (unsigned char  *)&cmp_fin;
       sqlstm.sqhstl[5] = (unsigned long  )10;
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
          sqlstm.stmt = sq0003;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)142;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
          sqlstm.sqhstl[0] = (unsigned long  )5;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
          sqlstm.sqhstl[1] = (unsigned long  )22;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&tipo_ini;
          sqlstm.sqhstl[2] = (unsigned long  )12;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqhstv[3] = (unsigned char  *)&tipo_fin;
          sqlstm.sqhstl[3] = (unsigned long  )12;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqhstv[4] = (unsigned char  *)&cmp_ini;
          sqlstm.sqhstl[4] = (unsigned long  )9;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqhstv[5] = (unsigned char  *)&cmp_fin;
          sqlstm.sqhstl[5] = (unsigned long  )10;
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
             sqlstm.stmt = sq0004;
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)180;
             sqlstm.cud = sqlcud0;
             sqlstm.sqlest = (unsigned char  *)&sqlca;
             sqlstm.sqlety = (unsigned short)0;
             sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
             sqlstm.sqhstl[0] = (unsigned long  )5;
             sqlstm.sqindv[0] = (         short *)0;
             sqlstm.sqharm[0] = (unsigned long )0;
             sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
             sqlstm.sqhstl[1] = (unsigned long  )22;
             sqlstm.sqindv[1] = (         short *)0;
             sqlstm.sqharm[1] = (unsigned long )0;
             sqlstm.sqhstv[2] = (unsigned char  *)&tipo_ini;
             sqlstm.sqhstl[2] = (unsigned long  )12;
             sqlstm.sqindv[2] = (         short *)0;
             sqlstm.sqharm[2] = (unsigned long )0;
             sqlstm.sqhstv[3] = (unsigned char  *)&tipo_fin;
             sqlstm.sqhstl[3] = (unsigned long  )12;
             sqlstm.sqindv[3] = (         short *)0;
             sqlstm.sqharm[3] = (unsigned long )0;
             sqlstm.sqhstv[4] = (unsigned char  *)&cmp_ini;
             sqlstm.sqhstl[4] = (unsigned long  )9;
             sqlstm.sqindv[4] = (         short *)0;
             sqlstm.sqharm[4] = (unsigned long )0;
             sqlstm.sqhstv[5] = (unsigned char  *)&cmp_fin;
             sqlstm.sqhstl[5] = (unsigned long  )10;
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
                                  :fecha, :tipo,:cuenta, :codigo_nit,
                                  :valor_deb,   :valor_cre, :estado, sucursal, cen_cos; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 17;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)218;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)infa;
          sqlstm.sqhstl[0] = (unsigned long  )16;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqharc[0] = (unsigned long   *)0;
          sqlstm.sqhstv[1] = (unsigned char  *)infb;
          sqlstm.sqhstl[1] = (unsigned long  )16;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqharc[1] = (unsigned long   *)0;
          sqlstm.sqhstv[2] = (unsigned char  *)infc;
          sqlstm.sqhstl[2] = (unsigned long  )16;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqharc[2] = (unsigned long   *)0;
          sqlstm.sqhstv[3] = (unsigned char  *)infd;
          sqlstm.sqhstl[3] = (unsigned long  )16;
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
          sqlstm.sqhstl[7] = (unsigned long  )44;
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
          sqlstm.sqhstl[10] = (unsigned long  )20;
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
          sqlstm.sqhstl[14] = (unsigned long  )4;
          sqlstm.sqindv[14] = (         short *)0;
          sqlstm.sqharm[14] = (unsigned long )0;
          sqlstm.sqharc[14] = (unsigned long   *)0;
          sqlstm.sqhstv[15] = (unsigned char  *)sucursal;
          sqlstm.sqhstl[15] = (unsigned long  )8;
          sqlstm.sqindv[15] = (         short *)0;
          sqlstm.sqharm[15] = (unsigned long )0;
          sqlstm.sqharc[15] = (unsigned long   *)0;
          sqlstm.sqhstv[16] = (unsigned char  *)cen_cos;
          sqlstm.sqhstl[16] = (unsigned long  )8;
          sqlstm.sqindv[16] = (         short *)0;
          sqlstm.sqharm[16] = (unsigned long )0;
          sqlstm.sqharc[16] = (unsigned long   *)0;
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
                                 :consecutivo,  :clase, :descripcion,
                                 :fecha, :tipo, :cuenta, :codigo_nit,
                                 :valor_deb,    :valor_cre, :estado, sucursal, cen_cos; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 17;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)300;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)infa;
          sqlstm.sqhstl[0] = (unsigned long  )16;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqharc[0] = (unsigned long   *)0;
          sqlstm.sqhstv[1] = (unsigned char  *)infb;
          sqlstm.sqhstl[1] = (unsigned long  )16;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqharc[1] = (unsigned long   *)0;
          sqlstm.sqhstv[2] = (unsigned char  *)infc;
          sqlstm.sqhstl[2] = (unsigned long  )16;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqharc[2] = (unsigned long   *)0;
          sqlstm.sqhstv[3] = (unsigned char  *)infd;
          sqlstm.sqhstl[3] = (unsigned long  )16;
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
          sqlstm.sqhstl[7] = (unsigned long  )44;
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
          sqlstm.sqhstl[10] = (unsigned long  )20;
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
          sqlstm.sqhstl[14] = (unsigned long  )4;
          sqlstm.sqindv[14] = (         short *)0;
          sqlstm.sqharm[14] = (unsigned long )0;
          sqlstm.sqharc[14] = (unsigned long   *)0;
          sqlstm.sqhstv[15] = (unsigned char  *)sucursal;
          sqlstm.sqhstl[15] = (unsigned long  )8;
          sqlstm.sqindv[15] = (         short *)0;
          sqlstm.sqharm[15] = (unsigned long )0;
          sqlstm.sqharc[15] = (unsigned long   *)0;
          sqlstm.sqhstv[16] = (unsigned char  *)cen_cos;
          sqlstm.sqhstl[16] = (unsigned long  )8;
          sqlstm.sqindv[16] = (         short *)0;
          sqlstm.sqharm[16] = (unsigned long )0;
          sqlstm.sqharc[16] = (unsigned long   *)0;
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
                                 :consecutivo,  :clase, :descripcion,
                                 :fecha, :tipo, :cuenta, :codigo_nit,
                                 :valor_deb,    :valor_cre, :estado, sucursal, cen_cos; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 17;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)382;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)infa;
          sqlstm.sqhstl[0] = (unsigned long  )16;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqharc[0] = (unsigned long   *)0;
          sqlstm.sqhstv[1] = (unsigned char  *)infb;
          sqlstm.sqhstl[1] = (unsigned long  )16;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqharc[1] = (unsigned long   *)0;
          sqlstm.sqhstv[2] = (unsigned char  *)infc;
          sqlstm.sqhstl[2] = (unsigned long  )16;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqharc[2] = (unsigned long   *)0;
          sqlstm.sqhstv[3] = (unsigned char  *)infd;
          sqlstm.sqhstl[3] = (unsigned long  )16;
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
          sqlstm.sqhstl[7] = (unsigned long  )44;
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
          sqlstm.sqhstl[10] = (unsigned long  )20;
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
          sqlstm.sqhstl[14] = (unsigned long  )4;
          sqlstm.sqindv[14] = (         short *)0;
          sqlstm.sqharm[14] = (unsigned long )0;
          sqlstm.sqharc[14] = (unsigned long   *)0;
          sqlstm.sqhstv[15] = (unsigned char  *)sucursal;
          sqlstm.sqhstl[15] = (unsigned long  )8;
          sqlstm.sqindv[15] = (         short *)0;
          sqlstm.sqharm[15] = (unsigned long )0;
          sqlstm.sqharc[15] = (unsigned long   *)0;
          sqlstm.sqhstv[16] = (unsigned char  *)cen_cos;
          sqlstm.sqhstl[16] = (unsigned long  )8;
          sqlstm.sqindv[16] = (         short *)0;
          sqlstm.sqharm[16] = (unsigned long )0;
          sqlstm.sqharc[16] = (unsigned long   *)0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
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
              if (!strcmp(asiento,"s"))
                  if (strcmp(estado[loop_2].arr, "2")) {
                      voy_marco_movto();
                      nrec++;
                      if (nrec >= 100) {
                          /* EXEC SQL COMMIT; */ 

{
                          struct sqlexd sqlstm;

                          sqlstm.sqlvsn = 8;
                          sqlstm.arrsiz = 17;
                          sqlstm.iters = (unsigned long  )1;
                          sqlstm.offset = (unsigned short)464;
                          sqlstm.cud = sqlcud0;
                          sqlstm.sqlest = (unsigned char  *)&sqlca;
                          sqlstm.sqlety = (unsigned short)0;
                          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                          nrec = 0;
                      }
                  }
          }
          num_ret = traidos;
    }
    if (!strcmp (orden,"T")) {
       /* EXEC SQL CLOSE C2A; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 17;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)478;
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
          sqlstm.arrsiz = 17;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)492;
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
             sqlstm.arrsiz = 17;
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)506;
             sqlstm.cud = sqlcud0;
             sqlstm.sqlest = (unsigned char  *)&sqlca;
             sqlstm.sqlety = (unsigned short)0;
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

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 17;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)520;
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
 fprintf(fp,"%89s","   CUENTA    DESCRIPCION                             FECHA/SC/CC TC CL  DOCUM.    INFA/INFC");
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

            sqlstm.sqlvsn = 8;
            sqlstm.arrsiz = 17;
            sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b\
3  from plan where (codigo_emp=:b4 and cuenta=:b5)";
            sqlstm.iters = (unsigned long  )1;
            sqlstm.offset = (unsigned short)534;
            sqlstm.selerr = (unsigned short)1;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)0;
            sqlstm.sqhstv[0] = (unsigned char  *)&veca;
            sqlstm.sqhstl[0] = (unsigned long  )16;
            sqlstm.sqindv[0] = (         short *)0;
            sqlstm.sqharm[0] = (unsigned long )0;
            sqlstm.sqhstv[1] = (unsigned char  *)&vecb;
            sqlstm.sqhstl[1] = (unsigned long  )16;
            sqlstm.sqindv[1] = (         short *)0;
            sqlstm.sqharm[1] = (unsigned long )0;
            sqlstm.sqhstv[2] = (unsigned char  *)&vecc;
            sqlstm.sqhstl[2] = (unsigned long  )16;
            sqlstm.sqindv[2] = (         short *)0;
            sqlstm.sqharm[2] = (unsigned long )0;
            sqlstm.sqhstv[3] = (unsigned char  *)&vecd;
            sqlstm.sqhstl[3] = (unsigned long  )16;
            sqlstm.sqindv[3] = (         short *)0;
            sqlstm.sqharm[3] = (unsigned long )0;
            sqlstm.sqhstv[4] = (unsigned char  *)&codigo_emp;
            sqlstm.sqhstl[4] = (unsigned long  )5;
            sqlstm.sqindv[4] = (         short *)0;
            sqlstm.sqharm[4] = (unsigned long )0;
            sqlstm.sqhstv[5] = (unsigned char  *)&cuentab;
            sqlstm.sqhstl[5] = (unsigned long  )17;
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
               printf ("Cuentab (%-s) no existe\n", cuentab.arr);

            nomb_nit.arr[0] = '\0';
            if (codigo_nit[loop_2] != 970) {
               /* EXEC SQL select nombre
                        into :nomb_nit
                        from  nits
                        where codigo_nit = :codigo_nit[loop_2]; */ 

{
               struct sqlexd sqlstm;

               sqlstm.sqlvsn = 8;
               sqlstm.arrsiz = 17;
               sqlstm.stmt = "select nombre into :b0  from nits where codigo\
_nit=:b1";
               sqlstm.iters = (unsigned long  )1;
               sqlstm.offset = (unsigned short)572;
               sqlstm.selerr = (unsigned short)1;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)0;
               sqlstm.sqhstv[0] = (unsigned char  *)&nomb_nit;
               sqlstm.sqhstl[0] = (unsigned long  )53;
               sqlstm.sqindv[0] = (         short *)0;
               sqlstm.sqharm[0] = (unsigned long )0;
               sqlstm.sqhstv[1] = (unsigned char  *)&codigo_nit[loop_2];
               sqlstm.sqhstl[1] = (unsigned long  )8;
               sqlstm.sqindv[1] = (         short *)0;
               sqlstm.sqharm[1] = (unsigned long )0;
               sqlstm.sqphsv = sqlstm.sqhstv;
               sqlstm.sqphsl = sqlstm.sqhstl;
               sqlstm.sqpind = sqlstm.sqindv;
               sqlstm.sqparm = sqlstm.sqharm;
               sqlstm.sqparc = sqlstm.sqharc;
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
             fprintf (fp,"%-13s",fmtnum("   99999999",cuenta[loop_2].arr,r_t));
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
                                   strcpy(codigo.arr,cuenta[loop_2].arr);
                                   codigo.len = strlen(codigo.arr);
                                   codigo_nitb=970;
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
 /*printf("actualizo\n");*/
     /* EXEC SQL select 'x' into :cuentax
	      from   acumulados
              where  codigo_emp       = to_number(:codigo_emp)  and
                     ano_mes          = to_number(:ano_mes)     and
                     cuenta           =          (:cuentab)     and
                     sucursal         =          (:sucursalb)   and
                     cen_cos          = to_number(:cen_cosb); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 17;
     sqlstm.stmt = "select 'x' into :b0  from acumulados where ((((codigo_em\
p=to_number(:b1) and ano_mes=to_number(:b2)) and cuenta=:b3) and sucursal=:b4)\
 and cen_cos=to_number(:b5))";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)594;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&cuentax;
     sqlstm.sqhstl[0] = (unsigned long  )17;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
     sqlstm.sqhstl[1] = (unsigned long  )5;
     sqlstm.sqindv[1] = (         short *)0;
     sqlstm.sqharm[1] = (unsigned long )0;
     sqlstm.sqhstv[2] = (unsigned char  *)&ano_mes;
     sqlstm.sqhstl[2] = (unsigned long  )22;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&cuentab;
     sqlstm.sqhstl[3] = (unsigned long  )17;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&sucursalb;
     sqlstm.sqhstl[4] = (unsigned long  )5;
     sqlstm.sqindv[4] = (         short *)0;
     sqlstm.sqharm[4] = (unsigned long )0;
     sqlstm.sqhstv[5] = (unsigned char  *)&cen_cosb;
     sqlstm.sqhstl[5] = (unsigned long  )7;
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
        voy_ins_acumulados();
     else if (!sqlca.sqlcode) voy_actu_acumulados();
          else if (sqlca.sqlcode != -1400)
                   printf("Error cuenta = (%-s) rutina actualizo (%d)\n",cuentab.arr, sqlca.sqlcode);

}

void voy_ins_acumulados()
{
 /*printf("voy_ins_acumulados");*/
 /* EXEC SQL insert into acumulados
          values (:codigo_emp, :ano_mes, :cuentab, 0, 0, :sucursalb, :cen_cosb); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 17;
 sqlstm.stmt = "insert into acumulados values (:b0,:b1,:b2,0,0,:b3,:b4)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)632;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned long  )5;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
 sqlstm.sqhstl[1] = (unsigned long  )22;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&cuentab;
 sqlstm.sqhstl[2] = (unsigned long  )17;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&sucursalb;
 sqlstm.sqhstl[3] = (unsigned long  )5;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&cen_cosb;
 sqlstm.sqhstl[4] = (unsigned long  )7;
 sqlstm.sqindv[4] = (         short *)0;
 sqlstm.sqharm[4] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
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
                 cen_cos        = to_number(:cen_cosb); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 17;
  sqlstm.stmt = "update acumulados  set valor_deb=(valor_deb+:b0),valor_cre=\
(valor_cre+:b1) where ((((codigo_emp=to_number(:b2) and ano_mes=to_number(:b3)\
) and cuenta=to_number(:b4)) and sucursal=:b5) and cen_cos=to_number(:b6))";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)666;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&wval_deb;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&wval_cre;
  sqlstm.sqhstl[1] = (unsigned long  )8;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[2] = (unsigned long  )5;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&ano_mes;
  sqlstm.sqhstl[3] = (unsigned long  )22;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
  sqlstm.sqhstl[4] = (unsigned long  )17;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&sucursalb;
  sqlstm.sqhstl[5] = (unsigned long  )5;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqhstv[6] = (unsigned char  *)&cen_cosb;
  sqlstm.sqhstl[6] = (unsigned long  )7;
  sqlstm.sqindv[6] = (         short *)0;
  sqlstm.sqharm[6] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
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
                  tipo        >=          (:tipo_ini) and
                  tipo        <=          (:tipo_fin) and
                  comprobante >= to_number(:cmp_ini) and
                  comprobante <= to_number(:cmp_fin) and
                  ano_mes      = to_number(:ano_mes) and
                  estado      <> '2'; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 17;
  sqlstm.stmt = "update movto_c  set estado='9' where ((((((codigo_emp=to_nu\
mber(:b0) and tipo>=:b1) and tipo<=:b2) and comprobante>=to_number(:b3)) and c\
omprobante<=to_number(:b4)) and ano_mes=to_number(:b5)) and estado<>'2')";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)708;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned long  )5;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&tipo_ini;
  sqlstm.sqhstl[1] = (unsigned long  )12;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&tipo_fin;
  sqlstm.sqhstl[2] = (unsigned long  )12;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&cmp_ini;
  sqlstm.sqhstl[3] = (unsigned long  )9;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&cmp_fin;
  sqlstm.sqhstl[4] = (unsigned long  )10;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&ano_mes;
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


// printf("voy_marco_movto codigo_emp %s tipo_ini %s tipo_fin %s cmp_ini %s cmp_fin %s ano_mes %s sqlca.sqlcode %d\n", codigo_emp.arr, tipo_ini.arr, tipo_fin.arr, cmp_ini.arr, cmp_fin.arr, ano_mes.arr, sqlca.sqlcode); getchar();

 if (sqlca.sqlcode) printf("Error rutina voy_marco_movto (%d)\n",
                           sqlca.sqlcode);
}

void actualizo_nit()
{
 /*printf("actualizo_nit\n");*/
     /* EXEC SQL select cuenta into :cuentax
	      from   acumulanit
              where  codigo_emp       = to_number(:codigo_emp)  and
                     ano_mes          = to_number(:ano_mes)     and
                     cuenta           = to_number(:cuentab)     and
                     codigo           =          (:codigo)      and
                     codigo_nit       =           :codigo_nitb  and
                     sucursal         =          (:sucursalb)   and
                     cen_cos          = to_number(:cen_cosb); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 17;
     sqlstm.stmt = "select cuenta into :b0  from acumulanit where ((((((codi\
go_emp=to_number(:b1) and ano_mes=to_number(:b2)) and cuenta=to_number(:b3)) a\
nd codigo=:b4) and codigo_nit=:b5) and sucursal=:b6) and cen_cos=to_number(:b7\
))";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)746;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&cuentax;
     sqlstm.sqhstl[0] = (unsigned long  )17;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
     sqlstm.sqhstl[1] = (unsigned long  )5;
     sqlstm.sqindv[1] = (         short *)0;
     sqlstm.sqharm[1] = (unsigned long )0;
     sqlstm.sqhstv[2] = (unsigned char  *)&ano_mes;
     sqlstm.sqhstl[2] = (unsigned long  )22;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&cuentab;
     sqlstm.sqhstl[3] = (unsigned long  )17;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&codigo;
     sqlstm.sqhstl[4] = (unsigned long  )17;
     sqlstm.sqindv[4] = (         short *)0;
     sqlstm.sqharm[4] = (unsigned long )0;
     sqlstm.sqhstv[5] = (unsigned char  *)&codigo_nitb;
     sqlstm.sqhstl[5] = (unsigned long  )8;
     sqlstm.sqindv[5] = (         short *)0;
     sqlstm.sqharm[5] = (unsigned long )0;
     sqlstm.sqhstv[6] = (unsigned char  *)&sucursalb;
     sqlstm.sqhstl[6] = (unsigned long  )5;
     sqlstm.sqindv[6] = (         short *)0;
     sqlstm.sqharm[6] = (unsigned long )0;
     sqlstm.sqhstv[7] = (unsigned char  *)&cen_cosb;
     sqlstm.sqhstl[7] = (unsigned long  )7;
     sqlstm.sqindv[7] = (         short *)0;
     sqlstm.sqharm[7] = (unsigned long )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
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
        values (:codigo_emp, :ano_mes, :cuentab, :codigo, :codigo_nitb, 0, 0, :sucursalb, :cen_cosb); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 17;
  sqlstm.stmt = "insert into acumulanit values (:b0,:b1,:b2,:b3,:b4,0,0,:b5,\
:b6)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)792;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned long  )5;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
  sqlstm.sqhstl[1] = (unsigned long  )22;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&cuentab;
  sqlstm.sqhstl[2] = (unsigned long  )17;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&codigo;
  sqlstm.sqhstl[3] = (unsigned long  )17;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&codigo_nitb;
  sqlstm.sqhstl[4] = (unsigned long  )8;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&sucursalb;
  sqlstm.sqhstl[5] = (unsigned long  )5;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqhstv[6] = (unsigned char  *)&cen_cosb;
  sqlstm.sqhstl[6] = (unsigned long  )7;
  sqlstm.sqindv[6] = (         short *)0;
  sqlstm.sqharm[6] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
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
                 cen_cos        = to_number(:cen_cosb); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 17;
  sqlstm.stmt = "update acumulanit  set valor_deb=(valor_deb+:b0),valor_cre=\
(valor_cre+:b1) where ((((((codigo_emp=to_number(:b2) and ano_mes=to_number(:b\
3)) and cuenta=to_number(:b4)) and codigo=:b5) and codigo_nit=:b6) and sucursa\
l=:b7) and cen_cos=to_number(:b8))";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)834;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&wval_deb;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&wval_cre;
  sqlstm.sqhstl[1] = (unsigned long  )8;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[2] = (unsigned long  )5;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&ano_mes;
  sqlstm.sqhstl[3] = (unsigned long  )22;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
  sqlstm.sqhstl[4] = (unsigned long  )17;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&codigo;
  sqlstm.sqhstl[5] = (unsigned long  )17;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqhstv[6] = (unsigned char  *)&codigo_nitb;
  sqlstm.sqhstl[6] = (unsigned long  )8;
  sqlstm.sqindv[6] = (         short *)0;
  sqlstm.sqharm[6] = (unsigned long )0;
  sqlstm.sqhstv[7] = (unsigned char  *)&sucursalb;
  sqlstm.sqhstl[7] = (unsigned long  )5;
  sqlstm.sqindv[7] = (         short *)0;
  sqlstm.sqharm[7] = (unsigned long )0;
  sqlstm.sqhstv[8] = (unsigned char  *)&cen_cosb;
  sqlstm.sqhstl[8] = (unsigned long  )7;
  sqlstm.sqindv[8] = (         short *)0;
  sqlstm.sqharm[8] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
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

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 17;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=10 and ano_mes=to_number(:b1)) and codigo_emp=to_number(:b2))";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)884;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&cons;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
  sqlstm.sqhstl[1] = (unsigned long  )22;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[2] = (unsigned long  )5;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
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
        (FUENTE,ANO_MES,NOMBRE,CONSECUTIVO,CODIGO_EMP)
        values (10, :ano_mes, 'ASIENTOS CONTABLES', 1, :codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 17;
  sqlstm.stmt = "insert into control_mes(FUENTE,ANO_MES,NOMBRE,CONSECUTIVO,C\
ODIGO_EMP) values (10,:b0,'ASIENTOS CONTABLES',1,:b1)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)910;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&ano_mes;
  sqlstm.sqhstl[0] = (unsigned long  )22;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[1] = (unsigned long  )5;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
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

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 17;
   sqlstm.stmt = "update control_mes  set consecutivo=(:b0+1) where ((fuente\
=10 and ano_mes=to_number(:b1)) and codigo_emp=to_number(:b2))";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)932;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlstm.sqhstv[0] = (unsigned char  *)&cons;
   sqlstm.sqhstl[0] = (unsigned long  )8;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
   sqlstm.sqhstl[1] = (unsigned long  )22;
   sqlstm.sqindv[1] = (         short *)0;
   sqlstm.sqharm[1] = (unsigned long )0;
   sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
   sqlstm.sqhstl[2] = (unsigned long  )5;
   sqlstm.sqindv[2] = (         short *)0;
   sqlstm.sqharm[2] = (unsigned long )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  if (sqlca.sqlcode) printf("Error rutina voy_actu_actualizocnt (%d)\n",
                             sqlca.sqlcode);
}
