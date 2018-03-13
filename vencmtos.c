
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
    ".\\vencmtos.pc"
};


static const unsigned long sqlctx = 987459287;


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
   unsigned char    *sqhstv[10];
   unsigned long    sqhstl[10];
	    short   *sqindv[10];
   unsigned long    sqharm[10];
   unsigned long     *sqharc[10];
} sqlstm = {8,10};

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
"select to_char(fecha_vencmto,'yyyymmdd') ,facturam.saldo ,codigo_cliente  fr\
om facturas ,facturam where ((((((((facturas.tipo_factura=facturam.tipo_factur\
a and facturas.tipo_documento=facturam.tipo_documento) and facturas.numero_fac\
tura=facturam.numero_factura) and facturam.ano_mes=(select max(fm.ano_mes)  fr\
om facturam fm where (((fm.tipo_factura=facturas.tipo_factura and fm.tipo_docu\
mento=facturas.tipo_documento) and fm.numero_factura=facturas.numero_factura) \
and fm.ano_mes<=to_number(:b0)))) and facturas.tipo_factura=to_number(:b1)) an\
d facturas.codigo_cliente>=:b2) and facturas.codigo_cliente<=:b3) and facturas\
.estado_factura=0) and facturas.estado_cartera=0) order by codigo_cliente,fech\
a_documento            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,143,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,723,0,9,182,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
58,0,0,2,0,0,13,184,0,3,0,0,1,0,2,9,0,0,2,4,0,0,2,9,0,0,
84,0,0,3,126,0,4,194,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
106,0,0,4,315,0,4,205,0,4,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,
136,0,0,5,598,0,4,223,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
166,0,0,2,0,0,15,249,0,0,0,0,1,0,
180,0,0,6,0,0,30,250,0,0,0,0,1,0,
194,0,0,2,0,0,13,279,0,3,0,0,1,0,2,9,0,0,2,4,0,0,2,9,0,0,
220,0,0,7,70,0,3,323,0,10,10,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
};


/*****************************************************************
* CLISTINT.C Version 1.0 - Rev 1.2 - Ago. 26/93.
*
* clistven.c Programa lista carta de facturas pendientes de un cliente
*
* Uso : clistint codigo_emp cod_ini cod_fin fecha_corte
*       device userid/password
*
* Mario E. Santiago I. Creado Agosto 26-1993
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
void imprime_facturas();
void pie_carta();
void imprime_vencmtos();
void acum_facturas();
void calcula_dias();
                                     /* Parametros de comunicacion con ORACLE */

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid            [100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;
 
/* VARCHAR nomb_emp       [61]; */ 
struct { unsigned short len; unsigned char arr[61]; } nomb_emp;

/* VARCHAR nomb_clie      [41]; */ 
struct { unsigned short len; unsigned char arr[41]; } nomb_clie;

/* VARCHAR nomb_repre     [41]; */ 
struct { unsigned short len; unsigned char arr[41]; } nomb_repre;

/* VARCHAR nomb_ciu       [21]; */ 
struct { unsigned short len; unsigned char arr[21]; } nomb_ciu;

/* VARCHAR codigo_cliente [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_cliente;

/* VARCHAR cod_clie       [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } cod_clie;

/* VARCHAR codigo_emp     [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

/* VARCHAR fecha_documento[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } fecha_documento;

/* VARCHAR fecha_vencmto  [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } fecha_vencmto;

double  saldo_factura;
double  numero_factura;
/* VARCHAR tipo_documento [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } tipo_documento;

float   dias_factura;
/* VARCHAR ano_mes        [9]; */ 
struct { unsigned short len; unsigned char arr[9]; } ano_mes;

/* VARCHAR cod_cliei      [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } cod_cliei;

/* VARCHAR cod_clief      [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } cod_clief;

double  total_facturas;
/* VARCHAR porvencer      [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } porvencer;

/* VARCHAR a30dias        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } a30dias;

/* VARCHAR a60dias        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } a60dias;

/* VARCHAR a90dias        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } a90dias;

/* vARCHAR a120dias       [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } a120dias;

/* VARCHAR total          [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } total;


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


char    *fmtnum(), r_t[80];
int     con_pag=0;
int     con_lin=66;
char    copias[3];
char    mes_t[7][10];
int     i;
int     w_ano_corte;
int     w_mes_corte;
int     w_dia_corte;
int     ano_corte;
int     mes_corte;
int     dia_corte;
char    cadena[100];
char    cadena2[30];
char    wcadena[30];
char    fecha_corte[7];
char    mensajes[20];
int     a;
int     oraest;

double  total_deuda;
double  por_vencer;
double  a_30_dias;
double  a_60_dias;
double  a_90_dias;
double  a_120_dias;
double  total_dias;
int     dia_vencmto;
int     mes_vencmto;
int     ano_vencmto;
int     total_tiempo_dia;
int     total_tiempo_mes;
int     total_tiempo_ano;
int     pasan=0;

void main(argc, argv)
int     argc;
char    *argv[];
{
 char	device[6];
 int	status = 0;

 if (argc < 6)
    {
     printf ("Incorrecta invocacion:\n");
     printf ("Uso : clistint codigo_emp clie_ini clie_fin\n");
     printf ("fecha_corte device userid/password\n");
     printf ("      device : t salida por terminal\n");
     printf ("               Px salida por impresora (x nro printer)\n");
     printf ("               userid/password nombre usuario y password\n");
     exit (1);
    }

 strcpy (codigo_emp.arr, argv[1]);
 codigo_emp.len   =  strlen(codigo_emp.arr);
 strcpy (cod_cliei.arr,   argv[2]);
 cod_cliei.len    =  strlen(cod_cliei.arr);
 strcpy (cod_clief.arr,   argv[3]);
 cod_clief.len    =  strlen(cod_clief.arr);
 strcpy (fecha_corte, argv[4]);
 strcpy (ano_mes.arr,fecha_corte);
 strorg (ano_mes.arr,1,6);
 ano_mes.len      =  strlen(ano_mes.arr);
 strcpy (device,     argv[5]);
 strlow (device);
 strcpy(cadena,fecha_corte);
 strorg(cadena,7,2);
 dia_corte =  atoi(cadena);
 strcpy(cadena,fecha_corte);
 strorg(cadena,5,2);
 mes_corte =  atoi(cadena);
 strcpy(cadena,fecha_corte);
 strorg(cadena,1,4);
 ano_corte =  atoi(cadena);

 if (!strpos ("/",   argv[6]))
    {
     printf ("user id/password incorrecto.\n");
     exit (1);
 }
 strcpy (uid.arr,    argv[6]);
 uid.len   =  strlen(uid.arr);

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



 if (sqlca.sqlcode==-1915) {
     fprintf (stderr,"Oracle Base de Datos no esta activa. SGA (%d)\n",
	      sqlca.sqlcode);
     exit (1);
 }
 else if (sqlca.sqlcode==-1017) {
          fprintf (stderr,"User Name/Password es Invalido. Re-intente.\n");
          exit (1);
      }
      else if (sqlca.sqlcode)
               exit (1);


 busco_impresora(device);
 abre_impresora("1");

 /* EXEC SQL DECLARE C2 CURSOR FOR
        select to_char(fecha_vencmto,'yyyymmdd'), facturam.saldo,
               codigo_cliente
        from   facturas, facturam
        where  facturas.tipo_factura    = facturam.tipo_factura   and
               facturas.tipo_documento  = facturam.tipo_documento and
               facturas.numero_factura  = facturam.numero_factura and
               facturam.ano_mes         =
               (select max(fm.ano_mes)
                from facturam fm
                where fm.tipo_factura   = facturas.tipo_factura   and
                      fm.tipo_documento = facturas.tipo_documento and
                      fm.numero_factura = facturas.numero_factura and
                      fm.ano_mes       <= to_number(:ano_mes))    and
         facturas.tipo_factura          = to_number(:codigo_emp)  and
         facturas.codigo_cliente       >= (:cod_cliei)            and
         facturas.codigo_cliente       <= (:cod_clief)            and
         facturas.estado_factura        = 0                       and
         facturas.estado_cartera        = 0
         order by codigo_cliente, fecha_documento; */ 


 /* EXEC SQL OPEN C2; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 4;
 sqlstm.stmt = sq0002;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)28;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&ano_mes;
 sqlstm.sqhstl[0] = (unsigned long  )11;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned long  )5;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&cod_cliei;
 sqlstm.sqhstl[2] = (unsigned long  )8;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&cod_clief;
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



 /* EXEC SQL FETCH C2 INTO :fecha_documento, :saldo_factura, :codigo_cliente; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 4;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)58;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&fecha_documento;
 sqlstm.sqhstl[0] = (unsigned long  )12;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&saldo_factura;
 sqlstm.sqhstl[1] = (unsigned long  )8;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&codigo_cliente;
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



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
     fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);

 oraest  = sqlca.sqlcode;

 fecha_documento.arr  [fecha_documento.len] = '\0';
 codigo_cliente.arr   [codigo_cliente.len]  = '\0';

 /* EXEC SQL select nombre into :nomb_emp
          from   empresas, nits
          where  empresas.codigo_nit = nits.codigo_nit and
                 empresas.codigo_emp = to_number(:codigo_emp); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 4;
 sqlstm.stmt = "select nombre into :b0  from empresas ,nits where (empresas.\
codigo_nit=nits.codigo_nit and empresas.codigo_emp=to_number(:b1))";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)84;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
 sqlstm.sqhstl[0] = (unsigned long  )63;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
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



 nomb_emp.arr[nomb_emp.len] = '\0';

 while (oraest==0) {
    strcpy(cod_clie.arr,codigo_cliente.arr);
    cod_clie.len = strlen(cod_clie.arr);
    /* C1 */
    /* EXEC SQL select n.nombre, r.nombre, nvl(n.nombre_muni,c.nombre)
             into :nomb_clie, :nomb_repre, :nomb_ciu
             from  nits n, representa r, ciudades c, clientes cl
             where n.codigo_nit       = cl.codigo_nit               and
                   n.codigo_nit       = r.codigo_nit(+)             and
                   n.codigo_ciu       = c.codigo                    and
                   cl.codigo_cliente  = (:cod_clie)
             group by cl.codigo_cliente, n.nombre, r.nombre,
                   n.nombre_muni, c.nombre; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = "select n.nombre ,r.nombre ,nvl(n.nombre_muni,c.nombre) in\
to :b0,:b1,:b2  from nits n ,representa r ,ciudades c ,clientes cl where (((n.\
codigo_nit=cl.codigo_nit and n.codigo_nit=r.codigo_nit(+)) and n.codigo_ciu=c.\
codigo) and cl.codigo_cliente=:b3) group by cl.codigo_cliente,n.nombre,r.nombr\
e,n.nombre_muni,c.nombre";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)106;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
    sqlstm.sqhstl[0] = (unsigned long  )43;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&nomb_repre;
    sqlstm.sqhstl[1] = (unsigned long  )43;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&nomb_ciu;
    sqlstm.sqhstl[2] = (unsigned long  )23;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&cod_clie;
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



    nomb_clie.arr   [nomb_clie.len]  = '\0';
    nomb_repre.arr  [nomb_repre.len] = '\0';
    nomb_ciu.arr    [nomb_ciu.len]   = '\0';

    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
        fprintf (stderr, "Error leyendo Cliente (%s)(%s)(%d)\n", cod_clie.arr, codigo_cliente.arr, sqlca.sqlcode);

    /* C3 */
    /* EXEC SQL select sum(facturam.saldo)
             into   :total_facturas
             from   facturas, facturam
             where  facturas.tipo_factura    = facturam.tipo_factura   and
                    facturas.tipo_documento  = facturam.tipo_documento and
                    facturas.numero_factura  = facturam.numero_factura and
                    facturam.ano_mes         =
                    (select max(fm.ano_mes)
                     from facturam fm
                     where fm.tipo_factura   = facturas.tipo_factura   and
                           fm.tipo_documento = facturas.tipo_documento and
                           fm.numero_factura = facturas.numero_factura and
                           fm.ano_mes       <= to_number(:ano_mes))    and
              facturas.tipo_factura          = to_number(:codigo_emp)  and
              facturas.codigo_cliente        = (:cod_clie)             and
              facturas.estado_factura        = 0                       and
              facturas.estado_cartera        = 0; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = "select sum(facturam.saldo) into :b0  from facturas ,factu\
ram where (((((((facturas.tipo_factura=facturam.tipo_factura and facturas.tipo\
_documento=facturam.tipo_documento) and facturas.numero_factura=facturam.numer\
o_factura) and facturam.ano_mes=(select max(fm.ano_mes)  from facturam fm wher\
e (((fm.tipo_factura=facturas.tipo_factura and fm.tipo_documento=facturas.tipo\
_documento) and fm.numero_factura=facturas.numero_factura) and fm.ano_mes<=to_\
number(:b1)))) and facturas.tipo_factura=to_number(:b2)) and facturas.codigo_c\
liente=:b3) and facturas.estado_factura=0) and facturas.estado_cartera=0)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)136;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&total_facturas;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
    sqlstm.sqhstl[1] = (unsigned long  )11;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[2] = (unsigned long  )5;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&cod_clie;
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



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
        fprintf (stderr, "Error leyendo saldo cliente (%d)\n", sqlca.sqlcode);

    imprime_vencmtos();
 }

 cierre_impresora();

 /* EXEC SQL CLOSE C2; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 4;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)166;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 /* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 4;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)180;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 exit   (0);
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
 strcpy(porvencer.arr,"");
 porvencer.len  = strlen(porvencer.arr);
 strcpy(a30dias.arr,"");
 a30dias.len  = strlen(a30dias.arr);
 strcpy(a60dias.arr,"");
 a60dias.len  = strlen(a60dias.arr);
 strcpy(a90dias.arr,"");
 a90dias.len  = strlen(a90dias.arr);
 strcpy(a120dias.arr,"");
 a120dias.len  = strlen(a120dias.arr);
 strcpy(total.arr,"");
 total.len  = strlen(total.arr);

 while ( !strcmp(cod_clie.arr, codigo_cliente.arr) && oraest == 0 ) {

        acum_facturas();
        /* EXEC SQL FETCH C2 INTO :fecha_documento, :saldo_factura, :codigo_cliente; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 4;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)194;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&fecha_documento;
        sqlstm.sqhstl[0] = (unsigned long  )12;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&saldo_factura;
        sqlstm.sqhstl[1] = (unsigned long  )8;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&codigo_cliente;
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
        if (sqlca.sqlcode == 1403) break;

        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
            fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);

        fecha_documento.arr  [fecha_documento.len] = '\0';
        codigo_cliente.arr   [codigo_cliente.len]  = '\0';
 }

 if (pasan!=1) {

     if (por_vencer > 0) {
        sprintf(cadena,"%12.2f",por_vencer);
        sprintf(porvencer.arr,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
        porvencer.len  = strlen(porvencer.arr);
     }
     if (a_30_dias > 0) {
        sprintf(cadena,"%12.2f",a_30_dias);
        sprintf(a30dias.arr,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
        a30dias.len  = strlen(a30dias.arr);
     }
     if (a_60_dias > 0) {
        sprintf(cadena,"%12.2f",a_60_dias);
        sprintf(a60dias.arr,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
        a60dias.len  = strlen(a60dias.arr);
     }
     if (a_90_dias > 0) {
        sprintf(cadena,"%12.2f",a_90_dias);
        sprintf(a90dias.arr,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
        a90dias.len  = strlen(a90dias.arr);
     }
     if (a_120_dias > 0) {
        sprintf(cadena,"%12.2f",a_120_dias);
        sprintf(a120dias.arr,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
        a120dias.len  = strlen(a120dias.arr);
     }
     total_deuda = a_30_dias+a_60_dias+a_90_dias+a_120_dias;
     sprintf(cadena,"%12.2f",total_deuda);
     sprintf(total.arr,"%13s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
     total.len  = strlen(total.arr);

     if(total_deuda > 0) {
        /* EXEC SQL
           insert into saldoscli
           values ((:codigo_emp),
                   (:cod_clie),
                   (:nomb_clie),
                   (:nomb_ciu),
                   (:porvencer),
                   (:a30dias),
                   (:a60dias),
                   (:a90dias),
                   (:a120dias),
                   (:total)); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 10;
        sqlstm.stmt = "insert into saldoscli values (:b0,:b1,:b2,:b3,:b4,:b5\
,:b6,:b7,:b8,:b9)";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)220;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned long  )5;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&cod_clie;
        sqlstm.sqhstl[1] = (unsigned long  )8;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&nomb_clie;
        sqlstm.sqhstl[2] = (unsigned long  )43;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&nomb_ciu;
        sqlstm.sqhstl[3] = (unsigned long  )23;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&porvencer;
        sqlstm.sqhstl[4] = (unsigned long  )16;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqharm[4] = (unsigned long )0;
        sqlstm.sqhstv[5] = (unsigned char  *)&a30dias;
        sqlstm.sqhstl[5] = (unsigned long  )16;
        sqlstm.sqindv[5] = (         short *)0;
        sqlstm.sqharm[5] = (unsigned long )0;
        sqlstm.sqhstv[6] = (unsigned char  *)&a60dias;
        sqlstm.sqhstl[6] = (unsigned long  )16;
        sqlstm.sqindv[6] = (         short *)0;
        sqlstm.sqharm[6] = (unsigned long )0;
        sqlstm.sqhstv[7] = (unsigned char  *)&a90dias;
        sqlstm.sqhstl[7] = (unsigned long  )16;
        sqlstm.sqindv[7] = (         short *)0;
        sqlstm.sqharm[7] = (unsigned long )0;
        sqlstm.sqhstv[8] = (unsigned char  *)&a120dias;
        sqlstm.sqhstl[8] = (unsigned long  )16;
        sqlstm.sqindv[8] = (         short *)0;
        sqlstm.sqharm[8] = (unsigned long )0;
        sqlstm.sqhstv[9] = (unsigned char  *)&total;
        sqlstm.sqhstl[9] = (unsigned long  )16;
        sqlstm.sqindv[9] = (         short *)0;
        sqlstm.sqharm[9] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


     }
 }
}

/* Acumula las facturas y calcula su vencimiento */

void acum_facturas()
{
 if (strcmp(fecha_documento.arr,fecha_corte) > 0) {
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
 strcpy(cadena,fecha_documento.arr);
 strorg(cadena,7,2);
 dia_vencmto=atoi(cadena);
 if (dia_vencmto > 27 && dia_vencmto < 32)
     dia_vencmto=30;
 strcpy(cadena,fecha_documento.arr);
 strorg(cadena,5,2);
 mes_vencmto=atoi(cadena);
 strcpy(cadena,fecha_documento.arr);
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

