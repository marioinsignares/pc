
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

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,0,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[14];
};
static const struct sqlcxp sqlfpn =
{
    13,
    ".\\clistint.pc"
};


static unsigned long sqlctx = 523707;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
            void  *sqhstv[7];
   unsigned int   sqhstl[7];
            int   sqhsts[7];
            void  *sqindv[7];
            int   sqinds[7];
   unsigned int   sqharm[7];
   unsigned int   *sqharc[7];
   unsigned short  sqadto[7];
   unsigned short  sqtdso[7];
} sqlstm = {10,7};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned long *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned long *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned long *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(char *, int *);

 static const char *sq0003 = 
"select to_char(fecha_documento,'yyyymmdd') ,facturam.saldo ,facturas.numero_\
factura ,facturas.tipo_documento ,round(((sysdate-(facturas.fecha_documento+59\
))/30),1) ,codigo_cliente ,(fecha_documento+59)  from facturas ,facturam where\
 (((((((((((facturas.tipo_factura=facturam.tipo_factura and facturas.tipo_docu\
mento=facturam.tipo_documento) and facturas.libro=facturam.libro) and facturas\
.numero_factura=facturam.numero_factura) and facturam.ano_mes=(select max(fm.a\
no_mes)  from facturam fm where ((((fm.tipo_factura=facturas.tipo_factura and \
fm.tipo_documento=facturas.tipo_documento) and fm.libro=facturas.libro) and fm\
.numero_factura=facturas.numero_factura) and fm.ano_mes<=to_number(:b0)))) and\
 facturas.tipo_factura=to_number(:b1)) and facturas.codigo_cliente>=:b2) and f\
acturas.codigo_cliente<=:b3) and facturas.estado_factura=0) and facturas.estad\
o_cartera=0) and facturas.libro=:b4) and (facturas.fecha_documento+59)<sysdate\
) order by fecha_documento            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,121,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,34,0,4,138,0,0,1,0,0,1,0,2,3,0,0,
55,0,0,3,972,0,9,190,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
90,0,0,3,0,0,13,192,0,0,7,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,9,
0,0,2,9,0,0,
133,0,0,4,343,0,4,210,0,0,4,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,
164,0,0,3,0,0,13,283,0,0,7,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,9,
0,0,2,9,0,0,
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

void titulos();
void imprime_facturas();
void imprime_totales();
void pie_carta();
void fecha_corta();
				     /* Parametros de comunicacion con ORACLE */

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid            [150]; */ 
struct { unsigned short len; unsigned char arr[150]; } uid;
 
/* VARCHAR nomb_clie      [61]; */ 
struct { unsigned short len; unsigned char arr[61]; } nomb_clie;

/* VARCHAR nomb_repre     [61]; */ 
struct { unsigned short len; unsigned char arr[61]; } nomb_repre;

/* VARCHAR nomb_ciu       [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nomb_ciu;

/* VARCHAR codigo_cliente [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_cliente;

/* VARCHAR cod_clie       [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cod_clie;

/* VARCHAR fecha_documento[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } fecha_documento;

/* VARCHAR fecha_vencmto  [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } fecha_vencmto;

double  saldo_factura;
double  numero_factura;
/* VARCHAR tipo_documento [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } tipo_documento;

double  meses_factura;
/* VARCHAR ano_mes        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR cod_cliei      [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cod_cliei;

/* VARCHAR cod_clief      [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cod_clief;

/* VARCHAR fecha_pago     [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } fecha_pago;

double  valor_pago;
/* VARCHAR codigo_emp     [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_emp;

double  saldo_cliente;
int     a2k;
/* VARCHAR librob        [4]; */ 
struct { unsigned short len; unsigned char arr[4]; } librob;


/* EXEC SQL END DECLARE SECTION; */ 

/* EXEC SQL INCLUDE SQLCA;
 */ 
/*
 * $Header: sqlca.h,v 1.3 1994/12/12 19:27:27 jbasu Exp $ sqlca.h 
 */

/* Copyright (c) 1985,1986, 1998 by Oracle Corporation. */
 
/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************

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
 
MODIFIED
    lvbcheng   07/31/98 -  long to int
    jbasu      12/12/94 -  Bug 217878: note this is an SOSD file
    losborne   08/11/92 -  No sqlca var if SQLCA_NONE macro set 
  Clare      12/06/84 - Ch SQLCA to not be an extern.
  Clare      10/21/85 - Add initialization.
  Bradbury   01/05/86 - Only initialize when SQLCA_INIT set
  Clare      06/12/86 - Add SQLCA_STORAGE_CLASS option.
*/
 
#ifndef SQLCA
#define SQLCA 1
 
struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ int     sqlabc;
         /* b4  */ int     sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ int     sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef   SQLCA_STORAGE_CLASS
SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif
 
#ifdef  SQLCA_INIT
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
#endif
         ;
#endif
 
#endif
 
/* end SQLCA */


char    *fmtnum(), r_t[150];
int     con_pag=0;
int     con_lin=66;
char    copias[8];
int     i;
int     w_ano_corte;
int     w_mes_corte;
int     w_dia_corte;
int     ano_corte;
int     mes_corte;
int     dia_corte;
double  totales;
double  total_facturas;
double  total_intereses;
char    cadena[150];
char    cadena2[90];
char    wcadena[90];
char    fecha_corte[30];
char    mensajes[50];
int     a;
int     oraest;
extern  double redondo();

void main(argc, argv)
int     argc;
char    *argv[];
{
 char   device[9];
 int	status = 0;

 if (argc < 7)
    {
     printf ("Incorrecta invocacion:\n");
     printf ("Uso : clistint codigo_emp clie_ini clie_fin\n");
     printf ("fecha_corte device libro userid/password@esquema\n");
     printf ("      device : t salida por terminal\n");
     printf ("               Px salida por impresora (x nro printer)\n");
     printf ("      libro(0= COLGAAP 1=IFRS)\n");
     printf ("      userid/password@esquema nombre usuario, password y conexion a la BD\n");
     exit (1);
    }

 strcpy (codigo_emp.arr, argv[1]);
 codigo_emp.len   =  strlen(codigo_emp.arr);
 strcpy (cod_cliei.arr,   argv[2]);
 cod_cliei.len    =  strlen(cod_cliei.arr);
 strcpy (cod_clief.arr,   argv[3]);
 cod_clief.len    =  strlen(cod_clief.arr);
 strcpy (fecha_corte, argv[4]);

 if ( strlen(fecha_corte) != 8 ) {
    printf("Error, la fecha corte debe ser de 8 digitos y formato AAAAMMDD");
    exit (1);
 }
 strcpy (device,     argv[5]);
 strlow (device);
 strcpy (librob.arr, argv[6]);
 librob.len  =       strlen(librob.arr);

 if (!strpos ("/",   argv[7]))
    {
     printf ("user id/password incorrecto.\n");
     exit (1);
 }
 strcpy (uid.arr,    argv[7]);
 uid.len   =  strlen(uid.arr);

 /* EXEC SQL CONNECT :uid; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )100;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&uid;
 sqlstm.sqhstl[0] = (unsigned int  )152;
 sqlstm.sqhsts[0] = (         int  )152;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
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

 /* EXEC SQL select y2k
          into   :a2k
          from   ano2000; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select y2k into :b0  from ano2000 ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )36;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&a2k;
 sqlstm.sqhstl[0] = (unsigned int  )4;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
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

 /* EXEC SQL DECLARE C2 CURSOR FOR
        select to_char(fecha_documento,'yyyymmdd'), facturam.saldo,
               facturas.numero_factura, facturas.tipo_documento,
               round((sysdate - (facturas.fecha_documento+59))/30,1),
               codigo_cliente,
               fecha_documento+59
        from   facturas, facturam
        where  facturas.tipo_factura    = facturam.tipo_factura   and
               facturas.tipo_documento  = facturam.tipo_documento and
               facturas.libro           = facturam.libro          and
               facturas.numero_factura  = facturam.numero_factura and
               facturam.ano_mes         =
               (select max(fm.ano_mes)
                from facturam fm
                where fm.tipo_factura   = facturas.tipo_factura   and
                      fm.tipo_documento = facturas.tipo_documento and
                      fm.libro          = facturas.libro          and
                      fm.numero_factura = facturas.numero_factura and
                      fm.ano_mes       <= to_number(:ano_mes))    and
         facturas.tipo_factura          = to_number(:codigo_emp)  and
         facturas.codigo_cliente       >= (:cod_cliei)            and
         facturas.codigo_cliente       <= (:cod_clief)            and
         facturas.estado_factura        = 0                       and
         facturas.estado_cartera        = 0                       and
         facturas.libro                 = :librob                 and
         facturas.fecha_documento+59    < sysdate
         order by fecha_documento; */ 


 /* EXEC SQL OPEN C2; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0003;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )55;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&ano_mes;
 sqlstm.sqhstl[0] = (unsigned int  )22;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned int  )12;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&cod_cliei;
 sqlstm.sqhstl[2] = (unsigned int  )12;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&cod_clief;
 sqlstm.sqhstl[3] = (unsigned int  )12;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&librob;
 sqlstm.sqhstl[4] = (unsigned int  )6;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 /* EXEC SQL FETCH C2 INTO :fecha_documento, :saldo_factura, :numero_factura,
                        :tipo_documento,  :meses_factura, :codigo_cliente,
                        :fecha_vencmto; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 7;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )90;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_documento;
 sqlstm.sqhstl[0] = (unsigned int  )32;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&saldo_factura;
 sqlstm.sqhstl[1] = (unsigned int  )8;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&numero_factura;
 sqlstm.sqhstl[2] = (unsigned int  )8;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&tipo_documento;
 sqlstm.sqhstl[3] = (unsigned int  )12;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&meses_factura;
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&codigo_cliente;
 sqlstm.sqhstl[5] = (unsigned int  )12;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&fecha_vencmto;
 sqlstm.sqhstl[6] = (unsigned int  )32;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
     fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);

 oraest  = sqlca.sqlcode;

 fecha_documento.arr  [fecha_documento.len] = '\0';
 tipo_documento.arr   [tipo_documento.len]  = '\0';
 codigo_cliente.arr   [codigo_cliente.len]  = '\0';
 fecha_vencmto.arr    [fecha_vencmto.len]   = '\0';

 if (!oraest) {
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
                   n.nombre_muni, c.nombre
             order by cl.codigo_cliente; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select n.nombre ,r.nombre ,nvl(n.nombre_muni,c.nombre) in\
to :b0,:b1,:b2  from nits n ,representa r ,ciudades c ,clientes cl where (((n.\
codigo_nit=cl.codigo_nit and n.codigo_nit=r.codigo_nit(+)) and n.codigo_ciu=c.\
codigo) and cl.codigo_cliente=:b3) group by cl.codigo_cliente,n.nombre,r.nombr\
e,n.nombre_muni,c.nombre order by cl.codigo_cliente ";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )133;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_clie;
    sqlstm.sqhstl[0] = (unsigned int  )63;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&nomb_repre;
    sqlstm.sqhstl[1] = (unsigned int  )63;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&nomb_ciu;
    sqlstm.sqhstl[2] = (unsigned int  )52;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&cod_clie;
    sqlstm.sqhstl[3] = (unsigned int  )12;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
        fprintf (stderr, "C1 Error leyendo Empresa (%d)\n", sqlca.sqlcode);

    nomb_repre.arr   [nomb_repre.len] = '\0';
    nomb_clie.arr    [nomb_clie.len]  = '\0';
    nomb_ciu.arr     [nomb_ciu.len]   = '\0';

    titulos();
    oraest=0;
    while (oraest==0) {
          imprime_facturas();
    }
    imprime_totales();
    pie_carta();
 }

 cierre_impresora();
// EXEC SQL CLOSE C2;
 exit   (0);
}

void titulos()
{
 char fecha[20];
 fecha_system(fecha);
 fprintf(fp,"%s%s%s%30s%s %s \n\n\n\n\n\n",condensado_off,ancho_off,diezcpi," ","Barranquilla, ",fecha);
 fprintf(fp,"Se|or(es)\n");
 fprintf(fp,"%s\n",nomb_clie.arr);
 if (strcmp(codigo_emp.arr,"3"))
     fprintf(fp,"Att: %s\n",nomb_repre.arr);
 fprintf(fp,"%s\n\n\n",nomb_ciu.arr);
 fprintf(fp,"Apreciados se|ores:\n\n");
 fprintf(fp,"En  vista  de la situacio\b'n econo\b'mica que  se  esta\b'  atravesando,y\n");
 fprintf(fp,"teniendo  en  cuenta la morosidad de sus facturas  pendientes  de\n");
 fprintf(fp,"pago hemos optado por aplicar intereses de mora del 2.5%s, a partir\n","%");
 fprintf(fp,"de 60 di\b'as de vencimiento de las mismas.\n\n");
 fprintf(fp,"A   continuacio\b'n   relacionamos el  ca\b'lculo   de   los  intereses\n");
 fprintf(fp,"respectivos:\n\n");
 fprintf(fp," FECHA      NUMERO              FECHA DE\n");
 fprintf(fp," FACTURA    FACTURA       VALOR VENCIMIENTO INTERESES MESES  TOTAL\n\n");
}

void imprime_facturas()
{
 strcpy(cadena,fecha_documento.arr);
 fprintf(fp,"%s %2s%06.0f ",fmtnum("9999/99/99",cadena,r_t),tipo_documento.arr,numero_factura);
 strcpy (cadena,fecha_vencmto.arr);
 strcpy (wcadena, cadena);
 fecha_corta(wcadena);
 sprintf(cadena,"%9.0f",saldo_factura);
 total_facturas+=saldo_factura;
 fprintf(fp,"$%11s %s ",fmtnum("zzz,zzz,zzz",cadena,r_t),wcadena);
 sprintf(cadena,"%6.0f",redondo(saldo_factura*.025));
 fprintf(fp,"$%8s  %2.1f ",fmtnum("zzz,zzz",cadena,r_t),meses_factura);
 totales=atof(cadena);
 sprintf(cadena,"%2.1f",meses_factura);
 totales=totales*atof(cadena);
 sprintf(cadena,"%6.0f",totales);
 fprintf(fp,"$%7s\n",fmtnum("zzz,zzz",cadena,r_t));
 totales=atof(cadena);
 total_intereses+=totales;
 con_lin++;
 /* EXEC SQL FETCH C2 INTO :fecha_documento, :saldo_factura, :numero_factura,
                        :tipo_documento, :meses_factura, :codigo_cliente,
                        :fecha_vencmto; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 7;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )164;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_documento;
 sqlstm.sqhstl[0] = (unsigned int  )32;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&saldo_factura;
 sqlstm.sqhstl[1] = (unsigned int  )8;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&numero_factura;
 sqlstm.sqhstl[2] = (unsigned int  )8;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&tipo_documento;
 sqlstm.sqhstl[3] = (unsigned int  )12;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&meses_factura;
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&codigo_cliente;
 sqlstm.sqhstl[5] = (unsigned int  )12;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&fecha_vencmto;
 sqlstm.sqhstl[6] = (unsigned int  )32;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 oraest  = sqlca.sqlcode;
}

void imprime_totales()
{
 fprintf(fp,"%20s------------%26s--------\n"," "," ");
 sprintf(cadena,"%9.0f",total_facturas);
 fprintf(fp,"Gran total ........ $%s ",fmtnum("zzz,zzz,zzz",cadena,r_t));
 sprintf(cadena,"%6.0f",total_intereses);
 fprintf(fp,"%24s$%s\n"," ",fmtnum("z,zzz,zzz",cadena,r_t));
}

void pie_carta()
{
 fprintf(fp,"\nNo esta\b'  dema\b's aclararles que no es objetivo de nuestra   empresa\n");
 fprintf(fp,"facturar intereses financieros,  pero dada la circunstancia y los\n");
 fprintf(fp,"altos  costos  financieros  que  nos  esta\b'n  afectando  debido  a\n");
 fprintf(fp,"morosidad  en  la cartera nos vemos precisados a  emprender  esta\n");
 fprintf(fp,"accio\b'n.\n\n");
 fprintf(fp,"Agradecemos su mejor disposicio\b'n y  pronto pago de su cuenta para\n");
 fprintf(fp,"no incrementar los gastos financieros.\n\n");
 fprintf(fp,"Atentamente,\n\n\n\n");
 fprintf(fp,"%sNILSON S. PORRAS M.%s\n",enfatizado_on,enfatizado_off);
 fprintf(fp,"%sDEPARTAMENTO DE CARTERA%s%s\n\n\n\n",enfatizado_on,enfatizado_off,salte_pagina);
}
