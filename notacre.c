
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
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    ".\\notacre.pc"
};


static const unsigned long sqlctx = 1198698533;


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
   unsigned char    *sqhstv[14];
   unsigned long    sqhstl[14];
	    short   *sqindv[14];
   unsigned long    sqharm[14];
   unsigned long     *sqharc[14];
} sqlstm = {8,14};

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
 static const char *sq0003 = 
"select nvl(infa,'0') ,decode(clase,'XX','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,clase ,descripcion ,fecha ,tipo ,cuenta ,nvl(codigo\
_nit,970) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,estado  from movto_d d ,movto_c\
 c where ((((((d.codigo_emp(+)=c.codigo_emp and d.ano_mes(+)=c.ano_mes) and d.\
consecutivo(+)=c.consecutivo) and c.codigo_emp=to_number(:b0)) and c.ano_mes=t\
o_number(:b1)) and c.clase=:b2) and c.comprobante=to_number(:b3)) order by tip\
o,comprobante            ";
 static const char *sq0006 = 
"select numero  from redimidos where (codigo_cliente=:b0 and nota=:b1) order \
by numero            ";
 static const char *sq0004 = 
"select numero_orden  from ajusteent_f where (consecutivo=:b0 and ano_mes=to_\
number(:b1)) order by numero_orden            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,161,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,451,0,4,191,0,13,2,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,
0,0,2,3,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,1,9,0,0,
94,0,0,5,35,0,9,239,0,0,0,0,1,0,
108,0,0,5,0,0,13,246,0,1,0,0,1,0,2,9,0,0,
126,0,0,5,0,0,15,260,0,0,0,0,1,0,
140,0,0,7,140,0,4,269,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
170,0,0,3,491,0,9,278,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
200,0,0,3,0,0,13,287,0,14,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
270,0,0,3,0,0,15,320,0,0,0,0,1,0,
284,0,0,6,97,0,9,337,0,2,2,0,1,0,1,9,0,0,1,4,0,0,
306,0,0,6,0,0,13,341,0,1,0,0,1,0,2,4,0,0,
324,0,0,6,0,0,13,372,0,1,0,0,1,0,2,4,0,0,
342,0,0,6,0,0,15,381,0,0,0,0,1,0,
356,0,0,4,122,0,9,384,0,2,2,0,1,0,1,4,0,0,1,9,0,0,
378,0,0,4,0,0,13,389,0,1,0,0,1,0,2,4,0,0,
396,0,0,4,0,0,13,402,0,1,0,0,1,0,2,4,0,0,
414,0,0,4,0,0,15,414,0,0,0,0,1,0,
428,0,0,8,0,0,30,426,0,0,0,0,1,0,
442,0,0,9,99,0,4,481,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,9,0,
0,
480,0,0,10,99,0,4,522,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,9,
0,0,
518,0,0,3,491,0,9,563,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
548,0,0,3,0,0,13,571,0,14,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
618,0,0,3,0,0,15,603,0,0,0,0,1,0,
};


/*****************************************************************
* NOTACRE.C Version 1.0 - Rev 1.2 - Sep 07/2005.
*
* notacre.c. Comprobante de nota crédito
*
* Uso : codigo_emp aamm clase comprobante device userid/password\n";
*
* Mario E. Santiago I. Creado Septiembre de 2005.
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

/* VARCHAR infa       [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infa;

/* VARCHAR infb       [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infb;

/* VARCHAR infc       [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infc;

/* VARCHAR infd       [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infd;

double  comprobante;
double  consecutivo;
/* VARCHAR clase      [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } clase;

/* VARCHAR descripcion[41]; */ 
struct { unsigned short len; unsigned char arr[41]; } descripcion;

/* VARCHAR fecha      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha;

int     tipo;
/* VARCHAR cuenta     [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuenta;

double  codigo_nit;
double  valor_deb;
double  valor_cre;
/* VARCHAR estado     [2]; */ 
struct { unsigned short len; unsigned char arr[2]; } estado;

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
double  numero_documento;
/* VARCHAR fecha_documento  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_documento;

/* VARCHAR codigo_cliente   [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_cliente;

/* VARCHAR contado          [05]; */ 
struct { unsigned short len; unsigned char arr[5]; } contado;

/* VARCHAR nombre           [45]; */ 
struct { unsigned short len; unsigned char arr[45]; } nombre;

/* VARCHAR material         [4]; */ 
struct { unsigned short len; unsigned char arr[4]; } material;

/* VARCHAR motivo           [55]; */ 
struct { unsigned short len; unsigned char arr[55]; } motivo;

double  nit_cli;
int     digito_cli;
int     concepto;
double  numero_orden;
double  numero;

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
int     l;
int     li = 1;
double  tot_deb[2];
double  tot_cre[2];
char    cadena[100];
char    cue[100];
char    login[30];

void titulos();
void lista_creditos();
void lista_debitos();
void totales();

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;
int     nrec   = 0;
    if (argc < 6)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp aaaamm clase\n");
        printf ("      comprobante device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("      device : s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len  =       strlen(codigo_emp.arr);
       strcpy (clase.arr,      argv[3]);
       clase.len       =       strlen(clase.arr);
       strcpy (cmp_ini.arr,    argv[4]);
       cmp_ini.len     =       strlen(cmp_ini.arr);
       strcpy (device,         argv[5]);
       strlow (device);

    if (!strpos ("/", argv[6]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[6]);
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

    /* EXEC SQL select numero_documento, fecha_documento, c.codigo_cliente,
                    c.contado, n.nombre, n.nit, n.digito, material, motivo,
                    consecutivo, concepto
             into  :numero_documento, :fecha_documento, :codigo_cliente,
                   :contado, :nombre, :nit_cli, :digito_cli, :material,
                   :motivo, :consecutivo, :concepto
             from ajusteent_c c, clientes cl, nits n
             where c.codigo_emp       = to_number(:codigo_emp) and
                   c.numero_documento = to_number(:cmp_ini)    and
                  (c.concepto         = 4                      or
                   c.concepto         = 7                      or
                   c.concepto         = 8                      or
                   c.concepto         = 9)                     and
                   c.codigo_cliente   = cl.codigo_cliente      and
                   cl.codigo_nit      = n.codigo_nit; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 13;
    sqlstm.stmt = "select numero_documento ,fecha_documento ,c.codigo_client\
e ,c.contado ,n.nombre ,n.nit ,n.digito ,material ,motivo ,consecutivo ,concep\
to into :b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10  from ajusteent_c c ,clie\
ntes cl ,nits n where ((((c.codigo_emp=to_number(:b11) and c.numero_documento=\
to_number(:b12)) and (((c.concepto=4 or c.concepto=7) or c.concepto=8) or c.co\
ncepto=9)) and c.codigo_cliente=cl.codigo_cliente) and cl.codigo_nit=n.codigo_\
nit)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)28;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&numero_documento;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&fecha_documento;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&codigo_cliente;
    sqlstm.sqhstl[2] = (unsigned long  )12;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&contado;
    sqlstm.sqhstl[3] = (unsigned long  )7;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&nombre;
    sqlstm.sqhstl[4] = (unsigned long  )47;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&nit_cli;
    sqlstm.sqhstl[5] = (unsigned long  )8;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&digito_cli;
    sqlstm.sqhstl[6] = (unsigned long  )4;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&material;
    sqlstm.sqhstl[7] = (unsigned long  )6;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&motivo;
    sqlstm.sqhstl[8] = (unsigned long  )57;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&consecutivo;
    sqlstm.sqhstl[9] = (unsigned long  )8;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&concepto;
    sqlstm.sqhstl[10] = (unsigned long  )4;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[11] = (unsigned long  )5;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&cmp_ini;
    sqlstm.sqhstl[12] = (unsigned long  )9;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    codigo_cliente.arr[codigo_cliente.len] = '\0';
    contado.arr       [contado.len]        = '\0';
    nombre.arr        [nombre.len]         = '\0';
    material.arr      [material.len]       = '\0';
    motivo.arr        [motivo.len]         = '\0';

    /* EXEC SQL DECLARE C2A CURSOR FOR
          select nvl(infa,'0'), decode(clase,'XX','0',nvl(infb,'0')),
                 nvl(infc,'0'), nvl(infd,'0'),
                 comprobante, clase, descripcion, fecha, tipo, cuenta,
                 nvl(codigo_nit,970), nvl(valor_deb,0), nvl(valor_cre,0), estado
	  from   movto_d d, movto_c c
          where  d.codigo_emp(+)  = c.codigo_emp                  and
                 d.ano_mes(+)     = c.ano_mes                     and
                 d.consecutivo(+) = c.consecutivo                 and
                 c.codigo_emp     = to_number(:codigo_emp)        and
                 c.ano_mes        = to_number(:ano_mes)           and
                 c.clase          =           :clase              and
                 c.comprobante    = to_number(:cmp_ini)
          order by tipo, comprobante; */ 


    /* EXEC SQL DECLARE C2B CURSOR FOR
          select numero_orden
	  from   ajusteent_f
          where  consecutivo      = :consecutivo                  and
                 ano_mes          = to_number(:ano_mes)
          order by numero_orden; */ 


     /* EXEC SQL DECLARE C13 CURSOR FOR
              select inf
              from   infacu; */ 


    /* EXEC SQL OPEN C13; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 13;
    sqlstm.stmt = sq0005;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)94;
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
          sqlstm.arrsiz = 13;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)108;
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
    sqlstm.arrsiz = 13;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)126;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL DECLARE C14 CURSOR FOR
          select numero
	  from   redimidos
          where  codigo_cliente   = :codigo_cliente     and
                 nota             = :numero_documento
          order by numero; */ 


    /* EXEC SQL select n.nombre, n.nit, n.digito
                    into :nomb_emp, :nit, :digito
             from   nits n, empresas e
             where  n.codigo_nit = e.codigo_nit and
                    e.codigo_emp = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 13;
    sqlstm.stmt = "select n.nombre ,n.nit ,n.digito into :b0,:b1,:b2  from n\
its n ,empresas e where (n.codigo_nit=e.codigo_nit and e.codigo_emp=to_number(\
:b3))";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)140;
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

    /* EXEC SQL OPEN C2A; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 13;
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)170;
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
    sqlstm.sqhstv[2] = (unsigned char  *)&clase;
    sqlstm.sqhstl[2] = (unsigned long  )5;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&cmp_ini;
    sqlstm.sqhstl[3] = (unsigned long  )9;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = 0;
    traidos = 0;
    num_ret = 0;
    titulos();

    while (staora == 0) {

          /* EXEC SQL FETCH C2A INTO :infa, :infb, :infc, :infd, :comprobante,
                                  :clase, :descripcion,
                                  :fecha, :tipo,:cuenta, :codigo_nit,
                                  :valor_deb,   :valor_cre, :estado; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 14;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)200;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&infa;
          sqlstm.sqhstl[0] = (unsigned long  )16;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&infb;
          sqlstm.sqhstl[1] = (unsigned long  )16;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&infc;
          sqlstm.sqhstl[2] = (unsigned long  )16;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqhstv[3] = (unsigned char  *)&infd;
          sqlstm.sqhstl[3] = (unsigned long  )16;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqhstv[4] = (unsigned char  *)&comprobante;
          sqlstm.sqhstl[4] = (unsigned long  )8;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqhstv[5] = (unsigned char  *)&clase;
          sqlstm.sqhstl[5] = (unsigned long  )5;
          sqlstm.sqindv[5] = (         short *)0;
          sqlstm.sqharm[5] = (unsigned long )0;
          sqlstm.sqhstv[6] = (unsigned char  *)&descripcion;
          sqlstm.sqhstl[6] = (unsigned long  )43;
          sqlstm.sqindv[6] = (         short *)0;
          sqlstm.sqharm[6] = (unsigned long )0;
          sqlstm.sqhstv[7] = (unsigned char  *)&fecha;
          sqlstm.sqhstl[7] = (unsigned long  )22;
          sqlstm.sqindv[7] = (         short *)0;
          sqlstm.sqharm[7] = (unsigned long )0;
          sqlstm.sqhstv[8] = (unsigned char  *)&tipo;
          sqlstm.sqhstl[8] = (unsigned long  )4;
          sqlstm.sqindv[8] = (         short *)0;
          sqlstm.sqharm[8] = (unsigned long )0;
          sqlstm.sqhstv[9] = (unsigned char  *)&cuenta;
          sqlstm.sqhstl[9] = (unsigned long  )17;
          sqlstm.sqindv[9] = (         short *)0;
          sqlstm.sqharm[9] = (unsigned long )0;
          sqlstm.sqhstv[10] = (unsigned char  *)&codigo_nit;
          sqlstm.sqhstl[10] = (unsigned long  )8;
          sqlstm.sqindv[10] = (         short *)0;
          sqlstm.sqharm[10] = (unsigned long )0;
          sqlstm.sqhstv[11] = (unsigned char  *)&valor_deb;
          sqlstm.sqhstl[11] = (unsigned long  )8;
          sqlstm.sqindv[11] = (         short *)0;
          sqlstm.sqharm[11] = (unsigned long )0;
          sqlstm.sqhstv[12] = (unsigned char  *)&valor_cre;
          sqlstm.sqhstl[12] = (unsigned long  )8;
          sqlstm.sqindv[12] = (         short *)0;
          sqlstm.sqharm[12] = (unsigned long )0;
          sqlstm.sqhstv[13] = (unsigned char  *)&estado;
          sqlstm.sqhstl[13] = (unsigned long  )4;
          sqlstm.sqindv[13] = (         short *)0;
          sqlstm.sqharm[13] = (unsigned long )0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



          staora  = sqlca.sqlcode;
          if (staora == -1405)
              staora  = 0;
          else if (staora != 1403 ) {
             infa       .arr  [infa       .len] = '\0';
             infb       .arr  [infb       .len] = '\0';
             infc       .arr  [infc       .len] = '\0';
             infd       .arr  [infd       .len] = '\0';
             clase      .arr  [clase      .len] = '\0';
             descripcion.arr  [descripcion.len] = '\0';
             fecha      .arr  [fecha      .len] = '\0';
             cuenta     .arr  [cuenta     .len] = '\0';
             estado     .arr  [estado     .len] = '\0';

             strcpy (vecmov[0], infa.arr);
             strcpy (vecmov[1], infb.arr);
             strcpy (vecmov[2], infc.arr);
             strcpy (vecmov[3], infd.arr);

             strcpy(cue,"6135");
             lista_creditos();

             num_ret = traidos;
          }
          else
             fprintf (stderr, "Error leyendo C2a (%d)\n", staora);
    }

    /* EXEC SQL CLOSE C2A; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 14;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)270;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



/*****************************************
** COMMIT LOS CAMBIOS A LA BASE DE DATOS *
******************************************/
    if (concepto == 4) {
       fprintf(fp,"\n%8sNOTA: Devolucio\b'n de lentes "," ");
       if (!strcmp(material.arr,"A")) {
          fprintf(fp,"ofta\b'lmicos\n");
       }
       else {
          fprintf(fp,"de contacto\n");
       }
       con_lin+=2;
    }
    fprintf(fp,"%8s%s "," ",motivo.arr);
    if (concepto == 9) {
       /* EXEC SQL OPEN C14; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 14;
       sqlstm.stmt = sq0006;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)284;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
       sqlstm.sqhstl[0] = (unsigned long  )12;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&numero_documento;
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


       staora  = 0;
       traidos = 0;
       num_ret = 0;
       /* EXEC SQL FETCH C14 INTO :numero; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 14;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)306;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&numero;
       sqlstm.sqhstl[0] = (unsigned long  )8;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



       staora  = sqlca.sqlcode;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
               fprintf (stderr, "Error leyendo C14 (%d)\n", staora);
       if (staora == 0)
           fprintf(fp,"%s","No.: ");
       while (staora == 0) {
             if (numero > 0 && staora == 0) {
                if (li==1) {
                    if (++l > 4) {
                       fprintf(fp,"\n");
                       con_lin++;
                       l=0;
                       li=0;
                       fprintf(fp,"%8s"," ");
                    }
                    fprintf(fp,"%3.0f ",numero);
                }
                else {
                     if (++l > 15) {
                        fprintf(fp,"\n");
                        con_lin++;
                        l=0;
                        fprintf(fp,"%8s"," ");
                     }
                     fprintf(fp,"%3.0f ",numero);
                }
             }
             /* EXEC SQL FETCH C14 INTO :numero; */ 

{
             struct sqlexd sqlstm;

             sqlstm.sqlvsn = 8;
             sqlstm.arrsiz = 14;
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)324;
             sqlstm.cud = sqlcud0;
             sqlstm.sqlest = (unsigned char  *)&sqlca;
             sqlstm.sqlety = (unsigned short)0;
             sqlstm.sqhstv[0] = (unsigned char  *)&numero;
             sqlstm.sqhstl[0] = (unsigned long  )8;
             sqlstm.sqindv[0] = (         short *)0;
             sqlstm.sqharm[0] = (unsigned long )0;
             sqlstm.sqphsv = sqlstm.sqhstv;
             sqlstm.sqphsl = sqlstm.sqhstl;
             sqlstm.sqpind = sqlstm.sqindv;
             sqlstm.sqparm = sqlstm.sqharm;
             sqlstm.sqparc = sqlstm.sqharc;
             sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


             staora  = sqlca.sqlcode;
             if (staora == -1405)
                 staora  = 0;
             else if (staora)
                      fprintf (stderr, "Error leyendo C14 (%d)\n", staora);
       }
       fprintf(fp,"\n");
       con_lin++;
       /* EXEC SQL CLOSE C14; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 14;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)342;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    }

    /* EXEC SQL OPEN C2B; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 14;
    sqlstm.stmt = sq0004;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)356;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = 0;
    traidos = 0;
    num_ret = 0;
    /* EXEC SQL FETCH C2B INTO :numero_orden; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 14;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)378;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&numero_orden;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = sqlca.sqlcode;
    if (staora == -1405)
        staora  = 0;
    else if (staora)
            fprintf (stderr, "Error leyendo C2B (%d) no_mes:(%s) consecutivo:(%12.0f)\n", staora, ano_mes.arr, consecutivo );
    if (concepto == 4) {
       if (staora == 0)
          fprintf(fp,"%8s%s"," ","ORDEN: ");
       while (staora == 0) {
             if (numero_orden > 0 && staora == 0)
                fprintf(fp,"%10.0f ",numero_orden);
             /* EXEC SQL FETCH C2B INTO :numero_orden; */ 

{
             struct sqlexd sqlstm;

             sqlstm.sqlvsn = 8;
             sqlstm.arrsiz = 14;
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)396;
             sqlstm.cud = sqlcud0;
             sqlstm.sqlest = (unsigned char  *)&sqlca;
             sqlstm.sqlety = (unsigned short)0;
             sqlstm.sqhstv[0] = (unsigned char  *)&numero_orden;
             sqlstm.sqhstl[0] = (unsigned long  )8;
             sqlstm.sqindv[0] = (         short *)0;
             sqlstm.sqharm[0] = (unsigned long )0;
             sqlstm.sqphsv = sqlstm.sqhstv;
             sqlstm.sqphsl = sqlstm.sqhstl;
             sqlstm.sqpind = sqlstm.sqindv;
             sqlstm.sqparm = sqlstm.sqharm;
             sqlstm.sqparc = sqlstm.sqharc;
             sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


             staora  = sqlca.sqlcode;
             if (staora == -1405)
                 staora  = 0;
             else if (staora)
                      fprintf (stderr, "Error leyendo C2B (%d)\n", staora);
       }
       fprintf(fp,"\n");
       con_lin++;

    }

    /* EXEC SQL CLOSE C2B; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 14;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)414;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    for (i=con_lin;i<=20;i++) {
        fprintf(fp,"\n");
        con_lin++;
    }
    totales();
    for (i=con_lin;i<=32;i++) {
        fprintf(fp,"\n");
        con_lin++;
    }

    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 14;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)428;
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
 fecha_system(fecha_s);

 fprintf(fp,"\n%s%8s%s\n",diezcpi," ",nomb_emp.arr);
 sprintf (cadena,"%12.0f",nit);
 fprintf (fp,"%13s %-s"," ",fmtnum("zzz,zzz,zzz,zzz",cadena,r_t));
 if (digito > 0) {
     sprintf (cadena,"%d",digito);
     fprintf (fp,"-%s",fmtnum("z",cadena,r_t));
 }
 else if (digito == 0)
          fprintf (fp,"-%s","0");
 sprintf (cadena,"%12.0f",numero_documento);
 fprintf (fp,"%36s %s\n"," ",fmtnum("zzz,zzz",cadena,r_t));

 strorg(codigo_cliente.arr,1,38);
 fprintf(fp,"%8s%-6s\n\n%8s%-38s"," ",codigo_cliente.arr," ",nombre.arr);
 sprintf (cadena,"%12.0f",nit_cli);
 fprintf (fp,"%-14s",fmtnum("zz,zzz,zzz,zzz",cadena,r_t));
 if (digito > 0) {
     sprintf (cadena,"%d",digito_cli);
     fprintf (fp,"-%s",fmtnum("9",cadena,r_t));
 }
 else if (digito == 0)
          fprintf (fp,"-%s","0");

 strcpy(cadena,fecha_documento.arr);
 fecha_numero(cadena);
 fprintf (fp,"    %-10s\n\n\n\n\n\n",cadena);
 con_lin = 9;
}

void lista_debitos()
{

         strcpy  (cuentab.arr, cuenta.arr);
         cuentab.len = strlen(cuentab.arr);

         if (strcmp(estado.arr, "2")) {

            /* EXEC SQL select infa, infb, infc, infd
                            into :veca, :vecb, :vecc, :vecd
                     from   plan
                     where  codigo_emp = (:codigo_emp) and
                            cuenta     = (:cuentab); */ 

{
            struct sqlexd sqlstm;

            sqlstm.sqlvsn = 8;
            sqlstm.arrsiz = 14;
            sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b\
3  from plan where (codigo_emp=:b4 and cuenta=:b5)";
            sqlstm.iters = (unsigned long  )1;
            sqlstm.offset = (unsigned short)442;
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

            veca.arr[veca.len] = '\0';
            vecb.arr[vecb.len] = '\0';
            vecc.arr[vecc.len] = '\0';
            vecd.arr[vecd.len] = '\0';
            strcpy (vecplan[0], veca.arr);
            strcpy (vecplan[1], vecb.arr);
            strcpy (vecplan[2], vecc.arr);
            strcpy (vecplan[3], vecd.arr);

         }
         strcpy(cuentab.arr,cuenta.arr);
         strorg(cuentab.arr,1,4);
         if (strcmp(cuentab.arr,cue)) {
            if (valor_deb > 0) {
               fprintf (fp,"%8s%-13s"," ",cuenta.arr);
               sprintf (cadena,"%9.2f",valor_deb);
               fprintf (fp,"%15s\n",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
               tot_deb[0] += valor_deb;
               tot_deb[1] += valor_deb;
               con_lin ++;
            }
         }
}

void lista_creditos()
{

         strcpy  (cuentab.arr, cuenta.arr);
         cuentab.len = strlen(cuentab.arr);

         if (strcmp(estado.arr, "2")) {

            /* EXEC SQL select infa, infb, infc, infd
                            into :veca, :vecb, :vecc, :vecd
                     from   plan
                     where  codigo_emp = (:codigo_emp) and
                            cuenta     = (:cuentab); */ 

{
            struct sqlexd sqlstm;

            sqlstm.sqlvsn = 8;
            sqlstm.arrsiz = 14;
            sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b\
3  from plan where (codigo_emp=:b4 and cuenta=:b5)";
            sqlstm.iters = (unsigned long  )1;
            sqlstm.offset = (unsigned short)480;
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

            veca.arr[veca.len] = '\0';
            vecb.arr[vecb.len] = '\0';
            vecc.arr[vecc.len] = '\0';
            vecd.arr[vecd.len] = '\0';
            strcpy (vecplan[0], veca.arr);
            strcpy (vecplan[1], vecb.arr);
            strcpy (vecplan[2], vecc.arr);
            strcpy (vecplan[3], vecd.arr);

         }
         strcpy(cuentab.arr,cuenta.arr);
         strorg(cuentab.arr,1,4);
         if (strcmp(cuentab.arr,cue)) {
            if( valor_cre > 0) {
               fprintf (fp,"%8s%-13s"," ",cuenta.arr);
               fprintf (fp,"FAC %-13s",vecmov[3]);
               sprintf (cadena,"%9.2f",valor_cre);
               fprintf (fp,"%15s\n",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
               tot_cre[0] += valor_cre;
               tot_cre[1] += valor_cre;
               con_lin ++;
            }
         }
}

void totales()
{

    sprintf (cadena,"%9.2f",tot_cre[1]);
    fprintf (fp,"%78s\n\n",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
    con_lin +=2;

    /* EXEC SQL OPEN C2A; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 14;
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)518;
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
    sqlstm.sqhstv[2] = (unsigned char  *)&clase;
    sqlstm.sqhstl[2] = (unsigned long  )5;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&cmp_ini;
    sqlstm.sqhstl[3] = (unsigned long  )9;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = 0;
    traidos = 0;
    num_ret = 0;

    while (staora == 0) {

          /* EXEC SQL FETCH C2A INTO :infa, :infb, :infc, :infd, :comprobante,
                                  :clase, :descripcion,
                                  :fecha, :tipo,:cuenta, :codigo_nit,
                                  :valor_deb,   :valor_cre, :estado; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 14;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)548;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&infa;
          sqlstm.sqhstl[0] = (unsigned long  )16;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&infb;
          sqlstm.sqhstl[1] = (unsigned long  )16;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&infc;
          sqlstm.sqhstl[2] = (unsigned long  )16;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqhstv[3] = (unsigned char  *)&infd;
          sqlstm.sqhstl[3] = (unsigned long  )16;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqhstv[4] = (unsigned char  *)&comprobante;
          sqlstm.sqhstl[4] = (unsigned long  )8;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqhstv[5] = (unsigned char  *)&clase;
          sqlstm.sqhstl[5] = (unsigned long  )5;
          sqlstm.sqindv[5] = (         short *)0;
          sqlstm.sqharm[5] = (unsigned long )0;
          sqlstm.sqhstv[6] = (unsigned char  *)&descripcion;
          sqlstm.sqhstl[6] = (unsigned long  )43;
          sqlstm.sqindv[6] = (         short *)0;
          sqlstm.sqharm[6] = (unsigned long )0;
          sqlstm.sqhstv[7] = (unsigned char  *)&fecha;
          sqlstm.sqhstl[7] = (unsigned long  )22;
          sqlstm.sqindv[7] = (         short *)0;
          sqlstm.sqharm[7] = (unsigned long )0;
          sqlstm.sqhstv[8] = (unsigned char  *)&tipo;
          sqlstm.sqhstl[8] = (unsigned long  )4;
          sqlstm.sqindv[8] = (         short *)0;
          sqlstm.sqharm[8] = (unsigned long )0;
          sqlstm.sqhstv[9] = (unsigned char  *)&cuenta;
          sqlstm.sqhstl[9] = (unsigned long  )17;
          sqlstm.sqindv[9] = (         short *)0;
          sqlstm.sqharm[9] = (unsigned long )0;
          sqlstm.sqhstv[10] = (unsigned char  *)&codigo_nit;
          sqlstm.sqhstl[10] = (unsigned long  )8;
          sqlstm.sqindv[10] = (         short *)0;
          sqlstm.sqharm[10] = (unsigned long )0;
          sqlstm.sqhstv[11] = (unsigned char  *)&valor_deb;
          sqlstm.sqhstl[11] = (unsigned long  )8;
          sqlstm.sqindv[11] = (         short *)0;
          sqlstm.sqharm[11] = (unsigned long )0;
          sqlstm.sqhstv[12] = (unsigned char  *)&valor_cre;
          sqlstm.sqhstl[12] = (unsigned long  )8;
          sqlstm.sqindv[12] = (         short *)0;
          sqlstm.sqharm[12] = (unsigned long )0;
          sqlstm.sqhstv[13] = (unsigned char  *)&estado;
          sqlstm.sqhstl[13] = (unsigned long  )4;
          sqlstm.sqindv[13] = (         short *)0;
          sqlstm.sqharm[13] = (unsigned long )0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



          staora  = sqlca.sqlcode;
          if (staora == -1405)
              staora  = 0;
          else if (staora)
                   fprintf (stderr, "Error leyendo C2A (%d)\n", staora);
          if (staora == 0) {
             infa       .arr  [infa       .len] = '\0';
             infb       .arr  [infb       .len] = '\0';
             infc       .arr  [infc       .len] = '\0';
             infd       .arr  [infd       .len] = '\0';
             clase      .arr  [clase      .len] = '\0';
             descripcion.arr  [descripcion.len] = '\0';
             fecha      .arr  [fecha      .len] = '\0';
             cuenta     .arr  [cuenta     .len] = '\0';
             estado     .arr  [estado     .len] = '\0';

             strcpy (vecmov[0], infa.arr);
             strcpy (vecmov[1], infb.arr);
             strcpy (vecmov[2], infc.arr);
             strcpy (vecmov[3], infd.arr);

             strcpy(cue,"1435");
             lista_debitos();
          }
          num_ret = traidos;
    }

    /* EXEC SQL CLOSE C2A; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 14;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)618;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  if (tot_deb[1] != tot_cre[1])  {
      fprintf (fp,"\n%102s","****  MOVIMIENTO DESCUADRADO ****  ===========> ");
      sprintf (cadena,"%9.2f",tot_deb[1]-tot_cre[1]);
      fprintf (fp,"%17s\n",fmtnum("zz,zzz,zzz,zz9.99",cadena,r_t));
  }
  fprintf (fp,"\n");
  con_lin +=3;
}


