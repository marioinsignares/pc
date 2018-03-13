
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
    ".\\fcontado.pc"
};


static const unsigned long sqlctx = 1281124344;


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
   unsigned char    *sqhstv[32];
   unsigned long    sqhstl[32];
	    short   *sqindv[32];
   unsigned long    sqharm[32];
   unsigned long     *sqharc[32];
} sqlstm = {8,32};

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

 static const char *sq0007 = 
"select inf  from infacu            ";
 static const char *sq0004 = 
"select d.lado_lente ,nvl(d.tipo_mat_fac,d.tipo_material) ,d.colorv ,esfera ,\
nvl(cilindro,0) ,nvl(eje,0) ,nvl(prisma,0) ,nvl(base,0) ,d.dir_prisma ,nvl(adi\
cion,0) ,cantidad ,valor_venta ,codigo_articulo ,terminado ,d.especial ,d.diam\
etro ,cl.nombre ,d.clase_mat_fac ,d.tipo_mat_fac ,costo_promedio_p ,nvl(puntos\
,0) ,decode(substr(codigo_articulo,1,1),'4',1,'5',1,'B',1,0) ,decode(substr(co\
digo_articulo,3,2),'50',1,'51',1,'54',1,'55',1,'56',1,'57',1,'59',1,0) ,substr\
(codigo_articulo,3,2) ,d.codigo_prv ,d.lote ,p.rinvima  from ordenes_d d ,clas\
e cl ,proveedores p where (((d.consecutivo=:b0 and d.ano_mes=:b1) and nvl(d.cl\
ase_mat_fac,clase_mat)=cl.clase_material(+)) and d.codigo_prv=p.codigo_prv(+))\
 order by lado_lente            ";
 static const char *sq0006 = 
"select s.nombre ,o.cantidad ,nvl((o.cantidad* o.valor_unidad),0)  from orden\
es_o o ,servicios_len s where (((((o.tipo_servicio=s.tipo_servicio and o.tipo_\
trabajo=s.tipo_trabajo) and o.consecutivo=:b0) and o.ano_mes=:b1) and o.tipo_s\
ervicio=:b2) and s.lista=(select lista  from clientes where codigo_cliente=:b3\
)) order by s.secuencia            ";
 static const char *sq0005 = 
"select to_number(decode(si_no,'S','1','N','0','1'))  from fletescob where (c\
odigo_cli_may>=:b0 and codigo_cli_men<=:b0)           ";
 static const char *sq0048 = 
"select d.consecutivo ,d.cuenta ,d.infa ,d.infb ,d.infc ,d.infd ,d.codigo_nit\
 ,sum((nvl(d.valor_deb,0)-nvl(d.valor_cre,0)))  from movto_d d ,movto_c c wher\
e (((((((c.codigo_emp=to_number(:b0) and c.codigo_emp=d.codigo_emp) and c.ano_\
mes=d.ano_mes) and c.consecutivo=d.consecutivo) and c.consecutivo=to_number(:b\
1)) and c.clase='CV') and c.tipo=9) and c.ano_mes=to_number(:b2)) group by d.c\
onsecutivo,d.cuenta,d.infa,d.infb,d.infc,d.infd,d.codigo_nit           ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,322,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,974,0,4,347,0,32,1,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,3,0,0,2,9,0,0,
2,4,0,0,2,3,0,0,2,3,0,0,2,4,0,0,2,4,0,0,2,9,0,0,1,9,0,0,
170,0,0,3,57,0,4,398,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
192,0,0,7,35,0,9,446,0,0,0,0,1,0,
206,0,0,7,0,0,13,453,0,1,0,0,1,0,2,9,0,0,
224,0,0,7,0,0,15,467,0,0,0,0,1,0,
238,0,0,8,87,0,4,471,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,1,9,0,0,
268,0,0,9,81,0,4,481,0,3,2,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,
294,0,0,10,81,0,4,490,0,3,2,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,
320,0,0,4,732,0,9,516,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
342,0,0,4,0,0,13,520,0,27,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,3,
0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,
464,0,0,11,0,0,30,694,0,0,0,0,1,0,
478,0,0,12,0,0,32,697,0,0,0,0,1,0,
492,0,0,4,0,0,15,699,0,0,0,0,1,0,
506,0,0,6,0,0,15,700,0,0,0,0,1,0,
520,0,0,13,64,0,5,706,0,1,1,0,1,0,1,9,0,0,
538,0,0,14,104,0,4,798,0,4,3,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
568,0,0,15,83,0,4,819,0,3,2,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,
594,0,0,16,62,0,4,834,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
616,0,0,17,54,0,4,848,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
638,0,0,6,345,0,9,861,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
668,0,0,6,0,0,13,863,0,3,0,0,1,0,2,9,0,0,2,3,0,0,2,4,0,0,
694,0,0,6,0,0,15,909,0,0,0,0,1,0,
708,0,0,6,0,0,15,924,0,0,0,0,1,0,
722,0,0,6,0,0,15,939,0,0,0,0,1,0,
736,0,0,6,0,0,15,950,0,0,0,0,1,0,
750,0,0,6,0,0,15,963,0,0,0,0,1,0,
764,0,0,6,0,0,15,974,0,0,0,0,1,0,
778,0,0,6,0,0,13,1090,0,3,0,0,1,0,2,9,0,0,2,3,0,0,2,4,0,0,
804,0,0,18,97,0,516,1193,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
826,0,0,19,0,0,32,1336,0,0,0,0,1,0,
840,0,0,20,115,0,5,1345,0,1,1,0,1,0,1,9,0,0,
858,0,0,21,97,0,4,1366,0,3,1,0,1,0,2,4,0,0,2,3,0,0,1,9,0,0,
884,0,0,22,136,0,4,1399,0,3,2,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,
910,0,0,23,154,0,5,1421,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
936,0,0,24,657,0,3,1430,0,19,19,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1026,0,0,25,123,0,4,1500,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1056,0,0,26,131,0,4,1577,0,4,2,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,
1086,0,0,5,130,0,9,1597,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
1108,0,0,5,0,0,13,1598,0,1,0,0,1,0,2,3,0,0,
1126,0,0,5,0,0,15,1604,0,0,0,0,1,0,
1140,0,0,27,286,0,4,1611,0,4,2,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,
1170,0,0,28,405,0,4,1634,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1204,0,0,29,232,0,3,1677,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1238,0,0,30,203,0,3,1730,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1300,0,0,31,123,0,4,1756,0,3,1,0,1,0,2,9,0,0,2,4,0,0,1,9,0,0,
1326,0,0,32,203,0,3,1782,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1388,0,0,33,203,0,3,1827,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1450,0,0,34,203,0,3,1871,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1512,0,0,35,203,0,3,1911,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1574,0,0,36,132,0,4,1939,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1604,0,0,37,219,0,3,1959,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1638,0,0,38,203,0,3,1998,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1700,0,0,39,203,0,3,2038,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1762,0,0,40,134,0,4,2068,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1792,0,0,41,151,0,4,2087,0,5,3,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1826,0,0,42,128,0,3,2101,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1856,0,0,43,135,0,5,2110,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
1890,0,0,44,147,0,4,2124,0,5,3,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1924,0,0,45,128,0,3,2135,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1954,0,0,46,135,0,5,2142,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
1988,0,0,47,283,0,4,2157,0,4,3,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
2018,0,0,48,459,0,9,2189,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
2044,0,0,48,0,0,13,2191,0,8,0,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,4,0,0,2,4,0,0,
2090,0,0,49,203,0,3,2237,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
2152,0,0,48,0,0,13,2247,0,8,0,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,4,0,0,2,4,0,0,
2198,0,0,50,99,0,4,2274,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,
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
void subtotales();
void totales();
void Rx_procesor();
void borro_puntos();
void titulos();

void busco_total_hojas();
void busco_nro_factura();
void busco_total_hojas();
void mover_datos_factura();
void borro_acumulados();
void actualizo_facturas();
int marco_facturadas();
void actualizo_clientem();
void calculo_desctos();
void calculo_fletes();
void actu_totales();
void monletr();
int control_asiento();
int hacer_asiento();
void reverso_asiento();
void ver_inf();
void fnit();
void factura();

				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Ordenes_c (C1) */
double  nit;
double  numero_orden;
int     digito;
/* VARCHAR direccion      [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } direccion;

/* VARCHAR codigo_cliente [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_cliente;

/* VARCHAR tipo_cliente   [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } tipo_cliente;

/* VARCHAR nomb_clie      [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nomb_clie;

/* VARCHAR nomb_ciu       [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciu;

/* VARCHAR nomb_clase     [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } nomb_clase;

/* VARCHAR tipo_material  [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } tipo_material;

/* VARCHAR tipo_lista     [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } tipo_lista;

/* VARCHAR fecha_control  [70]; */ 
struct { unsigned short len; unsigned char arr[70]; } fecha_control;

/* VARCHAR cantidad_envios[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cantidad_envios;

/* VARCHAR codigo_emp     [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR numero_quincena[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } numero_quincena;

/* VARCHAR wcod           [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } wcod;

/* VARCHAR ano_mes_c      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes_c;

/* VARCHAR numero_factura [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } numero_factura;

/* VARCHAR codigo_emp_op[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp_op;

/* VARCHAR rete_fte_c     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } rete_fte_c;

double  retefte;
double  monto_retefte;
double  tipo_descto;
int     nro_ordenes_c;
int     nro_ordenes_o;
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
double  valor;
float   diametro;
double  consecutivo;
int     ano_mes;
int     puntos;
int     puntosc;
int     puntos_ac;
int     clase_prom;
int     promocion;
int     premios;
int     propias;
float   numero_caja;
/* VARCHAR color_caja     [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } color_caja;

/* VARCHAR estado         [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } estado;

/* VARCHAR clase_material [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } clase_material;

/* VARCHAR orden          [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } orden;

                                 /* Ordenes_d (C2) */
/* VARCHAR lado_lente     [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } lado_lente;

/* VARCHAR d_tipo_material[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } d_tipo_material;

/* VARCHAR colorv         [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } colorv;

float   esfera;
float   cilindro;
int     eje;
float   prisma;
/* VARCHAR base           [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } base;

float   dir_prisma;
float   adicion;
int     cantidad;
int     tcantidad;
double  valor_venta;
double  costo_promedio_p;
/* VARCHAR codigo_articulo[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } codigo_articulo;

/* VARCHAR terminado      [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } terminado;

/* VARCHAR esp_cial       [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } esp_cial;

float   d_diametro;
/* VARCHAR d_nomb_clase   [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } d_nomb_clase;

/* VARCHAR clase_mat_fac  [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } clase_mat_fac;

/* VARCHAR tipo_mat_fac   [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } tipo_mat_fac;

/* VARCHAR ano_mesa       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesa;

/* VARCHAR consecutivoa   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } consecutivoa;

/* VARCHAR codigo_prv     [05]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_prv;

/* VARCHAR lote           [22]; */ 
struct { unsigned short len; unsigned char arr[22]; } lote;

                                 /* Tipos (C3) */
/* VARCHAR nomb_tipol     [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } nomb_tipol;

/* VARCHAR tipo_mat       [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } tipo_mat;

/* VARCHAR tipo_lis       [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } tipo_lis;

/* VARCHAR clase_mat      [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } clase_mat;

                                 /* Tipos (C4) */
/* VARCHAR nomb_tipo      [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } nomb_tipo;

                                 /* Almacen (C5) */
/* VARCHAR nomb_tipoa     [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } nomb_tipoa;

/* VARCHAR codigo_art     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_art;

                                 /* Coloresv (C12) */
/* VARCHAR nomb_color     [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_color;

/* VARCHAR colorva        [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } colorva;

                                 /* Servicios_len (C7) */
/* VARCHAR nomb_servicio  [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } nomb_servicio;

int     cantidad_srv;
double  valor_servicio;
/* VARCHAR tipo_servicio  [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } tipo_servicio;

                                 /* pedido_c (C8) */
/* VARCHAR observacion    [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } observacion;

float   gaveta;
float   nfactura;
                                 /* Ordenes_d (C9) */
double  tot_lin;
                                 /* Ordenes_o (C10) */
double  tot_lin2;

/* VARCHAR ultimo_numero_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ultimo_numero_c;

/* VARCHAR codigo_cliente_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_cliente_c;

/* VARCHAR fecha_corte_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_corte_c;

/* VARCHAR fecha_vencmto_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_vencmto_c;

/* VARCHAR nro_ordenes_oc[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } nro_ordenes_oc;

/* VARCHAR nro_ordenes_cc[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } nro_ordenes_cc;

/* VARCHAR nro_despachos_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } nro_despachos_c;

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

/* VARCHAR ptaje_iva_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ptaje_iva_c;

/* VARCHAR costo_factura_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } costo_factura_c;

/* VARCHAR tipo_cliente_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } tipo_cliente_c;

/* VARCHAR valor_pagos_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } valor_pagos_c;

/* VARCHAR total_pag_c[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } total_pag_c;

/* VARCHAR fecha_vencmto[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_vencmto;

/* VARCHAR fecha_corte[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_corte;

/* VARCHAR clase_docu[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } clase_docu;


/* VARCHAR vecinf      [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecinf[20];

                                 /* Movto_C (C3) */
/* VARCHAR comprobanteb[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } comprobanteb;

/* VARCHAR consecutivob[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } consecutivob;

/* VARCHAR fechab      [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } fechab;

                                 /* Movto_D (C4) */
/* VARCHAR secuenciab  [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } secuenciab;

/* VARCHAR cuentab     [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuentab;

/* VARCHAR infa        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infa;

/* VARCHAR infb        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infb;

/* VARCHAR infc        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infc;

/* VARCHAR infd        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } infd;

/* VARCHAR codigo_nitb [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_nitb;

/* VARCHAR valor_debb  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } valor_debb;

/* VARCHAR valor_creb  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } valor_creb;

char    inf         [5][20];
                                 /* Control_Mes (C5) */
/* VARCHAR fuenteb     [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } fuenteb;

double  consecutivo15;
double  nitn;
                                 /* Acumulados (C6) */
/* VARCHAR cuenta_db   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuenta_db;

/* VARCHAR cuenta_cr   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cuenta_cr;

/* VARCHAR fecha_asto  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_asto;

/* VARCHAR codigo      [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo;

/* VARCHAR ano_mesi    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR codigox     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigox;

                                 /* Plan (C8) */
/* VARCHAR veca        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } veca;

/* VARCHAR vecb        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecb;

/* VARCHAR vecc        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecc;

/* VARCHAR vecd        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vecd;

char    vecplan     [5][20];
/* VARCHAR rinvima     [200]; */ 
struct { unsigned short len; unsigned char arr[200]; } rinvima;


float   codigo_nit;
double  version;
int     commited;
int     contador;

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
int     con_pag;                                   /* Contador de Paginas */
int     con_len;                                   /* Contador de Paginas */
int     con_lin= 33;                               /* Contador de Lineas  */
int     loop_2 = 0;
int     traidos = 0;
int     num_ret = 0;
int     staora = 0;
int     oraest = 0;
int     pasan=0;
double  total_paginas;
double  sub_total_o;
double  sub_total_c;
char    fecha[20];
char    hora[12];
int     tip;
char    nombre_tipo[33];
double  tot_servicio;
double  subtotal;
double  costo_venta;
int     i, j, k;
float   c;
char    mensaje[100];
char    cadena[100];
char    cadena2[100];
char    cadena3[100];
char    cadena4[100];
char    lineas[132];
int     oraest4;
int     nro_ordenes;
double  sub_total;
double  costo_factura;
double  saldo_factura;
double  secuencia;
int     tpuntos;
int     npromo;
int     nclaprom;
int     npremio;
double  rete_fte;
double  base_gravable;
int     oraest2;
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

    /* EXEC SQL select numero_orden, o.codigo_cliente, n.nombre,
                    nvl(n.nombre_muni,c.nombre),
                    cl.nombre, o.tipo_material, o.tipo_lista,
                    to_char(fecha_control,'DD-MON-YYYY hh:mi am'),
                    nvl(valor_material,0),
                    nvl(valor_bis_mont,0), nvl(valor_trat,0),
                    nvl(valor_color,0),    nvl(valor_desctos,0),
                    nvl(valor_otros,0),    nvl(valor_total,0),
                    nvl(diam_pedido,0), o.consecutivo, o.ano_mes,
                    o.numero_caja, o.color_caja, o.estado, o.clase_material,
                    n.nit, n.digito, n.direccion,
                    nvl(o.tipo_descto,0), nvl(puntos_ac,0), nvl(puntos,0),
                    cf.retefte, cf.monto_retefte, n.clase_docu
             into  :numero_orden, :codigo_cliente, :nomb_clie, :nomb_ciu,
                   :nomb_clase, :tipo_material, :tipo_lista, :fecha_control,
                   :valor_material, :valor_bis_mont, :valor_trat, :valor_color,
                   :valor_desctos, :valor_otros, :valor_total, :diametro,
                   :consecutivo, :ano_mes, :numero_caja, :color_caja,
                   :estado, :clase_material, :nit, :digito, :direccion,
                   :tipo_descto, :puntos_ac, :puntosc,
                   :retefte, :monto_retefte, :clase_docu
             from   nits n, ordenes_c o, ciudades c, clase cl, clientes ct, control_fac cf
             where  n.codigo_nit      = ct.codigo_nit     and
                    cf.codigo_emp     = ct.codigo_emp     and
                    ct.codigo_cliente = o.codigo_cliente  and
                    n.codigo_ciu      = c.codigo          and
                    o.clase_material  = cl.clase_material and
                    o.numero_orden    = :orden; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.stmt = "select numero_orden ,o.codigo_cliente ,n.nombre ,nvl(n.no\
mbre_muni,c.nombre) ,cl.nombre ,o.tipo_material ,o.tipo_lista ,to_char(fecha_c\
ontrol,'DD-MON-YYYY hh:mi am') ,nvl(valor_material,0) ,nvl(valor_bis_mont,0) ,\
nvl(valor_trat,0) ,nvl(valor_color,0) ,nvl(valor_desctos,0) ,nvl(valor_otros,0\
) ,nvl(valor_total,0) ,nvl(diam_pedido,0) ,o.consecutivo ,o.ano_mes ,o.numero_\
caja ,o.color_caja ,o.estado ,o.clase_material ,n.nit ,n.digito ,n.direccion ,\
nvl(o.tipo_descto,0) ,nvl(puntos_ac,0) ,nvl(puntos,0) ,cf.retefte ,cf.monto_re\
tefte ,n.clase_docu into :b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b1\
2,:b13,:b14,:b15,:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24,:b25,:b26,:b27,:\
b28,:b29,:b30  from nits n ,ordenes_c o ,ciudades c ,clase cl ,clientes ct ,co\
ntrol_fac cf where (((((n.codigo_nit=ct.codigo_nit and cf.codigo_emp=ct.codigo\
_emp) and ct.codigo_cliente=o.codigo_cliente) and n.codigo_ciu=c.codigo) and o\
.clase_material=cl.clase_material) and o.numero_orden=:b31)";
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
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&nomb_clie;
    sqlstm.sqhstl[2] = (unsigned long  )62;
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
    sqlstm.sqhstl[5] = (unsigned long  )12;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&tipo_lista;
    sqlstm.sqhstl[6] = (unsigned long  )12;
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
    sqlstm.sqhstl[19] = (unsigned long  )12;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&estado;
    sqlstm.sqhstl[20] = (unsigned long  )12;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&clase_material;
    sqlstm.sqhstl[21] = (unsigned long  )12;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&nit;
    sqlstm.sqhstl[22] = (unsigned long  )8;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&digito;
    sqlstm.sqhstl[23] = (unsigned long  )4;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&direccion;
    sqlstm.sqhstl[24] = (unsigned long  )52;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&tipo_descto;
    sqlstm.sqhstl[25] = (unsigned long  )8;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&puntos_ac;
    sqlstm.sqhstl[26] = (unsigned long  )4;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&puntosc;
    sqlstm.sqhstl[27] = (unsigned long  )4;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&retefte;
    sqlstm.sqhstl[28] = (unsigned long  )8;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&monto_retefte;
    sqlstm.sqhstl[29] = (unsigned long  )8;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&clase_docu;
    sqlstm.sqhstl[30] = (unsigned long  )7;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&orden;
    sqlstm.sqhstl[31] = (unsigned long  )22;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqharm[31] = (unsigned long )0;
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
    clase_docu.arr     [clase_docu.len]     = '\0';

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
    sqlstm.arrsiz = 32;
    sqlstm.stmt = "select 1 into :b0  from opticasp where codigo_cliente=:b1";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)170;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&propias;
    sqlstm.sqhstl[0] = (unsigned long  )4;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_cliente;
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



    /* EXEC SQL DECLARE C2 CURSOR FOR
             select d.lado_lente, nvl(d.tipo_mat_fac,d.tipo_material), d.colorv,
                    esfera, nvl(cilindro,0), nvl(eje,0), nvl(prisma,0),
                    nvl(base,0), d.dir_prisma, nvl(adicion,0), cantidad,
                    valor_venta, codigo_articulo, terminado,
                    d.especial, d.diametro, cl.nombre, d.clase_mat_fac, d.tipo_mat_fac,
                    costo_promedio_p, nvl(puntos,0),
                    decode(substr(codigo_articulo,1,1),'4',1,'5',1,'B',1,0),
                    decode(substr(codigo_articulo,3,2),'50',1,'51',1,'54',1,'55',1,'56',1,'57',1,'59',1,0),
                    substr(codigo_articulo,3,2),
                    d.codigo_prv, d.lote, p.rinvima
             from   ordenes_d d, clase cl, proveedores p
             where  d.consecutivo = :consecutivoa  and
                    d.ano_mes     = :ano_mesa      and
                    nvl(d.clase_mat_fac,clase_mat) = cl.clase_material(+) and
                    d.codigo_prv  = p.codigo_prv(+)
             order by lado_lente; */ 


    /* EXEC SQL DECLARE C6 CURSOR FOR
           select to_number(decode(si_no,'S','1','N','0','1'))
           from  fletescob
           where codigo_cli_may >= :wcod and
                 codigo_cli_men <= :wcod; */ 


    /* EXEC SQL DECLARE C7 CURSOR FOR
             select s.nombre, o.cantidad, nvl(o.cantidad*o.valor_unidad,0)
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


/***************************************/

    /* EXEC SQL DECLARE C8 CURSOR FOR
             select inf
             from   infacu; */ 


    /* EXEC SQL OPEN C8; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.stmt = sq0007;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)192;
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
          sqlstm.arrsiz = 32;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)206;
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
    sqlstm.arrsiz = 32;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)224;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



/***************************************/

    /* EXEC SQL select paciente, gaveta, factura
             into  :observacion, :gaveta, :nfactura
             from   pedido_c
             where  numero_orden    = :orden; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.stmt = "select paciente ,gaveta ,factura into :b0,:b1,:b2  from p\
edido_c where numero_orden=:b3";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)238;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&observacion;
    sqlstm.sqhstl[0] = (unsigned long  )42;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&gaveta;
    sqlstm.sqhstl[1] = (unsigned long  )4;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&nfactura;
    sqlstm.sqhstl[2] = (unsigned long  )4;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&orden;
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



    if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo pedido_c C8(%d)\n", sqlca.sqlcode);

    observacion.arr [observacion.len] = '\0';

    /* EXEC SQL select count(*)
             into  :tot_lin
             from   ordenes_d
             where  ano_mes       = :ano_mesa  and
                    consecutivo   = :consecutivoa; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.stmt = "select count(*)  into :b0  from ordenes_d where (ano_mes=\
:b1 and consecutivo=:b2)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)268;
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



    if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Ordenes_d C9(%d) ano_mesa=(%S), consecutivoa=(%S)\n", sqlca.sqlcode, ano_mesa.arr, consecutivoa.arr);

    /* EXEC SQL select count(*)
             into  :tot_lin2
             from   ordenes_o
             where  ano_mes       = :ano_mesa  and
                    consecutivo   = :consecutivoa; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.stmt = "select count(*)  into :b0  from ordenes_o where (ano_mes=\
:b1 and consecutivo=:b2)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)294;
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



    if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Ordenes_o C10(%d)\n", sqlca.sqlcode);
    if (valor_desctos>0)
       total_paginas=tot_lin+tot_lin2+3;
    else total_paginas=tot_lin+tot_lin2+2;
    total_paginas=ceil(total_paginas/11);
    strcpy(fecha,fecha_control.arr);
    strorg(fecha,1,11);
    strcpy(hora,fecha_control.arr);
    strorg(hora,13,11);
    busco_nro_factura();

//  fprintf(fp,"%s%s%c%s%c%c%s%c%c\r",line_feed6,diezcpi,27,"C",33,27,"B",22,0);
    fprintf(fp,"%s%s%c%s%c%c%s%c%c\r",line_feed6,diezcpi,27,"C",33,27,"B",23,0);
    titulos();

    npromo   = 0;
    nclaprom = 0;

//    printf("1)npromo<%d>",npromo); getchar();
    /* EXEC SQL OPEN C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.stmt = sq0004;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)320;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&consecutivoa;
    sqlstm.sqhstl[0] = (unsigned long  )22;
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
          sqlstm.arrsiz = 32;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)342;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&lado_lente;
          sqlstm.sqhstl[0] = (unsigned long  )12;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&d_tipo_material;
          sqlstm.sqhstl[1] = (unsigned long  )12;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&colorv;
          sqlstm.sqhstl[2] = (unsigned long  )12;
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
          sqlstm.sqhstl[7] = (unsigned long  )12;
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
          sqlstm.sqhstl[12] = (unsigned long  )32;
          sqlstm.sqindv[12] = (         short *)0;
          sqlstm.sqharm[12] = (unsigned long )0;
          sqlstm.sqhstv[13] = (unsigned char  *)&terminado;
          sqlstm.sqhstl[13] = (unsigned long  )12;
          sqlstm.sqindv[13] = (         short *)0;
          sqlstm.sqharm[13] = (unsigned long )0;
          sqlstm.sqhstv[14] = (unsigned char  *)&esp_cial;
          sqlstm.sqhstl[14] = (unsigned long  )12;
          sqlstm.sqindv[14] = (         short *)0;
          sqlstm.sqharm[14] = (unsigned long )0;
          sqlstm.sqhstv[15] = (unsigned char  *)&d_diametro;
          sqlstm.sqhstl[15] = (unsigned long  )4;
          sqlstm.sqindv[15] = (         short *)0;
          sqlstm.sqharm[15] = (unsigned long )0;
          sqlstm.sqhstv[16] = (unsigned char  *)&d_nomb_clase;
          sqlstm.sqhstl[16] = (unsigned long  )32;
          sqlstm.sqindv[16] = (         short *)0;
          sqlstm.sqharm[16] = (unsigned long )0;
          sqlstm.sqhstv[17] = (unsigned char  *)&clase_mat_fac;
          sqlstm.sqhstl[17] = (unsigned long  )12;
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
          sqlstm.sqhstl[26] = (unsigned long  )202;
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
/*
          if (strlen(clotes) < 30 ) {
             if (strlen(clotes) > 0 ) {
                strcat(clotes,",");
                strcat(clotes,"L.");
                strcat(clotes,lado_lente.arr);
                strcat(clotes,":");
                strcat(clotes,lote.arr);
             }
             else {
                strcpy(clotes,"L.");
                strcat(clotes,lado_lente.arr);
                strcat(clotes,":");
                strcat(clotes,lote.arr);
             }
          }

*/
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
          if (con_lin > 21) {
              subtotales();
              titulos();
          }
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
          fprintf (fp, "%s%s",diezcpi,condensado_on);
          if (cantidad > 0) {
              strorg(nomb_clase.arr,1,13);
              strorg(d_nomb_clase.arr,1,13);
              if (!strcmp(esp_cial.arr,"E") && strlen(d_nomb_clase.arr) > 0)
                  fprintf (fp, "%-14s " ,d_nomb_clase.arr);
              else if (strlen(d_nomb_clase.arr) > 0)
                       fprintf (fp, "%-14s " ,d_nomb_clase.arr);
                   else fprintf (fp, "%-14s " ,nomb_clase.arr);
	      if (!strcmp(clase_mat.arr,"V")) {
              	  strorg  (nombre_tipo,1,23);
                  fprintf (fp, "%-24s " ,nombre_tipo);
                  fprintf (fp, "%-10s  " ,nomb_color.arr);
	      }
	      else {
                    fprintf (fp, "%-36s " ,nombre_tipo);
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
              fprintf (fp, "%6.2f ",adicion);
              fprintf (fp, "%9d  ",cantidad);
              sprintf (cadena, "%9.0f",cantidad*valor_venta);
              subtotal+=cantidad*valor_venta;
              costo_venta+=cantidad*costo_promedio_p;
              fmtnum("zzz,zzz,zz9",cadena,r_t);
/*
              fprintf (fp, "%s%s%11s\n",condensado_off,elite,r_t);
              con_len++;
              con_lin++;
*/
          }
          fprintf (fp, "%s%s",condensado_off,elite);
          if (cantidad > 0) {
              fprintf (fp, "%11s\n",r_t);
              tpuntos+=puntos;
//              if (puntos > 0 && cantidad > 0)
              if ( cantidad > 0)
                  tcantidad+=cantidad;
              con_len++;
              con_lin++;
          }
    }
    if (tcantidad < 2)
       borro_puntos();
//    printf("3)npromo<%d>",npromo); getchar();
    totales();
    Rx_procesor();
    cierre_impresora();
    if ( marco_facturadas() == 0 ) {
/*    fprintf(fp,"%c\r",11); */
       /* EXEC SQL COMMIT WORK RELEASE; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 32;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)464;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    }
    else {
       /* EXEC SQL ROLLBACK WORK RELEASE; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 32;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)478;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    }
    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)492;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)506;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    exit   (0);
}

void borro_puntos()
{
  /* EXEC SQL update ordenes_c set puntos = 0
           where  numero_orden = to_number(:orden); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 32;
  sqlstm.stmt = "update ordenes_c  set puntos=0 where numero_orden=to_number\
(:b0)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)520;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&orden;
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


  puntosc = 0;
  tpuntos = 0;

 if (sqlca.sqlcode) printf("Error actualizando ordenes_c en rutina borro_puntos (%d)\n",
                           sqlca.sqlcode);
}

void ver_tipo_material()
{
 tip=atoi(d_tipo_material.arr);
 if (!strcmp(d_tipo_material.arr,"11") && !strcmp(tipo_lista.arr,"N") ||
     !strcmp(d_tipo_material.arr,"21") && !strcmp(tipo_lista.arr,"N")) {
       strcpy(tipo_mat.arr,tipo_material.arr);
       strcpy(tipo_lis.arr,tipo_lista.arr);
       tipos1();
 }
 else if (!strcmp(d_tipo_material.arr,"11") || !strcmp(d_tipo_material.arr,"56")) {
           strcpy(tipo_mat.arr,d_tipo_material.arr);
           tipos2();
 }
 else if (tip >= 60 && tip <= 65) {
          if (!strcmp(tipo_mat_fac.arr,"60")) {
             strcpy(tipo_mat.arr,tipo_mat_fac.arr);
          }
          else {
             strcpy(tipo_mat.arr,"11");
          }
          if (!strcmp(terminado.arr,"T")) {
             if(strcmp(clase_material.arr,"B"))
                strcpy(tipo_mat.arr,"6");
             if (!strcmp(tipo_lista.arr,"AR")) {
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
                               if (esfera >= 0 && esfera <= 2 && cilindro==0 &&
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
 sqlstm.arrsiz = 32;
 sqlstm.stmt = "select nombre into :b0  from tipos where ((tipo_material=:b1\
 and tipo_lista=:b2) and clase_material=:b3)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)538;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_tipol;
 sqlstm.sqhstl[0] = (unsigned long  )42;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&tipo_mat;
 sqlstm.sqhstl[1] = (unsigned long  )12;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&tipo_lis;
 sqlstm.sqhstl[2] = (unsigned long  )12;
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
 if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Tipos (clase_mat=%s tipo_mat=%s tipo_lis=%s) C3 (%d)\n", clase_mat.arr, tipo_mat.arr, tipo_lis.arr, sqlca.sqlcode);

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
 sqlstm.arrsiz = 32;
 sqlstm.stmt = "select nombre into :b0  from tipos where (tipo_material=:b1 \
and clase_material=:b2)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)568;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_tipo;
 sqlstm.sqhstl[0] = (unsigned long  )42;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&tipo_mat;
 sqlstm.sqhstl[1] = (unsigned long  )12;
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
     fprintf (stderr, "Error leyendo Tipos (clase_mat=%s tipo_mat=%s tipo_lis=%s) C4 (%d)\n", clase_mat.arr, tipo_mat.arr, tipo_lis.arr, sqlca.sqlcode);

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
 sqlstm.arrsiz = 32;
 sqlstm.stmt = "select nombre into :b0  from almacen where codigo_articulo=:\
b1";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)594;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_tipoa;
 sqlstm.sqhstl[0] = (unsigned long  )42;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_art;
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
 sqlstm.arrsiz = 32;
 sqlstm.stmt = "select nombre into :b0  from coloresv where colorv=:b1";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)616;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_color;
 sqlstm.sqhstl[0] = (unsigned long  )32;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&colorva;
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


 oraest  = sqlca.sqlcode;
 if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Coloresv C12 (%d)\n", sqlca.sqlcode);

 nomb_color.arr [nomb_color.len] = '\0';
}

void leer_servicios()
{
 tipo_servicio.len = strlen(tipo_servicio.arr);
 /* EXEC SQL OPEN C7; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 32;
 sqlstm.stmt = sq0006;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)638;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&consecutivoa;
 sqlstm.sqhstl[0] = (unsigned long  )22;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
 sqlstm.sqhstl[1] = (unsigned long  )22;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&tipo_servicio;
 sqlstm.sqhstl[2] = (unsigned long  )12;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&codigo_cliente;
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



 /* EXEC SQL FETCH C7 INTO :nomb_servicio, :cantidad_srv, :valor_servicio; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 32;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)668;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_servicio;
 sqlstm.sqhstl[0] = (unsigned long  )42;
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
    fprintf (fp,"%s\r",elite);
    if (strcmp (lado_lente.arr,"S")||!strcmp(lado_lente.arr,"O")) {
       if (valor_material != valor_total) {
           if (con_lin > 18)
               titulos();
           sprintf (cadena,"%6.2f",valor_material);
           sprintf (cadena2,"%9d",tcantidad);
           fprintf (fp,"%s%s%64s%s%21s%12s\n",condensado_off,enfatizado_on,"VALOR MATERIAL : ................................",enfatizado_off,cadena2,fmtnum("$$$,$$$,$$9",cadena,r_t));
           con_lin++;
       }
    }
    if (subtotal!=valor_material) {
        fprintf (fp,"%s%s%57s%s\n",condensado_off,enfatizado_on,"****** DESCUADRE EN VALOR MATERIAL *******",enfatizado_off);
        con_lin++;
    }
    subtotal = valor_material;

    strcpy(tipo_servicio.arr,"TR");
    leer_servicios();
    if (!oraest) {
       if (con_lin > 21)
          titulos();
       fprintf (fp,"%s%32s%s\r",enfatizado_on,"TRATAMIENTO : ",enfatizado_off);
       imprimo_servicios();
       if (tot_servicio!=valor_trat) {
           fprintf (fp,"%s%s%57s%s\n",condensado_off,enfatizado_on,"****** DESCUADRE EN VALOR TRATAMIENTO *******",enfatizado_off);
           con_lin++;
       }

    }

    strcpy(tipo_servicio.arr,"CO");
    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)694;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    leer_servicios();
    if (!oraest) {
       if (con_lin > 21)
          titulos();
       fprintf (fp,"%s%32s%s\r",enfatizado_on,"COLOR : ",enfatizado_off);
       imprimo_servicios();
       if (tot_servicio!=valor_color) {
           fprintf (fp,"%s%s%57s%s\n",condensado_off,enfatizado_on,"****** DESCUADRE EN VALOR COLOR *******",enfatizado_off);
           con_lin++;
       }

    }

    strcpy(tipo_servicio.arr,"BM");
    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)708;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    leer_servicios();
    if (!oraest) {
       if (con_lin > 21)
          titulos();
       fprintf (fp,"%s%32s%s\r",enfatizado_on,"BISEL Y MONTAJE : ",enfatizado_off);
       imprimo_servicios();
       if (tot_servicio!=valor_bis_mont) {
           fprintf (fp,"%s%s%57s%s\n",condensado_off,enfatizado_on,"****** DESCUADRE EN VALOR BISEL MONTAJE *******",enfatizado_off);
           con_lin++;
       }
    }

    rc=0;
    strcpy(tipo_servicio.arr,"RC");
    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)722;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    leer_servicios();
    if (!oraest) {
       if (con_lin > 21)
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
    sqlstm.arrsiz = 32;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)736;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    leer_servicios();
    if (!oraest) {
       if (con_lin > 21)
          titulos();
       if (rc == 0)
          fprintf (fp,"%s%32s%s\r",enfatizado_on,"SERV. A MONTURA - REPARACION : ",enfatizado_off);
       else fprintf (fp,"%s%32s%s\r",enfatizado_on,"REPARACION : ",enfatizado_off);
       imprimo_servicios();
    }
//    printf("5)npromo<%d>",npromo); getchar();

    strcpy(tipo_servicio.arr,"FE");
    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)750;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    leer_servicios();
    if (!oraest) {
       if (con_lin > 21)
          titulos();
       fprintf (fp,"%s%32s%s\r",enfatizado_on,"FLETES : ",enfatizado_off);
       fletes += valor_servicio;
       imprimo_servicios();
    }

    strcpy(tipo_servicio.arr,"OT");
    /* EXEC SQL CLOSE C7; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)764;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    leer_servicios();
    if (!oraest) {
       if (con_lin > 21)
          titulos();
       fprintf (fp,"%s%32s%s\r",enfatizado_on,"OTROS : ",enfatizado_off);
       imprimo_servicios();
    }

    if (subtotal != valor_total) {
       if (con_lin > 21)
          titulos();
       sprintf (cadena,"%6.2f",subtotal);
       fprintf (fp,"%s%32s%s%65s\n",enfatizado_on,"SUBTOTAL ",enfatizado_off,fmtnum("zzz,zzz,zz9",cadena,r_t));
       con_lin++;
    }
    if (valor_desctos > 0) {
       if (con_lin > 21)
           titulos();
       sprintf (cadena,"%6.2f",valor_desctos);
       if (tipo_descto > 0)
          fprintf (fp,"%s%32s%s%65s\n",enfatizado_on,"DESCUENTO POR CASO ESPECIAL ",enfatizado_off,fmtnum("zzz,zzz,zz9",cadena,r_t));
       else fprintf (fp,"%s%32s%s%65s\n",enfatizado_on,"DESCUENTOS ",enfatizado_off,fmtnum("zzz,zz9",cadena,r_t));
       con_lin++;
    }

    if ((subtotal-valor_desctos)!=valor_total) {
        fprintf (fp,"%s%s%57s%s\n",condensado_off,enfatizado_on,"****** DESCUADRE EN VALOR LIQUIDACION *******",enfatizado_off);
        con_lin++;
    }

    if (con_lin <= 21)
       fprintf(fp,"%c\r",11);
    sprintf (cadena,"%6.2f",valor_total);
    base_gravable = valor_total;

//    busco_nro_factura();
    sprintf (numero_factura.arr,"%6.0f",ultimo_numero);
    if (total_paginas > 1)
       sprintf (cadena2,"%6.0f-%6.0f",ultimo_numero,ultimo_numero+total_paginas-1);
    else sprintf (cadena2,"%6.0f",ultimo_numero);

//  strcpy(cadena3,"Puntos de esta orden ");    //21
//  sprintf(cadena4,"%6d",tpuntos+puntosc);
//  strcpy(cadena4,fmtnum("zzz9",cadena4,r_t));  //4
//  strcat(cadena3,cadena4);
//  strcat(cadena3,", puntos acumulados ");     //20
//  sprintf(cadena4,"%6d",puntos_ac);
//  strcpy(cadena4,fmtnum("zzzz9",cadena4,r_t)); //5=50
//  strcat(cadena3,cadena4);

//  fprintf (fp,"%s%s%-8s%56s%s%33s%s\n",condensado_off,enfatizado_on,cadena2,"Res.Dian#20000094986 2008/08/27 Hab.Fac.27023 a 30000 ",enfatizado_off,fmtnum("$$$,$$$,$$9",cadena,r_t),diezcpi);
    strcpy(cadena4,"Para su consignacio\b'n en DAVIVIENDA anote en Referencia 1:");
    fprintf (fp,"%s%63s%-67s%s%20s%s\n",condensado_on," ",cadena4,condensado_off,fmtnum("$$$,$$$,$$9",cadena,r_t),diezcpi);
    fnit(cadena,nit,digito);
    strtri(cadena);
    factura(cadena2);
    strtri(cadena2);
    sprintf(cadena3,"%s y en Referencia 2: %s.",cadena2,cadena);
//    fprintf(fp,"%sPara su consignacio\b'n en DAVIVIENDA anote en Referencia 1: %s y en Referencia 2: %s.\n",condensado_on,cadena2,cadena);
    con_lin++;
    con_pag=0;

    nro_despachos = 0;
    if (strcmp(clase_material.arr,"C")) {
       sub_total_c   = 0;
       sub_total_o   = valor_total;
       nro_ordenes_o = 1;
    }
    else {
       sub_total_o   = 0;
       sub_total_c   = valor_total;
       nro_ordenes_c = 1;
    }

/*
    tot_servicio  = 0;
    strcpy(tipo_servicio.arr,"FE");
    EXEC SQL CLOSE C7;
    leer_servicios();
    fletes      = tot_servicio;
*/
    actu_totales();
}

/************************
* STOTAL()
*    Imprime totales en el archivo de spool.
*/

void subtotales()
{
    if (con_lin <= 21)
       fprintf(fp,"%c\r",11);
    sprintf (cadena,"%6.2f",subtotal);
    fprintf (fp,"%s%32s%s%45s%20s\n",enfatizado_on,"         ",enfatizado_off,"SUBTOTAL :    ",fmtnum("z,zzz,zz9",cadena,r_t));

    con_lin++;
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
       fprintf (fp,"%39s%-40s%6s"," ",nomb_servicio.arr,fmtnum("zz,zz9",cadena,r_t));
       sprintf (cadena,"%6.0f",valor_servicio);
       fprintf (fp,"%12s\n",fmtnum("zzz,zzz,zz9",cadena,r_t));
       con_lin++;
       /* EXEC SQL FETCH C7 INTO :nomb_servicio, :cantidad_srv, :valor_servicio; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 32;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)778;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&nomb_servicio;
       sqlstm.sqhstl[0] = (unsigned long  )42;
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

  for (i=0;i<32-con_lin;i++)
       fprintf(fp,"\n");

  con_pag++;
  con_len=0;
  strcpy(cadena,fecha);
  numero_fecha(cadena);
  fprintf (fp,"%s%s%s\n\n\n",condensado_off,diezcpi,elite);
  if (con_pag == total_paginas) {
     if (total_paginas > 1) {
        sprintf (cadena2,"%6.0f a %6.0f",ultimo_numero,ultimo_numero+total_paginas-1);
        fprintf (fp,"      %5s%45s%s\n%s%\n",codigo_cliente.arr," Facturas No. ",cadena2,enfatizado_on);
     }
     else fprintf (fp,"      %5s      \n%s%\n",codigo_cliente.arr,enfatizado_on);
  }
  else {
     fprintf (fp,"      %5s      \n%s%\n",codigo_cliente.arr,enfatizado_on);
  }
  fprintf (fp,"%-53s%5.0f%s%s%s",nomb_clie.arr,consecutivo,elite,ancho_on,enfatizado_on);
  fprintf (fp,"%5.0f%s%s%s%s %s%s %s\n",numero_caja,"-",color_caja.arr,ancho_off,diezcpi,cadena,enfatizado_off,cadena);
  fprintf (fp,"%-51s\n",direccion.arr);
  fprintf (fp,"%-20s",nomb_ciu.arr);

/*
  fprintf (fp,"%s%12.0f","NIT : ",nit);
  if (digito > 0) {
      sprintf (cadena,"%d",digito);
      fprintf (fp,"-%s",fmtnum("z",cadena,r_t));
  }
  else if (digito == 0)
           fprintf (fp,"-%s","0");
*/

  fprintf (fp,"%25s%-29s%s%02d    %02.0f\n\n"," ","OFTALMICA",enfatizado_off,con_pag,total_paginas);
  sprintf(cadena,"%6.0f",nfactura);
  fmtnum("ZZZZZZ",cadena,r_t);
  fprintf (fp,"%9s",cadena);
  sprintf(cadena,"%6.0f",gaveta);
  fmtnum("ZZZZZZ",cadena,r_t);
  fprintf (fp,"%14s  %-32s  ORDEN: %8.0f\n\n\n",cadena,observacion.arr,numero_orden);
  con_lin = 11;
  if (!strcmp(estado.arr,"R")) {
      fprintf (fp,"%30s%s%s\n",ancho_on,"**** A N U L A D A ****",ancho_off);
      con_lin++;
  }
  strcpy(wcod.arr,codigo_cliente.arr);
  strcpy(fecha_corte.arr,fecha);
  strcpy(fecha_vencmto.arr,fecha);

}

void actu_totales()
{
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
// if(!strcmp(tipo_cliente.arr,"0"))
 impue=0;
 impue=(base_gravable*ptaje_iva)/100;
 impue=redondo(impue);
 costo_factura=sub_total-total_descto+impue; //+fletes;

 fprintf(fp,"%s%54s%-67s%2d%s%s",condensado_on," ",cadena3,ptaje_iva,"%",condensado_off);
 fprintf(fp,"%s%s",enfatizado_off,elite);
 sprintf (cadena,"%8.0f",impue);
 fprintf(fp,"%10s\n",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf (cadena,"%9.0f",costo_factura);
 fprintf(fp,"%74s%23s\n"," ",fmtnum("zzz,zzz,zz9",cadena,r_t));
 con_lin+=2;

 /* EXEC ORACLE OPTION (RELEASE_CURSOR=YES); */ 

 /* EXEC SQL select codigo_emp
          into  :codigo_emp_op
          from opticasp
          where codigo_cliente = :wcod and
                codigo_emp is not null; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 32;
 sqlstm.stmt = "select codigo_emp into :b0  from opticasp where (codigo_clie\
nte=:b1 and codigo_emp is  not null )";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)804;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp_op;
 sqlstm.sqhstl[0] = (unsigned long  )7;
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


 codigo_emp_op.arr   [codigo_emp_op.len]  = '\0';
 oraest2  = sqlca.sqlcode;
 rete_fte = 0;
 if (!strcmp(clase_docu.arr,"N")) {
    if (base_gravable >= monto_retefte || oraest2 == 0 || oraest2 ==  -1405 ) {  //Para las opticas propias debe calcular la ferefuente por cualquier monto
        rete_fte = costo_factura*retefte/100;
        rete_fte = redondo( rete_fte );
    }
 }

 /* EXEC ORACLE OPTION (RELEASE_CURSOR=NO); */ 

 costo_factura=base_gravable+impue-rete_fte; //Total factura
 actualizo_facturas();

 strcpy(mensaje," ");
/*
 if ( tcantidad > 1 && valor_total > 0 ) {
     if ( npremio == 60 && (strcmp(terminado.arr,"T") && strcmp(terminado.arr,"F") && strcmp(terminado.arr,"C") ) )  { //Acolade
//          strcat(mensaje,"Obsequio Carnaval");
          strcat(mensaje," ");
     }
     else {
           if ( npromo == 1 ) {
//               strcpy(mensaje,"Obsequio Carnaval");  //Solo multifocales
                 strcat(mensaje," ");
           }
           if ( nclaprom == 1 ) { //Transitions
//                strcpy(mensaje,"Obsequio Carnaval");
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
               sprintf(mensaje,"%s%d%s","Promover Transitions 2010 - Cupo\b'n Azul, 85 puntos (",tcantidad/2,")");
           }
           if ( npremio == 60 && (strcmp(terminado.arr,"T") && strcmp(terminado.arr,"F") && strcmp(terminado.arr,"C") ) )  { //Acolade
               strcpy(mensaje,"Promover Transitions 2010 - Cupo\b'n Naranja, 185 puntos");  
           }
       }
   }

//  if ( nclaprom ==1 ) {  //Promover Transitions 2009

       if (tcantidad > 1 && valor_total > 0) {
           if (npromo == 1) {
                strcpy(mensaje,"Kit Varilux. ");  //Solo multifocales
           }
           else {
              strcpy(mensaje," ");
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

 sprintf (cadena,"%9.0f",rete_fte);
 fprintf(fp,"%74s%23s\n"," ",  fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 sprintf (cadena,"%9.0f",costo_factura);
 fprintf(fp,"\r%74s%23s\n"," ",fmtnum("z,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;
/*
 sprintf (cadena,"%6d",tpuntos+puntosc);
 fprintf (fp,"Puntos de esta orden %s,",fmtnum("zzz9",cadena,r_t));
 sprintf (cadena2,"%6d",puntos_ac);
 fprintf (fp," puntos acumulados %s\n",fmtnum("zzzz9",cadena2,r_t));
*/
 fprintf (fp,"\n");
// if ( strcmp(wcod.arr,"BM037") ) {
    for (l=0;l<length(aInvima);l++) {
        if (strlen(aInvima[l])>0) {
            fprintf (fp,"%s%s %s %s%s %s\n",condensado_on,clado[l],aInvima[l],"Lote:",clotes[l],mensaje);
            con_lin+=1;
            strcpy(mensaje,"");
        }
    }
/* }
 else {
       fprintf (fp,"%s%s %s %s%s %s\n",condensado_on," "," "," "," ",mensaje);
       con_lin+=1;
 }
*/ 
// fprintf (fp,"%s%s %s%s %s%s\r",condensado_on,"Importado por LABOCOSTA S.A., Registro sanitario No. INVIMA 2009 DM-0003426. ","Lote(s):",clotes,mensaje,condensado_on);

 if (con_lin <= 24)
     fprintf(fp,"%c\r",11);

 strcpy(wcod.arr,codigo_cliente.arr);
 wcod.len = strlen(wcod.arr);
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
             sqlstm.arrsiz = 32;
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)826;
             sqlstm.cud = sqlcud0;
             sqlstm.sqlest = (unsigned char  *)&sqlca;
             sqlstm.sqlety = (unsigned short)0;
             sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


             contador++;
       }
 }
 borro_acumulados();
}

int marco_facturadas()
{    
 /* EXEC SQL
      update ordenes_c
      set facturada = 1
      where nvl(estado,0) <> 'R' and
            nvl(contado,0) =  1  and
            numero_orden   = to_number(:orden); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 32;
 sqlstm.stmt = "update ordenes_c  set facturada=1 where ((nvl(estado,0)<>'R'\
 and nvl(contado,0)=1) and numero_orden=to_number(:b0))";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)840;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&orden;
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



      oraest  = sqlca.sqlcode;

      if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 0) {
          fprintf (stderr, "Error(%d) actualizando facturadas orden(%s)\n", sqlca.sqlcode, orden.arr);
          return 1;
      }
      else { 
          return 0;
      }
}

void busco_nro_factura()
{
/* C8 */
 /* EXEC SQL
      select consecutivo+1, ptaje_iva
      into  :ultimo_numero, :ptaje_iva
      from   control_con
      where  codigo_emp = :codigo_emp
      for update; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 32;
 sqlstm.stmt = "select (consecutivo+1) ,ptaje_iva into :b0,:b1  from control\
_con where codigo_emp=:b2 for update ";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)858;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&ultimo_numero;
 sqlstm.sqhstl[0] = (unsigned long  )8;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&ptaje_iva;
 sqlstm.sqhstl[1] = (unsigned long  )4;
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

      if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C9 (%d)\n", sqlca.sqlcode);

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
 sqlstm.arrsiz = 32;
 sqlstm.stmt = "select valor_neto into :b0  from facturas where ((tipo_factu\
ra=to_number(:b1) and tipo_documento='C') and numero_factura=to_number(:b2))";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)884;
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
     fprintf (stderr, "No existe factura anterior C21 %s %s (%d)\n",codigo_emp.arr,numero_factura.arr,sqlca.sqlcode);

//    printf("7)npromo<%d>",npromo); getchar();
 mover_datos_factura();
//    printf("8)npromo<%d>",npromo); getchar();
 actualizo_clientem();
//    printf("9)npromo<%d>",npromo); getchar();
 oraest = 0;
 sprintf(total_pag_c.arr,"%2.0f",total_paginas);
 total_pag_c.len = strlen(total_pag_c.arr);

 /* C7 */
  /* EXEC SQL
        update control_con
        set consecutivo   = consecutivo + to_number(:total_pag_c),
            fecha         = greatest(to_date(nvl(fecha,sysdate)),to_date(:fecha_corte_c))
        where codigo_emp  = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 32;
  sqlstm.stmt = "update control_con  set consecutivo=(consecutivo+to_number(\
:b0)),fecha=greatest(to_date(nvl(fecha,sysdate )),to_date(:b1)) where codigo_e\
mp=to_number(:b2)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)910;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&total_pag_c;
  sqlstm.sqhstl[0] = (unsigned long  )22;
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
         RETE_FTE,
         NUMERO_ORDEN)
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
             null,
             to_number(:rete_fte_c),
             to_number(:orden)); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 32;
 sqlstm.stmt = "insert into facturas(NUMERO_FACTURA,CODIGO_CLIENTE,FECHA_DOC\
UMENTO,FECHA_VENCMTO,CANT_ORDENES_O,CANT_ORDENES_C,CANT_DESPACHOS,VALOR_OFTALM\
ICA,VALOR_CONTACTO,VALOR_DESCUENTO,VALOR_FLETES,VALOR_IVA,PTAJE_IVA,VALOR_NETO\
,VALOR_PAGOS,FECHA_PAGO,ESTADO_CARTERA,TIPO_FACTURA,TIPO_DOCUMENTO,ESTADO_FACT\
URA,HOJAS,CONTADO,CODIGO_NIT,RETE_FTE,NUMERO_ORDEN) values (to_number(:b0),:b1\
,to_date(:b2),to_date(:b3),to_number(:b4),to_number(:b5),to_number(:b6),to_num\
ber(:b7),to_number(:b8),to_number(:b9),to_number(:b10),to_number(:b11),to_numb\
er(:b12),to_number(:b13),to_number(:b14),null ,0,to_number(:b15),'C',0,to_numb\
er(:b16),'C',null ,to_number(:b17),to_number(:b18))";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)936;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&ultimo_numero_c;
 sqlstm.sqhstl[0] = (unsigned long  )22;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_cliente_c;
 sqlstm.sqhstl[1] = (unsigned long  )22;
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
 sqlstm.sqhstl[4] = (unsigned long  )22;
 sqlstm.sqindv[4] = (         short *)0;
 sqlstm.sqharm[4] = (unsigned long )0;
 sqlstm.sqhstv[5] = (unsigned char  *)&nro_ordenes_cc;
 sqlstm.sqhstl[5] = (unsigned long  )22;
 sqlstm.sqindv[5] = (         short *)0;
 sqlstm.sqharm[5] = (unsigned long )0;
 sqlstm.sqhstv[6] = (unsigned char  *)&nro_despachos_c;
 sqlstm.sqhstl[6] = (unsigned long  )22;
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
 sqlstm.sqhstl[12] = (unsigned long  )22;
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
 sqlstm.sqhstl[16] = (unsigned long  )22;
 sqlstm.sqindv[16] = (         short *)0;
 sqlstm.sqharm[16] = (unsigned long )0;
 sqlstm.sqhstv[17] = (unsigned char  *)&rete_fte_c;
 sqlstm.sqhstl[17] = (unsigned long  )22;
 sqlstm.sqindv[17] = (         short *)0;
 sqlstm.sqharm[17] = (unsigned long )0;
 sqlstm.sqhstv[18] = (unsigned char  *)&orden;
 sqlstm.sqhstl[18] = (unsigned long  )22;
 sqlstm.sqindv[18] = (         short *)0;
 sqlstm.sqharm[18] = (unsigned long )0;
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
              sprintf(costo_factura_c.arr,"%12.2f",0);
          else sprintf(costo_factura_c.arr,"%12.2f",costo_factura+saldo_cliente);
          costo_factura_c.len = strlen(costo_factura_c.arr);
      }
//    printf("10)npromo<%d>",npromo); getchar();
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
   sqlstm.arrsiz = 32;
   sqlstm.stmt = "select saldoc into :b0  from clientem where ((codigo_emp=t\
o_number(:b1) and codigo_cliente=:b2) and ano_mes=to_number(:b3))";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)1026;
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
int x;
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
//    printf("12)npromo<%d>",npromo); getchar();
 for (x=1;x<=10000;x++) {
 }
 if (sub_total_o > 0) {
    sprintf(sub_total_oc.arr,"%9.0f",sub_total_o - fletes);
    sub_total_oc.len     = strlen(sub_total_oc.arr);
    sprintf(sub_total_cc.arr,"%7.0f",0);
    sub_total_cc.len     = strlen(sub_total_cc.arr);
 }
 else {
    sprintf(sub_total_oc.arr,"%9.0f",sub_total_o - fletes);
    sub_total_oc.len     = strlen(sub_total_oc.arr);
    sprintf(sub_total_cc.arr,"%7.0f",0);
    sub_total_cc.len     = strlen(sub_total_cc.arr);
 }
//    printf("13)npromo<%d>",npromo); getchar();
 sprintf(total_descto_c.arr,"%6.0f",total_descto);
 total_descto_c.len   = strlen(total_descto_c.arr);
 sprintf(fletes_c.arr,"%4.0f",fletes);
 fletes_c.len         = strlen(fletes_c.arr);
 sprintf(valor_iva_c.arr,"%8.0f",impue);
 valor_iva_c.len      = strlen(valor_iva_c.arr);
 sprintf(ptaje_iva_c.arr,"%d",ptaje_iva);
 ptaje_iva_c.len      = strlen(ptaje_iva_c.arr);
 sprintf(costo_factura_c.arr,"%12.0f",costo_factura);
 costo_factura_c.len  = strlen(costo_factura_c.arr);
 sprintf(valor_pagos_c.arr,"%12.0f",costo_factura);
 sprintf(valor_pagos_c.arr,"%12.0f",0);
 valor_pagos_c.len = strlen(valor_pagos_c.arr);
 strcpy(tipo_cliente_c.arr,codigo_emp.arr);
 tipo_cliente_c.len   = strlen(tipo_cliente_c.arr);
 sprintf(rete_fte_c.arr,"%12.0f",rete_fte);
 rete_fte_c.len  = strlen(rete_fte_c.arr);
//    printf("14)npromo<%d>",npromo); getchar();

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
 sqlstm.arrsiz = 32;
 sqlstm.stmt = "select pctaje_oftal ,pctaje_conta into :b0,:b1  from descuen\
tos where ((codigo_cliente=:b2 and numero_quincena=:b3) and estado='A')";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)1056;
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
 sqlstm.arrsiz = 32;
 sqlstm.stmt = sq0005;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)1086;
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
 sqlstm.arrsiz = 32;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)1108;
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
 sqlstm.arrsiz = 32;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)1126;
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
 sqlstm.arrsiz = 32;
 sqlstm.stmt = "select nvl(cantidad,0) ,nvl(valor,0) into :b0,:b1  from envi\
os ,control_fac where (((codigo_cliente=:b2 and control_fac.codigo_emp=to_numb\
er(:b3)) and to_number((control_fac.ano||lpad(control_fac.mes_proceso,2,0)))=e\
nvios.ano_mes) and control_fac.numero_quincena=envios.numero_quincena)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)1140;
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
     sqlstm.arrsiz = 32;
     sqlstm.stmt = "select nvl(valor,0) into :b0  from fletes where ((cantid\
ad_mayor>=to_number(:b1) and cantidad_menor<=to_number(:b1)) and fecha=(select\
 max(f.fecha)  from fletes f ,control_fac cf where (codigo_emp=:b3 and f.fecha\
<=to_date(decode(to_number(:b4),1,to_number(((cf.ano||lpad(cf.mes_proceso,2,0)\
)||15)),2,to_number(to_char(last_day(to_date((cf.ano||lpad(cf.mes_proceso,2,0)\
),'yymm')),'yyyymmdd'))),'yymmdd'))))";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1170;
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

int hacer_asiento()
{

  if (control_asiento())
      return 1;

//  printf("3) codigo_emp<%s> ano_mesa<%s> comprobanteb<%s> consecutivob<%s> fechab<%s>", codigo_emp.arr,ano_mesa.arr,comprobanteb.arr,consecutivob.arr,fechab.arr); getchar();
  /* EXEC SQL insert into movto_c
       (CODIGO_EMP, ANO_MES, COMPROBANTE, CONSECUTIVO, CLASE, DESCRIPCION, FECHA, TIPO,
	ESTADO, NITB, CODIGO_NITB, VALORB, RETENCION, CONTADO )
           values(:codigo_emp, :ano_mesa, :comprobanteb, :consecutivob, 'VT',
                  'LENTES OFTALMICOS Y/O CONTACTO',:fechab,'3', '0','','','','','C'); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 32;
  sqlstm.stmt = "insert into movto_c(CODIGO_EMP,ANO_MES,COMPROBANTE,CONSECUT\
IVO,CLASE,DESCRIPCION,FECHA,TIPO,ESTADO,NITB,CODIGO_NITB,VALORB,RETENCION,CONT\
ADO) values (:b0,:b1,:b2,:b3,'VT','LENTES OFTALMICOS Y/O CONTACTO',:b4,'3','0'\
,'','','','','C')";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)1204;
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
  sqlstm.sqhstl[2] = (unsigned long  )12;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&consecutivob;
  sqlstm.sqhstl[3] = (unsigned long  )12;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&fechab;
  sqlstm.sqhstl[4] = (unsigned long  )32;
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

  staora  = 0;
  strcpy(cuenta_db.arr,"13050590");
  strcpy(cuenta_cr.arr,"41359515");
  cuenta_db.arr  [cuenta_db.len]  = '\0';
  cuenta_cr.arr  [cuenta_cr.len]  = '\0';
  fecha_asto.arr [fecha_asto.len] = '\0';
  codigo.arr     [codigo.len]     = '\0';
  codigo.len  =  strlen(codigo.arr);

/***************************************/
/* CARTERA CONTRA VENTAS               */
/***************************************/

/* 1) Grabar Cartera ( Debito ) */

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
     nitn = 1;

     ver_inf();
     sprintf(valor_debb.arr,"%10.2f",costo_factura);
     valor_debb.len = strlen(valor_debb.arr);
     strcpy (valor_creb.arr,"");
     valor_creb.len = strlen(valor_creb.arr);
                                          /* Graba en movto_d el Debito (C4) */
//  printf("5) codigo_emp<%s> ano_mesa<%s> consecutivob<%s> secuenciab<%s> cuentab<%s> infa<%s> infb<%s> infc<%s> infd<%s> codigo_nitb<%s> valor_debb<%s> valor_creb<%s>", codigo_emp.arr,ano_mesa.arr,consecutivob.arr,secuenciab.arr,cuentab.arr,infa.arr,infb.arr,infc.arr,infd.arr,codigo_nitb.arr,valor_debb.arr,valor_creb.arr ); getchar();
     /* EXEC SQL insert into movto_d
     	      (CODIGO_EMP, ANO_MES,CONSECUTIVO,SECUENCIA,CUENTA,
		INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS)
              values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                     :cuentab, :infa, :infb, :infc, :infd,
                     :codigo_nitb, :valor_debb, :valor_creb, '001', 1); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 32;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1238;
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
     sqlstm.sqhstl[2] = (unsigned long  )12;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
     sqlstm.sqhstl[3] = (unsigned long  )12;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
     sqlstm.sqhstl[4] = (unsigned long  )17;
     sqlstm.sqindv[4] = (         short *)0;
     sqlstm.sqharm[4] = (unsigned long )0;
     sqlstm.sqhstv[5] = (unsigned char  *)&infa;
     sqlstm.sqhstl[5] = (unsigned long  )22;
     sqlstm.sqindv[5] = (         short *)0;
     sqlstm.sqharm[5] = (unsigned long )0;
     sqlstm.sqhstv[6] = (unsigned char  *)&infb;
     sqlstm.sqhstl[6] = (unsigned long  )22;
     sqlstm.sqindv[6] = (         short *)0;
     sqlstm.sqharm[6] = (unsigned long )0;
     sqlstm.sqhstv[7] = (unsigned char  *)&infc;
     sqlstm.sqhstl[7] = (unsigned long  )22;
     sqlstm.sqindv[7] = (         short *)0;
     sqlstm.sqharm[7] = (unsigned long )0;
     sqlstm.sqhstv[8] = (unsigned char  *)&infd;
     sqlstm.sqhstl[8] = (unsigned long  )22;
     sqlstm.sqindv[8] = (         short *)0;
     sqlstm.sqharm[8] = (unsigned long )0;
     sqlstm.sqhstv[9] = (unsigned char  *)&codigo_nitb;
     sqlstm.sqhstl[9] = (unsigned long  )22;
     sqlstm.sqindv[9] = (         short *)0;
     sqlstm.sqharm[9] = (unsigned long )0;
     sqlstm.sqhstv[10] = (unsigned char  *)&valor_debb;
     sqlstm.sqhstl[10] = (unsigned long  )22;
     sqlstm.sqindv[10] = (         short *)0;
     sqlstm.sqharm[10] = (unsigned long )0;
     sqlstm.sqhstv[11] = (unsigned char  *)&valor_creb;
     sqlstm.sqhstl[11] = (unsigned long  )22;
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
         return 1;
     }
/* 2) Grabar Ventas ( Credito ) */

     secuencia++;
     sprintf(secuenciab.arr,"%6.0f",secuencia);
     secuenciab.len = strlen(secuenciab.arr);

     strcpy(cuentab.arr,"41359515");
     cuentab.len = strlen(cuentab.arr);
     cuentab.arr  [cuentab.len]  = '\0';

     strcpy(codigox.arr,cuentab.arr);
     codigox.len = strlen(codigox.arr);

  /* Lee codigo nit de clientes */

     /* EXEC SQL select n.codigo_nit, n.nit into :codigo_nitb, :nitn
              from clientes c, nits n
              where c.codigo_cliente = :codigo_cliente_c and
                    c.codigo_nit     = n.codigo_nit; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 32;
     sqlstm.stmt = "select n.codigo_nit ,n.nit into :b0,:b1  from clientes c\
 ,nits n where (c.codigo_cliente=:b2 and c.codigo_nit=n.codigo_nit)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1300;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&codigo_nitb;
     sqlstm.sqhstl[0] = (unsigned long  )22;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&nitn;
     sqlstm.sqhstl[1] = (unsigned long  )8;
     sqlstm.sqindv[1] = (         short *)0;
     sqlstm.sqharm[1] = (unsigned long )0;
     sqlstm.sqhstv[2] = (unsigned char  *)&codigo_cliente_c;
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



     if (sqlca.sqlcode) {
         fprintf (stderr, "Error leyendo Clientes (%d)\n", sqlca.sqlcode);
//         return 1;
     }

     for (i=1;i<=4;i++) {
          strcpy(inf[i],"");
     }
     if (codigo_nit==0)
        strcpy(codigo_nitb.arr,"");
     else sprintf(codigo_nitb.arr,"%5d",codigo_nit);
     codigo_nitb.len = strlen(codigo_nitb.arr);
     strcpy(inf[2],comprobanteb.arr);

     ver_inf();
     strcpy (valor_debb.arr,"");
     valor_debb.len = strlen(valor_debb.arr);
     sprintf(valor_creb.arr,"%10.2f",costo_factura-fletes-impue+rete_fte);
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
     sqlstm.arrsiz = 32;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1326;
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
     sqlstm.sqhstl[2] = (unsigned long  )12;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
     sqlstm.sqhstl[3] = (unsigned long  )12;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
     sqlstm.sqhstl[4] = (unsigned long  )17;
     sqlstm.sqindv[4] = (         short *)0;
     sqlstm.sqharm[4] = (unsigned long )0;
     sqlstm.sqhstv[5] = (unsigned char  *)&infa;
     sqlstm.sqhstl[5] = (unsigned long  )22;
     sqlstm.sqindv[5] = (         short *)0;
     sqlstm.sqharm[5] = (unsigned long )0;
     sqlstm.sqhstv[6] = (unsigned char  *)&infb;
     sqlstm.sqhstl[6] = (unsigned long  )22;
     sqlstm.sqindv[6] = (         short *)0;
     sqlstm.sqharm[6] = (unsigned long )0;
     sqlstm.sqhstv[7] = (unsigned char  *)&infc;
     sqlstm.sqhstl[7] = (unsigned long  )22;
     sqlstm.sqindv[7] = (         short *)0;
     sqlstm.sqharm[7] = (unsigned long )0;
     sqlstm.sqhstv[8] = (unsigned char  *)&infd;
     sqlstm.sqhstl[8] = (unsigned long  )22;
     sqlstm.sqindv[8] = (         short *)0;
     sqlstm.sqharm[8] = (unsigned long )0;
     sqlstm.sqhstv[9] = (unsigned char  *)&codigo_nitb;
     sqlstm.sqhstl[9] = (unsigned long  )22;
     sqlstm.sqindv[9] = (         short *)0;
     sqlstm.sqharm[9] = (unsigned long )0;
     sqlstm.sqhstv[10] = (unsigned char  *)&valor_debb;
     sqlstm.sqhstl[10] = (unsigned long  )22;
     sqlstm.sqindv[10] = (         short *)0;
     sqlstm.sqharm[10] = (unsigned long )0;
     sqlstm.sqhstv[11] = (unsigned char  *)&valor_creb;
     sqlstm.sqhstl[11] = (unsigned long  )22;
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
         fprintf (stderr, "Error Grabando Credito (%d)\n", sqlca.sqlcode);
//         return 1;
     }

  }

/* 3) Grabar FLETES (Credito) */

  if ( fletes  > 0 ) {
     secuencia++;
     sprintf(secuenciab.arr,"%6.0f",secuencia);
     secuenciab.len = strlen(secuenciab.arr);

     strcpy(cuentab.arr,"42358001");
     cuentab.len = strlen(cuentab.arr);
     cuentab.arr  [cuentab.len]  = '\0';

     strcpy(codigox.arr,cuentab.arr);
     codigox.len = strlen(codigox.arr);

     for (i=1;i<=4;i++) {
          strcpy(inf[i],"");
     }
     codigo_nit = 0;
     if (codigo_nit==0)
        strcpy(codigo_nitb.arr,"");
     else sprintf(codigo_nitb.arr,"%5d",codigo_nit);
     codigo_nitb.len = strlen(codigo_nitb.arr);
     strcpy(inf[2],comprobanteb.arr);

     ver_inf();
     strcpy (valor_debb.arr,"");
     valor_debb.len = strlen(valor_debb.arr);
     sprintf(valor_creb.arr,"%10.2f",fletes);
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
     sqlstm.arrsiz = 32;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1388;
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
     sqlstm.sqhstl[2] = (unsigned long  )12;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
     sqlstm.sqhstl[3] = (unsigned long  )12;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
     sqlstm.sqhstl[4] = (unsigned long  )17;
     sqlstm.sqindv[4] = (         short *)0;
     sqlstm.sqharm[4] = (unsigned long )0;
     sqlstm.sqhstv[5] = (unsigned char  *)&infa;
     sqlstm.sqhstl[5] = (unsigned long  )22;
     sqlstm.sqindv[5] = (         short *)0;
     sqlstm.sqharm[5] = (unsigned long )0;
     sqlstm.sqhstv[6] = (unsigned char  *)&infb;
     sqlstm.sqhstl[6] = (unsigned long  )22;
     sqlstm.sqindv[6] = (         short *)0;
     sqlstm.sqharm[6] = (unsigned long )0;
     sqlstm.sqhstv[7] = (unsigned char  *)&infc;
     sqlstm.sqhstl[7] = (unsigned long  )22;
     sqlstm.sqindv[7] = (         short *)0;
     sqlstm.sqharm[7] = (unsigned long )0;
     sqlstm.sqhstv[8] = (unsigned char  *)&infd;
     sqlstm.sqhstl[8] = (unsigned long  )22;
     sqlstm.sqindv[8] = (         short *)0;
     sqlstm.sqharm[8] = (unsigned long )0;
     sqlstm.sqhstv[9] = (unsigned char  *)&codigo_nitb;
     sqlstm.sqhstl[9] = (unsigned long  )22;
     sqlstm.sqindv[9] = (         short *)0;
     sqlstm.sqharm[9] = (unsigned long )0;
     sqlstm.sqhstv[10] = (unsigned char  *)&valor_debb;
     sqlstm.sqhstl[10] = (unsigned long  )22;
     sqlstm.sqindv[10] = (         short *)0;
     sqlstm.sqharm[10] = (unsigned long )0;
     sqlstm.sqhstv[11] = (unsigned char  *)&valor_creb;
     sqlstm.sqhstl[11] = (unsigned long  )22;
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
         fprintf (stderr, "Error Grabando FLETES (Credito) (%d)\n", sqlca.sqlcode);
//         return 1;
     }
  }

/* 4) Grabar IVA (Credito) */

  if ( impue > 0 ) {
     secuencia++;
     sprintf(secuenciab.arr,"%6.0f",secuencia);
     secuenciab.len = strlen(secuenciab.arr);

     strcpy(cuentab.arr,"24080101");
     cuentab.len = strlen(cuentab.arr);
     cuentab.arr  [cuentab.len]  = '\0';

     strcpy(codigox.arr,cuentab.arr);
     codigox.len = strlen(codigox.arr);

     for (i=1;i<=4;i++) {
          strcpy(inf[i],"");
     }
     codigo_nit = 0;
     if (codigo_nit==0)
        strcpy(codigo_nitb.arr,"");
     else sprintf(codigo_nitb.arr,"%5d",codigo_nit);
     codigo_nitb.len = strlen(codigo_nitb.arr);
     strcpy(inf[2],comprobanteb.arr);

     ver_inf();
     strcpy (valor_debb.arr,"");
     valor_debb.len = strlen(valor_debb.arr);
     sprintf(valor_creb.arr,"%10.2f",impue);
     valor_creb.len = strlen(valor_creb.arr);
                                         /* Graba en movto_d el Credito (C4) */
//  printf("7) codigo_emp<%s> ano_mesa<%s> consecutivob<%s> secuenciab<%s> cuentab<%s> infa<%s> infb<%s> infc<%s> infd<%s> codigo_nitb<%s> valor_debb<%s> valor_creb<%s>", codigo_emp.arr,ano_mesa.arr,consecutivob.arr,secuenciab.arr,cuentab.arr,infa.arr,infb.arr,infc.arr,infd.arr,codigo_nitb.arr,valor_debb.arr,valor_creb.arr ); getchar();
     /* EXEC SQL insert into movto_d
     	      (CODIGO_EMP, ANO_MES,CONSECUTIVO,SECUENCIA,CUENTA,
		INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS)
              values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                     :cuentab, :infa, :infb, :infc, :infd,
                     :codigo_nitb, :valor_debb, :valor_creb, '001', 1); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 32;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1450;
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
     sqlstm.sqhstl[2] = (unsigned long  )12;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
     sqlstm.sqhstl[3] = (unsigned long  )12;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
     sqlstm.sqhstl[4] = (unsigned long  )17;
     sqlstm.sqindv[4] = (         short *)0;
     sqlstm.sqharm[4] = (unsigned long )0;
     sqlstm.sqhstv[5] = (unsigned char  *)&infa;
     sqlstm.sqhstl[5] = (unsigned long  )22;
     sqlstm.sqindv[5] = (         short *)0;
     sqlstm.sqharm[5] = (unsigned long )0;
     sqlstm.sqhstv[6] = (unsigned char  *)&infb;
     sqlstm.sqhstl[6] = (unsigned long  )22;
     sqlstm.sqindv[6] = (         short *)0;
     sqlstm.sqharm[6] = (unsigned long )0;
     sqlstm.sqhstv[7] = (unsigned char  *)&infc;
     sqlstm.sqhstl[7] = (unsigned long  )22;
     sqlstm.sqindv[7] = (         short *)0;
     sqlstm.sqharm[7] = (unsigned long )0;
     sqlstm.sqhstv[8] = (unsigned char  *)&infd;
     sqlstm.sqhstl[8] = (unsigned long  )22;
     sqlstm.sqindv[8] = (         short *)0;
     sqlstm.sqharm[8] = (unsigned long )0;
     sqlstm.sqhstv[9] = (unsigned char  *)&codigo_nitb;
     sqlstm.sqhstl[9] = (unsigned long  )22;
     sqlstm.sqindv[9] = (         short *)0;
     sqlstm.sqharm[9] = (unsigned long )0;
     sqlstm.sqhstv[10] = (unsigned char  *)&valor_debb;
     sqlstm.sqhstl[10] = (unsigned long  )22;
     sqlstm.sqindv[10] = (         short *)0;
     sqlstm.sqharm[10] = (unsigned long )0;
     sqlstm.sqhstv[11] = (unsigned char  *)&valor_creb;
     sqlstm.sqhstl[11] = (unsigned long  )22;
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
         fprintf (stderr, "Error Grabando FLETES (Credito) (%d)\n", sqlca.sqlcode);
//         return 1;
     }
  }

// Grabar Retefte //

if ( rete_fte > 0 ) {
     secuencia++;
     sprintf(secuenciab.arr,"%6.0f",secuencia);
     secuenciab.len = strlen(secuenciab.arr);

     strcpy(cuentab.arr,"13551501");
     cuentab.len = strlen(cuentab.arr);
     cuentab.arr  [cuentab.len]  = '\0';

     for (i=1;i<=4;i++) {
          strcpy(inf[i],"");
     }
     if (codigo_nit==0)
        strcpy(codigo_nitb.arr,"");
     else sprintf(codigo_nitb.arr,"%5.0f",codigo_nit);
     codigo_nitb.len = strlen(codigo_nitb.arr);
     strcpy(inf[2],comprobanteb.arr);

     ver_inf();
     strcpy (valor_creb.arr,"");
     valor_creb.len = strlen(valor_creb.arr);
     sprintf(valor_debb.arr,"%10.2f",rete_fte);
     valor_debb.len = strlen(valor_debb.arr);

// printf("8) codigo_emp<%s> ano_mesa<%s> consecutivob<%s> secuenciab<%s> cuentab<%s> infa<%s> infb<%s> infc<%s> infd<%s> codigo_nitb<%s> valor_debb<%s> valor_creb<%s>", codigo_emp.arr,ano_mesa.arr,consecutivob.arr,secuenciab.arr,cuentab.arr,infa.arr,infb.arr,infc.arr,infd.arr,codigo_nitb.arr,valor_debb.arr,valor_creb.arr ); getchar();
     /* EXEC SQL insert into movto_d
              (CODIGO_EMP,
	       ANO_MES,
               CONSECUTIVO,
	       SECUENCIA,
	       CUENTA,
	       INFA,
	       INFB,
	       INFC,
	       INFD,
	       CODIGO_NIT,
	       VALOR_DEB,
	       VALOR_CRE,
	       SUCURSAL,
	       CEN_COS)
              values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                     :cuentab, :infa, :infb, :infc, :infd,
                     :codigo_nitb, :valor_debb, :valor_creb,'001',1); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 32;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1512;
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
     sqlstm.sqhstl[2] = (unsigned long  )12;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
     sqlstm.sqhstl[3] = (unsigned long  )12;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
     sqlstm.sqhstl[4] = (unsigned long  )17;
     sqlstm.sqindv[4] = (         short *)0;
     sqlstm.sqharm[4] = (unsigned long )0;
     sqlstm.sqhstv[5] = (unsigned char  *)&infa;
     sqlstm.sqhstl[5] = (unsigned long  )22;
     sqlstm.sqindv[5] = (         short *)0;
     sqlstm.sqharm[5] = (unsigned long )0;
     sqlstm.sqhstv[6] = (unsigned char  *)&infb;
     sqlstm.sqhstl[6] = (unsigned long  )22;
     sqlstm.sqindv[6] = (         short *)0;
     sqlstm.sqharm[6] = (unsigned long )0;
     sqlstm.sqhstv[7] = (unsigned char  *)&infc;
     sqlstm.sqhstl[7] = (unsigned long  )22;
     sqlstm.sqindv[7] = (         short *)0;
     sqlstm.sqharm[7] = (unsigned long )0;
     sqlstm.sqhstv[8] = (unsigned char  *)&infd;
     sqlstm.sqhstl[8] = (unsigned long  )22;
     sqlstm.sqindv[8] = (         short *)0;
     sqlstm.sqharm[8] = (unsigned long )0;
     sqlstm.sqhstv[9] = (unsigned char  *)&codigo_nitb;
     sqlstm.sqhstl[9] = (unsigned long  )22;
     sqlstm.sqindv[9] = (         short *)0;
     sqlstm.sqharm[9] = (unsigned long )0;
     sqlstm.sqhstv[10] = (unsigned char  *)&valor_debb;
     sqlstm.sqhstl[10] = (unsigned long  )22;
     sqlstm.sqindv[10] = (         short *)0;
     sqlstm.sqharm[10] = (unsigned long )0;
     sqlstm.sqhstv[11] = (unsigned char  *)&valor_creb;
     sqlstm.sqhstl[11] = (unsigned long  )22;
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


/***************************************/
/* COSTO DE VENTAS CONTRA INVENTARIOS  */
/***************************************/

  /* EXEC SQL select consecutivo
           into :consecutivo
           from movto_c
           where codigo_emp  = :codigo_emp   and
                 ano_mes     = :ano_mesa     and
                 comprobante = :orden        and
                 clase       = 'CV'          and
                 tipo        = 9; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 32;
  sqlstm.stmt = "select consecutivo into :b0  from movto_c where ((((codigo_\
emp=:b1 and ano_mes=:b2) and comprobante=:b3) and clase='CV') and tipo=9)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)1574;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo;
  sqlstm.sqhstl[0] = (unsigned long  )8;
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
  sqlstm.sqhstv[3] = (unsigned char  *)&orden;
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



  secuencia = 0;
  if (sqlca.sqlcode==0) {
      sprintf(consecutivob.arr,"%5.0f",consecutivo);
      consecutivob.len = strlen(consecutivob.arr);
      reverso_asiento();
  }
  else {
        if(control_asiento())
           return 1;

//  printf("9) codigo_emp<%s> ano_mesa<%s> comprobanteb<%s> consecutivob<%s> fechab<%s>", codigo_emp.arr,ano_mesa.arr,comprobanteb.arr,consecutivob.arr,fechab.arr); getchar();
        /* EXEC SQL insert into movto_c
       (CODIGO_EMP, ANO_MES, COMPROBANTE, CONSECUTIVO, CLASE, DESCRIPCION, FECHA, TIPO,
	ESTADO, NITB, CODIGO_NITB, VALORB, RETENCION, CONTADO )
                 values(:codigo_emp, :ano_mesa, :orden, :consecutivob, 'CV',
                        'LENTES OFTALMICOS',:fechab,'9', '0','','','','','C'); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 32;
        sqlstm.stmt = "insert into movto_c(CODIGO_EMP,ANO_MES,COMPROBANTE,CO\
NSECUTIVO,CLASE,DESCRIPCION,FECHA,TIPO,ESTADO,NITB,CODIGO_NITB,VALORB,RETENCIO\
N,CONTADO) values (:b0,:b1,:b2,:b3,'CV','LENTES OFTALMICOS',:b4,'9','0','','',\
'','','C')";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)1604;
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
        sqlstm.sqhstv[2] = (unsigned char  *)&orden;
        sqlstm.sqhstl[2] = (unsigned long  )22;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&consecutivob;
        sqlstm.sqhstl[3] = (unsigned long  )12;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&fechab;
        sqlstm.sqhstl[4] = (unsigned long  )32;
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

/* 5) Grabar Costo de ventas ( Debito ) */

  if ( costo_venta > 0) {
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
     strcpy(inf[2],comprobanteb.arr);

     ver_inf();
     strcpy (valor_creb.arr,"");
     valor_creb.len = strlen(valor_debb.arr);
     sprintf(valor_debb.arr,"%10.2f",costo_venta);
     valor_debb.len = strlen(valor_debb.arr);
                                         /* Graba en movto_d el Debito (C4) */
//  printf("10) codigo_emp<%s> ano_mesa<%s> consecutivob<%s> secuenciab<%s> cuentab<%s> infa<%s> infb<%s> infc<%s> infd<%s> codigo_nitb<%s> valor_debb<%s> valor_creb<%s>", codigo_emp.arr,ano_mesa.arr,consecutivob.arr,secuenciab.arr,cuentab.arr,infa.arr,infb.arr,infc.arr,infd.arr,codigo_nitb.arr,valor_debb.arr,valor_creb.arr ); getchar();
     /* EXEC SQL insert into movto_d
     	      (CODIGO_EMP, ANO_MES,CONSECUTIVO,SECUENCIA,CUENTA,
		INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS)
              values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                     :cuentab, :infa, :infb, :infc, :infd,
                     :codigo_nitb, :valor_debb, :valor_creb, '001', 1); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 32;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1638;
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
     sqlstm.sqhstl[2] = (unsigned long  )12;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
     sqlstm.sqhstl[3] = (unsigned long  )12;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
     sqlstm.sqhstl[4] = (unsigned long  )17;
     sqlstm.sqindv[4] = (         short *)0;
     sqlstm.sqharm[4] = (unsigned long )0;
     sqlstm.sqhstv[5] = (unsigned char  *)&infa;
     sqlstm.sqhstl[5] = (unsigned long  )22;
     sqlstm.sqindv[5] = (         short *)0;
     sqlstm.sqharm[5] = (unsigned long )0;
     sqlstm.sqhstv[6] = (unsigned char  *)&infb;
     sqlstm.sqhstl[6] = (unsigned long  )22;
     sqlstm.sqindv[6] = (         short *)0;
     sqlstm.sqharm[6] = (unsigned long )0;
     sqlstm.sqhstv[7] = (unsigned char  *)&infc;
     sqlstm.sqhstl[7] = (unsigned long  )22;
     sqlstm.sqindv[7] = (         short *)0;
     sqlstm.sqharm[7] = (unsigned long )0;
     sqlstm.sqhstv[8] = (unsigned char  *)&infd;
     sqlstm.sqhstl[8] = (unsigned long  )22;
     sqlstm.sqindv[8] = (         short *)0;
     sqlstm.sqharm[8] = (unsigned long )0;
     sqlstm.sqhstv[9] = (unsigned char  *)&codigo_nitb;
     sqlstm.sqhstl[9] = (unsigned long  )22;
     sqlstm.sqindv[9] = (         short *)0;
     sqlstm.sqharm[9] = (unsigned long )0;
     sqlstm.sqhstv[10] = (unsigned char  *)&valor_debb;
     sqlstm.sqhstl[10] = (unsigned long  )22;
     sqlstm.sqindv[10] = (         short *)0;
     sqlstm.sqharm[10] = (unsigned long )0;
     sqlstm.sqhstv[11] = (unsigned char  *)&valor_creb;
     sqlstm.sqhstl[11] = (unsigned long  )22;
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

/* 6) Grabar Inventarios ( Credito ) */

  if ( costo_venta > 0 ) {
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
//     printf("11) codigo_emp<%s> ano_mesa<%s> consecutivob<%s> secuenciab<%s> cuentab<%s> infa<%s> infb<%s> infc<%s> infd<%s> codigo_nitb<%s> valor_debb<%s> valor_creb<%s>", codigo_emp.arr,ano_mesa.arr,consecutivob.arr,secuenciab.arr,cuentab.arr,infa.arr,infb.arr,infc.arr,infd.arr,codigo_nitb.arr,valor_debb.arr,valor_creb.arr ); getchar();
     /* EXEC SQL insert into movto_d
     	      (CODIGO_EMP, ANO_MES,CONSECUTIVO,SECUENCIA,CUENTA,
		INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS)
              values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                     :cuentab, :infa, :infb, :infc, :infd,
                     :codigo_nitb, :valor_debb, :valor_creb, '001', 1); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 32;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)1700;
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
     sqlstm.sqhstl[2] = (unsigned long  )12;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
     sqlstm.sqhstl[3] = (unsigned long  )12;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
     sqlstm.sqhstl[4] = (unsigned long  )17;
     sqlstm.sqindv[4] = (         short *)0;
     sqlstm.sqharm[4] = (unsigned long )0;
     sqlstm.sqhstv[5] = (unsigned char  *)&infa;
     sqlstm.sqhstl[5] = (unsigned long  )22;
     sqlstm.sqindv[5] = (         short *)0;
     sqlstm.sqharm[5] = (unsigned long )0;
     sqlstm.sqhstv[6] = (unsigned char  *)&infb;
     sqlstm.sqhstl[6] = (unsigned long  )22;
     sqlstm.sqindv[6] = (         short *)0;
     sqlstm.sqharm[6] = (unsigned long )0;
     sqlstm.sqhstv[7] = (unsigned char  *)&infc;
     sqlstm.sqhstl[7] = (unsigned long  )22;
     sqlstm.sqindv[7] = (         short *)0;
     sqlstm.sqharm[7] = (unsigned long )0;
     sqlstm.sqhstv[8] = (unsigned char  *)&infd;
     sqlstm.sqhstl[8] = (unsigned long  )22;
     sqlstm.sqindv[8] = (         short *)0;
     sqlstm.sqharm[8] = (unsigned long )0;
     sqlstm.sqhstv[9] = (unsigned char  *)&codigo_nitb;
     sqlstm.sqhstl[9] = (unsigned long  )22;
     sqlstm.sqindv[9] = (         short *)0;
     sqlstm.sqharm[9] = (unsigned long )0;
     sqlstm.sqhstv[10] = (unsigned char  *)&valor_debb;
     sqlstm.sqhstl[10] = (unsigned long  )22;
     sqlstm.sqindv[10] = (         short *)0;
     sqlstm.sqharm[10] = (unsigned long )0;
     sqlstm.sqhstv[11] = (unsigned char  *)&valor_creb;
     sqlstm.sqhstl[11] = (unsigned long  )22;
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

int control_asiento()
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
  sqlstm.arrsiz = 32;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3))";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)1762;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo15;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&fuenteb;
  sqlstm.sqhstl[1] = (unsigned long  )12;
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
  }

  strcpy(fuenteb.arr,"08");
  fuenteb.len = strlen(fuenteb.arr);

  /* Lee consecutivo de Control_mes Fte 08 sgte consecutivo */

//  printf("2) fuenteb<%s> ano_mesa<%s> codigo_emp<%s>",fuenteb.arr,ano_mesa.arr,codigo_emp.arr); getchar();
  /* EXEC SQL select consecutivo+1, version
           into :consecutivo, :version
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesa)      and
                 codigo_emp   = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 32;
  sqlstm.stmt = "select (consecutivo+1) ,version into :b0,:b1  from control_\
mes where ((fuente=to_number(:b2) and ano_mes=to_number(:b3)) and codigo_emp=t\
o_number(:b4))";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)1792;
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
  sqlstm.sqhstl[2] = (unsigned long  )12;
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
               values (:fuenteb, :ano_mesa, 'CONTROL VENTA CONTADO',
                       :consecutivob, :codigo_emp,1); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 32;
      sqlstm.stmt = "insert into control_mes(FUENTE,ANO_MES,NOMBRE,CONSECUTI\
VO,CODIGO_EMP,VERSION) values (:b0,:b1,'CONTROL VENTA CONTADO',:b2,:b3,1)";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)1826;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&fuenteb;
      sqlstm.sqhstl[0] = (unsigned long  )12;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
      sqlstm.sqhstl[1] = (unsigned long  )22;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
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
        sqlstm.arrsiz = 32;
        sqlstm.stmt = "update control_mes  set consecutivo=:b0 where (((codi\
go_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3) and version=\
:b4)";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)1856;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&consecutivob;
        sqlstm.sqhstl[0] = (unsigned long  )12;
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
        sqlstm.sqhstl[3] = (unsigned long  )12;
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
  if (sqlca.sqlcode) {
      return 1;
  }

  strcpy(fuenteb.arr,"15");
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
  sqlstm.arrsiz = 32;
  sqlstm.stmt = "select consecutivo ,version into :b0,:b1  from control_mes \
where ((fuente=to_number(:b2) and ano_mes=to_number(:b3)) and codigo_emp=to_nu\
mber(:b4))";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)1890;
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
  sqlstm.sqhstl[2] = (unsigned long  )12;
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
      fprintf (stderr, "Error leyendo Control_Mes 15 (%d)\n", sqlca.sqlcode);
               /* Inserta en Control_Mes Fte 15 si no existe (C11) */
      /* EXEC SQL insert into control_mes
              (FUENTE,ANO_MES,NOMBRE,CONSECUTIVO,CODIGO_EMP,VERSION)
               values (:fuenteb, :ano_mesa, 'CONTROL VENTA CONTADO',
                       :consecutivob, :codigo_emp,1); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 32;
      sqlstm.stmt = "insert into control_mes(FUENTE,ANO_MES,NOMBRE,CONSECUTI\
VO,CODIGO_EMP,VERSION) values (:b0,:b1,'CONTROL VENTA CONTADO',:b2,:b3,1)";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)1924;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&fuenteb;
      sqlstm.sqhstl[0] = (unsigned long  )12;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
      sqlstm.sqhstl[1] = (unsigned long  )22;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
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
        sqlstm.arrsiz = 32;
        sqlstm.stmt = "update control_mes  set consecutivo=:b0 where (((codi\
go_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3) and version=\
:b4)";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)1954;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&consecutivob;
        sqlstm.sqhstl[0] = (unsigned long  )12;
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
        sqlstm.sqhstl[3] = (unsigned long  )12;
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
  if (sqlca.sqlcode) {
      return 1;
  }
  return 0;
}

void reverso_asiento()
{
    /* EXEC SQL
         select max(secuencia)
         into   :secuenciab
         from movto_d d, movto_c c
         where c.codigo_emp  = to_number(:codigo_emp)    and
               c.codigo_emp  = d.codigo_emp              and
               c.ano_mes     = d.ano_mes                 and
               c.consecutivo = d.consecutivo             and
               c.consecutivo = to_number(:consecutivob)  and
               c.clase       = 'CV'                      and
               c.tipo        = 9                         and
               c.ano_mes     = to_number(:ano_mesa); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 32;
    sqlstm.stmt = "select max(secuencia) into :b0  from movto_d d ,movto_c c\
 where (((((((c.codigo_emp=to_number(:b1) and c.codigo_emp=d.codigo_emp) and c\
.ano_mes=d.ano_mes) and c.consecutivo=d.consecutivo) and c.consecutivo=to_numb\
er(:b2)) and c.clase='CV') and c.tipo=9) and c.ano_mes=to_number(:b3))";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)1988;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&secuenciab;
    sqlstm.sqhstl[0] = (unsigned long  )12;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[1] = (unsigned long  )7;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
    sqlstm.sqhstl[2] = (unsigned long  )12;
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



    secuenciab.len = strlen(secuenciab.arr);
    secuencia = atof(secuenciab.arr);

    if ( secuencia > 0 ) {

       /* EXEC SQL DECLARE C9 CURSOR FOR
            select d.consecutivo, d.cuenta, d.infa, d.infb, d.infc, d.infd, d.codigo_nit,
                   sum(nvl(d.valor_deb,0)-nvl(d.valor_cre,0))
            from movto_d d, movto_c c
            where c.codigo_emp  = to_number(:codigo_emp)    and
                  c.codigo_emp  = d.codigo_emp              and
                  c.ano_mes     = d.ano_mes                 and
                  c.consecutivo = d.consecutivo             and
                  c.consecutivo = to_number(:consecutivob)  and
                  c.clase       = 'CV'                      and
                  c.tipo        = 9                         and
                  c.ano_mes     = to_number(:ano_mesa)
            group by d.consecutivo, d.cuenta, d.infa, d.infb, d.infc, d.infd, d.codigo_nit; */ 


      /* EXEC SQL OPEN C9; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 32;
      sqlstm.stmt = sq0048;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)2018;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
      sqlstm.sqhstl[0] = (unsigned long  )7;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&consecutivob;
      sqlstm.sqhstl[1] = (unsigned long  )12;
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



      /* EXEC SQL FETCH C9 INTO :consecutivo, :cuentab,
                             :infa, :infb, :infc, :infd,
                             :codigo_nit,  :valor; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 32;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)2044;
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
      sqlstm.sqhstl[2] = (unsigned long  )22;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&infb;
      sqlstm.sqhstl[3] = (unsigned long  )22;
      sqlstm.sqindv[3] = (         short *)0;
      sqlstm.sqharm[3] = (unsigned long )0;
      sqlstm.sqhstv[4] = (unsigned char  *)&infc;
      sqlstm.sqhstl[4] = (unsigned long  )22;
      sqlstm.sqindv[4] = (         short *)0;
      sqlstm.sqharm[4] = (unsigned long )0;
      sqlstm.sqhstv[5] = (unsigned char  *)&infd;
      sqlstm.sqhstl[5] = (unsigned long  )22;
      sqlstm.sqindv[5] = (         short *)0;
      sqlstm.sqharm[5] = (unsigned long )0;
      sqlstm.sqhstv[6] = (unsigned char  *)&codigo_nit;
      sqlstm.sqhstl[6] = (unsigned long  )4;
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

           /* EXEC SQL insert into movto_d
     	      (CODIGO_EMP, ANO_MES,CONSECUTIVO,SECUENCIA,CUENTA,
		INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS)
                    values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                           :cuentab, :infa, :infb, :infc, :infd,
                           :codigo_nitb, :valor_debb, :valor_creb, '001', 1); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 32;
           sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO\
,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,\
CEN_COS) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)2090;
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
           sqlstm.sqhstl[2] = (unsigned long  )12;
           sqlstm.sqindv[2] = (         short *)0;
           sqlstm.sqharm[2] = (unsigned long )0;
           sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
           sqlstm.sqhstl[3] = (unsigned long  )12;
           sqlstm.sqindv[3] = (         short *)0;
           sqlstm.sqharm[3] = (unsigned long )0;
           sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
           sqlstm.sqhstl[4] = (unsigned long  )17;
           sqlstm.sqindv[4] = (         short *)0;
           sqlstm.sqharm[4] = (unsigned long )0;
           sqlstm.sqhstv[5] = (unsigned char  *)&infa;
           sqlstm.sqhstl[5] = (unsigned long  )22;
           sqlstm.sqindv[5] = (         short *)0;
           sqlstm.sqharm[5] = (unsigned long )0;
           sqlstm.sqhstv[6] = (unsigned char  *)&infb;
           sqlstm.sqhstl[6] = (unsigned long  )22;
           sqlstm.sqindv[6] = (         short *)0;
           sqlstm.sqharm[6] = (unsigned long )0;
           sqlstm.sqhstv[7] = (unsigned char  *)&infc;
           sqlstm.sqhstl[7] = (unsigned long  )22;
           sqlstm.sqindv[7] = (         short *)0;
           sqlstm.sqharm[7] = (unsigned long )0;
           sqlstm.sqhstv[8] = (unsigned char  *)&infd;
           sqlstm.sqhstl[8] = (unsigned long  )22;
           sqlstm.sqindv[8] = (         short *)0;
           sqlstm.sqharm[8] = (unsigned long )0;
           sqlstm.sqhstv[9] = (unsigned char  *)&codigo_nitb;
           sqlstm.sqhstl[9] = (unsigned long  )22;
           sqlstm.sqindv[9] = (         short *)0;
           sqlstm.sqharm[9] = (unsigned long )0;
           sqlstm.sqhstv[10] = (unsigned char  *)&valor_debb;
           sqlstm.sqhstl[10] = (unsigned long  )22;
           sqlstm.sqindv[10] = (         short *)0;
           sqlstm.sqharm[10] = (unsigned long )0;
           sqlstm.sqhstv[11] = (unsigned char  *)&valor_creb;
           sqlstm.sqhstl[11] = (unsigned long  )22;
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
           sqlstm.arrsiz = 32;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)2152;
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
           sqlstm.sqhstl[2] = (unsigned long  )22;
           sqlstm.sqindv[2] = (         short *)0;
           sqlstm.sqharm[2] = (unsigned long )0;
           sqlstm.sqhstv[3] = (unsigned char  *)&infb;
           sqlstm.sqhstl[3] = (unsigned long  )22;
           sqlstm.sqindv[3] = (         short *)0;
           sqlstm.sqharm[3] = (unsigned long )0;
           sqlstm.sqhstv[4] = (unsigned char  *)&infc;
           sqlstm.sqhstl[4] = (unsigned long  )22;
           sqlstm.sqindv[4] = (         short *)0;
           sqlstm.sqharm[4] = (unsigned long )0;
           sqlstm.sqhstv[5] = (unsigned char  *)&infd;
           sqlstm.sqhstl[5] = (unsigned long  )22;
           sqlstm.sqindv[5] = (         short *)0;
           sqlstm.sqharm[5] = (unsigned long )0;
           sqlstm.sqhstv[6] = (unsigned char  *)&codigo_nit;
           sqlstm.sqhstl[6] = (unsigned long  )4;
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
  sqlstm.arrsiz = 32;
  sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b3  from pl\
an where (codigo_emp=:b4 and cuenta=:b5)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)2198;
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


