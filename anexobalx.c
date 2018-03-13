
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
           char  filnam[15];
};
static const struct sqlcxp sqlfpn =
{
    14,
    ".\\anexobalx.pc"
};


static const unsigned long sqlctx = 1059759116;


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
   unsigned char    *sqhstv[9];
   unsigned long    sqhstl[9];
	    short   *sqindv[9];
   unsigned long    sqharm[9];
   unsigned long     *sqharc[9];
} sqlstm = {8,9};

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
 static const char *sq0007 = 
"select cuenta  from cta_anexos where ((codigo_emp=:b0 and cuenta>=:b1) and c\
uenta<=:b2) order by cuenta            ";
 static const char *sq0003 = 
"select cuenta ,nombre ,nvl(nit,0) ,decode(codigo,'0','',codigo) ,sum(valor_d\
eb) ,sum(valor_cre)  from acumulanit ,nits where (((((nits.codigo_nit(+)=acumu\
lanit.codigo_nit and acumulanit.codigo_emp=to_number(:b0)) and ano_mes>=to_num\
ber(:b1)) and ano_mes<=to_number(:b2)) and cuenta>=:b3) and cuenta<=:b4) group\
 by cuenta,nombre,codigo,acumulanit.codigo_nit,nit order by cuenta,codigo,nit \
           ";
 static const char *sq0002 = 
"select plan.cuenta ,plan.nombre ,db_cr ,nivel ,sum(valor_deb) ,sum(valor_cre\
)  from acumulados a ,plan where ((((((a.codigo_emp=to_number(:b0) and a.codig\
o_emp=plan.codigo_emp) and ano_mes>=to_number(:b1)) and ano_mes<=to_number(:b2\
)) and plan.cuenta=substr(a.cuenta,1,decode(to_number(nivel),0,1,(to_number(ni\
vel)* 2)))) and plan.cuenta>=:b3) and plan.cuenta<=:b4) group by plan.cuenta,p\
lan.nombre,nivel,db_cr           ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,795,169,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,4,140,0,772,242,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
58,0,0,5,361,0,772,256,0,9,8,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,9,0,0,1,9,0,0,1,9,0,0,
108,0,0,6,35,0,777,278,0,0,0,0,1,0,
122,0,0,6,0,0,781,285,0,1,0,0,1,0,2,9,0,0,
140,0,0,6,0,0,783,299,0,0,0,0,1,0,
154,0,0,7,115,0,777,311,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
180,0,0,7,0,0,781,312,0,1,0,0,1,0,2,9,0,0,
198,0,0,7,0,0,783,326,0,0,0,0,1,0,
212,0,0,7,115,0,777,327,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
238,0,0,7,0,0,781,328,0,1,0,0,1,0,2,9,0,0,
256,0,0,2,0,0,783,341,0,0,0,0,1,0,
270,0,0,3,0,0,783,342,0,0,0,0,1,0,
284,0,0,7,0,0,781,352,0,1,0,0,1,0,2,9,0,0,
302,0,0,8,0,0,798,363,0,0,0,0,1,0,
316,0,0,3,399,0,777,380,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
350,0,0,3,0,0,781,382,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,
388,0,0,2,421,0,777,414,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
422,0,0,2,0,0,781,415,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,4,
0,0,
460,0,0,3,0,0,781,481,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,
498,0,0,2,0,0,781,523,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,4,
0,0,
536,0,0,2,0,0,781,545,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,4,
0,0,
574,0,0,3,0,0,781,566,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,
612,0,0,9,99,0,772,659,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,9,
0,0,
650,0,0,7,0,0,781,788,0,1,0,0,1,0,2,9,0,0,
668,0,0,3,0,0,781,828,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,
706,0,0,10,55,0,772,869,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
728,0,0,11,55,0,772,892,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
750,0,0,12,70,0,772,916,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
776,0,0,13,95,0,772,940,0,4,3,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
806,0,0,14,73,0,772,966,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
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

/* VARCHAR nombre_ctax[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nombre_ctax;

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


double  valor_niv3=0;
double  valor_niv4=0;
char    cuenta_adl  [20];
char    cuenta_an   [20];
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

    if (argc < 10)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp aaaamm cuentai cuentaf copias pagina device timbrado(s/n) userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("      device : s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (cuentai.arr,    argv[3]);
       cuentai.len    =        strlen(cuentai.arr);
       strcpy (cuentaf.arr,    argv[4]);
       cuentaf.len    =        strlen(cuentaf.arr);
       strcpy (copias,         argv[5]);
       strcpy (pagina,         argv[6]);
       strcpy (device,         argv[7]);
       strlow (device);
       strcpy (timbrado,       argv[8]);
       strlow (timbrado);

    if (!strpos ("/", argv[9]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy(uid.arr,argv[9]);
    uid.len = strlen(uid.arr);

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
    sprintf (ano_mesi.arr,"%04d%02d",anoi-1,13);
    ano_mesi.len   =        strlen(ano_mesi.arr);

    /* EXEC SQL DECLARE C2 CURSOR FOR
    select plan.cuenta, plan.nombre, db_cr, nivel, sum(valor_deb),
           sum(valor_cre)
    from acumulados a, plan
    where a.codigo_emp = to_number(:codigo_emp)     and
          a.codigo_emp = plan.codigo_emp            and
          ano_mes     >= to_number(:ano_mesi)       and
          ano_mes     <= to_number(:ano_mes)        and
          plan.cuenta  =
          substr(a.cuenta,1,decode(to_number(nivel),0,1,to_number(nivel)*2))
                                                    and
          plan.cuenta >= (:cuentai)                 and
          plan.cuenta <= (:cuentaf)
    group by plan.cuenta, plan.nombre, nivel, db_cr; */ 


    /* EXEC SQL DECLARE C3 CURSOR FOR
    select cuenta, nombre, nvl(nit,0), decode(codigo,'0','',codigo),
           sum(valor_deb), sum(valor_cre)
    from acumulanit, nits
    where  nits.codigo_nit(+)    = acumulanit.codigo_nit       and
           acumulanit.codigo_emp = to_number(:codigo_emp)      and
           ano_mes              >= to_number(:ano_mesi)        and
           ano_mes              <= to_number(:ano_mes)         and
           cuenta               >= (:cuentai)                  and
           cuenta               <= (:cuentaf)                  
    group by cuenta, nombre, codigo, acumulanit.codigo_nit, nit
    order by cuenta, codigo, nit; */ 


/* C1 */

    /* EXEC SQL select n.nombre, n.nit, n.digito
             into  :nomb_emp, :nit, :digito
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
    sqlstm.offset = (unsigned short)28;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
    sqlstm.sqhstl[0] = (unsigned long  )63;
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
                   not exists (select *
                               from  acumulanit
                               where codigo_emp = to_number(:codigo_emp) and
                                     ano_mes   >= to_number(:ano_mesi)   and
                                     ano_mes   <= to_number(:ano_mes)    and
                                     a.cuenta   = cuenta); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = "select nvl((sum(valor_deb)-sum(valor_cre)),0) into :b0  f\
rom acumulados a where (((((codigo_emp=to_number(:b1) and ano_mes>=to_number(:\
b2)) and ano_mes<=to_number(:b3)) and cuenta>=:b4) and cuenta<=:b5) and  not e\
xists (select *  from acumulanit where (((codigo_emp=to_number(:b1) and ano_me\
s>=to_number(:b2)) and ano_mes<=to_number(:b3)) and a.cuenta=cuenta)))";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)58;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&total_no5;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[1] = (unsigned long  )5;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesi;
    sqlstm.sqhstl[2] = (unsigned long  )22;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&ano_mes;
    sqlstm.sqhstl[3] = (unsigned long  )22;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&cuentai;
    sqlstm.sqhstl[4] = (unsigned long  )22;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&cuentaf;
    sqlstm.sqhstl[5] = (unsigned long  )22;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[6] = (unsigned long  )5;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&ano_mesi;
    sqlstm.sqhstl[7] = (unsigned long  )22;
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
        fprintf (stderr, "C9 Error leyendo Acumulados, ano_mesi (%-s), ano_mes (%-s), cuentai (%-s), cuentaf (%-s), (%d)\n", ano_mesi.arr,  ano_mes.arr , cuentai.arr, cuentaf.arr, sqlca.sqlcode);

    /* EXEC SQL DECLARE C4 CURSOR FOR
    select inf
    from   infacu; */ 


    /* EXEC SQL OPEN C4; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = sq0006;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)108;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = 0;
    traidos = 0;
    num_ret = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C4 INTO :vecinf; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 9;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)122;
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

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)140;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    trabajo();

    /* EXEC SQL DECLARE C11 CURSOR FOR
    select cuenta
    from   cta_anexos
    where  codigo_emp = :codigo_emp   and
           cuenta    >= :cuentai      and
           cuenta    <= :cuentaf
    order  by cuenta; */ 


    /* EXEC SQL OPEN  C11; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = sq0007;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)154;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[0] = (unsigned long  )5;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&cuentai;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&cuentaf;
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


    /* EXEC SQL FETCH C11 INTO :cuentax; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)180;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&cuentax;
    sqlstm.sqhstl[0] = (unsigned long  )22;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
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

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)198;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL OPEN  C11; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = sq0007;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)212;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[0] = (unsigned long  )5;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&cuentai;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&cuentaf;
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


    /* EXEC SQL FETCH C11 INTO :cuentax; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)238;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&cuentax;
    sqlstm.sqhstl[0] = (unsigned long  )22;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
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
          /* EXEC SQL CLOSE C2; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 9;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)256;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


          /* EXEC SQL CLOSE C3; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 9;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)270;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
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

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 9;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)284;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&cuentax;
          sqlstm.sqhstl[0] = (unsigned long  )22;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
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

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)302;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
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
printf ("trabajo nro. %-d\n", cuantas);

    staorad=0;
    staoran=0;

    /* EXEC SQL OPEN  C3; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)316;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[0] = (unsigned long  )5;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesi;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&ano_mes;
    sqlstm.sqhstl[2] = (unsigned long  )22;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&cuentai;
    sqlstm.sqhstl[3] = (unsigned long  )22;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&cuentaf;
    sqlstm.sqhstl[4] = (unsigned long  )22;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    while (staoran==0 ) {
       /* EXEC SQL FETCH C3 INTO :cuentan, :nombre_ctax, :nitn,
                              :codigo,  :valor_debn,  :valor_cren; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 9;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)350;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&cuentan;
       sqlstm.sqhstl[0] = (unsigned long  )22;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&nombre_ctax;
       sqlstm.sqhstl[1] = (unsigned long  )52;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&nitn;
       sqlstm.sqhstl[2] = (unsigned long  )8;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&codigo;
       sqlstm.sqhstl[3] = (unsigned long  )22;
       sqlstm.sqindv[3] = (         short *)0;
       sqlstm.sqharm[3] = (unsigned long )0;
       sqlstm.sqhstv[4] = (unsigned char  *)&valor_debn;
       sqlstm.sqhstl[4] = (unsigned long  )8;
       sqlstm.sqindv[4] = (         short *)0;
       sqlstm.sqharm[4] = (unsigned long )0;
       sqlstm.sqhstv[5] = (unsigned char  *)&valor_cren;
       sqlstm.sqhstl[5] = (unsigned long  )8;
       sqlstm.sqindv[5] = (         short *)0;
       sqlstm.sqharm[5] = (unsigned long )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


       staoran  = sqlca.sqlcode;
       if (valor_debn-valor_cren != 0)
          break;
    }
    cuentan.arr     [cuentan.len]     = '\0';
    strcpy(nombre_ctam.arr,nombre_ctax.arr);
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

    /* EXEC SQL OPEN  C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = sq0002;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)388;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[0] = (unsigned long  )5;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesi;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&ano_mes;
    sqlstm.sqhstl[2] = (unsigned long  )22;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&cuentai;
    sqlstm.sqhstl[3] = (unsigned long  )22;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&cuentaf;
    sqlstm.sqhstl[4] = (unsigned long  )22;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL FETCH C2 INTO :cuenta, :nombre_cta, :db_cr, :nivel,
                           :valor_deb, :valor_cre; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)422;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&cuenta;
    sqlstm.sqhstl[0] = (unsigned long  )22;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&nombre_cta;
    sqlstm.sqhstl[1] = (unsigned long  )72;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&db_cr;
    sqlstm.sqhstl[2] = (unsigned long  )5;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&nivel;
    sqlstm.sqhstl[3] = (unsigned long  )4;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&valor_deb;
    sqlstm.sqhstl[4] = (unsigned long  )8;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&valor_cre;
    sqlstm.sqhstl[5] = (unsigned long  )8;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    cuenta.arr     [cuenta.len]     = '\0';
    nombre_cta.arr [nombre_cta.len] = '\0';
    db_cr.arr      [db_cr.len]      = '\0';
    staorad  = sqlca.sqlcode;
    if (!staorad) {
       if (strcmp(cuenta.arr,cuentan.arr) <= 0) {
           strcpy(g_nombre,nombre_cta.arr);
           strcpy(nombre_ctam.arr,nombre_cta.arr); //aqui
       }
    }
    if (staorad == 1403) {
        strcpy(cuenta.arr,"9999999999");
        cuenta.len = strlen(cuenta.arr);
    }
    else if (staorad) fprintf (stderr, "Error1, %-d\n", staorad);

    printf("staoran(trabajo) %d %s g_: %s m: %s n:%s",staoran,cuentan.arr,g_nombre,nombre_ctam.arr,nombre_ctan.arr); getchar();
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
    sprintf (cadena,"%12.0f",nit);
    fmtnum("zzz,zzz,zzz,zzz",cadena,r_t);
    fprintf (fp,"%s%25s %18s",ancho_on,"NIT :",r_t);
    if (digito > 0) {
       sprintf (cadena,"%d",digito);
       fmtnum("z",cadena,r_t);
       fprintf (fp,"-%s",r_t);
    }
    else if (digito == 0)
            fprintf (fp,"-%s","0");
    fprintf(fp,"\n%20s%s%s\n\n"," ","ANEXOS AL BALANCE DE PRUEBA",ancho_off);
 }
 fecha_system(fecha);
/* printf("mesi=%d\n",mesi); */
 fprintf(fp,"%s%s%-44s%s%10s / %d",condensado_on,"FECHA PROCESO : ",fecha,"PERIODO : ",mes[mesi-1],anoi);
 fprintf(fp,"%54s %d\n\n","PAGINA ",con_pag);
 fprintf(fp,"%s%s%s%161s%s\n\n",enfatizado_on,diezcpi,condensado_on,"CUENTA      NIT      CODIGO     NOMBRE DE LA CUENTA                        AUXILIAR #2    AUXILIAR #1      SUBCUENTA         CUENTA          GRUPO          CLASE",enfatizado_off);
 con_lin = 8;
}

void lista_balance()
{
 while (staorad==0 || staoran==0) {
        if (strcmp(cuenta.arr,cuentan.arr)==0) {
            imprime_acumulados();
            imprime_acumulanit();
            if (entre==0) {
                while (staoran==0 ) {
                      /* EXEC SQL FETCH C3 INTO :cuentan, :nombre_ctax, :nitn,
                                             :codigo,  :valor_debn,  :valor_cren; */ 

{
                      struct sqlexd sqlstm;

                      sqlstm.sqlvsn = 8;
                      sqlstm.arrsiz = 9;
                      sqlstm.iters = (unsigned long  )1;
                      sqlstm.offset = (unsigned short)460;
                      sqlstm.cud = sqlcud0;
                      sqlstm.sqlest = (unsigned char  *)&sqlca;
                      sqlstm.sqlety = (unsigned short)0;
                      sqlstm.sqhstv[0] = (unsigned char  *)&cuentan;
                      sqlstm.sqhstl[0] = (unsigned long  )22;
                      sqlstm.sqindv[0] = (         short *)0;
                      sqlstm.sqharm[0] = (unsigned long )0;
                      sqlstm.sqhstv[1] = (unsigned char  *)&nombre_ctax;
                      sqlstm.sqhstl[1] = (unsigned long  )52;
                      sqlstm.sqindv[1] = (         short *)0;
                      sqlstm.sqharm[1] = (unsigned long )0;
                      sqlstm.sqhstv[2] = (unsigned char  *)&nitn;
                      sqlstm.sqhstl[2] = (unsigned long  )8;
                      sqlstm.sqindv[2] = (         short *)0;
                      sqlstm.sqharm[2] = (unsigned long )0;
                      sqlstm.sqhstv[3] = (unsigned char  *)&codigo;
                      sqlstm.sqhstl[3] = (unsigned long  )22;
                      sqlstm.sqindv[3] = (         short *)0;
                      sqlstm.sqharm[3] = (unsigned long )0;
                      sqlstm.sqhstv[4] = (unsigned char  *)&valor_debn;
                      sqlstm.sqhstl[4] = (unsigned long  )8;
                      sqlstm.sqindv[4] = (         short *)0;
                      sqlstm.sqharm[4] = (unsigned long )0;
                      sqlstm.sqhstv[5] = (unsigned char  *)&valor_cren;
                      sqlstm.sqhstl[5] = (unsigned long  )8;
                      sqlstm.sqindv[5] = (         short *)0;
                      sqlstm.sqharm[5] = (unsigned long )0;
                      sqlstm.sqphsv = sqlstm.sqhstv;
                      sqlstm.sqphsl = sqlstm.sqhstl;
                      sqlstm.sqpind = sqlstm.sqindv;
                      sqlstm.sqparm = sqlstm.sqharm;
                      sqlstm.sqparc = sqlstm.sqharc;
                      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                      staoran  = sqlca.sqlcode;
                      if (valor_debn-valor_cren != 0)
                          break;
                }
                cuentan.arr     [cuentan.len]     = '\0';
                strcpy(nombre_ctam.arr,nombre_ctax.arr);
                nombre_ctam.arr [nombre_ctam.len] = '\0';
                codigo.arr      [codigo.len]      = '\0';
                staoran = sqlca.sqlcode;

                printf("staoran(lista_balance) g_:<%s> m:<%s> n:<%s> %d",g_nombre,nombre_ctam.arr,nombre_ctan.arr,staoran); getchar();

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
            /* EXEC SQL FETCH C2 INTO :cuenta, :nombre_cta, :db_cr, :nivel,
                                   :valor_deb, :valor_cre; */ 

{
            struct sqlexd sqlstm;

            sqlstm.sqlvsn = 8;
            sqlstm.arrsiz = 9;
            sqlstm.iters = (unsigned long  )1;
            sqlstm.offset = (unsigned short)498;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)0;
            sqlstm.sqhstv[0] = (unsigned char  *)&cuenta;
            sqlstm.sqhstl[0] = (unsigned long  )22;
            sqlstm.sqindv[0] = (         short *)0;
            sqlstm.sqharm[0] = (unsigned long )0;
            sqlstm.sqhstv[1] = (unsigned char  *)&nombre_cta;
            sqlstm.sqhstl[1] = (unsigned long  )72;
            sqlstm.sqindv[1] = (         short *)0;
            sqlstm.sqharm[1] = (unsigned long )0;
            sqlstm.sqhstv[2] = (unsigned char  *)&db_cr;
            sqlstm.sqhstl[2] = (unsigned long  )5;
            sqlstm.sqindv[2] = (         short *)0;
            sqlstm.sqharm[2] = (unsigned long )0;
            sqlstm.sqhstv[3] = (unsigned char  *)&nivel;
            sqlstm.sqhstl[3] = (unsigned long  )4;
            sqlstm.sqindv[3] = (         short *)0;
            sqlstm.sqharm[3] = (unsigned long )0;
            sqlstm.sqhstv[4] = (unsigned char  *)&valor_deb;
            sqlstm.sqhstl[4] = (unsigned long  )8;
            sqlstm.sqindv[4] = (         short *)0;
            sqlstm.sqharm[4] = (unsigned long )0;
            sqlstm.sqhstv[5] = (unsigned char  *)&valor_cre;
            sqlstm.sqhstl[5] = (unsigned long  )8;
            sqlstm.sqindv[5] = (         short *)0;
            sqlstm.sqharm[5] = (unsigned long )0;
            sqlstm.sqphsv = sqlstm.sqhstv;
            sqlstm.sqphsl = sqlstm.sqhstl;
            sqlstm.sqpind = sqlstm.sqindv;
            sqlstm.sqparm = sqlstm.sqharm;
            sqlstm.sqparc = sqlstm.sqharc;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


            cuenta.arr     [cuenta.len]     = '\0';
            nombre_cta.arr [nombre_cta.len] = '\0';
            db_cr.arr      [db_cr.len]      = '\0';
            staorad = sqlca.sqlcode;
            if (!staorad) {
               if (strcmp(cuenta.arr,cuentan.arr) <= 0) {
                   strcpy(g_nombre,nombre_cta.arr);
                   strcpy(nombre_ctam.arr,nombre_ctam.arr); //aqui
               }
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
                  /* EXEC SQL FETCH C2 INTO :cuenta, :nombre_cta, :db_cr, :nivel,
                                         :valor_deb, :valor_cre; */ 

{
                  struct sqlexd sqlstm;

                  sqlstm.sqlvsn = 8;
                  sqlstm.arrsiz = 9;
                  sqlstm.iters = (unsigned long  )1;
                  sqlstm.offset = (unsigned short)536;
                  sqlstm.cud = sqlcud0;
                  sqlstm.sqlest = (unsigned char  *)&sqlca;
                  sqlstm.sqlety = (unsigned short)0;
                  sqlstm.sqhstv[0] = (unsigned char  *)&cuenta;
                  sqlstm.sqhstl[0] = (unsigned long  )22;
                  sqlstm.sqindv[0] = (         short *)0;
                  sqlstm.sqharm[0] = (unsigned long )0;
                  sqlstm.sqhstv[1] = (unsigned char  *)&nombre_cta;
                  sqlstm.sqhstl[1] = (unsigned long  )72;
                  sqlstm.sqindv[1] = (         short *)0;
                  sqlstm.sqharm[1] = (unsigned long )0;
                  sqlstm.sqhstv[2] = (unsigned char  *)&db_cr;
                  sqlstm.sqhstl[2] = (unsigned long  )5;
                  sqlstm.sqindv[2] = (         short *)0;
                  sqlstm.sqharm[2] = (unsigned long )0;
                  sqlstm.sqhstv[3] = (unsigned char  *)&nivel;
                  sqlstm.sqhstl[3] = (unsigned long  )4;
                  sqlstm.sqindv[3] = (         short *)0;
                  sqlstm.sqharm[3] = (unsigned long )0;
                  sqlstm.sqhstv[4] = (unsigned char  *)&valor_deb;
                  sqlstm.sqhstl[4] = (unsigned long  )8;
                  sqlstm.sqindv[4] = (         short *)0;
                  sqlstm.sqharm[4] = (unsigned long )0;
                  sqlstm.sqhstv[5] = (unsigned char  *)&valor_cre;
                  sqlstm.sqhstl[5] = (unsigned long  )8;
                  sqlstm.sqindv[5] = (         short *)0;
                  sqlstm.sqharm[5] = (unsigned long )0;
                  sqlstm.sqphsv = sqlstm.sqhstv;
                  sqlstm.sqphsl = sqlstm.sqhstl;
                  sqlstm.sqpind = sqlstm.sqindv;
                  sqlstm.sqparm = sqlstm.sqharm;
                  sqlstm.sqparc = sqlstm.sqharc;
                  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                  cuenta.arr     [cuenta.len]     = '\0';
                  nombre_cta.arr [nombre_cta.len] = '\0';
                  db_cr.arr      [db_cr.len]      = '\0';
                  staorad = sqlca.sqlcode;
                  if (!staorad) {
                     if (strcmp(cuenta.arr,cuentan.arr) <= 0) {
                         strcpy(g_nombre,nombre_cta.arr);
                         strcpy(nombre_ctam.arr,nombre_cta.arr); //aqui
                     }
                  }
                  if (staorad) {
                      strcpy(cuenta.arr,"9999999999");
                      cuenta.len = strlen(cuenta.arr);
                  }
              }
              else {
                    imprime_acumulanit();
                    if (entre==0) {
                        while (staoran==0 ) {
                             /* EXEC SQL FETCH C3 INTO :cuentan, :nombre_ctax, :nitn,
                                                    :codigo,  :valor_debn,  :valor_cren; */ 

{
                             struct sqlexd sqlstm;

                             sqlstm.sqlvsn = 8;
                             sqlstm.arrsiz = 9;
                             sqlstm.iters = (unsigned long  )1;
                             sqlstm.offset = (unsigned short)574;
                             sqlstm.cud = sqlcud0;
                             sqlstm.sqlest = (unsigned char  *)&sqlca;
                             sqlstm.sqlety = (unsigned short)0;
                             sqlstm.sqhstv[0] = (unsigned char  *)&cuentan;
                             sqlstm.sqhstl[0] = (unsigned long  )22;
                             sqlstm.sqindv[0] = (         short *)0;
                             sqlstm.sqharm[0] = (unsigned long )0;
                             sqlstm.sqhstv[1] = (unsigned char  *)&nombre_ctax;
                             sqlstm.sqhstl[1] = (unsigned long  )52;
                             sqlstm.sqindv[1] = (         short *)0;
                             sqlstm.sqharm[1] = (unsigned long )0;
                             sqlstm.sqhstv[2] = (unsigned char  *)&nitn;
                             sqlstm.sqhstl[2] = (unsigned long  )8;
                             sqlstm.sqindv[2] = (         short *)0;
                             sqlstm.sqharm[2] = (unsigned long )0;
                             sqlstm.sqhstv[3] = (unsigned char  *)&codigo;
                             sqlstm.sqhstl[3] = (unsigned long  )22;
                             sqlstm.sqindv[3] = (         short *)0;
                             sqlstm.sqharm[3] = (unsigned long )0;
                             sqlstm.sqhstv[4] = (unsigned char  *)&valor_debn;
                             sqlstm.sqhstl[4] = (unsigned long  )8;
                             sqlstm.sqindv[4] = (         short *)0;
                             sqlstm.sqharm[4] = (unsigned long )0;
                             sqlstm.sqhstv[5] = (unsigned char  *)&valor_cren;
                             sqlstm.sqhstl[5] = (unsigned long  )8;
                             sqlstm.sqindv[5] = (         short *)0;
                             sqlstm.sqharm[5] = (unsigned long )0;
                             sqlstm.sqphsv = sqlstm.sqhstv;
                             sqlstm.sqphsl = sqlstm.sqhstl;
                             sqlstm.sqpind = sqlstm.sqindv;
                             sqlstm.sqparm = sqlstm.sqharm;
                             sqlstm.sqparc = sqlstm.sqharc;
                             sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                             staoran  = sqlca.sqlcode;
                             if (valor_debn-valor_cren != 0)
                                 break;
                        }
                        cuentan.arr     [cuentan.len]     = '\0';
                        strcpy(nombre_ctam.arr,nombre_ctax.arr);
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
     sprintf (cadena2,"%-9s%23s",cuenta.arr," ");
     strcpy  (cadenon,cadena2);
     strorg  (nombre_cta.arr,1,39);
     sprintf (cadena2,"%-39s",nombre_cta.arr);
     strcat  (cadenon,cadena2);
     sprintf (nombre_ctam.arr,"%-39s",nombre_cta.arr);
  }
  valor_deb-=valor_cre;
  total[nivel]+=valor_deb;
  if (nivel==3)
     valor_niv3=valor_deb;
  sprintf (cadena,"%9.2f",valor_deb);
  strful(cadena3,(int)((5-nivel)*14),' ');

  printf("staoran(imprime_acumulados) %s %d",cadenon,staoran); getchar();

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
  cuentab.len = strlen(cuentab.arr);
  
  /* C5 */
  /* EXEC SQL select infa, infb, infc, infd
           into  :veca, :vecb, :vecc, :vecd
           from   plan
           where  codigo_emp = :codigo_emp and
                  cuenta     = :cuentab; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 9;
  sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b3  from pl\
an where (codigo_emp=:b4 and cuenta=:b5)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)612;
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
  sqlstm.sqhstl[4] = (unsigned long  )5;
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
      printf("0-imprime_acumulanit , nitn==1, %s",codigo.arr, g_nombre); getchar();
      if (!strlen(codigo.arr) && valor_debx != 0) {
         strcpy(nombre_ctan.arr,g_nombre);
         nombre_ctan.len = strlen(nombre_ctan.arr);
      }
      else if (!memcmp(codigo.arr,"13050501",8) {   
               if (valor_debx != 0) {
                   strcpy(nombre_ctan.arr,g_nombre);
                   nombre_ctan.len = strlen(nombre_ctan.arr);
               }
               printf("1-imprime_acumulanit , nitn==1, %s %s",codigo.arr,g_nombre); getchar();
           }
           else if (!memcmp(codigo.arr,"13050590",8)   
                   if (valor_debx != 0) {
                      strcpy(nombre_ctan.arr,nombre_ctam.arr);
                      nombre_ctan.len = strlen(nombre_ctan.arr);
                   }
                }
  }
  else {
       printf("2.0-imprime_acumulanit , nitn==1, %s %s",cuentab.arr,g_nombre); getchar();
       if (!memcmp(cuentab.arr,"13050590",8)) {
           strcpy(nombre_ctam.arr,g_nombre);
           nombre_ctam.len = strlen(nombre_ctam.arr);
           printf("2.1-imprime_acumulanit , nitn==1, %s %s",cuentab.arr,g_nombre); getchar();
       }
  }

  valor_debx=0;
  valor_crex=0;
  entre=0;
  strcpy(codigo_an,codigo.arr);
  strcpy(cuenta_an,cuentan.arr);
  nitn_an=nitn;
  strcpy(nombre_ctan2,nombre_ctan.arr);
  while(strcmp(cuentan.arr,cuentax.arr)==0 && strcmp(codigo_an,codigo.arr)==0 && sub_anexos==0) {
        printf("Voy ver_anexo"); getchar();
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
     sprintf (cadena2,"%-9s %-10s %-10s ",cuenta_an,r_t,codigo_an);
     strcpy(cadenon,cadena2);

     while(strcmp(cuentax.arr,cuentan.arr)<0 && sub_anexos==0) {
         /* EXEC SQL FETCH C11 INTO :cuentax; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 8;
         sqlstm.arrsiz = 9;
         sqlstm.iters = (unsigned long  )1;
         sqlstm.offset = (unsigned short)650;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)0;
         sqlstm.sqhstv[0] = (unsigned char  *)&cuentax;
         sqlstm.sqhstl[0] = (unsigned long  )22;
         sqlstm.sqindv[0] = (         short *)0;
         sqlstm.sqharm[0] = (unsigned long )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
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

  printf("staoran(imprime_acumulanit) %s %d",cadenon,staoran); getchar();

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
 
 staoran = 0;
 while (staoran==0 ) {
       /* EXEC SQL FETCH C3 INTO :cuentan, :nombre_ctax, :nitn,
                              :codigo,  :valor_debn,  :valor_cren; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 9;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)668;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&cuentan;
       sqlstm.sqhstl[0] = (unsigned long  )22;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&nombre_ctax;
       sqlstm.sqhstl[1] = (unsigned long  )52;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&nitn;
       sqlstm.sqhstl[2] = (unsigned long  )8;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&codigo;
       sqlstm.sqhstl[3] = (unsigned long  )22;
       sqlstm.sqindv[3] = (         short *)0;
       sqlstm.sqharm[3] = (unsigned long )0;
       sqlstm.sqhstv[4] = (unsigned char  *)&valor_debn;
       sqlstm.sqhstl[4] = (unsigned long  )8;
       sqlstm.sqindv[4] = (         short *)0;
       sqlstm.sqharm[4] = (unsigned long )0;
       sqlstm.sqhstv[5] = (unsigned char  *)&valor_cren;
       sqlstm.sqhstl[5] = (unsigned long  )8;
       sqlstm.sqindv[5] = (         short *)0;
       sqlstm.sqharm[5] = (unsigned long )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


       staoran  = sqlca.sqlcode;
       if (valor_debn-valor_cren != 0)
          break;
 }
 cuentan.arr     [cuentan.len]     = '\0';
 strcpy(nombre_ctam.arr,nombre_ctax.arr);
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

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = "select nombre into :b0  from articulos where codart=:b1";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)706;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nombre_art;
    sqlstm.sqhstl[0] = (unsigned long  )52;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigob;
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
    fprintf (stderr,"Error-1 (%d), cuentab (%-s), Codigo (%-s) , nombre_art(%s), nombre_ctan(%s) en articulos\n", staora, cuentab.arr, codigob.arr, nombre_art.arr, nombre_ctan.arr);
}

void leer_bienes()
{
int	staora;
/* C7 */
    /* EXEC SQL select nombre
             into  :nombre_bien
             from   bienes
             where  codbienes = (:codigob); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = "select nombre into :b0  from bienes where codbienes=:b1";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)728;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nombre_bien;
    sqlstm.sqhstl[0] = (unsigned long  )52;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigob;
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
    fprintf (stderr,"Error-2 (%d), cuentab (%-s), Codigo (%-s) , nombre_bien(%s), nombre_ctan(%s) en bienes\n", staora, cuentab.arr, codigob.arr, nombre_bien.arr, nombre_ctan.arr);
}

void leer_bancos()
{
int	staora;

/* C8 */
    /* EXEC SQL select nombre
             into  :nombre_bco
             from   ctacte
             where  cuenta  = (:cuentab)   and
                    cta_cte = (:codigob); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = "select nombre into :b0  from ctacte where (cuenta=:b1 and\
 cta_cte=:b2)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)750;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nombre_bco;
    sqlstm.sqhstl[0] = (unsigned long  )52;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&cuentab;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&codigob;
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
    fprintf (stderr,"Error-3 (%d), cuentab (%-s), Codigo (%-s) , nombre_bco(%s), nombre_ctan(%s) en bancos\n", staora, cuentab.arr, codigob.arr, nombre_bco.arr, nombre_ctan.arr);
}

void leer_varios()
{
int	staora;
/* C10 */
    /* EXEC SQL select nombre
             into  :nombre_var
             from   cta_varias
             where  cuenta     = :cuentab   and
                    cod_var    = :codigob   and
                    codigo_emp = :codigo_emp; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = "select nombre into :b0  from cta_varias where ((cuenta=:b\
1 and cod_var=:b2) and codigo_emp=:b3)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)776;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nombre_var;
    sqlstm.sqhstl[0] = (unsigned long  )52;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&cuentab;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&codigob;
    sqlstm.sqhstl[2] = (unsigned long  )22;
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
    fprintf (stderr,"Error-4 (%d), cuentab (%-s), Codigo (%-s) , nombre_var(%s), nombre_ctan(%s) en varias\n", staora, cuentab.arr, codigob.arr, nombre_var.arr, nombre_ctan.arr); 

}

void leer_import()
{
int	staora;
/* C12 */
    /* EXEC SQL select nombre
             into  :nombre_imp
             from   cta_import
             where  cuenta = (:cuentab)   and
                    import = (:codigob); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = "select nombre into :b0  from cta_import where (cuenta=:b1\
 and import=:b2)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)806;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nombre_imp;
    sqlstm.sqhstl[0] = (unsigned long  )52;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&cuentab;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&codigob;
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


    staora = sqlca.sqlcode;
    nombre_imp.arr [nombre_imp.len] = '\0';
    if (!staora) {
        strcpy(g_nombre,nombre_imp.arr);
        strcpy(nombre_ctan.arr,nombre_imp.arr);
        nombre_ctan.len = strlen(nombre_ctan.arr);
    }
    else {
          strcpy(nombre_ctan.arr,g_nombre);
          nombre_ctan.len = strlen(nombre_ctan.arr);
    }
    fprintf (stderr,"Error-5 (%d), cuentab (%-s), Codigo (%-s) , nombre_imp(%s), nombre_ctan(%s) en import\n", staora, cuentab.arr, codigob.arr, nombre_imp.arr, nombre_ctan.arr);

}

void totales()
{
  if (con_lin > 60)
      titulos();
  if (atoi(pagina)>con_pag)
     return;
  fprintf (fp,"%71s%15s%15s%15s%15s%15s%15s\n"," "," --------------"," --------------"," --------------"," --------------"," --------------"," --------------");
  sprintf (cadena,"%9.2f",total[5]);
  fmtnum("zzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%71s%15s"," ",r_t);
  sprintf (cadena,"%9.2f",total[4]);
  fmtnum("zzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%15s",r_t);
  sprintf (cadena,"%9.2f",total[3]);
  fmtnum("zzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%15s",r_t);
  sprintf (cadena,"%9.2f",total[2]);
  fmtnum("zzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%15s",r_t);
  sprintf (cadena,"%9.2f",total[1]);
  fmtnum("zzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%15s",r_t);
  sprintf (cadena,"%9.2f",total[0]);
  fmtnum("zzz,zzz,zz9.99",cadena,r_t);
  fprintf (fp,"%15s\n",r_t);
  fprintf (fp,"%71s%15s%15s%15s%15s%15s%15s\n"," "," =============="," =============="," =============="," =============="," =============="," ==============");
  con_lin+=3;
  if (abs((long int)total_no5) > 0 && sub_anexos == 0) {
      sprintf (cadena,"%9.2f",total_no5);
      fprintf (fp,"%71s%15s\n","Total suma de las cuentas sin AUXILIAR #2 ====>     ",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
      fprintf (fp,"%71s%15s\n"," "," ==============");
      total[5]+=total_no5;
      sprintf (cadena,"%9.2f",total[5]);
      fmtnum("zzz,zzz,zz9.99",cadena,r_t);
      fprintf (fp,"%71s%15s\n"," ",r_t);
      fprintf (fp,"%71s%15s\n"," "," ==============");
      con_lin+=4;
  }
}

