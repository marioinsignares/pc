
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
    ".\\clistans.pc"
};


static const unsigned long sqlctx = 1156261712;


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
   unsigned char    *sqhstv[5];
   unsigned long    sqhstl[5];
	    short   *sqindv[5];
   unsigned long    sqharm[5];
   unsigned long     *sqharc[5];
} sqlstm = {8,5};

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
"select clientes.codigo_cliente ,nombre ,clientem.saldo  from clientes ,clien\
tem ,nits where ((((((((clientes.codigo_cliente=clientem.codigo_cliente and cl\
ientes.codigo_cliente>=:b0) and clientes.codigo_cliente<=:b1) and clientem.ano\
_mes=(select max(ano_mes)  from clientem cm where ((cm.codigo_emp=to_number(:b\
2) and cm.codigo_cliente=clientes.codigo_cliente) and cm.ano_mes<=to_number(:b\
3)))) and clientem.codigo_emp=to_number(:b2)) and clientes.estado<>'R') and cl\
ientes.codigo_nit=nits.codigo_nit) and clientem.saldo<>0) and exists (select '\
x'  from clienser where clientes.codigo_cliente=codigo_cliente)) order by clie\
ntes.codigo_cliente            ";
 static const char *sq0006 = 
"select to_char(fecha_vencmto,'yyyymmdd') ,nvl(facturam.saldo,0)  from factur\
as ,facturam where (((((((facturas.tipo_factura=to_number(:b0) and facturas.ti\
po_factura=facturam.tipo_factura) and facturas.tipo_documento=facturam.tipo_do\
cumento) and facturas.numero_factura=facturam.numero_factura) and facturam.ano\
_mes=(select max(ano_mes)  from facturam fm where (((fm.tipo_factura=facturas.\
tipo_factura and fm.tipo_documento=facturas.tipo_documento) and fm.numero_fact\
ura=facturas.numero_factura) and fm.ano_mes<=to_number(:b1)))) and facturas.co\
digo_cliente=:b2) and facturas.estado_factura=0) and facturam.saldo>0)        \
   ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,176,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,34,0,4,194,0,1,0,0,1,0,2,3,0,0,
46,0,0,4,126,0,4,312,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
68,0,0,3,653,0,9,319,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
102,0,0,3,0,0,13,323,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,
128,0,0,3,0,0,15,365,0,0,0,0,1,0,
142,0,0,5,0,0,30,370,0,0,0,0,1,0,
156,0,0,6,625,0,9,444,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
182,0,0,6,0,0,13,447,0,2,0,0,1,0,2,9,0,0,2,4,0,0,
204,0,0,6,0,0,15,463,0,0,0,0,1,0,
218,0,0,7,54,0,4,650,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
};


/*****************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - Sep. 26/91.
*
* clistana.c Programa de facturacion para listar las clistana de la quincena
*
* Uso : clistana codigo_emp fecha_corte fecha_movto pagina_ini pagina_fin
*       device   copias     userid/password
*
* Mario E. Santiago I. Creado Septiembre 26-1991
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void titulos();
void acumulo_cliente();
void acum_facturas();
void calcula_dias();
void imprime_vencmtos();
void imprime_totales(int i);
void borra_acumulados(int i);
void titulo_ciudad();

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Empresa (C1) */
/* VARCHAR nomb_emp    [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_emp;

double  nit;
int     digito;
int     a2k;
/* VARCHAR codigo_emp  [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;


/*
  Arreglo que contienen los valores de total deuda del cliente,
          lo que esta por vencer, a 30 dias, 90 dias, 60 dias,
          120 o mas dias.
  El primer elemento de cada arreglo se|ala al cliente,
  el segundo se|ala los totales por ciudad y el tercero los generales.

*/

double total_deuda[4];   /* Total deuda del cliente      */
double por_vencer [4];   /* Total por vencer del cliente */
double a_30_dias_1[4];   /* Total en la primera quincena */
double a_30_dias_2[4];   /* Total en la segunda quincena */
double a_60_dias_1[4];   /* Total en la primera quincena */
double a_60_dias_2[4];   /* Total en la segunda quincena */
double a_90_dias_1[4];   /* Total en la primera quincena */
double a_90_dias_2[4];   /* Total en la segunda quincena */
double a_120_dias [4];   /* Total en las dos quincenas   */

/* VARCHAR nomb_ciu[60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nomb_ciu;


/* VARCHAR cliente_ini   [9]; */ 
struct { unsigned short len; unsigned char arr[9]; } cliente_ini;

/* VARCHAR cliente_fin   [9]; */ 
struct { unsigned short len; unsigned char arr[9]; } cliente_fin;

/* VARCHAR codigo_cliente[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_cliente;

/* VARCHAR nomb_clie[60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nomb_clie;

double  saldo_cliente;

/* VARCHAR fecha_vencmto[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_vencmto;

double  saldo_factura;

double  suma_total;
char    *fmtnum(), r_t[100];
int     con_pag=0;
int     con_lin=66;
/* VARCHAR cod_clie[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cod_clie;

char    pagina_ini[10];
int     pag_ini;
char    pagina_fin[10];
int     pag_fin;
char    copias[10];
/* VARCHAR ano_mes[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

char    mes_t[10][20];
int     i;
int     tit_ciu=0;
int     w_ano_corte;
int     w_mes_corte;
int     w_dia_corte;
int     ano_corte;
int     mes_corte;
int     dia_corte;
int     ano_movto;
int     mes_movto;
int     dia_movto;
int     ano_vencmto;
int     mes_vencmto;
int     dia_vencmto;
int     total_tiempo_ano;
int     total_tiempo_mes;
int     total_tiempo_dia;
int     total_dias;
char    cadena[120];
char    cadena2[120];
char    recobrar[9];
char    fecha_corte[20];
char    fecha_movto[20];
char    fecha_listado[80];
char    linea_fecha_movto[80];
char    titulo_listado[80];
/* VARCHAR cod_ciu[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cod_ciu;

char    wcod_ciu[10];
char    mensajes[70];
int	oraest;

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


int     a;

void main(argc, argv)
int     argc;
char    *argv[];
{
 char	device[6];
 int	status = 0;

 if (argc < 9)
    {
     printf ("Incorrecta invocacion:\n");
     printf ("Uso : clistana codigo_emp cliente_ini cliente_fin fecha_corte fecha_movto\n");
     printf ("pagina_ini pagina_fin\n");
     printf ("device copias userid/password\n");
     printf ("      device : t salida por terminal\n");
     printf ("               Px salida por impresora (x nro printer)\n");
     printf ("               userid/password nombre usuario y password\n");
     exit (1);
    }

 strcpy (codigo_emp.arr ,argv[1]);

 strcpy (cliente_ini.arr  , argv[2]);
 cliente_ini.len   =        strlen(cliente_ini.arr);
 strcpy (cliente_fin.arr  , argv[3]);
 cliente_fin.len   =        strlen(cliente_fin.arr);

 codigo_emp.len = strlen(codigo_emp.arr);
 strcpy (fecha_corte,argv[4]);
 strcpy (fecha_movto,argv[5]);
 if ( strlen(fecha_corte) != 8 || strlen(fecha_movto) != 8 ) {
    printf("Error, la fecha debe ser de 8 digitos y formato AAAAMMDD");
    exit (1);
 }
 strcpy (pagina_ini, argv[6]);
 pag_ini=atoi(pagina_ini);
 strcpy (pagina_fin, argv[7]);
 pag_fin=atoi(pagina_fin);
 strcpy (device,     argv[8]);
 strlow (device);
 strcpy (copias,     argv[9]);
 strcpy(recobrar,"N");
 if (pag_ini > 1)
    strcpy(recobrar,"S");
 for (i=1;i<=3;i++) {
      borra_acumulados(i);
 }

if (!strpos ("/",   argv[10]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,    argv[10]);
uid.len = strlen(uid.arr);

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



if (oraest==-1915)
   {
    fprintf (stderr,"Oracle Base de Datos no esta activa. SGA (%d)\n",
    oraest);
    exit (1);
   }
else
  if (oraest==-1017)
  {
   fprintf (stderr,"User Name/Password es Invalido. Re-intente.\n");
   exit (1);
  }
  else
  if (oraest)
     exit (1);

  /* EXEC SQL select y2k
           into   :a2k
           from   ano2000; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 3;
  sqlstm.stmt = "select y2k into :b0  from ano2000 ";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)28;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&a2k;
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


  if (sqlca.sqlcode != 0 ) {
     fprintf (stderr, "Error, No existe registro alguno en tabla Y2K (%d)\n", sqlca.sqlcode);
     exit (1);
  }

  strcpy (ano_mes.arr,fecha_corte);
  strorg (ano_mes.arr,1,6);
  ano_mes.len = strlen(ano_mes.arr);

  strcpy(cadena,fecha_corte);
  strorg(cadena,7,2);
  dia_corte =  atoi(cadena);
  strcpy(cadena,fecha_corte);
  strorg(cadena,5,2);
  mes_corte =  atoi(cadena);
  strcpy(cadena,fecha_corte);
  strorg(cadena,1,4);
  ano_corte =  atoi(cadena);
  strcpy(cadena,fecha_movto);
  strorg(cadena,7,2);
  dia_movto =  atoi(cadena);
  strcpy(cadena,fecha_movto);
  strorg(cadena,5,2);
  mes_movto =  atoi(cadena);
  strcpy(cadena,fecha_movto);
  strorg(cadena,1,4);
  ano_movto =  atoi(cadena);

  strcpy(titulo_listado,"Analisis de Cartera de Servicios");
  sprintf(cadena,"%d",ano_corte);
  fmtnum("zz,zzz",cadena,r_t);
  sprintf(fecha_listado,"%s %s %d %s%s","Fecha de corte a",mes[mes_corte-1],dia_corte,"de",r_t);


  a=0;
  if ((mes_corte==1) && dia_corte <16)
     a=26;
  else {
        if (mes_corte == 1)
           a=2;
        else a=mes_corte*2;
       }
  if (dia_corte < 16)
      a-=1;
  strcpy(mes_t[1],meq[a-1]);
  a--;
  if (a==0)
     a=24;
  strcpy(mes_t[2],meq[a-1]);
  a--;
  if (a==0)
     a=24;
  strcpy(mes_t[3],meq[a-1]);
  a--;
  if (a==0)
     a=24;
  strcpy(mes_t[4],meq[a-1]);
  a--;
  if (a==0)
     a=24;
  strcpy(mes_t[5],meq[a-1]);
  a--;
  if (a==0)
     a=24;
  strcpy(mes_t[6],meq[a-1]);
  a--;
  if (a==0)
     a=24;
  strcpy(mes_t[7],meq[a-1]);
  a--;
  if (a==0)
     a=24;
  if (mes_corte==4 || mes_corte==6 || mes_corte==9 || mes_corte==11) {
     if (dia_corte==30) {
         dia_corte=31;
         fecha_corte[6]='3';
         fecha_corte[7]='1';
     }
  }
  if (mes_corte==2) {
     if (dia_corte==28 || dia_corte==29) {
         dia_corte=31;
         fecha_corte[6]='3';
         fecha_corte[7]='1';
     }
  }

  sprintf(cadena,"%d",ano_movto);
  fmtnum("zz,zzz",cadena,r_t);
  sprintf(linea_fecha_movto,"%s %s %d %s%s","Movimiento hasta",mes[mes_movto-1],dia_movto,"de",r_t);
       /* EXEC SQL DECLARE C1 CURSOR FOR
       select clientes.codigo_cliente, nombre, clientem.saldo
        from   clientes, clientem, nits
        where  clientes.codigo_cliente = clientem.codigo_cliente  and
               clientes.codigo_cliente >= :cliente_ini            and
               clientes.codigo_cliente <= :cliente_fin            and
               clientem.ano_mes        =
               (select max(ano_mes)
                from clientem cm
                where cm.codigo_emp     = to_number(:codigo_emp)  and
                      cm.codigo_cliente = clientes.codigo_cliente and
                      cm.ano_mes       <= to_number(:ano_mes))    and
        clientem.codigo_emp             = to_number(:codigo_emp)  and
        clientes.estado                != 'R'                     and
        clientes.codigo_nit             = nits.codigo_nit         and
        clientem.saldo                 <> 0                       and
              exists
              (select 'x'
               from   clienser
               where  clientes.codigo_cliente = codigo_cliente)
        order by clientes.codigo_cliente; */ 


busco_impresora(device);
abre_impresora(copias);

       /* EXEC SQL select nombre into :nomb_emp
                from   empresas, nits
                where  empresas.codigo_nit = nits.codigo_nit and
                       empresas.codigo_emp = to_number(:codigo_emp); */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 3;
       sqlstm.stmt = "select nombre into :b0  from empresas ,nits where (emp\
resas.codigo_nit=nits.codigo_nit and empresas.codigo_emp=to_number(:b1))";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)46;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
       sqlstm.sqhstl[0] = (unsigned long  )53;
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

   /* EXEC SQL OPEN C1; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 5;
   sqlstm.stmt = sq0003;
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)68;
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
   sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
   sqlstm.sqhstl[2] = (unsigned long  )5;
   sqlstm.sqindv[2] = (         short *)0;
   sqlstm.sqharm[2] = (unsigned long )0;
   sqlstm.sqhstv[3] = (unsigned char  *)&ano_mes;
   sqlstm.sqhstl[3] = (unsigned long  )22;
   sqlstm.sqindv[3] = (         short *)0;
   sqlstm.sqharm[3] = (unsigned long )0;
   sqlstm.sqhstv[4] = (unsigned char  *)&codigo_emp;
   sqlstm.sqhstl[4] = (unsigned long  )5;
   sqlstm.sqindv[4] = (         short *)0;
   sqlstm.sqharm[4] = (unsigned long )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    oraest = 0;
while (oraest ==0) {
      /* EXEC SQL FETCH C1 INTO :codigo_cliente, :nomb_clie, :saldo_cliente; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 5;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)102;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
      sqlstm.sqhstl[0] = (unsigned long  )12;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&nomb_clie;
      sqlstm.sqhstl[1] = (unsigned long  )62;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&saldo_cliente;
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



      oraest = sqlca.sqlcode;

      if (oraest == 1403) break;
      else if (oraest == -1405) oraest = 0;
           else if (oraest) printf ("Error C1 (%d)\n", oraest);

      codigo_cliente.arr[codigo_cliente.len] = '\0';
      nomb_clie.arr[nomb_clie.len] = '\0';

      if (status == 0) {
         strcpy(cadena,codigo_cliente.arr);
         strorg(cadena,1,2);
         strcpy(cod_ciu.arr,cadena);
         cod_ciu.len = strlen(cod_ciu.arr);
         status = 1;
      }

      strcpy(cadena,codigo_cliente.arr);
      strorg(cadena,1,2);
      strcpy(wcod_ciu,cadena);
      if (strcmp(cod_ciu.arr,wcod_ciu)) {
          strcpy(mensajes,"TOTAL CIUDAD     ");
          imprime_totales(2);
          strcpy(cadena,codigo_cliente.arr);
          strorg(cadena,1,2);
          strcpy(cod_ciu.arr,cadena);
          cod_ciu.len = strlen(cod_ciu.arr);
          titulo_ciudad();
      }
      acumulo_cliente();
}
strcpy(mensajes,"TOTAL CIUDAD     ");
imprime_totales(2);
strcpy(mensajes,"TOTALES GENERALES");
imprime_totales(3);
cierre_impresora();

/************************************************
 * Borrar el cursor. (oclose).                  *
 ***********************************************/
/* EXEC SQL CLOSE C1; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 5;
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)128;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



/************************************************
 * Desconectarse de ORACLE. (ologof)            *
 ************************************************/
/* EXEC SQL COMMIT WORK RELEASE; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 5;
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)142;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


exit   (0);
}

void titulos()
{
 int j=0;
 con_pag++;
 if (con_pag > pag_fin)
    {
     oraest = 1;
     return;
    }
 if (!strcmp(recobrar,"S") && con_pag  ==  pag_ini)
    {
     printf ("Impresion en proceso : ");
     strcpy(recobrar,"N");
    }
 if (!strcmp(recobrar,"N")) {
    if (!strcmp(codigo_emp.arr,"3"))
        strcpy(nomb_emp.arr,"");
    strful(cadena,(int)(68-strlen(nomb_emp.arr))/2,' ');
    fprintf(fp,"%s%s%s%s%s%s\n\n",salte_pagina,diezcpi,ancho_on,cadena,nomb_emp.arr,elite);
    strful(cadena,(int)(81-strlen(titulo_listado))/2,' ');
    fprintf(fp,"%s%s%s%s%40s%d\n\n",cadena,titulo_listado,ancho_off,diezcpi,"Pagina ",con_pag);
    strful(cadena,(int)(117-strlen(fecha_listado))/2,' ');
    fprintf(fp,"%s%s%s%s\n\n",condensado_on,ancho_on,cadena,fecha_listado);
    strful(cadena,(int)(117-strlen(linea_fecha_movto))/2,' ');
    fprintf(fp,"%s%s\n\n",cadena,linea_fecha_movto);
    fprintf(fp,"%s%s%s%s",condensado_off,ancho_off,elite,"N O M B R E   D E L   C L I E N T E    TOTAL             ");
    fprintf(fp,"%s","POR                30 DIAS                     60 DIAS   ");
    fprintf(fp,"%s\n","                  90 DIAS             120  DIAS");
    fprintf(fp,"%s","                                       DEUDA            V");
    fprintf(fp,"%s","ENCER    --------------------------- --------------------");
    fprintf(fp,"%s\n","------- --------------------------- -------------");
    fprintf(fp,"%s","                                                ");
    for (j=1;j<=7;j++) {
        fprintf(fp,"%14s",mes_t[j]);
    }
    fprintf(fp,"\n%s","                                    --------------- -----");
    fprintf(fp,"%s","-------- ------------- ------------- ------------- ------");
    fprintf(fp,"%s\n","------- ------------- -------------");
 }
 con_lin = 12;
 if (tit_ciu==0)
    titulo_ciudad();
}

void acumulo_cliente()
{
int	oraest;
       /* EXEC SQL DECLARE C2 CURSOR FOR
       select to_char(fecha_vencmto,'yyyymmdd'), nvl(facturam.saldo,0)
       from   facturas, facturam
       where  facturas.tipo_factura   = to_number(:codigo_emp)  and
              facturas.tipo_factura   = facturam.tipo_factura   and
              facturas.tipo_documento = facturam.tipo_documento and
              facturas.numero_factura = facturam.numero_factura and
              facturam.ano_mes        =
              (select max(ano_mes)
               from facturam fm
               where fm.tipo_factura   = facturas.tipo_factura   and
                     fm.tipo_documento = facturas.tipo_documento and
                     fm.numero_factura = facturas.numero_factura and
                     fm.ano_mes       <= to_number(:ano_mes))    and
        facturas.codigo_cliente        = :cod_clie               and
        facturas.estado_factura        = 0                       and
        facturam.saldo                 > 0; */ 


 if (saldo_cliente > 0) {
     oraest=0;
     strcpy(cod_clie.arr,codigo_cliente.arr);
     cod_clie.len = strlen(cod_clie.arr);

     /* EXEC SQL OPEN C2; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 5;
     sqlstm.stmt = sq0006;
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)156;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
     sqlstm.sqhstl[0] = (unsigned long  )5;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
     sqlstm.sqhstl[1] = (unsigned long  )22;
     sqlstm.sqindv[1] = (         short *)0;
     sqlstm.sqharm[1] = (unsigned long )0;
     sqlstm.sqhstv[2] = (unsigned char  *)&cod_clie;
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



     while (oraest ==0) {
           /* EXEC SQL FETCH C2 INTO :fecha_vencmto, :saldo_factura; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 5;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)182;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&fecha_vencmto;
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



           oraest = sqlca.sqlcode;
           if (oraest == 1403) break;
           else if (oraest == -1405) oraest = 0;
                else if (oraest) printf ("Error C2 (%d)\n", oraest);

           fecha_vencmto.arr[fecha_vencmto.len] = '\0';

           acum_facturas();
     }
 }
 total_deuda[1]+= saldo_cliente;
 total_deuda[2]+= saldo_cliente;
 total_deuda[3]+= saldo_cliente;
 imprime_vencmtos();
/* EXEC SQL CLOSE C2; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 5;
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)204;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void acum_facturas()
{
 strcpy(cadena,fecha_vencmto.arr);
 strorg(cadena,7,2);
 dia_vencmto=atoi(cadena);
 if (dia_vencmto > 27 && dia_vencmto < 32) {
     fecha_vencmto.arr[6]='3';
     fecha_vencmto.arr[7]='0';
 }
 if (strcmp(fecha_vencmto.arr,fecha_corte) > 0) {
    por_vencer[1]+=saldo_factura;
    por_vencer[2]+=saldo_factura;
    por_vencer[3]+=saldo_factura;
 }
 else {
       calcula_dias();
       if (total_dias < 15) {
	  a_30_dias_1[1]+=saldo_factura;
	  a_30_dias_1[2]+=saldo_factura;
	  a_30_dias_1[3]+=saldo_factura;
       }
      else {
      if (total_dias < 30) {
	  a_30_dias_2[1]+=saldo_factura;
	  a_30_dias_2[2]+=saldo_factura;
	  a_30_dias_2[3]+=saldo_factura;
      }
      else {
      if (total_dias < 45) {
	  a_60_dias_1[1]+=saldo_factura;
	  a_60_dias_1[2]+=saldo_factura;
	  a_60_dias_1[3]+=saldo_factura;
      }
      else {
      if (total_dias < 60) {
	  a_60_dias_2[1]+=saldo_factura;
	  a_60_dias_2[2]+=saldo_factura;
	  a_60_dias_2[3]+=saldo_factura;
      }
      else {
      if (total_dias < 75) {
	  a_90_dias_1[1]+=saldo_factura;
	  a_90_dias_1[2]+=saldo_factura;
	  a_90_dias_1[3]+=saldo_factura;
      }
      else {
      if (total_dias < 90) {
	  a_90_dias_2[1]+=saldo_factura;
	  a_90_dias_2[2]+=saldo_factura;
	  a_90_dias_2[3]+=saldo_factura;
      }
      else {
           a_120_dias[1]+=saldo_factura;
	   a_120_dias[2]+=saldo_factura;
	   a_120_dias[3]+=saldo_factura;
      }
     }
    }
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

void imprime_vencmtos()
{
 if (con_lin > 62)
     titulos();
 if (!strcmp(recobrar,"N")) {
     strorg(nomb_clie.arr,1,35);
     fprintf(fp,"%-35s ",nomb_clie.arr);
     sprintf(cadena,"%9.2f",total_deuda[1]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
     sprintf(cadena,"%9.2f",por_vencer[1]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
     sprintf(cadena,"%9.2f",a_30_dias_1[1]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
     sprintf(cadena,"%9.2f",a_30_dias_2[1]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
     sprintf(cadena,"%9.2f",a_60_dias_1[1]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
     sprintf(cadena,"%9.2f",a_60_dias_2[1]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
     sprintf(cadena,"%9.2f",a_90_dias_1[1]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
     sprintf(cadena,"%9.2f",a_90_dias_2[1]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
     sprintf(cadena,"%9.2f",a_120_dias[1]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
     fprintf(fp,"\n");
     if (total_deuda[1] > 0) {
        suma_total = (por_vencer[1]+a_30_dias_1[1]+a_30_dias_2[1]+a_60_dias_1[1]+a_60_dias_2[1]+a_90_dias_1[1]+a_90_dias_2[1]+a_120_dias[1]);
        if (total_deuda[1] != suma_total) {
           fprintf(fp,"%s %s Suma:$%9.2f dif.:$%9.2f\n","*************** SALDO DESCUADRADO ***************",codigo_cliente.arr,suma_total,total_deuda[1]-suma_total);
           con_lin++;
        }
     }
 }
 con_lin++;
 borra_acumulados(1);
}

void imprime_totales(i)
int i;
{
 if (con_lin > 62)
     titulos();
 if (!strcmp(recobrar,"N")) {
      fprintf(fp,"\n%s%-18s%s%s",ancho_on,mensajes,ancho_off,elite);
      sprintf(cadena,"%9.2f",total_deuda[i]);
      fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
      sprintf(cadena,"%9.2f",por_vencer[i]);
      fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
      sprintf(cadena,"%9.2f",a_30_dias_1[i]);
      fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
      sprintf(cadena,"%9.2f",a_30_dias_2[i]);
      fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
      sprintf(cadena,"%9.2f",a_60_dias_1[i]);
      fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
      sprintf(cadena,"%9.2f",a_60_dias_2[i]);
      fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
      sprintf(cadena,"%9.2f",a_90_dias_1[i]);
      fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
      sprintf(cadena,"%9.2f",a_90_dias_2[i]);
      fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
      sprintf(cadena,"%9.2f",a_120_dias[i]);
      fprintf(fp,"%14s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
      fprintf(fp,"\n");
 }
 con_lin+=2;
 borra_acumulados(i);
}

void borra_acumulados(i)
int i;
{
 total_deuda[i]=0;
 por_vencer [i]=0;
 a_30_dias_1[i]=0;
 a_30_dias_2[i]=0;
 a_60_dias_1[i]=0;
 a_60_dias_2[i]=0;
 a_90_dias_1[i]=0;
 a_90_dias_2[i]=0;
 a_120_dias [i]=0;
}

void titulo_ciudad()
{
 tit_ciu=1;
 if (con_lin > 59)
     titulos();
 if (!strcmp(recobrar,"N")) {

       /* EXEC SQL select nombre into :nomb_ciu
                from   ciudades
                where  codigo = :cod_ciu; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 5;
       sqlstm.stmt = "select nombre into :b0  from ciudades where codigo=:b1";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)218;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&nomb_ciu;
       sqlstm.sqhstl[0] = (unsigned long  )62;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&cod_ciu;
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



       nomb_ciu.arr[nomb_ciu.len] = '\0';

      fprintf(fp,"\n%s%s%s%s%s\n\n",elite,ancho_on,"     Ciudad : ",nomb_ciu.arr,ancho_off);
 }
 tit_ciu=0;
 con_lin+=3;
}
