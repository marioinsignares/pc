
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
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    ".\\RESUVEN.pc"
};


static unsigned long sqlctx = 269019;


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
            void  *sqhstv[9];
   unsigned int   sqhstl[9];
            int   sqhsts[9];
            void  *sqindv[9];
            int   sqinds[9];
   unsigned int   sqharm[9];
   unsigned int   *sqharc[9];
   unsigned short  sqadto[9];
   unsigned short  sqtdso[9];
} sqlstm = {10,9};

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
"select o.codigo_cliente ,o.consecutivo ,o.numero_orden ,o.clase_material ,nv\
l(o.valor_total,0) ,nvl(e.tipo_cliente,'0') ,contado  from ordenes_c o ,client\
ese e where ((((((o.codigo_cliente=e.codigo_cliente(+) and :b0=e.numero_quince\
na(+)) and o.codigo_cliente>=:b1) and o.codigo_cliente<=:b2) and nvl(o.estado,\
0)<>'R') and o.fecha_documento>=:b3) and o.fecha_documento<=:b4) group by o.co\
digo_cliente,o.consecutivo,o.numero_orden,o.clase_material,o.valor_total,e.tip\
o_cliente,contado order by o.codigo_cliente,o.consecutivo,o.numero_orden,o.cla\
se_material,o.valor_total,e.tipo_cliente,contado            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,187,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,3,786,0,4,230,0,0,9,1,0,1,0,2,4,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,9,
0,0,2,4,0,0,2,4,0,0,1,9,0,0,
87,0,0,2,604,0,9,271,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
122,0,0,2,0,0,13,275,0,0,7,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,9,
0,0,2,9,0,0,
165,0,0,2,0,0,15,341,0,0,0,0,0,1,0,
180,0,0,4,0,0,30,343,0,0,0,0,0,1,0,
195,0,0,5,97,0,516,367,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
218,0,0,6,54,0,4,489,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
241,0,0,7,128,0,4,574,0,0,3,2,0,1,0,2,3,0,0,1,9,0,0,1,9,0,0,
268,0,0,8,126,0,4,581,0,0,3,2,0,1,0,2,3,0,0,1,9,0,0,1,9,0,0,
295,0,0,9,131,0,4,594,0,0,5,3,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
330,0,0,10,183,0,4,617,0,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
361,0,0,11,433,0,4,647,0,0,8,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,
3,0,0,2,3,0,0,1,9,0,0,
};


/*****************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* resuven.c Programa de facturacion para listar las facturacion de la quincena
*
* Uso : resuven codigo_emp tipo_cliente cliente_ini cliente_fin device
* copias userid/password
*
* Mario E. Santiago I. Creado Enero 06-1998, Modificado en Sep 09-1999.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double redondo();
void titulos();
void totales();
void totaliza( int i);
void total_fletes();
void titulo_ciudad();
void borro_totales( int i);
void acumulo_totales( int i);
void calculo_fletes();
void datos_cliente();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Ordenes (C1) */
/* VARCHAR codigo_cliente [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_cliente;

double  consecutivo;
double  numero_orden;
/* VARCHAR clase_material [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } clase_material;

double  valor_total;
/* VARCHAR tipo_cliente   [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } tipo_cliente;

/* VARCHAR contado        [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } contado;

/* VARCHAR codigo_emp     [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR codigo_emp_op  [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp_op;

/* VARCHAR numero_quincena[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } numero_quincena;

/* VARCHAR cliente_ini    [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cliente_ini;

/* VARCHAR cliente_fin    [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cliente_fin;

/* VARCHAR clase_docu     [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } clase_docu;

int     si_retefte;
int     cm_retefte;
                                 /* Fletes (C2) */
double  fletes;
/* VARCHAR cantidad_envios[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cantidad_envios;

float   ncantidad_env;
                                 /* Envios (C3) */
float   nro_despachos;
double  valor_env;
/* VARCHAR wcod           [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } wcod;

                                 /* Flestescob (C4) */
int     cob_fletes;
                                 /* Nits (C5) */
/* VARCHAR nomb_clie      [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nomb_clie;

/* VARCHAR nomb_ciu       [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciu;

/* VARCHAR direccion      [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } direccion;

double  telefono;
                                 /* Control_fac (C6) */
double  ultimo_numero;
/* VARCHAR ano_mes        [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } ano_mes;

float   ptaje_iva;
double  vencimiento;
/* VARCHAR fecha_inicial  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_inicial;

/* VARCHAR corte          [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } corte;

                                 /* Ciudades (C7) */
/* VARCHAR nomb_ciudad    [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciudad;

/* VARCHAR wciu           [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } wciu;


double  retefte;
double  monto_retefte;

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
#define A_F1 "###,###,###.##"
#define O1 " Impresion en proceso...... "
#define O2 " Recuperacion en proceso...... "

char *fmtnum(), r_t[150];
int     con_pag=0;                                 /* Contador de Paginas */
int     con_lin=66;                                /* Contador de Lineas  */
int	staora =0;
int     total_paginas;
char    copias[5];
char    wtipo_cliente[5];
char    wcontado[5];
char    fechas[200];
char    fecha[20];
double  t_fletes;
int     oraest2;

char    cadena[200];
char    wciu2[10];
int     actual=1;
float   nro_ordenes;
float   t_nro_despachos;
float   nro_ordenes_o;
float   nro_ordenes_c;
double  sub_total;
double  sub_total_o;
double  sub_total_c;
double  impue;
double  base_gravable;
double  rete_fte;
double  costo_factura;
struct acm {
            float   nro_despachos;
            double  fletes;
           };
struct acm acum[3];

struct acu {
            float   a_nro_ordenes;
            float   a_nro_despachos;
            float   a_nro_ordenes_o;
            float   a_nro_ordenes_c;
            double  a_sub_total;
            double  a_sub_total_o;
            double  a_sub_total_c;
            double  a_fletes;
            double  a_impue;
            double  a_rete_fte;
            double  a_costo_factura;
           };
struct acu vect[2];
int     pasan=0;
float   c;
char    division[2];
char    n[60];
char    n1[60];
char    n2[60];
char    formas[5];

void main(argc, argv)
int     argc;
char    *argv[];
{

char    device[10];
int	status = 0;

if (argc < 9)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : resuven codigo_emp numero_quincena\n");
    printf ("cliente_ini cliente_fin \n");
    printf ("device copias formas userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (codigo_emp.arr     , argv[1]);
codigo_emp.len      =        strlen(codigo_emp.arr);
strcpy (numero_quincena.arr, argv[2]);
numero_quincena.len =        strlen(numero_quincena.arr);
strcpy (cliente_ini.arr    , argv[3]);
cliente_ini.len     =        strlen(cliente_ini.arr);
strcpy (cliente_fin.arr    , argv[4]);
cliente_fin.len     =        strlen(cliente_fin.arr);
strcpy (device,      argv[5]);
strlow (device);
strcpy (copias,      argv[6]);
strcpy (formas,      argv[7]);

if (!strpos ("/", argv[8]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,   argv[8]);
uid.len   =        strlen(uid.arr);

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
    abre_impresora(copias);

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/

  /* EXEC SQL DECLARE C1 CURSOR FOR
        select o.codigo_cliente,
               o.consecutivo, o.numero_orden,
               o.clase_material, nvl(o.valor_total,0),
               nvl(e.tipo_cliente,'0'), contado
	from ordenes_c o, clientese e
        where o.codigo_cliente   = e.codigo_cliente(+)              and
               :numero_quincena  = e.numero_quincena(+)             and
              o.codigo_cliente  >=  :cliente_ini                    and
              o.codigo_cliente  <=  :cliente_fin                    and
              nvl(o.estado,0)   <> 'R'                              and
              o.fecha_documento >=  :fecha_inicial                  and
              o.fecha_documento <=  :corte
        group by o.codigo_cliente, o.consecutivo, o.numero_orden,
                 o.clase_material, o.valor_total, e.tipo_cliente, contado
        order by o.codigo_cliente, o.consecutivo, o.numero_orden,
                 o.clase_material, o.valor_total, e.tipo_cliente, contado; */ 


  /* EXEC SQL select ultimo_numero, ano||lpad(mes_proceso,2,0), ptaje_iva,
               to_number(to_char(to_date(
               decode(to_number(numero_quincena),
                    1,to_number(ano||lpad(mes_proceso,2,0)||15),
                    2,to_number(to_char(last_day(to_date(ano||lpad(mes_proceso,2,0),'yymm')),'yyyymmdd'))),'yymmdd')+15,'yyyymmdd')),
               to_date(
               decode(to_number(numero_quincena),
                  1,to_number(ano||lpad(mes_proceso,2,0)||lpad(1,2,0)),
                  2,to_number(ano||lpad(mes_proceso,2,0)||16)),'yyyymmdd'),
               to_date(to_char(to_date(
               decode(to_number(numero_quincena),
                  1,to_number(ano||lpad(mes_proceso,2,0)||lpad(15,2,0)),
                  2,to_number(to_char(last_day(to_date(ano||lpad(mes_proceso,2,0),'yymm')),'yyyymmdd'))),'yymmdd'),'yyyymmdd'),'yymmdd'),
                  retefte, monto_retefte
           into  :ultimo_numero, :ano_mes, :ptaje_iva,
                 :vencimiento, :fecha_inicial, :corte,
                 :retefte, :monto_retefte
           from  control_fac
           where codigo_emp    = :codigo_emp; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select ultimo_numero ,(ano||lpad(mes_proceso,2,0)) ,ptaje_i\
va ,to_number(to_char((to_date(decode(to_number(numero_quincena),1,to_number((\
(ano||lpad(mes_proceso,2,0))||15)),2,to_number(to_char(last_day(to_date((ano||\
lpad(mes_proceso,2,0)),'yymm')),'yyyymmdd'))),'yymmdd')+15),'yyyymmdd')) ,to_d\
ate(decode(to_number(numero_quincena),1,to_number(((ano||lpad(mes_proceso,2,0)\
)||lpad(1,2,0))),2,to_number(((ano||lpad(mes_proceso,2,0))||16))),'yyyymmdd') \
,to_date(to_char(to_date(decode(to_number(numero_quincena),1,to_number(((ano||\
lpad(mes_proceso,2,0))||lpad(15,2,0))),2,to_number(to_char(last_day(to_date((a\
no||lpad(mes_proceso,2,0)),'yymm')),'yyyymmdd'))),'yymmdd'),'yyyymmdd'),'yymmd\
d') ,retefte ,monto_retefte into :b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7  from control\
_fac where codigo_emp=:b8";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )36;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&ultimo_numero;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&ano_mes;
  sqlstm.sqhstl[1] = (unsigned int  )12;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&ptaje_iva;
  sqlstm.sqhstl[2] = (unsigned int  )4;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&vencimiento;
  sqlstm.sqhstl[3] = (unsigned int  )8;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&fecha_inicial;
  sqlstm.sqhstl[4] = (unsigned int  )22;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&corte;
  sqlstm.sqhstl[5] = (unsigned int  )22;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&retefte;
  sqlstm.sqhstl[6] = (unsigned int  )8;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&monto_retefte;
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
      fprintf (stderr, "Error leyendo C6 (%d)\n", sqlca.sqlcode);

  ano_mes.arr       [ano_mes.len]       = '\0';
  fecha_inicial.arr [fecha_inicial.len] = '\0';
  corte.arr         [11]                = '\0';
  ano_mes.len       = strlen(ano_mes.arr);
  fecha_inicial.len = strlen(fecha_inicial.arr);
  corte.len         = strlen(corte.arr);


  strcpy(fecha,fecha_inicial.arr);
  fecha_oracle(fecha);
  strcpy(cadena,fecha);
  strcpy(fecha,corte.arr);
  strcat(cadena," hasta ");
  fecha_oracle(fecha);
  strcat(cadena,fecha);
  strcpy(fechas,cadena);

  /* EXEC SQL OPEN C1; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = sq0002;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )87;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&numero_quincena;
  sqlstm.sqhstl[0] = (unsigned int  )7;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&cliente_ini;
  sqlstm.sqhstl[1] = (unsigned int  )12;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&cliente_fin;
  sqlstm.sqhstl[2] = (unsigned int  )12;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&fecha_inicial;
  sqlstm.sqhstl[3] = (unsigned int  )22;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&corte;
  sqlstm.sqhstl[4] = (unsigned int  )22;
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


  pasan  = 0;
  staora = 0;
  while (staora == 0) {
         /* EXEC SQL FETCH C1 INTO :codigo_cliente, :consecutivo, :numero_orden,
                                :clase_material, :valor_total, :tipo_cliente, :contado; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 9;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )122;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&codigo_cliente;
         sqlstm.sqhstl[0] = (unsigned int  )12;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)&consecutivo;
         sqlstm.sqhstl[1] = (unsigned int  )8;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&numero_orden;
         sqlstm.sqhstl[2] = (unsigned int  )8;
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (         void  *)&clase_material;
         sqlstm.sqhstl[3] = (unsigned int  )7;
         sqlstm.sqhsts[3] = (         int  )0;
         sqlstm.sqindv[3] = (         void  *)0;
         sqlstm.sqinds[3] = (         int  )0;
         sqlstm.sqharm[3] = (unsigned int  )0;
         sqlstm.sqadto[3] = (unsigned short )0;
         sqlstm.sqtdso[3] = (unsigned short )0;
         sqlstm.sqhstv[4] = (         void  *)&valor_total;
         sqlstm.sqhstl[4] = (unsigned int  )8;
         sqlstm.sqhsts[4] = (         int  )0;
         sqlstm.sqindv[4] = (         void  *)0;
         sqlstm.sqinds[4] = (         int  )0;
         sqlstm.sqharm[4] = (unsigned int  )0;
         sqlstm.sqadto[4] = (unsigned short )0;
         sqlstm.sqtdso[4] = (unsigned short )0;
         sqlstm.sqhstv[5] = (         void  *)&tipo_cliente;
         sqlstm.sqhstl[5] = (unsigned int  )5;
         sqlstm.sqhsts[5] = (         int  )0;
         sqlstm.sqindv[5] = (         void  *)0;
         sqlstm.sqinds[5] = (         int  )0;
         sqlstm.sqharm[5] = (unsigned int  )0;
         sqlstm.sqadto[5] = (unsigned short )0;
         sqlstm.sqtdso[5] = (unsigned short )0;
         sqlstm.sqhstv[6] = (         void  *)&contado;
         sqlstm.sqhstl[6] = (unsigned int  )5;
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
         if (staora == -1405)
             staora  = 0;
         else if (staora)
                  fprintf (stderr, "Error leyendo C1 (%d)\n", staora);

         codigo_cliente.arr [codigo_cliente.len] = '\0';
         clase_material.arr [clase_material.len] = '\0';
         tipo_cliente.arr   [tipo_cliente.len]   = '\0';
         contado.arr        [contado.len]        = '\0';

         if (pasan == 0) {
             pasan  = 1;
             strcpy(wcod.arr,codigo_cliente.arr);
             strcpy(wciu.arr,codigo_cliente.arr);
             strcpy(wtipo_cliente,tipo_cliente.arr);
             strcpy(wcontado,contado.arr);
             strorg(wciu.arr,1,2);
            }
         if (strcmp(wcod.arr,codigo_cliente.arr))
            {
             totales();
             strcpy(wciu2,codigo_cliente.arr);
             strorg(wciu2,1,2);
             if (strcmp(wciu2,wciu.arr))
                {
                 strcpy(cadena,"TOTAL CIUDAD");
                 totaliza(0);
                 strcpy(wciu.arr,codigo_cliente.arr);
                 strorg(wciu.arr,1,2);
                 if (con_lin > 58)
                    titulos();
                 titulo_ciudad();
                }
            }
         if (!strcmp(clase_material.arr,"C"))
            {
             strcpy(division,"2");
             sub_total_c+=valor_total;
             nro_ordenes_c++;
            }
         else
            {
             strcpy(division,"1");
             sub_total_o+=valor_total;
             nro_ordenes_o++;
            }
      }

  if (con_lin > 56)
     titulos();
  totales();
  strcpy(cadena,"TOTAL CIUDAD");
  totaliza(0);
  strcpy(wciu.arr,codigo_cliente.arr);
  strorg(wciu.arr,1,2);
  strcpy(cadena,"TOTALES GENERALES");
  totaliza(1);
  total_fletes();

  cierre_impresora();

  /* EXEC SQL CLOSE C1; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )165;
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
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )180;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  exit   (0);
}

void totales()
{
 int i;
 calculo_fletes();
 if (valor_env == 0)
    {
     if (c >= 1 && c <= 1.5)
        fletes=nro_despachos*fletes*cob_fletes;
     else fletes=nro_ordenes*fletes*cob_fletes;
    }
 sub_total=sub_total_o+sub_total_c;
 impue=0;
 if(!strcmp(wtipo_cliente,"0"))
    impue=((sub_total+fletes)*ptaje_iva)/100;
 impue=redondo(impue);

 base_gravable = sub_total+fletes;
 datos_cliente();
 /* EXEC ORACLE OPTION (RELEASE_CURSOR=YES); */ 

 /* EXEC SQL select codigo_emp
          into  :codigo_emp_op
          from opticasp
          where codigo_cliente = :wcod and
                codigo_emp is not null; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select codigo_emp into :b0  from opticasp where (codigo_clie\
nte=:b1 and codigo_emp is  not null )";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )195;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo_emp_op;
 sqlstm.sqhstl[0] = (unsigned int  )7;
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


 oraest2  = sqlca.sqlcode;
// printf("%s %s %s %9.0f %9.0f",wcontado,tipo_cliente.arr,clase_docu.arr, base_gravable, monto_retefte); getchar();
 if(strcmp(wcontado,"1")) {
    if(!strcmp(wtipo_cliente,"0")) {
       rete_fte = 0;
     //printf("wcod<%s> oraest2<%d>",wcod.arr,oraest2); getchar();
//     if (!strcmp(clase_docu.arr,"N")) {  //Para las opticas propias debe calcular la Retefuente por cualquier monto
       if (si_retefte == 1) {
          if (base_gravable >= monto_retefte || cm_retefte == 1 || oraest2 == 0 || oraest2 ==  -1405 ) {
              rete_fte = base_gravable*retefte/100;
              rete_fte = redondo( rete_fte );
          }
       }
//     }
    }
 }
 costo_factura=base_gravable+impue-rete_fte; //Total factura
 /* EXEC ORACLE OPTION (RELEASE_CURSOR=NO); */ 


 if (con_lin > 60)
    titulos();
 fprintf(fp,"%-7s",wcod.arr);
 fprintf(fp,"%-39s",nomb_clie.arr);
 sprintf(cadena,"%6.0f",nro_ordenes_o);
 fprintf(fp,"%3s",fmtnum("zz9",cadena,r_t));
 sprintf(cadena,"%6.2f",sub_total_o);
 fprintf(fp,"%15s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf(cadena,"%6.0f",nro_ordenes_c);
 fprintf(fp,"%9s",fmtnum("zz9",cadena,r_t));
 sprintf(cadena,"%6.2f",sub_total_c);
 fprintf(fp,"%14s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf(cadena,"%6.0f",nro_despachos);
 fprintf(fp,"%9s",fmtnum("zz9",cadena,r_t));
 sprintf(cadena,"%6.2f",fletes);
 fprintf(fp,"%16s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf (cadena,"%8.2f",impue);
 fprintf(fp,"%16s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf (cadena,"%7.0f",rete_fte);
 fprintf(fp,"%10s",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf (cadena,"%6.2f",costo_factura);
 fprintf(fp,"%16s\n",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 con_lin+=1;
 for (i=0;i<=1;++i)
     acumulo_totales(i);
 strcpy(wcod.arr,codigo_cliente.arr);
 strcpy(wtipo_cliente,tipo_cliente.arr);
 strcpy(wcontado,contado.arr);
 sub_total=0;
 sub_total_o=0;
 sub_total_c=0;
 nro_ordenes_o=0;
 nro_ordenes_c=0;
 nro_despachos=0;
 fletes=0;
 rete_fte=0;
 costo_factura=0;
 total_paginas=0;
}

void totaliza(i)
int i;
{
 if (con_lin > 60)
    titulos();
 fprintf(fp,"\n%-7s"," ");
 fprintf(fp,"%s%s%-18s%s%s",enfatizado_on,ancho_on,cadena,enfatizado_off,ancho_off);
 sprintf(cadena,"%6.0f",vect[i].a_nro_ordenes_o);
 fprintf(fp,"%6s",fmtnum("z,zz9",cadena,r_t));
 sprintf(cadena,"%6.2f",vect[i].a_sub_total_o);
 fprintf(fp,"%15s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf(cadena,"%6.0f",vect[i].a_nro_ordenes_c);
 fprintf(fp,"%9s",fmtnum("z,zz9",cadena,r_t));
 sprintf(cadena,"%6.2f",vect[i].a_sub_total_c);
 fprintf(fp,"%14s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf(cadena,"%6.0f",vect[i].a_nro_despachos);
 fprintf(fp,"%9s",fmtnum("z,zz9",cadena,r_t));
 sprintf(cadena,"%6.2f",vect[i].a_fletes);
 fprintf(fp,"%16s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf (cadena,"%6.2f",vect[i].a_impue);
 fprintf(fp,"%16s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf (cadena,"%6.2f",vect[i].a_rete_fte);
 fprintf(fp,"%10s",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf (cadena,"%6.2f",vect[i].a_costo_factura);
 fprintf(fp,"%16s\n",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 con_lin+=2;
 borro_totales(i);
}

void total_fletes()
{
/* strcpy(cadena,"TOTAL FLETES SERVICOMERCIALES");
 fprintf(fp,"\n%s%s%-40s%s",enfatizado_on,diezcpi,cadena,enfatizado_off);
 sprintf(cadena,"%6.0f",acum[0].nro_despachos);
 fprintf(fp,"%9s",fmtnum("z,zz9",cadena,r_t));
 sprintf(cadena,"%6.2f",acum[0].fletes);
 fprintf(fp,"%16s\n",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 strcpy(cadena,"TOTAL FLETES OTRAS RUTAS");
 fprintf(fp,"\n%s%-40s%s",enfatizado_on,cadena,enfatizado_off);
 sprintf(cadena,"%6.0f",acum[1].nro_despachos);
 fprintf(fp,"%9s",fmtnum("z,zz9",cadena,r_t));
 sprintf(cadena,"%6.2f",acum[1].fletes);
 fprintf(fp,"%16s\n",fmtnum("zzz,zzz,zz9.99",cadena,r_t)); */
 strcpy(cadena,"TOTAL FLETES COBRADOS");
 fprintf(fp,"\n%s%-40s%s",enfatizado_on,cadena,enfatizado_off);
 sprintf(cadena,"%6.0f",acum[2].nro_despachos);
 fprintf(fp,"%9s",fmtnum("z,zz9",cadena,r_t));
 sprintf(cadena,"%6.2f",acum[2].fletes);
 fprintf(fp,"%16s\n",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
/* fprintf(fp,"\n%s%s\n",enfatizado_on,"TOTAL PAGADO SERVICOMERCIALES _________________");
fprintf(fp,"\n%s\n","TOTAL PAGADO OTRAS RUTAS      _________________"); */
 fprintf(fp,"\n%s%s\n","TOTAL FLETES PAGADOS          _________________",enfatizado_off);
 con_lin+=17;
}

void titulo_ciudad()
{
 wciu.len =   strlen(wciu.arr);
 /* EXEC SQL select nombre into :nomb_ciudad
          from   ciudades
          where  codigo = :wciu; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select nombre into :b0  from ciudades where codigo=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )218;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nomb_ciudad;
 sqlstm.sqhstl[0] = (unsigned int  )32;
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
     fprintf (stderr, "Error leyendo C7 (%d)\n", sqlca.sqlcode);

 nomb_ciudad.arr   [nomb_ciudad.len] = '\0';
 fprintf(fp,"\n%s%16s%s%s%s%s\n\n",enfatizado_on,ancho_on,"CIUDAD ",nomb_ciudad.arr,ancho_off,enfatizado_off);
 con_lin+=3;
}

void borro_totales(i)
int i;
{
 vect[i].a_nro_ordenes_o=0;
 vect[i].a_sub_total_o  =0;
 vect[i].a_nro_ordenes_c=0;
 vect[i].a_sub_total_c  =0;
 vect[i].a_nro_despachos=0;
 vect[i].a_fletes       =0;
 vect[i].a_impue        =0;
 vect[i].a_rete_fte     =0;
 vect[i].a_costo_factura=0;
}

void acumulo_totales(i)
int i;
{
 vect[i].a_nro_ordenes_o+=nro_ordenes_o;
 vect[i].a_sub_total_o  +=sub_total_o;
 vect[i].a_nro_ordenes_c+=nro_ordenes_c;
 vect[i].a_sub_total_c  +=sub_total_c;
 vect[i].a_nro_despachos+=nro_despachos;
 vect[i].a_fletes       +=fletes;
 vect[i].a_impue        +=impue;
 vect[i].a_rete_fte     +=rete_fte;
 vect[i].a_costo_factura+=costo_factura;
 if (i == 0)
    {
    if (!strcmp(wciu.arr,"BG")||!strcmp(wciu.arr,"CL")||
        !strcmp(wciu.arr,"SM")||!strcmp(wciu.arr,"MD")||
        !strcmp(wciu.arr,"CG"))
       {
        acum[0].nro_despachos  +=nro_despachos;
        acum[0].fletes         +=fletes;
       }
    else
       {
        acum[1].nro_despachos  +=nro_despachos;
        acum[1].fletes         +=fletes;
       }
    acum[2].nro_despachos  +=nro_despachos;
    acum[2].fletes         +=fletes;
    }
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 con_pag++;
 if (con_pag != 1)
     fprintf(fp,"%s",salte_pagina);
 fprintf(fp,"%s%s%s%44s",diezcpi,condensado_on,ancho_on,"RESUMEN DE VENTAS PARA PRUEBA");
 fprintf(fp,"%s%s%17s %d\n\n",ancho_off,diezcpi,"PAGINA ",con_pag);
 strorg(fechas,1,strlen(fechas));
 fprintf(fp,"%s%62s%s\n\n",enfatizado_on,fechas,enfatizado_off);
 fprintf(fp,"%s%40s",condensado_on,"C L I E N T E / O P T I C A");
 fprintf(fp,"%46s\n","DIVISION OFTALMICA    DIVISION DE CONTACTO");
 fprintf(fp,"%s%156s\n",enfatizado_on,"NUMERO VALOR ORDENES  NUMERO VALOR ORDENES     NUMERO   VALOR DESPACHOS    IMPOVENTAS    RETE  VALOR FACTURACION");
 fprintf(fp,"%s%110s     %2.0f %%%14s%s%s\n\n","CODIGO","ORDENES  VENTA NETA   ORDENES VENTA NETA     DESPACHOS FLETES Y EMPAQUES",ptaje_iva,"  FUENTE  ","TOTAL VENTA",enfatizado_off);
 if (con_pag == 1)
    titulo_ciudad();
 con_lin = 9;
}

void calculo_fletes()
{
 /**** Veo si tiene fletes ****/

 wcod.len =   strlen(wcod.arr);
 /* EXEC SQL select to_number(decode(si_no,'S','1','N','0','1'))
          into :cob_fletes
          from  fletescob
          where codigo_cli_may >= :wcod and
                codigo_cli_men <= :wcod; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select to_number(decode(si_no,'S','1','N','0','1')) into :b0\
  from fletescob where (codigo_cli_may>=:b1 and codigo_cli_men<=:b1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )241;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&cob_fletes;
 sqlstm.sqhstl[0] = (unsigned int  )4;
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
 sqlstm.sqhstv[2] = (         void  *)&wcod;
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



 if (sqlca.sqlcode == -2112) {
     /* EXEC SQL select to_number(decode(si_no,'S','1','N','0','1'))
              into :cob_fletes
              from  fletescob
              where codigo_cli_may = :wcod and
                    codigo_cli_men = :wcod; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 9;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select to_number(decode(si_no,'S','1','N','0','1')) into\
 :b0  from fletescob where (codigo_cli_may=:b1 and codigo_cli_men=:b1)";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )268;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&cob_fletes;
     sqlstm.sqhstl[0] = (unsigned int  )4;
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
     sqlstm.sqhstv[2] = (         void  *)&wcod;
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


 }
 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo C4 (%d)\n", sqlca.sqlcode);
 else if (sqlca.sqlcode == 1403)
          cob_fletes=0;

 /**** Veo los envios ****/

 /* EXEC SQL select nvl(cantidad,0), nvl(valor,0)
          into :nro_despachos, :valor_env
          from  envios
          where codigo_cliente  = :wcod            and
                ano_mes         = :ano_mes         and
                numero_quincena = :numero_quincena; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select nvl(cantidad,0) ,nvl(valor,0) into :b0,:b1  from envi\
os where ((codigo_cliente=:b2 and ano_mes=:b3) and numero_quincena=:b4)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )295;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nro_despachos;
 sqlstm.sqhstl[0] = (unsigned int  )4;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&valor_env;
 sqlstm.sqhstl[1] = (unsigned int  )8;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&wcod;
 sqlstm.sqhstl[2] = (unsigned int  )12;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&ano_mes;
 sqlstm.sqhstl[3] = (unsigned int  )12;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&numero_quincena;
 sqlstm.sqhstl[4] = (unsigned int  )7;
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



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo C3 (%d)\n", sqlca.sqlcode);

 if (sqlca.sqlcode == 1403) {
     valor_env=-1;
 }

 if (valor_env == 0)
    {
     nro_ordenes=nro_ordenes_c+nro_ordenes_o;
     c=nro_ordenes/nro_despachos;
     sprintf(cantidad_envios.arr,"%2.2f",c);
     cantidad_envios.len = strlen(cantidad_envios.arr);

     cantidad_envios.arr[strpos(".",cantidad_envios.arr)-1] = ',';

     /* EXEC SQL select nvl(valor,0) into :fletes
              from  fletes
              where cantidad_mayor >= to_number(:cantidad_envios) and
                    cantidad_menor <= to_number(:cantidad_envios) and
                    fecha = (select max(f.fecha)
                             from   fletes f
                             where  f.fecha <= :corte); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 9;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select nvl(valor,0) into :b0  from fletes where ((cantid\
ad_mayor>=to_number(:b1) and cantidad_menor<=to_number(:b1)) and fecha=(select\
 max(f.fecha)  from fletes f where f.fecha<=:b3))";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )330;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&fletes;
     sqlstm.sqhstl[0] = (unsigned int  )8;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&cantidad_envios;
     sqlstm.sqhstl[1] = (unsigned int  )12;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqhstv[2] = (         void  *)&cantidad_envios;
     sqlstm.sqhstl[2] = (unsigned int  )12;
     sqlstm.sqhsts[2] = (         int  )0;
     sqlstm.sqindv[2] = (         void  *)0;
     sqlstm.sqinds[2] = (         int  )0;
     sqlstm.sqharm[2] = (unsigned int  )0;
     sqlstm.sqadto[2] = (unsigned short )0;
     sqlstm.sqtdso[2] = (unsigned short )0;
     sqlstm.sqhstv[3] = (         void  *)&corte;
     sqlstm.sqhstl[3] = (unsigned int  )22;
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


//     printf ("nro_despachos %f nro_ordenes_c %d nro_ordenes_o %d cantidad_envios %s corte %s fletes %f\n", nro_despachos, nro_ordenes_c, nro_ordenes_o, cantidad_envios.arr, corte.arr, fletes ); getchar();
     if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
         fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);
         sqlca.sqlcode = 0;
     }
    }
 else
     if (valor_env == -1)
        {
         nro_ordenes=1;
         fletes=valor_env=0;
        }
     else
        {
         nro_ordenes=1;
         fletes=valor_env;
        }
}

void datos_cliente()
{
    wcod.len =   strlen(wcod.arr);

    /* EXEC SQL select n.nombre, c.nombre, n.direccion, max(nvl(t.numero,0)), n.clase_docu, si_retefte, cm_retefte
             into :nomb_clie, :nomb_ciu, :direccion, :telefono, :clase_docu, :si_retefte, :cm_retefte
             from nits n, clientes cl, telefonos t, ciudades c
             where n.codigo_nit     = cl.codigo_nit               and
                    :wcod           = cl.codigo_cliente           and
                   n.codigo_ciu     = c.codigo                    and
                   n.codigo_nit     = t.codigo_nit(+)
             group by n.nombre, c.nombre, n.direccion, n.clase_docu, si_retefte, cm_retefte
             order by n.nombre, c.nombre, n.direccion, n.clase_docu; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select n.nombre ,c.nombre ,n.direccion ,max(nvl(t.numero,\
0)) ,n.clase_docu ,si_retefte ,cm_retefte into :b0,:b1,:b2,:b3,:b4,:b5,:b6  fr\
om nits n ,clientes cl ,telefonos t ,ciudades c where (((n.codigo_nit=cl.codig\
o_nit and :b7=cl.codigo_cliente) and n.codigo_ciu=c.codigo) and n.codigo_nit=t\
.codigo_nit(+)) group by n.nombre,c.nombre,n.direccion,n.clase_docu,si_retefte\
,cm_retefte order by n.nombre,c.nombre,n.direccion,n.clase_docu ";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )361;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_clie;
    sqlstm.sqhstl[0] = (unsigned int  )62;
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
    sqlstm.sqhstv[2] = (         void  *)&direccion;
    sqlstm.sqhstl[2] = (unsigned int  )62;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&telefono;
    sqlstm.sqhstl[3] = (unsigned int  )8;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&clase_docu;
    sqlstm.sqhstl[4] = (unsigned int  )7;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&si_retefte;
    sqlstm.sqhstl[5] = (unsigned int  )4;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&cm_retefte;
    sqlstm.sqhstl[6] = (unsigned int  )4;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (         void  *)&wcod;
    sqlstm.sqhstl[7] = (unsigned int  )12;
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



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo C5 (%d)\n", sqlca.sqlcode);

    nomb_clie.arr   [nomb_clie.len]  = '\0';
    nomb_ciu.arr    [nomb_ciu.len]   = '\0';
    direccion.arr   [direccion.len]  = '\0';
    clase_docu.arr  [clase_docu.len] = '\0';
    strorg(nomb_clie.arr,1,39);
}
