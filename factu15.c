
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
    ".\\factu15.pc"
};


static const unsigned long sqlctx = 1220027691;


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

 static const char *sq0003 = 
"ad(cf.mes_proceso,2,0)),'yymm'),'yyyymm')||15)),2,to_number(to_char(last_day\
(to_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yymm')),'yyyymmdd')))) and to_num\
ber(to_char(o.fecha_control,'yyyymmdd'))>=decode(to_number(:b3),1,to_number((t\
o_char(to_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yymm'),'yyyymm')||lpad(1,2,\
0))),2,to_number((to_char(to_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yymm'),'\
yyyymm')||16)))) group by o.codigo_cliente,o.consecutivo,o.numero_orden,o.clas\
e_material,o.valor_total,cf.numero_quincena,cf.ptaje_iva,cf.ano,cf.mes_proceso\
           ";
 static const char *sq0004 = 
"select to_number(decode(si_no,'S','1','N','0','1'))  from fletescob where (c\
odigo_cli_may>=:b0 and codigo_cli_men<=:b0)           ";
 static const char *sq0005 = 
"select to_char(fecha_vencmto,'yyyymmdd') ,saldo  from facturam fm ,facturas \
f where ((((((((((f.tipo_factura=:b0 and f.codigo_cliente=:b1) and f.fecha_doc\
umento<=sysdate ) and f.estado_factura=0) and f.estado_cartera=0) and f.valor_\
neto>0) and f.contado is null ) and fm.tipo_factura=f.tipo_factura) and fm.tip\
o_documento=f.tipo_documento) and fm.numero_factura=f.numero_factura) and fm.a\
no_mes=(select max(ano_mes)  from facturam where ((((facturam.tipo_factura=:b0\
 and facturam.tipo_documento=f.tipo_documento) and facturam.tipo_documento<>'C\
') and facturam.numero_factura=f.numero_factura) and facturam.ano_mes<=:b3))) \
          ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,235,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,36,0,4,259,0,1,0,0,1,0,2,9,0,0,
46,0,0,3,1579,0,9,301,0,9,9,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,9,0,0,1,9,0,0,1,9,0,0,
96,0,0,3,0,0,13,302,0,8,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,3,0,
0,2,9,0,0,2,9,0,0,
142,0,0,6,132,0,4,347,0,3,1,0,1,0,2,9,0,0,2,9,0,0,1,9,0,0,
168,0,0,3,0,0,13,450,0,8,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,3,0,
0,2,9,0,0,2,9,0,0,
214,0,0,7,65,0,5,467,0,1,1,0,1,0,1,9,0,0,
232,0,0,3,0,0,15,478,0,0,0,0,1,0,
246,0,0,5,0,0,15,479,0,0,0,0,1,0,
260,0,0,8,0,0,30,481,0,0,0,0,1,0,
274,0,0,9,378,0,4,493,0,7,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,3,
0,0,1,9,0,0,
316,0,0,10,94,0,4,520,0,4,1,0,1,0,2,4,0,0,2,3,0,0,2,3,0,0,1,9,0,0,
346,0,0,11,903,0,4,552,0,9,8,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,9,0,0,1,9,0,0,1,9,0,0,
396,0,0,12,136,0,4,670,0,3,2,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,
422,0,0,13,557,0,5,690,0,15,15,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
496,0,0,14,100,0,5,731,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
518,0,0,15,616,0,3,751,0,17,17,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,
600,0,0,16,122,0,4,824,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
630,0,0,17,131,0,4,985,0,4,2,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,
660,0,0,4,130,0,9,1005,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
682,0,0,4,0,0,13,1006,0,1,0,0,1,0,2,3,0,0,
700,0,0,4,0,0,15,1012,0,0,0,0,1,0,
714,0,0,18,286,0,4,1019,0,4,2,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,
744,0,0,19,405,0,4,1042,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
778,0,0,5,632,0,9,1105,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
808,0,0,5,0,0,13,1109,0,2,0,0,1,0,2,9,0,0,2,4,0,0,
};


/*****************************************************************
* FACTURAS.C Version 1.1 - Rev 1.3 - Nov. 8/91.
* FACTURAS.C Version 2.0 - Rev 1.0 - Jul. 21/93.
* FACTURAS.C Version 2.1 - Rev 1.1 - Abr. 18/95.
* FACTURAS.C Version 3.0 - Rev 1.0 - Feb. 17/98.
* FACTURAS.C Version 3.1 - Rev 1.1 - Sep. 10/99.
*
* facturas.c Programa de facturacion para listar las facturas de la quincena
*
* Uso : facturas codigo_emp tipo_cliente cliente_ini cliente_fin device
* copias userid/password
*
* Mario E. Santiago I. Creado Junio 21-1990.
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
void busco_cliente();
void busco_nro_factura();
void busco_total_hojas();
void totales();
void borro_acumulados();
void actualizo_facturas();
void actualizo_clientem();
void voy_mes_anterior();
void voy_ins_climan();
void voy_ins_clim();
void voy_actu_clim();
void titulos();
void calculo_desctos();
void calculo_fletes();
void pie_factura();
void imprime_vencmtos();
void acum_facturas();
void calcula_dias();
void numero_fecha();
void voy_actu_clim_rv();
void mover_datos_factura();
void numero_fechaj();
void monletr();


/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

/* VARCHAR codigo_emp[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

int     a2k;
double  nit;
/* VARCHAR tipo_cliente[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } tipo_cliente;

/* VARCHAR cliente_ini[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cliente_ini;

/* VARCHAR cliente_fin[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cliente_fin;

/* VARCHAR codigo_cliente[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_cliente;

/* VARCHAR nomb_clie[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nomb_clie;

/* VARCHAR nomb_ciu[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciu;

/* VARCHAR direccion[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } direccion;

double  consecutivo;
double  numero_orden;
/* VARCHAR clase_material[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } clase_material;

double  valor_total;
double  ultimo_numero;
/* VARCHAR numero_factura[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } numero_factura;

double  telefono;
int     mes_proceso;
int     ptaje_iva;
/* VARCHAR fecha_vencmto[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_vencmto;

/* VARCHAR vencimiento[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vencimiento;

/* VARCHAR fecha_corte[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_corte;

/* VARCHAR fechafac[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechafac;


double  ptaje_oftal;
double  ptaje_conta;
double  total_descto;
float   total_paginas=99;
/* VARCHAR total_pag_c[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } total_pag_c;

double  valor_env;
int     cob_fletes;
/* VARCHAR nomb_emp[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nomb_emp;

/* VARCHAR direccion_emp[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } direccion_emp;

/* VARCHAR cantidad_envios[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cantidad_envios;

/* VARCHAR wcod[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } wcod;

float   nro_despachos;
double  costo_factura_an;
int     digito;
/* VARCHAR ultimo_numero_c[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } ultimo_numero_c;

/* VARCHAR codigo_cliente_c[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_cliente_c;

/* VARCHAR fecha_corte_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_corte_c;

/* VARCHAR fecha_vencmto_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_vencmto_c;

/* VARCHAR nro_ordenes_oc[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } nro_ordenes_oc;

/* VARCHAR nro_ordenes_cc[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } nro_ordenes_cc;

/* VARCHAR nro_despachos_c[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } nro_despachos_c;

/* VARCHAR sub_total_oc[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } sub_total_oc;

/* VARCHAR sub_total_cc[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } sub_total_cc;

/* VARCHAR total_descto_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } total_descto_c;

/* VARCHAR fletes_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fletes_c;

/* VARCHAR valor_iva_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } valor_iva_c;

/* VARCHAR ptaje_iva_c[9]; */ 
struct { unsigned short len; unsigned char arr[9]; } ptaje_iva_c;

/* VARCHAR costo_factura_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } costo_factura_c;

/* VARCHAR tipo_cliente_c[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } tipo_cliente_c;

/* VARCHAR ano_mes_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes_c;

/* VARCHAR ano_mes[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR valor_pagos_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } valor_pagos_c;

/* VARCHAR numero_quincena[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } numero_quincena;

/* VARCHAR orden[12]; */ 
struct { unsigned short len; unsigned char arr[12]; } orden;

int     ano;
double  saldo_cliente;
double  saldo_factura;
double  fletes;

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


                                            /* Variables globales del usuario */
#define A_F1 "###,###,###.##"
#define O1 " Impresion en proceso...... "
#define O2 " Recuperacion en proceso...... "
#define L1 "- El Comprador ha recibido de conformidad las mercanci\b'as descritas en las remisiones enunciadas en esta Factura y acepta"
#define L2 "  el valor estipulado en la misma."
#define L3 "- Esta Factura se asimila a la Letra de Cambio segu\b'n el Arti\b'culo 774 del Co\b'digo de Comercio."
#define L4 "- Esta Factura debera\b' cancelarse dentro de los quince (15) di\b'as calendario posteriores a la fecha de facturacio\b'n."

char *fmtnum(), r_t[100];
int     con_pag;                                   /* Contador de Paginas */
int     con_lin;                                   /* Contador de Lineas  */
char    copias[6];
                          /* Variables de recepcion para datos */
char    fecha_corte2[20];
char    fecha_cor[20];
char    tit[100];
char    cadena[255];
char    cadena2[100];
int     actual=1;
int     nro_ordenes;
int     nro_ordenes_o;
double  sub_total;
double  sub_total_o;
double  sub_total_c;
double  sub_total;
double  costo_factura;
double  saldo_factura;
double  impue;
int     nro_ordenes_c;
double  costo_factura;
int     pasan=0;
float   c;
char    division[5];
char    n[100];
char    n1[100];
char    n2[100];
char    formas[5];
double  total_deuda;
double  por_vencer;
double  a_30_dias;
double  a_60_dias;
double  a_90_dias;
double  a_120_dias;
double  total_dias;
int     w_dia_corte;
int     dia_corte;
int     w_mes_corte;
int     mes_corte;
int     w_ano_corte;
int     ano_corte;
int     dia_vencmto;
int     mes_vencmto;
int     ano_vencmto;
int     total_tiempo_dia;
int     total_tiempo_mes;
int     total_tiempo_ano;
int     oraest;
int     oraest4;

void main(argc, argv)
int     argc;
char    *argv[];
{

char device[6];
int     i;
int status = 0;

if (argc < 10)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : facturas codigo_emp tipo_cliente numero_quincena\n");
    printf ("cliente_ini cliente_fin numero_factura Nro.Orden(una) Fecha_Factura(DD-MON-YYYY)\n");
    printf ("device copias formas userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (codigo_emp.arr, argv[1]);
codigo_emp.len      =   strlen(codigo_emp.arr);
strcpy (tipo_cliente.arr,argv[2]);
tipo_cliente.len    =   strlen(tipo_cliente.arr);
strcpy (numero_quincena.arr,argv[3]);
numero_quincena.len =   strlen(numero_quincena.arr);
strcpy (cliente_ini.arr, argv[4]);
cliente_ini.len     =   strlen(cliente_ini.arr);
strcpy (cliente_fin.arr, argv[5]);
cliente_fin.len     =   strlen(cliente_fin.arr);
strcpy (numero_factura.arr, argv[6]);
numero_factura.len  =   strlen(numero_factura.arr);
strcpy (orden.arr, argv[7]);
orden.len  =   strlen(orden.arr);
strcpy (fechafac.arr, argv[8]);
fechafac.len  =   strlen(fechafac.arr);
strcpy (device,      argv[9]);
strlow (device);
strcpy (copias,      argv[10]);
strcpy (formas,      argv[11]);

if (!strpos ("/", argv[12]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,    argv[12]);
uid.len     = strlen(uid.arr);

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
    /* EXEC SQL select sysdate
             into   :ano_mes
             from   dual; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.stmt = "select sysdate  into :b0  from dual ";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)28;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&ano_mes;
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


    ano_mes.len    =       strlen(ano_mes.arr);

/* C1 */
   /* EXEC SQL DECLARE C1 CURSOR FOR
        select o.codigo_cliente,
               o.consecutivo, o.numero_orden,
               o.clase_material, o.valor_total,
               cf.ptaje_iva,
               to_date(
               decode(cf.numero_quincena,
                      1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||15),
                      2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd'))),'yymmdd')+15,
               to_date(to_char(to_date(
               decode(cf.numero_quincena,
                      1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||15),
                      2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd'))),'yymmdd'),'yyyymmdd'),'yymmdd')
        from ordenes_c o, clientese e, control_fac cf
        where to_number(:codigo_emp) = nvl(e.codigo_emp,1)           and
              to_number(:codigo_emp) = cf.codigo_emp                 and
              o.codigo_cliente = e.codigo_cliente(+)                 and
              (:tipo_cliente)  = nvl(e.tipo_cliente,'0')             and
              to_number(:numero_quincena)    = e.numero_quincena(+)  and
              (:cliente_ini)  <= o.codigo_cliente                    and
              (:cliente_fin)  >= o.codigo_cliente                    and
              nvl(o.estado,0) <> 'R'                                 and
              nvl(o.contado,0) = 0                                   and
              o.numero_orden   = :orden                              and
              to_number(to_char(o.fecha_control,'yyyymmdd')) <=
              decode(to_number(:numero_quincena),
                     1,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm'),'yyyymm')||15),
                     2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd'))) and
              to_number(to_char(o.fecha_control,'yyyymmdd')) >=
              decode(to_number(:numero_quincena),
                    1,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm'),'yyyymm')||lpad(1,2,0)),
                    2,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm'),'yyyymm')||16))
        group by o.codigo_cliente,
                o.consecutivo, o.numero_orden, o.clase_material, o.valor_total,
                cf.numero_quincena, cf.ptaje_iva, cf.ano, cf.mes_proceso; */ 


   /* EXEC SQL OPEN C1; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 9;
   sqlbuft((void **)0, 
     "select o.codigo_cliente ,o.consecutivo ,o.numero_orden ,o.clase_materi\
al ,o.valor_total ,cf.ptaje_iva ,(to_date(decode(cf.numero_quincena,1,to_num\
ber(((cf.ano||lpad(cf.mes_proceso,2,0))||15)),2,to_number(to_char(last_day(t\
o_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yymm')),'yyyymmdd'))),'yymmdd')+1\
5) ,to_date(to_char(to_date(decode(cf.numero_quincena,1,to_number(((cf.ano||\
lpad(cf.mes_proceso,2,0))||15)),2,to_number(to_char(last_day(to_date((cf.ano\
||lpad(cf.mes_proceso,2,0)),'yymm')),'yyyymmdd'))),'yymmdd'),'yyyymmdd'),'yy\
mmdd')  from ordenes_c o ,clientese e ,control_fac cf where (((((((((((to_nu\
mber(:b0)=nvl(e.codigo_emp,1) and to_number(:b0)=cf.codigo_emp) and o.codigo\
_cliente=e.codigo_cliente(+)) and :b2=nvl(e.tipo_cliente,'0')) and to_number\
(:b3)=e.numero_quincena(+)) and :b4<=o.codigo_cliente) and :b5>=o.codigo_cli\
ente) and nvl(o.estado,0)<>'R') and nvl(o.contado,0)=0) and o.numero_orden=:\
b6) and to_number(to_char(o.fecha_control,'yyyymmdd'))<=decode(to_number(:b3\
),1,to_number((to_char(to_date((cf.ano||lp");
   sqlstm.stmt = sq0003;
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)46;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
   sqlstm.sqhstl[0] = (unsigned long  )7;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
   sqlstm.sqhstl[1] = (unsigned long  )7;
   sqlstm.sqindv[1] = (         short *)0;
   sqlstm.sqharm[1] = (unsigned long )0;
   sqlstm.sqhstv[2] = (unsigned char  *)&tipo_cliente;
   sqlstm.sqhstl[2] = (unsigned long  )7;
   sqlstm.sqindv[2] = (         short *)0;
   sqlstm.sqharm[2] = (unsigned long )0;
   sqlstm.sqhstv[3] = (unsigned char  *)&numero_quincena;
   sqlstm.sqhstl[3] = (unsigned long  )7;
   sqlstm.sqindv[3] = (         short *)0;
   sqlstm.sqharm[3] = (unsigned long )0;
   sqlstm.sqhstv[4] = (unsigned char  *)&cliente_ini;
   sqlstm.sqhstl[4] = (unsigned long  )12;
   sqlstm.sqindv[4] = (         short *)0;
   sqlstm.sqharm[4] = (unsigned long )0;
   sqlstm.sqhstv[5] = (unsigned char  *)&cliente_fin;
   sqlstm.sqhstl[5] = (unsigned long  )12;
   sqlstm.sqindv[5] = (         short *)0;
   sqlstm.sqharm[5] = (unsigned long )0;
   sqlstm.sqhstv[6] = (unsigned char  *)&orden;
   sqlstm.sqhstl[6] = (unsigned long  )14;
   sqlstm.sqindv[6] = (         short *)0;
   sqlstm.sqharm[6] = (unsigned long )0;
   sqlstm.sqhstv[7] = (unsigned char  *)&numero_quincena;
   sqlstm.sqhstl[7] = (unsigned long  )7;
   sqlstm.sqindv[7] = (         short *)0;
   sqlstm.sqharm[7] = (unsigned long )0;
   sqlstm.sqhstv[8] = (unsigned char  *)&numero_quincena;
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


   /* EXEC SQL FETCH C1 INTO :codigo_cliente, :consecutivo, :numero_orden,
                          :clase_material, :valor_total, :ptaje_iva,
                          :fecha_vencmto,  :fecha_corte; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 9;
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)96;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
   sqlstm.sqhstl[0] = (unsigned long  )12;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqhstv[1] = (unsigned char  *)&consecutivo;
   sqlstm.sqhstl[1] = (unsigned long  )8;
   sqlstm.sqindv[1] = (         short *)0;
   sqlstm.sqharm[1] = (unsigned long )0;
   sqlstm.sqhstv[2] = (unsigned char  *)&numero_orden;
   sqlstm.sqhstl[2] = (unsigned long  )8;
   sqlstm.sqindv[2] = (         short *)0;
   sqlstm.sqharm[2] = (unsigned long )0;
   sqlstm.sqhstv[3] = (unsigned char  *)&clase_material;
   sqlstm.sqhstl[3] = (unsigned long  )7;
   sqlstm.sqindv[3] = (         short *)0;
   sqlstm.sqharm[3] = (unsigned long )0;
   sqlstm.sqhstv[4] = (unsigned char  *)&valor_total;
   sqlstm.sqhstl[4] = (unsigned long  )8;
   sqlstm.sqindv[4] = (         short *)0;
   sqlstm.sqharm[4] = (unsigned long )0;
   sqlstm.sqhstv[5] = (unsigned char  *)&ptaje_iva;
   sqlstm.sqhstl[5] = (unsigned long  )4;
   sqlstm.sqindv[5] = (         short *)0;
   sqlstm.sqharm[5] = (unsigned long )0;
   sqlstm.sqhstv[6] = (unsigned char  *)&fecha_vencmto;
   sqlstm.sqhstl[6] = (unsigned long  )22;
   sqlstm.sqindv[6] = (         short *)0;
   sqlstm.sqharm[6] = (unsigned long )0;
   sqlstm.sqhstv[7] = (unsigned char  *)&fecha_corte;
   sqlstm.sqhstl[7] = (unsigned long  )22;
   sqlstm.sqindv[7] = (         short *)0;
   sqlstm.sqharm[7] = (unsigned long )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   oraest  = sqlca.sqlcode;

   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
       fprintf (stderr, "Error leyendo C1 (%d)\n", sqlca.sqlcode);

   codigo_cliente.arr      [codigo_cliente.len]     = '\0';
   clase_material.arr      [clase_material.len]     = '\0';
   fecha_vencmto.arr       [fecha_vencmto.len]      = '\0';
   fecha_corte.arr         [fecha_corte.len]        = '\0';

/* C6 */
 /* EXEC SQL DECLARE C6 CURSOR FOR
        select to_number(decode(si_no,'S','1','N','0','1'))
        from  fletescob
        where codigo_cli_may >= :wcod and
              codigo_cli_men <= :wcod; */ 


/* C22 */

     /* EXEC SQL DECLARE C22 CURSOR FOR
        select to_char(fecha_vencmto,'yyyymmdd'), saldo
        from   facturam fm, facturas f
        where  f.tipo_factura     = :codigo_emp            and
               f.codigo_cliente   = :wcod                  and
               f.fecha_documento <= SYSDATE                and
               f.estado_factura   = 0                      and
               f.estado_cartera   = 0                      and
               f.valor_neto       > 0                      and
               f.contado          is null                  and
               fm.tipo_factura    = f.tipo_factura         and
               fm.tipo_documento  = f.tipo_documento       and
               fm.numero_factura  = f.numero_factura       and
               fm.ano_mes         =
               (select max(ano_mes)
                from   facturam
                where  facturam.tipo_factura   = :codigo_emp            and
                       facturam.tipo_documento = f.tipo_documento       and
                       facturam.tipo_documento <> 'C'                   and
                       facturam.numero_factura = f.numero_factura       and
                       facturam.ano_mes <= :ano_mes_c); */ 


/* C3 */
   /* EXEC SQL
        select n.nombre, n.direccion
        into  :nomb_emp, :direccion_emp
        from  nits n, empresas e
        where n.codigo_nit = e.codigo_nit and
              e.codigo_emp = to_number(:codigo_emp); */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 9;
   sqlstm.stmt = "select n.nombre ,n.direccion into :b0,:b1  from nits n ,em\
presas e where (n.codigo_nit=e.codigo_nit and e.codigo_emp=to_number(:b2))";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)142;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
   sqlstm.sqhstl[0] = (unsigned long  )52;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqhstv[1] = (unsigned char  *)&direccion_emp;
   sqlstm.sqhstl[1] = (unsigned long  )52;
   sqlstm.sqindv[1] = (         short *)0;
   sqlstm.sqharm[1] = (unsigned long )0;
   sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
   sqlstm.sqhstl[2] = (unsigned long  )7;
   sqlstm.sqindv[2] = (         short *)0;
   sqlstm.sqharm[2] = (unsigned long )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        oraest  = sqlca.sqlcode;

        if (sqlca.sqlcode != -1405 &&
            sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo C3 (%d)\n", sqlca.sqlcode);
        nomb_emp.arr       [nomb_emp.len]      = '\0';
        direccion_emp.arr  [direccion_emp.len] = '\0';

/************************************************
 * Recuperar datos en el area de datos definida *
 * una fila al tiempo. (ofetch).                *
 * Aqui se hace la primera lectura del cursor 0.*
 ************************************************/

strcpy(wcod.arr,codigo_cliente.arr);
wcod.len = strlen(wcod.arr);
busco_cliente();
busco_nro_factura();
busco_total_hojas();
fprintf(fp,"%s%s%s%c%s%c%c%c%c\r",line_feed6,diezcpi,tamano_pagina,51,set_vertical,39,42,46,0);
titulos();

strcpy(cadena,fecha_corte.arr);
numero_fechaj(cadena);
strcpy(fecha_corte2,cadena);
strcpy(fecha_cor,fecha_corte2);
strcpy(cadena,fecha_corte2);
strorg(cadena,7,2);
dia_corte=atoi(cadena);
strcpy(cadena,fecha_corte2);
strorg(cadena,5,2);
mes_corte=atoi(cadena);
strcpy(cadena,fecha_corte2);
strorg(cadena,1,4);
ano_corte=atoi(cadena);

if (mes_corte==4 || mes_corte==6 || mes_corte==9 || mes_corte==11) {
   if (dia_corte==30) {
       dia_corte=31;
       fecha_corte2[6]='3';
       fecha_corte2[7]='1';
   }
}
if (mes_corte==2) {
   if (dia_corte>15 && dia_corte<30) {
       dia_corte=31;
       fecha_corte2[6]='3';
       fecha_corte2[7]='1';
   }
}
total_deuda   =0;
por_vencer    =0;
a_30_dias     =0;
a_60_dias     =0;
a_90_dias     =0;
a_120_dias    =0;

pasan=0;
i    =0;
while (oraest == 0) {
      if (strcmp(wcod.arr,codigo_cliente.arr))
         {
          totales();
          busco_nro_factura();
          busco_total_hojas();
          busco_cliente();
          titulos();
          i=0;
         }
      if (con_lin > 32)
         {
         pasan=1;
         pie_factura();
         titulos();
         i=0;
         }
      if (!strcmp(clase_material.arr,"C"))
         {
          nro_ordenes_c++;
          strcpy(division,"2");
          sub_total_c+=valor_total;
         }
      else
         {
          nro_ordenes_o++;
          strcpy(division,"1");
          sub_total_o+=valor_total;
         }
      sprintf (cadena,"%9.0f",valor_total);
      i++;
      if (i>2) {
         fprintf(fp,"%04.0f %s-%07.0f%11s\n",consecutivo,division,numero_orden,fmtnum("zzzz,zzz,zz9",cadena,r_t));
          i=0;
          con_lin++;
      }
      else fprintf(fp,"%04.0f %s-%07.0f%12s ",consecutivo,division,numero_orden,fmtnum("zzzz,zzz,zz9",cadena,r_t));
      /* EXEC SQL FETCH C1 INTO :codigo_cliente, :consecutivo, :numero_orden,
                             :clase_material, :valor_total, :ptaje_iva,
                             :fecha_vencmto,  :fecha_corte; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 9;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)168;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
      sqlstm.sqhstl[0] = (unsigned long  )12;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&consecutivo;
      sqlstm.sqhstl[1] = (unsigned long  )8;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&numero_orden;
      sqlstm.sqhstl[2] = (unsigned long  )8;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&clase_material;
      sqlstm.sqhstl[3] = (unsigned long  )7;
      sqlstm.sqindv[3] = (         short *)0;
      sqlstm.sqharm[3] = (unsigned long )0;
      sqlstm.sqhstv[4] = (unsigned char  *)&valor_total;
      sqlstm.sqhstl[4] = (unsigned long  )8;
      sqlstm.sqindv[4] = (         short *)0;
      sqlstm.sqharm[4] = (unsigned long )0;
      sqlstm.sqhstv[5] = (unsigned char  *)&ptaje_iva;
      sqlstm.sqhstl[5] = (unsigned long  )4;
      sqlstm.sqindv[5] = (         short *)0;
      sqlstm.sqharm[5] = (unsigned long )0;
      sqlstm.sqhstv[6] = (unsigned char  *)&fecha_vencmto;
      sqlstm.sqhstl[6] = (unsigned long  )22;
      sqlstm.sqindv[6] = (         short *)0;
      sqlstm.sqharm[6] = (unsigned long )0;
      sqlstm.sqhstv[7] = (unsigned char  *)&fecha_corte;
      sqlstm.sqhstl[7] = (unsigned long  )22;
      sqlstm.sqindv[7] = (         short *)0;
      sqlstm.sqharm[7] = (unsigned long )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      oraest  = sqlca.sqlcode;

      if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C1 (%d)\n", sqlca.sqlcode);

      codigo_cliente.arr      [codigo_cliente.len]     = '\0';
      clase_material.arr      [clase_material.len]     = '\0';
      fecha_vencmto.arr       [fecha_vencmto.len]      = '\0';
      fecha_corte.arr         [fecha_corte.len]        = '\0';

}

totales();

/* EXEC SQL
     update ordenes_c
     set    contado = 1
     where  numero_orden = to_number(:orden); */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 9;
sqlstm.stmt = "update ordenes_c  set contado=1 where numero_orden=to_number(\
:b0)";
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)214;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlstm.sqhstv[0] = (unsigned char  *)&orden;
sqlstm.sqhstl[0] = (unsigned long  )14;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



cierre_impresora();

/*****************************************
** COMMIT LOS CAMBIOS A LA BASE DE DATOS *
******************************************/

/* EXEC SQL CLOSE C1; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 9;
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)232;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


/* EXEC SQL CLOSE C22; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 9;
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)246;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



/* EXEC SQL COMMIT WORK RELEASE; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 9;
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)260;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



/************************************************
 * Desconectarse de ORACLE. (ologof)            *
 ************************************************/
exit   (0);
}


void busco_cliente()
{
/* C9 */
 /* EXEC SQL
        select n.nombre, nvl(n.nombre_muni,c.nombre), n.direccion,
               max(nvl(t.numero,0)), n.nit, nvl(n.digito,-1)
        into  :nomb_clie, :nomb_ciu, :direccion, :telefono, :nit, :digito
        from  nits n, ciudades c, telefonos t, clientes cl
        where n.codigo_nit      = cl.codigo_nit                       and
              cl.codigo_cliente = :wcod                               and
              n.codigo_ciu      = c.codigo                            and
              n.codigo_nit      = t.codigo_nit(+)
        group by n.nombre, n.nombre_muni, c.nombre, n.direccion,
                 n.nit,    n.digito; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 9;
 sqlstm.stmt = "select n.nombre ,nvl(n.nombre_muni,c.nombre) ,n.direccion ,m\
ax(nvl(t.numero,0)) ,n.nit ,nvl(n.digito,(-1)) into :b0,:b1,:b2,:b3,:b4,:b5  f\
rom nits n ,ciudades c ,telefonos t ,clientes cl where (((n.codigo_nit=cl.codi\
go_nit and cl.codigo_cliente=:b6) and n.codigo_ciu=c.codigo) and n.codigo_nit=\
t.codigo_nit(+)) group by n.nombre,n.nombre_muni,c.nombre,n.direccion,n.nit,n.\
digito";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)274;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
 sqlstm.sqhstl[0] = (unsigned long  )52;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&nomb_ciu;
 sqlstm.sqhstl[1] = (unsigned long  )32;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&direccion;
 sqlstm.sqhstl[2] = (unsigned long  )52;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&telefono;
 sqlstm.sqhstl[3] = (unsigned long  )8;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&nit;
 sqlstm.sqhstl[4] = (unsigned long  )8;
 sqlstm.sqindv[4] = (         short *)0;
 sqlstm.sqharm[4] = (unsigned long )0;
 sqlstm.sqhstv[5] = (unsigned char  *)&digito;
 sqlstm.sqhstl[5] = (unsigned long  )4;
 sqlstm.sqindv[5] = (         short *)0;
 sqlstm.sqharm[5] = (unsigned long )0;
 sqlstm.sqhstv[6] = (unsigned char  *)&wcod;
 sqlstm.sqhstl[6] = (unsigned long  )12;
 sqlstm.sqindv[6] = (         short *)0;
 sqlstm.sqharm[6] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        nomb_clie.arr      [nomb_clie.len]     = '\0';
        nomb_ciu.arr       [nomb_ciu.len]      = '\0';
        direccion.arr      [direccion.len]     = '\0';

        oraest  = sqlca.sqlcode;

        if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo C9 (%d)\n", sqlca.sqlcode);

}


void busco_nro_factura()
{
/* C8 */
 /* EXEC SQL
      select ultimo_numero, ano, mes_proceso
      into  :ultimo_numero, :ano, :mes_proceso
      from   control_fac
      where  codigo_emp = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 9;
 sqlstm.stmt = "select ultimo_numero ,ano ,mes_proceso into :b0,:b1,:b2  fro\
m control_fac where codigo_emp=:b3";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)316;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&ultimo_numero;
 sqlstm.sqhstl[0] = (unsigned long  )8;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&ano;
 sqlstm.sqhstl[1] = (unsigned long  )4;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&mes_proceso;
 sqlstm.sqhstl[2] = (unsigned long  )4;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[3] = (unsigned long  )7;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



      oraest  = sqlca.sqlcode;

      if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C9 (%d)\n", sqlca.sqlcode);

 if (strcmp(numero_factura.arr,"0")) {
     ultimo_numero=atof(numero_factura.arr);
 }
 sprintf(ano_mes_c.arr,"%d",ano);
 sprintf(cadena,"%02d",mes_proceso);
 strcat(ano_mes_c.arr,cadena);
/*
 if (strlen(cadena) > 1)
    strcat(ano_mes_c.arr,cadena);
 else {
       ano_mes_c.arr[2]='0';
       ano_mes_c.arr[3]=cadena[0];
 }
 ano_mes_c.arr[4]='\0';
*/
 ano_mes_c.len = strlen(ano_mes_c.arr);
}

void busco_total_hojas()
{
/* C2 */
 /* EXEC SQL
      select ceil(count(*)/75)
      into  :total_paginas
      from  ordenes_c o, clientese e, control_fac cf
      where to_number(:codigo_emp) = nvl(e.codigo_emp,1)                and
            to_number(:codigo_emp) = cf.codigo_emp                      and
            o.codigo_cliente       = e.codigo_cliente(+)                and
            (:tipo_cliente)        = nvl(e.tipo_cliente,'0')            and
            to_number(:numero_quincena) = e.numero_quincena(+)          and
            (:wcod)                = o.codigo_cliente                   and
            nvl(o.estado,0) <> 'R'                                      and
            nvl(o.contado,0) = 0                                        and
            o.numero_orden   = :orden                                   and
            to_number(to_char(o.fecha_control,'yyyymmdd')) <=
            decode(to_number(:numero_quincena),
                   1,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm'),'yyyymm')||15),
                   2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd'))) and
            to_number(to_char(o.fecha_control,'yyyymmdd')) >=
            decode(to_number(:numero_quincena),
                  1,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm'),'yyyymm')||lpad(1,2,0)),
                  2,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm'),'yyyymm')||16)); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 9;
 sqlstm.stmt = "select ceil((count(*) /75)) into :b0  from ordenes_c o ,clie\
ntese e ,control_fac cf where ((((((((((to_number(:b1)=nvl(e.codigo_emp,1) and\
 to_number(:b1)=cf.codigo_emp) and o.codigo_cliente=e.codigo_cliente(+)) and :\
b3=nvl(e.tipo_cliente,'0')) and to_number(:b4)=e.numero_quincena(+)) and :b5=o\
.codigo_cliente) and nvl(o.estado,0)<>'R') and nvl(o.contado,0)=0) and o.numer\
o_orden=:b6) and to_number(to_char(o.fecha_control,'yyyymmdd'))<=decode(to_num\
ber(:b4),1,to_number((to_char(to_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yymm\
'),'yyyymm')||15)),2,to_number(to_char(last_day(to_date((cf.ano||lpad(cf.mes_p\
roceso,2,0)),'yymm')),'yyyymmdd')))) and to_number(to_char(o.fecha_control,'yy\
yymmdd'))>=decode(to_number(:b4),1,to_number((to_char(to_date((cf.ano||lpad(cf\
.mes_proceso,2,0)),'yymm'),'yyyymm')||lpad(1,2,0))),2,to_number((to_char(to_da\
te((cf.ano||lpad(cf.mes_proceso,2,0)),'yymm'),'yyyymm')||16))))";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)346;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&total_paginas;
 sqlstm.sqhstl[0] = (unsigned long  )4;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned long  )7;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[2] = (unsigned long  )7;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&tipo_cliente;
 sqlstm.sqhstl[3] = (unsigned long  )7;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&numero_quincena;
 sqlstm.sqhstl[4] = (unsigned long  )7;
 sqlstm.sqindv[4] = (         short *)0;
 sqlstm.sqharm[4] = (unsigned long )0;
 sqlstm.sqhstv[5] = (unsigned char  *)&wcod;
 sqlstm.sqhstl[5] = (unsigned long  )12;
 sqlstm.sqindv[5] = (         short *)0;
 sqlstm.sqharm[5] = (unsigned long )0;
 sqlstm.sqhstv[6] = (unsigned char  *)&orden;
 sqlstm.sqhstl[6] = (unsigned long  )14;
 sqlstm.sqindv[6] = (         short *)0;
 sqlstm.sqharm[6] = (unsigned long )0;
 sqlstm.sqhstv[7] = (unsigned char  *)&numero_quincena;
 sqlstm.sqhstl[7] = (unsigned long  )7;
 sqlstm.sqindv[7] = (         short *)0;
 sqlstm.sqharm[7] = (unsigned long )0;
 sqlstm.sqhstv[8] = (unsigned char  *)&numero_quincena;
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



      oraest  = sqlca.sqlcode;

      if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C9 (%d)\n", sqlca.sqlcode);

}

void totales()
{
 calculo_desctos();
 calculo_fletes();
 if (valor_env == 0)
    {
     if (c >= 1 && c <= 1.5)
        fletes=nro_despachos*fletes*cob_fletes;
     else fletes=nro_ordenes*fletes*cob_fletes;
    }
 sub_total=sub_total_o+sub_total_c;
 impue=0;
 if(!strcmp(tipo_cliente.arr,"0"))
    impue=(fletes*ptaje_iva)/100;
 impue=redondo(impue);
 costo_factura=sub_total-total_descto+impue+fletes;

 fprintf(fp,"%s",vertical);
 sprintf(cadena,"%9.0f",sub_total_o);
 fprintf(fp,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.0f",sub_total_c);
 fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.0f",sub_total);
 fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 if (total_descto > 0) {
   sprintf(cadena,"%9.0f",total_descto);
   fprintf(fp,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 else   fprintf(fp,"%13s"," ");
 sprintf(cadena,"%9.0f",fletes);
 fprintf(fp,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 con_lin=36;
 if(!strcmp(tipo_cliente.arr,"0")) {
    sprintf(cadena,"%9.0f",sub_total-total_descto+fletes);
    fprintf(fp,"%13s\n",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
    fprintf(fp,"%s%s",condensado_on,enfatizado_on);
    monletr(costo_factura,cadena);
    fprintf(fp,"    %-117s%s\n",cadena,enfatizado_off);
    strcpy (tit,"* * *  V E N C I M I E N T O S  * * *");
    strful (cadena,(int)(60-strlen(tit))/2,' ');
    fprintf(fp,"%s%s%s%s%s%s",condensado_on,ancho_on,cadena,tit,ancho_off,condensado_off);
    fprintf(fp,"%s%21s%2d%s%s",condensado_on," ",ptaje_iva,"%",condensado_off);
    fprintf(fp,"%s",enfatizado_off);
    sprintf (cadena,"%8.0f",impue);
    fprintf(fp,"%10s\n",fmtnum("zz,zzz,zz9",cadena,r_t));
    con_lin+=4;
 }
 actualizo_facturas();
 imprime_vencmtos();
 sprintf (cadena,"%9.0f",costo_factura);
 fprintf(fp,"\r%80s\n\n",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 con_lin+=2;
 fprintf(fp,"%s",vertical);
 con_lin=44;
 fprintf(fp,"%43s%2.1f%12s%s%s"," ",2.5," ",condensado_on,"Pagina ");
 fprintf(fp,"%s%d%s%2.0f\n                              .%s%s\n",condensado_on,con_pag," DE ",total_paginas,condensado_off,diezcpi);
 fprintf(fp,"%s",vertical);
 con_lin=1;
 strcpy(wcod.arr,codigo_cliente.arr);
 wcod.len = strlen(wcod.arr);
 borro_acumulados();
}

void borro_acumulados()
{
 sub_total     =0;
 sub_total_o   =0;
 sub_total_c   =0;
 nro_ordenes_o =0;
 nro_ordenes_c =0;
 nro_despachos =0;
 fletes        =0;
 costo_factura =0;
 total_paginas =0;
 con_pag       =0;
 pasan         =0;

 saldo_factura =0;
 por_vencer    =0;
 a_30_dias     =0;
 a_60_dias     =0;
 a_90_dias     =0;
 a_120_dias    =0;
}

void actualizo_facturas()
{
 if (strcmp(numero_factura.arr,"0")) {
    /* C21 */
    /* EXEC SQL
        select valor_neto
        into  :costo_factura_an
        from   facturas
        where  tipo_factura   = to_number(:codigo_emp) and
               tipo_documento =                    'F' and
               numero_factura = to_number(:numero_factura); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = "select valor_neto into :b0  from facturas where ((tipo_fa\
ctura=to_number(:b1) and tipo_documento='F') and numero_factura=to_number(:b2)\
)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)396;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&costo_factura_an;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[1] = (unsigned long  )7;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&numero_factura;
    sqlstm.sqhstl[2] = (unsigned long  )17;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



     oraest  = sqlca.sqlcode;

     if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 0)
         fprintf (stderr, "Error leyendo C21 (%d)\n", sqlca.sqlcode);
     else voy_actu_clim_rv();

 }
 mover_datos_factura();
 actualizo_clientem();
 if (strcmp(numero_factura.arr,"0")) {
    oraest = 0;
    /* C13 */
    /* EXEC SQL
        update facturas
        set    codigo_cliente  = (:codigo_cliente_c),
               fecha_documento = to_date(:fecha_corte_c),
               fecha_vencmto   = to_date(:fecha_vencmto_c),
               cant_ordenes_o  = to_number(:nro_ordenes_oc),
               cant_ordenes_c  = to_number(:nro_ordenes_cc),
               cant_despachos  = to_number(:nro_despachos_c),
               valor_oftalmica = to_number(:sub_total_oc),
               valor_contacto  = to_number(:sub_total_cc),
               valor_descuento = to_number(:total_descto_c),
               valor_fletes    = to_number(:fletes_c),
               valor_iva       = to_number(:valor_iva_c),
               ptaje_iva       = to_number(:ptaje_iva_c),
               valor_neto      = to_number(:costo_factura_c),
               valor_pagos     = 0,
               fecha_pago      = NULL,
               estado_cartera  = 0,
               estado_factura  = 0,
               rete_fte        = 0
        where  tipo_factura    = to_number(:tipo_cliente_c) and
               tipo_documento  = 'F'                        and
               numero_factura  = to_number(:ultimo_numero_c); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 15;
    sqlstm.stmt = "update facturas  set codigo_cliente=:b0,fecha_documento=t\
o_date(:b1),fecha_vencmto=to_date(:b2),cant_ordenes_o=to_number(:b3),cant_orde\
nes_c=to_number(:b4),cant_despachos=to_number(:b5),valor_oftalmica=to_number(:\
b6),valor_contacto=to_number(:b7),valor_descuento=to_number(:b8),valor_fletes=\
to_number(:b9),valor_iva=to_number(:b10),ptaje_iva=to_number(:b11),valor_neto=\
to_number(:b12),valor_pagos=0,fecha_pago=null ,estado_cartera=0,estado_factura\
=0,rete_fte=0 where ((tipo_factura=to_number(:b13) and tipo_documento='F') and\
 numero_factura=to_number(:b14))";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)422;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente_c;
    sqlstm.sqhstl[0] = (unsigned long  )12;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&fecha_corte_c;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&fecha_vencmto_c;
    sqlstm.sqhstl[2] = (unsigned long  )22;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&nro_ordenes_oc;
    sqlstm.sqhstl[3] = (unsigned long  )12;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&nro_ordenes_cc;
    sqlstm.sqhstl[4] = (unsigned long  )12;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&nro_despachos_c;
    sqlstm.sqhstl[5] = (unsigned long  )12;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&sub_total_oc;
    sqlstm.sqhstl[6] = (unsigned long  )22;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&sub_total_cc;
    sqlstm.sqhstl[7] = (unsigned long  )22;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&total_descto_c;
    sqlstm.sqhstl[8] = (unsigned long  )22;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&fletes_c;
    sqlstm.sqhstl[9] = (unsigned long  )22;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&valor_iva_c;
    sqlstm.sqhstl[10] = (unsigned long  )22;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&ptaje_iva_c;
    sqlstm.sqhstl[11] = (unsigned long  )11;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&costo_factura_c;
    sqlstm.sqhstl[12] = (unsigned long  )22;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&tipo_cliente_c;
    sqlstm.sqhstl[13] = (unsigned long  )7;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&ultimo_numero_c;
    sqlstm.sqhstl[14] = (unsigned long  )12;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    oraest  = sqlca.sqlcode;

    if (sqlca.sqlcode !=  1403 &&
        sqlca.sqlcode != -1405 &&
        sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo C13 (%d)\n", sqlca.sqlcode);

    ultimo_numero+=total_paginas;
    sprintf(numero_factura.arr,"%8.0f",ultimo_numero);
    numero_factura.len = strlen(numero_factura.arr);
 }
 else {
       oraest = 0;
       sprintf(total_pag_c.arr,"%2.0f",total_paginas);
       total_pag_c.len = strlen(total_pag_c.arr);

      /* C7 */
       /* EXEC SQL
            update control_fac
            set ultimo_numero = ultimo_numero + to_number(:total_pag_c)
            where codigo_emp  = to_number(:codigo_emp); */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 15;
       sqlstm.stmt = "update control_fac  set ultimo_numero=(ultimo_numero+t\
o_number(:b0)) where codigo_emp=to_number(:b1)";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)496;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&total_pag_c;
       sqlstm.sqhstl[0] = (unsigned long  )12;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
       sqlstm.sqhstl[1] = (unsigned long  )7;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



       oraest  = sqlca.sqlcode;

       if (sqlca.sqlcode !=  1403 &&
           sqlca.sqlcode != -1405 &&
           sqlca.sqlcode != 0)
           fprintf (stderr, "Error leyendo C7 (%d)\n", sqlca.sqlcode);

       if (saldo_cliente < 0) {
          if (abs((long int)saldo_cliente) > costo_factura)
              sprintf(valor_pagos_c.arr,"%9.2f",costo_factura);
          else sprintf(valor_pagos_c.arr,"%9.2f",saldo_cliente*-1);
       }
       else strcpy(valor_pagos_c.arr,"0");
       valor_pagos_c.len = strlen(valor_pagos_c.arr);
       /* C11 */
       /* EXEC SQL
        insert into facturas
        (NUMERO_FACTURA,
         CODIGO_CLIENTE,
         FECHA_DOCUMENTO,
         FECHA_VENCMTO,
         CANT_ORDENES_O,
         CANT_ORDENES_C,
         CANT_DESPACHOS,
         VALOR_OFTALMICA,
         VALOR_CONTACTO,
         VALOR_DESCUENTO,
         VALOR_FLETES,
         VALOR_IVA,
         PTAJE_IVA,
         VALOR_NETO,
         VALOR_PAGOS,
         FECHA_PAGO,
         ESTADO_CARTERA,
         TIPO_FACTURA,
         TIPO_DOCUMENTO,
         ESTADO_FACTURA,
         HOJAS,
         CONTADO,
         CODIGO_NIT,
         RETE_FTE)
        values (to_number(:ultimo_numero_c),
                (:codigo_cliente_c),
                to_date(:fecha_corte_c),
                to_date(:fecha_vencmto_c),
                to_number(:nro_ordenes_oc),
                to_number(:nro_ordenes_cc),
                to_number(:nro_despachos_c),
                to_number(:sub_total_oc),
                to_number(:sub_total_cc),
                to_number(:total_descto_c),
                to_number(:fletes_c),
                to_number(:valor_iva_c),
                to_number(:ptaje_iva_c),
                to_number(:costo_factura_c),
                to_number(:valor_pagos_c),
                null,0,
                to_number(:codigo_emp),
                'F',0,
                to_number(:total_pag_c),
                null,
                null,
                0); */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 17;
       sqlstm.stmt = "insert into facturas(NUMERO_FACTURA,CODIGO_CLIENTE,FEC\
HA_DOCUMENTO,FECHA_VENCMTO,CANT_ORDENES_O,CANT_ORDENES_C,CANT_DESPACHOS,VALOR_\
OFTALMICA,VALOR_CONTACTO,VALOR_DESCUENTO,VALOR_FLETES,VALOR_IVA,PTAJE_IVA,VALO\
R_NETO,VALOR_PAGOS,FECHA_PAGO,ESTADO_CARTERA,TIPO_FACTURA,TIPO_DOCUMENTO,ESTAD\
O_FACTURA,HOJAS,CONTADO,CODIGO_NIT,RETE_FTE) values (to_number(:b0),:b1,to_dat\
e(:b2),to_date(:b3),to_number(:b4),to_number(:b5),to_number(:b6),to_number(:b7\
),to_number(:b8),to_number(:b9),to_number(:b10),to_number(:b11),to_number(:b12\
),to_number(:b13),to_number(:b14),null ,0,to_number(:b15),'F',0,to_number(:b16\
),null ,null ,0)";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)518;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&ultimo_numero_c;
       sqlstm.sqhstl[0] = (unsigned long  )12;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&codigo_cliente_c;
       sqlstm.sqhstl[1] = (unsigned long  )12;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&fecha_corte_c;
       sqlstm.sqhstl[2] = (unsigned long  )22;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&fecha_vencmto_c;
       sqlstm.sqhstl[3] = (unsigned long  )22;
       sqlstm.sqindv[3] = (         short *)0;
       sqlstm.sqharm[3] = (unsigned long )0;
       sqlstm.sqhstv[4] = (unsigned char  *)&nro_ordenes_oc;
       sqlstm.sqhstl[4] = (unsigned long  )12;
       sqlstm.sqindv[4] = (         short *)0;
       sqlstm.sqharm[4] = (unsigned long )0;
       sqlstm.sqhstv[5] = (unsigned char  *)&nro_ordenes_cc;
       sqlstm.sqhstl[5] = (unsigned long  )12;
       sqlstm.sqindv[5] = (         short *)0;
       sqlstm.sqharm[5] = (unsigned long )0;
       sqlstm.sqhstv[6] = (unsigned char  *)&nro_despachos_c;
       sqlstm.sqhstl[6] = (unsigned long  )12;
       sqlstm.sqindv[6] = (         short *)0;
       sqlstm.sqharm[6] = (unsigned long )0;
       sqlstm.sqhstv[7] = (unsigned char  *)&sub_total_oc;
       sqlstm.sqhstl[7] = (unsigned long  )22;
       sqlstm.sqindv[7] = (         short *)0;
       sqlstm.sqharm[7] = (unsigned long )0;
       sqlstm.sqhstv[8] = (unsigned char  *)&sub_total_cc;
       sqlstm.sqhstl[8] = (unsigned long  )22;
       sqlstm.sqindv[8] = (         short *)0;
       sqlstm.sqharm[8] = (unsigned long )0;
       sqlstm.sqhstv[9] = (unsigned char  *)&total_descto_c;
       sqlstm.sqhstl[9] = (unsigned long  )22;
       sqlstm.sqindv[9] = (         short *)0;
       sqlstm.sqharm[9] = (unsigned long )0;
       sqlstm.sqhstv[10] = (unsigned char  *)&fletes_c;
       sqlstm.sqhstl[10] = (unsigned long  )22;
       sqlstm.sqindv[10] = (         short *)0;
       sqlstm.sqharm[10] = (unsigned long )0;
       sqlstm.sqhstv[11] = (unsigned char  *)&valor_iva_c;
       sqlstm.sqhstl[11] = (unsigned long  )22;
       sqlstm.sqindv[11] = (         short *)0;
       sqlstm.sqharm[11] = (unsigned long )0;
       sqlstm.sqhstv[12] = (unsigned char  *)&ptaje_iva_c;
       sqlstm.sqhstl[12] = (unsigned long  )11;
       sqlstm.sqindv[12] = (         short *)0;
       sqlstm.sqharm[12] = (unsigned long )0;
       sqlstm.sqhstv[13] = (unsigned char  *)&costo_factura_c;
       sqlstm.sqhstl[13] = (unsigned long  )22;
       sqlstm.sqindv[13] = (         short *)0;
       sqlstm.sqharm[13] = (unsigned long )0;
       sqlstm.sqhstv[14] = (unsigned char  *)&valor_pagos_c;
       sqlstm.sqhstl[14] = (unsigned long  )22;
       sqlstm.sqindv[14] = (         short *)0;
       sqlstm.sqharm[14] = (unsigned long )0;
       sqlstm.sqhstv[15] = (unsigned char  *)&codigo_emp;
       sqlstm.sqhstl[15] = (unsigned long  )7;
       sqlstm.sqindv[15] = (         short *)0;
       sqlstm.sqharm[15] = (unsigned long )0;
       sqlstm.sqhstv[16] = (unsigned char  *)&total_pag_c;
       sqlstm.sqhstl[16] = (unsigned long  )12;
       sqlstm.sqindv[16] = (         short *)0;
       sqlstm.sqharm[16] = (unsigned long )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



       oraest  = sqlca.sqlcode;

       if (sqlca.sqlcode !=  1403 &&
           sqlca.sqlcode != -1405 &&
           sqlca.sqlcode != 0)
           fprintf (stderr, "Error leyendo C11 (%d)\n", sqlca.sqlcode);

       if (saldo_cliente < 0) {
          if (abs((long int)saldo_cliente) > costo_factura)
              sprintf(costo_factura_c.arr,"%8.2f",0);
          else sprintf(costo_factura_c.arr,"%8.2f",costo_factura+saldo_cliente);
          costo_factura_c.len = strlen(costo_factura_c.arr);
       }
/*
       costo_factura_c.arr[strpos(".",costo_factura_c.arr)-1] = ',';
*/
 }
}

void actualizo_clientem()
{
/* printf("actualizo_clientem");getchar(); */
 oraest = 0;
/* C15 */
   /* EXEC SQL
        select saldo
        into  :saldo_cliente
        from  clientem
        where codigo_emp     = to_number(:codigo_emp) and
              codigo_cliente =          (:wcod) and
              ano_mes        = to_number(:ano_mes_c); */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 17;
   sqlstm.stmt = "select saldo into :b0  from clientem where ((codigo_emp=to\
_number(:b1) and codigo_cliente=:b2) and ano_mes=to_number(:b3))";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)600;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlstm.sqhstv[0] = (unsigned char  *)&saldo_cliente;
   sqlstm.sqhstl[0] = (unsigned long  )8;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
   sqlstm.sqhstl[1] = (unsigned long  )7;
   sqlstm.sqindv[1] = (         short *)0;
   sqlstm.sqharm[1] = (unsigned long )0;
   sqlstm.sqhstv[2] = (unsigned char  *)&wcod;
   sqlstm.sqhstl[2] = (unsigned long  )12;
   sqlstm.sqindv[2] = (         short *)0;
   sqlstm.sqharm[2] = (unsigned long )0;
   sqlstm.sqhstv[3] = (unsigned char  *)&ano_mes_c;
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



   oraest  = sqlca.sqlcode;

   if (sqlca.sqlcode !=  1403 &&
       sqlca.sqlcode != -1405 &&
       sqlca.sqlcode != 0)
       fprintf (stderr, "Error leyendo C15 (%d)\n", sqlca.sqlcode);

}

void voy_mes_anterior()
{
/* printf("voy_mes_anterior");getchar(); */
}

void voy_ins_climan()
{
 /* printf("voy_ins_climan");getchar(); */
}

void voy_ins_clim()
{
/* printf("voy_ins_clim");getchar(); */
}

void voy_actu_clim()
{
  /* printf("voy_actu_clim %s",costo_factura_c.arr);getchar(); */
}

void voy_actu_clim_rv()
{
  /* printf("voy_actu_clim_rv");getchar(); */
}

void mover_datos_factura()
{
 sprintf(ultimo_numero_c.arr,"%6.0f",ultimo_numero);
 ultimo_numero_c.len  = strlen(ultimo_numero_c.arr);
 strcpy(codigo_cliente_c.arr,wcod.arr);
 codigo_cliente_c.len = strlen(codigo_cliente_c.arr);
 strcpy(fecha_corte_c.arr,fecha_corte.arr);
 fecha_corte_c.len    = strlen(fecha_corte_c.arr);
 strcpy(fecha_vencmto_c.arr,fecha_vencmto.arr);
 fecha_vencmto_c.len  = strlen(fecha_vencmto_c.arr);
 sprintf(nro_ordenes_oc.arr,"%d",nro_ordenes_o);
 nro_ordenes_oc.len   = strlen(nro_ordenes_oc.arr);
 sprintf(nro_ordenes_cc.arr,"%d",nro_ordenes_c);
 nro_ordenes_cc.len   = strlen(nro_ordenes_cc.arr);
 sprintf(nro_despachos_c.arr,"%3.0f",nro_despachos);
 nro_despachos_c.len  = strlen(nro_despachos_c.arr);
 sprintf(sub_total_oc.arr,"%9.0f",sub_total_o);
 sub_total_oc.len     = strlen(sub_total_oc.arr);
 sprintf(sub_total_cc.arr,"%7.0f",sub_total_c);
 sub_total_cc.len     = strlen(sub_total_cc.arr);
 sprintf(total_descto_c.arr,"%6.0f",total_descto);
 total_descto_c.len   = strlen(total_descto_c.arr);
 sprintf(fletes_c.arr,"%4.0f",fletes);
 fletes_c.len         = strlen(fletes_c.arr);
 sprintf(valor_iva_c.arr,"%8.0f",impue);
 valor_iva_c.len      = strlen(valor_iva_c.arr);
 sprintf(ptaje_iva_c.arr,"%d",ptaje_iva);
 ptaje_iva_c.len      = strlen(ptaje_iva_c.arr);
 sprintf(costo_factura_c.arr,"%9.0f",costo_factura);
 costo_factura_c.len  = strlen(costo_factura_c.arr);
 strcpy(tipo_cliente_c.arr,codigo_emp.arr);
 tipo_cliente_c.len   = strlen(tipo_cliente_c.arr);

}
/*****************************************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/


void titulos()
{
 con_lin=8;

 if (!strcmp(tipo_cliente.arr,"1"))
     fprintf(fp,"%25s%06.0f\n\n\n","FACTURA NRO. ",ultimo_numero);
 else {
       fprintf(fp,"%66s%s%s%s\n\n\n"," ",elite,"                ",diezcpi);
       fprintf(fp,"%21s%-39s%s%s%s%06.0f\n\n"," ","                                  ",enfatizado_off,condensado_off,diezcpi,ultimo_numero+con_pag);
 }
 con_pag++;

 fprintf(fp,"%s%s%-7s%s\n",condensado_off,diezcpi,codigo_cliente.arr,nomb_clie.arr);
 fprintf(fp,"%s%s%7s%s%12.0f",condensado_off,diezcpi," ","NIT : ",nit);
 if (digito > 0) {
     sprintf (cadena,"%d",digito);
     fprintf (fp,"-%s",fmtnum("z",cadena,r_t));
 }
 else if (digito == 0)
          fprintf (fp,"-%s","0");


 /***********************************/
 strcpy(cadena,fecha_corte.arr);
 if (!strcmp(numero_quincena.arr,"1")) {
     cadena[0]='0';
     cadena[1]='1';
 }
 else {
       cadena[0]='1';
       cadena[1]='6';
 }
 numero_fecha(cadena);
 strcpy(cadena,cadena);
 /***********************************/

 /***********************************/
/* strcpy(cadena2,fecha_corte.arr); */
 strcpy(cadena2,fechafac.arr);
 numero_fecha(cadena2);
 strcpy(cadena2,cadena2);
 /***********************************/

 if (digito >= 0)
     fprintf(fp,"%30s%12s %9s"," ",cadena,cadena2);
 else fprintf(fp,"%32s%12s %9s"," ",cadena,cadena2);
 fprintf(fp,"\n");
 fprintf(fp,"%7s%s\n"," ",direccion.arr);
 fprintf(fp,"%7s%s%8.0f%17s"," ","TEL(S): ",telefono," ");

 /***********************************/
/* strcpy(cadena,fecha_corte.arr); */
 strcpy(cadena,fechafac.arr);
 numero_fecha(cadena);
 strcpy(cadena,cadena);
 /***********************************/

 /***********************************/
/* strcpy(cadena2,fecha_vencmto.arr); */
 strcpy(cadena2,fechafac.arr);
 numero_fecha(cadena2);
 strcpy(cadena2,cadena2);
 /***********************************/

 fprintf(fp,"%17s%12s %9s\n","CONTADO",cadena,cadena2);
 strcpy(cadena,codigo_cliente.arr);
 strorg(cadena,1,2);
 if (!strcmp(cadena,"PM")||!strcmp(cadena,"AB"))
      fprintf(fp,"%7s%s%s\n\n\n"," ",nomb_ciu.arr,".");
 else fprintf(fp,"%7s%s%s\n\n\n"," ",nomb_ciu.arr," - COLOMBIA.");

}

void calculo_desctos()
{
 total_descto=0;
 ptaje_oftal=0;
 ptaje_conta=0;
/* C10 */
 /* EXEC SQL
       select pctaje_oftal, pctaje_conta
       into  :ptaje_oftal, :ptaje_conta
       from   descuentos
       where  codigo_cliente  = (:wcod)            and
              numero_quincena = (:numero_quincena) and
              estado          = 'A'; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 17;
 sqlstm.stmt = "select pctaje_oftal ,pctaje_conta into :b0,:b1  from descuen\
tos where ((codigo_cliente=:b2 and numero_quincena=:b3) and estado='A')";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)630;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&ptaje_oftal;
 sqlstm.sqhstl[0] = (unsigned long  )8;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&ptaje_conta;
 sqlstm.sqhstl[1] = (unsigned long  )8;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&wcod;
 sqlstm.sqhstl[2] = (unsigned long  )12;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&numero_quincena;
 sqlstm.sqhstl[3] = (unsigned long  )7;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 oraest  = sqlca.sqlcode;

 if (oraest == 0 || oraest ==  -1405 ) {
     total_descto=sub_total_o*ptaje_oftal+sub_total_c*ptaje_conta;
     total_descto=redondo(total_descto);
 }
}

void calculo_fletes()
{
 /**** Veo si tiene fletes ****/

 /* EXEC SQL OPEN C6; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 17;
 sqlstm.stmt = sq0004;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)660;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&wcod;
 sqlstm.sqhstl[0] = (unsigned long  )12;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&wcod;
 sqlstm.sqhstl[1] = (unsigned long  )12;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 /* EXEC SQL FETCH C6 INTO :cob_fletes; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 17;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)682;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&cob_fletes;
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


 oraest4  = sqlca.sqlcode;
 if (oraest4) {
    fprintf (stderr, "Error leyendo C6 (%d)\n", sqlca.sqlcode);
    if (oraest4 == 1403)
         cob_fletes=0;
 /* EXEC SQL CLOSE C6; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 17;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)700;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 }

 /**** Veo los envios ****/

 valor_env=-1;
/* C5 */
 /* EXEC SQL
      select nvl(cantidad,0), nvl(valor,0)
      into  :nro_despachos, :valor_env
      from  envios, control_fac
      where codigo_cliente = (:wcod) and
            control_fac.codigo_emp = to_number(:codigo_emp)         and
            to_number(control_fac.ano||lpad(control_fac.mes_proceso,2,0))
               = envios.ano_mes                                     and
          control_fac.numero_quincena = envios.numero_quincena; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 17;
 sqlstm.stmt = "select nvl(cantidad,0) ,nvl(valor,0) into :b0,:b1  from envi\
os ,control_fac where (((codigo_cliente=:b2 and control_fac.codigo_emp=to_numb\
er(:b3)) and to_number((control_fac.ano||lpad(control_fac.mes_proceso,2,0)))=e\
nvios.ano_mes) and control_fac.numero_quincena=envios.numero_quincena)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)714;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nro_despachos;
 sqlstm.sqhstl[0] = (unsigned long  )4;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&valor_env;
 sqlstm.sqhstl[1] = (unsigned long  )8;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&wcod;
 sqlstm.sqhstl[2] = (unsigned long  )12;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[3] = (unsigned long  )7;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 oraest4  = sqlca.sqlcode;

 if (oraest4==1403)
     valor_env=-1;

 if (valor_env == 0)
    {
     nro_ordenes=nro_ordenes_c+nro_ordenes_o;
     c=nro_ordenes/nro_despachos;
     sprintf(cantidad_envios.arr,"%2.2f",c);
     cantidad_envios.len = strlen(cantidad_envios.arr);

/* C4 */
     /* EXEC SQL
          select nvl(valor,0)
          into  :fletes
          from  fletes
          where cantidad_mayor >= to_number(:cantidad_envios) and
                cantidad_menor <= to_number(:cantidad_envios) and
                fecha           = (select max(f.fecha)
                                   from   fletes f, control_fac cf
                                   where  codigo_emp = (:codigo_emp) and
                                          f.fecha <= to_date(
                decode(to_number(:numero_quincena),
                       1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||15),
                       2,to_number(to_char(last_day(to_date(cf.ano||
                       lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd'))),'yymmdd')); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 17;
     sqlstm.stmt = "select nvl(valor,0) into :b0  from fletes where ((cantid\
ad_mayor>=to_number(:b1) and cantidad_menor<=to_number(:b1)) and fecha=(select\
 max(f.fecha)  from fletes f ,control_fac cf where (codigo_emp=:b3 and f.fecha\
<=to_date(decode(to_number(:b4),1,to_number(((cf.ano||lpad(cf.mes_proceso,2,0)\
)||15)),2,to_number(to_char(last_day(to_date((cf.ano||lpad(cf.mes_proceso,2,0)\
),'yymm')),'yyyymmdd'))),'yymmdd'))))";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)744;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&fletes;
     sqlstm.sqhstl[0] = (unsigned long  )8;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&cantidad_envios;
     sqlstm.sqhstl[1] = (unsigned long  )12;
     sqlstm.sqindv[1] = (         short *)0;
     sqlstm.sqharm[1] = (unsigned long )0;
     sqlstm.sqhstv[2] = (unsigned char  *)&cantidad_envios;
     sqlstm.sqhstl[2] = (unsigned long  )12;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
     sqlstm.sqhstl[3] = (unsigned long  )7;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&numero_quincena;
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



     oraest  = sqlca.sqlcode;

     if (sqlca.sqlcode !=  1403 &&
         sqlca.sqlcode != -1405 &&
         sqlca.sqlcode != 0)
         fprintf (stderr, "Error leyendo C4 (%d)\n", sqlca.sqlcode);

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
/*************************************
 * Impresion de la linea de mensajes
 *************************************/

void pie_factura()
{
 fprintf(fp,"%s",vertical);
 fprintf(fp,"%s",vertical);
 if (pasan == 1)
    fprintf(fp,"%80s\n\n\n\n"," Pasan...");
 fprintf(fp,"%43s%2.1f%12s%s%s"," ",2.5," ",condensado_on,"Pagina ");
 fprintf(fp,"%s%d%s%2.0f%s\n",condensado_on,con_pag," DE ",total_paginas,condensado_off);
 fprintf(fp,"%s",vertical);
 con_lin=1;
 pasan=0;
 con_lin=0;
}


void imprime_vencmtos()
{
 total_deuda   =0;
 por_vencer    =0;
 a_30_dias     =0;
 a_60_dias     =0;
 a_90_dias     =0;
 a_120_dias    =0;
 oraest        =0;
 /* EXEC SQL OPEN C22; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 17;
 sqlstm.stmt = sq0005;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)778;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned long  )7;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&wcod;
 sqlstm.sqhstl[1] = (unsigned long  )12;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[2] = (unsigned long  )7;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&ano_mes_c;
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



 oraest  = 0;
 while (oraest==0) {
        /* EXEC SQL FETCH C22 INTO :vencimiento, :saldo_factura; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 17;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)808;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&vencimiento;
        sqlstm.sqhstl[0] = (unsigned long  )22;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&saldo_factura;
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



        oraest  = sqlca.sqlcode;
        if (sqlca.sqlcode == 1403) break;

        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo C22 (%d)\n", sqlca.sqlcode);

        vencimiento.arr      [vencimiento.len]     = '\0';
        acum_facturas();
 }
 if (pasan!=1) {
     fprintf (fp,"  %s%s",elite,enfatizado_on);
     if (por_vencer > 0)
        fprintf (fp,"  %s","POR VENCER");
     if (a_30_dias > 0)
        fprintf (fp,"\r%22s%s"," ","30 DIAS");
     if (a_60_dias > 0)
        fprintf (fp,"\r%39s%s"," ","60 DIAS");
     if (a_90_dias > 0)
        fprintf (fp,"\r%55s%s"," ","90 DIAS");
     if (a_120_dias > 0)
        fprintf (fp,"\r%67s%s%s"," ","SOBRE 90 DIAS",enfatizado_off);
     fprintf (fp,"\n");

     if (por_vencer > 0) {
        sprintf (cadena,"%9.2f",por_vencer);
        fprintf (fp,"%s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
     }
     if (a_30_dias > 0) {
        sprintf (cadena,"%9.2f",a_30_dias);
        fprintf (fp,"\r%17s%s"," ",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
     }
     if (a_60_dias > 0) {
        sprintf (cadena,"%9.2f",a_60_dias);
        fprintf (fp,"\r%35s%s%s",enfatizado_on," ",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
     }
     if (a_90_dias > 0) {
        sprintf (cadena,"%9.2f",a_90_dias);
        fprintf (fp,"\r%51s%s"," ",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
     }
     if (a_120_dias > 0) {
        sprintf (cadena,"%9.2f",a_120_dias);
        fprintf (fp,"\r%66s%s%s"," ",fmtnum("zzz,zzz,zz9.99",cadena,r_t),enfatizado_off);
     }
     fprintf(fp,"%s",diezcpi);
 }
}

/* Acumula las facturas y calcula su vencimiento */

void acum_facturas()
{
 if (strcmp(vencimiento.arr,fecha_cor) > 0) {
    por_vencer+=saldo_factura;
 }
 else {
       calcula_dias();
       if (total_dias < 31) {
           a_30_dias+=saldo_factura;
       }
       else {
            if (total_dias < 61) {
                a_60_dias+=saldo_factura;
            }
            else {
                 if (total_dias < 91) {
                     a_90_dias+=saldo_factura;
                 }
                 else {
                      a_120_dias+=saldo_factura;
                 }
            }
       }
 }
}

/* Calculo del vencimiento de la factura */

void calcula_dias()
{
 w_dia_corte=dia_corte;
 w_mes_corte=mes_corte;
 w_ano_corte=ano_corte;
 strcpy(cadena,vencimiento.arr);
 strorg(cadena,7,2);
 dia_vencmto=atoi(cadena);
 if (dia_vencmto > 27 && dia_vencmto < 32)
     dia_vencmto=30;
 strcpy(cadena,vencimiento.arr);
 strorg(cadena,5,2);
 mes_vencmto=atoi(cadena);
 strcpy(cadena,vencimiento.arr);
 strorg(cadena,1,4);
 ano_vencmto=atoi(cadena);
 if (dia_vencmto > w_dia_corte) {
     w_mes_corte--;
     w_dia_corte+=30;
 }
 if (mes_vencmto > w_mes_corte) {
     w_ano_corte--;
     w_mes_corte+=12;
 }
 total_tiempo_dia=w_dia_corte-dia_vencmto;
 total_tiempo_mes=w_mes_corte-mes_vencmto;
 total_tiempo_ano=w_ano_corte-ano_vencmto;
 total_dias=total_tiempo_dia+(total_tiempo_mes*30)+(total_tiempo_ano*360);
}
