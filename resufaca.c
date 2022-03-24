
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
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
    ".\\resufaca.pc"
};


static unsigned int sqlctx = 536819;


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
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
            void  *sqhstv[16];
   unsigned int   sqhstl[16];
            int   sqhsts[16];
            void  *sqindv[16];
            int   sqinds[16];
   unsigned int   sqharm[16];
   unsigned int   *sqharc[16];
   unsigned short  sqadto[16];
   unsigned short  sqtdso[16];
} sqlstm = {12,16};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(char *, int *);

 static const char *sq0002 = 
"er(:b12)=tipo_factura and tipo_documento in ('F','C')) and fecha_documento>=\
to_date(to_number(:b13),'yyyymmdd')) and fecha_documento<=to_date(to_number(:b\
14),'yyyymmdd')) and libro=:b15) and  not exists (select 'x'  from basura wher\
e ((f.tipo_factura=tipo_factura and f.tipo_documento=tipo_documento) and f.num\
ero_factura=numero_factura))) group by codigo_cliente order by codigo_cliente \
           ";

 static const char *sq0003 = 
"er(:b12)=tipo_factura and tipo_documento in ('F','C')) and fecha_documento>=\
to_date(to_number(:b13),'yyyymmdd')) and fecha_documento<=to_date(to_number(:b\
14),'yyyymmdd')) and libro=:b15) and exists (select 'x'  from basura where ((f\
.tipo_factura=tipo_factura and f.tipo_documento=tipo_documento) and f.numero_f\
actura=numero_factura))) group by codigo_cliente order by codigo_cliente      \
      ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4114,178,0,0,
5,0,0,1,0,0,27,138,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,4,0,0,30,251,0,0,0,0,0,1,0,
51,0,0,2,1423,0,9,272,0,0,16,16,0,1,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,
130,0,0,2,0,0,13,275,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
201,0,0,2,0,0,15,325,0,0,0,0,0,1,0,
216,0,0,3,1418,0,9,334,0,0,16,16,0,1,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,
295,0,0,3,0,0,13,340,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
366,0,0,3,0,0,15,390,0,0,0,0,0,1,0,
381,0,0,5,111,0,4,398,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
404,0,0,6,54,0,4,455,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
427,0,0,7,544,0,4,500,0,0,6,1,0,1,0,2,3,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,9,0,0,1,
9,0,0,
466,0,0,8,120,0,4,519,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
};


/*****************************************************************
* RESUFAC.C  Version 1.0 - Rev 1.2 - Sep. 16/91.
*
* resufacp.c Programa para listar la facturacion de un periodo determinado
*
* Uso : resufac numero_quincena device copias userid/password
*
* Martin A. Toloza L. Creado Enero 14-1998.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
double redondo();

void lista_empresa(int e);
void lista_basura(int e);
void imprime_facturas();
void totaliza(int i);
void titulo_ciudad();
void borro_totales(int i);
void acumulo_totales(int i);
void empresa();
void titulos();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Facturas (C1) y (C6) */
double  numero_factura;
/* VARCHAR codigo_cliente [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_cliente;

double  valor_neto[13];
double  valor_total;
int     hojas;
/* VARCHAR codigo_emp     [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR numero_quincena[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } numero_quincena;

                                 /* Nits (C2) */
/* VARCHAR nomb_clie      [61]; */ 
struct { unsigned short len; unsigned char arr[61]; } nomb_clie;

/* VARCHAR wcod           [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } wcod;

                                 /* Ciudades (C3) */
/* VARCHAR nomb_ciudad    [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } nomb_ciudad;

/* VARCHAR wciu           [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } wciu;

                                 /* Control_fac (C4) */
int     ano;
int     mes_proceso;
float   ptaje_iva;
/* VARCHAR fecha_inicial  [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } fecha_inicial;

/* VARCHAR corte          [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } corte;

                                 /* Empresas (C5) */
/* VARCHAR nomb_emp       [61]; */ 
struct { unsigned short len; unsigned char arr[61]; } nomb_emp;


/* VARCHAR fecha_ini[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_ini;

/* VARCHAR fecha_fin[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_fin;

int     anos[12];
/* VARCHAR librop   [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } librop;


/* EXEC SQL END DECLARE SECTION; */ 

/* EXEC SQL INCLUDE SQLCA;
 */ 
/*
 * $Header: sqlca.h 24-apr-2003.12:50:58 mkandarp Exp $ sqlca.h 
 */

/* Copyright (c) 1985, 2003, Oracle Corporation.  All rights reserved.  */
 
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
#define A_F1 "###,###,###.##"
#define O1 " Impresion en proceso...... "
#define O2 " Recuperacion en proceso...... "

char *fmtnum(), r_t[100];
int     con_pag;                                   /* Contador de Paginas */
int     con_lin=66;                                /* Contador de Lineas  */
int	inicio = 0;
int	staora = 0;
int     serv   = 0;
char    copias[6];
int     tit_ciu=0;
char    fechas[90];
char    fecha[20];
char    cadena[100];
char    mensajes[50];
char    wciu2[10];
int     j;
int     a, b;
char    ai[10];
char    mi[10];

struct acu {
            double valor_neto[13];
            double valor_total;
           };
struct acu vect[3];
float   c;
char    nro_quincena[5];
char    formas[5];

void main(argc, argv)
int     argc;
char    *argv[];
{
char    device[10];
int	status = 0;
int     i;

if (argc < 7)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : resufac fecha_ini fecha_fin libro(0= COLGAAP 1=IFRS) device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (fecha_ini.arr,argv[1]);
fecha_ini.len = strlen(fecha_ini.arr);
strcpy (fecha_fin.arr,argv[2]);
fecha_fin.len = strlen(fecha_fin.arr);

strcpy (librop.arr, argv[3]);
librop.len =        strlen(librop.arr);

strcpy (device,   argv[4]);
strlow (device);
strcpy (copias,   argv[5]);

if (!strpos ("/", argv[6]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,   argv[6]);
uid.len   =        strlen(uid.arr);

/******************************************************
 * Establecer conexion concurrente con ORACLE (orlon) *
 ******************************************************/
    /* EXEC SQL CONNECT :uid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
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
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
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

    strcpy(ai,fecha_ini.arr);
    strorg(ai,1,4);
    a = atoi(ai);

    strcpy(ai,fecha_fin.arr);
    strorg(ai,1,4);
    b = atoi(ai);

    if (b-11 > a) {
       fprintf (stderr,"Periodo no puede ser superior a 12 años \n");
       exit (1);
    }

    for (i=0;i<=12;i++) {
        anos[i] = a+i;
    }

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/
  /* EXEC SQL DECLARE C1 CURSOR FOR
        select codigo_cliente,\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[0],valor_neto,0)) "01",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[1],valor_neto,0)) "02",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[2],valor_neto,0)) "03",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[3],valor_neto,0)) "04",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[4],valor_neto,0)) "05",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[5],valor_neto,0)) "06",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[6],valor_neto,0)) "07",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[7],valor_neto,0)) "08",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[8],valor_neto,0)) "09",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[9],valor_neto,0)) "10",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[10],valor_neto,0)) "11",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[11],valor_neto,0)) "12",\
            sum(valor_neto) \
	from facturas f\
        where to_number(:codigo_emp)    = tipo_factura                     and\
              tipo_documento in ('F','C')                                  and\
              fecha_documento >= to_date(to_number(:fecha_ini),'yyyymmdd') and\
              fecha_documento <= to_date(to_number(:fecha_fin),'yyyymmdd') and\
              libro = (:librop)          and\
              not exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura)\
         group by codigo_cliente \
         order by codigo_cliente; */ 


  /* EXEC SQL DECLARE C6 CURSOR FOR
        select codigo_cliente,\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[0],valor_neto,0)) "01",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[1],valor_neto,0)) "02",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[2],valor_neto,0)) "03",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[3],valor_neto,0)) "04",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[4],valor_neto,0)) "05",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[5],valor_neto,0)) "06",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[6],valor_neto,0)) "07",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[7],valor_neto,0)) "08",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[8],valor_neto,0)) "09",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[9],valor_neto,0)) "10",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[10],valor_neto,0)) "11",\
            sum(decode(to_number(to_char(fecha_documento,'yyyy')),:anos[11],valor_neto,0)) "12",\
            sum(valor_neto) \
	from facturas f\
        where to_number(:codigo_emp)    = tipo_factura                     and\
              tipo_documento in ('F','C')                                  and\
              fecha_documento >= to_date(to_number(:fecha_ini),'yyyymmdd') and\
              fecha_documento <= to_date(to_number(:fecha_fin),'yyyymmdd') and\
              libro = (:librop)          and\
              exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura)\
         group by codigo_cliente \
         order by codigo_cliente; */ 


 lista_empresa(1);
 lista_empresa(3);
 con_pag=0;
 lista_empresa(2);
 con_pag=0;
 serv=1;
 lista_basura(1);
 lista_basura(2);

 cierre_impresora();


 /* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )36;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 exit   (0);
}

void lista_empresa(e)
int e;
{
 sprintf(codigo_emp.arr,"%d",e);
 empresa();

 strcpy(fecha,fecha_ini.arr);
 fecha_oracle3(fecha);
 strcpy(cadena,fecha);
 strcat(cadena," hasta ");
 strcpy(fecha,fecha_fin.arr);
 fecha_oracle3(fecha);
 strcat(cadena,fecha);
 strcpy(fechas,cadena);
 inicio  = 0;
 staora  = 0;
 /* EXEC SQL OPEN C1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 16;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select codigo_cliente ,sum(decode(to_number(to_char(fecha_documento,'yyy\
y')),:b0,valor_neto,0)) \"01\" ,sum(decode(to_number(to_char(fecha_documento\
,'yyyy')),:b1,valor_neto,0)) \"02\" ,sum(decode(to_number(to_char(fecha_docu\
mento,'yyyy')),:b2,valor_neto,0)) \"03\" ,sum(decode(to_number(to_char(fecha\
_documento,'yyyy')),:b3,valor_neto,0)) \"04\" ,sum(decode(to_number(to_char(\
fecha_documento,'yyyy')),:b4,valor_neto,0)) \"05\" ,sum(decode(to_number(to_\
char(fecha_documento,'yyyy')),:b5,valor_neto,0)) \"06\" ,sum(decode(to_numbe\
r(to_char(fecha_documento,'yyyy')),:b6,valor_neto,0)) \"07\" ,sum(decode(to_\
number(to_char(fecha_documento,'yyyy')),:b7,valor_neto,0)) \"08\" ,sum(decod\
e(to_number(to_char(fecha_documento,'yyyy')),:b8,valor_neto,0)) \"09\" ,sum(\
decode(to_number(to_char(fecha_documento,'yyyy')),:b9,valor_neto,0)) \"10\" \
,sum(decode(to_number(to_char(fecha_documento,'yyyy')),:b10,valor_neto,0)) \"\
11\" ,sum(decode(to_number(to_char(fecha_documento,'yyyy')),:b11,valor_neto,\
0)) \"12\" ,sum(valor_neto)  from facturas f where (((((to_numb");
 sqlstm.stmt = sq0002;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )51;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)&anos[0];
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&anos[1];
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&anos[2];
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&anos[3];
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&anos[4];
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&anos[5];
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&anos[6];
 sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&anos[7];
 sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&anos[8];
 sqlstm.sqhstl[8] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&anos[9];
 sqlstm.sqhstl[9] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&anos[10];
 sqlstm.sqhstl[10] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)0;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&anos[11];
 sqlstm.sqhstl[11] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[12] = (unsigned int  )7;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[13] = (unsigned int  )22;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[14] = (unsigned int  )22;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)0;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)&librop;
 sqlstm.sqhstl[15] = (unsigned int  )6;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)0;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C1 INTO :codigo_cliente,
                              :valor_neto[1],
                              :valor_neto[2],
                              :valor_neto[3],
                              :valor_neto[4],
                              :valor_neto[5],
                              :valor_neto[6],
                              :valor_neto[7],
                              :valor_neto[8],
                              :valor_neto[9],
                              :valor_neto[10],
                              :valor_neto[11],
                              :valor_neto[12],
                              :valor_total; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 12;
       sqlstm.arrsiz = 16;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )130;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)&codigo_cliente;
       sqlstm.sqhstl[0] = (unsigned int  )12;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[1] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[2] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[3] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[4] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[5] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[6] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[7] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[8] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[9] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[10] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[11] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[12] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
       sqlstm.sqhstv[13] = (         void  *)&valor_total;
       sqlstm.sqhstl[13] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[13] = (         int  )0;
       sqlstm.sqindv[13] = (         void  *)0;
       sqlstm.sqinds[13] = (         int  )0;
       sqlstm.sqharm[13] = (unsigned int  )0;
       sqlstm.sqadto[13] = (unsigned short )0;
       sqlstm.sqtdso[13] = (unsigned short )0;
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
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C1 (%d)\n", staora);

       codigo_cliente.arr   [codigo_cliente.len] = '\0';
       if (inicio == 0) {
           inicio  = 1;
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
          }
       strcpy(wciu2,codigo_cliente.arr);
       strorg(wciu2,1,2);
       if (strcmp(wciu2,wciu.arr)) {
           strcpy(mensajes,"TOTAL CIUDAD");
           totaliza(0);
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
           titulo_ciudad();
       }
       strcpy(wcod.arr,codigo_cliente.arr);
       wcod.len  =  strlen(wcod.arr);
       imprime_facturas();
 }
 if (con_lin > 56)
    titulos();
 strcpy(mensajes,"TOTAL CIUDAD");
 totaliza(0);
 strcpy(wciu.arr,codigo_cliente.arr);
 strorg(wciu.arr,1,2);
 strcpy(mensajes,"TOTALES GENERALES");
 totaliza(1);
 con_lin=66;
 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 16;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )201;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void lista_basura(e)
int e;
{
 sprintf(codigo_emp.arr,"%d",e);
 empresa();

 /* EXEC SQL OPEN C6; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 16;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select codigo_cliente ,sum(decode(to_number(to_char(fecha_documento,'yyy\
y')),:b0,valor_neto,0)) \"01\" ,sum(decode(to_number(to_char(fecha_documento\
,'yyyy')),:b1,valor_neto,0)) \"02\" ,sum(decode(to_number(to_char(fecha_docu\
mento,'yyyy')),:b2,valor_neto,0)) \"03\" ,sum(decode(to_number(to_char(fecha\
_documento,'yyyy')),:b3,valor_neto,0)) \"04\" ,sum(decode(to_number(to_char(\
fecha_documento,'yyyy')),:b4,valor_neto,0)) \"05\" ,sum(decode(to_number(to_\
char(fecha_documento,'yyyy')),:b5,valor_neto,0)) \"06\" ,sum(decode(to_numbe\
r(to_char(fecha_documento,'yyyy')),:b6,valor_neto,0)) \"07\" ,sum(decode(to_\
number(to_char(fecha_documento,'yyyy')),:b7,valor_neto,0)) \"08\" ,sum(decod\
e(to_number(to_char(fecha_documento,'yyyy')),:b8,valor_neto,0)) \"09\" ,sum(\
decode(to_number(to_char(fecha_documento,'yyyy')),:b9,valor_neto,0)) \"10\" \
,sum(decode(to_number(to_char(fecha_documento,'yyyy')),:b10,valor_neto,0)) \"\
11\" ,sum(decode(to_number(to_char(fecha_documento,'yyyy')),:b11,valor_neto,\
0)) \"12\" ,sum(valor_neto)  from facturas f where (((((to_numb");
 sqlstm.stmt = sq0003;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )216;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)&anos[0];
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&anos[1];
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&anos[2];
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&anos[3];
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&anos[4];
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&anos[5];
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&anos[6];
 sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&anos[7];
 sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&anos[8];
 sqlstm.sqhstl[8] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&anos[9];
 sqlstm.sqhstl[9] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&anos[10];
 sqlstm.sqhstl[10] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)0;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&anos[11];
 sqlstm.sqhstl[11] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[12] = (unsigned int  )7;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[13] = (unsigned int  )22;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[14] = (unsigned int  )22;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)0;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)&librop;
 sqlstm.sqhstl[15] = (unsigned int  )6;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)0;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
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



 inicio  = 0;
 staora  = 0;
 while (staora == 0) {

       /* EXEC SQL FETCH C6 INTO :codigo_cliente,
                              :valor_neto[1],
                              :valor_neto[2],
                              :valor_neto[3],
                              :valor_neto[4],
                              :valor_neto[5],
                              :valor_neto[6],
                              :valor_neto[7],
                              :valor_neto[8],
                              :valor_neto[9],
                              :valor_neto[10],
                              :valor_neto[11],
                              :valor_neto[12],
                              :valor_total; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 12;
       sqlstm.arrsiz = 16;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )295;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)&codigo_cliente;
       sqlstm.sqhstl[0] = (unsigned int  )12;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[1] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[2] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[3] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[4] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[5] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[6] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[7] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[8] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[9] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[10] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[11] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[12] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
       sqlstm.sqhstv[13] = (         void  *)&valor_total;
       sqlstm.sqhstl[13] = (unsigned int  )sizeof(double);
       sqlstm.sqhsts[13] = (         int  )0;
       sqlstm.sqindv[13] = (         void  *)0;
       sqlstm.sqinds[13] = (         int  )0;
       sqlstm.sqharm[13] = (unsigned int  )0;
       sqlstm.sqadto[13] = (unsigned short )0;
       sqlstm.sqtdso[13] = (unsigned short )0;
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
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C6 (%d)\n", staora);

       codigo_cliente.arr   [codigo_cliente.len] = '\0';
       if (inicio == 0) {
           inicio  = 1;
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
          }
       strcpy(wciu2,codigo_cliente.arr);
       strorg(wciu2,1,2);
       if (strcmp(wciu2,wciu.arr)) {
           strcpy(mensajes,"TOTAL CIUDAD");
           totaliza(0);
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
           titulo_ciudad();
       }
       strcpy(wcod.arr,codigo_cliente.arr);
       wcod.len  =  strlen(wcod.arr);
       imprime_facturas();
 }
 if (con_lin > 56)
    titulos();
 strcpy(mensajes,"TOTAL CIUDAD");
 totaliza(0);
 strcpy(wciu.arr,codigo_cliente.arr);
 strorg(wciu.arr,1,2);
 strcpy(mensajes,"TOTALES GENERALES");
 totaliza(1);
 con_lin=66;
 /* EXEC SQL CLOSE C6; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 16;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )366;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void imprime_facturas()
{
 int i;
 if (con_lin > 60)
    titulos();
 /* EXEC SQL select n.nombre
          into  :nomb_clie
          from  nits n, clientes cl
          where n.codigo_nit      = cl.codigo_nit      and
                cl.codigo_cliente = :wcod; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 16;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select n.nombre into :b0  from nits n ,clientes cl where (n.\
codigo_nit=cl.codigo_nit and cl.codigo_cliente=:b1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )381;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nomb_clie;
 sqlstm.sqhstl[0] = (unsigned int  )63;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&wcod;
 sqlstm.sqhstl[1] = (unsigned int  )12;
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
     fprintf (stderr, "Error leyendo Nits(C2) (%d)\n", sqlca.sqlcode);

 nomb_clie.arr   [nomb_clie.len] = '\0';
 if (hojas > 1) {
    sprintf(cadena,"%06.0f",numero_factura+hojas-1);
    cadena[3]='-';
    strorg(cadena,4,3);
 }
 else strcpy(cadena,"  ");
 fprintf(fp,"%6s ",codigo_cliente.arr);
 strorg(nomb_clie.arr,1,39);
 fprintf(fp,"%-39s",nomb_clie.arr);

 for (i=1;i<=12;i++) {
     sprintf (cadena,"%6.2f",valor_neto[i]);
     fprintf(fp,"%14s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",valor_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=1;
 for (i=0;i<=1;++i)
      acumulo_totales(i);
}

void totaliza(i)
int i;
{
 if (con_lin > 60)
    titulos();
 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=1;j<=12;j++) {
     sprintf (cadena,"%6.2f",vect[i].valor_neto[j]);
     fprintf(fp,"%14s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",vect[i].valor_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;
 borro_totales(i);
 tit_ciu=0;
}

void titulo_ciudad()
{
 wciu.len  =  strlen(wciu.arr);
 /* EXEC SQL select nombre
          into  :nomb_ciudad
          from   ciudades
          where  codigo = :wciu; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 16;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select nombre into :b0  from ciudades where codigo=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )404;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nomb_ciudad;
 sqlstm.sqhstl[0] = (unsigned int  )42;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&wciu;
 sqlstm.sqhstl[1] = (unsigned int  )12;
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
     fprintf (stderr, "Error leyendo Ciudades(C3) (%d)\n", sqlca.sqlcode);

 nomb_ciudad.arr   [nomb_ciudad.len] = '\0';
 if (con_lin > 58)
    titulos();
 if (tit_ciu==0) {
     fprintf(fp,"\n%s%16s%s%s%s%s\n\n",enfatizado_on,ancho_on,"CIUDAD ",nomb_ciudad.arr,ancho_off,enfatizado_off);
     con_lin+=3;
 }
}

void borro_totales(i)
int i;
{

 for (j=1;j<=12;j++) {
     vect[i].valor_neto[j] =0;
 }
 vect[i].valor_total = 0;

}

void acumulo_totales(i)
int i;
{

 for (j=1;j<=12;j++) {
     vect[i].valor_neto[j]     +=valor_neto[j];
 }
 vect[i].valor_total      +=valor_total;

}

void empresa()
{
 strcpy (numero_quincena.arr,nro_quincena);
 numero_quincena.len =  strlen(numero_quincena.arr);
 codigo_emp.len      =  strlen(codigo_emp.arr);

 /* EXEC SQL select cf.ano, cf.mes_proceso, cf.ptaje_iva,
               to_date(
               decode(to_number(cf.numero_quincena),
                  1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||lpad(1,2,0)),
                  2,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||16)),'yyyymmdd'),
               to_date(to_char(to_date(
               decode(to_number(cf.numero_quincena),
                  1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||lpad(15,2,0)),
                  2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd'))),'yymmdd'),'yyyymmdd'),'yyyymmdd')
        into  :ano, :mes_proceso, :ptaje_iva, :fecha_inicial, :corte
	from  control_fac cf
        where cf.codigo_emp   = :codigo_emp; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 16;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select cf.ano ,cf.mes_proceso ,cf.ptaje_iva ,to_date(decode(\
to_number(cf.numero_quincena),1,to_number(((cf.ano||lpad(cf.mes_proceso,2,0))|\
|lpad(1,2,0))),2,to_number(((cf.ano||lpad(cf.mes_proceso,2,0))||16))),'yyyymmd\
d') ,to_date(to_char(to_date(decode(to_number(cf.numero_quincena),1,to_number(\
((cf.ano||lpad(cf.mes_proceso,2,0))||lpad(15,2,0))),2,to_number(to_char(last_d\
ay(to_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yymm')),'yyyymmdd'))),'yymmdd')\
,'yyyymmdd'),'yyyymmdd') into :b0,:b1,:b2,:b3,:b4  from control_fac cf where c\
f.codigo_emp=:b5";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )427;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&ano;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&mes_proceso;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&ptaje_iva;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&fecha_inicial;
 sqlstm.sqhstl[3] = (unsigned int  )32;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&corte;
 sqlstm.sqhstl[4] = (unsigned int  )32;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[5] = (unsigned int  )7;
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



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Control_Fac(C4) (%d)\n", sqlca.sqlcode);

 fecha_inicial.arr [fecha_inicial.len] = '\0';
 corte.arr         [corte.len]         = '\0';

 /* EXEC SQL select nits.nombre
          into  :nomb_emp
          from   empresas, nits
          where  empresas.codigo_nit = nits.codigo_nit and
                 empresas.codigo_emp = :codigo_emp; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 16;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select nits.nombre into :b0  from empresas ,nits where (empr\
esas.codigo_nit=nits.codigo_nit and empresas.codigo_emp=:b1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )466;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nomb_emp;
 sqlstm.sqhstl[0] = (unsigned int  )63;
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
     fprintf (stderr, "Error leyendo Empresa(C5) (%d)\n", sqlca.sqlcode);

 nomb_emp.arr   [nomb_emp.len] = '\0';
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 int i;

 con_pag++;
 if (!strcmp(codigo_emp.arr,"3"))
    strcpy(nomb_emp.arr," ");
 fprintf(fp,"%s",salte_pagina);
 strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
 fprintf(fp,"%s%s%s%s%s\n\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
 if( serv == 0 )
   fprintf(fp,"%s%s%s%44s",diezcpi,condensado_on,ancho_on,"RESUMEN DE VENTAS (CREDITO+CONTADO)");
 else  {
   if (!strcmp(codigo_emp.arr,"1"))
       fprintf(fp,"%s%s%s%39s",diezcpi,condensado_on,ancho_on,"SERVICIOS DE ADMINISTRACION");
   else
       fprintf(fp,"%s%s%s%46s",diezcpi,condensado_on,ancho_on,"MATERIA PRIMA");
 }
 fprintf(fp,"%s%17s %d\n",diezcpi,"PAGINA ",con_pag);
 fprintf(fp,"%s%s%s%44s\n",diezcpi,condensado_on,ancho_on,"COMPARATIVO ANUAL");
 strorg(fechas,1,strlen(fechas));
 fprintf(fp,"%s%s%62s\n\n",enfatizado_on,fechas,enfatizado_off);
 fprintf(fp,"%s%s%s%36s",ancho_off,condensado_on,"CODIGO ","C L I E N T E / O P T I C A");
 fprintf(fp,"%168s\n",                        "      FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION     FACTURACION");
 fprintf(fp,"%s%46s",enfatizado_on," ");

 for (i=1;i<=12;i++) {
      fprintf(fp,"%14s","DEL A\\O");
 }
 fprintf(fp,"%15s\n","TOTAL");

 fprintf(fp,"%s%50s",enfatizado_on," ");

 for (i=0;i<=11;i++) {
     sprintf (cadena,"%4d",anos[i]);
     fprintf(fp,"%5s%-9s"," ",fmtnum("z,zz9",cadena,r_t));
 }

 fprintf(fp,"%s%5s\n\n",enfatizado_off," ");

 con_lin = 10;
 if (tit_ciu == 0) {
    titulo_ciudad();
    tit_ciu=1;
  }
}
