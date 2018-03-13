
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
    ".\\ordenes.pc"
};


static const unsigned long sqlctx = 1296235154;


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
   unsigned char    *sqhstv[27];
   unsigned long    sqhstl[27];
	    short   *sqindv[27];
   unsigned long    sqharm[27];
   unsigned long     *sqharc[27];
} sqlstm = {8,27};

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

 static const char *sq0009 = 
"select inf  from infacu            ";
 static const char *sq0004 = 
"select d.lado_lente ,nvl(d.tipo_mat_fac,d.tipo_material) ,d.colorv ,esfera ,\
nvl(cilindro,0) ,nvl(eje,0) ,nvl(prisma,0) ,nvl(base,0) ,d.dir_prisma ,nvl(adi\
cion,0) ,cantidad ,valor_venta ,codigo_articulo ,nvl(terminado,'0') ,d.especia\
l ,d.diametro ,cl.nombre ,d.clase_mat_fac ,d.tipo_mat_fac ,costo_promedio_p ,n\
vl(puntos,0) ,decode(substr(codigo_articulo,1,1),'4',1,'5',1,'B',1,0) ,decode(\
substr(codigo_articulo,3,2),'50',1,'51',1,'54',1,'55',1,'56',1,'57',1,'59',1,'\
60',1,0) ,substr(codigo_articulo,3,2) ,d.codigo_prv ,d.lote ,p.rinvima  from o\
rdenes_d d ,clase cl ,proveedores p where (((d.consecutivo=:b0 and d.ano_mes=:\
b1) and nvl(d.clase_mat_fac,clase_mat)=cl.clase_material(+)) and d.codigo_prv=\
p.codigo_prv(+)) order by lado_lente            ";
 static const char *sq0005 = 
"select s.nombre ,o.cantidad ,(o.cantidad* o.valor_unidad)  from ordenes_o o \
,servicios_len s where (((((o.tipo_servicio=s.tipo_servicio and o.tipo_trabajo\
=s.tipo_trabajo) and o.consecutivo=:b0) and o.ano_mes=:b1) and o.tipo_servicio\
=:b2) and s.lista=(select lista  from clientes where codigo_cliente=:b3)) orde\
r by s.secuencia            ";
 static const char *sq0029 = 
"select d.consecutivo ,cuenta ,infa ,infb ,infc ,infd ,codigo_nit ,sum((nvl(v\
alor_deb,0)-nvl(valor_cre,0)))  from movto_d d ,movto_c c where ((((((((c.codi\
go_emp=to_number(:b0) and c.codigo_emp=d.codigo_emp) and c.ano_mes=d.ano_mes) \
and c.consecutivo=d.consecutivo) and c.comprobante=to_number(:b1)) and c.clase\
='CV') and c.tipo=9) and c.ano_mes=to_number(:b2)) and c.estado<>'2') group by\
 d.consecutivo,cuenta,infa,infb,infc,infd,codigo_nit           ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,251,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,874,0,4,276,0,27,2,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,3,0,0,2,3,0,0,
1,9,0,0,1,9,0,0,
150,0,0,3,57,0,4,323,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
172,0,0,6,146,0,4,359,0,6,1,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,9,0,0,1,9,
0,0,
210,0,0,7,81,0,4,373,0,3,2,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,
236,0,0,8,81,0,4,381,0,3,2,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,
262,0,0,9,35,0,9,395,0,0,0,0,1,0,
276,0,0,9,0,0,13,402,0,1,0,0,1,0,2,9,0,0,
294,0,0,9,0,0,15,416,0,0,0,0,1,0,
308,0,0,4,748,0,9,433,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
330,0,0,4,0,0,13,437,0,27,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,3,
0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,
452,0,0,4,0,0,15,586,0,0,0,0,1,0,
466,0,0,5,0,0,15,587,0,0,0,0,1,0,
480,0,0,10,0,0,30,589,0,0,0,0,1,0,
494,0,0,11,64,0,5,598,0,1,1,0,1,0,1,9,0,0,
512,0,0,12,104,0,4,696,0,4,3,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
542,0,0,13,83,0,4,720,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
568,0,0,14,62,0,4,737,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
590,0,0,15,54,0,4,751,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
612,0,0,5,338,0,9,764,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
642,0,0,5,0,0,13,766,0,3,0,0,1,0,2,9,0,0,2,3,0,0,2,4,0,0,
668,0,0,5,0,0,15,809,0,0,0,0,1,0,
682,0,0,5,0,0,15,823,0,0,0,0,1,0,
696,0,0,5,0,0,15,838,0,0,0,0,1,0,
710,0,0,5,0,0,15,849,0,0,0,0,1,0,
724,0,0,5,0,0,15,861,0,0,0,0,1,0,
738,0,0,5,0,0,15,871,0,0,0,0,1,0,
752,0,0,16,0,0,32,1011,0,0,0,0,1,0,
766,0,0,5,0,0,13,1034,0,3,0,0,1,0,2,9,0,0,2,3,0,0,2,4,0,0,
792,0,0,17,134,0,4,1095,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
822,0,0,18,345,0,4,1105,0,5,3,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
856,0,0,19,151,0,4,1131,0,5,3,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
890,0,0,20,130,0,3,1145,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
920,0,0,21,135,0,5,1154,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
954,0,0,22,147,0,4,1168,0,5,3,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
988,0,0,23,130,0,3,1179,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1018,0,0,24,135,0,5,1186,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
1052,0,0,25,218,0,3,1198,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1086,0,0,26,203,0,3,1255,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1148,0,0,27,203,0,3,1300,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1210,0,0,28,303,0,4,1320,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1240,0,0,29,451,0,9,1350,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
1266,0,0,29,0,0,13,1352,0,8,0,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,4,0,0,2,4,0,0,
1312,0,0,30,203,0,3,1403,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1374,0,0,29,0,0,13,1413,0,8,0,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,4,0,0,2,4,0,0,
1420,0,0,31,99,0,4,1440,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,
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

#define length(x) (sizeof(x)/sizeof(x[0]))

void ver_tipo_material();
void tipos1();
void tipos2();
void leer_material();
void leer_coloresv();
void leer_servicios();
void imprimo_servicios();
void totales();
void Rx_procesor();
void borro_puntos();
void titulos();
int hacer_asiento();
void reverso_asiento();
void ver_inf();

				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Ordenes_c (C1) */
double  numero_orden;
int     loop_2 = 0;
int     traidos = 0;
int     num_ret = 0;
/* VARCHAR codigo_cliente [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_cliente;

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

/* VARCHAR fecha_cliente  [70]; */ 
struct { unsigned short len; unsigned char arr[70]; } fecha_cliente;

double  codigo_nit;
double  valor_material;
double  valor_bis_mont;
double  valor_trat;
double  valor_color;
double  tipo_descto;
double  valor_desctos;
double  valor_otros;
double  valor_total;
double  consecutivo;
int     ano_mes;
int     puntos;
int     puntosc;
int     clase_prom;
int     promocion;
int     premios;
int     propias;
int     puntos_ac;
float   numero_caja;
/* VARCHAR color_caja     [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } color_caja;

/* VARCHAR estado         [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } estado;

/* VARCHAR clase_material [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } clase_material;

/* VARCHAR orden          [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } orden;

                                 /* Ordenes_d (C2) */
/* VARCHAR lado_lente     [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } lado_lente;

/* VARCHAR d_tipo_material[03]; */ 
struct { unsigned short len; unsigned char arr[3]; } d_tipo_material;

float   diametro;
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
int     tcantidad;
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

/* VARCHAR tipo_mat_fac   [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } tipo_mat_fac;

/* VARCHAR ano_mesa       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesa;

/* VARCHAR consecutivoa   [08]; */ 
struct { unsigned short len; unsigned char arr[8]; } consecutivoa;

/* VARCHAR codigo_prv     [05]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_prv;

/* VARCHAR lote           [22]; */ 
struct { unsigned short len; unsigned char arr[22]; } lote;

                                 /* Tipos (C3) */
/* VARCHAR nomb_tipol     [33]; */ 
struct { unsigned short len; unsigned char arr[33]; } nomb_tipol;

/* VARCHAR tipo_mat       [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } tipo_mat;

/* VARCHAR tipo_lis       [06]; */ 
struct { unsigned short len; unsigned char arr[6]; } tipo_lis;

/* VARCHAR clase_mat      [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } clase_mat;

                                 /* Tipos (C4) */
/* VARCHAR nomb_tipo      [33]; */ 
struct { unsigned short len; unsigned char arr[33]; } nomb_tipo;

                                 /* Almacen (C5) */
/* VARCHAR nomb_tipoa     [33]; */ 
struct { unsigned short len; unsigned char arr[33]; } nomb_tipoa;

/* VARCHAR codigo_art     [13]; */ 
struct { unsigned short len; unsigned char arr[13]; } codigo_art;

                                 /* Coloresv (C6) */
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

                                 /* Pedido_c (C8) */
/* VARCHAR observacion    [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } observacion;

/* VARCHAR profesional    [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } profesional;

float   gaveta;
float   pfactu;
                                 /* Ordenes_d (C9) */
double  tot_lin;
                                 /* Ordenes_o (C10) */
double  tot_lin2;

/* VARIABLES PARA ASIENTOS CONTABLES */

/* VARCHAR codigo_emp[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR ultimo_numero_c[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } ultimo_numero_c;

/* VARCHAR fecha_corte_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_corte_c;

/* VARCHAR vecinf      [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecinf[20];

                                 /* Movto_C (C3) */
/* VARCHAR comprobanteb[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } comprobanteb;

/* VARCHAR consecutivob[07]; */ 
struct { unsigned short len; unsigned char arr[7]; } consecutivob;

/* VARCHAR fechab      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechab;

                                 /* Movto_D (C4) */
double  secuencia;
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

/* VARCHAR valor_debb  [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } valor_debb;

/* VARCHAR valor_creb  [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } valor_creb;

double  costo_promedio_p;
double  valor;
char    inf         [5][14];
                                 /* Control_Mes (C5) */
/* VARCHAR fuenteb     [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } fuenteb;

double  consecutivo15;
double  version;
float   nitn;
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

/* VARCHAR rinvima     [110]; */ 
struct { unsigned short len; unsigned char arr[110]; } rinvima;

char    vecplan     [5][14];

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
#define TITULO_1 "TEODORO TARUD & CIA LTDA."
#define TITULO_2 "Nit. 890.112.740-2"
#define A_F1     "###,###.##"
char *fmtnum(), r_t[100];
int     con_pag;                                   /* Contador de Paginas */
int     con_len;                                   /* Contador de Paginas */
int     con_lin= 22;                               /* Contador de Lineas  */
int     staora = 0;
int     oraest = 0;
double  tot_pag;
char    fecha[20];
char    hora[12];
int     tip;
char    nombre_tipo[33];
double  tot_servicio;
double  subtotal;
double  costo_venta;
int     i;
int     j, k;
char    cadena[100];
char    cadena2[100];
char    lineas[132];
char    mensaje[100];
int     tpuntos;
int     commited;
int     contador;
int     npromo;
int     nclaprom;
int     npremio;
char    clado[2][10];
char    clotes[2][100];
char    aInvima[2][110];
char    cinvima[110];
int     l = 0;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 4)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : ordenes numero_orden device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (orden.arr, argv[1]);
       orden.len   =      strlen(orden.arr);
       strcpy (device,    argv[2]);
       strlow (device);

    if (!strpos ("/", argv[3]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,   argv[3]);
    uid.len   =        strlen(uid.arr);

    strcpy(codigo_emp.arr,"1");
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

    /* EXEC SQL select o.numero_orden, o.codigo_cliente, n.nombre,
                    nvl(n.nombre_muni,c.nombre),
                    cl.nombre, o.tipo_material, o.tipo_lista,
                    to_char(o.fecha_control,'DD-MON-YYYY hh:mi am'),
                    nvl(valor_material,0),
                    nvl(valor_bis_mont,0), nvl(valor_trat,0),
                    nvl(valor_color,0),    nvl(valor_desctos,0),
                    nvl(valor_otros,0),    nvl(valor_total,0),
                    nvl(diam_pedido,0), o.consecutivo, o.ano_mes,
                    o.numero_caja, o.color_caja, o.estado, o.clase_material,
                    nvl(o.tipo_descto,0), nvl(puntos_ac,0), nvl(puntos,0)
             into  :numero_orden, :codigo_cliente, :nomb_clie, :nomb_ciu,
                   :nomb_clase, :tipo_material, :tipo_lista, :fecha_control,
                   :valor_material, :valor_bis_mont, :valor_trat, :valor_color,
                   :valor_desctos, :valor_otros, :valor_total, :diametro,
                   :consecutivo, :ano_mes, :numero_caja, :color_caja,
                   :estado, :clase_material, :tipo_descto, :puntos_ac, :puntosc
             from   nits n,ordenes_c o, ciudades c, clase cl, clientes ct
             where  n.codigo_nit = ct.codigo_nit and
                    ct.codigo_cliente in
                       (select codigo_cliente
                        from ordenes_c
                        where numero_orden = :orden)      and
                    n.codigo_ciu     = c.codigo           and
                    o.clase_material = cl.clase_material  and
                    o.numero_orden   = :orden; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.stmt = "select o.numero_orden ,o.codigo_cliente ,n.nombre ,nvl(n.\
nombre_muni,c.nombre) ,cl.nombre ,o.tipo_material ,o.tipo_lista ,to_char(o.fec\
ha_control,'DD-MON-YYYY hh:mi am') ,nvl(valor_material,0) ,nvl(valor_bis_mont,\
0) ,nvl(valor_trat,0) ,nvl(valor_color,0) ,nvl(valor_desctos,0) ,nvl(valor_otr\
os,0) ,nvl(valor_total,0) ,nvl(diam_pedido,0) ,o.consecutivo ,o.ano_mes ,o.num\
ero_caja ,o.color_caja ,o.estado ,o.clase_material ,nvl(o.tipo_descto,0) ,nvl(\
puntos_ac,0) ,nvl(puntos,0) into :b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,\
:b11,:b12,:b13,:b14,:b15,:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24  from ni\
ts n ,ordenes_c o ,ciudades c ,clase cl ,clientes ct where ((((n.codigo_nit=ct\
.codigo_nit and ct.codigo_cliente in (select codigo_cliente  from ordenes_c wh\
ere numero_orden=:b25)) and n.codigo_ciu=c.codigo) and o.clase_material=cl.cla\
se_material) and o.numero_orden=:b25)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)28;
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
    sqlstm.sqhstv[7] = (unsigned char  *)&fecha_control;
    sqlstm.sqhstl[7] = (unsigned long  )72;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&valor_material;
    sqlstm.sqhstl[8] = (unsigned long  )8;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&valor_bis_mont;
    sqlstm.sqhstl[9] = (unsigned long  )8;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&valor_trat;
    sqlstm.sqhstl[10] = (unsigned long  )8;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&valor_color;
    sqlstm.sqhstl[11] = (unsigned long  )8;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&valor_desctos;
    sqlstm.sqhstl[12] = (unsigned long  )8;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&valor_otros;
    sqlstm.sqhstl[13] = (unsigned long  )8;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&valor_total;
    sqlstm.sqhstl[14] = (unsigned long  )8;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&diametro;
    sqlstm.sqhstl[15] = (unsigned long  )4;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&consecutivo;
    sqlstm.sqhstl[16] = (unsigned long  )8;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&ano_mes;
    sqlstm.sqhstl[17] = (unsigned long  )4;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&numero_caja;
    sqlstm.sqhstl[18] = (unsigned long  )4;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&color_caja;
    sqlstm.sqhstl[19] = (unsigned long  )4;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&estado;
    sqlstm.sqhstl[20] = (unsigned long  )4;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&clase_material;
    sqlstm.sqhstl[21] = (unsigned long  )5;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&tipo_descto;
    sqlstm.sqhstl[22] = (unsigned long  )8;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&puntos_ac;
    sqlstm.sqhstl[23] = (unsigned long  )4;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&puntosc;
    sqlstm.sqhstl[24] = (unsigned long  )4;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&orden;
    sqlstm.sqhstl[25] = (unsigned long  )17;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&orden;
    sqlstm.sqhstl[26] = (unsigned long  )17;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqharm[26] = (unsigned long )0;
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

    sprintf(ano_mesa.arr,"%6d",ano_mes);
    ano_mesa.len     =   strlen(ano_mesa.arr);
    sprintf(consecutivoa.arr,"%5.0f",consecutivo);
    consecutivoa.len =   strlen(consecutivoa.arr);

    /* EXEC SQL select 1
             into  :propias
             from   opticasp
             where  codigo_cliente = :codigo_cliente; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.stmt = "select 1 into :b0  from opticasp where codigo_cliente=:b1";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)150;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&propias;
    sqlstm.sqhstl[0] = (unsigned long  )4;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_cliente;
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



    /* EXEC SQL DECLARE C2 CURSOR FOR
             select d.lado_lente, nvl(d.tipo_mat_fac,d.tipo_material), d.colorv,
                    esfera, nvl(cilindro,0), nvl(eje,0), nvl(prisma,0),
                    nvl(base,0), d.dir_prisma, nvl(adicion,0), cantidad,
                    valor_venta, codigo_articulo, nvl(terminado,'0'),
                    d.especial, d.diametro, cl.nombre, d.clase_mat_fac, d.tipo_mat_fac,
                    costo_promedio_p, nvl(puntos,0),
                    decode(substr(codigo_articulo,1,1),'4',1,'5',1,'B',1,0),
                    decode(substr(codigo_articulo,3,2),'50',1,'51',1,'54',1,'55',1,'56',1,'57',1,'59',1,'60',1,0),
                    substr(codigo_articulo,3,2),
                    d.codigo_prv, d.lote, p.rinvima
             from   ordenes_d d, clase cl, proveedores p
             where  d.consecutivo = :consecutivoa  and
                    d.ano_mes     = :ano_mesa      and
                    nvl(d.clase_mat_fac,clase_mat) = cl.clase_material(+) and
                    d.codigo_prv  = p.codigo_prv(+)
             order by lado_lente; */ 


    /* EXEC SQL DECLARE C7 CURSOR FOR
             select s.nombre, o.cantidad, o.cantidad*o.valor_unidad
             from   ordenes_o o, servicios_len s
             where  o.tipo_servicio = s.tipo_servicio and
                    o.tipo_trabajo  = s.tipo_trabajo  and
                    o.consecutivo   =  :consecutivoa  and
                    o.ano_mes       =  :ano_mesa      and
                    o.tipo_servicio =  :tipo_servicio and
                    s.lista         = (select lista
                                       from   clientes
                                       where  codigo_cliente = :codigo_cliente )
             order by s.secuencia; */ 


    /* EXEC SQL select paciente, gaveta, factura, profesional,
                    to_char(fecha_cliente,'DD-MON-YYYY')
             into  :observacion, :gaveta, :pfactu, :profesional,
                   :fecha_cliente
             from   pedido_c
             where  numero_orden    = :orden; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.stmt = "select paciente ,gaveta ,factura ,profesional ,to_char(fe\
cha_cliente,'DD-MON-YYYY') into :b0,:b1,:b2,:b3,:b4  from pedido_c where numer\
o_orden=:b5";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)172;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&observacion;
    sqlstm.sqhstl[0] = (unsigned long  )33;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&gaveta;
    sqlstm.sqhstl[1] = (unsigned long  )4;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&pfactu;
    sqlstm.sqhstl[2] = (unsigned long  )4;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&profesional;
    sqlstm.sqhstl[3] = (unsigned long  )33;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&fecha_cliente;
    sqlstm.sqhstl[4] = (unsigned long  )72;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&orden;
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



    if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Pedido_c C8(%d)\n", sqlca.sqlcode);

    observacion.arr    [observacion.len]    = '\0';
    profesional.arr    [profesional.len]    = '\0';
    fecha_cliente.arr  [fecha_cliente.len]  = '\0';

    /* EXEC SQL select count(*) into :tot_lin
             from   ordenes_d
             where  ano_mes       = :ano_mesa  and
                    consecutivo   = :consecutivoa; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.stmt = "select count(*)  into :b0  from ordenes_d where (ano_mes=\
:b1 and consecutivo=:b2)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)210;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&tot_lin;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&consecutivoa;
    sqlstm.sqhstl[2] = (unsigned long  )10;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Ordenes_d C9(%d)\n", sqlca.sqlcode);

    /* EXEC SQL select count(*) into :tot_lin2
             from   ordenes_o
             where  ano_mes       = :ano_mesa  and
                    consecutivo   = :consecutivoa; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.stmt = "select count(*)  into :b0  from ordenes_o where (ano_mes=\
:b1 and consecutivo=:b2)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)236;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&tot_lin2;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&consecutivoa;
    sqlstm.sqhstl[2] = (unsigned long  )10;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Ordenes_o C10(%d)\n", sqlca.sqlcode);

/***************************************/

    /* EXEC SQL DECLARE C8 CURSOR FOR
             select inf
             from   infacu; */ 


    /* EXEC SQL OPEN C8; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.stmt = sq0009;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)262;
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
          sqlstm.arrsiz = 27;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)276;
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
    sqlstm.arrsiz = 27;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)294;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



/***************************************/

    tot_pag=tot_lin+tot_lin2;
    tot_pag=ceil(tot_pag/7);
    strcpy(fecha,fecha_control.arr);
    strorg(fecha,1,11);
    strcpy(hora,fecha_control.arr);
    strorg(hora,13,11);

    fprintf(fp,"%s%s%c%s%c%c%s%c%c\r",line_feed6,diezcpi,27,"C",22,27,"B",17,0);
    titulos();

    npromo   = 0;
    nclaprom = 0;

    /* EXEC SQL OPEN C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.stmt = sq0004;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)308;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&consecutivoa;
    sqlstm.sqhstl[0] = (unsigned long  )10;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
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
    while (staora == 0) {

          /* EXEC SQL FETCH C2 INTO :lado_lente, :d_tipo_material, :colorv,
                                 :esfera, :cilindro, :eje, :prisma, :base,
                                 :dir_prisma, :adicion, :cantidad, :valor_venta,
                                 :codigo_articulo, :terminado, :esp_cial,
                                 :d_diametro, :d_nomb_clase, :clase_mat_fac, :tipo_mat_fac,
                                 :costo_promedio_p, :puntos, :clase_prom, :promocion, :premios,
                                 :codigo_prv, :lote, :rinvima; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 27;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)330;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&lado_lente;
          sqlstm.sqhstl[0] = (unsigned long  )4;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&d_tipo_material;
          sqlstm.sqhstl[1] = (unsigned long  )5;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&colorv;
          sqlstm.sqhstl[2] = (unsigned long  )5;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqhstv[3] = (unsigned char  *)&esfera;
          sqlstm.sqhstl[3] = (unsigned long  )4;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqhstv[4] = (unsigned char  *)&cilindro;
          sqlstm.sqhstl[4] = (unsigned long  )4;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqhstv[5] = (unsigned char  *)&eje;
          sqlstm.sqhstl[5] = (unsigned long  )4;
          sqlstm.sqindv[5] = (         short *)0;
          sqlstm.sqharm[5] = (unsigned long )0;
          sqlstm.sqhstv[6] = (unsigned char  *)&prisma;
          sqlstm.sqhstl[6] = (unsigned long  )4;
          sqlstm.sqindv[6] = (         short *)0;
          sqlstm.sqharm[6] = (unsigned long )0;
          sqlstm.sqhstv[7] = (unsigned char  *)&base;
          sqlstm.sqhstl[7] = (unsigned long  )4;
          sqlstm.sqindv[7] = (         short *)0;
          sqlstm.sqharm[7] = (unsigned long )0;
          sqlstm.sqhstv[8] = (unsigned char  *)&dir_prisma;
          sqlstm.sqhstl[8] = (unsigned long  )4;
          sqlstm.sqindv[8] = (         short *)0;
          sqlstm.sqharm[8] = (unsigned long )0;
          sqlstm.sqhstv[9] = (unsigned char  *)&adicion;
          sqlstm.sqhstl[9] = (unsigned long  )4;
          sqlstm.sqindv[9] = (         short *)0;
          sqlstm.sqharm[9] = (unsigned long )0;
          sqlstm.sqhstv[10] = (unsigned char  *)&cantidad;
          sqlstm.sqhstl[10] = (unsigned long  )4;
          sqlstm.sqindv[10] = (         short *)0;
          sqlstm.sqharm[10] = (unsigned long )0;
          sqlstm.sqhstv[11] = (unsigned char  *)&valor_venta;
          sqlstm.sqhstl[11] = (unsigned long  )8;
          sqlstm.sqindv[11] = (         short *)0;
          sqlstm.sqharm[11] = (unsigned long )0;
          sqlstm.sqhstv[12] = (unsigned char  *)&codigo_articulo;
          sqlstm.sqhstl[12] = (unsigned long  )17;
          sqlstm.sqindv[12] = (         short *)0;
          sqlstm.sqharm[12] = (unsigned long )0;
          sqlstm.sqhstv[13] = (unsigned char  *)&terminado;
          sqlstm.sqhstl[13] = (unsigned long  )4;
          sqlstm.sqindv[13] = (         short *)0;
          sqlstm.sqharm[13] = (unsigned long )0;
          sqlstm.sqhstv[14] = (unsigned char  *)&esp_cial;
          sqlstm.sqhstl[14] = (unsigned long  )4;
          sqlstm.sqindv[14] = (         short *)0;
          sqlstm.sqharm[14] = (unsigned long )0;
          sqlstm.sqhstv[15] = (unsigned char  *)&d_diametro;
          sqlstm.sqhstl[15] = (unsigned long  )4;
          sqlstm.sqindv[15] = (         short *)0;
          sqlstm.sqharm[15] = (unsigned long )0;
          sqlstm.sqhstv[16] = (unsigned char  *)&d_nomb_clase;
          sqlstm.sqhstl[16] = (unsigned long  )16;
          sqlstm.sqindv[16] = (         short *)0;
          sqlstm.sqharm[16] = (unsigned long )0;
          sqlstm.sqhstv[17] = (unsigned char  *)&clase_mat_fac;
          sqlstm.sqhstl[17] = (unsigned long  )4;
          sqlstm.sqindv[17] = (         short *)0;
          sqlstm.sqharm[17] = (unsigned long )0;
          sqlstm.sqhstv[18] = (unsigned char  *)&tipo_mat_fac;
          sqlstm.sqhstl[18] = (unsigned long  )6;
          sqlstm.sqindv[18] = (         short *)0;
          sqlstm.sqharm[18] = (unsigned long )0;
          sqlstm.sqhstv[19] = (unsigned char  *)&costo_promedio_p;
          sqlstm.sqhstl[19] = (unsigned long  )8;
          sqlstm.sqindv[19] = (         short *)0;
          sqlstm.sqharm[19] = (unsigned long )0;
          sqlstm.sqhstv[20] = (unsigned char  *)&puntos;
          sqlstm.sqhstl[20] = (unsigned long  )4;
          sqlstm.sqindv[20] = (         short *)0;
          sqlstm.sqharm[20] = (unsigned long )0;
          sqlstm.sqhstv[21] = (unsigned char  *)&clase_prom;
          sqlstm.sqhstl[21] = (unsigned long  )4;
          sqlstm.sqindv[21] = (         short *)0;
          sqlstm.sqharm[21] = (unsigned long )0;
          sqlstm.sqhstv[22] = (unsigned char  *)&promocion;
          sqlstm.sqhstl[22] = (unsigned long  )4;
          sqlstm.sqindv[22] = (         short *)0;
          sqlstm.sqharm[22] = (unsigned long )0;
          sqlstm.sqhstv[23] = (unsigned char  *)&premios;
          sqlstm.sqhstl[23] = (unsigned long  )4;
          sqlstm.sqindv[23] = (         short *)0;
          sqlstm.sqharm[23] = (unsigned long )0;
          sqlstm.sqhstv[24] = (unsigned char  *)&codigo_prv;
          sqlstm.sqhstl[24] = (unsigned long  )7;
          sqlstm.sqindv[24] = (         short *)0;
          sqlstm.sqharm[24] = (unsigned long )0;
          sqlstm.sqhstv[25] = (unsigned char  *)&lote;
          sqlstm.sqhstl[25] = (unsigned long  )24;
          sqlstm.sqindv[25] = (         short *)0;
          sqlstm.sqharm[25] = (unsigned long )0;
          sqlstm.sqhstv[26] = (unsigned char  *)&rinvima;
          sqlstm.sqhstl[26] = (unsigned long  )112;
          sqlstm.sqindv[26] = (         short *)0;
          sqlstm.sqharm[26] = (unsigned long )0;
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
          else if (staora)
                   fprintf (stderr, "Error leyendo C2 (%d)\n", staora);

          lado_lente.arr      [lado_lente.len]      = '\0';
          d_tipo_material.arr [d_tipo_material.len] = '\0';
          colorv.arr          [colorv.len]          = '\0';
          base.arr            [base.len]            = '\0';
          codigo_articulo.arr [codigo_articulo.len] = '\0';
          terminado.arr       [terminado.len]       = '\0';
          esp_cial.arr        [esp_cial.len]        = '\0';
          d_nomb_clase.arr    [d_nomb_clase.len]    = '\0';
          clase_mat_fac.arr   [clase_mat_fac.len]   = '\0';
          tipo_mat_fac.arr    [tipo_mat_fac.len]    = '\0';
          codigo_prv.arr      [codigo_prv.len]      = '\0';
          lote.arr            [lote.len]            = '\0';
          rinvima.arr         [rinvima.len]         = '\0';

          if ( l <= 1 ) { 
             strcpy(aInvima[l],rinvima.arr);
             strcpy(clado[l],"L.");
             strcat(clado[l],lado_lente.arr);
             strcat(clado[l],":");
             strcpy(clotes[l],lote.arr);
             l++;
          }

          if ( clase_prom == 1 ) {
              nclaprom = 1;
          }
          if ( promocion == 1 ) {
              npromo = 1;
          }

          if ( premios > 0 ) {
              npremio = premios;
          }

          if (!strcmp(lado_lente.arr,"S")||!strcmp(lado_lente.arr,"O")) {
              strcpy(codigo_art.arr,codigo_articulo.arr);
              strcpy(nomb_clase.arr," ");
              diametro=0;
              leer_material();
          }
          else ver_tipo_material();
          if (strcmp(colorv.arr,"")) {
              strcpy(colorva.arr,colorv.arr);
              leer_coloresv();
          }
          if (con_lin > 16)
              titulos();
          strcpy (cadena,codigo_articulo.arr);
          strorg (cadena,3,1);
          if (!strcmp(cadena,"1")||!strcmp(cadena,"6")) {
              if (cantidad > 1)
                  strcpy(lado_lente.arr," ");
          }
          if (con_len == 0 && !strcmp(lado_lente.arr,"I")) {
              fprintf(fp,"\n");
              con_lin++;
          }
          if (cantidad > 0) {
              fprintf (fp, "%s%s",diezcpi,condensado_on);
              strorg(nomb_clase.arr,1,13);
              strorg(d_nomb_clase.arr,1,13);
              if (!strcmp(esp_cial.arr,"E") && strlen(d_nomb_clase.arr) > 0)
                  fprintf (fp, "%-13s " ,d_nomb_clase.arr);
              else if (strlen(d_nomb_clase.arr) > 0)
                       fprintf (fp, "%-13s " ,d_nomb_clase.arr);
                   else fprintf (fp, "%-13s " ,nomb_clase.arr);
	      if (!strcmp(clase_mat.arr,"V")) {
              	  strorg  (nombre_tipo,1,23);
                  fprintf (fp, "%-23s " ,nombre_tipo);
                  fprintf (fp, "%-9s  " ,nomb_color.arr);
	      }
	      else {
                    fprintf (fp, "%-34s " ,nombre_tipo);
	      }
              if ((!strcmp(tipo_material.arr,"11")  ||
                   !strcmp(tipo_material.arr,"21")) &&
                   !strcmp(clase_material.arr,"5")) {
                   fprintf (fp, "%5s","70/76 ");
              }
              else if (!strcmp(tipo_material.arr,"6")     &&
                      (diametro == 65 || diametro == 70 ) &&
                       !strcmp(clase_material.arr,"0")) {
                        fprintf (fp, "%5s","65/70 ");
              }
              else if  (!strcmp(tipo_material.arr,"6")   &&
                       (!strcmp(clase_material.arr,"1")  ||
                        !strcmp(clase_material.arr,"2"))) {
                        fprintf (fp, "%5s","70/75 ");
              }
              else if ((!strcmp(clase_mat_fac.arr,"1")  ||
                        !strcmp(clase_mat_fac.arr,"2"))  &&
                        diametro              == 70  &&
                       (!strcmp(terminado.arr,"T") || !strcmp(terminado.arr,"F"))) {
                       fprintf (fp, "%5s","70/75 ");
                   }
                   else if (!strcmp(esp_cial.arr,"E") && d_diametro > 0)
                             fprintf (fp, "%4.0f  ",d_diametro);
                        else fprintf (fp, "%4.0f  ",diametro);
              fprintf (fp, "         ");
              fprintf (fp, "%6.2f ",esfera);
              fprintf (fp, "%8.2f     ",cilindro);
              fprintf (fp, "%3d  "  ,eje);
              fprintf (fp, "%6.1f  ",prisma);
              fprintf (fp, "%2s"  ,base.arr);
              if (dir_prisma > 0) {
                 sprintf (cadena,"%1.1f",dir_prisma);
                 fmtnum("z.z",cadena,r_t);
              }
              else
                 strcpy(cadena,"  ");
              fprintf (fp, "%3s",cadena);
              fprintf (fp, "%6.2f  ",adicion);
              fprintf (fp, "%8d  ",cantidad);
              sprintf (cadena, "%7.0f",cantidad*valor_venta);
              subtotal+=cantidad*valor_venta;
              costo_venta+=cantidad*costo_promedio_p;
              fmtnum("zz,zzz,zz9",cadena,r_t);
              fprintf (fp, "%s%s%11s\n",condensado_off,elite,r_t);
              tpuntos+=puntos;
//              if (puntos > 0 && cantidad > 0)
              if ( cantidad > 0)
                  tcantidad+=cantidad;
              con_len++;
              con_lin++;
          }
    }
/*    if (tcantidad < 2)
       borro_puntos(); */
    totales();
    fprintf(fp,"%c\r",11);
    Rx_procesor();

    cierre_impresora();

    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)452;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)466;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)480;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


// EXEC SQL ROLLBACK WORK RELEASE;


    exit   (0);
}

void borro_puntos()
{
  /* EXEC SQL update ordenes_c set puntos = 0
           where  numero_orden = to_number(:orden); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 27;
  sqlstm.stmt = "update ordenes_c  set puntos=0 where numero_orden=to_number\
(:b0)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)494;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&orden;
  sqlstm.sqhstl[0] = (unsigned long  )17;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  puntosc = 0;
  tpuntos = 0;

 if (sqlca.sqlcode) printf("Error actualizando ordenes_c en rutina borro_puntos (%d)\n",
                           sqlca.sqlcode);
}

void ver_tipo_material()
{
 tip=atoi(d_tipo_material.arr);
 //printf("%s %s %s %d",clase_material.arr,d_tipo_material.arr,tipo_lista.arr,tip); getchar();
 if (!strcmp(d_tipo_material.arr,"11") && !strcmp(tipo_lista.arr,"N") ||
     !strcmp(d_tipo_material.arr,"21") && !strcmp(tipo_lista.arr,"N")) {
       strcpy(tipo_mat.arr,tipo_material.arr);
       strcpy(tipo_lis.arr,tipo_lista.arr);
       tipos1();
 }
 else if (!strcmp(d_tipo_material.arr,"11") || !strcmp(d_tipo_material.arr,"56") || !strcmp(d_tipo_material.arr,"57")) {
           strcpy(tipo_mat.arr,d_tipo_material.arr);
           tipos2();
 }
 else if (tip >= 60 && tip <= 65) {
          if (!strcmp(tipo_lista.arr,"M")) {
             strcpy(tipo_lis.arr,tipo_lista.arr);
          }
          if (!strcmp(tipo_mat_fac.arr,"60")) {
             strcpy(tipo_mat.arr,tipo_mat_fac.arr);
          }
          else {
             strcpy(tipo_mat.arr,"11");
          }
//          printf("%s %s",clase_material.arr,terminado.arr); getchar();
          if (!strcmp(terminado.arr,"T")) {
//             if(!strcmp(clase_material.arr,"B"))
                strcpy(tipo_mat.arr,"6");
             if (!strcmp(tipo_lista.arr,"AR") || !strcmp(tipo_lista.arr,"SA") || !strcmp(tipo_lista.arr,"M")) {
// printf("%s %s %s",clase_material.arr,d_tipo_material.arr,tipo_lista.arr); getchar();
                strcpy(tipo_lis.arr,tipo_lista.arr);
                tipos1();
             }
             else tipos2();
          }
          else {
                if (!strcmp(terminado.arr,"F"))
                   strcpy(nombre_tipo,"MONOFOCAL");
                else tipos2();
          }
      }
      else if (!strcmp(tipo_material.arr,"51") && !strcmp(clase_material.arr,"3")) {
              strcpy(tipo_mat.arr,tipo_material.arr);
              tipos2();
           }
                else if (!strcmp(tipo_material.arr,"11") &&
                         (!strcmp(tipo_lista.arr,"LEN") ||
                          !strcmp(tipo_lista.arr,"AR")  ||
                          !strcmp(tipo_lista.arr,"N"))) {
                         strcpy(tipo_mat.arr,tipo_material.arr);
                         strcpy(tipo_lis.arr,tipo_lista.arr);
                         tipos1();
                     }
                else if (!strcmp(tipo_material.arr,"21") &&
                         !strcmp(tipo_lista.arr,"N")) {
                         strcpy(tipo_mat.arr,tipo_material.arr);
                         strcpy(tipo_lis.arr,tipo_lista.arr);
                         tipos1();
                     }
                     else {
                           if (!strcmp(tipo_material.arr,"21")) {
                               if (esfera >= 0 && esfera <= 3 && cilindro==0 &&
                                   !strcmp(terminado.arr,"F")) {
                                   strcpy(tipo_mat.arr,"7");
                                   tipos2();
                               }
                               else {
                                strcpy(tipo_mat.arr,tipo_material.arr);
                                tipos2();
                               }
                           }
                           else if (strcmp(d_tipo_material.arr,"")) {
                                    strcpy(tipo_mat.arr,d_tipo_material.arr);
                                    tipos2();
                                }
                                else {
                                      strcpy(tipo_mat.arr,tipo_material.arr);
                                      tipos2();
                                }
                     }
}

void tipos1()
{
 strcpy(clase_mat.arr,clase_material.arr);
 tipo_mat.len  = strlen(tipo_mat.arr);
 tipo_lis.len  = strlen(tipo_lis.arr);
 clase_mat.len = strlen(clase_mat.arr);

 /* EXEC SQL select nombre into :nomb_tipol
          from   tipos
          where  tipo_material  = :tipo_mat and
                 tipo_lista     = :tipo_lis and
	               clase_material = :clase_mat; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 27;
 sqlstm.stmt = "select nombre into :b0  from tipos where ((tipo_material=:b1\
 and tipo_lista=:b2) and clase_material=:b3)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)512;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_tipol;
 sqlstm.sqhstl[0] = (unsigned long  )35;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&tipo_mat;
 sqlstm.sqhstl[1] = (unsigned long  )5;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&tipo_lis;
 sqlstm.sqhstl[2] = (unsigned long  )8;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&clase_mat;
 sqlstm.sqhstl[3] = (unsigned long  )12;
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
 if (sqlca.sqlcode == 1403 ) 
     strcpy(nomb_tipol.arr,"");
 if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
     fprintf (stderr, "Error leyendo Tipos C3 (%d)\n", sqlca.sqlcode);
 }
// printf("1) %s %s %s",clase_mat.arr,tipo_mat.arr,tipo_lis.arr); getchar();
 nomb_tipol.arr [nomb_tipol.len] = '\0';
 strcpy(nombre_tipo,nomb_tipol.arr);
}

void tipos2()
{
 strcpy(clase_mat.arr,clase_material.arr);
 if (strcmp(clase_mat_fac.arr,""))
    strcpy(clase_mat.arr,clase_mat_fac.arr);
 tipo_mat.len  = strlen(tipo_mat.arr);
 clase_mat.len = strlen(clase_mat.arr);

 /* EXEC SQL select nombre into :nomb_tipo
          from   tipos
          where  tipo_material  = :tipo_mat and
		             clase_material = :clase_mat; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 27;
 sqlstm.stmt = "select nombre into :b0  from tipos where (tipo_material=:b1 \
and clase_material=:b2)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)542;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_tipo;
 sqlstm.sqhstl[0] = (unsigned long  )35;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&tipo_mat;
 sqlstm.sqhstl[1] = (unsigned long  )5;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&clase_mat;
 sqlstm.sqhstl[2] = (unsigned long  )12;
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
 if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Tipos C4 (%d) tipo_mat = %s, clase_mat = %s \n", sqlca.sqlcode, tipo_mat.arr, clase_mat.arr);

// printf("2) %s %s %s",clase_mat.arr,tipo_mat.arr,tipo_lis.arr); getchar();

 nomb_tipo.arr [nomb_tipo.len] = '\0';
 strcpy(nombre_tipo,nomb_tipo.arr);
}

void leer_material()
{
 codigo_art.len = strlen(codigo_art.arr);
 /* EXEC SQL select nombre into :nomb_tipoa
          from   almacen
          where  codigo_articulo = :codigo_art; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 27;
 sqlstm.stmt = "select nombre into :b0  from almacen where codigo_articulo=:\
b1";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)568;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_tipoa;
 sqlstm.sqhstl[0] = (unsigned long  )35;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_art;
 sqlstm.sqhstl[1] = (unsigned long  )15;
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
 if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Almacen C5 (%d)\n", sqlca.sqlcode);

 nomb_tipoa.arr [nomb_tipoa.len] = '\0';
 strcpy(nombre_tipo,nomb_tipoa.arr);
}

void leer_coloresv()
{
 colorva.len = strlen(colorva.arr);
 /* EXEC SQL select nombre into :nomb_color
          from   coloresv
          where  colorv = :colorva; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 27;
 sqlstm.stmt = "select nombre into :b0  from coloresv where colorv=:b1";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)590;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_color;
 sqlstm.sqhstl[0] = (unsigned long  )13;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&colorva;
 sqlstm.sqhstl[1] = (unsigned long  )5;
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
 if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Coloresv C6 (%d)\n", sqlca.sqlcode);

 nomb_color.arr [nomb_color.len] = '\0';
}

void leer_servicios()
{
 tipo_servicio.len = strlen(tipo_servicio.arr);
 /* EXEC SQL OPEN C7; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 27;
 sqlstm.stmt = sq0005;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)612;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&consecutivoa;
 sqlstm.sqhstl[0] = (unsigned long  )10;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
 sqlstm.sqhstl[1] = (unsigned long  )22;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&tipo_servicio;
 sqlstm.sqhstl[2] = (unsigned long  )5;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&codigo_cliente;
 sqlstm.sqhstl[3] = (unsigned long  )8;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 /* EXEC SQL FETCH C7 INTO :nomb_servicio, :cantidad_srv, :valor_servicio; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 27;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)642;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_servicio;
 sqlstm.sqhstl[0] = (unsigned long  )28;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&cantidad_srv;
 sqlstm.sqhstl[1] = (unsigned long  )4;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&valor_servicio;
 sqlstm.sqhstl[2] = (unsigned long  )8;
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
 if (oraest == -1405)
     oraest  = 0;
}

/************************
* TOTALES()
*    Imprime totales en el archivo de spool.
*/

void totales()
{
    int rc;
    if (strcmp (lado_lente.arr,"S")||!strcmp(lado_lente.arr,"O")) {
       if (valor_material != valor_total) {
           if (con_lin > 16)
               titulos();
           sprintf (cadena,"%8.2f",valor_material);
           fprintf (fp,"%s%s%s%64s%s%31s\n",condensado_off,elite,enfatizado_on,"VALOR MATERIAL : ................................",enfatizado_off,fmtnum("$$$,$$$,$$9",cadena,r_t));
           con_lin++;
       }
    }
    if (subtotal!=valor_material) {
        fprintf (fp,"%s%s%s%57s%s\n",condensado_off,elite,enfatizado_on,"****** DESCUADRE EN VALOR MATERIAL *******",enfatizado_off);
        con_lin++;
    }
    subtotal = valor_material;

    strcpy(tipo_servicio.arr,"TR");
    leer_servicios();
    if (!oraest) {
       if (con_lin > 16)
          titulos();
       fprintf (fp,"%s%32s%s\r",enfatizado_on,"TRATAMIENTO : ",enfatizado_off);
       imprimo_servicios();
       if (tot_servicio!=valor_trat) {
           fprintf (fp,"%s%s%s%57s%s\n",condensado_off,elite,enfatizado_on,"****** DESCUADRE EN VALOR TRATAMIENTO *******",enfatizado_off);
           con_lin++;
       }
    }

    strcpy(tipo_servicio.arr,"CO");
    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)668;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    leer_servicios();
    if (!oraest) {
       if (con_lin > 16)
          titulos();
       fprintf (fp,"%s%32s%s\r",enfatizado_on,"COLOR : ",enfatizado_off);
       imprimo_servicios();
       if (tot_servicio!=valor_color) {
           fprintf (fp,"%s%s%s%57s%s\n",condensado_off,elite,enfatizado_on,"****** DESCUADRE EN VALOR COLOR *******",enfatizado_off);
           con_lin++;
       }
    }

    strcpy(tipo_servicio.arr,"BM");
    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)682;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    leer_servicios();
    if (!oraest) {
       if (con_lin > 16)
          titulos();
       fprintf (fp,"%s%32s%s\r",enfatizado_on,"BISEL Y MONTAJE : ",enfatizado_off);
       imprimo_servicios();
       if (tot_servicio!=valor_bis_mont) {
           fprintf (fp,"%s%s%s%57s%s\n",condensado_off,elite,enfatizado_on,"****** DESCUADRE EN VALOR BISEL MONTAJE *******",enfatizado_off);
           con_lin++;
       }
    }

    rc=0;
    strcpy(tipo_servicio.arr,"RC");
    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)696;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    leer_servicios();
    if (!oraest) {
       if (con_lin > 16)
          titulos();
       fprintf (fp,"%s%32s%s\r",enfatizado_on,"SERV. A MONTURA - ELEM. DE RECAMBIO : ",enfatizado_off);
       imprimo_servicios();
       rc=1;
    }

    strcpy(tipo_servicio.arr,"RP");
    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)710;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    leer_servicios();
    if (!oraest) {
       if (con_lin > 16)
          titulos();
       if (rc == 0)
          fprintf (fp,"%s%32s%s\r",enfatizado_on,"SERV. A MONTURA - REPARACION : ",enfatizado_off);
       else fprintf (fp,"%s%32s%s\r",enfatizado_on,"REPARACION : ",enfatizado_off);
       imprimo_servicios();
    }

    strcpy(tipo_servicio.arr,"FE");
    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)724;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    leer_servicios();
    if (!oraest) {
       if (con_lin > 16)
          titulos();
       fprintf (fp,"%s%32s%s\r",enfatizado_on,"FLETES : ",enfatizado_off);
       imprimo_servicios();
    }

    strcpy(tipo_servicio.arr,"OT");
    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)738;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    leer_servicios();
    if (!oraest) {
       if (con_lin > 16)
          titulos();
       fprintf (fp,"%s%32s%s\r",enfatizado_on,"OTROS : ",enfatizado_off);
       imprimo_servicios();
    }

    if (subtotal != valor_total) {
       if (con_lin > 16)
          titulos();
       sprintf (cadena,"%8.2f",subtotal);
       fprintf (fp,"%s%32s%s%63s\n",enfatizado_on,"SUBTOTAL ",enfatizado_off,fmtnum("zzz,zzz,zz9",cadena,r_t));
       con_lin++;
    }
    if (valor_desctos > 0) {
       if (con_lin > 16)
           titulos();
       sprintf (cadena,"%8.2f",valor_desctos);
       if (tipo_descto > 0)
          fprintf (fp,"%s%32s%s%63s\n",enfatizado_on,"DESCUENTO POR CASO ESPECIAL ",enfatizado_off,fmtnum("zzz,zzz,zz9",cadena,r_t));
       else fprintf (fp,"%s%32s%s%63s\n",enfatizado_on,"DESCUENTOS ",enfatizado_off,fmtnum("zzz,zzz,zz9",cadena,r_t));
       con_lin++;
    }
    if ((subtotal-valor_desctos)!=valor_total) {
        fprintf (fp,"%s%s%s%57s%s\n",condensado_off,elite,enfatizado_on,"****** DESCUADRE EN VALOR LIQUIDACION *******",enfatizado_off);
        con_lin++;
    }
    if (con_lin <= 16)
       fprintf(fp,"%c\r",11);
    sprintf (cadena,"%6.2f",valor_total);

    strcpy(mensaje," ");
/*
    if ( tcantidad > 1 && valor_total > 0 ) {
        if ( npremio == 60 && (strcmp(terminado.arr,"T") && strcmp(terminado.arr,"F") && strcmp(terminado.arr,"C") ) )  { //Acolade
//             strcat(mensaje,"Obsequio Carnaval");
             strcat(mensaje," ");
        }
        else {
              if ( npromo == 1 ) {
//                  strcpy(mensaje,"Obsequio Carnaval");  //Solo multifocales
                  strcpy(mensaje," ");  //Solo multifocales
              }
              if ( nclaprom == 1 ) { //Transitions
//                   strcpy(mensaje,"Obsequio Carnaval");
                   strcpy(mensaje," ");
              }
        }
    }

    if ( nclaprom ==1 ) { //Promover Transitions 2010
       if (tcantidad > 1 && valor_total > 0) {
           if (npromo == 1) {    //Solo multifocales
               strcpy(mensaje,"Promover Transitions 2010 - Cupo\b'n Naranja, 185 puntos");  
           }
           else { //Bifocales y Monofocales
               strcpy(mensaje,"Promover Transitions 2010 - Cupo\b'n Azul, 85 puntos");  
           }
           if ( npremio == 60 && (strcmp(terminado.arr,"T") && strcmp(terminado.arr,"F") && strcmp(terminado.arr,"C") ) )  { //Acolade
               strcpy(mensaje,"Promover Transitions 2010 - Cupo\b'n Naranja, 185 puntos");  
           }
       }
    }


           if ( nclaprom == 1 ) { //Registrese y gane al instante con Essilor y Transition
              if ( npremio == 51 || npremio == 54 || npremio == 55 || npremio == 57 ) {
                   strcat(mensaje,"Varilux Transitions, 40 puntos");
              }
              else {
                   if ( npremio == 56 || npremio == 60 ) {
                        strcat(mensaje,"Acolade y Ovation Transitions, 20 puntos");
                   }
                   else {
                        if ( npremio == 50 || npremio == 59 ) {
                             strcat(mensaje,"Adaptar y Smallfit Transitions, 10 puntos");
                        }
                        else {
                              strcat(mensaje," ");
                        }
                   }
              }
           }
           else {
                if ( npremio == 51 || npremio == 54 || npremio == 55 || npremio == 57 ) {
                     strcat(mensaje,"Varilux Blanco, 20 puntos");
                }
                else {
                     if ( npremio == 56 || npremio == 60 && (strcmp(terminado.arr,"T") && strcmp(terminado.arr,"F") && strcmp(terminado.arr,"C") ) )  {
                          strcat(mensaje,"Acolade y Ovation Blanco, 10 puntos");
                     }
                     else {
                          if ( npremio == 50 || npremio == 59 ) {
                               strcat(mensaje,"Adaptar y Smallfit Blanco, 5 puntos");
                          }
                          else {
                                strcat(mensaje," ");
                          }
                     }
                }
           }
       }
*/
//  }
    fprintf (fp,"%s%s%s%-51s%s%44s%s\n",condensado_off,elite,enfatizado_on,mensaje,enfatizado_off,fmtnum("$$$,$$$,$$9",cadena,r_t),diezcpi);
    con_lin++;
    sprintf (cadena,"%6d",tpuntos+puntosc);
//  fprintf (fp,"Puntos de esta orden %s,",fmtnum("zzz9",cadena,r_t));
//  sprintf (cadena2,"%6d",puntos_ac);
//  fprintf (fp," puntos acumulados %s\n",fmtnum("zzzz9",cadena2,r_t));
//  fprintf (fp,"\n");
//    fprintf (fp,"\n");

//    if ( strcmp(codigo_cliente.arr,"BM037") ) {
       for (l=0;l<length(aInvima);l++) {
           if (strlen(aInvima[l])>0) {
               fprintf (fp,"%s%s %s %s%s\n",condensado_on,clado[l],aInvima[l],"Lote:",clotes[l]);
               con_lin++;
           }
       }
/*    }
 else {
       fprintf (fp,"%s%s %s %s%s %s\n",condensado_on," "," "," "," ",mensaje);
       con_lin+=1;
 }
*/
//    fprintf (fp,"%s%s. %s%s\r",condensado_on,cinvima,"Lote(s):",clotes);
//    fprintf (fp,"%s%s. %s%s\r",condensado_on,"Importado por LABOCOSTA S.A., Registro sanitario No. INVIMA 2009 DM-0003426","Lote(s):",clotes);
    fprintf (fp,"%s\r",condensado_off);
    con_pag=0;
    commited=0;
    contador=0;

    while (!commited && contador < 5) {
          if ( hacer_asiento() == 0 ) {
              commited=1;
          }
          else {
                /* EXEC SQL ROLLBACK WORK RELEASE; */ 

{
                struct sqlexd sqlstm;

                sqlstm.sqlvsn = 8;
                sqlstm.arrsiz = 27;
                sqlstm.iters = (unsigned long  )1;
                sqlstm.offset = (unsigned short)752;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)0;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                contador++;
          }
    }
   
}

void imprimo_servicios()
{
 int i=0;
 tot_servicio=0;
 while (!oraest) {
       nomb_servicio.arr [nomb_servicio.len] = '\0';
       i++;
       subtotal+=valor_servicio;
       tot_servicio+=valor_servicio;
       sprintf (cadena,"%6d",cantidad_srv);
       if (i>1)
          fprintf (fp,".\r");
       fprintf (fp,"%39s%25s%19s"," ",nomb_servicio.arr,fmtnum("zzz,zz9",cadena,r_t));
       sprintf (cadena,"%6.0f",valor_servicio);
       fprintf (fp,"%12s\n",fmtnum("zz,zzz,zz9",cadena,r_t));
       con_lin++;
       /* EXEC SQL FETCH C7 INTO :nomb_servicio, :cantidad_srv, :valor_servicio; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 27;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)766;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&nomb_servicio;
       sqlstm.sqhstl[0] = (unsigned long  )28;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&cantidad_srv;
       sqlstm.sqhstl[1] = (unsigned long  )4;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&valor_servicio;
       sqlstm.sqhstl[2] = (unsigned long  )8;
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
       if (oraest == -1405)
           oraest  = 0;
 }
}

/************************
* Rx_procesor
*    Imprime Rx_procesor.
*/

void Rx_procesor()
{
/*  system("rx_procesor"); */
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
  for (i=0;i<22-con_lin;i++)
       fprintf(fp,"\n");
  con_pag++;
  con_len=0;
  strcpy(cadena,fecha);
  numero_fecha(cadena);
  fprintf (fp,"%s%s%s%s%34s%7.0f%s%s%s\n\n",condensado_off,diezcpi,enfatizado_on,ancho_on,alto_on,numero_orden,ancho_off,alto_off,enfatizado_off);
  fprintf (fp,"%34s\n%40s%5.0f%s  %s%s%5.0f%s%s%s%s %s%s %s\n",codigo_cliente.arr," ",consecutivo,elite,ancho_on,enfatizado_on,numero_caja,"-",color_caja.arr,ancho_off,diezcpi,cadena,enfatizado_off,hora);
  fprintf (fp,"%s%s%s\n",elite,enfatizado_on,nomb_clie.arr);
  fprintf (fp,"%-49s%-39s%s%02d    %02d\n\n",nomb_ciu.arr,"OFTALMICA",enfatizado_off,con_pag,1);
  fprintf (fp,"%53s%11s\n"," ","Fec.Cliente");
  sprintf(cadena,"%6.0f",pfactu);
  fmtnum("ZZZZZZ",cadena,r_t);
  fprintf (fp,"%12s",cadena);
  sprintf(cadena,"%6.0f",gaveta);
  fmtnum("ZZZZZZ",cadena,r_t);
  fprintf (fp,"%14s %-26s%11s %s\n\n",cadena,observacion.arr,fecha_cliente.arr,profesional.arr);
  con_lin = 10;
  if (!strcmp(estado.arr,"R")) {
      fprintf (fp,"%30s%s%s\n",ancho_on,"**** A N U L A D A ****",ancho_off);
      con_lin++;
  }
}

int hacer_asiento()
{

  strcpy(fuenteb.arr,"18");
  fuenteb.len = strlen(fuenteb.arr);

  strcpy(comprobanteb.arr,orden.arr);
  comprobanteb.len = strlen(comprobanteb.arr);

  strcpy(fechab.arr,fecha);
  fechab.len = strlen(fechab.arr);

/* Lee consecutivo de control_mes Fte 15 Cns ultimo Asiento Ordenes */
  /* EXEC SQL select consecutivo   into :consecutivo15
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesa)      and
                 codigo_emp   = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 27;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3))";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)792;
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
  sprintf(consecutivob.arr,"%5.0f",consecutivo15);
  consecutivob.len = strlen(consecutivob.arr);
  /* EXEC SQL
       select c.consecutivo, max(secuencia)
       into   :consecutivo, :secuencia
       from movto_d d, movto_c c
       where c.codigo_emp  = to_number(:codigo_emp)    and
             c.codigo_emp  = d.codigo_emp              and
             c.ano_mes     = d.ano_mes                 and
             c.consecutivo = d.consecutivo             and
             c.comprobante = to_number(:comprobanteb)  and
             c.clase       = 'CV'                      and
             c.tipo        = 9                         and
             c.ano_mes     = to_number(:ano_mesa)      and
             c.estado      <>   '2'
       group by c.consecutivo; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 27;
  sqlstm.stmt = "select c.consecutivo ,max(secuencia) into :b0,:b1  from mov\
to_d d ,movto_c c where ((((((((c.codigo_emp=to_number(:b2) and c.codigo_emp=d\
.codigo_emp) and c.ano_mes=d.ano_mes) and c.consecutivo=d.consecutivo) and c.c\
omprobante=to_number(:b3)) and c.clase='CV') and c.tipo=9) and c.ano_mes=to_nu\
mber(:b4)) and c.estado<>'2') group by c.consecutivo";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)822;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&secuencia;
  sqlstm.sqhstl[1] = (unsigned long  )8;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[2] = (unsigned long  )7;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&comprobanteb;
  sqlstm.sqhstl[3] = (unsigned long  )17;
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



  if (sqlca.sqlcode == 0) {
       sprintf(consecutivob.arr,"%5.0f",consecutivo);
       consecutivob.len = strlen(consecutivob.arr);
       reverso_asiento();
  }
  else {
       strcpy(fuenteb.arr,"08");
       fuenteb.len = strlen(fuenteb.arr);

  /* Lee consecutivo de Control_mes Fte 08 sgte consecutivo */

       /* EXEC SQL select consecutivo+1, version
                into :consecutivo, :version
                from control_mes
                where fuente       = to_number(:fuenteb)       and
                      ano_mes      = to_number(:ano_mesa)      and
                      codigo_emp   = to_number(:codigo_emp); */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 27;
       sqlstm.stmt = "select (consecutivo+1) ,version into :b0,:b1  from con\
trol_mes where ((fuente=to_number(:b2) and ano_mes=to_number(:b3)) and codigo_\
emp=to_number(:b4))";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)856;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo;
       sqlstm.sqhstl[0] = (unsigned long  )8;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&version;
       sqlstm.sqhstl[1] = (unsigned long  )8;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&fuenteb;
       sqlstm.sqhstl[2] = (unsigned long  )5;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&ano_mesa;
       sqlstm.sqhstl[3] = (unsigned long  )22;
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



       if (sqlca.sqlcode)
          {
           fprintf (stderr, "Error leyendo Control_Mes 08 (%d)\n", sqlca.sqlcode);
           consecutivo=1;
           sprintf(consecutivob.arr,"%5.0f",consecutivo);
           consecutivob.len = strlen(consecutivob.arr);
               /* Inserta en Control_Mes Fte 08 si no existe (C11) */
           /* EXEC SQL insert into control_mes
                    (FUENTE,ANO_MES,NOMBRE,CONSECUTIVO,CODIGO_EMP,VERSION)
                    values (:fuenteb, :ano_mesa, 'CONTROL SALIDAS CREDITO',
                            :consecutivob, :codigo_emp,0); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 27;
           sqlstm.stmt = "insert into control_mes(FUENTE,ANO_MES,NOMBRE,CONS\
ECUTIVO,CODIGO_EMP,VERSION) values (:b0,:b1,'CONTROL SALIDAS CREDITO',:b2,:b3,\
0)";
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)890;
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
                            fuente       = :fuenteb                  and
                            version      = :version; */ 

{
             struct sqlexd sqlstm;

             sqlstm.sqlvsn = 8;
             sqlstm.arrsiz = 27;
             sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((\
(codigo_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3) and ver\
sion=:b4)";
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)920;
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
             sqlstm.sqhstv[4] = (unsigned char  *)&version;
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


       }
/*       if (sqlca.sqlcode) {
          return 1;
       }*/

       strcpy(fuenteb.arr,"18");
       fuenteb.len = strlen(fuenteb.arr);

       /* EXEC SQL select consecutivo, version
                into :consecutivo15, :version
                from control_mes
                where fuente       = to_number(:fuenteb)       and
                      ano_mes      = to_number(:ano_mesa)      and
                      codigo_emp   = to_number(:codigo_emp); */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 27;
       sqlstm.stmt = "select consecutivo ,version into :b0,:b1  from control\
_mes where ((fuente=to_number(:b2) and ano_mes=to_number(:b3)) and codigo_emp=\
to_number(:b4))";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)954;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo15;
       sqlstm.sqhstl[0] = (unsigned long  )8;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&version;
       sqlstm.sqhstl[1] = (unsigned long  )8;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&fuenteb;
       sqlstm.sqhstl[2] = (unsigned long  )5;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&ano_mesa;
       sqlstm.sqhstl[3] = (unsigned long  )22;
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



       if (sqlca.sqlcode)
          {
           fprintf (stderr, "Error leyendo Control_Mes 18 (%d)\n", sqlca.sqlcode);
                    /* Inserta en Control_Mes Fte 15 si no existe (C11) */
           /* EXEC SQL insert into control_mes
                    (FUENTE,ANO_MES,NOMBRE,CONSECUTIVO,CODIGO_EMP,VERSION)
                    values (:fuenteb, :ano_mesa, 'CONTROL SALIDAS CREDITO',
                            :consecutivob, :codigo_emp,0); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 27;
           sqlstm.stmt = "insert into control_mes(FUENTE,ANO_MES,NOMBRE,CONS\
ECUTIVO,CODIGO_EMP,VERSION) values (:b0,:b1,'CONTROL SALIDAS CREDITO',:b2,:b3,\
0)";
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)988;
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
                            fuente       = :fuenteb                  and
                            version      = :version; */ 

{
             struct sqlexd sqlstm;

             sqlstm.sqlvsn = 8;
             sqlstm.arrsiz = 27;
             sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((\
(codigo_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3) and ver\
sion=:b4)";
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)1018;
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
             sqlstm.sqhstv[4] = (unsigned char  *)&version;
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


       }

/*       if (sqlca.sqlcode) {
          return 1;
       }*/

       /* EXEC SQL insert into movto_c
       (CODIGO_EMP, ANO_MES, COMPROBANTE, CONSECUTIVO, CLASE, DESCRIPCION, FECHA, TIPO,
	ESTADO, NITB, CODIGO_NITB, VALORB, RETENCION, CONTADO )
                values(:codigo_emp, :ano_mesa, :comprobanteb, :consecutivob, 'CV',
                       'LENTES OFTALMICOS',:fechab,'9', '0','','','','',''); */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 27;
       sqlstm.stmt = "insert into movto_c(CODIGO_EMP,ANO_MES,COMPROBANTE,CON\
SECUTIVO,CLASE,DESCRIPCION,FECHA,TIPO,ESTADO,NITB,CODIGO_NITB,VALORB,RETENCION\
,CONTADO) values (:b0,:b1,:b2,:b3,'CV','LENTES OFTALMICOS',:b4,'9','0','','','\
','','')";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)1052;
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
       sqlstm.sqhstl[2] = (unsigned long  )17;
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



       if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
           fprintf (stderr, "Error insertando Movto_C (%d)\n", sqlca.sqlcode);
           return 1;
       }
  }

  staora  = 0;
  strcpy(cuenta_db.arr,"61359501");
  strcpy(cuenta_cr.arr,"14350101");
  cuenta_db.arr  [cuenta_db.len]  = '\0';
  cuenta_cr.arr  [cuenta_cr.len]  = '\0';
  fecha_asto.arr [fecha_asto.len] = '\0';
  codigo.arr     [codigo.len]     = '\0';
  codigo.len  =  strlen(codigo.arr);

/***************************************/
/* COSTO DE VENTAS CONTRA INVENTARIOS  */
/***************************************/

/* 1) Grabar Ventas lentes oftalmicos ( Debito ) */

//  fprintf (stderr, "costo_venta: %15.2f", costo_venta); getchar();

  if ( costo_venta != 0 ) {
     secuencia++;
     sprintf(secuenciab.arr,"%6.0f",secuencia);
     secuenciab.len = strlen(secuenciab.arr);

     strcpy(cuentab.arr,"61359501");
     cuentab.len = strlen(cuentab.arr);
     cuentab.arr  [cuentab.len]  = '\0';

     strcpy(codigox.arr,cuentab.arr);
     codigox.len = strlen(codigox.arr);

     for (i=1;i<=4;i++) {
          strcpy(inf[i],"");
     }
     strcpy(inf[1],cuentab.arr);
     strcpy(inf[2],comprobanteb.arr);

     ver_inf();
     strcpy (valor_creb.arr,"");
     valor_creb.len = strlen(valor_creb.arr);
     sprintf(valor_debb.arr,"%10.2f",costo_venta);
     valor_debb.len = strlen(valor_debb.arr);
/*
     printf("asiento movto_d_1 %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s ",codigo_emp.arr, ano_mesa.arr, consecutivob.arr, secuenciab.arr,
                     cuentab.arr, infa.arr, infb.arr, infc.arr, infd.arr,
                     codigo_nitb.arr, valor_debb.arr, valor_creb.arr); getchar();
*/                                         /* Graba en movto_d el Debito (C4) */
     /* EXEC SQL insert into movto_d
     	      (CODIGO_EMP, ANO_MES,CONSECUTIVO,SECUENCIA,CUENTA,
		INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS)
              values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                     :cuentab, :infa, :infb, :infc, :infd,
                     :codigo_nitb, :valor_debb, :valor_creb, '001', 1); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 27;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1086;
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



     if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
         fprintf (stderr, "Error Grabando Debito (%d)\n", sqlca.sqlcode);
//         return 1;
     }
  }

/* 2) Grabar Inventario de lentes oftalmicos ( Credito ) */

  if ( costo_venta != 0 ) {
     secuencia++;
     sprintf(secuenciab.arr,"%6.0f",secuencia);
     secuenciab.len = strlen(secuenciab.arr);

     strcpy(cuentab.arr,"14350120");
     cuentab.len = strlen(cuentab.arr);
     cuentab.arr  [cuentab.len]  = '\0';

     strcpy(codigox.arr,cuentab.arr);
     codigox.len = strlen(codigox.arr);

     for (i=1;i<=4;i++) {
          strcpy(inf[i],"");
     }

     strcpy(inf[2],comprobanteb.arr);

     ver_inf();
     strcpy (valor_debb.arr,"");
     valor_debb.len = strlen(valor_debb.arr);
     sprintf(valor_creb.arr,"%10.2f",costo_venta);
     valor_creb.len = strlen(valor_creb.arr);
                                         /* Graba en movto_d el Debito (C4) */
/*
     printf("asiento movto_d_2 %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s ",codigo_emp.arr, ano_mesa.arr, consecutivob.arr, secuenciab.arr,
                     cuentab.arr, infa.arr, infb.arr, infc.arr, infd.arr,
                     codigo_nitb.arr, valor_debb.arr, valor_creb.arr); getchar();
*/

     /* EXEC SQL insert into movto_d
     	      (CODIGO_EMP, ANO_MES,CONSECUTIVO,SECUENCIA,CUENTA,
		INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS)
              values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                     :cuentab, :infa, :infb, :infc, :infd,
                     :codigo_nitb, :valor_debb, :valor_creb, '001', 1); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 27;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1148;
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



     if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
         fprintf (stderr, "Error Grabando Debito (%d)\n", sqlca.sqlcode);
//         return 1;
     }
  }

  return 0;

}

void reverso_asiento()
{

    /* EXEC SQL
         select max(secuencia)
         into   :secuencia
         from movto_d d, movto_c c
         where c.codigo_emp  = to_number(:codigo_emp)    and
               c.codigo_emp  = d.codigo_emp              and
               c.ano_mes     = d.ano_mes                 and
               c.consecutivo = d.consecutivo             and
               c.comprobante = to_number(:comprobanteb)  and
               c.clase       = 'CV'                      and
               c.tipo        = 9                         and
               c.ano_mes     = to_number(:ano_mesa)      and
               c.estado      <>   '2'; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 27;
    sqlstm.stmt = "select max(secuencia) into :b0  from movto_d d ,movto_c c\
 where ((((((((c.codigo_emp=to_number(:b1) and c.codigo_emp=d.codigo_emp) and \
c.ano_mes=d.ano_mes) and c.consecutivo=d.consecutivo) and c.comprobante=to_num\
ber(:b2)) and c.clase='CV') and c.tipo=9) and c.ano_mes=to_number(:b3)) and c.\
estado<>'2')";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)1210;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&secuencia;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[1] = (unsigned long  )7;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&comprobanteb;
    sqlstm.sqhstl[2] = (unsigned long  )17;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&ano_mesa;
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



    if ( secuencia > 0 ) {

       /* EXEC SQL DECLARE C9 CURSOR FOR
            select d.consecutivo, cuenta, infa, infb, infc, infd, codigo_nit, sum(nvl(valor_deb,0)-nvl(valor_cre,0))
            from movto_d d, movto_c c
            where c.codigo_emp  = to_number(:codigo_emp)    and
                  c.codigo_emp  = d.codigo_emp              and
                  c.ano_mes     = d.ano_mes                 and
                  c.consecutivo = d.consecutivo             and
                  c.comprobante = to_number(:comprobanteb)  and
                  c.clase       = 'CV'                      and
                  c.tipo        = 9                         and
                  c.ano_mes     = to_number(:ano_mesa)      and
                  c.estado      <>   '2'
            group by d.consecutivo, cuenta, infa, infb, infc, infd, codigo_nit; */ 


      /* EXEC SQL OPEN C9; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 27;
      sqlstm.stmt = sq0029;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)1240;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
      sqlstm.sqhstl[0] = (unsigned long  )7;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&comprobanteb;
      sqlstm.sqhstl[1] = (unsigned long  )17;
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



      /* EXEC SQL FETCH C9 INTO :consecutivo,  :cuentab,
                             :infa, :infb,  :infc, :infd,
                             :codigo_nit,   :valor; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 27;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)1266;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo;
      sqlstm.sqhstl[0] = (unsigned long  )8;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&cuentab;
      sqlstm.sqhstl[1] = (unsigned long  )17;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&infa;
      sqlstm.sqhstl[2] = (unsigned long  )16;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&infb;
      sqlstm.sqhstl[3] = (unsigned long  )16;
      sqlstm.sqindv[3] = (         short *)0;
      sqlstm.sqharm[3] = (unsigned long )0;
      sqlstm.sqhstv[4] = (unsigned char  *)&infc;
      sqlstm.sqhstl[4] = (unsigned long  )16;
      sqlstm.sqindv[4] = (         short *)0;
      sqlstm.sqharm[4] = (unsigned long )0;
      sqlstm.sqhstv[5] = (unsigned char  *)&infd;
      sqlstm.sqhstl[5] = (unsigned long  )16;
      sqlstm.sqindv[5] = (         short *)0;
      sqlstm.sqharm[5] = (unsigned long )0;
      sqlstm.sqhstv[6] = (unsigned char  *)&codigo_nit;
      sqlstm.sqhstl[6] = (unsigned long  )8;
      sqlstm.sqindv[6] = (         short *)0;
      sqlstm.sqharm[6] = (unsigned long )0;
      sqlstm.sqhstv[7] = (unsigned char  *)&valor;
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



      oraest  = sqlca.sqlcode;

      if (sqlca.sqlcode == -1405 )
          oraest = 0;
      else {
            if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
                fprintf (stderr, "Error leyendo C9 (%d)\n", sqlca.sqlcode);
      }

      cuentab.arr             [cuentab.len]            = '\0';
      infa.arr                [infa.len]               = '\0';
      infb.arr                [infb.len]               = '\0';
      infc.arr                [infc.len]               = '\0';
      infd.arr                [infd.len]               = '\0';

      while (oraest==0) {

           sprintf(consecutivob.arr,"%5.0f",consecutivo);
           consecutivob.len = strlen(consecutivob.arr);

           secuencia++;
           sprintf(secuenciab.arr,"%6.0f",secuencia);
           secuenciab.len = strlen(secuenciab.arr);

           if (codigo_nit==0)
              strcpy(codigo_nitb.arr,"");
           else sprintf(codigo_nitb.arr,"%5d",codigo_nit);
           codigo_nitb.len = strlen(codigo_nitb.arr);

           if ( valor > 0 ) {
               strcpy (valor_debb.arr,"");
               valor_debb.len = strlen(valor_debb.arr);
               sprintf(valor_creb.arr,"%10.2f",valor);
               valor_creb.len = strlen(valor_creb.arr);
           }
           else {
              strcpy (valor_creb.arr,"");
              valor_creb.len = strlen(valor_creb.arr);
              sprintf(valor_debb.arr,"%10.2f",valor*-1);
              valor_debb.len = strlen(valor_debb.arr);
          }
/*

     printf("asiento movto_d_3 %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s ",codigo_emp.arr, ano_mesa.arr, consecutivob.arr, secuenciab.arr,
                     cuentab.arr, infa.arr, infb.arr, infc.arr, infd.arr,
                     codigo_nitb.arr, valor_debb.arr, valor_creb.arr); getchar();
*/
              /* EXEC SQL insert into movto_d
     	      		(CODIGO_EMP, ANO_MES,CONSECUTIVO,SECUENCIA,CUENTA,
			 INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS)
                       values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                              :cuentab, :infa, :infb, :infc, :infd,
                              :codigo_nitb, :valor_debb, :valor_creb, '001', 1); */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 8;
              sqlstm.arrsiz = 27;
              sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUT\
IVO,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURS\
AL,CEN_COS) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
              sqlstm.iters = (unsigned long  )1;
              sqlstm.offset = (unsigned short)1312;
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
                  fprintf (stderr, "Error Grabando movto_d (%d)\n", sqlca.sqlcode);

           /* EXEC SQL FETCH C9 INTO :consecutivo,  :cuentab,
                                  :infa, :infb,  :infc, :infd,
                                  :codigo_nit,   :valor; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 27;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)1374;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo;
           sqlstm.sqhstl[0] = (unsigned long  )8;
           sqlstm.sqindv[0] = (         short *)0;
           sqlstm.sqharm[0] = (unsigned long )0;
           sqlstm.sqhstv[1] = (unsigned char  *)&cuentab;
           sqlstm.sqhstl[1] = (unsigned long  )17;
           sqlstm.sqindv[1] = (         short *)0;
           sqlstm.sqharm[1] = (unsigned long )0;
           sqlstm.sqhstv[2] = (unsigned char  *)&infa;
           sqlstm.sqhstl[2] = (unsigned long  )16;
           sqlstm.sqindv[2] = (         short *)0;
           sqlstm.sqharm[2] = (unsigned long )0;
           sqlstm.sqhstv[3] = (unsigned char  *)&infb;
           sqlstm.sqhstl[3] = (unsigned long  )16;
           sqlstm.sqindv[3] = (         short *)0;
           sqlstm.sqharm[3] = (unsigned long )0;
           sqlstm.sqhstv[4] = (unsigned char  *)&infc;
           sqlstm.sqhstl[4] = (unsigned long  )16;
           sqlstm.sqindv[4] = (         short *)0;
           sqlstm.sqharm[4] = (unsigned long )0;
           sqlstm.sqhstv[5] = (unsigned char  *)&infd;
           sqlstm.sqhstl[5] = (unsigned long  )16;
           sqlstm.sqindv[5] = (         short *)0;
           sqlstm.sqharm[5] = (unsigned long )0;
           sqlstm.sqhstv[6] = (unsigned char  *)&codigo_nit;
           sqlstm.sqhstl[6] = (unsigned long  )8;
           sqlstm.sqindv[6] = (         short *)0;
           sqlstm.sqharm[6] = (unsigned long )0;
           sqlstm.sqhstv[7] = (unsigned char  *)&valor;
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



           cuentab.arr             [cuentab.len]            = '\0';
           infa.arr                [infa.len]               = '\0';
           infb.arr                [infb.len]               = '\0';
           infc.arr                [infc.len]               = '\0';
           infd.arr                [infd.len]               = '\0';

           oraest  = sqlca.sqlcode;
           if (sqlca.sqlcode == 1403) break;

           if (sqlca.sqlcode == -1405 )
               oraest = 0;
           else {
                 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
                     fprintf (stderr, "Error leyendo C9 (%d)\n", sqlca.sqlcode);
           }
      }

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
  sqlstm.arrsiz = 27;
  sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b3  from pl\
an where (codigo_emp=:b4 and cuenta=:b5)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)1420;
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
          sprintf(inf[i],"%12.0f",nitn);
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

