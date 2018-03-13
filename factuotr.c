
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
    ".\\factuotr.pc"
};


static const unsigned long sqlctx = 1220027220;


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
   unsigned char    *sqhstv[29];
   unsigned long    sqhstl[29];
	    short   *sqindv[29];
   unsigned long    sqharm[29];
   unsigned long     *sqharc[29];
} sqlstm = {8,29};

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
 static const char *sq0004 = 
"select to_number(decode(si_no,'S','1','N','0','1'))  from fletescob where (c\
odigo_cli_may>=:b0 and codigo_cli_men<=:b0)           ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,307,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,160,0,5,332,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
50,0,0,3,1299,0,4,340,0,29,3,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,4,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,3,0,0,
2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
180,0,0,6,35,0,9,434,0,0,0,0,1,0,
194,0,0,6,0,0,13,441,0,1,0,0,1,0,2,9,0,0,
212,0,0,6,0,0,15,455,0,0,0,0,1,0,
226,0,0,5,0,0,15,574,0,0,0,0,1,0,
240,0,0,7,0,0,30,576,0,0,0,0,1,0,
254,0,0,8,409,0,4,585,0,8,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,3,
0,0,2,9,0,0,1,9,0,0,
300,0,0,9,109,0,4,848,0,5,1,0,1,0,2,4,0,0,2,3,0,0,2,3,0,0,2,3,0,0,1,9,0,0,
334,0,0,5,632,0,9,911,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
364,0,0,5,0,0,13,915,0,2,0,0,1,0,2,9,0,0,2,4,0,0,
386,0,0,10,136,0,4,983,0,3,2,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,
412,0,0,11,158,0,5,1004,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
438,0,0,12,613,0,3,1026,0,18,18,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,
524,0,0,13,123,0,4,1094,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
554,0,0,14,131,0,4,1155,0,4,2,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,
584,0,0,4,130,0,9,1175,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
606,0,0,4,0,0,13,1176,0,1,0,0,1,0,2,3,0,0,
624,0,0,4,0,0,15,1182,0,0,0,0,1,0,
638,0,0,15,286,0,4,1189,0,4,2,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,
668,0,0,16,405,0,4,1212,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
702,0,0,17,134,0,4,1263,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
732,0,0,18,260,0,2,1275,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
766,0,0,19,146,0,2,1289,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
792,0,0,20,150,0,4,1307,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
822,0,0,21,72,0,3,1321,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
852,0,0,22,117,0,5,1329,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
882,0,0,23,146,0,4,1339,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
912,0,0,24,72,0,3,1350,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
942,0,0,25,117,0,5,1356,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
972,0,0,26,232,0,3,1364,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1006,0,0,27,203,0,3,1423,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1068,0,0,28,203,0,3,1459,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1130,0,0,29,99,0,4,1473,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,
9,0,0,
};


/*****************************************************************
* ORDENES.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* ordenes.c. Listado de Ordenes de Produccion.
*
* Uso : ordenes numero_orden device userid/password
*
* Martin A. Toloza L. Creado Febrero 10-1998.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void ver_tipo_material();
void tipos1();
void tipos2();
void leer_material();
void leer_coloresv();
void leer_servicios();
void imprimo_servicios();
void imprime_vencmtos();
void totales();
void Rx_procesor();
void titulos();

void busco_cliente();
void busco_nro_factura();
void busco_total_hojas();
void mover_datos_factura();
void borro_acumulados();
void actualizo_facturas();
void actualizo_clientem();
void calculo_desctos();
void calculo_fletes();
void pie_factura();
void actu_totales();
void monletr();
void hacer_asiento();
void ver_inf();
void acum_facturas();
void calcula_dias();


				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Ordenes_c (C1) */
double  nit;
/* VARCHAR nitd           [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } nitd;

double  numero_orden;
int     digito;
/* VARCHAR direccion      [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } direccion;

/* VARCHAR codigo_cliente [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_cliente;

/* VARCHAR tipo_cliente   [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } tipo_cliente;

/* VARCHAR nomb_clie      [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_clie;

/* VARCHAR nomb_ciu       [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciu;

/* VARCHAR nomb_clase     [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } nomb_clase;

/* VARCHAR tipo_material  [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } tipo_material;

/* VARCHAR tipo_lista     [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } tipo_lista;

/* VARCHAR fecha_control  [70]; */ 
struct { unsigned short len; unsigned char arr[70]; } fecha_control;

/* VARCHAR cantidad_envios[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cantidad_envios;

/* VARCHAR codigo_emp[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR numero_quincena[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } numero_quincena;

/* VARCHAR wcod[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } wcod;

/* VARCHAR ano_mes_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes_c;

/* VARCHAR numero_factura[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } numero_factura;

/* VARCHAR vencimiento[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vencimiento;

int     nro_ordenes_c;
int     nro_ordenes_o;
int     mes_proceso;
int     ptaje_iva;
double  impue;
double  total_descto;
double  ultimo_numero;
double  costo_factura_an;
double  ptaje_oftal;
double  saldo_cliente;
float   nro_despachos;
double  valor_env;
double  fletes;
double  ptaje_conta;
int     cob_fletes;
double  valor_material;
double  valor_bis_mont;
double  valor_trat;
double  valor_color;
double  valor_desctos;
double  valor_otros;
double  valor_total;
float   diametro;
double  consecutivo;
double  telefono;
int     ano_mes;
float   numero_caja;
/* VARCHAR color_caja     [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } color_caja;

/* VARCHAR estado         [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } estado;

/* VARCHAR clase_material [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } clase_material;

/* VARCHAR orden          [12]; */ 
struct { unsigned short len; unsigned char arr[12]; } orden;

/* VARCHAR lado_lente     [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } lado_lente;

/* VARCHAR d_tipo_material[03]; */ 
struct { unsigned short len; unsigned char arr[3]; } d_tipo_material;

/* VARCHAR colorv         [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } colorv;

float   esfera;
float   cilindro;
int     eje;
float   prisma;
/* VARCHAR base           [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } base;

float   dir_prisma;
float   adicion;
int     cantidad;
double  valor_venta;
/* VARCHAR codigo_articulo[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } codigo_articulo;

/* VARCHAR terminado      [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } terminado;

/* VARCHAR esp_cial       [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } esp_cial;

float   d_diametro;
/* VARCHAR d_nomb_clase   [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } d_nomb_clase;

/* VARCHAR clase_mat_fac  [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } clase_mat_fac;

/* VARCHAR ano_mesa       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesa;

/* VARCHAR consecutivoa   [08]; */ 
struct { unsigned short len; unsigned char arr[8]; } consecutivoa;

                                 /* Tipos (C3) */
/* VARCHAR nomb_tipol     [33]; */ 
struct { unsigned short len; unsigned char arr[33]; } nomb_tipol;

/* VARCHAR tipo_mat       [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } tipo_mat;

/* VARCHAR tipo_lis       [06]; */ 
struct { unsigned short len; unsigned char arr[6]; } tipo_lis;

/* VARCHAR clase_mat      [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } clase_mat;

                                 /* Tipos (C4) */
/* VARCHAR nomb_tipo      [33]; */ 
struct { unsigned short len; unsigned char arr[33]; } nomb_tipo;

                                 /* Almacen (C5) */
/* VARCHAR nomb_tipoa     [33]; */ 
struct { unsigned short len; unsigned char arr[33]; } nomb_tipoa;

/* VARCHAR codigo_art     [13]; */ 
struct { unsigned short len; unsigned char arr[13]; } codigo_art;

                                 /* Coloresv (C12) */
/* VARCHAR nomb_color     [11]; */ 
struct { unsigned short len; unsigned char arr[11]; } nomb_color;

/* VARCHAR colorva        [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } colorva;

                                 /* Servicios_len (C7) */
/* VARCHAR nomb_servicio  [26]; */ 
struct { unsigned short len; unsigned char arr[26]; } nomb_servicio;

int     cantidad_srv;
double  valor_servicio;
/* VARCHAR tipo_servicio  [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } tipo_servicio;

                                 /* Ordenes_r (C8) */
/* VARCHAR observacion    [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } observacion;

float   gaveta;
float   factura;
                                 /* Ordenes_d (C9) */
double  tot_lin;
                                 /* Ordenes_o (C10) */
double  tot_lin2;

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

/* VARCHAR valor_pagos_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } valor_pagos_c;

/* VARCHAR total_pag_c[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } total_pag_c;

/* VARCHAR fecha_vencmto[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_vencmto;

/* VARCHAR fecha_corte[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_corte;


/* VARCHAR vecinf      [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecinf[20];

                                 /* Movto_C (C3) */
/* VARCHAR comprobanteb[07]; */ 
struct { unsigned short len; unsigned char arr[7]; } comprobanteb;

/* VARCHAR consecutivob[07]; */ 
struct { unsigned short len; unsigned char arr[7]; } consecutivob;

/* VARCHAR fechab      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechab;

                                 /* Movto_D (C4) */
/* VARCHAR secuenciab  [7]; */ 
struct { unsigned short len; unsigned char arr[7]; } secuenciab;

/* VARCHAR cuentab     [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuentab;

/* VARCHAR infa        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infa;

/* VARCHAR infb        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infb;

/* VARCHAR infc        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infc;

/* VARCHAR infd        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infd;

/* VARCHAR codigo_nitb [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nitb;

/* VARCHAR codigo_nb   [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nb;

/* VARCHAR valor_debb  [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } valor_debb;

/* VARCHAR valor_creb  [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } valor_creb;

char    inf         [5][14];
                                 /* Control_Mes (C5) */
double  consecutivo;
/* VARCHAR fuenteb     [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } fuenteb;

double  consecutivo15;
float   total_paginas=1;
                                 /* Acumulados (C6) */
/* VARCHAR cuenta_db   [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuenta_db;

/* VARCHAR cuenta_cr   [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuenta_cr;

/* VARCHAR fecha_asto  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_asto;

/* VARCHAR codigo      [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo;

/* VARCHAR ano_mesi    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR codigox     [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } codigox;

                                 /* Plan (C8) */
/* VARCHAR veca        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } veca;

/* VARCHAR vecb        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecb;

/* VARCHAR vecc        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecc;

/* VARCHAR vecd        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecd;

char    vecplan     [5][14];
double  saldo_factura;
int     ano;

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
#define A_F1     "###,###.##"
char *fmtnum(), r_t[100];
char    fecha_corte2[20];
char    fecha_cor[20];
char    tit[100];
char    division[5];
int     con_pag;                                   /* Contador de Paginas */
int     con_len;                                   /* Contador de Paginas */
int     con_lin= 33;                               /* Contador de Lineas  */
int     loop_2 = 0;
int     traidos = 0;
int     num_ret = 0;
int     staora = 0;
int     oraest = 0;
int     pasan=0;
double  sub_total_o;
double  sub_total_c;
char    fecha[20];
char    hora[12];
int     tip;
char    nombre_tipo[33];
double  tot_servicio;
double  subtotal;
int     i, j, k;
float   c;
char    cadena[100];
char    cadena2[100];
char    lineas[132];
int     oraest4;
int     nro_ordenes;
double  sub_total;
double  costo_factura;
double  secuencia;
float   codigo_nit;
double  total_dias;
int     w_dia_corte;
int     dia_corte;
int     w_mes_corte;
int     mes_corte;
int     w_ano_corte;
int     ano_corte;
double  total_deuda;
double  por_vencer;
double  a_30_dias;
double  a_60_dias;
double  a_90_dias;
double  a_120_dias;
int     dia_vencmto;
int     mes_vencmto;
int     ano_vencmto;
int     total_tiempo_dia;
int     total_tiempo_mes;
int     total_tiempo_ano;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 5)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : ordenes numero_orden nit device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (orden.arr, argv[1]);
       orden.len   =      strlen(orden.arr);
       strcpy (nitd.arr, argv[2]);
       nitd.len    =      strlen(nitd.arr);
       strcpy (device,    argv[3]);
       strlow (device);

    if (!strpos ("/", argv[4]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,   argv[4]);
    uid.len   =        strlen(uid.arr);

    strcpy(codigo_emp.arr,"2");
    codigo_emp.len  = strlen(codigo_emp.arr);
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

    /* EXEC SQL update clientes
             set    codigo_nit = (select codigo_nit
                                  from   nits
                                  where  nit = :nitd)
             where  codigo_cliente = (select codigo_cliente
                                      from   ordenes_c
                                      where  numero_orden = :orden); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.stmt = "update clientes  set codigo_nit=(select codigo_nit  from \
nits where nit=:b0) where codigo_cliente=(select codigo_cliente  from ordenes_\
c where numero_orden=:b1)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)28;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nitd;
    sqlstm.sqhstl[0] = (unsigned long  )22;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&orden;
    sqlstm.sqhstl[1] = (unsigned long  )14;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL select numero_orden, codigo_cliente, n.nombre,
                    nvl(n.nombre_muni,c.nombre),
                    cl.nombre, o.tipo_material, o.tipo_lista,
                    to_date(
                    decode(cf.numero_quincena,
                      1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||15),
                      2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd'))),'yymmdd')+15,
                    to_date(to_char(to_date(
                    decode(cf.numero_quincena,
                      1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||15),
                      2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd'))),'yymmdd'),'yyyymmdd'),'yymmdd'),
                    nvl(valor_material,0),
                    nvl(valor_bis_mont,0), nvl(valor_trat,0),
                    nvl(valor_color,0),    nvl(valor_desctos,0),
                    nvl(valor_otros,0),    nvl(valor_total,0),
                    nvl(diam_pedido,0), o.consecutivo, o.ano_mes,
                    o.numero_caja, o.color_caja, o.estado, o.clase_material,
                    n.nit, n.digito, n.direccion
             into  :numero_orden, :codigo_cliente, :nomb_clie, :nomb_ciu,
                   :nomb_clase, :tipo_material, :tipo_lista, :fecha_vencmto,
                   :fecha_corte, :valor_material, :valor_bis_mont, :valor_trat,
                   :valor_color, :valor_desctos, :valor_otros, :valor_total,
                   :diametro, :consecutivo, :ano_mes, :numero_caja, :color_caja,
                   :estado, :clase_material, :nit, :digito, :direccion
             from   nits n, ordenes_c o, ciudades c, clase cl, control_fac cf
             where  n.codigo_nit in (select codigo_nit
                                     from   clientes
                                     where  clientes.codigo_cliente in
                                     (select codigo_cliente
                                      from ordenes_c
                                      where numero_orden = :orden))    and
                    n.codigo_ciu     = c.codigo                        and
                    o.clase_material = cl.clase_material               and
                    cf.codigo_emp    = to_number(:codigo_emp)          and
                    numero_orden     = :orden; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 29;
    sqlbuft((void **)0, 
      "select numero_orden ,codigo_cliente ,n.nombre ,nvl(n.nombre_muni,c.no\
mbre) ,cl.nombre ,o.tipo_material ,o.tipo_lista ,(to_date(decode(cf.numero_q\
uincena,1,to_number(((cf.ano||lpad(cf.mes_proceso,2,0))||15)),2,to_number(to\
_char(last_day(to_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yymm')),'yyyymmdd\
'))),'yymmdd')+15) ,to_date(to_char(to_date(decode(cf.numero_quincena,1,to_n\
umber(((cf.ano||lpad(cf.mes_proceso,2,0))||15)),2,to_number(to_char(last_day\
(to_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yymm')),'yyyymmdd'))),'yymmdd')\
,'yyyymmdd'),'yymmdd') ,nvl(valor_material,0) ,nvl(valor_bis_mont,0) ,nvl(va\
lor_trat,0) ,nvl(valor_color,0) ,nvl(valor_desctos,0) ,nvl(valor_otros,0) ,n\
vl(valor_total,0) ,nvl(diam_pedido,0) ,o.consecutivo ,o.ano_mes ,o.numero_ca\
ja ,o.color_caja ,o.estado ,o.clase_material ,n.nit ,n.digito ,n.direccion i\
nto :b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b12,:b13,:b14,:b15,:b\
16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24,:b25  from nits n ,ordenes_c o ,c\
iudades c ,clase cl ,control_fac cf where (");
    sqlstm.stmt = "(((n.codigo_nit in (select codigo_nit  from clientes wher\
e clientes.codigo_cliente in (select codigo_cliente  from ordenes_c where nume\
ro_orden=:b26)) and n.codigo_ciu=c.codigo) and o.clase_material=cl.clase_mater\
ial) and cf.codigo_emp=to_number(:b27)) and numero_orden=:b26)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)50;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&numero_orden;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_cliente;
    sqlstm.sqhstl[1] = (unsigned long  )8;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&nomb_clie;
    sqlstm.sqhstl[2] = (unsigned long  )53;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&nomb_ciu;
    sqlstm.sqhstl[3] = (unsigned long  )32;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&nomb_clase;
    sqlstm.sqhstl[4] = (unsigned long  )16;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&tipo_material;
    sqlstm.sqhstl[5] = (unsigned long  )5;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&tipo_lista;
    sqlstm.sqhstl[6] = (unsigned long  )8;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&fecha_vencmto;
    sqlstm.sqhstl[7] = (unsigned long  )22;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&fecha_corte;
    sqlstm.sqhstl[8] = (unsigned long  )22;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&valor_material;
    sqlstm.sqhstl[9] = (unsigned long  )8;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&valor_bis_mont;
    sqlstm.sqhstl[10] = (unsigned long  )8;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&valor_trat;
    sqlstm.sqhstl[11] = (unsigned long  )8;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&valor_color;
    sqlstm.sqhstl[12] = (unsigned long  )8;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&valor_desctos;
    sqlstm.sqhstl[13] = (unsigned long  )8;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&valor_otros;
    sqlstm.sqhstl[14] = (unsigned long  )8;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&valor_total;
    sqlstm.sqhstl[15] = (unsigned long  )8;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&diametro;
    sqlstm.sqhstl[16] = (unsigned long  )4;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&consecutivo;
    sqlstm.sqhstl[17] = (unsigned long  )8;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&ano_mes;
    sqlstm.sqhstl[18] = (unsigned long  )4;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&numero_caja;
    sqlstm.sqhstl[19] = (unsigned long  )4;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&color_caja;
    sqlstm.sqhstl[20] = (unsigned long  )4;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&estado;
    sqlstm.sqhstl[21] = (unsigned long  )4;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&clase_material;
    sqlstm.sqhstl[22] = (unsigned long  )5;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&nit;
    sqlstm.sqhstl[23] = (unsigned long  )8;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&digito;
    sqlstm.sqhstl[24] = (unsigned long  )4;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&direccion;
    sqlstm.sqhstl[25] = (unsigned long  )52;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&orden;
    sqlstm.sqhstl[26] = (unsigned long  )14;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[27] = (unsigned long  )7;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&orden;
    sqlstm.sqhstl[28] = (unsigned long  )14;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = sqlca.sqlcode;
    if (staora != -1405 && staora != 1403 && staora != 0)
        fprintf (stderr, "Error leyendo Ordenes_c (%d)\n", staora);

    codigo_cliente.arr [codigo_cliente.len] = '\0';
    nomb_clie.arr      [nomb_clie.len]      = '\0';
    nomb_ciu.arr       [nomb_ciu.len]       = '\0';
    nomb_clase.arr     [nomb_clase.len]     = '\0';
    fecha_control.arr  [fecha_control.len]  = '\0';
    tipo_material.arr  [tipo_material.len]  = '\0';
    tipo_lista.arr     [tipo_lista.len]     = '\0';
    color_caja.arr     [color_caja.len]     = '\0';
    estado.arr         [estado.len]         = '\0';
    clase_material.arr [clase_material.len] = '\0';
    direccion.arr      [direccion.len]      = '\0';

    sprintf(ano_mesa.arr,"%6d",ano_mes);
    ano_mesa.len     =   strlen(ano_mesa.arr);
    sprintf(consecutivoa.arr,"%5.0f",consecutivo);
    consecutivoa.len =   strlen(consecutivoa.arr);


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


/***************************************/

    /* EXEC SQL DECLARE C8 CURSOR FOR
             select inf
             from   infacu; */ 


    /* EXEC SQL OPEN C8; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 29;
    sqlstm.stmt = sq0006;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)180;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = 0;
    traidos = 0;
    num_ret = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C8 INTO :vecinf; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 29;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)194;
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
             fprintf (stderr, "Error leyendo C8 (%d)\n", sqlca.sqlcode);

          staora  = sqlca.sqlcode;
          traidos = sqlca.sqlerrd[2];

          for (loop_2 = 0; loop_2 < (traidos - num_ret); loop_2++) {
              vecinf[loop_2].arr  [vecinf[loop_2].len] = '\0';
          }
          num_ret = traidos;
    }
    k = traidos;
    /* EXEC SQL CLOSE C8; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 29;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)212;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



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

strcpy(fecha,fecha_control.arr);
strorg(fecha,1,11);
strcpy(hora,fecha_control.arr);
strorg(hora,13,11);

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
strcpy(tipo_cliente.arr,"0");

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

      if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C1 (%d)\n", sqlca.sqlcode);
/*
      codigo_cliente.arr      [codigo_cliente.len]     = '\0';
      clase_material.arr      [clase_material.len]     = '\0';
      fecha_vencmto.arr       [fecha_vencmto.len]      = '\0';
      fecha_corte.arr         [fecha_corte.len]        = '\0';
*/
      oraest=1;

}

totales();

cierre_impresora();

/*****************************************
** COMMIT LOS CAMBIOS A LA BASE DE DATOS *
******************************************/

/* EXEC SQL CLOSE C22; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 29;
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)226;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



/* EXEC SQL COMMIT WORK RELEASE; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 29;
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)240;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


//    EXEC SQL ROLLBACK WORK RELEASE;

    exit   (0);
}

void busco_cliente()
{
/* C9 */
 /* EXEC SQL
        select n.nombre, nvl(n.nombre_muni,c.nombre), n.direccion,
               max(nvl(t.numero,0)), n.nit, nvl(n.digito,-1),
               n.codigo_nit
        into  :nomb_clie, :nomb_ciu, :direccion, :telefono, :nit, :digito,
              :codigo_nitb
        from  nits n, ciudades c, telefonos t, clientes cl
        where n.codigo_nit      = cl.codigo_nit                       and
              cl.codigo_cliente = :wcod                               and
              n.codigo_ciu      = c.codigo                            and
              n.codigo_nit      = t.codigo_nit(+)
        group by n.nombre, n.nombre_muni, c.nombre, n.direccion,
                 n.nit,    n.digito, n.codigo_nit; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 29;
 sqlstm.stmt = "select n.nombre ,nvl(n.nombre_muni,c.nombre) ,n.direccion ,m\
ax(nvl(t.numero,0)) ,n.nit ,nvl(n.digito,(-1)) ,n.codigo_nit into :b0,:b1,:b2,\
:b3,:b4,:b5,:b6  from nits n ,ciudades c ,telefonos t ,clientes cl where (((n.\
codigo_nit=cl.codigo_nit and cl.codigo_cliente=:b7) and n.codigo_ciu=c.codigo)\
 and n.codigo_nit=t.codigo_nit(+)) group by n.nombre,n.nombre_muni,c.nombre,n.\
direccion,n.nit,n.digito,n.codigo_nit";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)254;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
 sqlstm.sqhstl[0] = (unsigned long  )53;
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
 sqlstm.sqhstv[6] = (unsigned char  *)&codigo_nitb;
 sqlstm.sqhstl[6] = (unsigned long  )8;
 sqlstm.sqindv[6] = (         short *)0;
 sqlstm.sqharm[6] = (unsigned long )0;
 sqlstm.sqhstv[7] = (unsigned char  *)&wcod;
 sqlstm.sqhstl[7] = (unsigned long  )12;
 sqlstm.sqindv[7] = (         short *)0;
 sqlstm.sqharm[7] = (unsigned long )0;
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
        codigo_nitb.arr    [codigo_nitb.len]   = '\0';

        oraest  = sqlca.sqlcode;

        if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo C9 (%d)\n", sqlca.sqlcode);

}


void busco_total_hojas()
{
/* C2 */
/*
 EXEC SQL
      select 1
      into  :total_paginas
      from  ordenes_c o, clientese e, control_fac cf
      where to_number(:codigo_emp) = nvl(e.codigo_emp,2)                and
            to_number(:codigo_emp) = cf.codigo_emp                      and
            o.codigo_cliente       = e.codigo_cliente(+)                and
            (:tipo_cliente)        = nvl(e.tipo_cliente,'0')            and
            to_number(:numero_quincena) = e.numero_quincena(+)          and
            (:wcod)                = o.codigo_cliente                   and
            nvl(o.estado,0) <> 'R'                                      and
            nvl(o.contado,0) = 0                                        and
            to_number(to_char(o.fecha_control,'yyyymmdd')) <=
            decode(to_number(:numero_quincena),
                   1,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm'),'yyyymm')||15),
                   2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd'))) and
            to_number(to_char(o.fecha_control,'yyyymmdd')) >=
            decode(to_number(:numero_quincena),
                  1,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm'),'yyyymm')||lpad(1,2,0)),
                  2,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm'),'yyyymm')||16));

      oraest  = sqlca.sqlcode;

      if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C9 (%d)\n", sqlca.sqlcode);

*/
}

/************************
* TOTALES()
*    Imprime totales en el archivo de spool.
*/

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
 hacer_asiento();

}


/************************
* Rx_procesor
*    Imprime Rx_procesor.
*/

void Rx_procesor()
{
/*  system("rx_procesor"); */
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

 fprintf(fp,"%s%s%-7s%s\n",condensado_off,diezcpi," ",nomb_clie.arr);
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
 strcpy(cadena2,fecha_corte.arr);
/* strcpy(cadena2,"22-JUN-2000"); */
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
 strcpy(cadena,fecha_corte.arr);
/* strcpy(cadena,"22-JUN-2000"); */
 numero_fecha(cadena);
 strcpy(cadena,cadena);
 /***********************************/

 /***********************************/
 strcpy(cadena2,fecha_vencmto.arr);
/* strcpy(cadena2,"22-JUN-2000"); */
 numero_fecha(cadena2);
 strcpy(cadena2,cadena2);
 /***********************************/

 fprintf(fp,"%17s%12s %9s\n","15",cadena,cadena2);
 strcpy(cadena,codigo_cliente.arr);
 strorg(cadena,1,2);
 if (!strcmp(cadena,"PM")||!strcmp(cadena,"AB"))
      fprintf(fp,"%7s%s%s\n\n\n"," ",nomb_ciu.arr,".");
 else fprintf(fp,"%7s%s%s\n\n\n"," ",nomb_ciu.arr," - COLOMBIA.");

}

void actu_totales()
{
 busco_nro_factura();
 /* calculo_desctos();
 calculo_fletes();
 if (valor_env == 0)
    {
     if (c >= 1 && c <= 1.5)
        fletes=nro_despachos*fletes*cob_fletes;
     else fletes=nro_ordenes*fletes*cob_fletes;
    }
 */
 sub_total=sub_total_o+sub_total_c;
 impue=0;
 if(!strcmp(tipo_cliente.arr,"0"))
    impue=(fletes*ptaje_iva)/100;
 impue=redondo(impue);
 costo_factura=sub_total-total_descto+impue+fletes;

 sprintf(cadena,"%9.0f",sub_total-total_descto+fletes);
 fprintf(fp,"\n%s%117s%2d%s%s",condensado_on," ",ptaje_iva,"%",condensado_off);
 fprintf(fp,"%s%s",enfatizado_off,elite);
 sprintf (cadena,"%8.0f",impue);
 fprintf(fp,"%13s\n",fmtnum("zz,zzz,zz9",cadena,r_t));
 con_lin+=2;
 actualizo_facturas();

 sprintf (cadena,"%9.0f",costo_factura);
 fprintf(fp,"\r%97s\n\n",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 con_lin+=2;

 if (con_lin <= 24)
     fprintf(fp,"%c\r",11);

 strcpy(wcod.arr,codigo_cliente.arr);
 wcod.len = strlen(wcod.arr);
 hacer_asiento();
 borro_acumulados();
}

void busco_nro_factura()
{
/* C8 */
 /* EXEC SQL
/o
      select ultimo_numero, ptaje_iva
      into  :ultimo_numero, :ptaje_iva
      from   control_fac
      where  codigo_emp = :codigo_emp
      for update;

      oraest  = sqlca.sqlcode;

      if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C9 (%d)\n", sqlca.sqlcode);

o/
      select ultimo_numero, ano, mes_proceso, ptaje_iva
      into  :ultimo_numero, :ano, :mes_proceso, :ptaje_iva
      from   control_fac
      where  codigo_emp = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 29;
 sqlstm.stmt = "select ultimo_numero ,ano ,mes_proceso ,ptaje_iva into :b0,:\
b1,:b2,:b3  from control_fac where codigo_emp=:b4";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)300;
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
 sqlstm.sqhstv[3] = (unsigned char  *)&ptaje_iva;
 sqlstm.sqhstl[3] = (unsigned long  )4;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&codigo_emp;
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

      if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C9 (%d)\n", sqlca.sqlcode);

 if (strcmp(numero_factura.arr,"0")) {
     ultimo_numero=atof(numero_factura.arr);
 }

 sprintf(ano_mes_c.arr,"%d",ano);
 sprintf(cadena,"%02d",mes_proceso);
 strcat(ano_mes_c.arr,cadena);
 ano_mes_c.len = strlen(ano_mes_c.arr);

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
 sqlstm.arrsiz = 29;
 sqlstm.stmt = sq0005;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)334;
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
        sqlstm.arrsiz = 29;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)364;
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
}

void actualizo_facturas()
{
 /* C21 */
 /* EXEC SQL
    select valor_neto
    into  :costo_factura_an
    from   facturas
    where  tipo_factura   = to_number(:codigo_emp) and
           tipo_documento =                    'C' and
           numero_factura = to_number(:numero_factura); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 29;
 sqlstm.stmt = "select valor_neto into :b0  from facturas where ((tipo_factu\
ra=to_number(:b1) and tipo_documento='C') and numero_factura=to_number(:b2))";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)386;
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

 mover_datos_factura();
 actualizo_clientem();

 oraest = 0;
 sprintf(total_pag_c.arr,"%2.0f",total_paginas);
 total_pag_c.len = strlen(total_pag_c.arr);

 /* C7 */

  /* EXEC SQL
        update control_fac
        set ultimo_numero = ultimo_numero + to_number(:total_pag_c),
            fecha         = greatest(to_date(nvl(fecha,sysdate)),to_date(:fecha_corte_c))
        where codigo_emp  = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 29;
  sqlstm.stmt = "update control_fac  set ultimo_numero=(ultimo_numero+to_num\
ber(:b0)),fecha=greatest(to_date(nvl(fecha,sysdate )),to_date(:b1)) where codi\
go_emp=to_number(:b2)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)412;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&total_pag_c;
  sqlstm.sqhstl[0] = (unsigned long  )12;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&fecha_corte_c;
  sqlstm.sqhstl[1] = (unsigned long  )22;
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
             'C',0,
             to_number(:total_pag_c),
             'C',
             :codigo_nitb,
             0); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 29;
 sqlstm.stmt = "insert into facturas(NUMERO_FACTURA,CODIGO_CLIENTE,FECHA_DOC\
UMENTO,FECHA_VENCMTO,CANT_ORDENES_O,CANT_ORDENES_C,CANT_DESPACHOS,VALOR_OFTALM\
ICA,VALOR_CONTACTO,VALOR_DESCUENTO,VALOR_FLETES,VALOR_IVA,PTAJE_IVA,VALOR_NETO\
,VALOR_PAGOS,FECHA_PAGO,ESTADO_CARTERA,TIPO_FACTURA,TIPO_DOCUMENTO,ESTADO_FACT\
URA,HOJAS,CONTADO,CODIGO_NIT,RETE_FTE) values (to_number(:b0),:b1,to_date(:b2)\
,to_date(:b3),to_number(:b4),to_number(:b5),to_number(:b6),to_number(:b7),to_n\
umber(:b8),to_number(:b9),to_number(:b10),to_number(:b11),to_number(:b12),to_n\
umber(:b13),to_number(:b14),null ,0,to_number(:b15),'C',0,to_number(:b16),'C',\
:b17,0)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)438;
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
 sqlstm.sqhstv[17] = (unsigned char  *)&codigo_nitb;
 sqlstm.sqhstl[17] = (unsigned long  )8;
 sqlstm.sqindv[17] = (         short *)0;
 sqlstm.sqharm[17] = (unsigned long )0;
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

}

void actualizo_clientem()
{
 oraest = 0;
/* C15 */
   /* EXEC SQL
        select saldoc
        into  :saldo_cliente
        from  clientem
        where codigo_emp     = to_number(:codigo_emp) and
              codigo_cliente =          (:wcod) and
              ano_mes        = to_number(:ano_mes_c); */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 29;
   sqlstm.stmt = "select saldoc into :b0  from clientem where ((codigo_emp=t\
o_number(:b1) and codigo_cliente=:b2) and ano_mes=to_number(:b3))";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)524;
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
// sprintf(valor_pagos_c.arr,"%9.0f",costo_factura);
 sprintf(valor_pagos_c.arr,"%9.0f",0);
 valor_pagos_c.len = strlen(valor_pagos_c.arr);
 strcpy(tipo_cliente_c.arr,codigo_emp.arr);
 tipo_cliente_c.len   = strlen(tipo_cliente_c.arr);

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
 sqlstm.arrsiz = 29;
 sqlstm.stmt = "select pctaje_oftal ,pctaje_conta into :b0,:b1  from descuen\
tos where ((codigo_cliente=:b2 and numero_quincena=:b3) and estado='A')";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)554;
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
 sqlstm.arrsiz = 29;
 sqlstm.stmt = sq0004;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)584;
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
 sqlstm.arrsiz = 29;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)606;
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
 sqlstm.arrsiz = 29;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)624;
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
 sqlstm.arrsiz = 29;
 sqlstm.stmt = "select nvl(cantidad,0) ,nvl(valor,0) into :b0,:b1  from envi\
os ,control_fac where (((codigo_cliente=:b2 and control_fac.codigo_emp=to_numb\
er(:b3)) and to_number((control_fac.ano||lpad(control_fac.mes_proceso,2,0)))=e\
nvios.ano_mes) and control_fac.numero_quincena=envios.numero_quincena)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)638;
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
     sqlstm.arrsiz = 29;
     sqlstm.stmt = "select nvl(valor,0) into :b0  from fletes where ((cantid\
ad_mayor>=to_number(:b1) and cantidad_menor<=to_number(:b1)) and fecha=(select\
 max(f.fecha)  from fletes f ,control_fac cf where (codigo_emp=:b3 and f.fecha\
<=to_date(decode(to_number(:b4),1,to_number(((cf.ano||lpad(cf.mes_proceso,2,0)\
)||15)),2,to_number(to_char(last_day(to_date((cf.ano||lpad(cf.mes_proceso,2,0)\
),'yymm')),'yyyymmdd'))),'yymmdd'))))";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)668;
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

void hacer_asiento()
{
  strcpy(fuenteb.arr,"15");
  fuenteb.len = strlen(fuenteb.arr);

  strcpy(comprobanteb.arr,ultimo_numero_c.arr);
  comprobanteb.len = strlen(comprobanteb.arr);

  strcpy(fechab.arr,fecha_corte_c.arr);
  fechab.len = strlen(fechab.arr);

//  printf("0) codigo_emp<%s> ano_mesa<%s> comprobanteb<%s> fechab<%s>", codigo_emp.arr, ano_mesa.arr, comprobanteb.arr, fechab.arr); getchar();

/* Lee consecutivo de control_mes Fte 15 Cns ultimo Asiento Aj x Depreciacion */
//  printf("1) fuenteb<%s> ano_mesa<%s> codigo_emp<%s>",fuenteb.arr,ano_mesa.arr,codigo_emp.arr); getchar();
  /* EXEC SQL select consecutivo   into :consecutivo15
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesa)      and
                 codigo_emp   = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 29;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3))";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)702;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo15;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&fuenteb;
  sqlstm.sqhstl[1] = (unsigned long  )5;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesa;
  sqlstm.sqhstl[2] = (unsigned long  )22;
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



  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
      fprintf (stderr, "Error leyendo Control_Mes (%d)\n", sqlca.sqlcode);
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo15);
        consecutivob.len = strlen(consecutivob.arr);

        /* EXEC SQL delete from movto_d
                 where codigo_emp   = to_number(:codigo_emp)   and
                       ano_mes      = to_number(:ano_mesa)     and
                       consecutivo  = (select consecutivo
                                       from   movto_c
                                       where codigo_emp  = to_number(:codigo_emp)   and
                                             comprobante = to_number(:comprobanteb) and
                                             clase       = 'VT'                     and
                                             tipo        = '3'                      and
                                             ano_mes     = to_number(:ano_mesa)); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 29;
        sqlstm.stmt = "delete from movto_d  where ((codigo_emp=to_number(:b0\
) and ano_mes=to_number(:b1)) and consecutivo=(select consecutivo  from movto_\
c where ((((codigo_emp=to_number(:b0) and comprobante=to_number(:b3)) and clas\
e='VT') and tipo='3') and ano_mes=to_number(:b1))))";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)732;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned long  )7;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
        sqlstm.sqhstl[1] = (unsigned long  )22;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[2] = (unsigned long  )7;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&comprobanteb;
        sqlstm.sqhstl[3] = (unsigned long  )9;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&ano_mesa;
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



        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo Movto_D (%d)\n", sqlca.sqlcode);

        /* EXEC SQL delete from movto_c
                 where codigo_emp   = to_number(:codigo_emp)   and
                       comprobante  = to_number(:comprobanteb) and
                       clase        = 'VT'                     and
                       tipo         = '3'                      and
                       ano_mes      = to_number(:ano_mesa); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 29;
        sqlstm.stmt = "delete from movto_c  where ((((codigo_emp=to_number(:\
b0) and comprobante=to_number(:b1)) and clase='VT') and tipo='3') and ano_mes=\
to_number(:b2))";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)766;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned long  )7;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&comprobanteb;
        sqlstm.sqhstl[1] = (unsigned long  )9;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesa;
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



        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo Movto_C (%d)\n", sqlca.sqlcode);

  }

  strcpy(fuenteb.arr,"08");
  fuenteb.len = strlen(fuenteb.arr);

  /* Lee consecutivo de Control_mes Fte 08 sgte consecutivo */

//  printf("2) fuenteb<%s> ano_mesa<%s> codigo_emp<%s>",fuenteb.arr,ano_mesa.arr,codigo_emp.arr); getchar();
  /* EXEC SQL select consecutivo+1 into :consecutivo
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesa)      and
                 codigo_emp   = to_number(:codigo_emp)
           for update; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 29;
  sqlstm.stmt = "select (consecutivo+1) into :b0  from control_mes where ((f\
uente=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3)\
) for update ";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)792;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&fuenteb;
  sqlstm.sqhstl[1] = (unsigned long  )5;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesa;
  sqlstm.sqhstl[2] = (unsigned long  )22;
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



  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes 08 (%d)\n", sqlca.sqlcode);
      consecutivo=1;
      sprintf(consecutivob.arr,"%5.0f",consecutivo);
      consecutivob.len = strlen(consecutivob.arr);
               /* Inserta en Control_Mes Fte 08 si no existe (C11) */
      /* EXEC SQL insert into control_mes
               values (:fuenteb, :ano_mesa, 'CONTROL VENTA CONTADO',
                       :consecutivob, :codigo_emp); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 29;
      sqlstm.stmt = "insert into control_mes values (:b0,:b1,'CONTROL VENTA \
CONTADO',:b2,:b3)";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)822;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&fuenteb;
      sqlstm.sqhstl[0] = (unsigned long  )5;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
      sqlstm.sqhstl[1] = (unsigned long  )22;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
      sqlstm.sqhstl[2] = (unsigned long  )9;
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


     }
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo);
        consecutivob.len = strlen(consecutivob.arr);
               /* Actualiza Cns de Fte 08 en control_mes (C12) */
        /* EXEC SQL update control_mes
                 set    consecutivo = :consecutivob
                 where codigo_emp   = to_number(:codigo_emp)    and
                       ano_mes      = to_number(:ano_mesa)      and
                       fuente       = :fuenteb; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 29;
        sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((codig\
o_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3)";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)852;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&consecutivob;
        sqlstm.sqhstl[0] = (unsigned long  )9;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[1] = (unsigned long  )7;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesa;
        sqlstm.sqhstl[2] = (unsigned long  )22;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&fuenteb;
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


  }

  strcpy(fuenteb.arr,"15");
  fuenteb.len = strlen(fuenteb.arr);

  /* EXEC SQL select consecutivo   into :consecutivo15
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesa)      and
                 codigo_emp   = to_number(:codigo_emp)
           for update; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 29;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3)) fo\
r update ";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)882;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo15;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&fuenteb;
  sqlstm.sqhstl[1] = (unsigned long  )5;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesa;
  sqlstm.sqhstl[2] = (unsigned long  )22;
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



  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes 15 (%d)\n", sqlca.sqlcode);
               /* Inserta en Control_Mes Fte 15 si no existe (C11) */
      /* EXEC SQL insert into control_mes
               values (:fuenteb, :ano_mesa, 'CONTROL VENTA CONTADO',
                       :consecutivob, :codigo_emp); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 29;
      sqlstm.stmt = "insert into control_mes values (:b0,:b1,'CONTROL VENTA \
CONTADO',:b2,:b3)";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)912;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&fuenteb;
      sqlstm.sqhstl[0] = (unsigned long  )5;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
      sqlstm.sqhstl[1] = (unsigned long  )22;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
      sqlstm.sqhstl[2] = (unsigned long  )9;
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


     }
  else {
               /* Actualiza Cns de Fte 15 en control_mes (C12) */
        /* EXEC SQL update control_mes
                 set    consecutivo = :consecutivob
                 where codigo_emp   = to_number(:codigo_emp)    and
                       ano_mes      = to_number(:ano_mesa)      and
                       fuente       = :fuenteb; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 29;
        sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((codig\
o_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3)";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)942;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&consecutivob;
        sqlstm.sqhstl[0] = (unsigned long  )9;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[1] = (unsigned long  )7;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesa;
        sqlstm.sqhstl[2] = (unsigned long  )22;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&fuenteb;
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


  }

//  printf("3) codigo_emp<%s> ano_mesa<%s> comprobanteb<%s> consecutivob<%s> fechab<%s>", codigo_emp.arr,ano_mesa.arr,comprobanteb.arr,consecutivob.arr,fechab.arr); getchar();
  /* EXEC SQL insert into movto_c
           (CODIGO_EMP,
	    ANO_MES,
	    COMPROBANTE,
	    CONSECUTIVO,
	    CLASE,
	    DESCRIPCION,
	    FECHA,
	    TIPO,
	    ESTADO,
	    NITB,
	    CODIGO_NITB,
	    VALORB,
	    RETENCION,
	    CONTADO)
           values(:codigo_emp, :ano_mesa, :comprobanteb, :consecutivob, 'VT',
                  'LENTES OFTALMICOS Y/O CONTACTO',:fechab,'3', '0','','','','','C'); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 29;
  sqlstm.stmt = "insert into movto_c(CODIGO_EMP,ANO_MES,COMPROBANTE,CONSECUT\
IVO,CLASE,DESCRIPCION,FECHA,TIPO,ESTADO,NITB,CODIGO_NITB,VALORB,RETENCION,CONT\
ADO) values (:b0,:b1,:b2,:b3,'VT','LENTES OFTALMICOS Y/O CONTACTO',:b4,'3','0'\
,'','','','','C')";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)972;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned long  )7;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
  sqlstm.sqhstl[1] = (unsigned long  )22;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&comprobanteb;
  sqlstm.sqhstl[2] = (unsigned long  )9;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&consecutivob;
  sqlstm.sqhstl[3] = (unsigned long  )9;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&fechab;
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



  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
      fprintf (stderr, "Error insertando Movto_C (%d)\n", sqlca.sqlcode);

  staora  = 0;
  strcpy(cuenta_db.arr,"13050590");
  strcpy(cuenta_cr.arr,"41359515");
  cuenta_db.arr  [cuenta_db.len]  = '\0';
  cuenta_cr.arr  [cuenta_cr.len]  = '\0';
  fecha_asto.arr [fecha_asto.len] = '\0';
  codigo.arr     [codigo.len]     = '\0';
  codigo.len  =  strlen(codigo.arr);
  secuencia++;
  sprintf(secuenciab.arr,"%6.0f",secuencia);
  secuenciab.len = strlen(secuenciab.arr);

  costo_factura = ( float ) atof(costo_factura_c.arr);

//  printf("4) costo_factura <%12.0f> ", costo_factura); getchar();
  for (i=1;i<=4;i++) {
       strcpy(inf[i],"");
  }
  if (costo_factura> 0) {
     strcpy(cuentab.arr,"13050590");
     cuentab.len = strlen(cuentab.arr);
     cuentab.arr  [cuentab.len]  = '\0';

     strcpy(inf[3],comprobanteb.arr);
     strcpy(codigox.arr,"01");
     codigox.len = strlen(codigox.arr);

/***************************/
     ver_inf();
     sprintf(valor_debb.arr,"%10.2f",costo_factura);
     valor_debb.len = strlen(valor_debb.arr);
     strcpy (valor_creb.arr,"");
     valor_creb.len = strlen(valor_creb.arr);
     if (!strcmp(cuentab.arr,"41359515"))
        strcpy(codigo_nb.arr,codigo_nitb.arr);

                                          /* Graba en movto_d el Debito (C4) */
//  printf("5) codigo_emp<%s> ano_mesa<%s> consecutivob<%s> secuenciab<%s> cuentab<%s> infa<%s> infb<%s> infc<%s> infd<%s> codigo_nitb<%s> valor_debb<%s> valor_creb<%s>", codigo_emp.arr,ano_mesa.arr,consecutivob.arr,secuenciab.arr,cuentab.arr,infa.arr,infb.arr,infc.arr,infd.arr,codigo_nitb.arr,valor_debb.arr,valor_creb.arr ); getchar();
     /* EXEC SQL insert into movto_d
     	      (CODIGO_EMP, ANO_MES,CONSECUTIVO,SECUENCIA,CUENTA,
		INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS)
              values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                     :cuentab, :infa, :infb, :infc, :infd,
                     :codigo_nb, :valor_debb, :valor_creb, '001', 1); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 29;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1006;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
     sqlstm.sqhstl[0] = (unsigned long  )7;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
     sqlstm.sqhstl[1] = (unsigned long  )22;
     sqlstm.sqindv[1] = (         short *)0;
     sqlstm.sqharm[1] = (unsigned long )0;
     sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
     sqlstm.sqhstl[2] = (unsigned long  )9;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
     sqlstm.sqhstl[3] = (unsigned long  )9;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
     sqlstm.sqhstl[4] = (unsigned long  )17;
     sqlstm.sqindv[4] = (         short *)0;
     sqlstm.sqharm[4] = (unsigned long )0;
     sqlstm.sqhstv[5] = (unsigned char  *)&infa;
     sqlstm.sqhstl[5] = (unsigned long  )16;
     sqlstm.sqindv[5] = (         short *)0;
     sqlstm.sqharm[5] = (unsigned long )0;
     sqlstm.sqhstv[6] = (unsigned char  *)&infb;
     sqlstm.sqhstl[6] = (unsigned long  )16;
     sqlstm.sqindv[6] = (         short *)0;
     sqlstm.sqharm[6] = (unsigned long )0;
     sqlstm.sqhstv[7] = (unsigned char  *)&infc;
     sqlstm.sqhstl[7] = (unsigned long  )16;
     sqlstm.sqindv[7] = (         short *)0;
     sqlstm.sqharm[7] = (unsigned long )0;
     sqlstm.sqhstv[8] = (unsigned char  *)&infd;
     sqlstm.sqhstl[8] = (unsigned long  )16;
     sqlstm.sqindv[8] = (         short *)0;
     sqlstm.sqharm[8] = (unsigned long )0;
     sqlstm.sqhstv[9] = (unsigned char  *)&codigo_nb;
     sqlstm.sqhstl[9] = (unsigned long  )8;
     sqlstm.sqindv[9] = (         short *)0;
     sqlstm.sqharm[9] = (unsigned long )0;
     sqlstm.sqhstv[10] = (unsigned char  *)&valor_debb;
     sqlstm.sqhstl[10] = (unsigned long  )17;
     sqlstm.sqindv[10] = (         short *)0;
     sqlstm.sqharm[10] = (unsigned long )0;
     sqlstm.sqhstv[11] = (unsigned char  *)&valor_creb;
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



     if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
         fprintf (stderr, "Error Grabando Debito (%d)\n", sqlca.sqlcode);

     secuencia++;
     sprintf(secuenciab.arr,"%6.0f",secuencia);
     secuenciab.len = strlen(secuenciab.arr);

     strcpy(cuentab.arr,"41359515");
     cuentab.len = strlen(cuentab.arr);
     cuentab.arr  [cuentab.len]  = '\0';

     strcpy(codigox.arr,cuentab.arr);
     codigox.len = strlen(codigox.arr);

//////
     for (i=1;i<=4;i++) {
          strcpy(inf[i],"");
     }
     codigo_nitb.len = strlen(codigo_nitb.arr);
     strcpy(inf[2],comprobanteb.arr);

/***************************/
     ver_inf();
     strcpy (valor_debb.arr,"");
     valor_debb.len = strlen(valor_debb.arr);
     sprintf(valor_creb.arr,"%10.2f",costo_factura);
     valor_creb.len = strlen(valor_creb.arr);
                                         /* Graba en movto_d el Credito (C4) */
//  printf("6) codigo_emp<%s> ano_mesa<%s> consecutivob<%s> secuenciab<%s> cuentab<%s> infa<%s> infb<%s> infc<%s> infd<%s> codigo_nitb<%s> valor_debb<%s> valor_creb<%s>", codigo_emp.arr,ano_mesa.arr,consecutivob.arr,secuenciab.arr,cuentab.arr,infa.arr,infb.arr,infc.arr,infd.arr,codigo_nitb.arr,valor_debb.arr,valor_creb.arr ); getchar();
     /* EXEC SQL insert into movto_d
     	      (CODIGO_EMP, ANO_MES,CONSECUTIVO,SECUENCIA,CUENTA,
		INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS)
              values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                     :cuentab, :infa, :infb, :infc, :infd,
                     :codigo_nitb, :valor_debb, :valor_creb, '001', 1); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 29;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1068;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
     sqlstm.sqhstl[0] = (unsigned long  )7;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
     sqlstm.sqhstl[1] = (unsigned long  )22;
     sqlstm.sqindv[1] = (         short *)0;
     sqlstm.sqharm[1] = (unsigned long )0;
     sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
     sqlstm.sqhstl[2] = (unsigned long  )9;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
     sqlstm.sqhstl[3] = (unsigned long  )9;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
     sqlstm.sqhstl[4] = (unsigned long  )17;
     sqlstm.sqindv[4] = (         short *)0;
     sqlstm.sqharm[4] = (unsigned long )0;
     sqlstm.sqhstv[5] = (unsigned char  *)&infa;
     sqlstm.sqhstl[5] = (unsigned long  )16;
     sqlstm.sqindv[5] = (         short *)0;
     sqlstm.sqharm[5] = (unsigned long )0;
     sqlstm.sqhstv[6] = (unsigned char  *)&infb;
     sqlstm.sqhstl[6] = (unsigned long  )16;
     sqlstm.sqindv[6] = (         short *)0;
     sqlstm.sqharm[6] = (unsigned long )0;
     sqlstm.sqhstv[7] = (unsigned char  *)&infc;
     sqlstm.sqhstl[7] = (unsigned long  )16;
     sqlstm.sqindv[7] = (         short *)0;
     sqlstm.sqharm[7] = (unsigned long )0;
     sqlstm.sqhstv[8] = (unsigned char  *)&infd;
     sqlstm.sqhstl[8] = (unsigned long  )16;
     sqlstm.sqindv[8] = (         short *)0;
     sqlstm.sqharm[8] = (unsigned long )0;
     sqlstm.sqhstv[9] = (unsigned char  *)&codigo_nitb;
     sqlstm.sqhstl[9] = (unsigned long  )8;
     sqlstm.sqindv[9] = (         short *)0;
     sqlstm.sqharm[9] = (unsigned long )0;
     sqlstm.sqhstv[10] = (unsigned char  *)&valor_debb;
     sqlstm.sqhstl[10] = (unsigned long  )17;
     sqlstm.sqindv[10] = (         short *)0;
     sqlstm.sqharm[10] = (unsigned long )0;
     sqlstm.sqhstv[11] = (unsigned char  *)&valor_creb;
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



     if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
         fprintf (stderr, "Error Grabando Credito (%d)\n", sqlca.sqlcode);
  }
}

void ver_inf()
{
  /* EXEC SQL select infa, infb, infc, infd
           into :veca, :vecb, :vecc, :vecd
           from   plan
           where  codigo_emp = :codigo_emp and
                  cuenta     = :cuentab; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 29;
  sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b3  from pl\
an where (codigo_emp=:b4 and cuenta=:b5)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)1130;
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
  sqlstm.sqhstl[4] = (unsigned long  )7;
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

  veca.arr [veca.len] = '\0';
  vecb.arr [vecb.len] = '\0';
  vecc.arr [vecc.len] = '\0';
  vecd.arr [vecd.len] = '\0';

  strcpy (vecplan[1], veca.arr);
  strcpy (vecplan[2], vecb.arr);
  strcpy (vecplan[3], vecc.arr);
  strcpy (vecplan[4], vecd.arr);

  i=j=0;
  for (i=1;i<=4;i++) {
      if (!strcmp(vecplan[i],"NIT")) {
          sprintf(inf[i],"%12.0f",nit);
      }
      else {
            for (j=1;j<=k;j++) {
                if (!strcmp(vecplan[i],vecinf[j].arr) && strcmp(vecplan[i],"") ) {
                   strcpy(inf[i],codigox.arr);
                }
            }
      }
  }
  strtri(inf[1]);
  strtri(inf[2]);
  strtri(inf[3]);
  strtri(inf[4]);
  strcpy (infa.arr, inf[1]);
  strcpy (infb.arr, inf[2]);
  strcpy (infc.arr, inf[3]);
  strcpy (infd.arr, inf[4]);
  infa.len = strlen(infa.arr);
  infb.len = strlen(infb.arr);
  infc.len = strlen(infc.arr);
  infd.len = strlen(infd.arr);
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
