
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
    ".\\egresos.pc"
};


static const unsigned long sqlctx = 1004108241;


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
   unsigned char    *sqhstv[10];
   unsigned long    sqhstl[10];
	    short   *sqindv[10];
   unsigned long    sqharm[10];
   unsigned long     *sqharc[10];
} sqlstm = {8,10};

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

 static const char *sq0003 = 
"select cuenta ,infa ,infb ,infc ,infd ,codigo_nit ,nvl(valor_deb,0) ,nvl(val\
or_cre,0) ,d.consecutivo ,d.secuencia  from movto_d d ,movto_c c where ((((((d\
.codigo_emp=c.codigo_emp and d.ano_mes=c.ano_mes) and d.consecutivo=c.consecut\
ivo) and c.codigo_emp=:b0) and c.clase='EG') and c.comprobante=:b1) and c.ano_\
mes>=:b2) order by cuenta,secuencia            ";
 static const char *sq0005 = 
"select decode(infa,inf,codigo_egr,'') ,decode(infb,inf,codigo_egr,'') ,decod\
e(infc,inf,codigo_egr,'') ,decode(infd,inf,codigo_egr,'') ,infa ,infb ,infc ,i\
nfd  from inf ,plan where ((inf.inf in (infa,infb,infc,infd) and codigo_emp=:b\
0) and cuenta=:b1)           ";
 static const char *sq0004 = 
"select cuenta ,infa ,infb ,infc ,infd ,nvl(valor_deb,0) ,nvl(valor_cre,0)  f\
rom movto_d d ,movto_c c where ((((((((d.codigo_emp=c.codigo_emp and d.ano_mes\
=c.ano_mes) and d.consecutivo=c.consecutivo) and c.codigo_emp=to_number(:b0)) \
and c.clase='EG') and c.comprobante=to_number(:b1)) and substr(cuenta,1,4) in \
('1110','1120')) and valor_cre is  not null ) and c.ano_mes>=:b2)           ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,144,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,80,0,4,172,0,3,1,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,
54,0,0,6,0,0,30,253,0,0,0,0,1,0,
68,0,0,7,231,0,4,268,0,4,3,0,1,0,2,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
98,0,0,3,357,0,9,281,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
124,0,0,3,0,0,13,283,0,10,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,
0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
178,0,0,8,170,0,4,288,0,2,1,0,1,0,2,9,0,0,1,4,0,0,
200,0,0,3,0,0,13,338,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,
0,2,4,0,0,2,4,0,0,
246,0,0,3,0,0,15,358,0,0,0,0,1,0,
260,0,0,5,261,0,9,369,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
282,0,0,5,0,0,15,374,0,0,0,0,1,0,
296,0,0,9,170,0,4,413,0,2,1,0,1,0,2,9,0,0,1,4,0,0,
318,0,0,5,0,0,13,458,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,2,9,0,0,2,9,0,0,
364,0,0,10,65,0,4,516,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
386,0,0,4,386,0,9,529,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
412,0,0,4,0,0,13,532,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,
0,2,4,0,0,
454,0,0,4,0,0,15,568,0,0,0,0,1,0,
468,0,0,11,239,0,4,579,0,9,3,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,9,
0,0,1,9,0,0,1,9,0,0,1,9,0,0,
};


/*****************************************************************
* EGRESOS.C Version 1.0 - Rev 1.2 - Sep. 23/94.
*
* egresos.c. Listado de Los Egresos preimpresos.
*
* Uso : egresos device userid/password
*
* Mario E. Santiago I. Creado Septiembre 23-1994.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(int argc, char *argv[]);
void lista_cuentas();
void imprima_ctas();
void imprime_valor();
void leer_inf();
void imprime_nit();
void lista_cheques();
void titulos();
void leer_nit();
void monletr();
				     /* Parametros de comunicacion con ORACLE */

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;
 
/* VARCHAR fecha[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha;

/* VARCHAR ano_mes[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

int     a2k;
int     detalle;
double  nit;
double  codigo_nit;
double  codigo_nit2;
/* VARCHAR codigo_bco[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_bco;

double  valor_cheques;
/* VARCHAR concepto[41]; */ 
struct { unsigned short len; unsigned char arr[41]; } concepto;

double  numero_factura;
double  valor_factura;
double  valor_efectivos;
double  consecutivo;
double  secuencia;
/* VARCHAR nombre[51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nombre;

/* VARCHAR nomb_nit[51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_nit;

/* VARCHAR cuenta1[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } cuenta1;

/* VARCHAR inf2a[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } inf2a;

/* VARCHAR inf2b[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } inf2b;

/* VARCHAR inf2c[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } inf2c;

/* VARCHAR inf2d[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } inf2d;

/* VARCHAR inf1a[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } inf1a;

/* VARCHAR inf1b[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } inf1b;

/* VARCHAR inf1c[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } inf1c;

/* VARCHAR inf1d[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } inf1d;

/* VARCHAR cuenta[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } cuenta;

/* VARCHAR infa[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infa;

/* VARCHAR infb[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infb;

/* VARCHAR infc[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infc;

/* VARCHAR infd[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infd;

/* VARCHAR vselinfa[4]; */ 
struct { unsigned short len; unsigned char arr[4]; } vselinfa;

/* VARCHAR vselinfb[4]; */ 
struct { unsigned short len; unsigned char arr[4]; } vselinfb;

/* VARCHAR vselinfc[4]; */ 
struct { unsigned short len; unsigned char arr[4]; } vselinfc;

/* VARCHAR vselinfd[4]; */ 
struct { unsigned short len; unsigned char arr[4]; } vselinfd;

/* VARCHAR codigo_emp[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

/* VARCHAR codigo_nitb[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nitb;

/* VARCHAR numero_egreso[9]; */ 
struct { unsigned short len; unsigned char arr[9]; } numero_egreso;

/* VARCHAR ultimo[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } ultimo;

/* VARCHAR cuentab[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } cuentab;

/* VARCHAR nombre_emp[61]; */ 
struct { unsigned short len; unsigned char arr[61]; } nombre_emp;

double  valor_deb;
double  valor_cre;
double  nvalor_deb;
double  ult_listado;
double  ult_grabado;

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


char inf    [4][14];
char inf1   [4][14];
char inf2   [4][14];
char vselinf[4][4];
char vecinf [4][4];
char cnombre_emp[61];
                                            /* Variables globales del usuario */
int  con_pag=0;                                   /* Contador de Paginas */
int  con_lin=33;                                   /* Contador de Lineas  */
int  cl;
int  staora = 0;
int  staorai= 0;

        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[80];
char    wcadena[13];
char    cadena [100];
char    cadena2[100];
int     imp_nit;
char    ccuenta[20];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int     i;
double  j;
int	status = 0;

    if (argc < 4)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : egresos codigo_emp device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("      device : s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (device,         argv[2]);
       strlow (device);

    if (!strpos ("/", argv[3]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[3]);
    uid.len  = strlen( uid.arr );

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
	   fprintf (stderr,"User Name/Password(%s) es Invalido. Re-intente.\n",uid.arr);
	   exit (1);
	  }
       else
          if (sqlca.sqlcode)
	     exit (1);

    busco_impresora(device);
    abre_impresora("1");

    strcpy (ano_mes.arr,    "199901");
    ano_mes.len    =        strlen(ano_mes.arr);

    /* C4 */
/*
    EXEC SQL select consecutivo, ult_listado
*/
    /* EXEC SQL select 2834, 2833
             into  :ult_grabado, :ult_listado
	     from   control_egr
             where  codigo_emp = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.stmt = "select 2834 ,2833 into :b0,:b1  from control_egr where co\
digo_emp=to_number(:b2)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)28;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&ult_grabado;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ult_listado;
    sqlstm.sqhstl[1] = (unsigned long  )8;
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



    /* EXEC SQL DECLARE C2 CURSOR FOR
             select cuenta, infa, infb, infc, infd,
                    codigo_nit, nvl(valor_deb,0), nvl(valor_cre,0),
                    d.consecutivo, d.secuencia
             from   movto_d d, movto_c c
             where  d.codigo_emp     = c.codigo_emp                  and
                    d.ano_mes        = c.ano_mes                     and
                    d.consecutivo    = c.consecutivo                 and
                    c.codigo_emp     =  :codigo_emp                  and
                    c.clase          = 'EG'                          and
                    c.comprobante    = :numero_egreso                and
                    c.ano_mes       >= :ano_mes
             order by cuenta, secuencia; */ 


    /* EXEC SQL DECLARE C3 CURSOR FOR
         select cuenta, infa, infb, infc, infd, 
                nvl(valor_deb,0), nvl(valor_cre,0)
         from   movto_d d, movto_c c 
         where  d.codigo_emp     = c.codigo_emp                  and 
                d.ano_mes        = c.ano_mes                     and 
                d.consecutivo    = c.consecutivo                 and 
                c.codigo_emp     = to_number(:codigo_emp)        and 
                c.clase          = 'EG'                          and 
                c.comprobante    = to_number(:numero_egreso)     and 
                substr(cuenta,1,4) in ('1110','1120')            and 
                valor_cre        is NOT NULL                     and 
                c.ano_mes       >= :ano_mes; */ 


    /* EXEC SQL DECLARE C6 CURSOR FOR
             select decode(infa,inf,codigo_egr,''),
                    decode(infb,inf,codigo_egr,''),
                    decode(infc,inf,codigo_egr,''),
                    decode(infd,inf,codigo_egr,''),
                    infa,infb,infc,infd
             from inf, plan
             where inf.inf   in (infa, infb, infc, infd) and
                   codigo_emp = :codigo_emp              and
                   cuenta     = :cuentab; */ 

/*
    printf ("ult_listado=<%f> ult_grabado=<%f>",ult_listado,ult_grabado); getchar();
*/
    ult_listado++;

    for (j=ult_listado;j<=ult_grabado;j++) {

         sprintf(numero_egreso.arr,"%8.0f",j);
         strtri (numero_egreso.arr);
         numero_egreso.len = strlen(numero_egreso.arr);
         lista_cuentas();
         for (i=1;i<=27-con_lin;i++) {
              fprintf (fp,"\n");
         }
         con_lin+=i;

         lista_cheques();

         for (i=1;i<=34-con_lin;i++) {
              fprintf (fp,"\n");
         }
         con_lin=33;

    }
    sprintf(ultimo.arr,"%8.0f",ult_grabado);
    ultimo.len = strlen(ultimo.arr);
/*
    EXEC SQL update control_egr
             set ult_listado     = to_number(:ultimo)
             where codigo_emp    = to_number(:codigo_emp);
    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo C5 (%d)\n", sqlca.sqlcode);
*/

/*****************************************
** COMMIT LOS CAMBIOS A LA BASE DE DATOS *
******************************************/

    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)54;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    cierre_impresora();

/************************************************
 * Desconectarse de ORACLE. (ologof)            *
 ************************************************/
    exit   (0);
}

void lista_cuentas()
{
  int staora2;
  int mover;

  /* EXEC SQL select count(*)
           into  :detalle
           from   movto_d d, movto_c c
           where  d.codigo_emp     = c.codigo_emp   and
                  d.ano_mes        = c.ano_mes      and
                  d.consecutivo    = c.consecutivo  and
                  c.codigo_emp     = :codigo_emp    and
                  c.clase          = 'EG'           and
                  c.comprobante    = :numero_egreso and
                  c.ano_mes       >= :ano_mes; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 4;
  sqlstm.stmt = "select count(*)  into :b0  from movto_d d ,movto_c c where \
((((((d.codigo_emp=c.codigo_emp and d.ano_mes=c.ano_mes) and d.consecutivo=c.c\
onsecutivo) and c.codigo_emp=:b1) and c.clase='EG') and c.comprobante=:b2) and\
 c.ano_mes>=:b3)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)68;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&detalle;
  sqlstm.sqhstl[0] = (unsigned long  )4;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[1] = (unsigned long  )5;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&numero_egreso;
  sqlstm.sqhstl[2] = (unsigned long  )11;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&ano_mes;
  sqlstm.sqhstl[3] = (unsigned long  )22;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  cuenta.arr  [cuenta.len] = '\0';

  /* EXEC SQL OPEN C2; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 4;
  sqlstm.stmt = sq0003;
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)98;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned long  )5;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&numero_egreso;
  sqlstm.sqhstl[1] = (unsigned long  )11;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&ano_mes;
  sqlstm.sqhstl[2] = (unsigned long  )22;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  staora2 = 0;
  /* EXEC SQL FETCH C2 INTO :cuenta, :infa, :infb, :infc, :infd,
                         :codigo_nit2, :valor_deb, :valor_cre,
                         :consecutivo, :secuencia; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 10;
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)124;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&cuenta;
  sqlstm.sqhstl[0] = (unsigned long  )16;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&infa;
  sqlstm.sqhstl[1] = (unsigned long  )16;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&infb;
  sqlstm.sqhstl[2] = (unsigned long  )16;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&infc;
  sqlstm.sqhstl[3] = (unsigned long  )16;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&infd;
  sqlstm.sqhstl[4] = (unsigned long  )16;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&codigo_nit2;
  sqlstm.sqhstl[5] = (unsigned long  )8;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqhstv[6] = (unsigned char  *)&valor_deb;
  sqlstm.sqhstl[6] = (unsigned long  )8;
  sqlstm.sqindv[6] = (         short *)0;
  sqlstm.sqharm[6] = (unsigned long )0;
  sqlstm.sqhstv[7] = (unsigned char  *)&valor_cre;
  sqlstm.sqhstl[7] = (unsigned long  )8;
  sqlstm.sqindv[7] = (         short *)0;
  sqlstm.sqharm[7] = (unsigned long )0;
  sqlstm.sqhstv[8] = (unsigned char  *)&consecutivo;
  sqlstm.sqhstl[8] = (unsigned long  )8;
  sqlstm.sqindv[8] = (         short *)0;
  sqlstm.sqharm[8] = (unsigned long )0;
  sqlstm.sqhstv[9] = (unsigned char  *)&secuencia;
  sqlstm.sqhstl[9] = (unsigned long  )8;
  sqlstm.sqindv[9] = (         short *)0;
  sqlstm.sqharm[9] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  if ( codigo_nit2 > 0 ) {
     /* EXEC SQL select n.nombre
              into  :nombre_emp
              from   nits n, nomemple p, empresas e
              where  p.codigo_nit  = :codigo_nit2   and
                     p.codigo_emp  = e.codigo_emp   and
                     e.codigo_nit  = n.codigo_nit   and
                     p.codigo_emp != 3; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 10;
     sqlstm.stmt = "select n.nombre into :b0  from nits n ,nomemple p ,empre\
sas e where (((p.codigo_nit=:b1 and p.codigo_emp=e.codigo_emp) and e.codigo_ni\
t=n.codigo_nit) and p.codigo_emp<>3)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)178;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&nombre_emp;
     sqlstm.sqhstl[0] = (unsigned long  )63;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&codigo_nit2;
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



     nombre_emp.arr  [nombre_emp.len] = '\0';
     strcpy(cnombre_emp,nombre_emp.arr);
  }
  else {
        strcpy(nombre_emp.arr,"");
        nombre_emp.arr  [nombre_emp.len] = '\0';
        strcpy(cnombre_emp,nombre_emp.arr);
  }

  strcpy(cnombre_emp, nombre_emp.arr);
  strcpy(ccuenta, cuenta.arr);

  sqlca.sqlcode = 0;
  while (staora2 == 0) {
         staora2 = sqlca.sqlcode;
         if (staora2 ==  1403) break;
         if (staora2 == -1405)
             staora2  = 0;
         else if (staora2 != 1403 && staora2 != 0)
                  fprintf (stderr, "Error leyendo C2 (%d)\n", staora2);

         cuenta.arr  [cuenta.len] = '\0';
         infa.arr    [infa.len]   = '\0';
         infb.arr    [infb.len]   = '\0';
         infc.arr    [infc.len]   = '\0';
         infd.arr    [infd.len]   = '\0';
         strcpy(inf[0],  infa.arr);
         strcpy(inf[1],  infb.arr);
         strcpy(inf[2],  infc.arr);
         strcpy(inf[3],  infd.arr);

         if (!memcmp(cuenta.arr,"1110",4) || !memcmp(cuenta.arr,"1120",4)) {
             if (valor_deb > 0) {
                 imprima_ctas();
             }
             else {
                   mover = 1;
             }
         }
         else {
               imprima_ctas();
         }
         /* EXEC SQL FETCH C2 INTO :cuenta, :infa, :infb, :infc, :infd,
                                :codigo_nit2, :valor_deb, :valor_cre; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 8;
         sqlstm.arrsiz = 10;
         sqlstm.iters = (unsigned long  )1;
         sqlstm.offset = (unsigned short)200;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)0;
         sqlstm.sqhstv[0] = (unsigned char  *)&cuenta;
         sqlstm.sqhstl[0] = (unsigned long  )16;
         sqlstm.sqindv[0] = (         short *)0;
         sqlstm.sqharm[0] = (unsigned long )0;
         sqlstm.sqhstv[1] = (unsigned char  *)&infa;
         sqlstm.sqhstl[1] = (unsigned long  )16;
         sqlstm.sqindv[1] = (         short *)0;
         sqlstm.sqharm[1] = (unsigned long )0;
         sqlstm.sqhstv[2] = (unsigned char  *)&infb;
         sqlstm.sqhstl[2] = (unsigned long  )16;
         sqlstm.sqindv[2] = (         short *)0;
         sqlstm.sqharm[2] = (unsigned long )0;
         sqlstm.sqhstv[3] = (unsigned char  *)&infc;
         sqlstm.sqhstl[3] = (unsigned long  )16;
         sqlstm.sqindv[3] = (         short *)0;
         sqlstm.sqharm[3] = (unsigned long )0;
         sqlstm.sqhstv[4] = (unsigned char  *)&infd;
         sqlstm.sqhstl[4] = (unsigned long  )16;
         sqlstm.sqindv[4] = (         short *)0;
         sqlstm.sqharm[4] = (unsigned long )0;
         sqlstm.sqhstv[5] = (unsigned char  *)&codigo_nit2;
         sqlstm.sqhstl[5] = (unsigned long  )8;
         sqlstm.sqindv[5] = (         short *)0;
         sqlstm.sqharm[5] = (unsigned long )0;
         sqlstm.sqhstv[6] = (unsigned char  *)&valor_deb;
         sqlstm.sqhstl[6] = (unsigned long  )8;
         sqlstm.sqindv[6] = (         short *)0;
         sqlstm.sqharm[6] = (unsigned long )0;
         sqlstm.sqhstv[7] = (unsigned char  *)&valor_cre;
         sqlstm.sqhstl[7] = (unsigned long  )8;
         sqlstm.sqindv[7] = (         short *)0;
         sqlstm.sqharm[7] = (unsigned long )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



         if (mover == 1) {
             strcpy(ccuenta, cuenta.arr);
             strcpy(cnombre_emp,nombre_emp.arr);
             mover = 0;
         }
  }
  if (detalle <= 14) {
      fprintf (fp,"%-12s%-44s",ccuenta,cnombre_emp);
      sprintf (cadena,"%9.2f",nvalor_deb);
      fprintf (fp,"%15s\n",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
      printf("Termine, Valor=(%s)\n",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
      printf("cuenta.arr=(%s), ccuenta=(%s), valor_deb=(%10.2f), valor_cre=(%10.2f)",cuenta.arr, ccuenta, valor_deb, valor_cre);
      printf("cnombre_emp=(%s), nombre_emp.arr=(%s), valor=(%10.2f)",cnombre_emp,nombre_emp.arr,nvalor_deb); getchar();
      nvalor_deb = 0;
      strcpy(ccuenta, cuenta.arr);
      strcpy(cnombre_emp,nombre_emp.arr);
  }
  /* EXEC SQL CLOSE C2; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 10;
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)246;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void imprima_ctas()
{
  int i, imp;
  if (con_lin > 22)
      titulos();
  strcpy  (cuentab.arr,cuenta.arr);
  cuentab.len = strlen(cuentab.arr);

  /* EXEC SQL OPEN C6; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 10;
  sqlstm.stmt = sq0005;
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)260;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned long  )5;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&cuentab;
  sqlstm.sqhstl[1] = (unsigned long  )16;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  for (i=0;i<4;i++) {
      strcpy(vecinf[i],"");
  }
  leer_inf();
  /* EXEC SQL CLOSE C6; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 10;
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)282;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  imp=0;
  if (detalle <= 14) {
     fprintf (fp,"%-12s",cuenta.arr);
     for (i=0;i<4;i++) {
         if (strcmp(vecinf[i],"*") && strcmp(vecinf[i],"=")) {
             if (strcmp(inf[i],"")) {
                 if (strlen(inf[i])<=9) {
                    fprintf (fp,"%-2s%-9s",vecinf[i],inf[i]);
                 }
                 else {
                    fprintf (fp,"%-11s",inf[i]);
                 }
                 imp=1;
             }
             else {
                  fprintf (fp,"%-2s%-9s"," "," ");
             }
         }
         else {
               fprintf (fp,"%-2s%-9s"," "," ");
         }
     }

     if (imp == 0) {
        imprime_nit();
        imprime_valor();
     }
     else {
           imprime_valor();
           imprime_nit();
           if (imp_nit==1) {
               fprintf(fp,"\n");
               con_lin++;
           }
     }
  }
  else {
        /* EXEC SQL select n.nombre
                 into  :nombre_emp
                 from   nits n, nomemple p, empresas e
                 where  p.codigo_nit  = :codigo_nit2  and
                        p.codigo_emp  = e.codigo_emp  and
                        e.codigo_nit  = n.codigo_nit  and
                        p.codigo_emp != 3; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 10;
        sqlstm.stmt = "select n.nombre into :b0  from nits n ,nomemple p ,em\
presas e where (((p.codigo_nit=:b1 and p.codigo_emp=e.codigo_emp) and e.codigo\
_nit=n.codigo_nit) and p.codigo_emp<>3)";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)296;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&nombre_emp;
        sqlstm.sqhstl[0] = (unsigned long  )63;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&codigo_nit2;
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


        nombre_emp.arr  [nombre_emp.len] = '\0';

        printf("\n\nAntes de While\n");
        printf("cuenta.arr=(%s), ccuenta=(%s), valor_deb=(%10.2f), valor_cre=(%10.2f)",cuenta.arr, ccuenta, valor_deb, valor_cre);
        printf("cnombre_emp=(%s), nombre_emp.arr=(%s), valor=(%10.2f)",cnombre_emp,nombre_emp.arr,nvalor_deb); getchar();
        if (strcmp(nombre_emp.arr, cnombre_emp) || strcmp(cuenta.arr, ccuenta)) {
           fprintf (fp,"%-12s%-44s",ccuenta,cnombre_emp);
           sprintf (cadena,"%9.2f",nvalor_deb);
           fprintf (fp,"%15s\n",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
           printf("Cambio, Valor=(%s)\n",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
           printf("cuenta.arr=(%s), ccuenta=(%s), valor_deb=(%10.2f), valor_cre=(%10.2f)",cuenta.arr, ccuenta, valor_deb, valor_cre);
           printf("cnombre_emp=(%s), nombre_emp.arr=(%s), valor=(%10.2f)",cnombre_emp,nombre_emp.arr,nvalor_deb); getchar();
           nvalor_deb = 0;
           strcpy(ccuenta, cuenta.arr);
           strcpy(cnombre_emp,nombre_emp.arr);
        }
        nvalor_deb = nvalor_deb + valor_deb;
  }
}

void imprime_valor()
{
  if (valor_deb != 0) {
      sprintf (cadena,"%9.2f",valor_deb);
      fprintf (fp,"%15s\n",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
  }
  else {
        sprintf (cadena,"%9.2f",valor_cre);
        fprintf (fp,"%15s\n",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
  }
  con_lin++;
}

void leer_inf()
{
  int i;
  staorai = 0;
  while (staorai==0) {
         /* EXEC SQL FETCH C6 INTO :vselinfa, :vselinfb, :vselinfc,
                                :vselinfd, :inf2a, :inf2b, :inf2c, :inf2d; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 8;
         sqlstm.arrsiz = 10;
         sqlstm.iters = (unsigned long  )1;
         sqlstm.offset = (unsigned short)318;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)0;
         sqlstm.sqhstv[0] = (unsigned char  *)&vselinfa;
         sqlstm.sqhstl[0] = (unsigned long  )6;
         sqlstm.sqindv[0] = (         short *)0;
         sqlstm.sqharm[0] = (unsigned long )0;
         sqlstm.sqhstv[1] = (unsigned char  *)&vselinfb;
         sqlstm.sqhstl[1] = (unsigned long  )6;
         sqlstm.sqindv[1] = (         short *)0;
         sqlstm.sqharm[1] = (unsigned long )0;
         sqlstm.sqhstv[2] = (unsigned char  *)&vselinfc;
         sqlstm.sqhstl[2] = (unsigned long  )6;
         sqlstm.sqindv[2] = (         short *)0;
         sqlstm.sqharm[2] = (unsigned long )0;
         sqlstm.sqhstv[3] = (unsigned char  *)&vselinfd;
         sqlstm.sqhstl[3] = (unsigned long  )6;
         sqlstm.sqindv[3] = (         short *)0;
         sqlstm.sqharm[3] = (unsigned long )0;
         sqlstm.sqhstv[4] = (unsigned char  *)&inf2a;
         sqlstm.sqhstl[4] = (unsigned long  )16;
         sqlstm.sqindv[4] = (         short *)0;
         sqlstm.sqharm[4] = (unsigned long )0;
         sqlstm.sqhstv[5] = (unsigned char  *)&inf2b;
         sqlstm.sqhstl[5] = (unsigned long  )16;
         sqlstm.sqindv[5] = (         short *)0;
         sqlstm.sqharm[5] = (unsigned long )0;
         sqlstm.sqhstv[6] = (unsigned char  *)&inf2c;
         sqlstm.sqhstl[6] = (unsigned long  )16;
         sqlstm.sqindv[6] = (         short *)0;
         sqlstm.sqharm[6] = (unsigned long )0;
         sqlstm.sqhstv[7] = (unsigned char  *)&inf2d;
         sqlstm.sqhstl[7] = (unsigned long  )16;
         sqlstm.sqindv[7] = (         short *)0;
         sqlstm.sqharm[7] = (unsigned long )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



         staorai  = sqlca.sqlcode;
         if (staorai ==  1403) break;
         if (staorai == -1405)
             staorai  = 0;
         else if (staorai != 1403 && staorai != 0)
                  fprintf (stderr, "Error leyendo C6 (%d)\n", staorai);

         vselinfa.arr[vselinfa.len] = '\0';
         vselinfb.arr[vselinfb.len] = '\0';
         vselinfc.arr[vselinfc.len] = '\0';
         vselinfd.arr[vselinfd.len] = '\0';
         inf2a.arr   [inf2a.len]    = '\0';
         inf2b.arr   [inf2b.len]    = '\0';
         inf2c.arr   [inf2c.len]    = '\0';
         inf2d.arr   [inf2d.len]    = '\0';
         strcpy(vselinf[0],vselinfa.arr);
         strcpy(vselinf[1],vselinfb.arr);
         strcpy(vselinf[2],vselinfc.arr);
         strcpy(vselinf[3],vselinfd.arr);
         strcpy(inf2   [0],inf2a.arr);
         strcpy(inf2   [1],inf2b.arr);
         strcpy(inf2   [2],inf2c.arr);
         strcpy(inf2   [3],inf2d.arr);
      
         for (i=0;i<4;i++) {
              if (strcmp(vselinf[i],"")) {
                  strcpy(vecinf[i],vselinf[i]);
                  i=5;
              }
         }
  }
}

void imprime_nit()
{
  int i;
  imp_nit=0;
  for (i=0;i<4;i++) {
      if (!strcmp(vecinf[i],"=")) {
          if (!strcmp(inf2[i],"NIT")) {
              if (codigo_nit != codigo_nit2) {
                  imp_nit=1;
                  leer_nit();
                  fprintf(fp,"\r            %-44s",nomb_nit.arr);
              }
          }
      }
  }
}

void leer_nit()
{         
  sprintf(codigo_nitb.arr,"%5.0f",codigo_nit2);
  codigo_nitb.len =    strlen(codigo_nitb.arr);

  /* EXEC SQL select nombre
           into :nomb_nit
           from   nits
           where  codigo_nit = to_number(:codigo_nitb); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 10;
  sqlstm.stmt = "select nombre into :b0  from nits where codigo_nit=to_numbe\
r(:b1)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)364;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&nomb_nit;
  sqlstm.sqhstl[0] = (unsigned long  )53;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&codigo_nitb;
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



  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
      fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);

  nomb_nit.arr  [nomb_nit.len] = '\0';
}

void lista_cheques()
{
  /* EXEC SQL OPEN C3; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 10;
  sqlstm.stmt = sq0004;
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)386;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned long  )5;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&numero_egreso;
  sqlstm.sqhstl[1] = (unsigned long  )11;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&ano_mes;
  sqlstm.sqhstl[2] = (unsigned long  )22;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  staora = 0;
  while (staora==0) {
         /* EXEC SQL FETCH C3 INTO :cuenta1, :inf1a, :inf1b, :inf1c, :inf1d,
                                :valor_deb, :valor_cre; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 8;
         sqlstm.arrsiz = 10;
         sqlstm.iters = (unsigned long  )1;
         sqlstm.offset = (unsigned short)412;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)0;
         sqlstm.sqhstv[0] = (unsigned char  *)&cuenta1;
         sqlstm.sqhstl[0] = (unsigned long  )16;
         sqlstm.sqindv[0] = (         short *)0;
         sqlstm.sqharm[0] = (unsigned long )0;
         sqlstm.sqhstv[1] = (unsigned char  *)&inf1a;
         sqlstm.sqhstl[1] = (unsigned long  )16;
         sqlstm.sqindv[1] = (         short *)0;
         sqlstm.sqharm[1] = (unsigned long )0;
         sqlstm.sqhstv[2] = (unsigned char  *)&inf1b;
         sqlstm.sqhstl[2] = (unsigned long  )16;
         sqlstm.sqindv[2] = (         short *)0;
         sqlstm.sqharm[2] = (unsigned long )0;
         sqlstm.sqhstv[3] = (unsigned char  *)&inf1c;
         sqlstm.sqhstl[3] = (unsigned long  )16;
         sqlstm.sqindv[3] = (         short *)0;
         sqlstm.sqharm[3] = (unsigned long )0;
         sqlstm.sqhstv[4] = (unsigned char  *)&inf1d;
         sqlstm.sqhstl[4] = (unsigned long  )16;
         sqlstm.sqindv[4] = (         short *)0;
         sqlstm.sqharm[4] = (unsigned long )0;
         sqlstm.sqhstv[5] = (unsigned char  *)&valor_deb;
         sqlstm.sqhstl[5] = (unsigned long  )8;
         sqlstm.sqindv[5] = (         short *)0;
         sqlstm.sqharm[5] = (unsigned long )0;
         sqlstm.sqhstv[6] = (unsigned char  *)&valor_cre;
         sqlstm.sqhstl[6] = (unsigned long  )8;
         sqlstm.sqindv[6] = (         short *)0;
         sqlstm.sqharm[6] = (unsigned long )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



         staora  = sqlca.sqlcode;
         if (staora ==  1403) break;
         if (staora == -1405)
             staora  = 0;
         else if (staora != 1403 && staora != 0)
                  fprintf (stderr, "Error leyendo C3 (%d)\n", staora);

         cuenta1.arr [cuenta1.len] = '\0';
         inf1a.arr  [inf1a.len]    = '\0';
         inf1b.arr  [inf1b.len]    = '\0';
         inf1c.arr  [inf1c.len]    = '\0';
         inf1d.arr  [inf1d.len]    = '\0';

         strcpy (inf1[0], inf1a.arr);
         strcpy (inf1[1], inf1b.arr);
         strcpy (inf1[2], inf1c.arr);
         strcpy (inf1[3], inf1d.arr);

         fprintf (fp,"%-9s",cuenta1.arr);
         fprintf (fp,"%8s ",inf1[2]);
         strcpy  (cadena,cuenta1.arr);
         strorg  (cadena,7,2);
         fprintf (fp,"%2s ",cadena);
         fprintf (fp,"%6s",inf1[0]);
         if (!strcmp(inf1[1],"ANULADO")) {
            fprintf (fp,"%14s\n",inf1[1]);
         }
         else {
              sprintf (cadena,"%9.2f",valor_cre);
              fprintf (fp,"%14s\n",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
         }
         con_lin++;
  }
  /* EXEC SQL CLOSE C3; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 10;
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)454;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
    /* C1 */
    /* EXEC SQL select fecha, codigo_nit, nitb, nombre, nvl(valorb,0), descripcion
             into  :fecha, :codigo_nit, :nit, :nombre, :valor_cheques, :concepto
	     from   movto_c c, nits n
             where  c.comprobante    =  :numero_egreso       and
                    c.clase          = 'EG'                  and
                    c.codigo_emp     =  :codigo_emp          and
                    c.codigo_nitb    = n.codigo_nit          and
                    c.ano_mes       >= :ano_mes; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 10;
    sqlstm.stmt = "select fecha ,codigo_nit ,nitb ,nombre ,nvl(valorb,0) ,de\
scripcion into :b0,:b1,:b2,:b3,:b4,:b5  from movto_c c ,nits n where ((((c.com\
probante=:b6 and c.clase='EG') and c.codigo_emp=:b7) and c.codigo_nitb=n.codig\
o_nit) and c.ano_mes>=:b8)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)468;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&fecha;
    sqlstm.sqhstl[0] = (unsigned long  )22;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_nit;
    sqlstm.sqhstl[1] = (unsigned long  )8;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&nit;
    sqlstm.sqhstl[2] = (unsigned long  )8;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&nombre;
    sqlstm.sqhstl[3] = (unsigned long  )53;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&valor_cheques;
    sqlstm.sqhstl[4] = (unsigned long  )8;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&concepto;
    sqlstm.sqhstl[5] = (unsigned long  )43;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&numero_egreso;
    sqlstm.sqhstl[6] = (unsigned long  )11;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[7] = (unsigned long  )5;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&ano_mes;
    sqlstm.sqhstl[8] = (unsigned long  )22;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
        fprintf (stderr, "Error leyendo C1 (%d)\n", sqlca.sqlcode);

    fecha.arr    [fecha.len]    = '\0';
    nombre.arr   [nombre.len]   = '\0';
    concepto.arr [concepto.len] = '\0';

    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    fecha_numero3(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"%s%35s\n\n\n\n%s%s%71s\n\n",ancho_on,numero_egreso.arr,ancho_off,diezcpi,cadena);
    fprintf (fp,"%-56s",nombre.arr);
    sprintf (cadena,"%12.0f",nit);
    fprintf (fp,"%15s\n\n",fmtnum("zzz,zzz,zzz,zzz",cadena,r_t));
    monletr (valor_cheques,cadena);
    fprintf (fp,"%s%-96s%s",condensado_on,cadena,condensado_off);
    sprintf (cadena,"%9.2f",valor_cheques);
    fprintf (fp,"%15s\n\n\n\n",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
    fprintf (fp,"%12s%s\n"," ",concepto.arr);
    con_lin = 13;
}
