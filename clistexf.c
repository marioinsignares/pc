
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
    ".\\clistexf.pc"
};


static const unsigned long sqlctx = 1152649272;


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
   unsigned char    *sqhstv[6];
   unsigned long    sqhstl[6];
	    short   *sqindv[6];
   unsigned long    sqharm[6];
   unsigned long     *sqharc[6];
} sqlstm = {8,6};

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
"select cl.codigo_cliente ,n.nombre ,nvl(n.nombre_muni,c.nombre) ,n.direccion\
 ,n.nit ,nvl(digito,(-1))  from clientes cl ,nits n ,ciudades c where ((((cl.c\
odigo_cliente>=:b0 and cl.codigo_cliente<=:b1) and cl.estado<>'R') and cl.codi\
go_nit=n.codigo_nit) and n.codigo_ciu=c.codigo) group by cl.codigo_cliente,n.n\
ombre,n.nombre_muni,c.nombre,n.direccion,n.nit,digito order by cl.codigo_clien\
te            ";
 static const char *sq0003 = 
"select to_char(fecha_documento,'yyyymmdd') ,to_char(fecha_vencmto,'yyyymmdd'\
) ,f.tipo_documento ,f.numero_factura ,valor_neto ,saldo  from facturam fm ,fa\
cturas f where (((((((((f.tipo_factura=:b0 and f.codigo_cliente=:b1) and f.fec\
ha_documento<=to_date(:b2,'YYYYMMDD')) and f.estado_factura=0) and f.valor_net\
o>0) and f.contado is null ) and fm.tipo_factura=f.tipo_factura) and fm.tipo_d\
ocumento=f.tipo_documento) and fm.numero_factura=f.numero_factura) and fm.ano_\
mes=(select max(ano_mes)  from facturam where ((((facturam.tipo_factura=:b0 an\
d facturam.tipo_documento=f.tipo_documento) and facturam.tipo_documento<>'C') \
and facturam.numero_factura=f.numero_factura) and facturam.ano_mes<=:b4))) ord\
er by fecha_documento            ";
 static const char *sq0004 = 
"select to_char(fecha,'yyyymmdd') ,nvl(numero,0) ,tipo_documento ,nvl(valor_c\
artera,0)  from ingresos_c where (((((codigo_emp=:b0 and codigo_cliente=:b1) a\
nd fecha>=to_date(:b2,'YYMMDD')) and fecha<=to_date(:b3,'YYMMDD')) and contado\
 is null ) and estado<>'2') order by fecha            ";
 static const char *sq0005 = 
"select numero  from telefonos ,clientes where (telefonos.codigo_nit=clientes\
.codigo_nit and codigo_cliente=:b0) order by orden            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,209,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,6,70,0,4,347,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
50,0,0,7,146,0,4,356,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
80,0,0,2,402,0,9,367,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
102,0,0,2,0,0,13,372,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,3,0,
0,
140,0,0,8,253,0,4,389,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
174,0,0,3,733,0,9,406,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
208,0,0,4,286,0,9,408,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
238,0,0,3,0,0,15,427,0,0,0,0,1,0,
252,0,0,4,0,0,15,428,0,0,0,0,1,0,
266,0,0,2,0,0,15,432,0,0,0,0,1,0,
280,0,0,5,0,0,15,433,0,0,0,0,1,0,
294,0,0,9,0,0,30,435,0,0,0,0,1,0,
308,0,0,10,243,0,4,442,0,5,4,0,1,0,2,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
342,0,0,11,199,0,4,455,0,5,4,0,1,0,2,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
376,0,0,3,0,0,13,492,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,
0,
414,0,0,4,0,0,13,508,0,4,0,0,1,0,2,9,0,0,2,4,0,0,2,9,0,0,2,4,0,0,
444,0,0,12,507,0,4,524,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
478,0,0,5,138,0,9,1120,0,1,1,0,1,0,1,9,0,0,
496,0,0,5,0,0,13,1123,0,1,0,0,1,0,2,4,0,0,
514,0,0,5,0,0,15,1142,0,0,0,0,1,0,
};



/*****************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - Sep. 26/91.
*
* clistexf.c Programa que imprime extractos formato 9 1/2 x 11
*
* Uso : clistexf codigo_emp fecha_corte fecha_movto cliente_ini cliente_fin
*       device   copias     userid/password
*
* Martin A. Toloza L. Creado Diciembre 19-1997.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//double ceil(double x);
void total_paginas();
void imprime();
void leo_factura();
void total_ordenes();
void titulos();
void titulos_pre();
void acum_facturas();
void imprime_factura();
void imprime_ingreso();
void imprime_factura_pre();
void imprime_ingreso_pre();
void calcula_dias();
void totales();
void totales_pre();
void borro_acumulados();
void telefonos();
void leo_ingreso();				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Clientes (C1) */
/* VARCHAR codigo_cliente[9]; */ 
struct { unsigned short len; unsigned char arr[9]; } codigo_cliente;

/* VARCHAR nomb_clie     [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nomb_clie;

/* VARCHAR nomb_ciu      [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } nomb_ciu;

/* VARCHAR direccion     [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } direccion;

double  nit_clie;
int     digito_clie;
/* VARCHAR cliente_ini   [9]; */ 
struct { unsigned short len; unsigned char arr[9]; } cliente_ini;

/* VARCHAR cliente_fin   [9]; */ 
struct { unsigned short len; unsigned char arr[9]; } cliente_fin;

                                 /* Facturas (C2) */
/* VARCHAR fecha_factura [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_factura;

/* VARCHAR fecha_vencmto [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_vencmto;

/* VARCHAR tipo_factura  [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } tipo_factura;

double  numero_factura;
double  valor_factura;
double  saldo_factura;
/* VARCHAR codigo_emp    [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR codigo_clie   [9]; */ 
struct { unsigned short len; unsigned char arr[9]; } codigo_clie;

/* VARCHAR fecha_cor     [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_cor;

/* VARCHAR ano_mes_c     [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } ano_mes_c;

                                 /* Ingresos_c (C3) */
/* VARCHAR fecha_ingreso [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_ingreso;

double  numero_ingreso;
/* VARCHAR tipo_ingreso  [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } tipo_ingreso;

double  valor_ingreso;
/* VARCHAR fecha_inicial [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_inicial;

                                 /* Empresas (C4) */
/* VARCHAR nomb_emp      [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nomb_emp;

double  nit_emp;
int     digito_emp;
int     a2k;
                                 /* Facturas (C5) */
int     tot_fac;
                                 /* Ingresos_c (C6) */
int     tot_ing;
                                 /* Clientem (C7) */
double  saldo_anterior;
/* VARCHAR ano_mes       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

                                 /* Telefonos (C8) */
double  telefono;
                                 /* Ordenes (C9) */
double  valor_ordenes;
/* VARCHAR nro_quinc     [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } nro_quinc;

                                 /* Control_fac (C10) */
int     numero_quincena;

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
char *fmtnum(), r_t[150];
int     con_pag= 0;                                 /* Contador de Paginas */
int     tot_pag= 0;
int     con_lin= 66;                                /* Contador de Lineas  */
int	staora = 0;
int	oraest = 0;
int	traidos= 0;
int     oraesti;
int     oraestf;

char    copias[5];
int     i;
int     w_ano_corte;
int     w_mes_corte;
int     w_dia_corte;
int     ano_corte;
int     mes_corte;
int     dia_corte;
int     ano_inicial;
int     mes_inicial;
int     dia_inicial;
int     ano_vencmto;
int     mes_vencmto;
int     dia_vencmto;
int     total_tiempo_ano;
int     total_tiempo_mes;
int     total_tiempo_dia;
int     total_dias;
char    cadena[250];
char    cadena2[40];
char    mensaje[80];
char    fecha_corte[20];
char    fecha_listado[150];
char    tit[150];
char    aviso[60];
char    formas[2];
char    linea_direccion[160];
char    nota[120];
int     a;
double  total_deuda;
double  por_vencer;
double  a_30_dias;
double  a_60_dias;
double  a_90_dias;
double  a_120_dias;
double  total_debitos;
double  total_creditos;
double  saldo_actual;
double  num;
int     pagina;
int     pasan;
char    ordenes[5];

void main(argc, argv)
int     argc;
char    *argv[];
{
 char	device[6];
 int	status = 0;

 strcpy(linea_direccion,"CRA 52 No 79-89  TELEFONO  3459300");
 strcat(linea_direccion,"  BARRANQUILLA - COLOMBIA");
 strful(cadena,(int)(96-strlen(linea_direccion))/2,' ');
 strcat(cadena,linea_direccion);
 strcpy(linea_direccion,cadena);

 strcpy(nota," Revise este extracto y conse\b'rvelo. Si\b'rva");
 strcat(nota,"se notificarnos por escrito su conformidad o reparos.");

 if (argc < 11)
    {
     printf ("Incorrecta invocacion:\n");
     printf ("Uso : clistexf codigo_emp fecha_inicial fecha_corte\n");
     printf ("cliente_ini cliente_fin\n");
     printf ("device copias formas(s/n) ordenes s/n userid/password\n");
     printf ("      device : t salida por terminal\n");
     printf ("               Px salida por impresora (x nro printer)\n");
     printf ("               userid/password nombre usuario y password\n");
     exit (1);
    }

 strcpy (codigo_emp.arr   , argv[1]);
 codigo_emp.len    =        strlen(codigo_emp.arr);
 strcpy (fecha_inicial.arr, argv[2]);
 fecha_inicial.len =        strlen(fecha_inicial.arr);
 strcpy (fecha_corte      , argv[3]);
 if ( strlen(fecha_corte) != 8 || strlen(fecha_inicial.arr) != 8 ) {
    printf("Error, la fecha debe ser de 8 digitos y formato AAAAMMDD");
    exit (1);
 }
 strcpy (fecha_cor.arr    , argv[3]);
 fecha_cor.len     =        strlen(fecha_cor.arr);
 strcpy (cliente_ini.arr  , argv[4]);
 cliente_ini.len   =        strlen(cliente_ini.arr);
 strcpy (cliente_fin.arr  , argv[5]);
 cliente_fin.len   =        strlen(cliente_fin.arr);
 strcpy (device       ,argv[6]);
 strlow (device);
 strcpy (copias       ,argv[7]);
 strcpy (formas       ,argv[8]);
 strlow (formas);
 strcpy (ordenes      ,argv[9]);
 strlow (ordenes);
 strorg (ordenes,1,1);

 if (!strpos ("/", argv[10]))
    {
     printf ("user id/password incorrecto.\n");
     exit (1);
    }

 strcpy (uid.arr,   argv[10]);
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

  strcpy (ano_mes.arr,fecha_inicial.arr);
  ano_mes.len = strlen(ano_mes.arr);
  strorg (ano_mes.arr,1,6);
  ano_mes.len = strlen(ano_mes.arr);

  strcpy (ano_mes_c.arr,fecha_corte);
  ano_mes_c.len     =        strlen(ano_mes_c.arr);
  strorg (ano_mes_c.arr,1,6);
  ano_mes_c.len     =        strlen(ano_mes_c.arr);

  /* EXEC SQL DECLARE C1 CURSOR FOR
           select cl.codigo_cliente, n.nombre, nvl(n.nombre_muni,c.nombre),
                  n.direccion, n.nit, nvl(digito,-1)
           from   clientes cl, nits n, ciudades c
           where  cl.codigo_cliente      >= :cliente_ini             and
                  cl.codigo_cliente      <= :cliente_fin             and
                  cl.estado              != 'R'                      and
                  cl.codigo_nit           = n.codigo_nit             and
                  n.codigo_ciu            = c.codigo
           group by cl.codigo_cliente, n.nombre, n.nombre_muni, c.nombre,
                     n.direccion, n.nit, digito
           order by cl.codigo_cliente; */ 


  /* EXEC SQL DECLARE C2 CURSOR FOR
           select to_char(fecha_documento,'yyyymmdd'),
                  to_char(fecha_vencmto,'yyyymmdd'),
                  f.tipo_documento, f.numero_factura, valor_neto, saldo
           from   facturam fm, facturas f
           where  f.tipo_factura     = :codigo_emp                    and
                  f.codigo_cliente   = :codigo_clie                   and
                  f.fecha_documento <= to_date(:fecha_cor,'YYYYMMDD') and
                  f.estado_factura   = 0                              and
                  f.valor_neto       > 0                              and
                  f.contado          is null                          and
                  fm.tipo_factura    = f.tipo_factura                 and
                  fm.tipo_documento  = f.tipo_documento               and
                  fm.numero_factura  = f.numero_factura               and
                  fm.ano_mes         =
                  (select max(ano_mes)
                   from   facturam
                   where  facturam.tipo_factura   =  :codigo_emp      and
                          facturam.tipo_documento = f.tipo_documento  and
                          facturam.tipo_documento <> 'C'              and
                          facturam.numero_factura = f.numero_factura  and
                          facturam.ano_mes       <=  :ano_mes_c)
           order by fecha_documento; */ 


    /* EXEC SQL DECLARE C3 CURSOR FOR
             select to_char(fecha,'yyyymmdd'),
                    nvl(numero,0), tipo_documento, nvl(valor_cartera,0)
             from   ingresos_c
             where  codigo_emp     = :codigo_emp                        and
                    codigo_cliente = :codigo_clie                       and
                    fecha         >= to_date(:fecha_inicial,'YYMMDD')   and
                    fecha         <= to_date(:fecha_cor    ,'YYMMDD')   and
                    contado       is null                               and
                    estado        <> '2'
             order  by fecha; */ 


    /* EXEC SQL DECLARE C8 CURSOR FOR
             select numero
             from   telefonos, clientes
             where  telefonos.codigo_nit = clientes.codigo_nit  and
                    codigo_cliente = :codigo_clie
             order by orden; */ 


 strcpy(cadena,fecha_inicial.arr);
 strorg(cadena,7,2);
 dia_inicial=atoi(cadena);
 strcpy(cadena,fecha_inicial.arr);
 strorg(cadena,5,2);
 mes_inicial=atoi(cadena);
 strcpy(cadena,fecha_inicial.arr);
 strorg(cadena,1,4);
 ano_inicial=atoi(cadena);
 strcpy(cadena,fecha_corte);
 strorg(cadena,7,2);
 dia_corte=atoi(cadena);
 strcpy(cadena,fecha_corte);
 strorg(cadena,5,2);
 mes_corte=atoi(cadena);
 strcpy(cadena,fecha_corte);
 strorg(cadena,1,4);
 ano_corte=atoi(cadena);

 sprintf (fecha_listado,"%s %d/%d - %s %d/%d",mec[mes_inicial-1],dia_inicial,ano_inicial,mec[mes_corte-1],dia_corte,ano_corte);
 if (mes_corte==4 || mes_corte==6 || mes_corte==9 || mes_corte==11) {
    if (dia_corte==30) {
        dia_corte=31;
        fecha_corte[6]='3';
        fecha_corte[7]='1';
    }
 }
 if (mes_corte==2) {
    if (dia_corte>15 && dia_corte<30) {
        dia_corte=31;
        fecha_corte[6]='3';
        fecha_corte[7]='1';
    }
 }
 total_deuda   =0;
 por_vencer    =0;
 a_30_dias     =0;
 a_60_dias     =0;
 a_90_dias     =0;
 a_120_dias    =0;
 total_debitos =0;
 total_creditos=0;
 saldo_actual  =0;
 saldo_anterior=0;
 pagina        =0;
 pasan         =0;

 /* EXEC SQL select numero_quincena into :numero_quincena
          from   control_fac
          where  codigo_emp = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.stmt = "select numero_quincena into :b0  from control_fac where codi\
go_emp=:b1";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)28;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&numero_quincena;
 sqlstm.sqhstl[0] = (unsigned long  )4;
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


 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Control_fac (%d)\n", sqlca.sqlcode);

 sprintf(nro_quinc.arr,"%d",numero_quincena);
 nro_quinc.len   =     strlen(nro_quinc.arr);

 /* EXEC SQL select nombre, nit, nvl(digito,-1)
          into  :nomb_emp, :nit_emp, :digito_emp
          from   empresas, nits
          where  empresas.codigo_nit = nits.codigo_nit and
                 empresas.codigo_emp = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 4;
 sqlstm.stmt = "select nombre ,nit ,nvl(digito,(-1)) into :b0,:b1,:b2  from \
empresas ,nits where (empresas.codigo_nit=nits.codigo_nit and empresas.codigo_\
emp=:b3)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)50;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
 sqlstm.sqhstl[0] = (unsigned long  )62;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&nit_emp;
 sqlstm.sqhstl[1] = (unsigned long  )8;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&digito_emp;
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


 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Empresa (C4) (%d)\n", sqlca.sqlcode);

 oraesti = sqlca.sqlcode;
 nomb_emp.arr   [nomb_emp.len] = '\0';

 /* EXEC SQL OPEN C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 4;
 sqlstm.stmt = sq0002;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)80;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&cliente_ini;
 sqlstm.sqhstl[0] = (unsigned long  )11;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&cliente_fin;
 sqlstm.sqhstl[1] = (unsigned long  )11;
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

        /* EXEC SQL FETCH C1 INTO :codigo_cliente, :nomb_clie, :nomb_ciu,
                               :direccion, :nit_clie, :digito_clie; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 6;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)102;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
        sqlstm.sqhstl[0] = (unsigned long  )11;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&nomb_clie;
        sqlstm.sqhstl[1] = (unsigned long  )62;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&nomb_ciu;
        sqlstm.sqhstl[2] = (unsigned long  )42;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&direccion;
        sqlstm.sqhstl[3] = (unsigned long  )62;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&nit_clie;
        sqlstm.sqhstl[4] = (unsigned long  )8;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqharm[4] = (unsigned long )0;
        sqlstm.sqhstv[5] = (unsigned char  *)&digito_clie;
        sqlstm.sqhstl[5] = (unsigned long  )4;
        sqlstm.sqindv[5] = (         short *)0;
        sqlstm.sqharm[5] = (unsigned long )0;
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

        codigo_cliente.arr [codigo_cliente.len] = '\0';
        nomb_clie.arr      [nomb_clie.len]      = '\0';
        nomb_ciu.arr       [nomb_ciu.len]       = '\0';
        direccion.arr      [direccion.len]      = '\0';
        strcpy(codigo_clie.arr,codigo_cliente.arr);
        codigo_clie.len =  strlen(codigo_clie.arr);

        /* EXEC SQL select cm.saldo into :saldo_anterior
                 from   clientem cm
                 where  cm.codigo_emp     = :codigo_emp  and
                        cm.codigo_cliente = :codigo_clie and
                        cm.ano_mes        =
                        (select max(ano_mes)
                         from clientem
                         where clientem.codigo_emp     =   :codigo_emp     and
                               clientem.codigo_cliente = cm.codigo_cliente and
                               clientem.ano_mes        <   :ano_mes); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 6;
        sqlstm.stmt = "select cm.saldo into :b0  from clientem cm where ((cm\
.codigo_emp=:b1 and cm.codigo_cliente=:b2) and cm.ano_mes=(select max(ano_mes)\
  from clientem where ((clientem.codigo_emp=:b1 and clientem.codigo_cliente=cm\
.codigo_cliente) and clientem.ano_mes<:b4)))";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)140;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&saldo_anterior;
        sqlstm.sqhstl[0] = (unsigned long  )8;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[1] = (unsigned long  )7;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&codigo_clie;
        sqlstm.sqhstl[2] = (unsigned long  )11;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[3] = (unsigned long  )7;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&ano_mes;
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
            fprintf (stderr, "Error leyendo Clientem(C7) (%d)\n",sqlca.sqlcode);

        saldo_actual=saldo_anterior;
        telefonos();
        total_paginas();
//      fprintf (stderr,"C2=%s,%s,%s,%s\n",codigo_emp.arr,codigo_clie.arr,fecha_cor.arr,ano_mes_c.arr);
        /* EXEC SQL OPEN C2; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 6;
        sqlstm.stmt = sq0003;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)174;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned long  )7;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&codigo_clie;
        sqlstm.sqhstl[1] = (unsigned long  )11;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&fecha_cor;
        sqlstm.sqhstl[2] = (unsigned long  )42;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[3] = (unsigned long  )7;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&ano_mes_c;
        sqlstm.sqhstl[4] = (unsigned long  )42;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqharm[4] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


//      fprintf (stderr,"C3=%s,%s,%s,%s\n",codigo_emp.arr,codigo_clie.arr,fecha_inicial.arr,fecha_cor.arr);
        /* EXEC SQL OPEN C3; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 6;
        sqlstm.stmt = sq0004;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)208;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned long  )7;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&codigo_clie;
        sqlstm.sqhstl[1] = (unsigned long  )11;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&fecha_inicial;
        sqlstm.sqhstl[2] = (unsigned long  )42;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&fecha_cor;
        sqlstm.sqhstl[3] = (unsigned long  )42;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        if (saldo_anterior!=0) {
            titulos();
            leo_factura();
            leo_ingreso();
            imprime();
            totales();
        }
        else {
              if (tot_pag > 0) {
                  leo_factura();
                  leo_ingreso();
                  titulos();
                  imprime();
                  totales();
              }
        }
        borro_acumulados();
        /* EXEC SQL CLOSE C2; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 6;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)238;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        /* EXEC SQL CLOSE C3; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 6;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)252;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 }
 cierre_impresora();

 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)266;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 /* EXEC SQL CLOSE C8; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)280;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 /* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)294;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 exit   (0);
}

void total_paginas()
{
 /* EXEC SQL select count(*) into :tot_fac
          from   facturas
          where  tipo_factura     = :codigo_emp                        and
                 codigo_cliente   = :codigo_clie                       and
                 fecha_documento >= to_date(:fecha_inicial,'YYMMDD')   and
                 fecha_documento <= to_date(:fecha_cor    ,'YYMMDD')   and
                 contado         is null                               and
                 estado_factura   = 0                                  and
                 valor_neto       > 0; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.stmt = "select count(*)  into :b0  from facturas where ((((((tipo_fa\
ctura=:b1 and codigo_cliente=:b2) and fecha_documento>=to_date(:b3,'YYMMDD')) \
and fecha_documento<=to_date(:b4,'YYMMDD')) and contado is null ) and estado_f\
actura=0) and valor_neto>0)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)308;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&tot_fac;
 sqlstm.sqhstl[0] = (unsigned long  )4;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned long  )7;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&codigo_clie;
 sqlstm.sqhstl[2] = (unsigned long  )11;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&fecha_inicial;
 sqlstm.sqhstl[3] = (unsigned long  )42;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&fecha_cor;
 sqlstm.sqhstl[4] = (unsigned long  )42;
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
     fprintf (stderr, "Error leyendo Facturas (C5) (%d)\n", sqlca.sqlcode);
 staora  = sqlca.sqlcode;

 /* EXEC SQL select count(*) into :tot_ing
          from   ingresos_c
          where  codigo_emp     = :codigo_emp                        and
                 codigo_cliente = :codigo_clie                       and
                 fecha         >= to_date(:fecha_inicial,'YYMMDD')   and
                 fecha         <= to_date(:fecha_cor    ,'YYMMDD')   and
                 contado       is null                               and
                 estado        <> '2'; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.stmt = "select count(*)  into :b0  from ingresos_c where (((((codigo\
_emp=:b1 and codigo_cliente=:b2) and fecha>=to_date(:b3,'YYMMDD')) and fecha<=\
to_date(:b4,'YYMMDD')) and contado is null ) and estado<>'2')";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)342;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&tot_ing;
 sqlstm.sqhstl[0] = (unsigned long  )4;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned long  )7;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&codigo_clie;
 sqlstm.sqhstl[2] = (unsigned long  )11;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&fecha_inicial;
 sqlstm.sqhstl[3] = (unsigned long  )42;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&fecha_cor;
 sqlstm.sqhstl[4] = (unsigned long  )42;
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
     fprintf (stderr, "Error leyendo Ingresos_c (C6) (%d)\n", sqlca.sqlcode);
 staora  = sqlca.sqlcode;

 num=tot_fac+tot_ing;
 if (!strcmp(formas,"s"))
      num=(double)ceil(num/18);
 else num=(double)ceil(num/26);
 tot_pag=(int)num;
}


void imprime()
{
 while (oraestf==0 || oraesti==0) {
        if (strcmp(fecha_factura.arr,fecha_ingreso.arr)>0 && numero_ingreso>0) {
            imprime_ingreso();
            leo_ingreso();
        }
        else {
              if (valor_factura > 0)
                  imprime_factura();
              leo_factura();
        }
 }
}

void leo_factura()
{
 /* EXEC SQL FETCH C2 INTO :fecha_factura,  :fecha_vencmto, :tipo_factura,
                        :numero_factura, :valor_factura, :saldo_factura; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)376;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&fecha_factura;
 sqlstm.sqhstl[0] = (unsigned long  )42;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&fecha_vencmto;
 sqlstm.sqhstl[1] = (unsigned long  )42;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&tipo_factura;
 sqlstm.sqhstl[2] = (unsigned long  )7;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&numero_factura;
 sqlstm.sqhstl[3] = (unsigned long  )8;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&valor_factura;
 sqlstm.sqhstl[4] = (unsigned long  )8;
 sqlstm.sqindv[4] = (         short *)0;
 sqlstm.sqharm[4] = (unsigned long )0;
 sqlstm.sqhstv[5] = (unsigned char  *)&saldo_factura;
 sqlstm.sqhstl[5] = (unsigned long  )8;
 sqlstm.sqindv[5] = (         short *)0;
 sqlstm.sqharm[5] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 oraestf  = sqlca.sqlcode;
 if (oraestf == -1405)
     oraestf  = 0;
 else if (oraestf) {
          strcpy(fecha_factura.arr,"99999999");
          fprintf (stderr, "Error leyendo C2 (%d)\n", oraestf);
      }
 fecha_factura.arr [fecha_factura.len] = '\0';
 fecha_vencmto.arr [fecha_vencmto.len] = '\0';
 tipo_factura.arr  [tipo_factura.len]  = '\0';
}

void leo_ingreso()
{
 /* EXEC SQL FETCH C3 INTO :fecha_ingreso, :numero_ingreso, :tipo_ingreso,
                        :valor_ingreso; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)414;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&fecha_ingreso;
 sqlstm.sqhstl[0] = (unsigned long  )42;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&numero_ingreso;
 sqlstm.sqhstl[1] = (unsigned long  )8;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&tipo_ingreso;
 sqlstm.sqhstl[2] = (unsigned long  )7;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&valor_ingreso;
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


 oraesti  = sqlca.sqlcode;
 if (oraesti == -1405)
     oraesti  = 0;
 else if (oraesti) {
          strcpy(fecha_ingreso.arr,"99999999");
          fprintf (stderr, "Error leyendo C3 (%d)\n", oraesti);
      }
 fecha_ingreso.arr [fecha_ingreso.len] = '\0';
 tipo_ingreso.arr  [tipo_ingreso.len]  = '\0';
}


void total_ordenes()
{
 /* EXEC SQL select sum(valor_total) into :valor_ordenes
          from ordenes_c o, clientese e, control_fac cf
          where  :codigo_emp     = nvl(e.codigo_emp,1)                 and
                 :codigo_emp     = cf.codigo_emp                       and
                o.codigo_cliente = e.codigo_cliente(+)                 and
                 :nro_quinc      = e.numero_quincena(+)                and
                 :codigo_clie    = o.codigo_cliente                    and
                nvl(o.estado,0) <> 'R'                                 and
                o.contado        = 0                                   and
                to_number(to_char(o.fecha_control,'yyyymmdd')) >
                decode(cf.numero_quincena,
                       1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||15),
                       2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd'))); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.stmt = "select sum(valor_total) into :b0  from ordenes_c o ,clientes\
e e ,control_fac cf where (((((((:b1=nvl(e.codigo_emp,1) and :b1=cf.codigo_emp\
) and o.codigo_cliente=e.codigo_cliente(+)) and :b3=e.numero_quincena(+)) and \
:b4=o.codigo_cliente) and nvl(o.estado,0)<>'R') and o.contado=0) and to_number\
(to_char(o.fecha_control,'yyyymmdd'))>decode(cf.numero_quincena,1,to_number(((\
cf.ano||lpad(cf.mes_proceso,2,0))||15)),2,to_number(to_char(last_day(to_date((\
cf.ano||lpad(cf.mes_proceso,2,0)),'yymm')),'yyyymmdd'))))";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)444;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&valor_ordenes;
 sqlstm.sqhstl[0] = (unsigned long  )8;
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
 sqlstm.sqhstv[3] = (unsigned char  *)&nro_quinc;
 sqlstm.sqhstl[3] = (unsigned long  )7;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&codigo_clie;
 sqlstm.sqhstl[4] = (unsigned long  )11;
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
     fprintf (stderr, "Error leyendo Ordenes (C9) (%d)\n", sqlca.sqlcode);
}

/* Impresion de Titulos y correspondencia */
void titulos()
{
 if (!strcmp(formas,"s")) {
      titulos_pre();
      return;
 }
/*
 fprintf (fp,"%s%s%c%s%c%c%c\r",enfatizado_off,tamano_pagina,66,set_vertical,44,58,0);
 strful(cadena,80,' ');
 fprintf (fp,"%s%s%s%s\n",diezcpi,subrayado_on,cadena,subrayado_off);
 if (!strcmp(codigo_emp.arr,"3")) {
    strcpy(nomb_emp.arr,"");
    codigo_emp.len=strlen(codigo_emp.arr);
 }
 strful  (cadena,(int)(40-strlen(nomb_emp.arr))/2,' ');
 fprintf (fp,"%s%s%s%s%\n\n",diezcpi,ancho_on,cadena,nomb_emp.arr);
 sprintf (cadena,"%12.0f",nit_emp);
 if (strcmp(codigo_emp.arr,"3")) {
    fprintf (fp,"%20s%s%s%s%s%s",ancho_off,condensado_on,"NIT : ",fmtnum("zzz,zzz,zzz,zzz",cadena,r_t),ancho_off,condensado_off);
    if (digito_emp>=0)
       fprintf (fp,"-%d",digito_emp);
    fprintf (fp,"\n");
 }
 else fprintf (fp,"%s\n",ancho_off);

 strful(cadena,80,' ');
 fprintf (fp,"%s%s%s%s\n",diezcpi,subrayado_on,cadena,subrayado_off);
*/
 fprintf (fp,"%s%s%57s%s\n",diezcpi,idioma," ","EXTRACTO DE CUENTA");
 fprintf (fp,"%s%63s%s\n",ancho_off," ","PERIODO");
 fprintf (fp,"%52s%s\n"," ",fecha_listado);

 con_pag++;
 fprintf (fp, "%67s%s\n"," ","PAGINA");
 fprintf (fp, "\r%67s%d%s%d\n\n"," ",con_pag," DE ",tot_pag);
 fprintf (fp,"%20s%s%c%s\n"," ","Se",164,"ores");
 /*
 for (i=0;i<255;++i) {
     fprintf (fp,"%d%c\n",i,i);
     getchar();
 }
*/
 fprintf (fp,"%20s%s\n"," ",nomb_clie.arr);
 fprintf (fp,"%20s%s\n"," ",direccion.arr);
 fprintf (fp,"%20s%s%17s\n"," ","TEL : ",cadena2);
 fprintf (fp,"%20s%s%s\n"," ",nomb_ciu.arr," - COLOMBIA");
 sprintf (cadena,"%12.0f",nit_clie);
 fprintf (fp,"%20s%s%s"," ","NIT : ",fmtnum("zzz,zzz,zzz,zzz",cadena,r_t));
 if (digito_clie>=0)
    fprintf (fp,"-%d",digito_clie);
 fprintf (fp,"\n%20s%s%s%s"," ","COD : ",codigo_cliente.arr,ancho_off);
 fprintf (fp,"\n\n");
 fprintf (fp,"%s%s%s%s%s",subrayado_on,"   FECHA   ",subrayado_off," ",subrayado_on);
 fprintf (fp,"%s%s%s%s","DOCUMENTO",subrayado_off," ",subrayado_on);
 fprintf (fp,"%s%s%s%s","DESCRIPCION",subrayado_off,"    ",subrayado_on);
 fprintf (fp,"%s%s","MOVIMIENTO DEL PERIODO",subrayado_off);
 fprintf (fp,"%9s%s%s\n"," ",subrayado_on,"SALDO");
 fprintf (fp,"%s%s%s%s","DIA",subrayado_off," ",subrayado_on);
 fprintf (fp,"%s%s%s%s","MES",subrayado_off," ",subrayado_on);
 fprintf (fp,"%s%c%s%s","A",165,"O",subrayado_off);
 fprintf (fp,"%26s%s%s%s"," ",subrayado_on,"DEBITOS",subrayado_off);
 fprintf (fp,"%7s%s%s%s"," ",subrayado_on,"CREDITOS",subrayado_off);
 fprintf (fp,"%9s%s%s%s\n"," ",subrayado_on,"     ",subrayado_off);
 con_lin=16;

}

/* Impresion de Titulos en formato Preimpreso */
void titulos_pre()
{
 fprintf (fp,"%s%s%c%s%c%c%c%c%c\r",enfatizado_off,tamano_pagina,44,set_vertical,4,24,29,33,0);
 fprintf (fp,"%65s",fecha_listado);
/* fprintf (fp,"%s",vertical); */
 fprintf(fp,"\n\n\n\n");
 con_lin=5;
//c con_lin=4;

}

/* Acumula las facturas y calcula su vencimiento */
void acum_facturas()
{
 if (strcmp(fecha_vencmto.arr,fecha_corte) > 0) {
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

void imprime_factura()
{
 if (!strcmp(formas,"s")) {
      imprime_factura_pre();
      return;
 }
 if (!strcmp(tipo_factura.arr,"F"))
     strcpy(mensaje,"Factura  ");
 else {
       if (!strcmp(tipo_factura.arr,"ND"))
           strcpy(mensaje,"Nota DB ");
      }

 if (con_lin > 41) {
    pasan=1;
    totales();
    titulos();
 }

 acum_facturas();
 if (strcmp(fecha_factura.arr,fecha_inicial.arr) >= 0) {
    saldo_actual+=valor_factura;
    strcpy(cadena,fecha_factura.arr);
    strorg(cadena,7,2);
    fprintf (fp," %s",cadena);
    strcpy(cadena,fecha_factura.arr);
    strorg(cadena,5,2);
    fprintf (fp,"  %s",cadena);
    strcpy(cadena,fecha_factura.arr);
    strorg(cadena,3,2);
    fprintf (fp,"  %s",cadena);
    sprintf (cadena,"%6.0f",numero_factura);
    fprintf (fp,"    %s",fmtnum("zzzzzz",cadena,r_t));
    fprintf (fp," %-12s",mensaje);
    sprintf (cadena,"%9.2f",valor_factura);
    fprintf (fp,"%13s",fmtnum("zzz,zzz,zzz",cadena,r_t));
    sprintf (cadena,"%9.2f",saldo_actual);
    fprintf (fp,"%30s\n",fmtnum("zzzz,zzz,zz9",cadena,r_t));
    total_debitos+=valor_factura;
    con_lin++;
 }
}

/* Aqui imprime los ingresos */
void imprime_ingreso()
{
 if (!strcmp(formas,"s")) {
      imprime_ingreso_pre();
      return;
 }
  if (!strcmp(tipo_ingreso.arr,"RC"))
       strcpy(mensaje,"Pago     ");
  else strcpy(mensaje,"Nota CR  ");

 if (con_lin > 41) {
    pasan=1;
    totales();
    titulos();
 }
 saldo_actual-=valor_ingreso;
 strcpy(cadena,fecha_ingreso.arr);
 strorg(cadena,7,2);
 fprintf (fp," %s",cadena);
 strcpy(cadena,fecha_ingreso.arr);
 strorg(cadena,5,2);
 fprintf (fp,"  %s",cadena);
 strcpy(cadena,fecha_ingreso.arr);
 strorg(cadena,3,2);
 fprintf (fp,"  %s",cadena);
 sprintf (cadena,"%6.0f",numero_ingreso);
 fprintf (fp,"    %s",fmtnum("zzzzzz",cadena,r_t));
 fprintf (fp," %-12s",mensaje);
 sprintf (cadena,"%6.0f",valor_ingreso);
 fprintf (fp,"%29s",fmtnum("zzz,zzz,zzz",cadena,r_t));
 sprintf (cadena,"%9.2f",saldo_actual);
 fprintf (fp,"%14s\n",fmtnum("zzzz,zzz,zz9",cadena,r_t));
 total_creditos+=valor_ingreso;
 con_lin++;
}


/* Aqui imprime facturas formato Preimpreso */
void imprime_factura_pre()
{
 if (!strcmp(tipo_factura.arr,"F"))
     strcpy(mensaje,"Factura  ");
 else {
       if (!strcmp(tipo_factura.arr,"ND"))
           strcpy(mensaje,"Nota DB ");
      }

 if (con_lin > 22) {
    pasan=1;
    totales_pre();
    titulos_pre();
 }
 acum_facturas();
 if (strcmp(fecha_factura.arr,fecha_inicial.arr) >= 0) {
     saldo_actual+=valor_factura;
     strcpy(cadena,fecha_factura.arr);
     strorg(cadena,7,2);
     fprintf (fp,"%s",cadena);
     strcpy(cadena,fecha_factura.arr);
     strorg(cadena,5,2);
     fprintf (fp," %s",cadena);
     strcpy(cadena,fecha_factura.arr);
     strorg(cadena,3,2);
     fprintf (fp," %s",cadena);
     sprintf (cadena,"%6.0f",numero_factura);
     fprintf (fp,"  %s",fmtnum("zzzzzz",cadena,r_t));
     fprintf (fp," %-9s",mensaje);
     sprintf (cadena,"%6.0f",valor_factura);
     fprintf (fp,"%13s",fmtnum("zzz,zzz,zzz",cadena,r_t));
     sprintf (cadena,"%9.2f",saldo_actual);
     fprintf (fp,"%26s\n",fmtnum("zzzz,zzz,zz9",cadena,r_t));
     total_debitos+=valor_factura;
     con_lin++;
 }
}

/* Aqui imprime los ingresos formato Preimpreso*/
void imprime_ingreso_pre()
{
  if (!strcmp(tipo_ingreso.arr,"RC"))
       strcpy(mensaje,"Pago     ");
  else strcpy(mensaje,"Nota CR  ");

 if (con_lin > 22) {
    pasan=1;
    totales_pre();
    titulos_pre();
 }
 saldo_actual-=valor_ingreso;
 strcpy(cadena,fecha_ingreso.arr);
 strorg(cadena,7,2);
 fprintf (fp,"%s",cadena);
 strcpy(cadena,fecha_ingreso.arr);
 strorg(cadena,5,2);
 fprintf (fp," %s",cadena);
 strcpy(cadena,fecha_ingreso.arr);
 strorg(cadena,3,2);
 fprintf (fp," %s",cadena);
 sprintf (cadena,"%6.0f",numero_ingreso);
 fprintf (fp,"  %s",fmtnum("zzzzzz",cadena,r_t));
 fprintf (fp," %-9s",mensaje);
 sprintf (cadena,"%6.0f",valor_ingreso);
 fprintf (fp,"%26s",fmtnum("zzz,zzz,zzz",cadena,r_t));
 sprintf (cadena,"%9.2f",saldo_actual);
 fprintf (fp,"%13s\n",fmtnum("zzzz,zzz,zz9",cadena,r_t));
 total_creditos+=valor_ingreso;
 con_lin++;
}


/* Calculo del vencimiento de la factura */
void calcula_dias()
{
 w_dia_corte=dia_corte;
 w_mes_corte=mes_corte;
 w_ano_corte=ano_corte;
 strcpy(cadena,fecha_vencmto.arr);
 strorg(cadena,7,2);
 dia_vencmto=atoi(cadena);
 if (dia_vencmto > 27 && dia_vencmto < 32)
     dia_vencmto=30;
 strcpy(cadena,fecha_vencmto.arr);
 strorg(cadena,5,2);
 mes_vencmto=atoi(cadena);
 strcpy(cadena,fecha_vencmto.arr);
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

/* Totales de debitos y creditos */
void totales()
{
// fprintf(stderr,"ordenes :<%s>\n",ordenes);
 if (!strcmp(ordenes,"s")) {
     if (pasan!=1) {
        total_ordenes();
        fprintf(fp,"Ordenes por facturar ");
     }
 }
 if (!strcmp(formas,"s")) {
     if (!strcmp(ordenes,"s")) {
         if (pasan!=1) {
             saldo_actual+=valor_ordenes;
             total_debitos+=valor_ordenes;
             sprintf (cadena,"%6.0f",valor_ordenes);
             fprintf (fp,"%18s%13s",fmtnum("zzz,zzz,zzz",cadena,r_t)," ");
             sprintf (cadena,"%9.2f",saldo_actual);
             fprintf (fp,"%13s\n",fmtnum("zzzz,zzz,zz9",cadena,r_t));
             con_lin++;
         }
     }
     totales_pre();
     return;
 }
 if (!strcmp(ordenes,"s")) {
     if (pasan!=1) {
         saldo_actual+=valor_ordenes;
         total_debitos+=valor_ordenes;
         sprintf (cadena,"%6.0f",valor_ordenes);
         fprintf (fp,"%26s%13s",fmtnum("zzz,zzz,zzz",cadena,r_t)," ");
         sprintf (cadena,"%9.2f",saldo_actual);
         fprintf (fp,"%17s\n",fmtnum("zzzz,zzz,zz9",cadena,r_t));
         con_lin++;
     }
 }
/* fprintf (fp,"%s",vertical);*/

 do {
     fprintf(fp,"\n");
     con_lin++;
 } while (con_lin<=44);

 strful  (cadena,14,' ');
 fprintf (fp, "%s%s%s",subrayado_on,cadena,subrayado_off);
 strful  (cadena,63,' ');
 fprintf (fp, "  %s%s%s\n",subrayado_on,cadena,subrayado_off);
 con_lin++;
 if (pasan==1) {
    fprintf (fp,"%s%s%s%-18s%s%s%s%s",condensado_on,ancho_on,enfatizado_on,"SUBTOTALES",condensado_off,ancho_off,enfatizado_off,condensado_off);
 }
 else fprintf (fp, "%s%s%s%-18s%s%s",diezcpi,ancho_on,enfatizado_on,"TOTALES",ancho_off,enfatizado_off);
 if (pasan==1) {
    sprintf (cadena,"%9.2f",saldo_anterior);
    fprintf (fp,"%21s",fmtnum("zzz,zzz,zz9",cadena,r_t));
    sprintf (cadena,"%9.2f",total_debitos);
    fprintf (fp,"%15s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));
    sprintf (cadena,"%9.2f",total_creditos);
    fprintf (fp,"%16s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));
    fprintf (fp,"%s%13s%s\n",enfatizado_on,"Pasan...",enfatizado_off);
    con_lin++;
 }
 else {
       sprintf (cadena,"%9.2f",saldo_anterior);
       fprintf (fp,"%15s",fmtnum("zzz,zzz,zz9",cadena,r_t));
       sprintf (cadena,"%9.2f",total_debitos);
       fprintf (fp,"%15s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));
       sprintf (cadena,"%9.2f",total_creditos);
       fprintf (fp,"%16s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));
       sprintf (cadena,"%9.2f",saldo_actual);
       fprintf (fp,"%13s\n",fmtnum("zzzz,zzz,zz9",cadena,r_t));
       con_lin++;
 }
 fprintf (fp,"%34s%15s%15s%16s\n","SALDO ANTERIOR","TOTAL DEBITOS","TOTAL CREDITOS","NUEVO SALDO   ");
 strful  (cadena,14,' ');
 fprintf (fp, "%s%s%s",subrayado_on,cadena,subrayado_off);
 strful  (cadena,63,' ');
 fprintf (fp, "  %s%s%s\n\n",subrayado_on,cadena,subrayado_off);

 strcpy  (tit,"* * *  V E N C I M I E N T O S  * * *");
 strful  (cadena,(int)(80-strlen(tit))/2,' ');
 fprintf (fp,"%s%s%s\n\n",enfatizado_on,cadena,tit);
 con_lin+=5;
 if (pasan!=1) {
   if (por_vencer > 0)
      fprintf (fp,"  %s","POR VENCER");
   if (a_30_dias > 0)
      fprintf (fp,"\r%25s%s"," ","30 DIAS");
   if (a_60_dias > 0)
      fprintf (fp,"\r%39s%s"," ","60 DIAS");
   if (a_90_dias > 0)
      fprintf (fp,"\r%55s%s"," ","90 DIAS");
   if (a_120_dias > 0)
      fprintf (fp,"\r%65s%s"," ","SOBRE 90 DIAS");
   fprintf (fp,"%s\n\n",enfatizado_off);
   con_lin+=2;

   if (por_vencer > 0) {
      sprintf (cadena,"%9.2f",por_vencer);
      fprintf (fp,"  %s",fmtnum("zzz,zzz,zz9",cadena,r_t));
   }
   if (a_30_dias > 0) {
      sprintf (cadena,"%9.2f",a_30_dias);
      fprintf (fp,"\r%20s%s"," ",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
   }
   if (a_60_dias > 0) {
      sprintf (cadena,"%9.2f",a_60_dias);
      fprintf (fp,"\r%35s%s"," ",fmtnum("zzz,zzz,zz9",cadena,r_t));
   }
   if (a_90_dias > 0) {
      sprintf (cadena,"%9.2f",a_90_dias);
      fprintf (fp,"\r%51s%s"," ",fmtnum("zzz,zzz,zz9",cadena,r_t));
   }
   if (a_120_dias > 0) {
      sprintf (cadena,"%9.2f",a_120_dias);
      fprintf (fp,"\r%67s%s"," ",fmtnum("zzz,zzz,zz9",cadena,r_t));
   }

   fprintf (fp, "\n");

   if (a_60_dias > 0) {
      fprintf (fp,"\r%33s%s%s%s"," ",enfatizado_on,"CUENTA VENCIDA",enfatizado_off);
   }
   if (a_90_dias > 0) {
      fprintf (fp,"\r%49s%s%s%s"," ",enfatizado_on,"CUENTA VENCIDA",enfatizado_off);
   }
   if (a_120_dias > 0) {
      fprintf (fp,"\r%65s%s%s%s"," ",enfatizado_on,"CUENTA VENCIDA",enfatizado_off);
   }

   fprintf (fp, "\n");

   if (a_60_dias > 0) {
      fprintf (fp,"\r%33s%s%s%s"," ",enfatizado_on,"FAVOR CANCELAR",enfatizado_off);
   }
   if (a_90_dias > 0) {
      fprintf (fp,"\r%49s%s%s%s"," ",enfatizado_on,"FAVOR CANCELAR",enfatizado_off);
   }
   if (a_120_dias > 0) {
      fprintf (fp,"\r%65s%s%s%s"," ",enfatizado_on,"FAVOR CANCELAR",enfatizado_off);
   }

   fprintf (fp, "\n");
   con_lin+=3;
 }
 else {
      fprintf (fp, "\n");
/*      con_lin++; */
 }
/* fprintf (fp, "%s",vertical);*/
 fprintf (fp, "%s%s%s\n",elite,nota,diezcpi);
 con_lin++;

 if (!strcmp(codigo_emp.arr,"3")) {
    do {
        fprintf (fp,"\n");
    } while (con_lin++<=55);
//  fprintf (fp, "%s%s%s\n",elite,".",diezcpi);
    con_lin++;
 }
 else {
    do {
        fprintf (fp,"\n");
    } while (con_lin++<=56);
//  fprintf (fp, "%s%s%s\n\n",elite,".",diezcpi);
    con_lin+=2;
 }
//fprintf (fp, "%s\n\n",".");
  fprintf (fp, "%s\n",".");

 if (!strcmp(codigo_emp.arr,"3")) {
     strful  (cadena,(int)(125-strlen(linea_direccion))/2,' ');
     fprintf (fp,"%s%s%s%s%s\f",condensado_on,cadena,linea_direccion,diezcpi,condensado_off);
 }
 else fprintf(fp,"\r");
/* fprintf (fp, "%s\r",vertical);
 do {
     fprintf(fp,"\n");
     con_lin++;
 } while (con_lin<=66);
*/
 pasan=0;
}


/* Totales de debitos y creditos Preimpresos */
void totales_pre()
{
// con_pag++;
 fprintf (fp,"%s",vertical);
 fprintf (fp," %d   %d",con_pag,tot_pag);
 if (pasan==1) {
    sprintf (cadena,"%9.2f",saldo_anterior);
    fprintf (fp,"%20s",fmtnum("zzz,zzz,zz9",cadena,r_t));
    sprintf (cadena,"%9.2f",total_debitos);
    fprintf (fp,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
    sprintf (cadena,"%9.2f",total_creditos);
    fprintf (fp,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
    fprintf (fp,"%s%13s%s\n",enfatizado_on,"Pasan...",enfatizado_off);
 }
 else {
       sprintf (cadena,"%9.2f",saldo_anterior);
       fprintf (fp,"%20s",fmtnum("zzz,zzz,zz9",cadena,r_t));
       sprintf (cadena,"%9.2f",total_debitos);
       fprintf (fp,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
       sprintf (cadena,"%9.2f",total_creditos);
       fprintf (fp,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
       sprintf (cadena,"%9.2f",saldo_actual);
       fprintf (fp,"%13s\n",fmtnum("zzzz,zzz,zz9",cadena,r_t));
 }
//c con_lin++;
 fprintf (fp, "%s",vertical);
 strcpy(aviso," ");
 if (pasan!=1) {
   if (a_30_dias > 0) {
      strcpy (aviso,"CUENTA VENCIDA..... FAVOR CANCELAR.");
      fprintf (fp,"\r%16s%7s"," ","30 DIAS");
   }
   if (a_60_dias > 0) {
      strcpy (aviso,"CUENTA VENCIDA..... FAVOR CANCELAR.");
      fprintf (fp,"\r%23s%13s"," ","60 DIAS");
   }
   if (a_90_dias > 0) {
      strcpy (aviso,"CUENTA VENCIDA..... FAVOR CANCELAR.");
      fprintf (fp,"\r%36s%13s"," ","90 DIAS");
   }
   if (a_120_dias > 0) {
      strcpy (aviso,"CUENTA VENCIDA..... FAVOR CANCELAR.");
      fprintf (fp,"\r%49s%16s"," ","SOBRE 90 DIAS");
   }
   fprintf (fp,"\n");
   //c con_lin++;
   if (por_vencer > 0) {
      sprintf (cadena,"%9.2f",por_vencer);
      fprintf (fp,"%13s",fmtnum("zzz,zzz,zz9",cadena,r_t));
   }
   if (a_30_dias > 0) {
      sprintf (cadena,"%9.2f",a_30_dias);
      fprintf (fp,"\r%26s",fmtnum("zzz,zzz,zz9",cadena,r_t));
   }
   if (a_60_dias > 0) {
      sprintf (cadena,"%9.2f",a_60_dias);
      fprintf (fp,"\r%39s",fmtnum("zzz,zzz,zz9",cadena,r_t));
   }
   if (a_90_dias > 0) {
      sprintf (cadena,"%9.2f",a_90_dias);
      fprintf (fp,"\r%52s",fmtnum("zzz,zzz,zz9",cadena,r_t));
   }
   if (a_120_dias > 0) {
      sprintf (cadena,"%9.2f",a_120_dias);
      fprintf (fp,"\r%65s",fmtnum("zzz,zzz,zz9",cadena,r_t));
   }
 }
 fprintf (fp, "%s%s\r",vertical,enfatizado_on);
 fprintf (fp,"%s%-51s%s%s\n",condensado_on,aviso,condensado_off,nomb_clie.arr);
 fprintf (fp,"%s%-51s%s%s\n",condensado_on,aviso,condensado_off,direccion.arr);
 fprintf (fp,"%s%-51s%s%s%17s\n",condensado_on,aviso,condensado_off,"TEL : ",cadena2);
 fprintf (fp,"%s%-51s%s%s%s\n",condensado_on,aviso,condensado_off,nomb_ciu.arr," - COLOMBIA");
 fprintf (fp, "%s\r",enfatizado_off);
 //c con_lin+=4;
// con_pag++;
 pasan=0;
}

/* Restaura a cero los acumuladores */
void borro_acumulados()
{
 total_deuda   =0;
 por_vencer    =0;
 a_30_dias     =0;
 a_60_dias     =0;
 a_90_dias     =0;
 a_120_dias    =0;
 total_debitos =0;
 total_creditos=0;
 saldo_actual  =0;
 saldo_anterior=0;
 con_pag       =0;
 valor_factura =0;
 saldo_factura =0;
}

void telefonos()
{
 strcpy(cadena2,"");
 traidos = 0;
 oraest  = 0;
 /* EXEC SQL OPEN C8; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.stmt = sq0005;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)478;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo_clie;
 sqlstm.sqhstl[0] = (unsigned long  )11;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 while (oraest == 0) {

        /* EXEC SQL FETCH C8 INTO :telefono; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 6;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)496;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&telefono;
        sqlstm.sqhstl[0] = (unsigned long  )8;
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
        if (oraest == 1403 || traidos == 2) break;
        if (oraest != 1403 && oraest != 0)
            fprintf (stderr, "Error leyendo C8 (%d)\n", oraest);

        traidos++;
        if (traidos == 1) {
            sprintf (cadena,"%8.0f",telefono);
            strcpy  (cadena2,cadena);
        }
        else {
             if (telefono > 0) {
                 sprintf (cadena,"-%8.0f",telefono);
                 strcat  (cadena2,cadena);
             }
        }
 }
 /* EXEC SQL CLOSE C8; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)514;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}
