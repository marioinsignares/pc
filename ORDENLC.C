
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
    ".\\ordenlc.pc"
};


static const unsigned long sqlctx = 1238251799;


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
   unsigned char    *sqhstv[18];
   unsigned long    sqhstl[18];
	    short   *sqindv[18];
   unsigned long    sqharm[18];
   unsigned long     *sqharc[18];
} sqlstm = {8,18};

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

 static const char *sq0008 = 
"select inf  from infacu            ";
 static const char *sq0003 = 
"select nvl(d.tipo_material,o.tipo_material) ,d.diametro ,d.curva_base ,esfer\
a ,cilindro ,eje ,cantidad ,valor_venta ,lado_lente ,costo_promedio_p  from or\
denes_c o ,ordenes_d d where ((d.consecutivo=o.consecutivo and d.ano_mes=:b0) \
and numero_orden=:b1)           ";
 static const char *sq0004 = 
"select s.nombre ,o.cantidad ,(o.cantidad* o.valor_unidad)  from ordenes_o o \
,servicios_len s where (((((o.tipo_servicio=s.tipo_servicio and o.tipo_trabajo\
=s.tipo_trabajo) and o.consecutivo=:b0) and o.ano_mes=:b1) and o.tipo_servicio\
=:b2) and s.lista=(select lista  from clientes where codigo_cliente=:b3)) orde\
r by s.secuencia            ";
 static const char *sq0023 = 
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
2,0,0,1,0,0,27,190,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,704,0,4,215,0,18,2,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,
9,0,0,1,9,0,0,1,9,0,0,
114,0,0,5,133,0,4,280,0,5,1,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,1,9,0,0,
148,0,0,6,81,0,4,293,0,3,2,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,
174,0,0,7,81,0,4,301,0,3,2,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,
200,0,0,8,35,0,9,315,0,0,0,0,1,0,
214,0,0,8,0,0,13,322,0,1,0,0,1,0,2,9,0,0,
232,0,0,8,0,0,15,336,0,0,0,0,1,0,
246,0,0,3,264,0,9,349,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
268,0,0,3,0,0,13,353,0,10,0,0,1,0,2,9,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,3,
0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,4,0,0,
322,0,0,3,0,0,15,408,0,0,0,0,1,0,
336,0,0,4,0,0,15,409,0,0,0,0,1,0,
350,0,0,9,0,0,30,412,0,0,0,0,1,0,
364,0,0,10,78,0,4,432,0,3,1,0,1,0,2,9,0,0,2,9,0,0,1,9,0,0,
390,0,0,4,338,0,9,449,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
420,0,0,4,0,0,13,451,0,3,0,0,1,0,2,9,0,0,2,3,0,0,2,4,0,0,
446,0,0,4,0,0,13,467,0,3,0,0,1,0,2,9,0,0,2,3,0,0,2,4,0,0,
472,0,0,11,134,0,4,589,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
502,0,0,12,345,0,4,600,0,5,3,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
536,0,0,13,165,0,4,627,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
566,0,0,14,130,0,3,641,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
596,0,0,15,117,0,5,650,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
626,0,0,16,161,0,4,660,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
656,0,0,17,130,0,3,671,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
686,0,0,18,117,0,5,678,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
716,0,0,19,219,0,3,686,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
750,0,0,20,203,0,3,736,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
812,0,0,21,203,0,3,774,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
874,0,0,22,303,0,4,790,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
904,0,0,23,451,0,9,819,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
930,0,0,23,0,0,13,820,0,8,0,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,4,0,0,2,4,0,0,
976,0,0,24,203,0,3,864,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1038,0,0,23,0,0,13,874,0,8,0,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,4,0,0,2,4,0,0,
1084,0,0,25,99,0,4,900,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,9,
0,0,
};


/*****************************************************************
* ORDENLC.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* ordenlc.c. Listado de Ordenes de De talla de lentes de contacto.
*
* Uso : ordenlc numero_orden device userid/password
*
* Martin A. Toloza L. Creado Febrero 13-1998.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void titulos();
void ver_tipo_material();
void leer_servicios();
void imprimo_servicios();
void totales();
void Rx_procesor();
void hacer_asiento();
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

/* VARCHAR tipo_material  [4]; */ 
struct { unsigned short len; unsigned char arr[4]; } tipo_material;

/* VARCHAR fecha_control  [70]; */ 
struct { unsigned short len; unsigned char arr[70]; } fecha_control;

/* VARCHAR fecha_cliente  [70]; */ 
struct { unsigned short len; unsigned char arr[70]; } fecha_cliente;

double  codigo_nit;
double  valor_material;
double  valor_desctos;
double  valor_otros;
double  valor_total;
double  consecutivo;
double  ano_mes;
float   numero_caja;
/* VARCHAR color_caja     [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } color_caja;

/* VARCHAR estado         [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } estado;

/* VARCHAR orden          [12]; */ 
struct { unsigned short len; unsigned char arr[12]; } orden;

                                 /* Ordenes_d (C2) */
/* VARCHAR d_tipo_material[03]; */ 
struct { unsigned short len; unsigned char arr[3]; } d_tipo_material;

float   diametro;
/* VARCHAR curva_base     [05]; */ 
struct { unsigned short len; unsigned char arr[5]; } curva_base;

float   esfera;
float   cilindro;
int     eje;
int     cantidad;
double  valor_venta;
/* VARCHAR lado_lente     [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } lado_lente;

/* VARCHAR ano_mesa       [08]; */ 
struct { unsigned short len; unsigned char arr[8]; } ano_mesa;

/* VARCHAR consecutivoa   [08]; */ 
struct { unsigned short len; unsigned char arr[8]; } consecutivoa;

                                 /* Tipos (C3) */
/* VARCHAR nomb_tipo      [26]; */ 
struct { unsigned short len; unsigned char arr[26]; } nomb_tipo;

/* VARCHAR clase_material [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } clase_material;

/* VARCHAR tipo_mat       [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } tipo_mat;

                                 /* Servicios_len (C4) */
/* VARCHAR nomb_servicio  [26]; */ 
struct { unsigned short len; unsigned char arr[26]; } nomb_servicio;

int     cantidad_srv;
double  valor_servicio;
/* VARCHAR tipo_servicio  [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } tipo_servicio;

                                 /* Ordenes_r (C5) */
/* VARCHAR observacion    [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } observacion;

float   gaveta;
float   pfactu;
                                 /* Ordenes_d (C6) */
double  tot_lin;
                                 /* Ordenes_o (C7) */
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
/* VARCHAR comprobanteb[07]; */ 
struct { unsigned short len; unsigned char arr[7]; } comprobanteb;

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
double  tot_pag;                                   /* Total    de Paginas */
int     con_pag;                                   /* Contador de Paginas */
int     con_lin= 22;                               /* Contador de Lineas  */
int     staora = 0;
int     oraest = 0;
char    fecha[10];
char    hora[12];
char    nombre_tipo[33];
double  subtotal;
double  cb;
double  costo_venta;
double  costo_factura;
int     i;
int     j, k;
char    cadena[100];
char    lineas[132];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 4)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : ordenlc numero_orden device userid/password\n");
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

    /* EXEC SQL select numero_orden, codigo_cliente, n.nombre,
                    nvl(n.ciudad_env,nvl(n.nombre_muni,c.nombre)),
                    cl.nombre, o.diam_pedido||o.tipo_material,
                    to_char(fecha_control,'DD-MON-YYYY hh:mi am'),
                    nvl(valor_material,0), nvl(valor_desctos,0),
                    nvl(valor_otros,0),    nvl(valor_total,0),
                    o.consecutivo, o.ano_mes,
                    o.numero_caja, o.color_caja, o.estado
             into  :numero_orden, :codigo_cliente, :nomb_clie, :nomb_ciu,
                   :nomb_clase, :tipo_material, :fecha_control,
                   :valor_material, :valor_desctos, :valor_otros, :valor_total,
                   :consecutivo, :ano_mes, :numero_caja, :color_caja, :estado
             from   nits n,ordenes_c o,ciudades c, clase cl
             where  n.codigo_nit in (select codigo_nit
                                     from   clientes
                                     where  clientes.codigo_cliente in
                                     (select codigo_cliente
                                      from ordenes_c
                                      where numero_orden = :orden))    and
                    n.codigo_ciu     = c.codigo                        and
                    o.clase_material = cl.clase_material               and
                    numero_orden     = :orden; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 18;
    sqlstm.stmt = "select numero_orden ,codigo_cliente ,n.nombre ,nvl(n.ciud\
ad_env,nvl(n.nombre_muni,c.nombre)) ,cl.nombre ,(o.diam_pedido||o.tipo_materia\
l) ,to_char(fecha_control,'DD-MON-YYYY hh:mi am') ,nvl(valor_material,0) ,nvl(\
valor_desctos,0) ,nvl(valor_otros,0) ,nvl(valor_total,0) ,o.consecutivo ,o.ano\
_mes ,o.numero_caja ,o.color_caja ,o.estado into :b0,:b1,:b2,:b3,:b4,:b5,:b6,:\
b7,:b8,:b9,:b10,:b11,:b12,:b13,:b14,:b15  from nits n ,ordenes_c o ,ciudades c\
 ,clase cl where (((n.codigo_nit in (select codigo_nit  from clientes where cl\
ientes.codigo_cliente in (select codigo_cliente  from ordenes_c where numero_o\
rden=:b16)) and n.codigo_ciu=c.codigo) and o.clase_material=cl.clase_material)\
 and numero_orden=:b16)";
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
    sqlstm.sqhstl[5] = (unsigned long  )6;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&fecha_control;
    sqlstm.sqhstl[6] = (unsigned long  )72;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&valor_material;
    sqlstm.sqhstl[7] = (unsigned long  )8;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&valor_desctos;
    sqlstm.sqhstl[8] = (unsigned long  )8;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&valor_otros;
    sqlstm.sqhstl[9] = (unsigned long  )8;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&valor_total;
    sqlstm.sqhstl[10] = (unsigned long  )8;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&consecutivo;
    sqlstm.sqhstl[11] = (unsigned long  )8;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&ano_mes;
    sqlstm.sqhstl[12] = (unsigned long  )8;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&numero_caja;
    sqlstm.sqhstl[13] = (unsigned long  )4;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&color_caja;
    sqlstm.sqhstl[14] = (unsigned long  )4;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&estado;
    sqlstm.sqhstl[15] = (unsigned long  )4;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&orden;
    sqlstm.sqhstl[16] = (unsigned long  )14;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&orden;
    sqlstm.sqhstl[17] = (unsigned long  )14;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqharm[17] = (unsigned long )0;
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
    tipo_material.arr  [tipo_material.len]  = '\0';
    fecha_control.arr  [fecha_control.len]  = '\0';
    color_caja.arr     [color_caja.len]     = '\0';
    estado.arr         [estado.len]         = '\0';

    sprintf(ano_mesa.arr,"%8.0f",ano_mes);
    ano_mesa.len     =   strlen(ano_mesa.arr);
    sprintf(consecutivoa.arr,"%5.0f",consecutivo);
    consecutivoa.len =   strlen(consecutivoa.arr);


    /* EXEC SQL DECLARE C2 CURSOR FOR
             select nvl(d.tipo_material, o.tipo_material),
                    d.diametro, d.curva_base, esfera,
                    cilindro, eje, cantidad, valor_venta, lado_lente,
                    costo_promedio_p
             from   ordenes_c o, ordenes_d d
             where  d.consecutivo = o.consecutivo  and
                    d.ano_mes     =  :ano_mesa     and
                    numero_orden  =  :orden; */ 


    /* EXEC SQL DECLARE C4 CURSOR FOR
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


    /* EXEC SQL select observacion, gabeta, factura,
                    to_char(fecha_cliente,'DD-MON-YYYY')
             into  :observacion, :gaveta, :pfactu,
                   :fecha_cliente
             from   ordenes_r
             where  numero_orden    = :orden; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 18;
    sqlstm.stmt = "select observacion ,gabeta ,factura ,to_char(fecha_client\
e,'DD-MON-YYYY') into :b0,:b1,:b2,:b3  from ordenes_r where numero_orden=:b4";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)114;
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
    sqlstm.sqhstv[3] = (unsigned char  *)&fecha_cliente;
    sqlstm.sqhstl[3] = (unsigned long  )72;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&orden;
    sqlstm.sqhstl[4] = (unsigned long  )14;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Ordenes_r C5(%d)\n", sqlca.sqlcode);

    observacion.arr    [observacion.len]    = '\0';
    fecha_cliente.arr  [fecha_cliente.len]  = '\0';

    /* EXEC SQL select count(*) into :tot_lin
             from   ordenes_d
             where  ano_mes       = :ano_mesa  and
                    consecutivo   = :consecutivoa; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 18;
    sqlstm.stmt = "select count(*)  into :b0  from ordenes_d where (ano_mes=\
:b1 and consecutivo=:b2)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)148;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&tot_lin;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
    sqlstm.sqhstl[1] = (unsigned long  )10;
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
        fprintf (stderr, "Error leyendo Ordenes_d C6(%d)\n", sqlca.sqlcode);

    /* EXEC SQL select count(*) into :tot_lin2
             from   ordenes_o
             where  ano_mes       = :ano_mesa  and
                    consecutivo   = :consecutivoa; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 18;
    sqlstm.stmt = "select count(*)  into :b0  from ordenes_o where (ano_mes=\
:b1 and consecutivo=:b2)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)174;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&tot_lin2;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
    sqlstm.sqhstl[1] = (unsigned long  )10;
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
        fprintf (stderr, "Error leyendo Ordenes_o C7(%d)\n", sqlca.sqlcode);

/***************************************/

    /* EXEC SQL DECLARE C8 CURSOR FOR
             select inf
             from   infacu; */ 


    /* EXEC SQL OPEN C8; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 18;
    sqlstm.stmt = sq0008;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)200;
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
          sqlstm.arrsiz = 18;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)214;
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
    sqlstm.arrsiz = 18;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)232;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



/***************************************/

    tot_pag=ceil((tot_lin+tot_lin2)/7);
    strcpy(fecha,fecha_control.arr);
    strorg(fecha,1,11);
    strcpy(hora,fecha_control.arr);
    strorg(hora,13,11);
//    fprintf (fp, "%s%s%c\r",line_feed6,set_vertical,22);
    fprintf(fp,"%s%s%c%s%c%c%s%c%c\r",line_feed6,diezcpi,27,"C",22,27,"B",17,0);
    titulos();

    /* EXEC SQL OPEN C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 18;
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)246;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&ano_mesa;
    sqlstm.sqhstl[0] = (unsigned long  )10;
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


    staora  = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C2 INTO :d_tipo_material, :diametro, :curva_base,
                                 :esfera, :cilindro, :eje,
                                 :cantidad, :valor_venta, :lado_lente,
                                 :costo_promedio_p; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 18;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)268;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&d_tipo_material;
          sqlstm.sqhstl[0] = (unsigned long  )5;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&diametro;
          sqlstm.sqhstl[1] = (unsigned long  )4;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&curva_base;
          sqlstm.sqhstl[2] = (unsigned long  )7;
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
          sqlstm.sqhstv[6] = (unsigned char  *)&cantidad;
          sqlstm.sqhstl[6] = (unsigned long  )4;
          sqlstm.sqindv[6] = (         short *)0;
          sqlstm.sqharm[6] = (unsigned long )0;
          sqlstm.sqhstv[7] = (unsigned char  *)&valor_venta;
          sqlstm.sqhstl[7] = (unsigned long  )8;
          sqlstm.sqindv[7] = (         short *)0;
          sqlstm.sqharm[7] = (unsigned long )0;
          sqlstm.sqhstv[8] = (unsigned char  *)&lado_lente;
          sqlstm.sqhstl[8] = (unsigned long  )4;
          sqlstm.sqindv[8] = (         short *)0;
          sqlstm.sqharm[8] = (unsigned long )0;
          sqlstm.sqhstv[9] = (unsigned char  *)&costo_promedio_p;
          sqlstm.sqhstl[9] = (unsigned long  )8;
          sqlstm.sqindv[9] = (         short *)0;
          sqlstm.sqharm[9] = (unsigned long )0;
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

          d_tipo_material.arr [d_tipo_material.len] = '\0';
          curva_base.arr      [curva_base.len]      = '\0';
          lado_lente.arr      [lado_lente.len]      = '\0';

          ver_tipo_material();
          if (con_lin > 21)
              titulos();
          if (cantidad > 0) {
              fprintf (fp, "%s%s",diezcpi,condensado_on);
              fprintf (fp, "%-13s" ,nomb_clase.arr);
              fprintf (fp, "%-35s  " ,nombre_tipo);
              fprintf (fp, "%2.1f   " ,diametro);
              cb=0;
              if (strlen(curva_base.arr)) {
                 strcpy(cadena,curva_base.arr);
                 cb=atof(cadena);
                 cb=cb/10;
              }
              fprintf (fp, "%2.2f    " ,cb);
              fprintf (fp, "%6.2f%2s",esfera," ");
              if (!strcmp(tipo_material.arr,"S")) {
                  fprintf (fp, "%6.2f%3s  ",cilindro," ");
                  fprintf (fp, "%3d%19s  ",eje," ");
             }
             else fprintf (fp, "%36s"," ");
             fprintf (fp, "%8d  "   ,cantidad);
             sprintf (cadena, "%7.0f",cantidad*valor_venta);
             costo_venta+=cantidad*costo_promedio_p;
             fmtnum("z,zzz,zz9",cadena,r_t);
             fprintf (fp, "%s%s%12s\n",condensado_off,elite,r_t);
             con_lin++;
          }
    }

    totales();

    Rx_procesor();
    fprintf(fp,"%c\r",11);
/*    con_lin = 17;
    for (i=1;i<22-con_lin;i++)
        fprintf(fp,"\n");
*/
    cierre_impresora();

    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 18;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)322;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL CLOSE C4; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 18;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)336;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}




    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 18;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)350;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    exit   (0);
}

void ver_tipo_material()
{
 if (strcmp(tipo_material.arr,"V")) {
     if (strcmp(tipo_material.arr,"C")) {
        if (strcmp(tipo_material.arr,"O"))
           if (strcmp(tipo_material.arr,"D"))
              strcpy(tipo_mat.arr,tipo_material.arr);
           else strcpy(tipo_mat.arr,d_tipo_material.arr);
        else strcpy(tipo_mat.arr,d_tipo_material.arr);
     }
     else strcpy(tipo_mat.arr,tipo_material.arr);
 }
 else strcpy(tipo_mat.arr,tipo_material.arr);
 tipo_mat.len  = strlen(tipo_mat.arr);

 /* EXEC SQL select nombre, clase_material
          into  :nomb_tipo, :clase_material
          from   tipos
          where  tipo_material  = :tipo_mat; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 18;
 sqlstm.stmt = "select nombre ,clase_material into :b0,:b1  from tipos where\
 tipo_material=:b2";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)364;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_tipo;
 sqlstm.sqhstl[0] = (unsigned long  )28;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&clase_material;
 sqlstm.sqhstl[1] = (unsigned long  )4;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&tipo_mat;
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


 oraest  = sqlca.sqlcode;
 if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Tipos C3 (%d)\n", sqlca.sqlcode);

 nomb_tipo.arr      [nomb_tipo.len]      = '\0';
 clase_material.arr [clase_material.len] = '\0';
 strcpy(nombre_tipo,nomb_tipo.arr);
}


void leer_servicios()
{
 tipo_servicio.len = strlen(tipo_servicio.arr);
 /* EXEC SQL OPEN C4; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 18;
 sqlstm.stmt = sq0004;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)390;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&consecutivoa;
 sqlstm.sqhstl[0] = (unsigned long  )10;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
 sqlstm.sqhstl[1] = (unsigned long  )10;
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



 /* EXEC SQL FETCH C4 INTO :nomb_servicio, :cantidad_srv, :valor_servicio; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 18;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)420;
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

void imprimo_servicios()
{
 while (!oraest) {
       nomb_servicio.arr [nomb_servicio.len] = '\0';
       subtotal+=valor_servicio;
       sprintf (cadena,"%6d",cantidad_srv);
       fprintf (fp,"%32s%25s%26s"," ",nomb_servicio.arr,fmtnum("zzz,zz9",cadena,r_t));
       sprintf (cadena,"%6.2f",valor_servicio);
       fprintf (fp,"%13s\n",fmtnum("zz,zzz,zz9",cadena,r_t));
       con_lin++;
       /* EXEC SQL FETCH C4 INTO :nomb_servicio, :cantidad_srv, :valor_servicio; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 18;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)446;
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
* TOTALES()
*    Imprime totales en el archivo de spool.
*/


void totales()
{
/*    int rc; */
    fprintf (fp,"%s\r",elite);
    if (strcmp (lado_lente.arr,"S")) {
       if (valor_material != valor_total) {
           if (con_lin > 18)
               titulos();
           sprintf (cadena,"%6.2f",valor_material);
           fprintf (fp,"%s%s%57s%s%39s\n",condensado_off,enfatizado_on,"VALOR MATERIAL : .........................",enfatizado_off,fmtnum("$$$,$$9",cadena,r_t));
           con_lin++;
       }
    }
    subtotal = valor_material;

    strcpy(tipo_servicio.arr,"OT");
    leer_servicios();
    if (!oraest) {
       if (con_lin > 18)
          titulos();
       fprintf (fp,"%s%32s%s\r",enfatizado_on,"OTROS : ",enfatizado_off);
       imprimo_servicios();
    }
    if (subtotal != valor_total) {
       if (con_lin > 18)
          titulos();
       sprintf (cadena,"%6.2f",subtotal);
       fprintf (fp,"%s%32s%s%64s\n",enfatizado_on,"SUBTOTAL ",enfatizado_off,fmtnum("z,zzz,zz9",cadena,r_t));
       con_lin++;
    }
    if (valor_desctos > 0) {
       if (con_lin > 18)
           titulos();
       sprintf (cadena,"%6.2f",valor_desctos);
       fprintf (fp,"%s%32s%s%51s\n",enfatizado_on,"DESCUENTOS ",enfatizado_off,fmtnum("zzz,zz9",cadena,r_t));
       con_lin++;
    }
//    for (i=1;i<18-con_lin;i++)
//         fprintf(fp,"\n");
//    sprintf (cadena,"%6.2f",valor_total);
    if (con_lin <= 16)
       fprintf(fp,"%c\r",11);
    sprintf (cadena,"%6.2f",valor_total);
    fprintf (fp,"%s%s%51s%s%45s%s\n",condensado_off,enfatizado_on," ",enfatizado_off,fmtnum("$$$,$$$,$$9",cadena,r_t),diezcpi);
    con_lin++;
    con_pag=0;
    fprintf (fp,"\n");
    fprintf (fp,"%s%s%s\r",condensado_on,"Importado por LABOCOSTA S.A., Registro sanitario No. INVIMA 2009 DM-0003426",condensado_off);
//    fprintf (fp,"%s\r",condensado_off);
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

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
  for (i=0;i<22-con_lin;i++)
       fprintf(fp,"\n");
  con_pag++;
  strcpy(cadena,fecha);
  numero_fecha(cadena);
  fprintf (fp,"%s%s%s%s%34s%6.0f%s%s%s\n\n",condensado_off,diezcpi,enfatizado_on,ancho_on,alto_on,numero_orden,ancho_off,alto_off,enfatizado_off);
  fprintf (fp,"%34s\n%40s%5.0f%s  %s%s%5.0f%s%s%s%s %s%s %s\n",codigo_cliente.arr," ",consecutivo,elite,ancho_on,enfatizado_on,numero_caja,"-",color_caja.arr,ancho_off,diezcpi,cadena,enfatizado_off,hora);
//  fprintf (fp,"%s\n%40s%5.0f%s  %s%s%5.0f%s%s%s%s %s%s %s\n",codigo_cliente.arr," ",consecutivo,elite,ancho_on,enfatizado_on,numero_caja,"-",color_caja.arr,ancho_off,diezcpi,cadena,enfatizado_off,hora);
  fprintf (fp,"%s%s%s\n",elite,enfatizado_on,nomb_clie.arr);
  fprintf (fp,"%-49s%-39s%s%02d    %02.0f\n\n",nomb_ciu.arr,"CONTACTO",enfatizado_off,con_pag,tot_pag);
  fprintf (fp,"%53s%11s\n"," ","Fec.Cliente");
  sprintf(cadena,"%6.0f",pfactu);
  fmtnum("zzzzzz",cadena,r_t);
  fprintf (fp,"%12s",cadena);
  sprintf(cadena,"%6.0f",gaveta);
  fmtnum("zzzzzz",cadena,r_t);
  fprintf (fp,"%14s %-26s%11s\n\n",cadena,observacion.arr,fecha_cliente.arr);
  con_lin = 10;
  if (!strcmp(estado.arr,"R")) {
      fprintf (fp,"%30s%s%s\n",ancho_on,"**** A N U L A D A ****",ancho_off);
      con_lin++;
  }
}

void hacer_asiento()
{

  strcpy(fuenteb.arr,"18");
  fuenteb.len = strlen(fuenteb.arr);

  strcpy(comprobanteb.arr,orden.arr);
  comprobanteb.len = strlen(comprobanteb.arr);

  strcpy(fechab.arr,fecha);
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
  sqlstm.arrsiz = 18;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3))";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)472;
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
  sqlstm.sqhstl[2] = (unsigned long  )10;
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
  sqlstm.arrsiz = 18;
  sqlstm.stmt = "select c.consecutivo ,max(secuencia) into :b0,:b1  from mov\
to_d d ,movto_c c where ((((((((c.codigo_emp=to_number(:b2) and c.codigo_emp=d\
.codigo_emp) and c.ano_mes=d.ano_mes) and c.consecutivo=d.consecutivo) and c.c\
omprobante=to_number(:b3)) and c.clase='CV') and c.tipo=9) and c.ano_mes=to_nu\
mber(:b4)) and c.estado<>'2') group by c.consecutivo";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)502;
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
  sqlstm.sqhstl[3] = (unsigned long  )9;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&ano_mesa;
  sqlstm.sqhstl[4] = (unsigned long  )10;
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

//  printf("2) fuenteb<%s> ano_mesa<%s> codigo_emp<%s>",fuenteb.arr,ano_mesa.arr,codigo_emp.arr); getchar();
       /* EXEC SQL select consecutivo+1 into :consecutivo
                from control_mes
                where fuente       = to_number(:fuenteb)       and
                      ano_mes      = to_number(:ano_mesa)      and
                      codigo_emp   = to_number(:codigo_emp)
                for update of consecutivo; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 18;
       sqlstm.stmt = "select (consecutivo+1) into :b0  from control_mes wher\
e ((fuente=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number\
(:b3)) for update of consecutivo ";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)536;
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
       sqlstm.sqhstl[2] = (unsigned long  )10;
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
                    (FUENTE,ANO_MES,NOMBRE,CONSECUTIVO,CODIGO_EMP,VERSION)
                    values (:fuenteb, :ano_mesa, 'CONTROL SALIDAS CREDITO',
                            :consecutivob, :codigo_emp,1); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 18;
           sqlstm.stmt = "insert into control_mes(FUENTE,ANO_MES,NOMBRE,CONS\
ECUTIVO,CODIGO_EMP,VERSION) values (:b0,:b1,'CONTROL SALIDAS CREDITO',:b2,:b3,\
1)";
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)566;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&fuenteb;
           sqlstm.sqhstl[0] = (unsigned long  )5;
           sqlstm.sqindv[0] = (         short *)0;
           sqlstm.sqharm[0] = (unsigned long )0;
           sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
           sqlstm.sqhstl[1] = (unsigned long  )10;
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
             sqlstm.arrsiz = 18;
             sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((\
codigo_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3)";
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)596;
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
             sqlstm.sqhstl[2] = (unsigned long  )10;
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

       strcpy(fuenteb.arr,"18");
       fuenteb.len = strlen(fuenteb.arr);

       /* EXEC SQL select consecutivo   into :consecutivo15
                from control_mes
                where fuente       = to_number(:fuenteb)       and
                      ano_mes      = to_number(:ano_mesa)      and
                      codigo_emp   = to_number(:codigo_emp)
                for update of consecutivo; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 18;
       sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((\
fuente=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3\
)) for update of consecutivo ";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)626;
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
       sqlstm.sqhstl[2] = (unsigned long  )10;
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
           fprintf (stderr, "Error leyendo Control_Mes 18 (%d)\n", sqlca.sqlcode);
                    /* Inserta en Control_Mes Fte 15 si no existe (C11) */
           /* EXEC SQL insert into control_mes
                    (FUENTE,ANO_MES,NOMBRE,CONSECUTIVO,CODIGO_EMP,VERSION)
                    values (:fuenteb, :ano_mesa, 'CONTROL SALIDAS CREDITO',
                            :consecutivob, :codigo_emp,1); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 18;
           sqlstm.stmt = "insert into control_mes(FUENTE,ANO_MES,NOMBRE,CONS\
ECUTIVO,CODIGO_EMP,VERSION) values (:b0,:b1,'CONTROL SALIDAS CREDITO',:b2,:b3,\
1)";
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)656;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&fuenteb;
           sqlstm.sqhstl[0] = (unsigned long  )5;
           sqlstm.sqindv[0] = (         short *)0;
           sqlstm.sqharm[0] = (unsigned long )0;
           sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
           sqlstm.sqhstl[1] = (unsigned long  )10;
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
             sqlstm.arrsiz = 18;
             sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((\
codigo_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3)";
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)686;
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
             sqlstm.sqhstl[2] = (unsigned long  )10;
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
       (CODIGO_EMP, ANO_MES, COMPROBANTE, CONSECUTIVO, CLASE, DESCRIPCION, FECHA, TIPO,
	ESTADO, NITB, CODIGO_NITB, VALORB, RETENCION, CONTADO )
                values(:codigo_emp, :ano_mesa, :comprobanteb, :consecutivob, 'CV',
                       'LENTES DE CONTACTO',:fechab,'9', '0','','','','',''); */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 18;
       sqlstm.stmt = "insert into movto_c(CODIGO_EMP,ANO_MES,COMPROBANTE,CON\
SECUTIVO,CLASE,DESCRIPCION,FECHA,TIPO,ESTADO,NITB,CODIGO_NITB,VALORB,RETENCION\
,CONTADO) values (:b0,:b1,:b2,:b3,'CV','LENTES DE CONTACTO',:b4,'9','0','','',\
'','','')";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)716;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
       sqlstm.sqhstl[0] = (unsigned long  )7;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
       sqlstm.sqhstl[1] = (unsigned long  )10;
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

/* 1) Grabar Ventas de lentes de contacto ( Debito ) */

  if ( costo_venta > 0 ) {
     secuencia++;
     sprintf(secuenciab.arr,"%6.0f",secuencia);
     secuenciab.len = strlen(secuenciab.arr);

     strcpy(cuentab.arr,"61359502");
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
                                         /* Graba en movto_d el Debito (C4) */
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
     sqlstm.arrsiz = 18;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)750;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
     sqlstm.sqhstl[0] = (unsigned long  )7;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
     sqlstm.sqhstl[1] = (unsigned long  )10;
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
         fprintf (stderr, "Error Grabando Debito (%d)\n", sqlca.sqlcode);
  }

/* 2) Grabar Inventario de lentes de contacto ( Credito ) */

  if ( costo_venta > 0 ) {
     secuencia++;
     sprintf(secuenciab.arr,"%6.0f",secuencia);
     secuenciab.len = strlen(secuenciab.arr);

     strcpy(cuentab.arr,"14350220");
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
     sqlstm.arrsiz = 18;
     sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUE\
NCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_CO\
S) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)812;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
     sqlstm.sqhstl[0] = (unsigned long  )7;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
     sqlstm.sqhstl[1] = (unsigned long  )10;
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
         fprintf (stderr, "Error Grabando Debito (%d)\n", sqlca.sqlcode);
  }

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
    sqlstm.arrsiz = 18;
    sqlstm.stmt = "select max(secuencia) into :b0  from movto_d d ,movto_c c\
 where ((((((((c.codigo_emp=to_number(:b1) and c.codigo_emp=d.codigo_emp) and \
c.ano_mes=d.ano_mes) and c.consecutivo=d.consecutivo) and c.comprobante=to_num\
ber(:b2)) and c.clase='CV') and c.tipo=9) and c.ano_mes=to_number(:b3)) and c.\
estado<>'2')";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)874;
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
    sqlstm.sqhstl[2] = (unsigned long  )9;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&ano_mesa;
    sqlstm.sqhstl[3] = (unsigned long  )10;
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
      sqlstm.arrsiz = 18;
      sqlstm.stmt = sq0023;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)904;
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


      /* EXEC SQL FETCH C9 INTO :consecutivo,  :cuentab,
                             :infa, :infb,  :infc, :infd,
                             :codigo_nit,   :valor; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 18;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)930;
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
              /* EXEC SQL insert into movto_d
      		(CODIGO_EMP, ANO_MES,CONSECUTIVO,SECUENCIA,CUENTA,
		 INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,CEN_COS)
                       values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                              :cuentab, :infa, :infb, :infc, :infd,
                              :codigo_nitb, :valor_debb, :valor_creb, '001', 1); */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 8;
              sqlstm.arrsiz = 18;
              sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUT\
IVO,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURS\
AL,CEN_COS) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,'001',1)";
              sqlstm.iters = (unsigned long  )1;
              sqlstm.offset = (unsigned short)976;
              sqlstm.cud = sqlcud0;
              sqlstm.sqlest = (unsigned char  *)&sqlca;
              sqlstm.sqlety = (unsigned short)0;
              sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
              sqlstm.sqhstl[0] = (unsigned long  )7;
              sqlstm.sqindv[0] = (         short *)0;
              sqlstm.sqharm[0] = (unsigned long )0;
              sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
              sqlstm.sqhstl[1] = (unsigned long  )10;
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
           sqlstm.arrsiz = 18;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)1038;
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
  sqlstm.arrsiz = 18;
  sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b3  from pl\
an where (codigo_emp=:b4 and cuenta=:b5)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)1084;
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

