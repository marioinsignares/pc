
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
    ".\\resuvenz.pc"
};


static const unsigned long sqlctx = 1259628525;


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
   unsigned char    *sqhstv[9];
   unsigned long    sqhstl[9];
	    short   *sqindv[9];
   unsigned long    sqharm[9];
   unsigned long     *sqharc[9];
} sqlstm = {8,9};

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

 static const char *sq0002 = 
"select v.nombre ,z.nombre ,o.codigo_cliente ,o.consecutivo ,o.numero_orden ,\
o.clase_material ,nvl(o.valor_total,0) ,nvl(e.tipo_cliente,'0') ,contado  from\
 ordenes_c o ,clientese e ,vendedores v ,zonas z ,departamentos d ,ciudades c \
where (((((((((((o.codigo_cliente=e.codigo_cliente(+) and :b0=e.numero_quincen\
a(+)) and o.codigo_cliente>=:b1) and o.codigo_cliente<=:b2) and substr(o.codig\
o_cliente,1,2)=c.codigo) and c.vendedor=v.codigo) and c.dpto=d.codigo) and d.z\
onas=z.codigo) and  not exists (select 'x'  from opticasp where codigo_cliente\
=o.codigo_cliente)) and nvl(o.estado,0)<>'R') and o.fecha_documento>=:b3) and \
o.fecha_documento<=:b4) group by v.nombre,z.nombre,o.codigo_cliente,o.consecut\
ivo,o.numero_orden,o.clase_material,o.valor_total,e.tipo_cliente,contado order\
 by v.nombre,z.nombre,o.codigo_cliente            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,188,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,3,786,0,4,236,0,9,1,0,1,0,2,4,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,9,0,
0,2,4,0,0,2,4,0,0,1,9,0,0,
78,0,0,2,828,0,9,283,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
112,0,0,2,0,0,13,287,0,9,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,
0,2,4,0,0,2,9,0,0,2,9,0,0,
162,0,0,2,0,0,15,368,0,0,0,0,1,0,
176,0,0,5,0,0,30,370,0,0,0,0,1,0,
190,0,0,6,54,0,4,513,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
212,0,0,7,128,0,4,605,0,3,2,0,1,0,2,3,0,0,1,9,0,0,1,9,0,0,
238,0,0,8,126,0,4,612,0,3,2,0,1,0,2,3,0,0,1,9,0,0,1,9,0,0,
264,0,0,9,131,0,4,625,0,5,3,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
298,0,0,10,183,0,4,649,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
328,0,0,11,326,0,4,677,0,6,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,1,9,
0,0,
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
void titulo_vendedor();
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

/* VARCHAR numero_quincena[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } numero_quincena;

/* VARCHAR cliente_ini    [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cliente_ini;

/* VARCHAR cliente_fin    [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cliente_fin;

/* VARCHAR clase_docu     [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } clase_docu;

                                 /* Fletes (C2) */
double  fletes;
/* VARCHAR cantidad_envios[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cantidad_envios;

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

/* VARCHAR nombrev        [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nombrev;

/* VARCHAR nombrez        [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nombrez;

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

char    cadena[200];
char    wciu2[10];
char    wnombrev[60];
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
struct acu vect[3];
int     pasan=0;
float   c;
char    division[2];
char    n[60];
char    n1[60];
char    n2[60];
char    formas[5];
int     oraest;
int     oraest4;

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
    abre_impresora(copias);

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/

  /* EXEC SQL DECLARE C1 CURSOR FOR
        select v.nombre, z.nombre, o.codigo_cliente,
               o.consecutivo, o.numero_orden,
               o.clase_material, nvl(o.valor_total,0),
               nvl(e.tipo_cliente,'0'), contado
	from ordenes_c o, clientese e, vendedores v, zonas z, departamentos d, ciudades c
        where o.codigo_cliente   = e.codigo_cliente(+)              and
               :numero_quincena  = e.numero_quincena(+)             and
              o.codigo_cliente  >=  :cliente_ini                    and
              o.codigo_cliente  <=  :cliente_fin                    and
              substr(o.codigo_cliente,1,2) = c.codigo               and
              c.vendedor         = v.codigo                         and
              c.dpto             = d.codigo                         and
              d.zonas            = z.codigo                         and
              not exists (select 'x' from opticasp
                          where codigo_cliente = o.codigo_cliente)  and
              nvl(o.estado,0)   <> 'R'                              and
              o.fecha_documento >=  :fecha_inicial                  and
              o.fecha_documento <=  :corte
        group by v.nombre, z.nombre, o.codigo_cliente, o.consecutivo, o.numero_orden,
                 o.clase_material, o.valor_total, e.tipo_cliente, contado
        order by v.nombre, z.nombre, o.codigo_cliente; */ 


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

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 9;
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
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)28;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&ultimo_numero;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
  sqlstm.sqhstl[1] = (unsigned long  )12;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&ptaje_iva;
  sqlstm.sqhstl[2] = (unsigned long  )4;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&vencimiento;
  sqlstm.sqhstl[3] = (unsigned long  )8;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&fecha_inicial;
  sqlstm.sqhstl[4] = (unsigned long  )22;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&corte;
  sqlstm.sqhstl[5] = (unsigned long  )22;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqhstv[6] = (unsigned char  *)&retefte;
  sqlstm.sqhstl[6] = (unsigned long  )8;
  sqlstm.sqindv[6] = (         short *)0;
  sqlstm.sqharm[6] = (unsigned long )0;
  sqlstm.sqhstv[7] = (unsigned char  *)&monto_retefte;
  sqlstm.sqhstl[7] = (unsigned long  )8;
  sqlstm.sqindv[7] = (         short *)0;
  sqlstm.sqharm[7] = (unsigned long )0;
  sqlstm.sqhstv[8] = (unsigned char  *)&codigo_emp;
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




  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
      fprintf (stderr, "Error leyendo C1 (%d)\n", sqlca.sqlcode);

  ano_mes.arr       [ano_mes.len]       = '\0';
  fecha_inicial.arr [fecha_inicial.len] = '\0';
  corte.arr         [corte.len]         = '\0';
  ano_mes.len       = strlen(ano_mes.arr);
  fecha_inicial.len = strlen(fecha_inicial.arr);
  corte.len         = strlen(corte.arr);

/* C6 */
 /* EXEC SQL DECLARE C6 CURSOR FOR
        select to_number(decode(si_no,'S','1','N','0','1'))
        from  fletescob
        where codigo_cli_may >= :wcod and
              codigo_cli_men <= :wcod; */ 


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

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 9;
  sqlstm.stmt = sq0002;
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)78;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&numero_quincena;
  sqlstm.sqhstl[0] = (unsigned long  )7;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&cliente_ini;
  sqlstm.sqhstl[1] = (unsigned long  )12;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&cliente_fin;
  sqlstm.sqhstl[2] = (unsigned long  )12;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&fecha_inicial;
  sqlstm.sqhstl[3] = (unsigned long  )22;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&corte;
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


  pasan  = 0;
  staora = 0;
  while (staora == 0) {
         /* EXEC SQL FETCH C1 INTO :nombrev, :nombrez, :codigo_cliente, :consecutivo, :numero_orden,
                                :clase_material, :valor_total, :tipo_cliente, :contado; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 8;
         sqlstm.arrsiz = 9;
         sqlstm.iters = (unsigned long  )1;
         sqlstm.offset = (unsigned short)112;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)0;
         sqlstm.sqhstv[0] = (unsigned char  *)&nombrev;
         sqlstm.sqhstl[0] = (unsigned long  )62;
         sqlstm.sqindv[0] = (         short *)0;
         sqlstm.sqharm[0] = (unsigned long )0;
         sqlstm.sqhstv[1] = (unsigned char  *)&nombrez;
         sqlstm.sqhstl[1] = (unsigned long  )62;
         sqlstm.sqindv[1] = (         short *)0;
         sqlstm.sqharm[1] = (unsigned long )0;
         sqlstm.sqhstv[2] = (unsigned char  *)&codigo_cliente;
         sqlstm.sqhstl[2] = (unsigned long  )12;
         sqlstm.sqindv[2] = (         short *)0;
         sqlstm.sqharm[2] = (unsigned long )0;
         sqlstm.sqhstv[3] = (unsigned char  *)&consecutivo;
         sqlstm.sqhstl[3] = (unsigned long  )8;
         sqlstm.sqindv[3] = (         short *)0;
         sqlstm.sqharm[3] = (unsigned long )0;
         sqlstm.sqhstv[4] = (unsigned char  *)&numero_orden;
         sqlstm.sqhstl[4] = (unsigned long  )8;
         sqlstm.sqindv[4] = (         short *)0;
         sqlstm.sqharm[4] = (unsigned long )0;
         sqlstm.sqhstv[5] = (unsigned char  *)&clase_material;
         sqlstm.sqhstl[5] = (unsigned long  )7;
         sqlstm.sqindv[5] = (         short *)0;
         sqlstm.sqharm[5] = (unsigned long )0;
         sqlstm.sqhstv[6] = (unsigned char  *)&valor_total;
         sqlstm.sqhstl[6] = (unsigned long  )8;
         sqlstm.sqindv[6] = (         short *)0;
         sqlstm.sqharm[6] = (unsigned long )0;
         sqlstm.sqhstv[7] = (unsigned char  *)&tipo_cliente;
         sqlstm.sqhstl[7] = (unsigned long  )5;
         sqlstm.sqindv[7] = (         short *)0;
         sqlstm.sqharm[7] = (unsigned long )0;
         sqlstm.sqhstv[8] = (unsigned char  *)&contado;
         sqlstm.sqhstl[8] = (unsigned long  )5;
         sqlstm.sqindv[8] = (         short *)0;
         sqlstm.sqharm[8] = (unsigned long )0;
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
                  fprintf (stderr, "Error leyendo C1 (%d)\n", staora);

         nombrev.arr        [nombrev.len]        = '\0';
         nombrez.arr        [nombrez.len]        = '\0';
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
             strcpy(wnombrev,nombrev.arr);
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

                 if (strcmp(wnombrev,nombrev.arr))
                    {
                     sprintf(cadena,"%s","TOTAL ASESOR");
                     totaliza(1);
                     strcpy(wnombrev,nombrev.arr);
                     titulos();
                    }

                 titulo_ciudad();
                }
            }
         if (!strcmp(clase_material.arr,"C"))
            {
             strcpy(division,"2");
             sub_total_o+=valor_total;
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
  sprintf(cadena,"%s","TOTAL ASESOR");
  totaliza(1);
  strcpy(wnombrev,nombrev.arr);
  strcpy(cadena,"TOTALES GENERALES");
  totaliza(2);
  total_fletes();

  cierre_impresora();

  /* EXEC SQL CLOSE C1; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 9;
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)162;
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
  sqlstm.offset = (unsigned short)176;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
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

 if(!strcmp(wcontado,"1")) {
    if (sub_total_o > 0) {
        sub_total_o-=fletes;
    }
    else {
           sub_total_c-=fletes;
    }
 }
 sub_total=sub_total_o+sub_total_c;
 impue=0;
 if(!strcmp(wtipo_cliente,"0"))
    impue=((sub_total+fletes)*ptaje_iva)/100;
 impue=redondo(impue);
 base_gravable = sub_total+fletes;
 datos_cliente();
// printf("%s %s %s %9.0f %9.0f",wcontado,tipo_cliente.arr,clase_docu.arr, base_gravable, monto_retefte); getchar();
 if(strcmp(wcontado,"1")) {
    if(!strcmp(wtipo_cliente,"0")) {
       rete_fte = 0;
       if (!strcmp(clase_docu.arr,"N")) {
          if (base_gravable >= monto_retefte) {
              rete_fte = base_gravable*retefte/100;
              rete_fte = redondo( rete_fte );
          }
       }
    }
 }
 costo_factura=base_gravable+impue-rete_fte; //Total factura

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
 for (i=0;i<=2;++i)
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

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 9;
 sqlstm.stmt = "select nombre into :b0  from ciudades where codigo=:b1";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)190;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_ciudad;
 sqlstm.sqhstl[0] = (unsigned long  )32;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&wciu;
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



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo C7 (%d)\n", sqlca.sqlcode);

 nomb_ciudad.arr   [nomb_ciudad.len] = '\0';
 fprintf(fp,"\n%s%16s%s%s%s%s\n\n",enfatizado_on,ancho_on,"CIUDAD ",nomb_ciudad.arr,ancho_off,enfatizado_off);
 con_lin+=3;
}

void titulo_vendedor()
{
 fprintf(fp,"\n%s%16s%s%s%s%s\n\n",enfatizado_on,ancho_on,"ASESOR ",wnombrev,ancho_off,enfatizado_off);
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
 fprintf(fp,"%s%s%s%44s",diezcpi,condensado_on,ancho_on,"RESUMEN DE VENTAS POR ZONAS");
 fprintf(fp,"%s%s%17s %d\n\n",ancho_off,diezcpi,"PAGINA ",con_pag);
 strorg(fechas,1,strlen(fechas));
 fprintf(fp,"%s%62s%s\n\n",enfatizado_on,fechas,enfatizado_off);
 fprintf(fp,"%s%40s",condensado_on,"C L I E N T E / O P T I C A");
 fprintf(fp,"%46s\n","DIVISION OFTALMICA    DIVISION DE CONTACTO");
 fprintf(fp,"%s%156s\n",enfatizado_on,"NUMERO VALOR ORDENES  NUMERO VALOR ORDENES     NUMERO   VALOR DESPACHOS    IMPOVENTAS    RETE  VALOR FACTURACION");
 fprintf(fp,"%s%110s     %2.0f %%%14s%s%s\n\n","CODIGO","ORDENES  VENTA NETA   ORDENES VENTA NETA     DESPACHOS FLETES Y EMPAQUES",ptaje_iva,"  FUENTE  ","TOTAL VENTA",enfatizado_off);
 titulo_vendedor();
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

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 9;
 sqlstm.stmt = "select to_number(decode(si_no,'S','1','N','0','1')) into :b0\
  from fletescob where (codigo_cli_may>=:b1 and codigo_cli_men<=:b1)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)212;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&cob_fletes;
 sqlstm.sqhstl[0] = (unsigned long  )4;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&wcod;
 sqlstm.sqhstl[1] = (unsigned long  )12;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&wcod;
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



 if (sqlca.sqlcode == -2112) {
     /* EXEC SQL select to_number(decode(si_no,'S','1','N','0','1'))
              into :cob_fletes
              from  fletescob
              where codigo_cli_may = :wcod and
                    codigo_cli_men = :wcod; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 9;
     sqlstm.stmt = "select to_number(decode(si_no,'S','1','N','0','1')) into\
 :b0  from fletescob where (codigo_cli_may=:b1 and codigo_cli_men=:b1)";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)238;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&cob_fletes;
     sqlstm.sqhstl[0] = (unsigned long  )4;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&wcod;
     sqlstm.sqhstl[1] = (unsigned long  )12;
     sqlstm.sqindv[1] = (         short *)0;
     sqlstm.sqharm[1] = (unsigned long )0;
     sqlstm.sqhstv[2] = (unsigned char  *)&wcod;
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

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 9;
 sqlstm.stmt = "select nvl(cantidad,0) ,nvl(valor,0) into :b0,:b1  from envi\
os where ((codigo_cliente=:b2 and ano_mes=:b3) and numero_quincena=:b4)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)264;
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
 sqlstm.sqhstv[3] = (unsigned char  *)&ano_mes;
 sqlstm.sqhstl[3] = (unsigned long  )12;
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



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo C3 (%d)\n", sqlca.sqlcode);

 if (sqlca.sqlcode == 1403)
     valor_env=-1;

 if (valor_env == 0)
    {
     nro_ordenes=nro_ordenes_c+nro_ordenes_o;
     c=nro_ordenes/nro_despachos;
     sprintf(cantidad_envios.arr,"%2.2f",c);
     cantidad_envios.len = strlen(cantidad_envios.arr);

/*
     cantidad_envios.arr[strpos(".",cantidad_envios.arr)-1] = ',';
*/

     /* EXEC SQL select nvl(valor,0) into :fletes
              from  fletes
              where cantidad_mayor >= to_number(:cantidad_envios) and
                    cantidad_menor <= to_number(:cantidad_envios) and
                    fecha           = (select max(f.fecha)
                                       from   fletes f
                                       where  f.fecha <= :corte); */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 9;
     sqlstm.stmt = "select nvl(valor,0) into :b0  from fletes where ((cantid\
ad_mayor>=to_number(:b1) and cantidad_menor<=to_number(:b1)) and fecha=(select\
 max(f.fecha)  from fletes f where f.fecha<=:b3))";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)298;
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
     sqlstm.sqhstv[3] = (unsigned char  *)&corte;
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



     if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
         fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);
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

    /* EXEC SQL select n.nombre, c.nombre, n.direccion, max(nvl(t.numero,0)), n.clase_docu
             into :nomb_clie, :nomb_ciu, :direccion, :telefono, :clase_docu
             from nits n, clientes cl, telefonos t, ciudades c
             where n.codigo_nit     = cl.codigo_nit               and
                    :wcod           = cl.codigo_cliente           and
                   n.codigo_ciu     = c.codigo                    and
                   n.codigo_nit     = t.codigo_nit(+)
             group by n.nombre, c.nombre, n.direccion, n.clase_docu; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 9;
    sqlstm.stmt = "select n.nombre ,c.nombre ,n.direccion ,max(nvl(t.numero,\
0)) ,n.clase_docu into :b0,:b1,:b2,:b3,:b4  from nits n ,clientes cl ,telefono\
s t ,ciudades c where (((n.codigo_nit=cl.codigo_nit and :b5=cl.codigo_cliente)\
 and n.codigo_ciu=c.codigo) and n.codigo_nit=t.codigo_nit(+)) group by n.nombr\
e,c.nombre,n.direccion,n.clase_docu";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)328;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
    sqlstm.sqhstl[0] = (unsigned long  )62;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&nomb_ciu;
    sqlstm.sqhstl[1] = (unsigned long  )32;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&direccion;
    sqlstm.sqhstl[2] = (unsigned long  )62;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&telefono;
    sqlstm.sqhstl[3] = (unsigned long  )8;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&clase_docu;
    sqlstm.sqhstl[4] = (unsigned long  )7;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&wcod;
    sqlstm.sqhstl[5] = (unsigned long  )12;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
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
