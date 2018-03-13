
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
           char  filnam[12];
};
static const struct sqlcxp sqlfpn =
{
    11,
    ".\\RELCHQ.pc"
};


static unsigned long sqlctx = 133251;


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
            void  *sqhstv[8];
   unsigned int   sqhstl[8];
            int   sqhsts[8];
            void  *sqindv[8];
            int   sqinds[8];
   unsigned int   sqharm[8];
   unsigned int   *sqharc[8];
   unsigned short  sqadto[8];
   unsigned short  sqtdso[8];
} sqlstm = {10,8};

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

 static const char *sq0002 = 
"select e.nombre_corto ,to_number(to_char(c.fecha,'yyyymmdd')) FECHA ,to_numb\
er(nvl(to_char(to_date(d.infd),'yyyymmdd'),0)) FVEN ,n.nombre ,b.nombre_corto \
,c.comprobante ,nvl(d.infc,0) ,valor_cre  from movto_d d ,movto_c c ,nits n ,e\
mpresas e ,bancos b where ((((((((((((((((c.fecha=to_date(:b0,'yyyymmdd') and \
c.codigo_emp=e.codigo_emp) and c.codigo_emp=d.codigo_emp) and c.ano_mes=d.ano_\
mes) and c.consecutivo=d.consecutivo) and d.valor_cre is  not null ) and d.lib\
ro=to_number(:b1)) and clase='EG') and c.codigo_nitb=n.codigo_nit) and substr(\
d.cuenta,1,4) in ('1105','1110','1120','1310','2305','2355')) and b.codigo_emp\
=c.codigo_emp) and b.cuenta=d.cuenta) and e.codigo_emp not  in (22,24)) and b.\
codigo<>'DV') and c.codigo_emp=:b2) and c.comprobante>=:b3) and c.comprobante<\
=:b4) order by e.codigo_emp,c.fecha,c.comprobante            ";

 static const char *sq0003 = 
"select e.nombre_corto ,to_number(to_char(c.fecha,'yyyymmdd')) ,0 ,n.nombre ,\
' ' ,c.comprobante ,0 ,0  from movto_c c ,nits n ,empresas e where (((((c.fech\
a=to_date(:b0,'yyyymmdd') and c.codigo_emp=e.codigo_emp) and clase='EG') and c\
.codigo_nitb=n.codigo_nit) and e.codigo_emp not  in (22,24)) and c.estado='2')\
 order by e.codigo_emp,c.fecha,c.comprobante            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,129,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,4,126,0,4,204,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
59,0,0,2,839,0,9,214,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
94,0,0,3,366,0,9,215,0,0,1,1,0,1,0,1,9,0,0,
113,0,0,2,0,0,15,219,0,0,0,0,0,1,0,
128,0,0,3,0,0,15,220,0,0,0,0,0,1,0,
143,0,0,5,0,0,30,228,0,0,0,0,0,1,0,
158,0,0,2,0,0,13,339,0,0,8,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,4,
0,0,2,4,0,0,2,4,0,0,
205,0,0,3,0,0,13,358,0,0,8,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,4,
0,0,2,4,0,0,2,4,0,0,
};


/*****************************************************************
* RELCHQ.C Version 1.0 - Rev 1.2 - Oct. 9/92.
*
* clisting.c. Listado de La relacion de ingresos.
*
* Uso : relchq codigo_emp fecha_inicial fecha_final device userid/password
*
* Mario E. Santiago I. Creado Octubre-09-1992.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void titulos();
void leer_c1();
void leer_c2();
void listar();
void listado();
void imprime_sch();
void imprime_chq();
void fecha_oracle3();
				     /* Parametros de comunicacion con ORACLE */

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;
 
/* VARCHAR codigo_emp[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

double  nit;
/* VARCHAR nomb_emp [70]; */ 
struct { unsigned short len; unsigned char arr[70]; } nomb_emp;

/* VARCHAR fecha_ini[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_ini;

/* VARCHAR nombemp[70]; */ 
struct { unsigned short len; unsigned char arr[70]; } nombemp;

/* VARCHAR nomb[70]; */ 
struct { unsigned short len; unsigned char arr[70]; } nomb;

/* VARCHAR banco[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } banco;

double  fecha;
double  posf;
double  comp;
double  chq;
double  valor_cre;

/* VARCHAR nombemp2[70]; */ 
struct { unsigned short len; unsigned char arr[70]; } nombemp2;

/* VARCHAR nomb2[70]; */ 
struct { unsigned short len; unsigned char arr[70]; } nomb2;

/* VARCHAR banco2[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } banco2;

double  fecha2;
double  posf2;
double  comp2;
double  chq2;
double  valor_cre2;
/* VARCHAR comprob_ini[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } comprob_ini;

/* VARCHAR comprob_fin[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } comprob_fin;

/* VARCHAR libro         [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } libro;


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


                                            /* Variables globales del usuario */
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                   /* Contador de Lineas  */
int     cl;
int     staora  = 0;
int     oraest;
int     oraest_sch;
int     oraest_chq;
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[100];
double  tot_retefte;
double  tot_cartera;
char    fechas [70];
char    cadena [200];
char    cadena2[200];
char    wcadena[200];
char    empcor [10];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 8)
       {
	      printf ("Incorrecta invocacion:\n");
        printf ("Uso : relchq codigo_emp fecha_ini comprob_ini comprob_fin\n");
        printf ("      device userid/password\n");
      	printf ("      device : t salida por terminal\n");
      	printf ("      device : s salida standar     \n");
      	printf ("               Px salida por impresora (x nro printer)\n");
	      printf ("      libro(0= COLGAAP 1=IFRS)\n");
      	printf ("      userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (fecha_ini.arr,  argv[2]);
       fecha_ini.len =         strlen(fecha_ini.arr);
       strcpy (comprob_ini.arr,  argv[3]);
       comprob_ini.len =         strlen(comprob_ini.arr);
       strcpy (comprob_fin.arr,  argv[4]);
       comprob_fin.len =         strlen(comprob_fin.arr);
       
       if ( strlen(fecha_ini.arr) != 8 ) {
          printf("Error, la fecha debe ser de 8 digitos y formato AAAAMMDD");
          exit (1);
       }
       strcpy (device,         argv[5]);
       strlow (device);
       strcpy (libro.arr,      argv[6]);
       libro.len =             strlen(libro.arr);

    if (!strpos ("/", argv[7]))
       {
        printf ("user id/password incorrecto.\n");
      	exit (1);
       }

    strcpy (uid.arr,    argv[7]);
    uid.len   =         strlen(uid.arr);

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

/*****************************************************
 * Crea o Abre un cursor en area de datos. (oopen)   *
 *****************************************************/
    /* C1 */

    /* EXEC SQL DECLARE C1 CURSOR FOR
         select e.nombre_corto,
         to_number(to_char(c.fecha,'yyyymmdd')) AS FECHA,
                to_number(nvl(to_char(to_date(d.infd),'yyyymmdd'),0)) AS FVEN,
                n.nombre, b.nombre_corto, c.comprobante, nvl(d.infc,0), valor_cre
         from   movto_d d, movto_c c, nits n, empresas e, bancos b
         where  c.fecha             = to_date(:fecha_ini,'yyyymmdd')   and
                c.codigo_emp        = e.codigo_emp                     and
                c.codigo_emp        = d.codigo_emp                     and
                c.ano_mes           = d.ano_mes                        and
                c.consecutivo       = d.consecutivo                    and
                d.valor_cre         is NOT NULL                        and
                d.libro             = to_number(:libro)                and
                clase               = 'EG'                             and
                c.codigo_nitb       = n.codigo_nit                     and
                substr(d.cuenta,1,4) in ('1105','1110','1120','1310','2305','2355')  and
                b.codigo_emp        = c.codigo_emp                     and
                b.cuenta            = d.cuenta                         and
                e.codigo_emp not in (22,24)                            and
                b.codigo           != 'DV'                             and
                c.codigo_emp        = :codigo_emp                      and
                c.comprobante      >= :comprob_ini                     and
                c.comprobante      <= :comprob_fin
         order by e.codigo_emp, c.fecha, c.comprobante; */ 


    /* C2 */

    /* EXEC SQL DECLARE C2 CURSOR FOR
         select e.nombre_corto, to_number(to_char(c.fecha,'yyyymmdd')),
                0, n.nombre, ' ', c.comprobante, 0, 0
         from   movto_c c, nits n, empresas e
         where  c.fecha             = to_date(:fecha_ini,'yyyymmdd')   and
                c.codigo_emp        = e.codigo_emp                     and
                clase               = 'EG'                             and
                c.codigo_nitb       = n.codigo_nit                     and
                e.codigo_emp not in (22,24)                            and
                c.estado            = '2'
         order by e.codigo_emp, c.fecha, c.comprobante; */ 


/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/
    strcpy(cadena2,fecha_ini.arr);
    strcpy(wcadena, cadena2);
    fecha_oracle3(wcadena);
    strcpy(cadena, wcadena);
    strcpy(fechas,cadena);

    /* C3 */
    /* EXEC SQL select nombre
             into  :nomb_emp
      	     from   empresas, nits
             where  nits.codigo_nit     = empresas.codigo_nit and
                    empresas.codigo_emp = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select nombre into :b0  from empresas ,nits where (nits.c\
odigo_nit=empresas.codigo_nit and empresas.codigo_emp=to_number(:b1))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )36;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_emp;
    sqlstm.sqhstl[0] = (unsigned int  )72;
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



    nomb_emp.arr      [nomb_emp.len]     = '\0';
    if (sqlca.sqlcode) 
       fprintf(stderr,"Error C3 (%d) en empresa \n",sqlca.sqlcode);

    /* EXEC SQL OPEN C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0002;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )59;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&fecha_ini;
    sqlstm.sqhstl[0] = (unsigned int  )22;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&libro;
    sqlstm.sqhstl[1] = (unsigned int  )6;
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
    sqlstm.sqhstv[3] = (         void  *)&comprob_ini;
    sqlstm.sqhstl[3] = (unsigned int  )12;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&comprob_fin;
    sqlstm.sqhstl[4] = (unsigned int  )12;
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


    /* EXEC SQL OPEN C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )94;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&fecha_ini;
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


    oraest_sch=oraest_chq=staora=0;
    con_lin=66;
    listado();
    /* EXEC SQL CLOSE C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )113;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )128;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    cierre_impresora();

/************************************************
 * Desconectarse de ORACLE.                     *
 ************************************************/

    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )143;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    exit   (0);
}

void listado()
{
 staora=0;
 while (!oraest_sch || !oraest_chq) {
        leer_c1();
        strcpy(empcor,nombemp.arr);
        leer_c2();
        staora = oraest_sch;
        listar();
 }
}

void listar()
{
   while (oraest_sch == 0 || oraest_chq == 0) {
         if (!strcmp(nombemp.arr,nombemp2.arr)) {
             if (comp < comp2 && oraest_chq == 0) {
                imprime_chq();
             }
             else {
                  if (oraest_sch==0) {
                      imprime_sch();
                  }
                  else {
                       if (oraest_chq == 0) {
                          imprime_chq();
                       }
                  }
             }
         }
         else {
              if (oraest_chq == 0) {
                 imprime_chq();
              }
              else {
                   if (oraest_sch == 0) {
                       imprime_sch();
                   }
              }
         }
   }
}

void imprime_sch()
{
 if (con_lin > 58)
    titulos();
 else {
       if (strcmp(nombemp2.arr,empcor)) {
          fprintf(fp,"\n\n");
          con_lin+=2;
          strcpy(empcor,nombemp2.arr);
       }
 }

 fprintf(fp,"%-4s",nombemp2.arr);
 sprintf(cadena,"%8.0f",fecha2);
 fprintf(fp,"%-12s",fmtnum("9999-99-99",cadena,r_t));
 if (posf != 0) {
    fprintf(fp,"%-12s"," ");
 }
 else fprintf(fp,"%-12s"," ");
 fprintf(fp,"%-45s",nomb2.arr);
 fprintf(fp,"%5s",banco2.arr);
 sprintf(cadena,"%10.0f",comp2);
 fprintf(fp,"%10s",fmtnum("zzzzzzzz",cadena,r_t));
 sprintf(cadena,"%8.0f",chq2);
 fprintf(fp,"%8s",fmtnum("zzzzzzzz",cadena,r_t));
 fprintf(fp,"%24s\n","Anulado");
 con_lin+=1;
 leer_c2();
}

void imprime_chq()
{
 if (con_lin > 58)
    titulos();
 else {
       if (strcmp(nombemp.arr,empcor)) {
          fprintf(fp,"\n\n");
          con_lin+=2;
          strcpy(empcor,nombemp.arr);
       }
 }

 fprintf(fp,"%-4s",nombemp.arr);
 sprintf(cadena,"%8.0f",fecha);
 fprintf(fp,"%-12s",fmtnum("9999-99-99",cadena,r_t));
 if (posf != 0) {
    sprintf(cadena,"%8.0f",posf);
    fprintf(fp,"%-12s",fmtnum("9999-99-99",cadena,r_t));
 }
 else fprintf(fp,"%-12s"," ");
 fprintf(fp,"%-45s",nomb.arr);
 fprintf(fp,"%5s",banco.arr);
 sprintf(cadena,"%10.0f",comp);
 fprintf(fp,"%10s",fmtnum("zzzzzzzz",cadena,r_t));
 sprintf(cadena,"%8.0f",chq);
 fprintf(fp,"%8s",fmtnum("zzzzzzzz",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_cre);
 fprintf(fp,"%24s\n",fmtnum("zz,zzz,zz9.99",cadena,r_t));
 con_lin+=1;
 leer_c1();
}

void leer_c1()
{
  /* EXEC SQL FETCH C1  INTO :nombemp, :fecha, :posf, :nomb, :banco,
                          :comp,    :chq,   :valor_cre; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )158;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&nombemp;
  sqlstm.sqhstl[0] = (unsigned int  )72;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&fecha;
  sqlstm.sqhstl[1] = (unsigned int  )8;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&posf;
  sqlstm.sqhstl[2] = (unsigned int  )8;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&nomb;
  sqlstm.sqhstl[3] = (unsigned int  )72;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&banco;
  sqlstm.sqhstl[4] = (unsigned int  )12;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&comp;
  sqlstm.sqhstl[5] = (unsigned int  )8;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&chq;
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



  oraest_chq  =     sqlca.sqlcode;

  if (oraest_chq == -1405 ) {
      oraest_chq  = 0;
  }
  else if (oraest_chq)
           fprintf (stderr, "Error leyendo C1 (%d) (%s %8.0f %8.0f %s %7.0f %7.0f)\n", oraest_chq, nombemp.arr, fecha, posf, banco.arr, comp, chq);

  nombemp.arr       [nombemp.len]     = '\0';
  nomb.arr          [nomb.len]        = '\0';
  banco.arr         [banco.len]       = '\0';
}

void leer_c2()
{

  /* EXEC SQL FETCH C2  INTO :nombemp2, :fecha2, :posf2, :nomb2, :banco2,
                          :comp2,    :chq2,   :valor_cre2; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )205;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&nombemp2;
  sqlstm.sqhstl[0] = (unsigned int  )72;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&fecha2;
  sqlstm.sqhstl[1] = (unsigned int  )8;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&posf2;
  sqlstm.sqhstl[2] = (unsigned int  )8;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&nomb2;
  sqlstm.sqhstl[3] = (unsigned int  )72;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&banco2;
  sqlstm.sqhstl[4] = (unsigned int  )12;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&comp2;
  sqlstm.sqhstl[5] = (unsigned int  )8;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&chq2;
  sqlstm.sqhstl[6] = (unsigned int  )8;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&valor_cre2;
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



  oraest_sch  =     sqlca.sqlcode;

  if (oraest_sch == -1405 ) {
      oraest_sch  = 0;
  }
  else if (oraest_sch)
           fprintf (stderr, "Error leyendo C2 (%d)\n", oraest_sch);

  nombemp2.arr       [nombemp2.len]     = '\0';
  nomb2.arr          [nomb2.len]        = '\0';
  banco2.arr         [banco2.len]       = '\0';

}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 con_pag++;
 if (!strcmp(codigo_emp.arr,"3"))
    strcpy(nomb_emp.arr," ");
 fprintf(fp,"%s",salte_pagina);
 strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
 fprintf(fp,"%s%s%s%s%s\n\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
 fprintf(fp,"%s%s%s%43s",diezcpi,condensado_on,ancho_on,"RELACION DE PAGOS");
 fprintf(fp,"%s%s%17s %d\n\n",ancho_off,diezcpi,"PAGINA ",con_pag);
 strorg(fechas,1,strlen(fechas));
 fprintf(fp,"%s%52s%s\n\n",enfatizado_on,fechas,enfatizado_off);
 fprintf(fp,"%s%-4s%-12s%-87s%16s\n",condensado_on,"   ","FECHA",     "FECHA","VALOR");
 fprintf(fp,"%s%-4s%-12s%-12s%-47s%-4s%-11s%-14s%16s\n\n",condensado_on,"EMP","DE EMISION","DE PAGO","NOMBRE BENEFICIARIO","BAN","No.EGRESO","CHEQUE","CHEQUE");
 con_lin = 9;
}

