
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
    ".\\ingresol.pc"
};


static unsigned long sqlctx = 529547;


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
            void  *sqhstv[10];
   unsigned int   sqhstl[10];
            int   sqhsts[10];
            void  *sqindv[10];
            int   sqinds[10];
   unsigned int   sqharm[10];
   unsigned int   *sqharc[10];
   unsigned short  sqadto[10];
   unsigned short  sqtdso[10];
} sqlstm = {10,10};

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
"select codigo_bco ,nvl(cheque,0) ,nvl(valor_chq,0) ,concepto ,clase ,nvl(num\
ero_factura,0) ,nvl(valor,0)  from ingresos_d where (((codigo_emp=:b0 and ano_\
mes=:b1) and consecutivo=:b2) and libro=:b3)           ";

 static const char *sq0003 = 
"select cuenta ,nvl(infa,0) infax ,nvl(valor_deb,0) ,nvl(valor_cre,0)  from m\
ovto_d d ,movto_c c where (((((((d.codigo_emp=c.codigo_emp and d.ano_mes=c.ano\
_mes) and d.consecutivo=c.consecutivo) and d.libro=:b0) and c.codigo_emp=to_nu\
mber(:b1)) and c.clase='RC') and c.ano_mes>=200601) and c.comprobante=to_numbe\
r(:b2))           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,123,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,4,95,0,4,169,0,0,3,1,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,
63,0,0,5,65,0,4,178,0,0,2,1,0,1,0,2,4,0,0,1,9,0,0,
86,0,0,6,244,0,4,195,0,0,10,2,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
9,0,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,
141,0,0,7,185,0,4,236,0,0,3,1,0,1,0,2,9,0,0,2,9,0,0,1,9,0,0,
168,0,0,2,209,0,9,248,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
199,0,0,3,328,0,9,251,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
226,0,0,2,0,0,15,267,0,0,0,0,0,1,0,
241,0,0,3,0,0,15,268,0,0,0,0,0,1,0,
256,0,0,8,82,0,5,273,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
279,0,0,2,0,0,15,283,0,0,0,0,0,1,0,
294,0,0,3,0,0,15,284,0,0,0,0,0,1,0,
309,0,0,9,0,0,30,286,0,0,0,0,0,1,0,
324,0,0,2,0,0,13,321,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,4,
0,0,2,4,0,0,
367,0,0,3,0,0,13,389,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,
};


/*****************************************************************
* INGRESOL.PC Version 1.0 - Rev 1.2 - May. 29/90.
*
* ingresol.pc. Listado de Los Recibos de caja preimpresos.
*
* Uso : ingresol codigo_emp device userid/password
*
* Martin A. Toloza L.  Creado Noviembre 28-1997.
* Teodoro Tarud & Cia Ltda.
*
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void titulos();
void lista_facturas();
void lista_cuentas();
void fecha_numero();
void strtri();

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Ingresos_c  */
double  periodo;
double  consecutivo;
/* VARCHAR fecha         [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha;

/* VARCHAR codigo_cliente[8]; */ 
struct { unsigned short len; unsigned char arr[8]; } codigo_cliente;

double  nit;
double  codigo_nit;
double  valor_efectivos;
/* VARCHAR comentarios   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } comentarios;

/* VARCHAR codigo_emp    [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR numero_ingreso[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } numero_ingreso;

                                 /* Ingresos_d (C1) */
/* VARCHAR codigo_bco    [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_bco;

/* VARCHAR cheque        [12]; */ 
struct { unsigned short len; unsigned char arr[12]; } cheque;

double  valor_cheque;
/* VARCHAR concepto      [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } concepto;

/* VARCHAR clase         [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } clase;

double  numero_factura;
double  valor_factura;
/* VARCHAR ano_mesd      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesd;

/* VARCHAR consecud      [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } consecud;

                                 /* Movtos (C2) */
/* VARCHAR cuenta        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuenta;

/* VARCHAR infa          [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infa;

double  valor_deb;
double  valor_cre;
                                 /* Nits, Ciudades (C3) */
/* VARCHAR nomb_clie     [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_clie;

/* VARCHAR nomb_ciu      [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciu;

/* VARCHAR codigo_nita   [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_nita;

                                 /* Control_Ing (C4) */
double  ult_grabado;
double  ult_listado;
                                 /* Control_Ing (C6) */
/* VARCHAR ultimo        [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } ultimo;

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

                                            /* Variables globales del usuario */
int     con_pag=0;                          /* Contador de Paginas */
int     con_lin=66;                         /* Contador de Lineas  */
int     cl;
int     staora =0;
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[100];
char    cadena[100];
double  total_factura;
double  total_cheque;
int     salto1;
int     salto2;


void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int     i;
double  j;
double  decimal;
double  num;
double  x;

    if (argc < 5)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : ingresol codigo_emp device libro userid/password@esquema\n");
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
       strcpy (librob.arr,     argv[3]);
       librob.len  =           strlen(librob.arr);

    if (!strpos ("/", argv[4]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[4]);
    uid.len  =          strlen(uid.arr);

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

/***************************************
 * Procesar una sentencia SQL (oexec). *
 ***************************************/

    /* EXEC SQL DECLARE C1 CURSOR FOR
             select codigo_bco, nvl(cheque,0), nvl(valor_chq,0),
                    concepto, clase, nvl(numero_factura,0), nvl(valor,0)
             from   ingresos_d
             where  codigo_emp     = :codigo_emp           and
                    ano_mes        = :ano_mesd             and
                    consecutivo    = :consecud             and
                    libro          = :librob; */ 


    /* EXEC SQL DECLARE C2 CURSOR FOR
             select cuenta, nvl(infa,0) as infax, nvl(valor_deb,0), nvl(valor_cre,0)
             from   movto_d d, movto_c c
             where  d.codigo_emp     = c.codigo_emp           and
                    d.ano_mes        = c.ano_mes              and
                    d.consecutivo    = c.consecutivo          and
                    d.libro          = :librob                and
                    c.codigo_emp     = to_number(:codigo_emp) and
                    c.clase          = 'RC'                   and
                    c.ano_mes       >= 200601                 and
                    c.comprobante    = to_number(:numero_ingreso); */ 


    /* EXEC SQL select consecutivo, ult_listado
             into  :ult_grabado, :ult_listado
	     from   control_ing
             where  control_ing.codigo_emp = :codigo_emp; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select consecutivo ,ult_listado into :b0,:b1  from contro\
l_ing where control_ing.codigo_emp=:b2";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )36;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&ult_grabado;
    sqlstm.sqhstl[0] = (unsigned int  )8;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&ult_listado;
    sqlstm.sqhstl[1] = (unsigned int  )8;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[2] = (unsigned int  )7;
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



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Control_Ing C4 (%d)\n", sqlca.sqlcode);

    if (ult_listado==0) {
        /* EXEC SQL select min(numero)  into :consecutivo
                 from   ingresos_c
                 where  codigo_emp = :codigo_emp; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "select min(numero) into :b0  from ingresos_c where co\
digo_emp=:b1";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )63;
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
        sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
        sqlstm.sqhstl[1] = (unsigned int  )7;
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



        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo Ingresos_c (%d)\n", sqlca.sqlcode);
        ult_listado=consecutivo-1;
    }
    ult_listado++;

    fprintf(fp,"\n\n\n");
    for (j=ult_listado;j<=ult_grabado;j++) {

         sprintf(numero_ingreso.arr,"%-8.0f",j);
         strtri (numero_ingreso.arr);
         numero_ingreso.len =  strlen(numero_ingreso.arr);

         /* EXEC SQL select fecha, codigo_cliente, nit, codigo_nit,
                         nvl(valor_efectivos,0), comentarios, ano_mes,
                         consecutivo
                  into :fecha, :codigo_cliente, :nit, :codigo_nit,
                       :valor_efectivos, :comentarios, :periodo, :consecutivo
                  from   ingresos_c
                  where  codigo_emp     = :codigo_emp           and
                         tipo_documento = 'RC'                  and
                         ano_mes       >= 200601                and
                         numero         = :numero_ingreso; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 10;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = "select fecha ,codigo_cliente ,nit ,codigo_nit ,nvl(v\
alor_efectivos,0) ,comentarios ,ano_mes ,consecutivo into :b0,:b1,:b2,:b3,:b4,\
:b5,:b6,:b7  from ingresos_c where (((codigo_emp=:b8 and tipo_documento='RC') \
and ano_mes>=200601) and numero=:b9)";
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )86;
         sqlstm.selerr = (unsigned short)1;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&fecha;
         sqlstm.sqhstl[0] = (unsigned int  )22;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)&codigo_cliente;
         sqlstm.sqhstl[1] = (unsigned int  )10;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&nit;
         sqlstm.sqhstl[2] = (unsigned int  )8;
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (         void  *)&codigo_nit;
         sqlstm.sqhstl[3] = (unsigned int  )8;
         sqlstm.sqhsts[3] = (         int  )0;
         sqlstm.sqindv[3] = (         void  *)0;
         sqlstm.sqinds[3] = (         int  )0;
         sqlstm.sqharm[3] = (unsigned int  )0;
         sqlstm.sqadto[3] = (unsigned short )0;
         sqlstm.sqtdso[3] = (unsigned short )0;
         sqlstm.sqhstv[4] = (         void  *)&valor_efectivos;
         sqlstm.sqhstl[4] = (unsigned int  )8;
         sqlstm.sqhsts[4] = (         int  )0;
         sqlstm.sqindv[4] = (         void  *)0;
         sqlstm.sqinds[4] = (         int  )0;
         sqlstm.sqharm[4] = (unsigned int  )0;
         sqlstm.sqadto[4] = (unsigned short )0;
         sqlstm.sqtdso[4] = (unsigned short )0;
         sqlstm.sqhstv[5] = (         void  *)&comentarios;
         sqlstm.sqhstl[5] = (unsigned int  )22;
         sqlstm.sqhsts[5] = (         int  )0;
         sqlstm.sqindv[5] = (         void  *)0;
         sqlstm.sqinds[5] = (         int  )0;
         sqlstm.sqharm[5] = (unsigned int  )0;
         sqlstm.sqadto[5] = (unsigned short )0;
         sqlstm.sqtdso[5] = (unsigned short )0;
         sqlstm.sqhstv[6] = (         void  *)&periodo;
         sqlstm.sqhstl[6] = (unsigned int  )8;
         sqlstm.sqhsts[6] = (         int  )0;
         sqlstm.sqindv[6] = (         void  *)0;
         sqlstm.sqinds[6] = (         int  )0;
         sqlstm.sqharm[6] = (unsigned int  )0;
         sqlstm.sqadto[6] = (unsigned short )0;
         sqlstm.sqtdso[6] = (unsigned short )0;
         sqlstm.sqhstv[7] = (         void  *)&consecutivo;
         sqlstm.sqhstl[7] = (unsigned int  )8;
         sqlstm.sqhsts[7] = (         int  )0;
         sqlstm.sqindv[7] = (         void  *)0;
         sqlstm.sqinds[7] = (         int  )0;
         sqlstm.sqharm[7] = (unsigned int  )0;
         sqlstm.sqadto[7] = (unsigned short )0;
         sqlstm.sqtdso[7] = (unsigned short )0;
         sqlstm.sqhstv[8] = (         void  *)&codigo_emp;
         sqlstm.sqhstl[8] = (unsigned int  )7;
         sqlstm.sqhsts[8] = (         int  )0;
         sqlstm.sqindv[8] = (         void  *)0;
         sqlstm.sqinds[8] = (         int  )0;
         sqlstm.sqharm[8] = (unsigned int  )0;
         sqlstm.sqadto[8] = (unsigned short )0;
         sqlstm.sqtdso[8] = (unsigned short )0;
         sqlstm.sqhstv[9] = (         void  *)&numero_ingreso;
         sqlstm.sqhstl[9] = (unsigned int  )17;
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


         if (sqlca.sqlcode == -1405 ) {
             if (!strlen(fecha.arr)) {
                 strcpy (fecha.arr, "");
                 fecha.len = 0;
             }
             if (!strlen(codigo_cliente.arr)) {
                 strcpy (codigo_cliente.arr, "");
                 codigo_cliente.len = 0;
             }
             if (!strlen(comentarios.arr)) {
                 strcpy (comentarios.arr, "");
                 comentarios.len = 0;
             }
         }
         else if (sqlca.sqlcode)
             fprintf (stderr, "Error leyendo Ingresos_C (%d)\n", sqlca.sqlcode);

         fecha.arr          [fecha.len]          = '\0';
         codigo_cliente.arr [codigo_cliente.len] = '\0';
         comentarios.arr    [comentarios.len]    = '\0';

         sprintf(ano_mesd.arr,"%-6.0f",periodo);
         ano_mesd.len =  strlen(ano_mesd.arr);
         strtri (ano_mesd.arr);
         ano_mesd.len =  strlen(ano_mesd.arr);
         sprintf(consecud.arr,"%8.0f",consecutivo);
         strtri (consecud.arr);
         consecud.len =  strlen(consecud.arr);
         sprintf(codigo_nita.arr,"%5.0f",codigo_nit);
         codigo_nita.len =  strlen(codigo_nita.arr);

         /* EXEC SQL select n.nombre, nvl(n.nombre_muni,c.nombre)
                  into :nomb_clie, :nomb_ciu
     	          from  nits n, ciudades c
                  where n.codigo_nit = to_number(:codigo_nita) and
                        n.codigo_ciu = c.codigo
                  group by n.nombre, n.nombre_muni, c.nombre; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 10;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = "select n.nombre ,nvl(n.nombre_muni,c.nombre) into :b\
0,:b1  from nits n ,ciudades c where (n.codigo_nit=to_number(:b2) and n.codigo\
_ciu=c.codigo) group by n.nombre,n.nombre_muni,c.nombre";
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )141;
         sqlstm.selerr = (unsigned short)1;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&nomb_clie;
         sqlstm.sqhstl[0] = (unsigned int  )53;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)&nomb_ciu;
         sqlstm.sqhstl[1] = (unsigned int  )32;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&codigo_nita;
         sqlstm.sqhstl[2] = (unsigned int  )12;
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



         if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
             fprintf (stderr, "Error leyendo Nits C3 (%d)\n", sqlca.sqlcode);

         nomb_clie.arr [nomb_clie.len] = '\0';
         nomb_ciu.arr  [nomb_ciu.len]  = '\0';
         /* EXEC SQL OPEN C1; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 10;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = sq0002;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )168;
         sqlstm.selerr = (unsigned short)1;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
         sqlstm.sqhstl[0] = (unsigned int  )7;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)&ano_mesd;
         sqlstm.sqhstl[1] = (unsigned int  )22;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&consecud;
         sqlstm.sqhstl[2] = (unsigned int  )17;
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (         void  *)&librob;
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


         lista_facturas();

         /* EXEC SQL OPEN C2; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 10;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = sq0003;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )199;
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
         sqlstm.sqhstl[1] = (unsigned int  )7;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&numero_ingreso;
         sqlstm.sqhstl[2] = (unsigned int  )17;
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


         lista_cuentas();
         num=j/2;
         decimal=modf(num,&x);
         if (decimal==0) {
             for (i=1;i<=26-con_lin;i++) {
                  fprintf (fp,"\n");
             }
         }
         else {
               for (i=1;i<=25-con_lin;i++) {
                    fprintf (fp,"\n");
               }
         }
         total_factura=0;
         total_cheque=0;
         /* EXEC SQL CLOSE C1; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 10;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )226;
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
         sqlstm.arrsiz = 10;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )241;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    }
    sprintf(ultimo.arr,"%8.0f",ult_grabado);
    ultimo.len =  strlen(ultimo.arr);

    /* EXEC SQL update control_ing
	     set ult_listado    = to_number(:ultimo)
             where codigo_emp   = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 10;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update control_ing  set ult_listado=to_number(:b0) where \
codigo_emp=to_number(:b1)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )256;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&ultimo;
    sqlstm.sqhstl[0] = (unsigned int  )17;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[1] = (unsigned int  )7;
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



/*****************************************
** COMMIT LOS CAMBIOS A LA BASE DE DATOS *
******************************************/

    cierre_impresora();

    /* EXEC SQL CLOSE C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 10;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )279;
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
    sqlstm.arrsiz = 10;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )294;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 10;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )309;
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

    char wcadena[10];

    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    fecha_numero(wcadena);
    strcpy  (cadena, wcadena);

    fprintf (fp,"%s%47s%12s%7s\n\n",diezcpi,numero_ingreso.arr,cadena,codigo_cliente.arr);
    strorg(nomb_ciu.arr,1,17);
    strcpy(cadena,nomb_clie.arr);
    strcat(cadena,"-");
    strcat(cadena,comentarios.arr);
    fprintf (fp,"%-51s%-17s\n\n",cadena,nomb_ciu.arr);
    con_lin = 4;
}

void lista_facturas()
{
 int i;
 staora  = 0;
 while (staora == 0) {

        /* EXEC SQL FETCH C1 INTO :codigo_bco, :cheque, :valor_cheque, :concepto,
                               :clase, :numero_factura, :valor_factura; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 10;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )324;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&codigo_bco;
        sqlstm.sqhstl[0] = (unsigned int  )8;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&cheque;
        sqlstm.sqhstl[1] = (unsigned int  )14;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&valor_cheque;
        sqlstm.sqhstl[2] = (unsigned int  )8;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&concepto;
        sqlstm.sqhstl[3] = (unsigned int  )53;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&clase;
        sqlstm.sqhstl[4] = (unsigned int  )8;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&numero_factura;
        sqlstm.sqhstl[5] = (unsigned int  )8;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&valor_factura;
        sqlstm.sqhstl[6] = (unsigned int  )8;
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



        staora  = sqlca.sqlcode;
        if (staora ==  1403) break;
        if (staora == -1405) {
            staora  = 0;
            if (!strlen(codigo_bco.arr)) {
                strcpy (codigo_bco.arr, "");
                codigo_bco.len = 0;
            }
            if (!strlen(cheque.arr)) {
                strcpy (cheque.arr, "");
                cheque.len = 0;
            }
            if (!strlen(concepto.arr)) {
                strcpy (concepto.arr, "");
                concepto.len = 0;
            }
            if (!strlen(clase.arr)) {
                strcpy (clase.arr, "");
                clase.len = 0;
            }
        }
        else if (staora)
                 fprintf (stderr, "Error leyendo Ingresos_D (%d)\n", staora);

        codigo_bco.arr     [codigo_bco.len]     = '\0';
        cheque.arr         [cheque.len]         = '\0';
        concepto.arr       [concepto.len]       = '\0';
        clase.arr          [clase.len]          = '\0';

        if (con_lin > 11)
           titulos();
        sprintf(cadena,"%9s",cheque.arr);
        fprintf(fp,"%-4s%9s",codigo_bco.arr,fmtnum("zzzzzzzzz",cadena,r_t));
        sprintf(cadena,"%7.2f",valor_cheque);
        fprintf(fp,"%13s",fmtnum("z,zzz,zzz.zz",cadena,r_t));
        sprintf(cadena,"%6.2f",numero_factura);
        strorg(concepto.arr,1,18);
        if (numero_factura == 0)
            strcpy(clase.arr," ");
        fprintf(fp," %-18s%2s%6s",concepto.arr,clase.arr,fmtnum("zzzzzz",cadena,r_t));
        sprintf(cadena,"%7.2f",valor_factura);
        fprintf(fp,"%14s\n",fmtnum("zz,zzz,zzz.zz",cadena,r_t));
        total_cheque +=valor_cheque;
        total_factura+=valor_factura;
        con_lin++;
  }
        cl=con_lin;
        for (i=1;i<11-cl;i++) {
             fprintf (fp,"\n");
             con_lin++;
        }
        sprintf(cadena,"%7.2f",valor_efectivos);
        fprintf(fp,"%27s\n",fmtnum("z,zzz,zzz.zz",cadena,r_t));
        sprintf(cadena,"%7.2f",total_cheque+valor_efectivos);
        fprintf(fp,"%27s",fmtnum("z,zzz,zzz.zz",cadena,r_t));
        sprintf(cadena,"%7.2f",total_factura);
        fprintf(fp,"%40s\n\n",fmtnum("z,zzz,zzz.zz",cadena,r_t));
        con_lin+=3;
}

void lista_cuentas()
{
 staora  = 0;
 while (staora == 0) {

        /* EXEC SQL FETCH C2 INTO :cuenta, :infa, :valor_deb, :valor_cre; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 10;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )367;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&cuenta;
        sqlstm.sqhstl[0] = (unsigned int  )22;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&infa;
        sqlstm.sqhstl[1] = (unsigned int  )22;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&valor_deb;
        sqlstm.sqhstl[2] = (unsigned int  )8;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&valor_cre;
        sqlstm.sqhstl[3] = (unsigned int  )8;
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



        staora  = sqlca.sqlcode;
        if (sqlca.sqlcode == 1403) break;

        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);

        cuenta.arr  [cuenta.len] = '\0';
        infa.arr    [infa.len]   = '\0';

//        sprintf(cadena,"%12s",infa.arr);
        fprintf(fp,"%-10s%-15s ",cuenta.arr,infa.arr);
        sprintf(cadena,"%9.2f",valor_deb);
        fprintf(fp,"%28s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
        sprintf(cadena,"%9.2f",valor_cre);
        fprintf(fp,"%14s\n",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
        con_lin++;
  }
}
