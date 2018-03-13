
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
    ".\\auxiliarb.pc"
};


static const unsigned long sqlctx = 1228341614;


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
   unsigned char    *sqhstv[26];
   unsigned long    sqhstl[26];
	    short   *sqindv[26];
   unsigned long    sqharm[26];
   unsigned long     *sqharc[26];
} sqlstm = {8,26};

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
"select cuenta ,nombre ,nvl(nit,0) ,nvl(codigo,'0') ,a.codigo_nit  from acumu\
lanit a ,nits n where (((((((((((((n.codigo_nit(+)=a.codigo_nit and a.codigo_e\
mp=to_number(:b0)) and ano_mes>=to_number(:b1)) and ano_mes<=to_number(:b2)) a\
nd cuenta>=:b3) and cuenta<=:b4) and nvl(codigo,0)>=:b5) and nvl(codigo,0)<=:b\
6) and nvl(nit,0)>=to_number(:b7)) and nvl(nit,0)<=to_number(:b8)) and a.sucur\
sal>=:b9) and a.sucursal<=:b10) and a.cen_cos>=to_number(:b11)) and a.cen_cos<\
=to_number(:b12)) group by cuenta,nombre,nit,codigo,a.codigo_nit order by cuen\
ta,codigo,nit            ";
 static const char *sq0005 = 
"decode(infc,'','ABON',infc) ,nvl(infd,'0') ,comprobante ,c.consecutivo ,clas\
e ,descripcion ,fecha ,tipo ,cuenta ,nvl(codigo_nit,0) ,nvl(sum(valor_deb),0) \
,nvl(sum(valor_cre),0) ,sucursal ,cen_cos  from movto_d d ,movto_c c where (((\
(((((((((d.codigo_emp(+)=c.codigo_emp and d.ano_mes(+)=c.ano_mes) and d.consec\
utivo(+)=c.consecutivo) and c.codigo_emp=to_number(:b1)) and c.ano_mes>=to_num\
ber(:b2)) and c.ano_mes<=to_number(:b3)) and cuenta=:b0) and clase='IO') and d\
.sucursal>=:b5) and d.sucursal<=:b6) and d.cen_cos>=to_number(:b7)) and d.cen_\
cos<=to_number(:b8)) and to_number(decode(substr(:b0,1,8),'13050501',decode(:b\
1,1,'970',2,970,3,970,nvl(codigo_nit,970)),'13050590',decode(:b1,1,'970',2,970\
,3,970,nvl(codigo_nit,970)),nvl(codigo_nit,970)))=to_number(:b12)) group by in\
fa,fecha,cuenta,nvl(codigo_nit,0),tipo,c.codigo_emp,clase,c.comprobante,c.cons\
ecutivo,fecha,tipo,substr(infb,1,2),infc,infd,descripcion,sucursal,estado,cen_\
cos order by 9,5,2,3            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,228,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,140,0,4,286,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
58,0,0,3,88,0,4,297,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
84,0,0,4,88,0,4,311,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
110,0,0,6,35,0,9,381,0,0,0,0,1,0,
124,0,0,6,0,0,13,388,0,1,0,0,1,0,2,9,0,0,
142,0,0,6,0,0,15,405,0,0,0,0,1,0,
156,0,0,7,569,0,9,430,0,13,13,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
222,0,0,7,0,0,13,435,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,4,0,0,
256,0,0,7,0,0,15,462,0,0,0,0,1,0,
270,0,0,8,0,0,30,467,0,0,0,0,1,0,
284,0,0,9,393,0,4,499,0,12,10,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
346,0,0,5,1990,0,9,535,0,26,26,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,
464,0,0,5,0,0,13,542,0,16,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,
9,0,0,
542,0,0,5,0,0,15,580,0,0,0,0,1,0,
556,0,0,10,122,0,4,694,0,8,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,1,9,0,0,1,9,0,0,
602,0,0,11,55,0,4,806,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
624,0,0,12,55,0,4,820,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
646,0,0,13,91,0,4,834,0,4,3,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
676,0,0,14,143,0,4,853,0,6,5,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
714,0,0,15,142,0,4,872,0,6,5,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
};


/*****************************************************************
* AUXILIAR.C Version 1.0 - Rev 1.2 - Dic. 20/93.
*                          Rev 1.6   Nov. 14/97.
*
* auxiliar.pc. Listado del movimiento de cuentas auxiliares
*
* Uso : codigo_emp cuentai cuentaf ano_mesi ano_mesf codigoi codigof
*       niti nitf device userid/password
*
* Mario E. Santiago I. Creado Diciembre 20-1993.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <math.h>

void listado();
void lista_movto();
void imprimir();
void titulos();
void imprime_acumulanit();
void leer_articulos();
void leer_bienes();
void leer_bancos();
void leer_varios();
void leer_import();
void totales();
				     /* Parametros de comunicacion con ORACLE */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;


/* EMPRESAS */

/* VARCHAR nomb_emp   [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_emp;

double  nit;
int     digito;
/* VARCHAR codigo_emp [4]; */ 
struct { unsigned short len; unsigned char arr[4]; } codigo_emp;


/* ACUMULADOS */

/* VARCHAR cuentan    [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuentan;

/* VARCHAR nombre_ctan[71]; */ 
struct { unsigned short len; unsigned char arr[71]; } nombre_ctan;

double  nitn;
/* VARCHAR codigo     [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } codigo;

double  codigo_nit3;
/* VARCHAR sucursaln  [05]; */ 
struct { unsigned short len; unsigned char arr[5]; } sucursaln;

/* VARCHAR cen_cosn   [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } cen_cosn;


/* VALOR ACUMULADOS */

double  valor_debn;
double  valor_cren;

/* VARCHAR nita       [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } nita;

/* VARCHAR codigo_nitb[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_nitb;

/* VARCHAR ano_mesa   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesa;

/* VARCHAR ano_mes    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR ano_mes13  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes13;


/* VARCHAR vecinf     [20][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } vecinf[20];


/* PLAN */

/* VARCHAR nombre_cta [71]; */ 
struct { unsigned short len; unsigned char arr[71]; } nombre_cta;

/* VARCHAR veca       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } veca;

/* VARCHAR vecb       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecb;

/* VARCHAR vecc       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecc;

/* VARCHAR vecd       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecd;

/* VARCHAR db_cr      [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } db_cr;

/* VARCHAR cuentab    [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuentab;

/* VARCHAR codigob    [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } codigob;


/* MOVTO */

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
/* VARCHAR clase      [20][3]; */ 
struct { unsigned short len; unsigned char arr[6]; } clase[20];

/* VARCHAR descripcion[20][51]; */ 
struct { unsigned short len; unsigned char arr[54]; } descripcion[20];

/* VARCHAR fecha      [20][15]; */ 
struct { unsigned short len; unsigned char arr[18]; } fecha[20];

int     tipo       [20];
/* VARCHAR cuenta     [20][15]; */ 
struct { unsigned short len; unsigned char arr[18]; } cuenta[20];

double  codigo_nit [20];
double  valor_deb  [20];
double  valor_cre  [20];

/* VARCHAR sucursal   [20][05]; */ 
struct { unsigned short len; unsigned char arr[6]; } sucursal[20];

/* VARCHAR cen_cos    [20][3]; */ 
struct { unsigned short len; unsigned char arr[6]; } cen_cos[20];

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


/* VARCHAR ano_mesi   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR ano_mesf   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesf;

/* VARCHAR cuentai    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuentai;

/* VARCHAR cuentaf    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuentaf;

/* VARCHAR codigoi    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigoi;

/* VARCHAR codigof    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigof;

/* VARCHAR niti       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } niti;

/* VARCHAR nitf       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } nitf;

/* VARCHAR sucursalb  [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } sucursalb;

/* VARCHAR cen_cosb   [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } cen_cosb;


/* VARIOS, BANCOS, ARTICULOS, BIENES */

/* VARCHAR nombre_var [56]; */ 
struct { unsigned short len; unsigned char arr[56]; } nombre_var;

/* VARCHAR nombre_bco [56]; */ 
struct { unsigned short len; unsigned char arr[56]; } nombre_bco;

/* VARCHAR nombre_art [56]; */ 
struct { unsigned short len; unsigned char arr[56]; } nombre_art;

/* VARCHAR nombre_bien[56]; */ 
struct { unsigned short len; unsigned char arr[56]; } nombre_bien;

/* VARCHAR nombre_imp [56]; */ 
struct { unsigned short len; unsigned char arr[56]; } nombre_imp;

int	tipo_an;

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


int     loop_2  = 0;
int     loop_4  = 0;


                                            /* Variables globales del usuario */
char    pagina[6];                                   /* Contador de Paginas */
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                   /* Contador de Lineas  */
int     cl;
int     anof;
int     mesf;
int     anof2;
int     mesf2;
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[80];
int     mesi;
int     mest;
int     anoi;
int     anot;
char    vecmov [5][20];
char    vecplan[5][20];
double  x, num, doble;
char    codigox[11];
double  total_deb;
double  total_cre;
double  saldo_ant;
char    cadena[100];
char    cadena2[240];
char    copias[8];

int     entre;
int     i;
int     j;
int     k;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;
int	num_ret;
int	traidos;
int	staora;

    if (argc < 17)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp cuentai cuentaf sucursali sucursalf c.costoi c.costof ano_mesi ano_mesf codigoi codigof\n");
	printf ("      niti nitf copias pagina\n");
        printf ("      device : t salida por terminal\n");
	printf ("               s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (cuentai.arr,    argv[2]);
       cuentai.len  =          strlen(cuentai.arr);
       strcpy (cuentaf.arr,    argv[3]);
       cuentaf.len  =          strlen(cuentaf.arr);

       strcpy (sucursali.arr,  argv[4]);
       sucursali.len  =        strlen(sucursali.arr);
       strcpy (sucursalf.arr,  argv[5]);
       sucursalf.len  =        strlen(sucursalf.arr);
       strcpy (cen_cosi.arr,   argv[6]);
       cen_cosi.len   =        strlen(cen_cosi.arr);
       strcpy (cen_cosf.arr,   argv[7]);
       cen_cosf.len   =        strlen(cen_cosf.arr);

       strcpy (codigoi.arr,    argv[10]);
       codigoi.len  =          strlen(codigoi.arr);
       strcpy (codigof.arr,    argv[11]);
       codigof.len  =          strlen(codigof.arr);
       strcpy (niti.arr,       argv[12]);
       niti.len     =          strlen(niti.arr);
       strcpy (nitf.arr,       argv[13]);
       nitf.len     =          strlen(nitf.arr);

       strcpy (copias,         argv[14]);
       strcpy (pagina,         argv[15]);
       strcpy (device,         argv[16]);
       strlow (device);

    if (!strpos ("/", argv[17]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[17]);
    uid.len           = strlen(uid.arr);

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

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/
    strcpy (ano_mesi.arr,   argv[8]);
    ano_mesi.len =          strlen(ano_mesi.arr);

    strcpy (ano_mesf.arr,   argv[9]);
    ano_mesf.len =          strlen(ano_mesf.arr);

    strcpy (cadena,ano_mesi.arr);
    strorg (cadena,1,4);
    anoi         =          atoi(cadena);
    strcpy (cadena,ano_mesi.arr);
    strorg (cadena,5,2);
    mesi         =          atoi(cadena);
    sprintf (ano_mes13.arr,"%04d%02d",anoi-1,13);
    ano_mes13.len= strlen(ano_mes13.arr);
    strcpy (cadena,ano_mesf.arr);
    strorg (cadena,1,4);
    anof         =          atoi(cadena);
    anof2        =          atoi(cadena);
    strcpy (cadena,ano_mesf.arr);
    strorg (cadena,5,2);
    mesf         =          atoi(cadena);
    mesf2        =          atoi(cadena);
    anot         =          anoi;
    mest         =          mesi;
    if (mesi==1) {
       anoi--;
       mesi=13;
    }
    else {
         mesi--;
    }
    sprintf (ano_mesa.arr,"%04d%02d",anoi,mesi);
    ano_mesa.len = strlen(ano_mesa.arr);

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
    sqlstm.offset = (unsigned short)28;
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
    sqlstm.sqhstl[3] = (unsigned long  )6;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)  //
        fprintf (stderr, "Error leyendo Empresa (%d)\n", sqlca.sqlcode);

/* Cx */

    /* EXEC SQL select nombre
             into  :nomb_suci
             from   sucursal
             where  sucursal   = :sucursali   and
                    codigo_emp = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = "select nombre into :b0  from sucursal where (sucursal=:b1\
 and codigo_emp=to_number(:b2))";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)58;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nomb_suci;
    sqlstm.sqhstl[0] = (unsigned long  )14;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&sucursali;
    sqlstm.sqhstl[1] = (unsigned long  )12;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[2] = (unsigned long  )6;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode == 0)
        nomb_emp.arr [nomb_emp.len] = '\0';

    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) ///
        fprintf (stderr, "Error leyendo Sucursali=%s (%d)\n",sucursali.arr, sqlca.sqlcode);

/* Cx1 */

    /* EXEC SQL select nombre
             into  :nomb_sucf
             from   sucursal
             where  sucursal   = :sucursalf   and
                    codigo_emp = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = "select nombre into :b0  from sucursal where (sucursal=:b1\
 and codigo_emp=to_number(:b2))";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)84;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nomb_sucf;
    sqlstm.sqhstl[0] = (unsigned long  )14;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&sucursalf;
    sqlstm.sqhstl[1] = (unsigned long  )12;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[2] = (unsigned long  )6;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
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
        fprintf (stderr, "Error leyendo Sucursalf=%s (%d)\n",sucursalf.arr, sqlca.sqlcode);

    /* EXEC SQL DECLARE C2 CURSOR FOR
         select nvl(infa,'0'),
                decode(clase,'RC',decode(substr(:cuentab,1,8),'13050501','0',
                '13050590','0',nvl(infb,'0')),nvl(infb,'0')),
                nvl(infc,'0'), nvl(infd,'0'), comprobante, c.consecutivo,
                clase, descripcion, fecha, tipo, cuenta,
                nvl(codigo_nit,0), nvl(valor_deb,0), nvl(valor_cre,0),
                sucursal, cen_cos
         from   movto_d d, movto_c c
         where  d.codigo_emp(+)  = c.codigo_emp             and
                d.ano_mes(+)     = c.ano_mes                and
                d.consecutivo(+) = c.consecutivo            and
                c.codigo_emp     = to_number(:codigo_emp)   and
                c.ano_mes       >= to_number(:ano_mesi)     and
                c.ano_mes       <= to_number(:ano_mesf)     and
                cuenta           =  :cuentab                and
          	d.sucursal      >= (:sucursali)             and
          	d.sucursal      <= (:sucursalf)             and
          	d.cen_cos       >= to_number(:cen_cosi)     and
			c.clase         <>'IO'						and
          	d.cen_cos       <= to_number(:cen_cosf)     and
                to_number(decode(substr(:cuentab, 1, 8),
                          '13050501',decode(:codigo_emp,1,'970',2,970,3,970,nvl(codigo_nit,970)),
                          '13050590',decode(:codigo_emp,1,'970',2,970,3,970,nvl(codigo_nit,970)),
                          nvl(codigo_nit,970))) = to_number(:codigo_nitb)			  
         UNION
		 select nvl(infa,'0'),
                decode(clase,'RC',decode(substr(:cuentab,1,8),'13050501','0',
                '13050590','0',nvl(substr(infb,1,2),'0')),nvl(substr(infb,1,2),'0')),
                decode(infc,'','ABON',infc), nvl(infd,'0'), comprobante, c.consecutivo,
                clase, descripcion, fecha, tipo, cuenta,
                nvl(codigo_nit,0), nvl(sum(valor_deb),0), nvl(sum(valor_cre),0),
                sucursal, cen_cos
         from   movto_d d, movto_c c
         where  d.codigo_emp(+)  = c.codigo_emp             and
                d.ano_mes(+)     = c.ano_mes                and
                d.consecutivo(+) = c.consecutivo            and
                c.codigo_emp     = to_number(:codigo_emp)   and
                c.ano_mes       >= to_number(:ano_mesi)     and
                c.ano_mes       <= to_number(:ano_mesf)     and
                cuenta           =  :cuentab                and
				clase           = 'IO'	                and
          	d.sucursal      >= (:sucursali)             and
          	d.sucursal      <= (:sucursalf)             and
			
			d.cen_cos       >= to_number(:cen_cosi)     and				
          	d.cen_cos       <= to_number(:cen_cosf)     and
                to_number(decode(substr(:cuentab, 1, 8),
                          '13050501',decode(:codigo_emp,1,'970',2,970,3,970,nvl(codigo_nit,970)),
                          '13050590',decode(:codigo_emp,1,'970',2,970,3,970,nvl(codigo_nit,970)),
                          nvl(codigo_nit,970))) = to_number(:codigo_nitb)
		  group by infa,fecha,cuenta, nvl(codigo_nit,0),tipo,c.codigo_emp,clase,c.comprobante,c.consecutivo,fecha,tipo,substr(infb,1,2),infc,infd,descripcion,sucursal,estado,cen_cos        
		  order by 9,5,2,3; */ 


    /* EXEC SQL DECLARE C4 CURSOR FOR
             select inf
             from   infacu; */ 


    /* EXEC SQL OPEN C4; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = sq0006;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)110;
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
          sqlstm.arrsiz = 4;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)124;
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



          if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) ////
             fprintf (stderr, "Error leyendo C4 (%d)\n", sqlca.sqlcode);
//          else fprintf (stderr, "Error leyendo en C4 (%d)\n", sqlca.sqlcode);

          staora  = sqlca.sqlcode;
          traidos = sqlca.sqlerrd[2];
          if (sqlca.sqlcode == -1405)
              staora = 0;

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
    sqlstm.arrsiz = 4;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)142;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



                //, sucursal, cen_cos
//         , sucursal, cen_cos
    /* EXEC SQL DECLARE C3 CURSOR FOR
         select cuenta, nombre, nvl(nit,0), nvl(codigo,'0'),
                a.codigo_nit
         from acumulanit a, nits n
         where  n.codigo_nit(+)       = a.codigo_nit                and
                a.codigo_emp          = to_number(:codigo_emp)      and
                ano_mes              >= to_number(:ano_mesi)        and
                ano_mes              <= to_number(:ano_mesf)        and
                cuenta               >= (:cuentai)                  and
                cuenta               <= (:cuentaf)                  and
                nvl(codigo,0)        >= (:codigoi)                  and
                nvl(codigo,0)        <= (:codigof)                  and
                nvl(nit,0)           >= to_number(:niti)            and
                nvl(nit,0)           <= to_number(:nitf)            and
          	a.sucursal           >= (:sucursali)                and
          	a.sucursal           <= (:sucursalf)                and
          	a.cen_cos            >= to_number(:cen_cosi)        and
          	a.cen_cos            <= to_number(:cen_cosf)
         group by cuenta, nombre, nit, codigo, a.codigo_nit
         order by cuenta, codigo, nit; */ 


    /* EXEC SQL OPEN C3; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 13;
    sqlstm.stmt = sq0007;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)156;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[0] = (unsigned long  )6;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesi;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesf;
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
    sqlstm.sqhstv[5] = (unsigned char  *)&codigoi;
    sqlstm.sqhstl[5] = (unsigned long  )22;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&codigof;
    sqlstm.sqhstl[6] = (unsigned long  )22;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&niti;
    sqlstm.sqhstl[7] = (unsigned long  )22;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&nitf;
    sqlstm.sqhstl[8] = (unsigned long  )22;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&sucursali;
    sqlstm.sqhstl[9] = (unsigned long  )12;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&sucursalf;
    sqlstm.sqhstl[10] = (unsigned long  )12;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&cen_cosi;
    sqlstm.sqhstl[11] = (unsigned long  )6;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&cen_cosf;
    sqlstm.sqhstl[12] = (unsigned long  )6;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C3 INTO :cuentan, :nombre_ctan, :nitn,
                                 :codigo,  :codigo_nit3; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 13;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)222;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&cuentan;
          sqlstm.sqhstl[0] = (unsigned long  )17;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&nombre_ctan;
          sqlstm.sqhstl[1] = (unsigned long  )73;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&nitn;
          sqlstm.sqhstl[2] = (unsigned long  )8;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqhstv[3] = (unsigned char  *)&codigo;
          sqlstm.sqhstl[3] = (unsigned long  )17;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqhstv[4] = (unsigned char  *)&codigo_nit3;
          sqlstm.sqhstl[4] = (unsigned long  )8;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                                 //, :sucursaln, :cen_cosn;

          if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) /////
             fprintf (stderr, "Error leyendo sucursali=%s sucursalf=%s cen_cosi=%s cen_cosf=%s en C3 (%d)\n", sucursali.arr, sucursalf.arr, cen_cosi.arr, cen_cosf.arr, sqlca.sqlcode);
          else {
                if (sqlca.sqlcode == 1403)
                    break;
                else {
                      if (sqlca.sqlcode != 0)
                          fprintf (stderr, "Error leyendo sucursali=%s sucursalf=%s cen_cosi=%s cen_cosf=%s en C3 (%d)\n", sucursali.arr, sucursalf.arr, cen_cosi.arr, cen_cosf.arr, sqlca.sqlcode);
                }
          }

          staora  = sqlca.sqlcode;
          if (sqlca.sqlcode == -1405)
              staora = 0;

              cuentan.arr      [cuentan.len]     = '\0';
              nombre_ctan.arr  [nombre_ctan.len] = '\0';
              codigo.arr       [codigo.len]      = '\0';
//              sucursaln.arr    [sucursaln.len]   = '\0';
//              cen_cosn.arr     [cen_cosn.len]    = '\0';

              listado();
    }
    /* EXEC SQL CLOSE C3; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 13;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)256;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



/************************************************
 * Desconectarse de ORACLE. (ologof)            *
 ************************************************/
    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 13;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)270;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    cierre_impresora();

    exit   (0);
}

void listado()
{
int	staora2;
int	traidos2;
int	num_ret2;

 strcpy(cuentab.arr,cuentan.arr);
 cuentab.len     = strlen(cuentab.arr);

 valor_debn=valor_cren=saldo_ant=0;

 strcpy(codigob.arr,codigo.arr);
 codigob.len     = strlen(codigob.arr);

 strcpy(sucursalb.arr,sucursaln.arr);
 sucursalb.len   = strlen(sucursalb.arr);

 strcpy(cen_cosb.arr,cen_cosn.arr);
 cen_cosb.len    = strlen(cen_cosb.arr);

 sprintf (nita.arr,"%12.0f",nitn);
 nita.len        = strlen(nita.arr);

 //, sucursal, cen_cos
          //, :sucursaln, :cen_cosn
 /* EXEC SQL select sum(nvl(valor_deb,0)), sum(nvl(valor_cre,0))
          into  :valor_debn, :valor_cren
          from   acumulanit a, nits
          where  nits.codigo_nit       = a.codigo_nit                and
                 a.codigo_emp          = to_number(:codigo_emp)      and
                 ano_mes              >= to_number(:ano_mes13)       and
                 ano_mes              <= to_number(:ano_mesa)        and
                 cuenta                = (:cuentab)                  and
                 codigo                = nvl(:codigob,'0')           and
          	 sucursal             >= (:sucursali)                and
          	 sucursal             <= (:sucursalf)                and
          	 cen_cos              >= to_number(:cen_cosi)        and
          	 cen_cos              <= to_number(:cen_cosf)        and
                 nits.nit              = to_number(:nita); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 13;
 sqlstm.stmt = "select sum(nvl(valor_deb,0)) ,sum(nvl(valor_cre,0)) into :b0\
,:b1  from acumulanit a ,nits where ((((((((((nits.codigo_nit=a.codigo_nit and\
 a.codigo_emp=to_number(:b2)) and ano_mes>=to_number(:b3)) and ano_mes<=to_num\
ber(:b4)) and cuenta=:b5) and codigo=nvl(:b6,'0')) and sucursal>=:b7) and sucu\
rsal<=:b8) and cen_cos>=to_number(:b9)) and cen_cos<=to_number(:b10)) and nits\
.nit=to_number(:b11))";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)284;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&valor_debn;
 sqlstm.sqhstl[0] = (unsigned long  )8;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&valor_cren;
 sqlstm.sqhstl[1] = (unsigned long  )8;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[2] = (unsigned long  )6;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&ano_mes13;
 sqlstm.sqhstl[3] = (unsigned long  )22;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&ano_mesa;
 sqlstm.sqhstl[4] = (unsigned long  )22;
 sqlstm.sqindv[4] = (         short *)0;
 sqlstm.sqharm[4] = (unsigned long )0;
 sqlstm.sqhstv[5] = (unsigned char  *)&cuentab;
 sqlstm.sqhstl[5] = (unsigned long  )17;
 sqlstm.sqindv[5] = (         short *)0;
 sqlstm.sqharm[5] = (unsigned long )0;
 sqlstm.sqhstv[6] = (unsigned char  *)&codigob;
 sqlstm.sqhstl[6] = (unsigned long  )17;
 sqlstm.sqindv[6] = (         short *)0;
 sqlstm.sqharm[6] = (unsigned long )0;
 sqlstm.sqhstv[7] = (unsigned char  *)&sucursali;
 sqlstm.sqhstl[7] = (unsigned long  )12;
 sqlstm.sqindv[7] = (         short *)0;
 sqlstm.sqharm[7] = (unsigned long )0;
 sqlstm.sqhstv[8] = (unsigned char  *)&sucursalf;
 sqlstm.sqhstl[8] = (unsigned long  )12;
 sqlstm.sqindv[8] = (         short *)0;
 sqlstm.sqharm[8] = (unsigned long )0;
 sqlstm.sqhstv[9] = (unsigned char  *)&cen_cosi;
 sqlstm.sqhstl[9] = (unsigned long  )6;
 sqlstm.sqindv[9] = (         short *)0;
 sqlstm.sqharm[9] = (unsigned long )0;
 sqlstm.sqhstv[10] = (unsigned char  *)&cen_cosf;
 sqlstm.sqhstl[10] = (unsigned long  )6;
 sqlstm.sqindv[10] = (         short *)0;
 sqlstm.sqharm[10] = (unsigned long )0;
 sqlstm.sqhstv[11] = (unsigned char  *)&nita;
 sqlstm.sqhstl[11] = (unsigned long  )17;
 sqlstm.sqindv[11] = (         short *)0;
 sqlstm.sqharm[11] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


//          group by sucursal, cen_cos;

 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) { ////**
     fprintf (stderr, "Error leyendo sucursalb=%s cen_cosb=%s C9 (%d)\n", sucursalb.arr, cen_cosb.arr, sqlca.sqlcode);
     valor_debn=valor_cre[loop_2]=0;
 }
 titulos();
 imprime_acumulanit();

 strcpy(cuentab.arr,cuentan.arr);
 cuentab.len     = strlen(cuentab.arr);
 sprintf(codigo_nitb.arr,"%-5.0f",codigo_nit3);
 codigo_nitb.len = strlen(codigo_nitb.arr);

 strcpy(sucursalb.arr,sucursaln.arr);
 sucursalb.len     = strlen(sucursalb.arr);

 strcpy(cen_cosb.arr,cen_cosn.arr);
 cen_cosb.len     = strlen(cen_cosb.arr);

// printf ("%s %s %d\n", cuentab.arr, codigo_nitb.arr, staora2); getchar();

 /* EXEC SQL OPEN C2; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 26;
 sqlbuft((void **)0, 
   "select nvl(infa,'0') ,decode(clase,'RC',decode(substr(:b0,1,8),'13050501\
','0','13050590','0',nvl(infb,'0')),nvl(infb,'0')) ,nvl(infc,'0') ,nvl(infd,\
'0') ,comprobante ,c.consecutivo ,clase ,descripcion ,fecha ,tipo ,cuenta ,n\
vl(codigo_nit,0) ,nvl(valor_deb,0) ,nvl(valor_cre,0) ,sucursal ,cen_cos  fro\
m movto_d d ,movto_c c where ((((((((((((d.codigo_emp(+)=c.codigo_emp and d.\
ano_mes(+)=c.ano_mes) and d.consecutivo(+)=c.consecutivo) and c.codigo_emp=t\
o_number(:b1)) and c.ano_mes>=to_number(:b2)) and c.ano_mes<=to_number(:b3))\
 and cuenta=:b0) and d.sucursal>=:b5) and d.sucursal<=:b6) and d.cen_cos>=to\
_number(:b7)) and c.clase<>'IO') and d.cen_cos<=to_number(:b8)) and to_numbe\
r(decode(substr(:b0,1,8),'13050501',decode(:b1,1,'970',2,970,3,970,nvl(codig\
o_nit,970)),'13050590',decode(:b1,1,'970',2,970,3,970,nvl(codigo_nit,970)),n\
vl(codigo_nit,970)))=to_number(:b12)) union select nvl(infa,'0') ,decode(cla\
se,'RC',decode(substr(:b0,1,8),'13050501','0','13050590','0',nvl(substr(infb\
,1,2),'0')),nvl(substr(infb,1,2),'0')) ,");
 sqlstm.stmt = sq0005;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)346;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&cuentab;
 sqlstm.sqhstl[0] = (unsigned long  )17;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned long  )6;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesi;
 sqlstm.sqhstl[2] = (unsigned long  )22;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&ano_mesf;
 sqlstm.sqhstl[3] = (unsigned long  )22;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
 sqlstm.sqhstl[4] = (unsigned long  )17;
 sqlstm.sqindv[4] = (         short *)0;
 sqlstm.sqharm[4] = (unsigned long )0;
 sqlstm.sqhstv[5] = (unsigned char  *)&sucursali;
 sqlstm.sqhstl[5] = (unsigned long  )12;
 sqlstm.sqindv[5] = (         short *)0;
 sqlstm.sqharm[5] = (unsigned long )0;
 sqlstm.sqhstv[6] = (unsigned char  *)&sucursalf;
 sqlstm.sqhstl[6] = (unsigned long  )12;
 sqlstm.sqindv[6] = (         short *)0;
 sqlstm.sqharm[6] = (unsigned long )0;
 sqlstm.sqhstv[7] = (unsigned char  *)&cen_cosi;
 sqlstm.sqhstl[7] = (unsigned long  )6;
 sqlstm.sqindv[7] = (         short *)0;
 sqlstm.sqharm[7] = (unsigned long )0;
 sqlstm.sqhstv[8] = (unsigned char  *)&cen_cosf;
 sqlstm.sqhstl[8] = (unsigned long  )6;
 sqlstm.sqindv[8] = (         short *)0;
 sqlstm.sqharm[8] = (unsigned long )0;
 sqlstm.sqhstv[9] = (unsigned char  *)&cuentab;
 sqlstm.sqhstl[9] = (unsigned long  )17;
 sqlstm.sqindv[9] = (         short *)0;
 sqlstm.sqharm[9] = (unsigned long )0;
 sqlstm.sqhstv[10] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[10] = (unsigned long  )6;
 sqlstm.sqindv[10] = (         short *)0;
 sqlstm.sqharm[10] = (unsigned long )0;
 sqlstm.sqhstv[11] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[11] = (unsigned long  )6;
 sqlstm.sqindv[11] = (         short *)0;
 sqlstm.sqharm[11] = (unsigned long )0;
 sqlstm.sqhstv[12] = (unsigned char  *)&codigo_nitb;
 sqlstm.sqhstl[12] = (unsigned long  )12;
 sqlstm.sqindv[12] = (         short *)0;
 sqlstm.sqharm[12] = (unsigned long )0;
 sqlstm.sqhstv[13] = (unsigned char  *)&cuentab;
 sqlstm.sqhstl[13] = (unsigned long  )17;
 sqlstm.sqindv[13] = (         short *)0;
 sqlstm.sqharm[13] = (unsigned long )0;
 sqlstm.sqhstv[14] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[14] = (unsigned long  )6;
 sqlstm.sqindv[14] = (         short *)0;
 sqlstm.sqharm[14] = (unsigned long )0;
 sqlstm.sqhstv[15] = (unsigned char  *)&ano_mesi;
 sqlstm.sqhstl[15] = (unsigned long  )22;
 sqlstm.sqindv[15] = (         short *)0;
 sqlstm.sqharm[15] = (unsigned long )0;
 sqlstm.sqhstv[16] = (unsigned char  *)&ano_mesf;
 sqlstm.sqhstl[16] = (unsigned long  )22;
 sqlstm.sqindv[16] = (         short *)0;
 sqlstm.sqharm[16] = (unsigned long )0;
 sqlstm.sqhstv[17] = (unsigned char  *)&cuentab;
 sqlstm.sqhstl[17] = (unsigned long  )17;
 sqlstm.sqindv[17] = (         short *)0;
 sqlstm.sqharm[17] = (unsigned long )0;
 sqlstm.sqhstv[18] = (unsigned char  *)&sucursali;
 sqlstm.sqhstl[18] = (unsigned long  )12;
 sqlstm.sqindv[18] = (         short *)0;
 sqlstm.sqharm[18] = (unsigned long )0;
 sqlstm.sqhstv[19] = (unsigned char  *)&sucursalf;
 sqlstm.sqhstl[19] = (unsigned long  )12;
 sqlstm.sqindv[19] = (         short *)0;
 sqlstm.sqharm[19] = (unsigned long )0;
 sqlstm.sqhstv[20] = (unsigned char  *)&cen_cosi;
 sqlstm.sqhstl[20] = (unsigned long  )6;
 sqlstm.sqindv[20] = (         short *)0;
 sqlstm.sqharm[20] = (unsigned long )0;
 sqlstm.sqhstv[21] = (unsigned char  *)&cen_cosf;
 sqlstm.sqhstl[21] = (unsigned long  )6;
 sqlstm.sqindv[21] = (         short *)0;
 sqlstm.sqharm[21] = (unsigned long )0;
 sqlstm.sqhstv[22] = (unsigned char  *)&cuentab;
 sqlstm.sqhstl[22] = (unsigned long  )17;
 sqlstm.sqindv[22] = (         short *)0;
 sqlstm.sqharm[22] = (unsigned long )0;
 sqlstm.sqhstv[23] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[23] = (unsigned long  )6;
 sqlstm.sqindv[23] = (         short *)0;
 sqlstm.sqharm[23] = (unsigned long )0;
 sqlstm.sqhstv[24] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[24] = (unsigned long  )6;
 sqlstm.sqindv[24] = (         short *)0;
 sqlstm.sqharm[24] = (unsigned long )0;
 sqlstm.sqhstv[25] = (unsigned char  *)&codigo_nitb;
 sqlstm.sqhstl[25] = (unsigned long  )12;
 sqlstm.sqindv[25] = (         short *)0;
 sqlstm.sqharm[25] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 staora2  = 0;
 traidos2 = 0;
 num_ret2 = 0;
 while (staora2 == 0) {

       /* EXEC SQL FETCH C2 INTO :infa, :infb, :infc, :infd, :comprobante,
                              :consecutivo, :clase, :descripcion,
                              :fecha, :tipo, :cuenta, :codigo_nit,
                              :valor_deb, :valor_cre, :sucursal, :cen_cos; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 26;
       sqlstm.iters = (unsigned long  )20;
       sqlstm.offset = (unsigned short)464;
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
       sqlstm.sqhstl[7] = (unsigned long  )56;
       sqlstm.sqindv[7] = (         short *)0;
       sqlstm.sqharm[7] = (unsigned long )0;
       sqlstm.sqharc[7] = (unsigned long   *)0;
       sqlstm.sqhstv[8] = (unsigned char  *)fecha;
       sqlstm.sqhstl[8] = (unsigned long  )20;
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
       sqlstm.sqhstv[14] = (unsigned char  *)sucursal;
       sqlstm.sqhstl[14] = (unsigned long  )8;
       sqlstm.sqindv[14] = (         short *)0;
       sqlstm.sqharm[14] = (unsigned long )0;
       sqlstm.sqharc[14] = (unsigned long   *)0;
       sqlstm.sqhstv[15] = (unsigned char  *)cen_cos;
       sqlstm.sqhstl[15] = (unsigned long  )8;
       sqlstm.sqindv[15] = (         short *)0;
       sqlstm.sqharm[15] = (unsigned long )0;
       sqlstm.sqharc[15] = (unsigned long   *)0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



       if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) ///***
          fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);
//       else fprintf (stderr, "Error leyendo en C2 (%d)\n", sqlca.sqlcode);

       if (traidos2 == 0) tipo_an=tipo[0];

       staora2  = sqlca.sqlcode;
       traidos2 = sqlca.sqlerrd[2];
       if (sqlca.sqlcode == -1405)
           staora2 = 0;

       for (loop_2 = 0; loop_2 < (traidos2 - num_ret2); loop_2++) {
           infa       [loop_2].arr  [infa       [loop_2].len] = '\0';
           infb       [loop_2].arr  [infb       [loop_2].len] = '\0';
           infc       [loop_2].arr  [infc       [loop_2].len] = '\0';
           infd       [loop_2].arr  [infd       [loop_2].len] = '\0';
           clase      [loop_2].arr  [clase      [loop_2].len] = '\0';
           descripcion[loop_2].arr  [descripcion[loop_2].len] = '\0';
           fecha      [loop_2].arr  [fecha      [loop_2].len] = '\0';
           cuenta     [loop_2].arr  [cuenta     [loop_2].len] = '\0';
           sucursal   [loop_2].arr  [sucursal   [loop_2].len] = '\0';
           cen_cos    [loop_2].arr  [cen_cos    [loop_2].len] = '\0';

           strcpy (vecmov[0], infa[loop_2].arr);
           strcpy (vecmov[1], infb[loop_2].arr);
           strcpy (vecmov[2], infc[loop_2].arr);
           strcpy (vecmov[3], infd[loop_2].arr);

           lista_movto();

       }
       num_ret2 = traidos2;
 }
 /* EXEC SQL CLOSE C2; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 26;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)542;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 totales();
}

void lista_movto()
{
 strcpy(codigox,"0");
 i=j=0;
 for (i=0;i<4;i++) {
      for (j=0;j<k;j++) {
           if (!strcmp(vecplan[i],vecinf[j].arr)) {
               strcpy(codigox,vecmov[i]);
           }
      }
 }
 if (!memcmp(cuenta[loop_2].arr,"130505",6)&&strcmp(codigo_emp.arr,"4")<0) {
     imprimir();
 }
 else if (!strcmp(codigob.arr,codigox)) {
          codigob.len = strlen(codigob.arr);
          imprimir();
      }
}

void imprimir()
{
  char wcadena[80];
  if (con_lin > 60)
  titulos();
  strcpy  (cadena,fecha[loop_2].arr);
  strcpy  (wcadena, cadena);
  numero_fechaf(wcadena);
  strcpy  (cadena, wcadena);
  fprintf (fp,"%s ",cadena);
  fprintf (fp,"%-41s",descripcion[loop_2].arr);
  fprintf (fp,"%02d ",tipo[loop_2]);
  fprintf (fp,"%2s ",clase[loop_2].arr);
  sprintf (cadena,"%8.0f",comprobante[loop_2]);
  fprintf (fp,"%7s",fmtnum("zzzzzzzz",cadena,r_t));
  fprintf (fp,"%13s",vecmov[0]);
  fprintf (fp,"%13s",vecmov[1]);
  sprintf (cadena,"%9.2f",valor_deb[loop_2]);
  fprintf (fp,"%29s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
  sprintf (cadena,"%9.2f",valor_cre[loop_2]);
  fprintf (fp,"%15s\n",fmtnum("zzz,zzz,zz9.99",cadena,r_t));

  fprintf (fp,"%03s",sucursal[loop_2].arr);
  fprintf (fp,"%4s%2s"," ",cen_cos[loop_2].arr);

  fprintf (fp,"%71s",vecmov[2]);
  fprintf (fp,"%13s\n",vecmov[3]);
  total_deb += valor_deb[loop_2];
  total_cre += valor_cre[loop_2];
  con_lin +=2;
}
/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 char fecha[30];
 double decimal;
 con_pag++;
 con_lin = 9;
 if (atoi(pagina)>con_pag)
    return;
 doble=atof(codigo_emp.arr);
 num=doble/2;
 decimal=modf(num,&x);
 if (doble==1)
    decimal=0;
 if (decimal==0)
     fprintf(fp,"%s",salte_pagina);
 else fprintf(fp,"%s.",salte_pagina);
 strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
 fprintf(fp,"%s%s%s%s%s\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
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
 sprintf(cadena2,"SUCURSAL: %s %s A %s %s C.COSTO: %s A %s",sucursali.arr,nomb_suci.arr,sucursalf.arr,nomb_sucf.arr,cen_cosi.arr,cen_cosf.arr);
 strful(cadena,(int)(80-strlen(cadena2))/2,' ');
 fprintf(fp,"\n%s%s%s%s",condensado_on,ancho_on,cadena,cadena2);
 fecha_system(fecha);
 fprintf(fp,"\n%17s%s%s\n\n"," ","LIBROS AUXILIARES DE CONTABILIDAD",ancho_off);
 fprintf(fp,"%s%-35s%s%10s / %d A %10s / %d","FECHA PROCESO : ",fecha,"PERIODO DE : ",mes[mest-1],anot,mes[mesf2-1],anof2);
 fprintf(fp,"%35s %d\n\n","PAGINA ",con_pag);
 fprintf(fp,"%133s\n","FECHA    DESCRIPCION                            TC CL  DOCUM.    INFA/INFC    INFB/INFD                      ----MOVTOD DEL MES----");
 fprintf(fp,"%133s\n\n","                                                                                                             DEBITOS       CREDITOS");
}

void imprime_acumulanit()
{
  if (!strcmp(cuentan.arr,"9999999999"))
      return;
  if (con_lin > 60)
      titulos();
  strcpy(cuentab.arr,cuentan.arr);
  cuentab.len = strlen(cuentab.arr);

  strcpy(sucursalb.arr,sucursaln.arr);
  sucursalb.len = strlen(sucursalb.arr);

  strcpy(cen_cosb.arr,cen_cosn.arr);
  cen_cosb.len = strlen(cen_cosb.arr);

  /* EXEC SQL select nombre, infa, infb, infc, infd, db_cr
                  into :nombre_cta, :veca, :vecb, :vecc, :vecd, :db_cr
           from   plan
           where  codigo_emp = (:codigo_emp) and
                  cuenta     = (:cuentab); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 26;
  sqlstm.stmt = "select nombre ,infa ,infb ,infc ,infd ,db_cr into :b0,:b1,:\
b2,:b3,:b4,:b5  from plan where (codigo_emp=:b6 and cuenta=:b7)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)556;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&nombre_cta;
  sqlstm.sqhstl[0] = (unsigned long  )73;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&veca;
  sqlstm.sqhstl[1] = (unsigned long  )22;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&vecb;
  sqlstm.sqhstl[2] = (unsigned long  )22;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&vecc;
  sqlstm.sqhstl[3] = (unsigned long  )22;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&vecd;
  sqlstm.sqhstl[4] = (unsigned long  )22;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&db_cr;
  sqlstm.sqhstl[5] = (unsigned long  )6;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqhstv[6] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[6] = (unsigned long  )6;
  sqlstm.sqindv[6] = (         short *)0;
  sqlstm.sqharm[6] = (unsigned long )0;
  sqlstm.sqhstv[7] = (unsigned char  *)&cuentab;
  sqlstm.sqhstl[7] = (unsigned long  )17;
  sqlstm.sqindv[7] = (         short *)0;
  sqlstm.sqharm[7] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  veca.arr  [veca.len] = '\0';
  vecb.arr  [vecb.len] = '\0';
  vecc.arr  [vecc.len] = '\0';
  vecd.arr  [vecd.len] = '\0';

  if (sqlca.sqlcode == 1403)
      printf ("Cuentab (%-s) no existe\n", cuentab.arr);

  if (sqlca.sqlcode == -1405)
      sqlca.sqlcode = 0;

  strcpy (vecplan[0], veca.arr);
  strcpy (vecplan[1], vecb.arr);
  strcpy (vecplan[2], vecc.arr);
  strcpy (vecplan[3], vecd.arr);

  i=j=0;
  for (i=0;i<4;i++) {
      for (j=0;j<k;j++) {
          if (!strcmp(vecplan[i],vecinf[j].arr)) {
              if (!strcmp(vecplan[i],"CODART")) {
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
                            strcpy(sucursalb.arr,"001");
                            sucursalb.len = strlen(codigob.arr);
                            leer_bancos();
                            j=k+1;
                            i=4;
                          }
                        else if (!strcmp(vecplan[i],"COD-VAR")) {
                               /* || !strcmp(vecplan[i],"POLIZA")) */
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

  if (nitn==1) {
      nitn=0;
      if (!strcmp(codigo.arr,"")||
          !strcmp(cuentan.arr,"13050501")||
          !strcmp(cuentan.arr,"13050590")
         )
         strcpy(nombre_ctan.arr,nombre_cta.arr);
  }

  sprintf (cadena,"%10.0f",nitn);
  if (atoi(pagina)<=con_pag) {
     fmtnum("ZZZZZZZZZZ",cadena,r_t);
     fprintf (fp,"%s%-9s %-10s %-10s ",enfatizado_on,cuentan.arr,r_t,codigo.arr);
     nombre_ctan.arr[38]='\0';
     fprintf (fp,"%-39s%s",nombre_ctan.arr,enfatizado_off);
  }
  if (!strcmp(db_cr.arr,"DB")) {
     if (atoi(pagina)<=con_pag) {
         saldo_ant=valor_debn-valor_cren;
  /*       sprintf (cadena,"%9.2f",saldo_ant);
         fprintf (fp,"%33s",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
         sprintf(cadena,"%9.2f",0);
         fprintf (fp,"%15s\n\n",fmtnum("zzzz,zzz,zz9.99",cadena,r_t)); */
         fprintf (fp,"\n\n");
     }
  }
  else {
        if (atoi(pagina)<=con_pag) {
            saldo_ant=valor_debn-valor_cren;
           /* sprintf(cadena,"%9.2f",0);
            fprintf (fp,"%33s",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
            sprintf (cadena,"%9.2f",saldo_ant);
            fprintf (fp,"%15s\n\n",fmtnum("zzzz,zzz,zz9.99",cadena,r_t)); */
            fprintf (fp,"\n\n");
        }
  }
  con_lin+=2;
}

void leer_articulos()
{
   /* EXEC SQL select nombre
            into  :nombre_art
            from   articulos
            where  codart = (:codigob); */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 26;
   sqlstm.stmt = "select nombre into :b0  from articulos where codart=:b1";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)602;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlstm.sqhstv[0] = (unsigned char  *)&nombre_art;
   sqlstm.sqhstl[0] = (unsigned long  )58;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqhstv[1] = (unsigned char  *)&codigob;
   sqlstm.sqhstl[1] = (unsigned long  )17;
   sqlstm.sqindv[1] = (         short *)0;
   sqlstm.sqharm[1] = (unsigned long )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  nombre_art.arr  [nombre_art.len] = '\0';
  if (sqlca.sqlcode == 1403)
      printf ("codigob C6=(%-s) no existe\n", codigob.arr);
  else strcpy(nombre_ctan.arr,nombre_art.arr);

}

void leer_bienes()
{
  /* EXEC SQL select nombre
           into  :nombre_bien
           from   bienes
           where  codbienes = (:codigob); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 26;
  sqlstm.stmt = "select nombre into :b0  from bienes where codbienes=:b1";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)624;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&nombre_bien;
  sqlstm.sqhstl[0] = (unsigned long  )58;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&codigob;
  sqlstm.sqhstl[1] = (unsigned long  )17;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  nombre_bien.arr  [nombre_bien.len] = '\0';
  if (sqlca.sqlcode == 1403)
      printf ("codigob C7=(%-s) no existe\n", codigob.arr);
  else strcpy(nombre_ctan.arr,nombre_bien.arr);

}

void leer_bancos()
{
  /* EXEC SQL select nombre
           into  :nombre_bco
           from   ctacte
           where  cuenta     = :cuentab     and
                  cta_cte    = :codigob     and
                  codigo_emp = (:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 26;
  sqlstm.stmt = "select nombre into :b0  from ctacte where ((cuenta=:b1 and \
cta_cte=:b2) and codigo_emp=:b3)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)646;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&nombre_bco;
  sqlstm.sqhstl[0] = (unsigned long  )58;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&cuentab;
  sqlstm.sqhstl[1] = (unsigned long  )17;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&codigob;
  sqlstm.sqhstl[2] = (unsigned long  )17;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[3] = (unsigned long  )6;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



//                  sucursal   = (:sucursalb) and

  nombre_bco.arr  [nombre_bco.len] = '\0';

  if (sqlca.sqlcode == 1403)
      printf ("cuentab C8 codigo_emp(%-s) cuentab (%-s) codigob (%-s) sucursalb(%-s) no existe\n", codigo_emp.arr, cuentab.arr, codigob.arr, sucursalb.arr);
  else strcpy(nombre_ctan.arr,nombre_bco.arr);

}

void leer_varios()
{
  /* EXEC SQL select nombre
           into  :nombre_var
           from   cta_varias
           where  cuenta     = (:cuentab)           and
                  cod_var    = (:codigob)           and
                  sucursal   = :sucursalb           and
                  cen_cos    = to_number(:cen_cosb) and
                  codigo_emp = (:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 26;
  sqlstm.stmt = "select nombre into :b0  from cta_varias where ((((cuenta=:b\
1 and cod_var=:b2) and sucursal=:b3) and cen_cos=to_number(:b4)) and codigo_em\
p=:b5)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)676;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&nombre_var;
  sqlstm.sqhstl[0] = (unsigned long  )58;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&cuentab;
  sqlstm.sqhstl[1] = (unsigned long  )17;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&codigob;
  sqlstm.sqhstl[2] = (unsigned long  )17;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&sucursalb;
  sqlstm.sqhstl[3] = (unsigned long  )12;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&cen_cosb;
  sqlstm.sqhstl[4] = (unsigned long  )6;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[5] = (unsigned long  )6;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  nombre_var.arr  [nombre_var.len] = '\0';
  if (sqlca.sqlcode == 1403)
      printf ("cuentab C8 (%-s), codigob (%-s) no existe\n", cuentab.arr, codigob.arr);
  else strcpy(nombre_ctan.arr,nombre_var.arr);

}

void leer_import()
{
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

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 26;
    sqlstm.stmt = "select nombre into :b0  from cta_import where ((((cuenta=\
:b1 and import=:b2) and codigo_emp=:b3) and sucursal=:b4) and cen_cos=to_numbe\
r(:b5))";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)714;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nombre_imp;
    sqlstm.sqhstl[0] = (unsigned long  )58;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&cuentab;
    sqlstm.sqhstl[1] = (unsigned long  )17;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&codigob;
    sqlstm.sqhstl[2] = (unsigned long  )17;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[3] = (unsigned long  )6;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&sucursalb;
    sqlstm.sqhstl[4] = (unsigned long  )12;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&cen_cosb;
    sqlstm.sqhstl[5] = (unsigned long  )6;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  nombre_imp.arr  [nombre_imp.len] = '\0';
  if (sqlca.sqlcode == 1403)
      printf ("cuentab C8 (%-s), codigob (%-s) no existe\n", cuentab.arr, codigob.arr);
  else strcpy(nombre_ctan.arr,nombre_imp.arr);

}

void totales()
{
  if (atoi(pagina)<=con_pag) {
      fprintf (fp,"%133s\n","------------- --------------");
      sprintf (cadena,"%9.2f",saldo_ant);
      if (!strcmp(db_cr.arr,"DB")) {
          fmtnum("zzzz,zzz,zz9.99",cadena,r_t);
          fprintf (fp,"%46s %18s","Saldo Anterior DEBITO ==> ",r_t);
      }
      else {
           fmtnum("zzzz,zzz,zz9.99",cadena,r_t);
           fprintf (fp,"%46s %18s","Saldo Anterior CREDITO ==> ",r_t);
      }
      sprintf (cadena,"%9.2f",total_deb);
      fmtnum("zzzz,zzz,zz9.99",cadena,r_t);
      fprintf (fp,"%37s %15s","Totales movimiento ==>",r_t);
      sprintf (cadena,"%9.2f",total_cre);
      fmtnum("zzzz,zzz,zz9.99",cadena,r_t);
      fprintf (fp,"%15s\n",r_t);
      saldo_ant+=total_deb-total_cre;
      sprintf (cadena,"%9.2f",saldo_ant);
      fmtnum("zzzz,zzz,zz9.99",cadena,r_t);
      fprintf (fp,"%46s %18s\r","Saldo actual ==> ",r_t);
      saldo_ant=total_deb=total_cre=0;
  }
  con_lin+=2;
}

