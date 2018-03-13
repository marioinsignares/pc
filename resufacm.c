
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
    ".\\resufacm.pc"
};


static const unsigned long sqlctx = 1270760360;


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
   unsigned char    *sqhstv[14];
   unsigned long    sqhstl[14];
	    short   *sqindv[14];
   unsigned long    sqharm[14];
   unsigned long     *sqharc[14];
} sqlstm = {8,14};

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
"yyyymmdd')) and  not exists (select 'x'  from basura where ((f.tipo_factura=\
tipo_factura and f.tipo_documento=tipo_documento) and f.numero_factura=numero_\
factura))) group by codigo_cliente order by codigo_cliente            ";
 static const char *sq0003 = 
"yyyymmdd')) and exists (select 'x'  from basura where ((f.tipo_factura=tipo_\
factura and f.tipo_documento=tipo_documento) and f.numero_factura=numero_factu\
ra))) group by codigo_cliente order by codigo_cliente            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,131,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,4,0,0,30,232,0,0,0,0,1,0,
42,0,0,2,1248,0,9,253,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
68,0,0,2,0,0,13,256,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,
0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
138,0,0,2,0,0,15,306,0,0,0,0,1,0,
152,0,0,3,1243,0,9,315,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
178,0,0,3,0,0,13,321,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
248,0,0,3,0,0,15,371,0,0,0,0,1,0,
262,0,0,5,111,0,4,379,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
284,0,0,6,54,0,4,444,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
306,0,0,7,544,0,4,489,0,6,1,0,1,0,2,3,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,9,0,0,1,9,
0,0,
344,0,0,8,120,0,4,508,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
};


/*****************************************************************
* RESUFAC.C  Version 1.0 - Rev 1.2 - Sep. 16/91.
*
* resufacp.c Programa para listar la facturacion de un periodo determinado
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

void lista_empresa(int e);
void lista_basura(int e);
void imprime_facturas();
void totaliza(int i);
void titulo_ciudad();
void borro_totales(int i);
void acumulo_totales(int i);
void empresa();
void titulos();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Facturas (C1) y (C6) */
double  numero_factura;
/* VARCHAR codigo_cliente [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_cliente;

double  valor_neto[13];
double  valor_total;
int     hojas;
/* VARCHAR codigo_emp     [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR numero_quincena[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } numero_quincena;

                                 /* Nits (C2) */
/* VARCHAR nomb_clie      [61]; */ 
struct { unsigned short len; unsigned char arr[61]; } nomb_clie;

/* VARCHAR wcod           [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } wcod;

                                 /* Ciudades (C3) */
/* VARCHAR nomb_ciudad    [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } nomb_ciudad;

/* VARCHAR wciu           [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } wciu;

                                 /* Control_fac (C4) */
int     ano;
int     mes_proceso;
float   ptaje_iva;
/* VARCHAR fecha_inicial  [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } fecha_inicial;

/* VARCHAR corte          [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } corte;

                                 /* Empresas (C5) */
/* VARCHAR nomb_emp       [61]; */ 
struct { unsigned short len; unsigned char arr[61]; } nomb_emp;


/* VARCHAR fecha_ini[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_ini;

/* VARCHAR fecha_fin[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_fin;


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
char    fechas[90];
char    fecha[20];
char    cadena[100];
char    mensajes[50];
char    wciu2[10];
int     j;
int     a, m;
char    ai[10];
char    mi[10];

struct acu {
            double valor_neto[13];
            double valor_total;
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

if (argc < 6)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : resufac fecha_ini fecha_fin device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (fecha_ini.arr,argv[1]);
fecha_ini.len = strlen(fecha_ini.arr);
strcpy (fecha_fin.arr,argv[2]);
fecha_fin.len = strlen(fecha_fin.arr);
strcpy (device,   argv[3]);
strlow (device);
strcpy (copias,   argv[4]);

if (!strpos ("/", argv[5]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,   argv[5]);
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
        select codigo_cliente,\
            sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",\
            sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",\
            sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",\
            sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",\
            sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",\
            sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",\
            sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",\
            sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",\
            sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",\
            sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",\
            sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",\
            sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",\
            sum(valor_neto) \
	from facturas f\
        where to_number(:codigo_emp)    = tipo_factura                     and\
              tipo_documento = 'F'                                         and\
              fecha_documento >= to_date(to_number(:fecha_ini),'yyyymmdd') and\
              fecha_documento <= to_date(to_number(:fecha_fin),'yyyymmdd') and\
              not exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura)\
         group by codigo_cliente \
         order by codigo_cliente; */ 


  /* EXEC SQL DECLARE C6 CURSOR FOR
        select codigo_cliente,\
            sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",\
            sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",\
            sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",\
            sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",\
            sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",\
            sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",\
            sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",\
            sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",\
            sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",\
            sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",\
            sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",\
            sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",\
            sum(valor_neto) \
	from facturas f\
        where to_number(:codigo_emp)    = tipo_factura                     and\
              tipo_documento = 'F'                                         and\
              fecha_documento >= to_date(to_number(:fecha_ini),'yyyymmdd') and\
              fecha_documento <= to_date(to_number(:fecha_fin),'yyyymmdd') and\
              exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura)\
         group by codigo_cliente \
         order by codigo_cliente; */ 


 strcpy(ai,fecha_ini.arr);
 strorg(ai,1,4);
 strcpy(mi,fecha_ini.arr);
 strorg(mi,5,2);
 a = atoi(ai);
 m = atoi(mi);

 lista_empresa(1);
 lista_empresa(3);
 con_pag=0;
 lista_empresa(2);
 con_pag=0;
 serv=1;
 lista_basura(1);
 lista_basura(2);

 cierre_impresora();


 /* EXEC SQL COMMIT WORK RELEASE; */ 

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



 exit   (0);
}

void lista_empresa(e)
int e;
{
 sprintf(codigo_emp.arr,"%d",e);
 empresa();

 strcpy(fecha,fecha_ini.arr);
 fecha_oracle3(fecha);
 strcpy(cadena,fecha);
 strcat(cadena," hasta ");
 strcpy(fecha,fecha_fin.arr);
 fecha_oracle3(fecha);
 strcat(cadena,fecha);
 strcpy(fechas,cadena);
 inicio  = 0;
 staora  = 0;
 /* EXEC SQL OPEN C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlbuft((void **)0, 
   "select codigo_cliente ,sum(decode(to_char(fecha_documento,'mm'),'01',val\
or_neto,0)) \"01\" ,sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto\
,0)) \"02\" ,sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) \"\
03\" ,sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) \"04\" ,s\
um(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) \"05\" ,sum(deco\
de(to_char(fecha_documento,'mm'),'06',valor_neto,0)) \"06\" ,sum(decode(to_c\
har(fecha_documento,'mm'),'07',valor_neto,0)) \"07\" ,sum(decode(to_char(fec\
ha_documento,'mm'),'08',valor_neto,0)) \"08\" ,sum(decode(to_char(fecha_docu\
mento,'mm'),'09',valor_neto,0)) \"09\" ,sum(decode(to_char(fecha_documento,'\
mm'),'10',valor_neto,0)) \"10\" ,sum(decode(to_char(fecha_documento,'mm'),'1\
1',valor_neto,0)) \"11\" ,sum(decode(to_char(fecha_documento,'mm'),'12',valo\
r_neto,0)) \"12\" ,sum(valor_neto)  from facturas f where ((((to_number(:b0)\
=tipo_factura and tipo_documento='F') and fecha_documento>=to_date(to_number\
(:b1),'yyyymmdd')) and fecha_documento<=to_date(to_number(:b2),'");
 sqlstm.stmt = sq0002;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)42;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned long  )7;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&fecha_ini;
 sqlstm.sqhstl[1] = (unsigned long  )22;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&fecha_fin;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C1 INTO :codigo_cliente,
                              :valor_neto[1],
                              :valor_neto[2],
                              :valor_neto[3],
                              :valor_neto[4],
                              :valor_neto[5],
                              :valor_neto[6],
                              :valor_neto[7],
                              :valor_neto[8],
                              :valor_neto[9],
                              :valor_neto[10],
                              :valor_neto[11],
                              :valor_neto[12],
                              :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 14;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)68;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
       sqlstm.sqhstl[0] = (unsigned long  )12;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&valor_neto[1];
       sqlstm.sqhstl[1] = (unsigned long  )8;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&valor_neto[2];
       sqlstm.sqhstl[2] = (unsigned long  )8;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&valor_neto[3];
       sqlstm.sqhstl[3] = (unsigned long  )8;
       sqlstm.sqindv[3] = (         short *)0;
       sqlstm.sqharm[3] = (unsigned long )0;
       sqlstm.sqhstv[4] = (unsigned char  *)&valor_neto[4];
       sqlstm.sqhstl[4] = (unsigned long  )8;
       sqlstm.sqindv[4] = (         short *)0;
       sqlstm.sqharm[4] = (unsigned long )0;
       sqlstm.sqhstv[5] = (unsigned char  *)&valor_neto[5];
       sqlstm.sqhstl[5] = (unsigned long  )8;
       sqlstm.sqindv[5] = (         short *)0;
       sqlstm.sqharm[5] = (unsigned long )0;
       sqlstm.sqhstv[6] = (unsigned char  *)&valor_neto[6];
       sqlstm.sqhstl[6] = (unsigned long  )8;
       sqlstm.sqindv[6] = (         short *)0;
       sqlstm.sqharm[6] = (unsigned long )0;
       sqlstm.sqhstv[7] = (unsigned char  *)&valor_neto[7];
       sqlstm.sqhstl[7] = (unsigned long  )8;
       sqlstm.sqindv[7] = (         short *)0;
       sqlstm.sqharm[7] = (unsigned long )0;
       sqlstm.sqhstv[8] = (unsigned char  *)&valor_neto[8];
       sqlstm.sqhstl[8] = (unsigned long  )8;
       sqlstm.sqindv[8] = (         short *)0;
       sqlstm.sqharm[8] = (unsigned long )0;
       sqlstm.sqhstv[9] = (unsigned char  *)&valor_neto[9];
       sqlstm.sqhstl[9] = (unsigned long  )8;
       sqlstm.sqindv[9] = (         short *)0;
       sqlstm.sqharm[9] = (unsigned long )0;
       sqlstm.sqhstv[10] = (unsigned char  *)&valor_neto[10];
       sqlstm.sqhstl[10] = (unsigned long  )8;
       sqlstm.sqindv[10] = (         short *)0;
       sqlstm.sqharm[10] = (unsigned long )0;
       sqlstm.sqhstv[11] = (unsigned char  *)&valor_neto[11];
       sqlstm.sqhstl[11] = (unsigned long  )8;
       sqlstm.sqindv[11] = (         short *)0;
       sqlstm.sqharm[11] = (unsigned long )0;
       sqlstm.sqhstv[12] = (unsigned char  *)&valor_neto[12];
       sqlstm.sqhstl[12] = (unsigned long  )8;
       sqlstm.sqindv[12] = (         short *)0;
       sqlstm.sqharm[12] = (unsigned long )0;
       sqlstm.sqhstv[13] = (unsigned char  *)&valor_total;
       sqlstm.sqhstl[13] = (unsigned long  )8;
       sqlstm.sqindv[13] = (         short *)0;
       sqlstm.sqharm[13] = (unsigned long )0;
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
          }
       strcpy(wciu2,codigo_cliente.arr);
       strorg(wciu2,1,2);
       if (strcmp(wciu2,wciu.arr)) {
           strcpy(mensajes,"TOTAL CIUDAD");
           totaliza(0);
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
           titulo_ciudad();
       }
       strcpy(wcod.arr,codigo_cliente.arr);
       wcod.len  =  strlen(wcod.arr);
       imprime_facturas();
 }
 if (con_lin > 56)
    titulos();
 strcpy(mensajes,"TOTAL CIUDAD");
 totaliza(0);
 strcpy(wciu.arr,codigo_cliente.arr);
 strorg(wciu.arr,1,2);
 strcpy(mensajes,"TOTALES GENERALES");
 totaliza(1);
 con_lin=66;
 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 14;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)138;
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
 empresa();

 /* EXEC SQL OPEN C6; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 14;
 sqlbuft((void **)0, 
   "select codigo_cliente ,sum(decode(to_char(fecha_documento,'mm'),'01',val\
or_neto,0)) \"01\" ,sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto\
,0)) \"02\" ,sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) \"\
03\" ,sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) \"04\" ,s\
um(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) \"05\" ,sum(deco\
de(to_char(fecha_documento,'mm'),'06',valor_neto,0)) \"06\" ,sum(decode(to_c\
har(fecha_documento,'mm'),'07',valor_neto,0)) \"07\" ,sum(decode(to_char(fec\
ha_documento,'mm'),'08',valor_neto,0)) \"08\" ,sum(decode(to_char(fecha_docu\
mento,'mm'),'09',valor_neto,0)) \"09\" ,sum(decode(to_char(fecha_documento,'\
mm'),'10',valor_neto,0)) \"10\" ,sum(decode(to_char(fecha_documento,'mm'),'1\
1',valor_neto,0)) \"11\" ,sum(decode(to_char(fecha_documento,'mm'),'12',valo\
r_neto,0)) \"12\" ,sum(valor_neto)  from facturas f where ((((to_number(:b0)\
=tipo_factura and tipo_documento='F') and fecha_documento>=to_date(to_number\
(:b1),'yyyymmdd')) and fecha_documento<=to_date(to_number(:b2),'");
 sqlstm.stmt = sq0003;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)152;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned long  )7;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&fecha_ini;
 sqlstm.sqhstl[1] = (unsigned long  )22;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&fecha_fin;
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



 inicio  = 0;
 staora  = 0;
 while (staora == 0) {

       /* EXEC SQL FETCH C6 INTO :codigo_cliente,
                              :valor_neto[1],
                              :valor_neto[2],
                              :valor_neto[3],
                              :valor_neto[4],
                              :valor_neto[5],
                              :valor_neto[6],
                              :valor_neto[7],
                              :valor_neto[8],
                              :valor_neto[9],
                              :valor_neto[10],
                              :valor_neto[11],
                              :valor_neto[12],
                              :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 14;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)178;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
       sqlstm.sqhstl[0] = (unsigned long  )12;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&valor_neto[1];
       sqlstm.sqhstl[1] = (unsigned long  )8;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&valor_neto[2];
       sqlstm.sqhstl[2] = (unsigned long  )8;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&valor_neto[3];
       sqlstm.sqhstl[3] = (unsigned long  )8;
       sqlstm.sqindv[3] = (         short *)0;
       sqlstm.sqharm[3] = (unsigned long )0;
       sqlstm.sqhstv[4] = (unsigned char  *)&valor_neto[4];
       sqlstm.sqhstl[4] = (unsigned long  )8;
       sqlstm.sqindv[4] = (         short *)0;
       sqlstm.sqharm[4] = (unsigned long )0;
       sqlstm.sqhstv[5] = (unsigned char  *)&valor_neto[5];
       sqlstm.sqhstl[5] = (unsigned long  )8;
       sqlstm.sqindv[5] = (         short *)0;
       sqlstm.sqharm[5] = (unsigned long )0;
       sqlstm.sqhstv[6] = (unsigned char  *)&valor_neto[6];
       sqlstm.sqhstl[6] = (unsigned long  )8;
       sqlstm.sqindv[6] = (         short *)0;
       sqlstm.sqharm[6] = (unsigned long )0;
       sqlstm.sqhstv[7] = (unsigned char  *)&valor_neto[7];
       sqlstm.sqhstl[7] = (unsigned long  )8;
       sqlstm.sqindv[7] = (         short *)0;
       sqlstm.sqharm[7] = (unsigned long )0;
       sqlstm.sqhstv[8] = (unsigned char  *)&valor_neto[8];
       sqlstm.sqhstl[8] = (unsigned long  )8;
       sqlstm.sqindv[8] = (         short *)0;
       sqlstm.sqharm[8] = (unsigned long )0;
       sqlstm.sqhstv[9] = (unsigned char  *)&valor_neto[9];
       sqlstm.sqhstl[9] = (unsigned long  )8;
       sqlstm.sqindv[9] = (         short *)0;
       sqlstm.sqharm[9] = (unsigned long )0;
       sqlstm.sqhstv[10] = (unsigned char  *)&valor_neto[10];
       sqlstm.sqhstl[10] = (unsigned long  )8;
       sqlstm.sqindv[10] = (         short *)0;
       sqlstm.sqharm[10] = (unsigned long )0;
       sqlstm.sqhstv[11] = (unsigned char  *)&valor_neto[11];
       sqlstm.sqhstl[11] = (unsigned long  )8;
       sqlstm.sqindv[11] = (         short *)0;
       sqlstm.sqharm[11] = (unsigned long )0;
       sqlstm.sqhstv[12] = (unsigned char  *)&valor_neto[12];
       sqlstm.sqhstl[12] = (unsigned long  )8;
       sqlstm.sqindv[12] = (         short *)0;
       sqlstm.sqharm[12] = (unsigned long )0;
       sqlstm.sqhstv[13] = (unsigned char  *)&valor_total;
       sqlstm.sqhstl[13] = (unsigned long  )8;
       sqlstm.sqindv[13] = (         short *)0;
       sqlstm.sqharm[13] = (unsigned long )0;
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
          }
       strcpy(wciu2,codigo_cliente.arr);
       strorg(wciu2,1,2);
       if (strcmp(wciu2,wciu.arr)) {
           strcpy(mensajes,"TOTAL CIUDAD");
           totaliza(0);
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
           titulo_ciudad();
       }
       strcpy(wcod.arr,codigo_cliente.arr);
       wcod.len  =  strlen(wcod.arr);
       imprime_facturas();
 }
 if (con_lin > 56)
    titulos();
 strcpy(mensajes,"TOTAL CIUDAD");
 totaliza(0);
 strcpy(wciu.arr,codigo_cliente.arr);
 strorg(wciu.arr,1,2);
 strcpy(mensajes,"TOTALES GENERALES");
 totaliza(1);
 con_lin=66;
 /* EXEC SQL CLOSE C6; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 14;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)248;
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
 /* EXEC SQL select n.nombre
          into  :nomb_clie
          from  nits n, clientes cl
          where n.codigo_nit      = cl.codigo_nit      and
                cl.codigo_cliente = :wcod; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 14;
 sqlstm.stmt = "select n.nombre into :b0  from nits n ,clientes cl where (n.\
codigo_nit=cl.codigo_nit and cl.codigo_cliente=:b1)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)262;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
 sqlstm.sqhstl[0] = (unsigned long  )63;
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



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Nits(C2) (%d)\n", sqlca.sqlcode);

 nomb_clie.arr   [nomb_clie.len] = '\0';
 if (hojas > 1) {
    sprintf(cadena,"%06.0f",numero_factura+hojas-1);
    cadena[3]='-';
    strorg(cadena,4,3);
 }
 else strcpy(cadena,"  ");
 fprintf(fp,"%6s ",codigo_cliente.arr);
 strorg(nomb_clie.arr,1,39);
 fprintf(fp,"%-39s",nomb_clie.arr);

 for (i=m;i<=12;i++) {
     sprintf (cadena,"%6.2f",valor_neto[i]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zz9",cadena,r_t));
 }
 for (i=1;i<m;i++) {
     sprintf (cadena,"%6.2f",valor_neto[i]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",valor_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=1;
 for (i=0;i<=1;++i)
      acumulo_totales(i);
}

void totaliza(i)
int i;
{
 if (con_lin > 60)
    titulos();
 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
     sprintf (cadena,"%6.2f",vect[i].valor_neto[j]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zz9",cadena,r_t));
 }
 for (j=1;j<m;j++) {
     sprintf (cadena,"%6.2f",vect[i].valor_neto[j]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",vect[i].valor_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;
 borro_totales(i);
 tit_ciu=0;
}

void titulo_ciudad()
{
 wciu.len  =  strlen(wciu.arr);
 /* EXEC SQL select nombre
          into  :nomb_ciudad
          from   ciudades
          where  codigo = :wciu; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 14;
 sqlstm.stmt = "select nombre into :b0  from ciudades where codigo=:b1";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)284;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_ciudad;
 sqlstm.sqhstl[0] = (unsigned long  )42;
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

 for (j=1;j<=12;j++) {
     vect[i].valor_neto[j] =0;
 }
 vect[i].valor_total =0;

}

void acumulo_totales(i)
int i;
{

 for (j=1;j<=12;j++) {
     vect[i].valor_neto[j]     +=valor_neto[j];
 }
 vect[i].valor_total      +=valor_total;

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
                  2,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||16)),'yyyymmdd'),
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
 sqlstm.arrsiz = 14;
 sqlstm.stmt = "select cf.ano ,cf.mes_proceso ,cf.ptaje_iva ,to_date(decode(\
to_number(cf.numero_quincena),1,to_number(((cf.ano||lpad(cf.mes_proceso,2,0))|\
|lpad(1,2,0))),2,to_number(((cf.ano||lpad(cf.mes_proceso,2,0))||16))),'yyyymmd\
d') ,to_date(to_char(to_date(decode(to_number(cf.numero_quincena),1,to_number(\
((cf.ano||lpad(cf.mes_proceso,2,0))||lpad(15,2,0))),2,to_number(to_char(last_d\
ay(to_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yymm')),'yyyymmdd'))),'yymmdd')\
,'yyyymmdd'),'yyyymmdd') into :b0,:b1,:b2,:b3,:b4  from control_fac cf where c\
f.codigo_emp=:b5";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)306;
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
 sqlstm.sqhstl[3] = (unsigned long  )32;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&corte;
 sqlstm.sqhstl[4] = (unsigned long  )32;
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

 /* EXEC SQL select nits.nombre
          into  :nomb_emp
          from   empresas, nits
          where  empresas.codigo_nit = nits.codigo_nit and
                 empresas.codigo_emp = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 14;
 sqlstm.stmt = "select nits.nombre into :b0  from empresas ,nits where (empr\
esas.codigo_nit=nits.codigo_nit and empresas.codigo_emp=:b1)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)344;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
 sqlstm.sqhstl[0] = (unsigned long  )63;
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
 int i;

 con_pag++;
 if (!strcmp(codigo_emp.arr,"3"))
    strcpy(nomb_emp.arr," ");
 fprintf(fp,"%s",salte_pagina);
 strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
 fprintf(fp,"%s%s%s%s%s\n\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
 if( serv == 0 )
   fprintf(fp,"%s%s%s%44s",diezcpi,condensado_on,ancho_on,"RESUMEN DE VENTAS");
 else  {
   if (!strcmp(codigo_emp.arr,"1"))
       fprintf(fp,"%s%s%s%39s",diezcpi,condensado_on,ancho_on,"SERVICIOS DE ADMINISTRACION");
   else
       fprintf(fp,"%s%s%s%46s",diezcpi,condensado_on,ancho_on,"MATERIA PRIMA");
 }
 fprintf(fp,"%s%s%17s %d\n\n",ancho_off,diezcpi,"PAGINA ",con_pag);
 strorg(fechas,1,strlen(fechas));
 fprintf(fp,"%s%62s%s\n\n",enfatizado_on,fechas,enfatizado_off);
 fprintf(fp,"%s%s%36s",condensado_on,"CODIGO ","C L I E N T E / O P T I C A");
 fprintf(fp,"%168s\n",                        "      FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION     FACTURACION");
 fprintf(fp,"%s%47s",enfatizado_on," ");

 for (i=m;i<=12;i++) {
      strcpy(cadena,mes[i-1]);
      strupp(cadena);
      fprintf(fp,"%14s",cadena);
 }
 for (i=1;i<m;i++) {
      strcpy(cadena,mes[i-1]);
      strupp(cadena);
      fprintf(fp,"%14s",cadena);
 }
 fprintf(fp,"%15s\n","TOTAL");

 fprintf(fp,"%s%50s",enfatizado_on," ");

 for (i=m;i<=12;i++) {
     sprintf (cadena,"%4d",a);
     fprintf(fp,"%5s%-9s"," ",fmtnum("z,zz9",cadena,r_t));
 }

 for (i=1;i<m;i++) {
     sprintf (cadena,"%4d",a+1);
     fprintf(fp,"%5s%-9s"," ",fmtnum("z,zz9",cadena,r_t));
 }

 fprintf(fp,"%s%5s\n\n",enfatizado_off," ");

 con_lin = 10;
 if (tit_ciu == 0) {
    titulo_ciudad();
    tit_ciu=1;
  }
}
