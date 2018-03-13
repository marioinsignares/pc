
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
    ".\\resufacc.pc"
};


static const unsigned long sqlctx = 1300827636;


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
   unsigned char    *sqhstv[13];
   unsigned long    sqhstl[13];
	    short   *sqindv[13];
   unsigned long    sqharm[13];
   unsigned long     *sqharc[13];
} sqlstm = {8,13};

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
"der by codigo_cliente            ";
 static const char *sq0003 = 
"select f.numero_factura ,f.codigo_cliente ,f.cant_ordenes_o ,f.cant_ordenes_\
c ,f.cant_despachos ,nvl(f.valor_oftalmica,0) ,nvl(f.valor_contacto,0) ,f.valo\
r_fletes ,f.valor_iva ,f.valor_neto ,f.hojas ,f.codigo_nit ,f.rete_fte  from f\
acturas f ,basura b ,control_fac cf where ((((((b.tipo_documento=f.tipo_docume\
nto and b.tipo_factura=f.tipo_factura) and b.numero_factura=f.numero_factura) \
and b.tipo_factura=cf.codigo_emp) and :b0=cf.codigo_emp) and to_number(to_char\
(f.fecha_documento,'yyyymmdd'))<=decode(to_number(:b1),1,to_number(to_char(to_\
date(((cf.ano||lpad(cf.mes_proceso,2,0))||15),'yymmdd'),'yyyymmdd')),2,to_numb\
er(to_char(last_day(to_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yyyymm')),'yyy\
ymmdd')))) and to_number(to_char(f.fecha_documento,'yyyymmdd'))>=to_number(to_\
char(to_date(decode(to_number(:b1),1,to_number(((cf.ano||lpad(cf.mes_proceso,2\
,0))||lpad(1,2,0))),2,to_number(((cf.ano||lpad(cf.mes_proceso,2,0))||16))),'yy\
mmdd'),'yyyymmdd'))) order by codigo_cliente            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,146,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,0,0,15,224,0,0,0,0,1,0,
42,0,0,3,0,0,15,234,0,0,0,0,1,0,
56,0,0,4,0,0,30,238,0,0,0,0,1,0,
70,0,0,2,1057,0,9,261,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
100,0,0,2,0,0,13,264,0,13,0,0,1,0,2,4,0,0,2,9,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,4,
0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,3,0,0,2,4,0,0,2,4,0,0,
166,0,0,2,0,0,15,308,0,0,0,0,1,0,
180,0,0,3,990,0,9,318,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
206,0,0,3,0,0,13,324,0,13,0,0,1,0,2,4,0,0,2,9,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,4,
0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,3,0,0,2,4,0,0,2,4,0,0,
272,0,0,3,0,0,15,368,0,0,0,0,1,0,
286,0,0,5,60,0,4,379,0,2,1,0,1,0,2,9,0,0,1,4,0,0,
308,0,0,6,111,0,4,385,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
330,0,0,7,54,0,4,464,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
352,0,0,8,542,0,4,569,0,6,1,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,9,0,0,2,9,0,0,1,9,
0,0,
390,0,0,9,120,0,4,588,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
};


/*****************************************************************
* RESUFAC.C  Version 1.0 - Rev 1.2 - Sep. 16/91.
*
* resufac.c Programa de facturacion para listar las facturacion de la quincena
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
void lista_empresa( int e);
void lista_basura( int e);
void titulos();
void totaliza( int i);
void titulo_ciudad();
void borro_totales( int i);
void borro_fletes( int i);
void acumulo_totales( int i);
void imprime_facturas();
void total_fletes();
void empresa();

				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Facturas (C1) y (C6) */
double  numero_factura;
/* VARCHAR codigo_cliente [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_cliente;

int     cant_ordenes_o;
int     cant_ordenes_c;
int     cant_despachos;
double  valor_oftalmica;
double  valor_contacto;
double  valor_fletes;
double  valor_iva;
double  valor_rete_fte;
double  valor_neto;
int     hojas;
/* VARCHAR codigo_emp     [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR numero_quincena[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } numero_quincena;

                                 /* Nits (C2) */
/* VARCHAR nomb_clie      [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nomb_clie;

/* VARCHAR wcod           [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } wcod;

                                 /* Ciudades (C3) */
/* VARCHAR nomb_ciudad    [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciudad;

/* VARCHAR wciu           [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } wciu;

                                 /* Control_fac (C4) */
int     ano;
int     mes_proceso;
int     ptaje_iva;
float   codigo_nit;
/* VARCHAR fecha_inicial  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_inicial;

/* VARCHAR corte          [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } corte;

                                 /* Empresas (C5) */
/* VARCHAR nomb_emp       [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nomb_emp;


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

char *fmtnum(), r_t[100];
int     con_pag;                                   /* Contador de Paginas */
int     con_lin=66;                                /* Contador de Lineas  */
int	inicio = 0;
int	staora = 0;
int     serv   = 0;
char    copias[6];
int     tit_ciu=0;
char    fechas[100];
char    fecha[30];
double  fletes;
char    cadena[100];
char    mensajes[50];
char    wciu2[10];
struct acm {
            float   cant_despachos;
            double  valor_fletes;
           };
struct acm acum[4];

struct acu {
            int    cant_ordenes_o;
            int    cant_ordenes_c;
            int    cant_despachos;
            double valor_oftalmica;
            double valor_contacto;
            double valor_fletes;
            double valor_iva;
            double valor_rete_fte;
            double valor_neto;
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

if (argc < 5)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : resufacc numero_quincena device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (nro_quincena,argv[1]);
numero_quincena.len =       strlen(numero_quincena.arr);
strcpy (device,             argv[2]);
strlow (device);
strcpy (copias,             argv[3]);

if (!strpos ("/", argv[4]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,   argv[4]);
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
        select f.numero_factura, f.codigo_cliente, f.cant_ordenes_o,
               f.cant_ordenes_c, f.cant_despachos, nvl(f.valor_oftalmica,0),
               nvl(f.valor_contacto,0), f.valor_fletes,   f.valor_iva,
               f.valor_neto, f.hojas, f.codigo_nit, f.rete_fte
	from facturas f, control_fac cf
        where to_number(:codigo_emp) = f.tipo_factura         and
              f.tipo_documento       = 'C'                    and
              to_number(:codigo_emp) = cf.codigo_emp          and
              to_number(to_char(f.fecha_documento,'yyyymmdd')) <=
              decode(to_number(:numero_quincena),
                    1,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0)||15,'yymmdd'),'yyyymmdd')),
                    2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yyyymm')),'yyyymmdd')))  and
              to_number(to_char(f.fecha_documento,'yyyymmdd')) >=
              to_number(to_char(to_date(
              decode(to_number(:numero_quincena),
                    1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||lpad(1,2,0)),
                    2,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||16)),'yymmdd'),'yyyymmdd')) and
              not exists
              (select 'x'
               from   basura
               where  f.tipo_factura   = tipo_factura   and
                      f.tipo_documento = tipo_documento and
                      f.numero_factura = numero_factura)
         order by codigo_cliente; */ 


  /* EXEC SQL DECLARE C6 CURSOR FOR
        select f.numero_factura, f.codigo_cliente, f.cant_ordenes_o,
               f.cant_ordenes_c, f.cant_despachos, nvl(f.valor_oftalmica,0),
               nvl(f.valor_contacto,0), f.valor_fletes,   f.valor_iva,
               f.valor_neto, f.hojas, f.codigo_nit, f.rete_fte
	from facturas f, basura b, control_fac cf
        where b.tipo_documento   = f.tipo_documento                         and
              b.tipo_factura     = f.tipo_factura                           and
              b.numero_factura   = f.numero_factura                         and
              b.tipo_factura     = cf.codigo_emp                            and
               :codigo_emp       = cf.codigo_emp                            and
              to_number(to_char(f.fecha_documento,'yyyymmdd')) <=
              decode(to_number(:numero_quincena),
                    1,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0)||15,'yymmdd'),'yyyymmdd')),
                    2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yyyymm')),'yyyymmdd'))) and
              to_number(to_char(f.fecha_documento,'yyyymmdd')) >=
              to_number(to_char(to_date(
              decode(to_number(:numero_quincena),
                    1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||lpad(1,2,0)),
                    2,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||16)),'yymmdd'),'yyyymmdd'))
         order by codigo_cliente; */ 



 lista_empresa(1);
 lista_empresa(3);
 con_pag=0;
 lista_empresa(2);
 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)28;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 con_pag=0;
 serv=1;
 lista_basura(1);
 lista_basura(3);
 serv=0;
 lista_basura(2);
 cierre_impresora();

 /* EXEC SQL CLOSE C6; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)42;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 cierre_impresora();

 /* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)56;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 exit   (0);
}

void lista_empresa(e)
int e;
{
 sprintf(codigo_emp.arr,"%d",e);
 codigo_emp.len = strlen(codigo_emp.arr);
 empresa();

 strcpy(fecha,fecha_inicial.arr);
 fecha_oracle(fecha);
 strcpy(cadena,fecha);
 strcat(cadena," hasta ");
 strcpy(fecha,corte.arr);
 fecha_oracle(fecha);
 strcat(cadena,fecha);
 strcpy(fechas,cadena);

 inicio  = 0;
 staora  = 0;
 /* EXEC SQL OPEN C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 4;
 sqlbuft((void **)0, 
   "select f.numero_factura ,f.codigo_cliente ,f.cant_ordenes_o ,f.cant_orde\
nes_c ,f.cant_despachos ,nvl(f.valor_oftalmica,0) ,nvl(f.valor_contacto,0) ,\
f.valor_fletes ,f.valor_iva ,f.valor_neto ,f.hojas ,f.codigo_nit ,f.rete_fte\
  from facturas f ,control_fac cf where (((((to_number(:b0)=f.tipo_factura a\
nd f.tipo_documento='C') and to_number(:b0)=cf.codigo_emp) and to_number(to_\
char(f.fecha_documento,'yyyymmdd'))<=decode(to_number(:b2),1,to_number(to_ch\
ar(to_date(((cf.ano||lpad(cf.mes_proceso,2,0))||15),'yymmdd'),'yyyymmdd')),2\
,to_number(to_char(last_day(to_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yyyy\
mm')),'yyyymmdd')))) and to_number(to_char(f.fecha_documento,'yyyymmdd'))>=t\
o_number(to_char(to_date(decode(to_number(:b2),1,to_number(((cf.ano||lpad(cf\
.mes_proceso,2,0))||lpad(1,2,0))),2,to_number(((cf.ano||lpad(cf.mes_proceso,\
2,0))||16))),'yymmdd'),'yyyymmdd'))) and  not exists (select 'x'  from basur\
a where ((f.tipo_factura=tipo_factura and f.tipo_documento=tipo_documento) a\
nd f.numero_factura=numero_factura))) or");
 sqlstm.stmt = sq0002;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)70;
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
 sqlstm.sqhstv[2] = (unsigned char  *)&numero_quincena;
 sqlstm.sqhstl[2] = (unsigned long  )7;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C1 INTO :numero_factura, :codigo_cliente,
                              :cant_ordenes_o, :cant_ordenes_c, :cant_despachos,
                              :valor_oftalmica, :valor_contacto, :valor_fletes,
                              :valor_iva, :valor_neto, :hojas, :codigo_nit, :valor_rete_fte; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 13;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)100;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&numero_factura;
       sqlstm.sqhstl[0] = (unsigned long  )8;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&codigo_cliente;
       sqlstm.sqhstl[1] = (unsigned long  )12;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&cant_ordenes_o;
       sqlstm.sqhstl[2] = (unsigned long  )4;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&cant_ordenes_c;
       sqlstm.sqhstl[3] = (unsigned long  )4;
       sqlstm.sqindv[3] = (         short *)0;
       sqlstm.sqharm[3] = (unsigned long )0;
       sqlstm.sqhstv[4] = (unsigned char  *)&cant_despachos;
       sqlstm.sqhstl[4] = (unsigned long  )4;
       sqlstm.sqindv[4] = (         short *)0;
       sqlstm.sqharm[4] = (unsigned long )0;
       sqlstm.sqhstv[5] = (unsigned char  *)&valor_oftalmica;
       sqlstm.sqhstl[5] = (unsigned long  )8;
       sqlstm.sqindv[5] = (         short *)0;
       sqlstm.sqharm[5] = (unsigned long )0;
       sqlstm.sqhstv[6] = (unsigned char  *)&valor_contacto;
       sqlstm.sqhstl[6] = (unsigned long  )8;
       sqlstm.sqindv[6] = (         short *)0;
       sqlstm.sqharm[6] = (unsigned long )0;
       sqlstm.sqhstv[7] = (unsigned char  *)&valor_fletes;
       sqlstm.sqhstl[7] = (unsigned long  )8;
       sqlstm.sqindv[7] = (         short *)0;
       sqlstm.sqharm[7] = (unsigned long )0;
       sqlstm.sqhstv[8] = (unsigned char  *)&valor_iva;
       sqlstm.sqhstl[8] = (unsigned long  )8;
       sqlstm.sqindv[8] = (         short *)0;
       sqlstm.sqharm[8] = (unsigned long )0;
       sqlstm.sqhstv[9] = (unsigned char  *)&valor_neto;
       sqlstm.sqhstl[9] = (unsigned long  )8;
       sqlstm.sqindv[9] = (         short *)0;
       sqlstm.sqharm[9] = (unsigned long )0;
       sqlstm.sqhstv[10] = (unsigned char  *)&hojas;
       sqlstm.sqhstl[10] = (unsigned long  )4;
       sqlstm.sqindv[10] = (         short *)0;
       sqlstm.sqharm[10] = (unsigned long )0;
       sqlstm.sqhstv[11] = (unsigned char  *)&codigo_nit;
       sqlstm.sqhstl[11] = (unsigned long  )4;
       sqlstm.sqindv[11] = (         short *)0;
       sqlstm.sqharm[11] = (unsigned long )0;
       sqlstm.sqhstv[12] = (unsigned char  *)&valor_rete_fte;
       sqlstm.sqhstl[12] = (unsigned long  )8;
       sqlstm.sqindv[12] = (         short *)0;
       sqlstm.sqharm[12] = (unsigned long )0;
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

       codigo_cliente.arr   [codigo_cliente.len] = '\0';
       if (inicio == 0) {
           inicio  = 1;
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
           wciu.len = strlen(wciu.arr);
          }
       strcpy(wciu2,codigo_cliente.arr);
       strorg(wciu2,1,2);
       if (strcmp(wciu2,wciu.arr)) {
           strcpy(mensajes,"TOTAL CIUDAD");
           totaliza(0);
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
           wciu.len = strlen(wciu.arr);
           titulo_ciudad();
       }
       strcpy(wcod.arr,codigo_cliente.arr);
       wcod.len = strlen(wcod.arr);
       imprime_facturas();
 }
 if (con_lin > 56)
    titulos();
 strcpy(mensajes,"TOTAL CIUDAD");
 totaliza(0);
 strcpy(wciu.arr,codigo_cliente.arr);
 strorg(wciu.arr,1,2);
 wciu.len = strlen(wciu.arr);
 strcpy(mensajes,"TOTALES GENERALES");
 totaliza(1);
 total_fletes();
 con_lin=66;
 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 13;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)166;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void lista_basura(e)
int e;
{
 sprintf(codigo_emp.arr,"%d",e);
 codigo_emp.len = strlen(codigo_emp.arr);
 empresa();

 /* EXEC SQL OPEN C6; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 13;
 sqlstm.stmt = sq0003;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)180;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned long  )7;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&numero_quincena;
 sqlstm.sqhstl[1] = (unsigned long  )7;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&numero_quincena;
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



 inicio  = 0;
 staora  = 0;
 while (staora == 0) {

       /* EXEC SQL FETCH C6 INTO :numero_factura, :codigo_cliente,
                              :cant_ordenes_o, :cant_ordenes_c, :cant_despachos,
                              :valor_oftalmica, :valor_contacto, :valor_fletes,
                              :valor_iva, :valor_neto, :hojas, :codigo_nit, :valor_rete_fte; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 13;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)206;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&numero_factura;
       sqlstm.sqhstl[0] = (unsigned long  )8;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&codigo_cliente;
       sqlstm.sqhstl[1] = (unsigned long  )12;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&cant_ordenes_o;
       sqlstm.sqhstl[2] = (unsigned long  )4;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&cant_ordenes_c;
       sqlstm.sqhstl[3] = (unsigned long  )4;
       sqlstm.sqindv[3] = (         short *)0;
       sqlstm.sqharm[3] = (unsigned long )0;
       sqlstm.sqhstv[4] = (unsigned char  *)&cant_despachos;
       sqlstm.sqhstl[4] = (unsigned long  )4;
       sqlstm.sqindv[4] = (         short *)0;
       sqlstm.sqharm[4] = (unsigned long )0;
       sqlstm.sqhstv[5] = (unsigned char  *)&valor_oftalmica;
       sqlstm.sqhstl[5] = (unsigned long  )8;
       sqlstm.sqindv[5] = (         short *)0;
       sqlstm.sqharm[5] = (unsigned long )0;
       sqlstm.sqhstv[6] = (unsigned char  *)&valor_contacto;
       sqlstm.sqhstl[6] = (unsigned long  )8;
       sqlstm.sqindv[6] = (         short *)0;
       sqlstm.sqharm[6] = (unsigned long )0;
       sqlstm.sqhstv[7] = (unsigned char  *)&valor_fletes;
       sqlstm.sqhstl[7] = (unsigned long  )8;
       sqlstm.sqindv[7] = (         short *)0;
       sqlstm.sqharm[7] = (unsigned long )0;
       sqlstm.sqhstv[8] = (unsigned char  *)&valor_iva;
       sqlstm.sqhstl[8] = (unsigned long  )8;
       sqlstm.sqindv[8] = (         short *)0;
       sqlstm.sqharm[8] = (unsigned long )0;
       sqlstm.sqhstv[9] = (unsigned char  *)&valor_neto;
       sqlstm.sqhstl[9] = (unsigned long  )8;
       sqlstm.sqindv[9] = (         short *)0;
       sqlstm.sqharm[9] = (unsigned long )0;
       sqlstm.sqhstv[10] = (unsigned char  *)&hojas;
       sqlstm.sqhstl[10] = (unsigned long  )4;
       sqlstm.sqindv[10] = (         short *)0;
       sqlstm.sqharm[10] = (unsigned long )0;
       sqlstm.sqhstv[11] = (unsigned char  *)&codigo_nit;
       sqlstm.sqhstl[11] = (unsigned long  )4;
       sqlstm.sqindv[11] = (         short *)0;
       sqlstm.sqharm[11] = (unsigned long )0;
       sqlstm.sqhstv[12] = (unsigned char  *)&valor_rete_fte;
       sqlstm.sqhstl[12] = (unsigned long  )8;
       sqlstm.sqindv[12] = (         short *)0;
       sqlstm.sqharm[12] = (unsigned long )0;
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
                fprintf (stderr, "Error leyendo C6 (%d)\n", staora);

       codigo_cliente.arr   [codigo_cliente.len] = '\0';
       if (inicio == 0) {
           inicio  = 1;
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
           wciu.len = strlen(wciu.arr);
          }
       strcpy(wciu2,codigo_cliente.arr);
       strorg(wciu2,1,2);
       if (strcmp(wciu2,wciu.arr)) {
           strcpy(mensajes,"TOTAL CIUDAD");
           totaliza(0);
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
           wciu.len = strlen(wciu.arr);
           titulo_ciudad();
       }
       strcpy(wcod.arr,codigo_cliente.arr);
       wcod.len = strlen(wcod.arr);
       imprime_facturas();
 }
 if (con_lin > 56)
    titulos();
 strcpy(mensajes,"TOTAL CIUDAD");
 totaliza(0);
 strcpy(wciu.arr,codigo_cliente.arr);
 strorg(wciu.arr,1,2);
 wciu.len = strlen(wciu.arr);
 strcpy(mensajes,"TOTALES GENERALES");
 totaliza(1);
 total_fletes();
 con_lin=66;
 /* EXEC SQL CLOSE C6; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 13;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)272;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}


void imprime_facturas()
{
 int i;
 if (con_lin > 60)
    titulos();
 wcod.len  =  strlen(wcod.arr);
 if (codigo_nit > 0) {
    /* EXEC SQL select n.nombre
          into :nomb_clie
          from nits n
          where n.codigo_nit      = :codigo_nit; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 13;
    sqlstm.stmt = "select n.nombre into :b0  from nits n where n.codigo_nit=\
:b1";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)286;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
    sqlstm.sqhstl[0] = (unsigned long  )52;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_nit;
    sqlstm.sqhstl[1] = (unsigned long  )4;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 }
 else {
    /* EXEC SQL select n.nombre into :nomb_clie
          from nits n, clientes cl
          where n.codigo_nit      = cl.codigo_nit      and
                cl.codigo_cliente = :wcod; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 13;
    sqlstm.stmt = "select n.nombre into :b0  from nits n ,clientes cl where \
(n.codigo_nit=cl.codigo_nit and cl.codigo_cliente=:b1)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)308;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
    sqlstm.sqhstl[0] = (unsigned long  )52;
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


 }

 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Nits(C2) (%d)\n", sqlca.sqlcode);

 nomb_clie.arr   [nomb_clie.len] = '\0';
 nomb_clie.len = strlen(nomb_clie.arr);
 if (hojas > 1) {
    sprintf(cadena,"%06.0f",numero_factura+hojas-1);
    cadena[3]='-';
    strorg(cadena,4,3);
 }
 else strcpy(cadena,"  ");
 fprintf(fp,"%06.0f%3s ",numero_factura,cadena);
 strorg(nomb_clie.arr,1,39);
 nomb_clie.len = strlen(nomb_clie.arr);
// fprintf(fp,"%-39s",nomb_clie.arr);
 fprintf(fp,"%-39s"," ");
 sprintf(cadena,"%6d",cant_ordenes_o);
 fprintf(fp,"%3s",fmtnum("zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_oftalmica);
 fprintf(fp,"%14s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf(cadena,"%6d",cant_ordenes_c);
 fprintf(fp,"%9s",fmtnum("zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_contacto);
 fprintf(fp,"%14s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf(cadena,"%6d",cant_despachos);
 fprintf(fp,"%9s",fmtnum("zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_fletes);
 fprintf(fp,"%16s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf (cadena,"%9.2f",valor_iva);
 fprintf(fp,"%16s",fmtnum("zz,zzz,zz9.99",cadena,r_t));
 sprintf (cadena,"%7.0f",valor_rete_fte);
 fprintf(fp,"%10s",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf (cadena,"%9.2f",valor_neto);
 fprintf(fp,"%16s\n",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 con_lin+=1;
 for (i=0;i<=1;++i)
     acumulo_totales(i);

}

void totaliza(i)
int i;
{
 if (con_lin > 60)
    titulos();
 fprintf(fp,"\n%-10s"," ");
 fprintf(fp,"%s%s%-18s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);
 sprintf(cadena,"%6d",vect[i].cant_ordenes_o);
 fprintf(fp,"%6s",fmtnum("z,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",vect[i].valor_oftalmica);
 fprintf(fp,"%14s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf(cadena,"%6d",vect[i].cant_ordenes_c);
 fprintf(fp,"%9s",fmtnum("z,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",vect[i].valor_contacto);
 fprintf(fp,"%14s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf(cadena,"%6d",vect[i].cant_despachos);
 fprintf(fp,"%9s",fmtnum("z,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",vect[i].valor_fletes);
 fprintf(fp,"%16s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf (cadena,"%9.2f",vect[i].valor_iva);
 fprintf(fp,"%16s",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 sprintf (cadena,"%6.2f",vect[i].valor_rete_fte);
 fprintf(fp,"%10s",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf (cadena,"%9.2f",vect[i].valor_neto);
 fprintf(fp,"%16s\n",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
 con_lin+=2;
 borro_totales(i);
 tit_ciu=0;
}

void titulo_ciudad()
{
 wciu.len  =  strlen(wciu.arr);
 /* EXEC SQL select nombre into :nomb_ciudad
          from   ciudades
          where  codigo = :wciu; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 13;
 sqlstm.stmt = "select nombre into :b0  from ciudades where codigo=:b1";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)330;
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
 vect[i].cant_ordenes_o =0;
 vect[i].valor_oftalmica=0;
 vect[i].cant_ordenes_c =0;
 vect[i].valor_contacto =0;
 vect[i].cant_despachos =0;
 vect[i].valor_fletes   =0;
 vect[i].valor_iva      =0;
 vect[i].valor_rete_fte =0;
 vect[i].valor_neto     =0;
}

void borro_fletes(i)
int i;
{
 acum[i].cant_despachos =0;
 acum[i].valor_fletes   =0;
}

void acumulo_totales(i)
int i;
{
 vect[i].cant_ordenes_o +=cant_ordenes_o;
 vect[i].valor_oftalmica+=valor_oftalmica;
 vect[i].cant_ordenes_c +=cant_ordenes_c;
 vect[i].valor_contacto +=valor_contacto;
 vect[i].cant_despachos +=cant_despachos;
 vect[i].valor_fletes   +=valor_fletes;
 vect[i].valor_iva      +=valor_iva;
 vect[i].valor_rete_fte +=valor_rete_fte;
 vect[i].valor_neto     +=valor_neto;

 if (i == 0) {
    if (!strcmp(wciu.arr,"BG")||!strcmp(wciu.arr,"CL")||
        !strcmp(wciu.arr,"SM")||!strcmp(wciu.arr,"MD")||
        !strcmp(wciu.arr,"CG")) {
        acum[0].cant_despachos +=cant_despachos;
        acum[0].valor_fletes   +=valor_fletes;
    }
    else {
          acum[1].cant_despachos +=cant_despachos;
          acum[1].valor_fletes   +=valor_fletes;
    }
    acum[2].cant_despachos +=cant_despachos;
    acum[2].valor_fletes   +=valor_fletes;
 }
}

void total_fletes()
{
 int i;
/* strcpy(cadena,"TOTAL FLETES SERVICOMERCIALES");
 fprintf(fp,"\n%s%s%-40s%s",enfatizado_on,diezcpi,cadena,enfatizado_off);
 sprintf(cadena,"%6.0f",acum[0].nro_despachos);
 fprintf(fp,"%9s",fmtnum("z,zz9",cadena,r_t));
 sprintf(cadena,"%6.2f",acum[0].fletes);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zz9.99",cadena,r_t));
 strcpy(cadena,"TOTAL FLETES OTRAS RUTAS");
 fprintf(fp,"\n%s%-40s%s",enfatizado_on,cadena,enfatizado_off);
 sprintf(cadena,"%6.0f",acum[1].nro_despachos);
 fprintf(fp,"%9s",fmtnum("z,zz9",cadena,r_t));
 sprintf(cadena,"%6.2f",acum[1].fletes);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zz9.99",cadena,r_t));
*/
 strcpy(cadena,"TOTAL FLETES COBRADOS");
 fprintf(fp,"\n%s%-40s%s",enfatizado_on,cadena,enfatizado_off);
 sprintf(cadena,"%6.0f",acum[2].cant_despachos);
 fprintf(fp,"%9s",fmtnum("z,zz9",cadena,r_t));
 sprintf(cadena,"%6.2f",acum[2].valor_fletes);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zz9.99",cadena,r_t));
/*
 fprintf(fp,"\n%s%s\n",enfatizado_on,"TOTAL PAGADO SERVICOMERCIALES _________________");
 fprintf(fp,"\n%s\n","TOTAL PAGADO OTRAS RUTAS      _________________");
*/
 fprintf(fp,"\n%s%s\n","TOTAL FLETES PAGADOS          _________________",enfatizado_off);
 for (i=1;i<=3;i++) {
     borro_fletes(i);
 }
 con_lin+=4;
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
                  2,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||16)),'yymmdd'),
               to_date(to_char(to_date(
               decode(to_number(cf.numero_quincena),
                  1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||lpad(15,2,0)),
                  2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd'))),'yymmdd'),'yyyymmdd'),'yyyymmdd')
        into  :ano, :mes_proceso, :ptaje_iva, :fecha_inicial, :corte
	from  control_fac cf
        where cf.codigo_emp   = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 13;
 sqlstm.stmt = "select cf.ano ,cf.mes_proceso ,cf.ptaje_iva ,to_date(decode(\
to_number(cf.numero_quincena),1,to_number(((cf.ano||lpad(cf.mes_proceso,2,0))|\
|lpad(1,2,0))),2,to_number(((cf.ano||lpad(cf.mes_proceso,2,0))||16))),'yymmdd'\
) ,to_date(to_char(to_date(decode(to_number(cf.numero_quincena),1,to_number(((\
cf.ano||lpad(cf.mes_proceso,2,0))||lpad(15,2,0))),2,to_number(to_char(last_day\
(to_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yymm')),'yyyymmdd'))),'yymmdd'),'\
yyyymmdd'),'yyyymmdd') into :b0,:b1,:b2,:b3,:b4  from control_fac cf where cf.\
codigo_emp=:b5";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)352;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&ano;
 sqlstm.sqhstl[0] = (unsigned long  )4;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&mes_proceso;
 sqlstm.sqhstl[1] = (unsigned long  )4;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&ptaje_iva;
 sqlstm.sqhstl[2] = (unsigned long  )4;
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
 sqlstm.sqhstv[5] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[5] = (unsigned long  )7;
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
     fprintf (stderr, "Error leyendo Control_Fac(C4) (%d)\n", sqlca.sqlcode);

 fecha_inicial.arr [fecha_inicial.len] = '\0';
 corte.arr         [corte.len]         = '\0';

 /* EXEC SQL select nits.nombre into :nomb_emp
          from   empresas, nits
          where  empresas.codigo_nit = nits.codigo_nit and
                 empresas.codigo_emp = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 13;
 sqlstm.stmt = "select nits.nombre into :b0  from empresas ,nits where (empr\
esas.codigo_nit=nits.codigo_nit and empresas.codigo_emp=:b1)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)390;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
 sqlstm.sqhstl[0] = (unsigned long  )52;
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
     fprintf (stderr, "Error leyendo Empresa(C5) (%d)\n", sqlca.sqlcode);

 nomb_emp.arr   [nomb_emp.len] = '\0';
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/


void titulos()
{
 con_pag++;
 if (!strcmp(codigo_emp.arr,"3")){
    strcpy(nomb_emp.arr," ");
    nomb_emp.len = strlen(nomb_emp.arr);
 }
 fprintf(fp,"%s",salte_pagina);
 strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
 fprintf(fp,"%s%s%s%s%s\n\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
 if( serv == 0 )
   fprintf(fp,"%s%s%s%44s",diezcpi,condensado_on,ancho_on,"RESUMEN DE VENTA CONTADO");
 else  {
   if (!strcmp(codigo_emp.arr,"1"))
       fprintf(fp,"%s%s%s%39s",diezcpi,condensado_on,ancho_on,"SERVICIOS DE ADMINISTRACION");
   else
       fprintf(fp,"%s%s%s%46s",diezcpi,condensado_on,ancho_on,"MATERIA PRIMA");
 }
 fprintf(fp,"%s%s%17s %d\n\n",ancho_off,diezcpi,"PAGINA ",con_pag);
 strorg(fechas,1,strlen(fechas));
 fprintf(fp,"%s%62s%s\n\n",enfatizado_on,fechas,enfatizado_off);
// fprintf(fp,"%s%s%36s",condensado_on,"FACTURA","C L I E N T E / O P T I C A");
 fprintf(fp,"%s%s%36s",condensado_on,"FACTURA","                           ");
 fprintf(fp,"%46s\n","DIVISION OFTALMICA    DIVISION DE CONTACTO");
 fprintf(fp,"%s%159s\n",enfatizado_on,"   NUMERO VALOR ORDENES  NUMERO VALOR ORDENES     NUMERO   VALOR DESPACHOS    IMPOVENTAS    RETE  VALOR FACTURACION");
 fprintf(fp,"%s%113s     %d %%%21s%s\n\n","NUMERO","ORDENES  VENTA NETA   ORDENES VENTA NETA     DESPACHOS FLETES Y EMPAQUES",ptaje_iva,"       FUENTE  TOTAL CARTERA",enfatizado_off);
 con_lin = 10;
 if (tit_ciu == 0) {
    titulo_ciudad();
    tit_ciu=1;
  }
}
