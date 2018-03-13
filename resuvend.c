
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
    ".\\resuvend.pc"
};


static unsigned long sqlctx = 538171;


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
            void  *sqhstv[36];
   unsigned int   sqhstl[36];
            int   sqhsts[36];
            void  *sqindv[36];
            int   sqinds[36];
   unsigned int   sqharm[36];
   unsigned int   *sqharc[36];
   unsigned short  sqadto[36];
   unsigned short  sqtdso[36];
} sqlstm = {10,36};

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
"RP',round((cantidad* valor_unidad),0),0) ,nvl(valor_desctos,0) ,nvl(c.valor_\
total,0) ,c.clase_material ,numero_orden  from ordenes_c c ,ordenes_o o where \
((((((((c.fecha_documento>=to_date(:b0,'yyyymmdd') and c.fecha_documento<=to_d\
ate(:b1,'yyyymmdd')) and c.codigo_cliente>=:b2) and c.codigo_cliente<=:b3) and\
 c.clase_material<>'C') and c.ano_mes=o.ano_mes(+)) and c.consecutivo=o.consec\
utivo(+)) and decode(:b4,'TO','3',nvl(c.contado,0))=decode(:b4,'CR',0,'CO',1,'\
3')) and  not exists (select 'x'  from basura where (tipo_documento='O' and nu\
mero_factura=c.numero_orden))) order by numero_orden            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,235,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,34,0,4,259,0,0,1,0,0,1,0,2,3,0,0,
55,0,0,3,3680,0,9,336,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,
94,0,0,3,0,0,13,342,0,0,36,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,
0,2,4,0,0,
253,0,0,4,2759,0,4,415,0,0,28,6,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,
0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,9,0,0,1,9,0,0,1,9,0,0,
380,0,0,5,526,0,4,461,0,0,9,6,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
431,0,0,6,430,0,4,480,0,0,7,6,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
474,0,0,7,486,0,4,496,0,0,8,6,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,
521,0,0,8,506,0,4,517,0,0,9,8,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
572,0,0,9,160,0,4,535,0,0,3,2,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,
599,0,0,3,0,0,15,549,0,0,0,0,0,1,0,
614,0,0,10,0,0,30,551,0,0,0,0,0,1,0,
};


/****************************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - Feb. 20/98.
*
* resuvend.pc Programa de facturacion para listar las facturacion de la quincena
*
* Uso : resuvend fecha_ini fecha_fin device copias userid/password
*
* Martin A. Toloza L. Creado Febrero 20-1998.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void busco_oftalmicos();
void totales();
void titulos();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Ordenes_c (C1) */
int     a2k;
double  cantidad_bis_mont0;
double  cantidad_bis_mont1;
double  cantidad_bis_mont2;
double  cantidad_bis_mont3;
double  cantidad_bis_mont4;
double  cantidad_bis_mont5;
double  cantidad_bis_mont6;
double  valor_bis_mont0;
double  valor_bis_mont1;
double  valor_bis_mont2;
double  valor_bis_mont3;
double  valor_bis_mont4;
double  valor_bis_mont5;
double  valor_bis_mont6;
double  cantidad_fil;
double  valor_fil;
double  cantidad_ar1;
double  valor_ar1;
double  cantidad_ar2;
double  valor_ar2;
double  cantidad_pr;
double  valor_pr;
double  cantidad2_pr;
double  valor2_pr;

double  cantidad_mr;
double  valor_mr;
double  cantidad2_mr;
double  valor2_mr;

double  cantidad_mr_t;
double  valor_mr_t;
double  cantidad2_mr_t;
double  valor2_mr_t;

double  cantidad_color;
double  valor_color;
double  cantidad_otros;
double  valor_otros;
double  valor_desctos;
double  valor_total;
/* VARCHAR clase_material[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } clase_material;

double  numero_orden;
/* VARCHAR ano_mesi [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR ano_mesf [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesf;

/* VARCHAR fecha_ini[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_ini;

/* VARCHAR fecha_fin[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_fin;

/* VARCHAR codigo_clii [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_clii;

/* VARCHAR codigo_clif [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_clif;

/* VARCHAR contado[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } contado;

                                 /* Ordenes_d (C2) */
double  cantidad_s;
double  valor_venta_s;
double  cantidad_o;
double  valor_venta_o;
double  cantidad_t;
double  valor_venta_t;
double  cantidad_sm;
double  valor_venta_sm;
double  cantidad_ce;
double  valor_venta_ce;
double  cantidad_vi;
double  valor_venta_vi;
double  cantidad_op;
double  valor_venta_op;
double  cantidad_flex;
double  valor_venta_flex;
double  cantidad_ko;
double  valor_venta_ko;
double  cantidad_eo;
double  valor_venta_eo;
double  cantidad_ec;
double  valor_venta_ec;
                                 /* Facturas (C3) */
double  valor_iva;
double  valor_fletes;
double  rete_fte;
double  valor_fletes_c;
                                 /* Ordenes_c (C4) */
double  valor_desctos_c;
double  valor_otros_c;
                                 /* Basura (C5) */
double  otras_fac;
double  valor_desco;

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

                                            /* Variables globales del usuario */
#define A_F1 "###,###,###,###.##"
char *fmtnum(), r_t[100];
double  redondo();

int     con_pag;                                   /* Contador de Paginas */
int     con_lin=66;                                /* Contador de Lineas  */
int     staora = 0;
int     oraest = 0;
char    copias[3];
char    fecha[40];
char    fechas[80];
char    cadena[120];
double  orden_ant;
double  fe_ini;
double  fe_fin;

/*
******************************************
* Este es el arreglo para acumular
* el bisel y montaje discriminado asi :
*
* [0]=Normal    Monofocal Bif. , Trif. y Prog.
* [1]=Multifocal
* [2]=Ranurado
* [3]=Perforado
* [4]=Bordes Pulidos
******************************************/

struct  bis2 {
        double  cantidad_bis_mont_t;
        double  valor_bis_mont_t;
        };
struct  bis2 vec[20];

struct  val {
        double  val_unid;
        };
struct  val vec2[20];

double  cantidad_bis_mont_g;
double  valor_bis_mont_g;
double  cantidad_fil_t;
double  valor_fil_t;
double  cantidad_ar1_t;
double  valor_ar1_t;
double  cantidad_ar2_t;
double  valor_ar2_t;
double  cantidad_pr_t;
double  valor_pr_t;
double  cantidad2_pr_t;
double  valor2_pr_t;
double  cantidad_color_t;
double  valor_color_t;
double  valor_desctos_t;
double  valor_otros_t;
double  valor_total_t;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

if (argc < 9)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : resuvend fecha_ini fecha_fin codigo_clii codigo_clif credito=CR/contado=CO/todas=TO \n");
    printf ("device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (fecha_ini.arr, argv[1]);
fecha_ini.len   =      strlen(fecha_ini.arr);
strcpy (fecha_fin.arr, argv[2]);
fecha_fin.len   =      strlen(fecha_fin.arr);
if ( strlen(fecha_ini.arr) != 8 || strlen(fecha_fin.arr) != 8 ) {
   printf("Error, la fecha debe ser de 8 digitos y formato AAAAMMDD");
   exit (1);
}

strcpy (codigo_clii.arr, argv[3]);
codigo_clii.len   =    strlen(codigo_clii.arr);
strcpy (codigo_clif.arr, argv[4]);
codigo_clif.len   =    strlen(codigo_clif.arr);

strcpy (contado.arr, argv[5]);
contado.len   =    strlen(contado.arr);

strcpy (device,        argv[6]);
strlow (device);
strcpy (copias,        argv[7]);

strcpy(fecha,fecha_ini.arr);
fecha_oracle3(fecha);
strcpy(cadena,fecha);
strcpy(fecha,fecha_fin.arr);
strcat(cadena," hasta ");
fecha_oracle3(fecha);
strcat(cadena,fecha);
strcpy(fechas,cadena);

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
    sqlstm.sqhstl[0] = (unsigned int  )102;
    sqlstm.sqhsts[0] = (         int  )102;
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

  strcpy (ano_mesi.arr,fecha_ini.arr);
  strorg (ano_mesi.arr,1,6);
  ano_mesi.len = strlen(ano_mesi.arr);

  strcpy (ano_mesf.arr,fecha_fin.arr);
  strorg (ano_mesf.arr,1,6);
  ano_mesf.len = strlen(ano_mesf.arr);

  /* EXEC SQL DECLARE C1 CURSOR FOR
       select decode(tipo_servicio,'BM',decode(tipo_trabajo,'N', cantidad,0),0) BMN,
              decode(tipo_servicio,'BM',decode(tipo_trabajo,'E', cantidad,0),0) BME,
              decode(tipo_servicio,'BM',decode(substr(tipo_trabajo,1,1),'E', cantidad,0),0) BME,
              decode(tipo_servicio,'BM',decode(tipo_trabajo,'A', cantidad,0),0) BMA,
              decode(tipo_servicio,'BM',decode(tipo_trabajo,'P', cantidad,0),0) BMP,
              decode(tipo_servicio,'BM',decode(tipo_trabajo,'B', cantidad,0),0) BMB,
              decode(tipo_servicio,'BM',decode(tipo_trabajo,'S', cantidad,0),0) BMS,
              decode(tipo_servicio,'BM',decode(tipo_trabajo,'S2',cantidad,0),0) BMS2,
              decode(tipo_servicio,'BM',decode(tipo_trabajo,'N', round(cantidad*valor_unidad,0),0),0) VBMN,
              decode(tipo_servicio,'BM',decode(substr(tipo_trabajo,1,1),'E', round(cantidad*valor_unidad,0),0),0) VBME,
              decode(tipo_servicio,'BM',decode(tipo_trabajo,'A', round(cantidad*valor_unidad,0),0),0) VBMA,
              decode(tipo_servicio,'BM',decode(tipo_trabajo,'P', round(cantidad*valor_unidad,0),0),0) VBMP,
              decode(tipo_servicio,'BM',decode(tipo_trabajo,'B', round(cantidad*valor_unidad,0),0),0) VBMB,
              decode(tipo_servicio,'BM',decode(tipo_trabajo,'S', round(cantidad*valor_unidad,0),0),0) VBMS,
              decode(tipo_servicio,'BM',decode(tipo_trabajo,'S2',round(cantidad*valor_unidad,0),0),0) VBMS2,

              decode(tipo_servicio,'TR',decode(substr(tipo_trabajo,1,2),'AR',0,'PR',0,'MR',0,'SA',0,cantidad),0) VALOR,
              decode(tipo_servicio,'TR',decode(substr(tipo_trabajo,1,2),'AR',0,'PR',0,'MR',0,'SA',0,round(cantidad*valor_unidad,0)),0) VALOR2,
              decode(tipo_servicio,'TR',decode(tipo_trabajo,'AR1',cantidad,'SA1',cantidad,0),0) VALOR3,
              decode(tipo_servicio,'TR',decode(tipo_trabajo,'AR1',round(cantidad*valor_unidad,0),'SA1',round(cantidad*valor_unidad,0),0),0) VALOR4,
              decode(tipo_servicio,'TR',decode(tipo_trabajo,'AR2',cantidad,'SA2',cantidad,0),0) VALOR5,
              decode(tipo_servicio,'TR',decode(tipo_trabajo,'AR2',round(cantidad*valor_unidad,0),'SA2',round(cantidad*valor_unidad,0),0),0) VALOR6,
              decode(tipo_servicio,'TR',decode(tipo_trabajo,'PR' ,cantidad,0),0) VALOR7,
              decode(tipo_servicio,'TR',decode(tipo_trabajo,'PR' ,round(cantidad*valor_unidad,0),0),0) VALOR8,
              decode(tipo_servicio,'TR',decode(tipo_trabajo,'PR2',cantidad,0),0) VALOR9,
              decode(tipo_servicio,'TR',decode(tipo_trabajo,'PR2',round(cantidad*valor_unidad,0),0),0) VALOR10,
              decode(tipo_servicio,'TR',decode(tipo_trabajo,'MR1',cantidad,0),0) VALOR11,
              decode(tipo_servicio,'TR',decode(tipo_trabajo,'MR1',round(cantidad*valor_unidad,0),0),0) VALOR12,
              decode(tipo_servicio,'TR',decode(tipo_trabajo,'MR2',cantidad,0),0) VALOR13,
              decode(tipo_servicio,'TR',decode(tipo_trabajo,'MR2',round(cantidad*valor_unidad,0),0),0) VALOR14,

              decode(tipo_servicio,'CO',cantidad,0) VALOR15,
              decode(tipo_servicio,'CO',round(cantidad*valor_unidad,0),0) VALOR16,

              decode(tipo_servicio,'OT',cantidad,
                                   'FE',decode(sign(c.ano_mes-200505),1,0,cantidad),
                                   'RC',cantidad,
                                   'RP',cantidad,0),
              decode(tipo_servicio,'OT',round(cantidad*valor_unidad,0),
                                   'FE',decode(sign(c.ano_mes-200505),1,0,cantidad*valor_unidad),
                                   'RC',round(cantidad*valor_unidad,0),
                                   'RP',round(cantidad*valor_unidad,0),0),
              nvl(valor_desctos,0), nvl(c.valor_total,0),
              c.clase_material, numero_orden
        from  ordenes_c c, ordenes_o o
        where c.fecha_documento >= to_date(:fecha_ini,'yyyymmdd')       and
              c.fecha_documento <= to_date(:fecha_fin,'yyyymmdd')       and
              c.codigo_cliente  >= :codigo_clii                         and
              c.codigo_cliente  <= :codigo_clif                         and
              c.clase_material  <> 'C'                                  and
              c.ano_mes          = o.ano_mes(+)                         and
              c.consecutivo      = o.consecutivo(+)                     and
              decode(:contado,'TO','3',nvl(c.contado,0)) = decode(:contado,'CR',0,'CO',1,'3') and
              not exists
              (select 'x'
               from basura
               where tipo_documento = 'O' and
                     numero_factura = c.numero_orden)
        order by numero_orden; */ 


 /* EXEC SQL OPEN C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select decode(tipo_servicio,'BM',decode(tipo_trabajo,'N',cantidad,0),0) \
BMN ,decode(tipo_servicio,'BM',decode(tipo_trabajo,'E',cantidad,0),0) BME ,d\
ecode(tipo_servicio,'BM',decode(substr(tipo_trabajo,1,1),'E',cantidad,0),0) \
BME ,decode(tipo_servicio,'BM',decode(tipo_trabajo,'A',cantidad,0),0) BMA ,d\
ecode(tipo_servicio,'BM',decode(tipo_trabajo,'P',cantidad,0),0) BMP ,decode(\
tipo_servicio,'BM',decode(tipo_trabajo,'B',cantidad,0),0) BMB ,decode(tipo_s\
ervicio,'BM',decode(tipo_trabajo,'S',cantidad,0),0) BMS ,decode(tipo_servici\
o,'BM',decode(tipo_trabajo,'S2',cantidad,0),0) BMS2 ,decode(tipo_servicio,'B\
M',decode(tipo_trabajo,'N',round((cantidad* valor_unidad),0),0),0) VBMN ,dec\
ode(tipo_servicio,'BM',decode(substr(tipo_trabajo,1,1),'E',round((cantidad* \
valor_unidad),0),0),0) VBME ,decode(tipo_servicio,'BM',decode(tipo_trabajo,'\
A',round((cantidad* valor_unidad),0),0),0) VBMA ,decode(tipo_servicio,'BM',d\
ecode(tipo_trabajo,'P',round((cantidad* valor_unidad),0),0),0) VBMP ,decode(\
tipo_servicio,'BM',decode(tipo_trabajo,'");
 sqlbuft((void **)0, 
   "B',round((cantidad* valor_unidad),0),0),0) VBMB ,decode(tipo_servicio,'B\
M',decode(tipo_trabajo,'S',round((cantidad* valor_unidad),0),0),0) VBMS ,dec\
ode(tipo_servicio,'BM',decode(tipo_trabajo,'S2',round((cantidad* valor_unida\
d),0),0),0) VBMS2 ,decode(tipo_servicio,'TR',decode(substr(tipo_trabajo,1,2)\
,'AR',0,'PR',0,'MR',0,'SA',0,cantidad),0) VALOR ,decode(tipo_servicio,'TR',d\
ecode(substr(tipo_trabajo,1,2),'AR',0,'PR',0,'MR',0,'SA',0,round((cantidad* \
valor_unidad),0)),0) VALOR2 ,decode(tipo_servicio,'TR',decode(tipo_trabajo,'\
AR1',cantidad,'SA1',cantidad,0),0) VALOR3 ,decode(tipo_servicio,'TR',decode(\
tipo_trabajo,'AR1',round((cantidad* valor_unidad),0),'SA1',round((cantidad* \
valor_unidad),0),0),0) VALOR4 ,decode(tipo_servicio,'TR',decode(tipo_trabajo\
,'AR2',cantidad,'SA2',cantidad,0),0) VALOR5 ,decode(tipo_servicio,'TR',decod\
e(tipo_trabajo,'AR2',round((cantidad* valor_unidad),0),'SA2',round((cantidad\
* valor_unidad),0),0),0) VALOR6 ,decode(tipo_servicio,'TR',decode(tipo_traba\
jo,'PR',cantidad,0),0) VALOR7 ,decode(ti");
 sqlbuft((void **)0, 
   "po_servicio,'TR',decode(tipo_trabajo,'PR',round((cantidad* valor_unidad)\
,0),0),0) VALOR8 ,decode(tipo_servicio,'TR',decode(tipo_trabajo,'PR2',cantid\
ad,0),0) VALOR9 ,decode(tipo_servicio,'TR',decode(tipo_trabajo,'PR2',round((\
cantidad* valor_unidad),0),0),0) VALOR10 ,decode(tipo_servicio,'TR',decode(t\
ipo_trabajo,'MR1',cantidad,0),0) VALOR11 ,decode(tipo_servicio,'TR',decode(t\
ipo_trabajo,'MR1',round((cantidad* valor_unidad),0),0),0) VALOR12 ,decode(ti\
po_servicio,'TR',decode(tipo_trabajo,'MR2',cantidad,0),0) VALOR13 ,decode(ti\
po_servicio,'TR',decode(tipo_trabajo,'MR2',round((cantidad* valor_unidad),0)\
,0),0) VALOR14 ,decode(tipo_servicio,'CO',cantidad,0) VALOR15 ,decode(tipo_s\
ervicio,'CO',round((cantidad* valor_unidad),0),0) VALOR16 ,decode(tipo_servi\
cio,'OT',cantidad,'FE',decode(sign((c.ano_mes-200505)),1,0,cantidad),'RC',ca\
ntidad,'RP',cantidad,0) ,decode(tipo_servicio,'OT',round((cantidad* valor_un\
idad),0),'FE',decode(sign((c.ano_mes-200505)),1,0,(cantidad* valor_unidad)),\
'RC',round((cantidad* valor_unidad),0),'");
 sqlstm.stmt = sq0003;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )55;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[0] = (unsigned int  )22;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[1] = (unsigned int  )22;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&codigo_clii;
 sqlstm.sqhstl[2] = (unsigned int  )22;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&codigo_clif;
 sqlstm.sqhstl[3] = (unsigned int  )22;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&contado;
 sqlstm.sqhstl[4] = (unsigned int  )5;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&contado;
 sqlstm.sqhstl[5] = (unsigned int  )5;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
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



 orden_ant=-1;
 staora = 0;
 while (staora == 0) {

        /* EXEC SQL FETCH C1 INTO :cantidad_bis_mont0, :cantidad_bis_mont1,
                               :cantidad_bis_mont2, :cantidad_bis_mont3,
                               :cantidad_bis_mont4, :cantidad_bis_mont5,
                               :cantidad_bis_mont6,
                               :valor_bis_mont0,    :valor_bis_mont1,
                               :valor_bis_mont2,    :valor_bis_mont3,
                               :valor_bis_mont4,    :valor_bis_mont5,
                               :valor_bis_mont6,

                               :cantidad_fil,   :valor_fil,
                               :cantidad_ar1,   :valor_ar1,
                               :cantidad_ar2,   :valor_ar2,
                               :cantidad_pr,    :valor_pr,
                               :cantidad2_pr,   :valor2_pr,
                               :cantidad_mr,    :valor_mr,
                               :cantidad2_mr,   :valor2_mr,

                               :cantidad_color, :valor_color,

                               :cantidad_otros, :valor_otros,

                               :valor_desctos,  :valor_total,
                               :clase_material, :numero_orden; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 36;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )94;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&cantidad_bis_mont0;
        sqlstm.sqhstl[0] = (unsigned int  )8;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&cantidad_bis_mont1;
        sqlstm.sqhstl[1] = (unsigned int  )8;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&cantidad_bis_mont2;
        sqlstm.sqhstl[2] = (unsigned int  )8;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&cantidad_bis_mont3;
        sqlstm.sqhstl[3] = (unsigned int  )8;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&cantidad_bis_mont4;
        sqlstm.sqhstl[4] = (unsigned int  )8;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&cantidad_bis_mont5;
        sqlstm.sqhstl[5] = (unsigned int  )8;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&cantidad_bis_mont6;
        sqlstm.sqhstl[6] = (unsigned int  )8;
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqhstv[7] = (         void  *)&valor_bis_mont0;
        sqlstm.sqhstl[7] = (unsigned int  )8;
        sqlstm.sqhsts[7] = (         int  )0;
        sqlstm.sqindv[7] = (         void  *)0;
        sqlstm.sqinds[7] = (         int  )0;
        sqlstm.sqharm[7] = (unsigned int  )0;
        sqlstm.sqadto[7] = (unsigned short )0;
        sqlstm.sqtdso[7] = (unsigned short )0;
        sqlstm.sqhstv[8] = (         void  *)&valor_bis_mont1;
        sqlstm.sqhstl[8] = (unsigned int  )8;
        sqlstm.sqhsts[8] = (         int  )0;
        sqlstm.sqindv[8] = (         void  *)0;
        sqlstm.sqinds[8] = (         int  )0;
        sqlstm.sqharm[8] = (unsigned int  )0;
        sqlstm.sqadto[8] = (unsigned short )0;
        sqlstm.sqtdso[8] = (unsigned short )0;
        sqlstm.sqhstv[9] = (         void  *)&valor_bis_mont2;
        sqlstm.sqhstl[9] = (unsigned int  )8;
        sqlstm.sqhsts[9] = (         int  )0;
        sqlstm.sqindv[9] = (         void  *)0;
        sqlstm.sqinds[9] = (         int  )0;
        sqlstm.sqharm[9] = (unsigned int  )0;
        sqlstm.sqadto[9] = (unsigned short )0;
        sqlstm.sqtdso[9] = (unsigned short )0;
        sqlstm.sqhstv[10] = (         void  *)&valor_bis_mont3;
        sqlstm.sqhstl[10] = (unsigned int  )8;
        sqlstm.sqhsts[10] = (         int  )0;
        sqlstm.sqindv[10] = (         void  *)0;
        sqlstm.sqinds[10] = (         int  )0;
        sqlstm.sqharm[10] = (unsigned int  )0;
        sqlstm.sqadto[10] = (unsigned short )0;
        sqlstm.sqtdso[10] = (unsigned short )0;
        sqlstm.sqhstv[11] = (         void  *)&valor_bis_mont4;
        sqlstm.sqhstl[11] = (unsigned int  )8;
        sqlstm.sqhsts[11] = (         int  )0;
        sqlstm.sqindv[11] = (         void  *)0;
        sqlstm.sqinds[11] = (         int  )0;
        sqlstm.sqharm[11] = (unsigned int  )0;
        sqlstm.sqadto[11] = (unsigned short )0;
        sqlstm.sqtdso[11] = (unsigned short )0;
        sqlstm.sqhstv[12] = (         void  *)&valor_bis_mont5;
        sqlstm.sqhstl[12] = (unsigned int  )8;
        sqlstm.sqhsts[12] = (         int  )0;
        sqlstm.sqindv[12] = (         void  *)0;
        sqlstm.sqinds[12] = (         int  )0;
        sqlstm.sqharm[12] = (unsigned int  )0;
        sqlstm.sqadto[12] = (unsigned short )0;
        sqlstm.sqtdso[12] = (unsigned short )0;
        sqlstm.sqhstv[13] = (         void  *)&valor_bis_mont6;
        sqlstm.sqhstl[13] = (unsigned int  )8;
        sqlstm.sqhsts[13] = (         int  )0;
        sqlstm.sqindv[13] = (         void  *)0;
        sqlstm.sqinds[13] = (         int  )0;
        sqlstm.sqharm[13] = (unsigned int  )0;
        sqlstm.sqadto[13] = (unsigned short )0;
        sqlstm.sqtdso[13] = (unsigned short )0;
        sqlstm.sqhstv[14] = (         void  *)&cantidad_fil;
        sqlstm.sqhstl[14] = (unsigned int  )8;
        sqlstm.sqhsts[14] = (         int  )0;
        sqlstm.sqindv[14] = (         void  *)0;
        sqlstm.sqinds[14] = (         int  )0;
        sqlstm.sqharm[14] = (unsigned int  )0;
        sqlstm.sqadto[14] = (unsigned short )0;
        sqlstm.sqtdso[14] = (unsigned short )0;
        sqlstm.sqhstv[15] = (         void  *)&valor_fil;
        sqlstm.sqhstl[15] = (unsigned int  )8;
        sqlstm.sqhsts[15] = (         int  )0;
        sqlstm.sqindv[15] = (         void  *)0;
        sqlstm.sqinds[15] = (         int  )0;
        sqlstm.sqharm[15] = (unsigned int  )0;
        sqlstm.sqadto[15] = (unsigned short )0;
        sqlstm.sqtdso[15] = (unsigned short )0;
        sqlstm.sqhstv[16] = (         void  *)&cantidad_ar1;
        sqlstm.sqhstl[16] = (unsigned int  )8;
        sqlstm.sqhsts[16] = (         int  )0;
        sqlstm.sqindv[16] = (         void  *)0;
        sqlstm.sqinds[16] = (         int  )0;
        sqlstm.sqharm[16] = (unsigned int  )0;
        sqlstm.sqadto[16] = (unsigned short )0;
        sqlstm.sqtdso[16] = (unsigned short )0;
        sqlstm.sqhstv[17] = (         void  *)&valor_ar1;
        sqlstm.sqhstl[17] = (unsigned int  )8;
        sqlstm.sqhsts[17] = (         int  )0;
        sqlstm.sqindv[17] = (         void  *)0;
        sqlstm.sqinds[17] = (         int  )0;
        sqlstm.sqharm[17] = (unsigned int  )0;
        sqlstm.sqadto[17] = (unsigned short )0;
        sqlstm.sqtdso[17] = (unsigned short )0;
        sqlstm.sqhstv[18] = (         void  *)&cantidad_ar2;
        sqlstm.sqhstl[18] = (unsigned int  )8;
        sqlstm.sqhsts[18] = (         int  )0;
        sqlstm.sqindv[18] = (         void  *)0;
        sqlstm.sqinds[18] = (         int  )0;
        sqlstm.sqharm[18] = (unsigned int  )0;
        sqlstm.sqadto[18] = (unsigned short )0;
        sqlstm.sqtdso[18] = (unsigned short )0;
        sqlstm.sqhstv[19] = (         void  *)&valor_ar2;
        sqlstm.sqhstl[19] = (unsigned int  )8;
        sqlstm.sqhsts[19] = (         int  )0;
        sqlstm.sqindv[19] = (         void  *)0;
        sqlstm.sqinds[19] = (         int  )0;
        sqlstm.sqharm[19] = (unsigned int  )0;
        sqlstm.sqadto[19] = (unsigned short )0;
        sqlstm.sqtdso[19] = (unsigned short )0;
        sqlstm.sqhstv[20] = (         void  *)&cantidad_pr;
        sqlstm.sqhstl[20] = (unsigned int  )8;
        sqlstm.sqhsts[20] = (         int  )0;
        sqlstm.sqindv[20] = (         void  *)0;
        sqlstm.sqinds[20] = (         int  )0;
        sqlstm.sqharm[20] = (unsigned int  )0;
        sqlstm.sqadto[20] = (unsigned short )0;
        sqlstm.sqtdso[20] = (unsigned short )0;
        sqlstm.sqhstv[21] = (         void  *)&valor_pr;
        sqlstm.sqhstl[21] = (unsigned int  )8;
        sqlstm.sqhsts[21] = (         int  )0;
        sqlstm.sqindv[21] = (         void  *)0;
        sqlstm.sqinds[21] = (         int  )0;
        sqlstm.sqharm[21] = (unsigned int  )0;
        sqlstm.sqadto[21] = (unsigned short )0;
        sqlstm.sqtdso[21] = (unsigned short )0;
        sqlstm.sqhstv[22] = (         void  *)&cantidad2_pr;
        sqlstm.sqhstl[22] = (unsigned int  )8;
        sqlstm.sqhsts[22] = (         int  )0;
        sqlstm.sqindv[22] = (         void  *)0;
        sqlstm.sqinds[22] = (         int  )0;
        sqlstm.sqharm[22] = (unsigned int  )0;
        sqlstm.sqadto[22] = (unsigned short )0;
        sqlstm.sqtdso[22] = (unsigned short )0;
        sqlstm.sqhstv[23] = (         void  *)&valor2_pr;
        sqlstm.sqhstl[23] = (unsigned int  )8;
        sqlstm.sqhsts[23] = (         int  )0;
        sqlstm.sqindv[23] = (         void  *)0;
        sqlstm.sqinds[23] = (         int  )0;
        sqlstm.sqharm[23] = (unsigned int  )0;
        sqlstm.sqadto[23] = (unsigned short )0;
        sqlstm.sqtdso[23] = (unsigned short )0;
        sqlstm.sqhstv[24] = (         void  *)&cantidad_mr;
        sqlstm.sqhstl[24] = (unsigned int  )8;
        sqlstm.sqhsts[24] = (         int  )0;
        sqlstm.sqindv[24] = (         void  *)0;
        sqlstm.sqinds[24] = (         int  )0;
        sqlstm.sqharm[24] = (unsigned int  )0;
        sqlstm.sqadto[24] = (unsigned short )0;
        sqlstm.sqtdso[24] = (unsigned short )0;
        sqlstm.sqhstv[25] = (         void  *)&valor_mr;
        sqlstm.sqhstl[25] = (unsigned int  )8;
        sqlstm.sqhsts[25] = (         int  )0;
        sqlstm.sqindv[25] = (         void  *)0;
        sqlstm.sqinds[25] = (         int  )0;
        sqlstm.sqharm[25] = (unsigned int  )0;
        sqlstm.sqadto[25] = (unsigned short )0;
        sqlstm.sqtdso[25] = (unsigned short )0;
        sqlstm.sqhstv[26] = (         void  *)&cantidad2_mr;
        sqlstm.sqhstl[26] = (unsigned int  )8;
        sqlstm.sqhsts[26] = (         int  )0;
        sqlstm.sqindv[26] = (         void  *)0;
        sqlstm.sqinds[26] = (         int  )0;
        sqlstm.sqharm[26] = (unsigned int  )0;
        sqlstm.sqadto[26] = (unsigned short )0;
        sqlstm.sqtdso[26] = (unsigned short )0;
        sqlstm.sqhstv[27] = (         void  *)&valor2_mr;
        sqlstm.sqhstl[27] = (unsigned int  )8;
        sqlstm.sqhsts[27] = (         int  )0;
        sqlstm.sqindv[27] = (         void  *)0;
        sqlstm.sqinds[27] = (         int  )0;
        sqlstm.sqharm[27] = (unsigned int  )0;
        sqlstm.sqadto[27] = (unsigned short )0;
        sqlstm.sqtdso[27] = (unsigned short )0;
        sqlstm.sqhstv[28] = (         void  *)&cantidad_color;
        sqlstm.sqhstl[28] = (unsigned int  )8;
        sqlstm.sqhsts[28] = (         int  )0;
        sqlstm.sqindv[28] = (         void  *)0;
        sqlstm.sqinds[28] = (         int  )0;
        sqlstm.sqharm[28] = (unsigned int  )0;
        sqlstm.sqadto[28] = (unsigned short )0;
        sqlstm.sqtdso[28] = (unsigned short )0;
        sqlstm.sqhstv[29] = (         void  *)&valor_color;
        sqlstm.sqhstl[29] = (unsigned int  )8;
        sqlstm.sqhsts[29] = (         int  )0;
        sqlstm.sqindv[29] = (         void  *)0;
        sqlstm.sqinds[29] = (         int  )0;
        sqlstm.sqharm[29] = (unsigned int  )0;
        sqlstm.sqadto[29] = (unsigned short )0;
        sqlstm.sqtdso[29] = (unsigned short )0;
        sqlstm.sqhstv[30] = (         void  *)&cantidad_otros;
        sqlstm.sqhstl[30] = (unsigned int  )8;
        sqlstm.sqhsts[30] = (         int  )0;
        sqlstm.sqindv[30] = (         void  *)0;
        sqlstm.sqinds[30] = (         int  )0;
        sqlstm.sqharm[30] = (unsigned int  )0;
        sqlstm.sqadto[30] = (unsigned short )0;
        sqlstm.sqtdso[30] = (unsigned short )0;
        sqlstm.sqhstv[31] = (         void  *)&valor_otros;
        sqlstm.sqhstl[31] = (unsigned int  )8;
        sqlstm.sqhsts[31] = (         int  )0;
        sqlstm.sqindv[31] = (         void  *)0;
        sqlstm.sqinds[31] = (         int  )0;
        sqlstm.sqharm[31] = (unsigned int  )0;
        sqlstm.sqadto[31] = (unsigned short )0;
        sqlstm.sqtdso[31] = (unsigned short )0;
        sqlstm.sqhstv[32] = (         void  *)&valor_desctos;
        sqlstm.sqhstl[32] = (unsigned int  )8;
        sqlstm.sqhsts[32] = (         int  )0;
        sqlstm.sqindv[32] = (         void  *)0;
        sqlstm.sqinds[32] = (         int  )0;
        sqlstm.sqharm[32] = (unsigned int  )0;
        sqlstm.sqadto[32] = (unsigned short )0;
        sqlstm.sqtdso[32] = (unsigned short )0;
        sqlstm.sqhstv[33] = (         void  *)&valor_total;
        sqlstm.sqhstl[33] = (unsigned int  )8;
        sqlstm.sqhsts[33] = (         int  )0;
        sqlstm.sqindv[33] = (         void  *)0;
        sqlstm.sqinds[33] = (         int  )0;
        sqlstm.sqharm[33] = (unsigned int  )0;
        sqlstm.sqadto[33] = (unsigned short )0;
        sqlstm.sqtdso[33] = (unsigned short )0;
        sqlstm.sqhstv[34] = (         void  *)&clase_material;
        sqlstm.sqhstl[34] = (unsigned int  )8;
        sqlstm.sqhsts[34] = (         int  )0;
        sqlstm.sqindv[34] = (         void  *)0;
        sqlstm.sqinds[34] = (         int  )0;
        sqlstm.sqharm[34] = (unsigned int  )0;
        sqlstm.sqadto[34] = (unsigned short )0;
        sqlstm.sqtdso[34] = (unsigned short )0;
        sqlstm.sqhstv[35] = (         void  *)&numero_orden;
        sqlstm.sqhstl[35] = (unsigned int  )8;
        sqlstm.sqhsts[35] = (         int  )0;
        sqlstm.sqindv[35] = (         void  *)0;
        sqlstm.sqinds[35] = (         int  )0;
        sqlstm.sqharm[35] = (unsigned int  )0;
        sqlstm.sqadto[35] = (unsigned short )0;
        sqlstm.sqtdso[35] = (unsigned short )0;
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



        staora  = sqlca.sqlcode;
        if (staora ==  1403) break;
        if (staora == -1405)
            staora  = 0;
        else if (staora)
                 fprintf (stderr, "Error Leyendo C1 (%d)\n", staora);

        clase_material.arr  [clase_material.len] = '\0';

        if (numero_orden == 671571)
            valor_total=valor_total*2;
        cantidad_fil_t      +=cantidad_fil;
        valor_fil_t         +=valor_fil;
        cantidad_ar1_t      +=cantidad_ar1;
        valor_ar1_t         +=valor_ar1;
        cantidad_ar2_t      +=cantidad_ar2;
        valor_ar2_t         +=valor_ar2;
        cantidad_pr_t       +=cantidad_pr;
        valor_pr_t          +=valor_pr;
        cantidad2_pr_t      +=cantidad2_pr;
        valor2_pr_t         +=valor2_pr;
        cantidad_mr_t       +=cantidad_mr;
        valor_mr_t          +=valor_mr;
        cantidad2_mr_t      +=cantidad2_mr;
        valor2_mr_t         +=valor2_mr;
        cantidad_color_t    +=cantidad_color;
        valor_color_t       +=valor_color;
        valor_otros_t       +=valor_otros;
        if (numero_orden != orden_ant) {
            valor_desctos_t +=valor_desctos;
            valor_total_t   +=valor_total;
            orden_ant       =numero_orden;
        }
        vec[0].cantidad_bis_mont_t+= cantidad_bis_mont0;
        vec[1].cantidad_bis_mont_t+= cantidad_bis_mont1;
        vec[2].cantidad_bis_mont_t+= cantidad_bis_mont2;
        vec[3].cantidad_bis_mont_t+= cantidad_bis_mont3;
        vec[4].cantidad_bis_mont_t+= cantidad_bis_mont4;
        vec[5].cantidad_bis_mont_t+= cantidad_bis_mont5;
        vec[6].cantidad_bis_mont_t+= cantidad_bis_mont6;
        vec[0].valor_bis_mont_t   += valor_bis_mont0;
        vec[1].valor_bis_mont_t   += valor_bis_mont1;
        vec[2].valor_bis_mont_t   += valor_bis_mont2;
        vec[3].valor_bis_mont_t   += valor_bis_mont3;
        vec[4].valor_bis_mont_t   += valor_bis_mont4;
        vec[5].valor_bis_mont_t   += valor_bis_mont5;
        vec[6].valor_bis_mont_t   += valor_bis_mont6;
 }

 /* EXEC SQL select sum(decode(d.lado_lente,'S',cantidad,0)),
                 sum(decode(d.lado_lente,'S',cantidad*valor_venta,0)),
                 sum(decode(d.lado_lente,'O',cantidad,0)),
                 sum(decode(d.lado_lente,'O',cantidad*valor_venta,0)),
                 sum(decode(o.clase_material,'C',0,decode(d.lado_lente,'S',0,'O',0,decode(d.terminado,'K',0,'T',cantidad,'F',cantidad,'C',decode(d.especial,'E',0,nvl(cantidad,0) ) ,0 ) ) ) ),
                 sum(decode(o.clase_material,'C',0,decode(d.lado_lente,'S',0,'O',0,decode(d.terminado,'K',0,'T',cantidad*valor_venta,'F',cantidad*valor_venta,'C',decode(d.especial,'E',0,nvl(cantidad*valor_venta,0) ) ,0 ) ) ) ),
                 sum(decode(o.clase_material,'C',0,decode(d.lado_lente,'S',0,'O',0,decode(d.terminado,'K',0,'T',0,'F',0,'C',0,decode(d.especial,'E',0,nvl(cantidad,0) ) ) ) ) ),
                 sum(decode(o.clase_material,'C',0,decode(d.lado_lente,'S',0,'O',0,decode(d.terminado,'K',0,'T',0,'F',0,'C',0,decode(d.especial,'E',0,nvl(cantidad*valor_venta,0) ) ) ) ) ),
                 sum(decode(o.clase_material,'C',decode(o.tipo_material,'C',nvl(cantidad,0),0),0)),
                 sum(decode(o.clase_material,'C',decode(o.tipo_material,'C',round(nvl(cantidad*valor_venta,0),0),0),0)),
                 sum(decode(o.clase_material,'C',decode(o.tipo_material,'V',nvl(cantidad,0),0),0)),
                 sum(decode(o.clase_material,'C',decode(o.tipo_material,'V',round(nvl(cantidad*valor_venta,0),0),0),0)),
                 sum(decode(o.clase_material,'C',decode(substr(d.codigo_articulo,1,1),'7',nvl(cantidad,0),'9',nvl(cantidad,0),0),0)),
                 sum(decode(o.clase_material,'C',decode(substr(d.codigo_articulo,1,1),'7',round(nvl(cantidad*valor_venta,0),0),'9',round(nvl(cantidad*valor_venta,0),0),0),0)),
                 sum(decode(o.clase_material,'C',decode(substr(d.codigo_articulo,1,1),'8',nvl(cantidad,0),0),0)),
                 sum(decode(o.clase_material,'C',decode(substr(d.codigo_articulo,1,1),'8',round(nvl(cantidad*valor_venta,0),0),0),0)),
                 sum(decode(o.clase_material,'C',0,decode(d.terminado,'K',nvl(cantidad,0),0))),
                 sum(decode(o.clase_material,'C',0,decode(d.terminado,'K',round(nvl(cantidad*valor_venta,0),0)))),
                 sum(decode(o.clase_material,'C',0,decode(d.especial,'E',nvl(cantidad,0),0))),
                 sum(decode(o.clase_material,'C',0,decode(d.especial,'E',round(nvl(cantidad*valor_venta,0),0)))),
                 sum(decode(o.clase_material,'C',decode(d.especial,'E',nvl(cantidad,0),0))),
                 sum(decode(o.clase_material,'C',decode(d.especial,'E',round(nvl(cantidad*valor_venta,0),0))))
          into :cantidad_s,  :valor_venta_s,  :cantidad_o,    :valor_venta_o,
               :cantidad_t,  :valor_venta_t,  :cantidad_sm,   :valor_venta_sm,
               :cantidad_ce, :valor_venta_ce, :cantidad_vi,   :valor_venta_vi,
               :cantidad_op, :valor_venta_op, :cantidad_flex, :valor_venta_flex,
               :cantidad_ko, :valor_venta_ko,
               :cantidad_eo, :valor_venta_eo, :cantidad_ec, :valor_venta_ec
	  from  ordenes_d d, ordenes_c o
          where o.fecha_documento >= to_date(:fecha_ini,'yyyymmdd')        and
                o.fecha_documento <= to_date(:fecha_fin,'yyyymmdd')        and
                o.codigo_cliente  >= :codigo_clii                          and
                o.codigo_cliente  <= :codigo_clif                          and
                decode(:contado,'TO','3',nvl(o.contado,0)) = decode(:contado,'CR',0,'CO',1,'3') and
                o.consecutivo      = d.consecutivo(+)                      and
                o.ano_mes          = d.ano_mes(+); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 36;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select sum(decode(d.lado_lente,'S',cantidad,0)) ,sum(decode(d.lado_lente\
,'S',(cantidad* valor_venta),0)) ,sum(decode(d.lado_lente,'O',cantidad,0)) ,\
sum(decode(d.lado_lente,'O',(cantidad* valor_venta),0)) ,sum(decode(o.clase_\
material,'C',0,decode(d.lado_lente,'S',0,'O',0,decode(d.terminado,'K',0,'T',\
cantidad,'F',cantidad,'C',decode(d.especial,'E',0,nvl(cantidad,0)),0)))) ,su\
m(decode(o.clase_material,'C',0,decode(d.lado_lente,'S',0,'O',0,decode(d.ter\
minado,'K',0,'T',(cantidad* valor_venta),'F',(cantidad* valor_venta),'C',dec\
ode(d.especial,'E',0,nvl((cantidad* valor_venta),0)),0)))) ,sum(decode(o.cla\
se_material,'C',0,decode(d.lado_lente,'S',0,'O',0,decode(d.terminado,'K',0,'\
T',0,'F',0,'C',0,decode(d.especial,'E',0,nvl(cantidad,0)))))) ,sum(decode(o.\
clase_material,'C',0,decode(d.lado_lente,'S',0,'O',0,decode(d.terminado,'K',\
0,'T',0,'F',0,'C',0,decode(d.especial,'E',0,nvl((cantidad* valor_venta),0)))\
))) ,sum(decode(o.clase_material,'C',decode(o.tipo_material,'C',nvl(cantidad\
,0),0),0)) ,sum(decode(o.clase_material,");
 sqlbuft((void **)0, 
   "'C',decode(o.tipo_material,'C',round(nvl((cantidad* valor_venta),0),0),0\
),0)) ,sum(decode(o.clase_material,'C',decode(o.tipo_material,'V',nvl(cantid\
ad,0),0),0)) ,sum(decode(o.clase_material,'C',decode(o.tipo_material,'V',rou\
nd(nvl((cantidad* valor_venta),0),0),0),0)) ,sum(decode(o.clase_material,'C'\
,decode(substr(d.codigo_articulo,1,1),'7',nvl(cantidad,0),'9',nvl(cantidad,0\
),0),0)) ,sum(decode(o.clase_material,'C',decode(substr(d.codigo_articulo,1,\
1),'7',round(nvl((cantidad* valor_venta),0),0),'9',round(nvl((cantidad* valo\
r_venta),0),0),0),0)) ,sum(decode(o.clase_material,'C',decode(substr(d.codig\
o_articulo,1,1),'8',nvl(cantidad,0),0),0)) ,sum(decode(o.clase_material,'C',\
decode(substr(d.codigo_articulo,1,1),'8',round(nvl((cantidad* valor_venta),0\
),0),0),0)) ,sum(decode(o.clase_material,'C',0,decode(d.terminado,'K',nvl(ca\
ntidad,0),0))) ,sum(decode(o.clase_material,'C',0,decode(d.terminado,'K',rou\
nd(nvl((cantidad* valor_venta),0),0)))) ,sum(decode(o.clase_material,'C',0,d\
ecode(d.especial,'E',nvl(cantidad,0),0))");
 sqlstm.stmt = ") ,sum(decode(o.clase_material,'C',0,decode(d.especial,'E',r\
ound(nvl((cantidad* valor_venta),0),0)))) ,sum(decode(o.clase_material,'C',dec\
ode(d.especial,'E',nvl(cantidad,0),0))) ,sum(decode(o.clase_material,'C',decod\
e(d.especial,'E',round(nvl((cantidad* valor_venta),0),0)))) into :b0,:b1,:b2,:\
b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b12,:b13,:b14,:b15,:b16,:b17,:b18,:b19,:\
b20,:b21  from ordenes_d d ,ordenes_c o where ((((((o.fecha_documento>=to_date\
(:b22,'yyyymmdd') and o.fecha_documento<=to_date(:b23,'yyyymmdd')) and o.codig\
o_cliente>=:b24) and o.codigo_cliente<=:b25) and decode(:b26,'TO','3',nvl(o.co\
ntado,0))=decode(:b26,'CR',0,'CO',1,'3')) and o.consecutivo=d.consecutivo(+)) \
and o.ano_mes=d.ano_mes(+))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )253;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&cantidad_s;
 sqlstm.sqhstl[0] = (unsigned int  )8;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&valor_venta_s;
 sqlstm.sqhstl[1] = (unsigned int  )8;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&cantidad_o;
 sqlstm.sqhstl[2] = (unsigned int  )8;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&valor_venta_o;
 sqlstm.sqhstl[3] = (unsigned int  )8;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&cantidad_t;
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&valor_venta_t;
 sqlstm.sqhstl[5] = (unsigned int  )8;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&cantidad_sm;
 sqlstm.sqhstl[6] = (unsigned int  )8;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&valor_venta_sm;
 sqlstm.sqhstl[7] = (unsigned int  )8;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&cantidad_ce;
 sqlstm.sqhstl[8] = (unsigned int  )8;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&valor_venta_ce;
 sqlstm.sqhstl[9] = (unsigned int  )8;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&cantidad_vi;
 sqlstm.sqhstl[10] = (unsigned int  )8;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)0;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&valor_venta_vi;
 sqlstm.sqhstl[11] = (unsigned int  )8;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&cantidad_op;
 sqlstm.sqhstl[12] = (unsigned int  )8;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&valor_venta_op;
 sqlstm.sqhstl[13] = (unsigned int  )8;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&cantidad_flex;
 sqlstm.sqhstl[14] = (unsigned int  )8;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)0;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)&valor_venta_flex;
 sqlstm.sqhstl[15] = (unsigned int  )8;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)0;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)&cantidad_ko;
 sqlstm.sqhstl[16] = (unsigned int  )8;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)0;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)&valor_venta_ko;
 sqlstm.sqhstl[17] = (unsigned int  )8;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)0;
 sqlstm.sqinds[17] = (         int  )0;
 sqlstm.sqharm[17] = (unsigned int  )0;
 sqlstm.sqadto[17] = (unsigned short )0;
 sqlstm.sqtdso[17] = (unsigned short )0;
 sqlstm.sqhstv[18] = (         void  *)&cantidad_eo;
 sqlstm.sqhstl[18] = (unsigned int  )8;
 sqlstm.sqhsts[18] = (         int  )0;
 sqlstm.sqindv[18] = (         void  *)0;
 sqlstm.sqinds[18] = (         int  )0;
 sqlstm.sqharm[18] = (unsigned int  )0;
 sqlstm.sqadto[18] = (unsigned short )0;
 sqlstm.sqtdso[18] = (unsigned short )0;
 sqlstm.sqhstv[19] = (         void  *)&valor_venta_eo;
 sqlstm.sqhstl[19] = (unsigned int  )8;
 sqlstm.sqhsts[19] = (         int  )0;
 sqlstm.sqindv[19] = (         void  *)0;
 sqlstm.sqinds[19] = (         int  )0;
 sqlstm.sqharm[19] = (unsigned int  )0;
 sqlstm.sqadto[19] = (unsigned short )0;
 sqlstm.sqtdso[19] = (unsigned short )0;
 sqlstm.sqhstv[20] = (         void  *)&cantidad_ec;
 sqlstm.sqhstl[20] = (unsigned int  )8;
 sqlstm.sqhsts[20] = (         int  )0;
 sqlstm.sqindv[20] = (         void  *)0;
 sqlstm.sqinds[20] = (         int  )0;
 sqlstm.sqharm[20] = (unsigned int  )0;
 sqlstm.sqadto[20] = (unsigned short )0;
 sqlstm.sqtdso[20] = (unsigned short )0;
 sqlstm.sqhstv[21] = (         void  *)&valor_venta_ec;
 sqlstm.sqhstl[21] = (unsigned int  )8;
 sqlstm.sqhsts[21] = (         int  )0;
 sqlstm.sqindv[21] = (         void  *)0;
 sqlstm.sqinds[21] = (         int  )0;
 sqlstm.sqharm[21] = (unsigned int  )0;
 sqlstm.sqadto[21] = (unsigned short )0;
 sqlstm.sqtdso[21] = (unsigned short )0;
 sqlstm.sqhstv[22] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[22] = (unsigned int  )22;
 sqlstm.sqhsts[22] = (         int  )0;
 sqlstm.sqindv[22] = (         void  *)0;
 sqlstm.sqinds[22] = (         int  )0;
 sqlstm.sqharm[22] = (unsigned int  )0;
 sqlstm.sqadto[22] = (unsigned short )0;
 sqlstm.sqtdso[22] = (unsigned short )0;
 sqlstm.sqhstv[23] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[23] = (unsigned int  )22;
 sqlstm.sqhsts[23] = (         int  )0;
 sqlstm.sqindv[23] = (         void  *)0;
 sqlstm.sqinds[23] = (         int  )0;
 sqlstm.sqharm[23] = (unsigned int  )0;
 sqlstm.sqadto[23] = (unsigned short )0;
 sqlstm.sqtdso[23] = (unsigned short )0;
 sqlstm.sqhstv[24] = (         void  *)&codigo_clii;
 sqlstm.sqhstl[24] = (unsigned int  )22;
 sqlstm.sqhsts[24] = (         int  )0;
 sqlstm.sqindv[24] = (         void  *)0;
 sqlstm.sqinds[24] = (         int  )0;
 sqlstm.sqharm[24] = (unsigned int  )0;
 sqlstm.sqadto[24] = (unsigned short )0;
 sqlstm.sqtdso[24] = (unsigned short )0;
 sqlstm.sqhstv[25] = (         void  *)&codigo_clif;
 sqlstm.sqhstl[25] = (unsigned int  )22;
 sqlstm.sqhsts[25] = (         int  )0;
 sqlstm.sqindv[25] = (         void  *)0;
 sqlstm.sqinds[25] = (         int  )0;
 sqlstm.sqharm[25] = (unsigned int  )0;
 sqlstm.sqadto[25] = (unsigned short )0;
 sqlstm.sqtdso[25] = (unsigned short )0;
 sqlstm.sqhstv[26] = (         void  *)&contado;
 sqlstm.sqhstl[26] = (unsigned int  )5;
 sqlstm.sqhsts[26] = (         int  )0;
 sqlstm.sqindv[26] = (         void  *)0;
 sqlstm.sqinds[26] = (         int  )0;
 sqlstm.sqharm[26] = (unsigned int  )0;
 sqlstm.sqadto[26] = (unsigned short )0;
 sqlstm.sqtdso[26] = (unsigned short )0;
 sqlstm.sqhstv[27] = (         void  *)&contado;
 sqlstm.sqhstl[27] = (unsigned int  )5;
 sqlstm.sqhsts[27] = (         int  )0;
 sqlstm.sqindv[27] = (         void  *)0;
 sqlstm.sqinds[27] = (         int  )0;
 sqlstm.sqharm[27] = (unsigned int  )0;
 sqlstm.sqadto[27] = (unsigned short )0;
 sqlstm.sqtdso[27] = (unsigned short )0;
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
 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error Leyendo Ordenes_c(C2) (%d)\n", sqlca.sqlcode);

/*
 if (strcmp(fecha_ini.arr,"911021")<=0&&strcmp(fecha_fin.arr,"911021")>=0)
     valor_venta_vi++;
*/

 /* EXEC SQL select sum(nvl(valor_fletes,0)), sum(nvl(valor_iva,0)), sum(nvl(rete_fte,0))
          into :valor_fletes, :valor_iva, :rete_fte
          from  facturas
          where fecha_documento >= to_date(:fecha_ini,'yyyymmdd')       and
                fecha_documento <= to_date(:fecha_fin,'yyyymmdd')       and
                codigo_cliente  >= :codigo_clii                         and
                codigo_cliente  <= :codigo_clif                         and
                decode(:contado,'TO','3',nvl(contado,'F')) = decode(:contado,'CR','F','CO','C','3') and
                not exists
                (select *
                 from basura
                 where facturas.tipo_factura   = basura.tipo_factura    and
                       facturas.tipo_documento = basura.tipo_documento  and
                       facturas.numero_factura = basura.numero_factura); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 36;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select sum(nvl(valor_fletes,0)) ,sum(nvl(valor_iva,0)) ,sum(\
nvl(rete_fte,0)) into :b0,:b1,:b2  from facturas where (((((fecha_documento>=t\
o_date(:b3,'yyyymmdd') and fecha_documento<=to_date(:b4,'yyyymmdd')) and codig\
o_cliente>=:b5) and codigo_cliente<=:b6) and decode(:b7,'TO','3',nvl(contado,'\
F'))=decode(:b7,'CR','F','CO','C','3')) and  not exists (select *  from basura\
 where ((facturas.tipo_factura=basura.tipo_factura and facturas.tipo_documento\
=basura.tipo_documento) and facturas.numero_factura=basura.numero_factura)))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )380;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&valor_fletes;
 sqlstm.sqhstl[0] = (unsigned int  )8;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&valor_iva;
 sqlstm.sqhstl[1] = (unsigned int  )8;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&rete_fte;
 sqlstm.sqhstl[2] = (unsigned int  )8;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[3] = (unsigned int  )22;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[4] = (unsigned int  )22;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&codigo_clii;
 sqlstm.sqhstl[5] = (unsigned int  )22;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&codigo_clif;
 sqlstm.sqhstl[6] = (unsigned int  )22;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&contado;
 sqlstm.sqhstl[7] = (unsigned int  )5;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&contado;
 sqlstm.sqhstl[8] = (unsigned int  )5;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
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
 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error Leyendo Facturas(C3) (%d)\n", sqlca.sqlcode);

 /* EXEC SQL select sum(decode(tipo_servicio,'FE',decode(sign(c.ano_mes-200505),1,cantidad*valor_unidad,0),0))
          into :valor_fletes_c
          from  ordenes_c c, ordenes_o o
          where c.fecha_documento >= to_date(:fecha_ini,'yyyymmdd')       and
                c.fecha_documento <= to_date(:fecha_fin,'yyyymmdd')       and
                c.codigo_cliente  >= :codigo_clii                         and
                c.codigo_cliente  <= :codigo_clif                         and
                decode(:contado,'TO','3',nvl(c.contado,0)) = decode(:contado,'CR',0,'CO',1,'3') and
                c.ano_mes          = o.ano_mes                            and
                c.consecutivo      = o.consecutivo; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 36;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select sum(decode(tipo_servicio,'FE',decode(sign((c.ano_mes-\
200505)),1,(cantidad* valor_unidad),0),0)) into :b0  from ordenes_c c ,ordenes\
_o o where ((((((c.fecha_documento>=to_date(:b1,'yyyymmdd') and c.fecha_docume\
nto<=to_date(:b2,'yyyymmdd')) and c.codigo_cliente>=:b3) and c.codigo_cliente<\
=:b4) and decode(:b5,'TO','3',nvl(c.contado,0))=decode(:b5,'CR',0,'CO',1,'3'))\
 and c.ano_mes=o.ano_mes) and c.consecutivo=o.consecutivo)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )431;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&valor_fletes_c;
 sqlstm.sqhstl[0] = (unsigned int  )8;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[1] = (unsigned int  )22;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[2] = (unsigned int  )22;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&codigo_clii;
 sqlstm.sqhstl[3] = (unsigned int  )22;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&codigo_clif;
 sqlstm.sqhstl[4] = (unsigned int  )22;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&contado;
 sqlstm.sqhstl[5] = (unsigned int  )5;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&contado;
 sqlstm.sqhstl[6] = (unsigned int  )5;
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
 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error Leyendo Fletes(C3) (%d)\n", sqlca.sqlcode);


 /* EXEC SQL select sum(round(nvl(valor_desctos,0),0)),
                 sum(round(nvl(valor_otros,0),0))
          into :valor_desctos_c, :valor_otros_c
          from  ordenes_c c
          where c.fecha_documento >= to_date(:fecha_ini,'yyyymmdd') and
                c.fecha_documento <= to_date(:fecha_fin,'yyyymmdd') and
                c.codigo_cliente  >= :codigo_clii                   and
                c.codigo_cliente  <= :codigo_clif                   and
                decode(:contado,'TO','3',nvl(c.contado,0)) = decode(:contado,'CR',0,'CO',1,'3') and
                c.estado          <> 'R'                            and
                c.clase_material   = 'C'                            and
                not exists
                (select 'x'
                 from basura
                 where tipo_documento = 'O' and
                       numero_factura = c.numero_orden); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 36;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select sum(round(nvl(valor_desctos,0),0)) ,sum(round(nvl(val\
or_otros,0),0)) into :b0,:b1  from ordenes_c c where (((((((c.fecha_documento>\
=to_date(:b2,'yyyymmdd') and c.fecha_documento<=to_date(:b3,'yyyymmdd')) and c\
.codigo_cliente>=:b4) and c.codigo_cliente<=:b5) and decode(:b6,'TO','3',nvl(c\
.contado,0))=decode(:b6,'CR',0,'CO',1,'3')) and c.estado<>'R') and c.clase_mat\
erial='C') and  not exists (select 'x'  from basura where (tipo_documento='O' \
and numero_factura=c.numero_orden)))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )474;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&valor_desctos_c;
 sqlstm.sqhstl[0] = (unsigned int  )8;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&valor_otros_c;
 sqlstm.sqhstl[1] = (unsigned int  )8;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[2] = (unsigned int  )22;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[3] = (unsigned int  )22;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&codigo_clii;
 sqlstm.sqhstl[4] = (unsigned int  )22;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&codigo_clif;
 sqlstm.sqhstl[5] = (unsigned int  )22;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&contado;
 sqlstm.sqhstl[6] = (unsigned int  )5;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&contado;
 sqlstm.sqhstl[7] = (unsigned int  )5;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
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
 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error Leyendo Ordenes_c(C4) (%d)\n", sqlca.sqlcode);

 /* EXEC SQL select nvl(sum(nvl(valor_neto,0)),0) valor
          into :otras_fac
          from basura b, facturas f
          where b.tipo_documento  in ('F','C')                         and
                b.tipo_documento   = f.tipo_documento                  and
                b.tipo_factura     = f.tipo_factura                    and
                b.numero_factura   = f.numero_factura                  and
                f.fecha_documento >= to_date(:fecha_ini,'yyyymmdd')    and
                f.fecha_documento <= to_date(:fecha_fin,'yyyymmdd')    and
                f.codigo_cliente  >= :codigo_clii                      and
                f.codigo_cliente  <= :codigo_clif                      and
                decode(:contado,'TO','3',nvl(f.contado,'F')) = decode(:contado,'CR','F','CO','C','3') and
                b.ano_mes         >= :ano_mesi                         and
                b.ano_mes         <= :ano_mesf; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 36;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select nvl(sum(nvl(valor_neto,0)),0) valor into :b0  from ba\
sura b ,facturas f where ((((((((((b.tipo_documento in ('F','C') and b.tipo_do\
cumento=f.tipo_documento) and b.tipo_factura=f.tipo_factura) and b.numero_fact\
ura=f.numero_factura) and f.fecha_documento>=to_date(:b1,'yyyymmdd')) and f.fe\
cha_documento<=to_date(:b2,'yyyymmdd')) and f.codigo_cliente>=:b3) and f.codig\
o_cliente<=:b4) and decode(:b5,'TO','3',nvl(f.contado,'F'))=decode(:b5,'CR','F\
','CO','C','3')) and b.ano_mes>=:b7) and b.ano_mes<=:b8)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )521;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&otras_fac;
 sqlstm.sqhstl[0] = (unsigned int  )8;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[1] = (unsigned int  )22;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[2] = (unsigned int  )22;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&codigo_clii;
 sqlstm.sqhstl[3] = (unsigned int  )22;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&codigo_clif;
 sqlstm.sqhstl[4] = (unsigned int  )22;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&contado;
 sqlstm.sqhstl[5] = (unsigned int  )5;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&contado;
 sqlstm.sqhstl[6] = (unsigned int  )5;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&ano_mesi;
 sqlstm.sqhstl[7] = (unsigned int  )22;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&ano_mesf;
 sqlstm.sqhstl[8] = (unsigned int  )22;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
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
 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error Leyendo Basura(C5) (%d) (%s) (%s) (%s) (%s) (%s)\n", sqlca.sqlcode, fecha_ini.arr, fecha_fin.arr, ano_mesi.arr, ano_mesf.arr);

 /* EXEC SQL select sum(nvl(valor_deb,0) - nvl(valor_cre,0))
          into :valor_desco
          from  movto_d
          where codigo_emp in (1,2,3)   and
                cuenta     = '53053501' and
                ano_mes   >= :ano_mesi  and
                ano_mes   <= :ano_mesf; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 36;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select sum((nvl(valor_deb,0)-nvl(valor_cre,0))) into :b0  fr\
om movto_d where (((codigo_emp in (1,2,3) and cuenta='53053501') and ano_mes>=\
:b1) and ano_mes<=:b2)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )572;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&valor_desco;
 sqlstm.sqhstl[0] = (unsigned int  )8;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&ano_mesi;
 sqlstm.sqhstl[1] = (unsigned int  )22;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
 sqlstm.sqhstl[2] = (unsigned int  )22;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
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




 titulos();
 totales();

 cierre_impresora();

 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 36;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )599;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 /* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 36;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )614;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 exit   (0);
}
/*

void busco_oftalmicos()
{
 while (staora == 0 && (!strcmp(clase_material.arr,"C"))) {
        EXEC SQL FETCH C1 INTO :cantidad_bis_mont0, :cantidad_bis_mont1,
                               :cantidad_bis_mont2, :cantidad_bis_mont3,
                               :cantidad_bis_mont4, :cantidad_bis_mont5,
                               :cantidad_bis_mont6, :valor_bis_mont0,
                               :valor_bis_mont1,    :valor_bis_mont2,
                               :valor_bis_mont3,    :valor_bis_mont4,
                               :valor_bis_mont5,    :valor_bis_mont6,
                               :cantidad_fil,       :valor_fil,
                               :cantidad_ar1,       :valor_ar1,
                               :cantidad_ar2,       :valor_ar2,
                               :cantidad_pr,        :valor_pr,
                               :cantidad2_pr,       :valor2_pr,
                               :cantidad_mr,        :valor_mr,
                               :cantidad2_mr,       :valor2_mr,
                               :cantidad_color,     :valor_color,
                               :cantidad_otros,     :valor_otros,
                               :valor_desctos,      :valor_total,
                               :clase_material,     :numero_orden;
        staora  = sqlca.sqlcode;
        if (staora ==  1403) break;
        if (staora == -1405)
            staora  = 0;
        else if (staora)
                 fprintf (stderr, "Error Leyendo C1 (%d)\n", staora);

        clase_material.arr  [clase_material.len] = '\0';
 }
}
*/

void totales()
{
 int i;

 fprintf(fp,"%s%30s%s\n",enfatizado_on,"LENTES OFTALMICOS :",enfatizado_off);

 sprintf(cadena,"%7.0f",cantidad_t);
 fprintf(fp,"%30s%11s","TERMINADOS",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_venta_t);
 fprintf(fp,"%20s\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",cantidad_sm);
 fprintf(fp,"%30s%11s","SEMITERMINADOS",fmtnum("z,zzz,zz9",cadena,r_t));
 /* valor_venta_sm=valor_venta_sm+31775+17300; */
 sprintf(cadena,"%9.2f",valor_venta_sm);
 fprintf(fp,"%20s\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",cantidad_ko);
 fprintf(fp,"%30s%11s","RECUPERACION",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_venta_ko);
 fprintf(fp,"%20s\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));

/* if (cantidad_eo!=0 || valor_venta_eo!=0) {*/
    sprintf(cadena,"%7.0f",cantidad_eo);
    fprintf(fp,"%30s%11s","MUESTRAS",fmtnum("z,zzz,zz9",cadena,r_t));
    sprintf(cadena,"%9.2f",valor_venta_eo);
    fprintf(fp,"%20s\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));
/* }*/

 sprintf(cadena,"%7.0f",cantidad_t+cantidad_sm+cantidad_ko+cantidad_eo);
 fprintf(fp,"%61s\n%30s%11s","-----  ------------------","SUBTOTAL LENTES OFTALMICOS",fmtnum("z,zzz,zzz",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_venta_t+valor_venta_sm+valor_venta_ko+valor_venta_eo);
 fprintf(fp,"%20s\n\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));
/*
 sprintf(cadena,"%7.0f",cantidad_s);
 fprintf(fp,"%30s%11s","SPRAYS",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_venta_s);
 fprintf(fp,"%20s\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));
*/
// fprintf(fp,"%s%30s\n",enfatizado_on,"SERVICIOS :");

 fprintf(fp,"%30s\n","SERVICIOS DE BISEL Y MONTAJE : (Monofocales Bif.,trif. y Prog.)");
// fprintf(fp,"%30s\n","Monofocales Bif.,trif. y Prog.");

 sprintf(cadena,"%7.0f",vec[0].cantidad_bis_mont_t+vec[5].cantidad_bis_mont_t);
 fprintf(fp," %s%29s%s%11s",enfatizado_on,"Standar 1 :",enfatizado_off,fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",vec[0].valor_bis_mont_t+vec[5].valor_bis_mont_t);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",vec[6].cantidad_bis_mont_t);
 fprintf(fp," %s%29s%s%11s",enfatizado_on,"Standar 2 :",enfatizado_off,fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",vec[6].valor_bis_mont_t);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",vec[2].cantidad_bis_mont_t);
 fprintf(fp," %s%31s%s%11s",enfatizado_on,"Recargo por Ranuracio\b'n :",enfatizado_off,fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",vec[2].valor_bis_mont_t);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",vec[3].cantidad_bis_mont_t);
 fprintf(fp," %s%31s%s%11s",enfatizado_on,"Recargo por Perforacio\b'n :",enfatizado_off,fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",vec[3].valor_bis_mont_t);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%6.0f",vec[4].cantidad_bis_mont_t);
 fprintf(fp,"%s%30s%s%11s",enfatizado_on,"Recargo por pulir bordes :",enfatizado_off,fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",vec[4].valor_bis_mont_t);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",vec[1].cantidad_bis_mont_t);
 fprintf(fp," %s%29s%s%11s",enfatizado_on,"Recargo por dise|o especial :",enfatizado_off,fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",vec[1].valor_bis_mont_t);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 for (i=0;i<=6;i++) {
      cantidad_bis_mont_g+= vec[i].cantidad_bis_mont_t;
      valor_bis_mont_g   += vec[i].valor_bis_mont_t;
     }
 sprintf(cadena,"%7.0f",cantidad_bis_mont_g);
 fprintf(fp,"%61s\n%30s%11s","-----  ------------------","SUBTOTAL BISEL MONTAJE...",fmtnum("z,zzz,zzz",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_bis_mont_g);
 fprintf(fp,"%20s\n\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));

 fprintf(fp,"%s%30s%s\n",enfatizado_on,"TRATAMIENTOS - FILTROS Y COLOR:",enfatizado_off);

// fprintf(fp,"%30s\n","TRATAMIENTO ANTIRREFLEJO :");
 sprintf(cadena,"%7.0f",cantidad_ar1_t);
 fprintf(fp,"%30s%11s","TRAT. ANTIRREFLEJO RF Rx-1 :",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_ar1_t);
 fprintf(fp,"%20s\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",cantidad_ar2_t);
 fprintf(fp,"%30s%11s","TRAT. ANTIRREFLEJO RF Rx-2 :",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_ar2_t);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",cantidad_mr_t);
 fprintf(fp,"%30s%11s","TRATAMIENTO MR-1 :",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_mr_t);
 fprintf(fp,"%20s\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",cantidad_pr_t);
 fprintf(fp,"%30s%11s","TRATAMIENTO PR-1 :",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_pr_t);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",cantidad2_pr_t);
 fprintf(fp,"%30s%11s","TRATAMIENTO PR-2 :",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor2_pr_t);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",cantidad_ar1_t+cantidad_ar2_t+cantidad_mr_t+cantidad_pr_t+cantidad2_pr_t);
 fprintf(fp,"%61s\n%30s%11s","-----  ------------------","SUB. TRATAMIENTOS (RF.MR.PR)..",fmtnum("z,zzz,zzz",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_ar1_t+valor_ar2_t+valor_mr_t+valor_pr_t+valor2_pr_t);
 fprintf(fp,"%20s\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",cantidad_fil_t);
 fprintf(fp,"%30s%11s","SUB. FILTROS TERAPEUTICOS :",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_fil_t);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",cantidad_color_t);
 fprintf(fp,"%30s%11s","SUB. COLOR :",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_color_t);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
/*
 sprintf(cadena,"%7.0f",cantidad_fil_t+cantidad_color_t);
 fprintf(fp,"%61s\n%30s%11s","-----  ------------------","SUB. TRAT.-FILTROS Y COLOR...",fmtnum("z,zzz,zzz",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_fil_t+valor_color_t);
 fprintf(fp,"%20s\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));
*/
 sprintf(cadena,"%7.0f",cantidad_ar1_t+cantidad_ar2_t+cantidad_mr_t+cantidad_pr_t+cantidad2_pr_t+cantidad_fil_t+cantidad_color_t);
 fprintf(fp,"%61s\n%30s%11s","-----  ------------------","SUB. TRAT.-FILTROS Y COLOR...",fmtnum("z,zzz,zzz",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_ar1_t+valor_ar2_t+valor_mr_t+valor_pr_t+valor2_pr_t+valor_fil_t+valor_color_t);
 fprintf(fp,"%20s\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%9.2f",valor_otros_t+valor_venta_o+valor_venta_s);
 fprintf(fp,"%30s%31s\n","OTROS CARGOS :",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%9.2f",valor_desctos_t);
 fprintf(fp,"%30s%31s\n","MENOS DESCUENTOS EN VENTAS:",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%9.2f",valor_total_t-valor_fletes_c);
 fprintf(fp,"%61s\n%s%30s%s%31s\n\n","------------------",enfatizado_on,"TOTAL DIVISION OFTALMICA",enfatizado_off,fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));


 fprintf(fp,"%s%30s%s\n",enfatizado_on,"LENTES DE CONTACTO :",enfatizado_off);

 if (cantidad_ce!=0 || valor_venta_ce!=0) {
     sprintf(cadena,"%7.0f",cantidad_ce);
     fprintf(fp,"%30s%11s","BLANDOS CENTRISOFT",fmtnum("z,zzz,zz9",cadena,r_t));
     sprintf(cadena,"%9.2f",valor_venta_ce);
     fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
 }

 if (cantidad_vi!=0 || valor_venta_vi!=0) {
    sprintf(cadena,"%7.0f",cantidad_vi);
    fprintf(fp,"%30s%11s","BLANDOS VISTASOFT",fmtnum("z,zzz,zz9",cadena,r_t));
    sprintf(cadena,"%9.2f",valor_venta_vi);
    fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
 }

 sprintf(cadena,"%7.0f",cantidad_op-cantidad_vi);
 fprintf(fp,"%30s%11s","BLANDOS",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_venta_op-valor_venta_vi);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%7.0f",cantidad_flex);
 fprintf(fp,"%30s%11s","F L E X I B L E S",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_venta_flex);
 fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

/* if (cantidad_ec!=0 || valor_venta_ec!=0) {*/
    sprintf(cadena,"%7.0f",cantidad_ec);
    fprintf(fp,"%30s%11s","OTROS",fmtnum("z,zzz,zz9",cadena,r_t));
    sprintf(cadena,"%9.2f",valor_venta_ec);
    fprintf(fp,"%20s\n",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
/* }*/

 sprintf(cadena,"%7.0f",cantidad_ce+cantidad_op+cantidad_flex+cantidad_ec);
 fprintf(fp,"%61s\n%s%30s%s%11s","-----  ------------------",enfatizado_on,"SUBTOTAL DIVISION DE CONTACTO",enfatizado_off,fmtnum("z,zzz,zzz",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_venta_ce+valor_venta_op+valor_venta_flex+valor_venta_ec);
 fprintf(fp,"%20s\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%9.2f",valor_otros_c);
 fprintf(fp,"%30s%31s\n","MAS OTROS",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%9.2f",valor_desctos_c);
 fprintf(fp,"%30s%31s\n","MENOS DESCUENTOS EN VENTAS",fmtnum("zzz,zzz,zz9.99",cadena,r_t));

 fprintf(fp,"%61s\n%s%30s%s","-----  ------------------",enfatizado_on,"TOTAL DIVISION DE CONTACTO",enfatizado_off);
 sprintf(cadena,"%9.2f",valor_venta_ce+valor_venta_op+valor_venta_flex+valor_otros_c-valor_desctos_c+valor_venta_ec);
 fprintf(fp,"%31s\n",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));


 sprintf(cadena,"%8.2f",valor_total_t-valor_fletes_c+valor_venta_ce+valor_venta_op+valor_venta_flex+valor_otros_c-valor_desctos_c+valor_venta_ec);
 fprintf(fp,"%61s\n%30s%31s\n","------------------","TOTAL VENTA BRUTA",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%9.2f",valor_fletes);
 fprintf(fp,"%30s%31s\n","VALOR DESPACHOS",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));

 fe_ini=atof(fecha_ini.arr);
 fe_fin=atof(fecha_fin.arr);
 /* if (fe_ini <= 920423 && fe_fin >= 920423)
     valor_iva=valor_iva-120036;  */
 sprintf(cadena,"%12.2f",otras_fac);
 fprintf(fp,"%30s%31s\n","OTRAS FACTURAS",fmtnum("z,zzz,zzz,zz9.99",cadena,r_t));

 sprintf(cadena,"%12.2f",valor_total_t-valor_fletes_c+valor_venta_ce+valor_venta_op+valor_venta_flex+valor_otros_c+valor_venta_ec-valor_desctos_c+valor_fletes+otras_fac);
 fprintf(fp,"%61s\n%s%30s%31s%s\n","=====================",enfatizado_on,"TOTAL VENTA NETA",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t),enfatizado_off);
 fprintf(fp,"\r");

 sprintf(cadena,"%9.2f",valor_iva);
 fprintf(fp,"%30s%31s\n","TOTAL IVA",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
 sprintf(cadena,"%9.2f",rete_fte);
 fprintf(fp,"%30s%31s\n","MENOS RETENCION EN LA FUENTE",fmtnum("zzz,zzz,zzz,zz9.99",cadena,r_t));
 sprintf(cadena,"%12.2f",otras_fac+valor_total_t-valor_fletes_c+valor_venta_ce+valor_venta_op+valor_venta_flex+valor_otros_c+valor_venta_ec-valor_desctos_c+valor_fletes+valor_iva-rete_fte);
 fprintf(fp,"%61s\n%s%30s%31s%s\n","=====================",enfatizado_on,"TOTAL CARTERA",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t),enfatizado_off);
 fprintf(fp,"\r");

 sprintf(cadena,"%12.2f",valor_desco);
 fprintf(fp,"%30s%31s\n","DESCUENTOS CONDICIONADOS",fmtnum("z,zzz,zzz,zz9.99",cadena,r_t));
 sprintf(cadena,"%12.2f",otras_fac+valor_total_t-valor_fletes_c+valor_venta_ce+valor_venta_op+valor_venta_flex+valor_otros_c+valor_venta_ec-valor_desctos_c+valor_fletes+valor_iva-valor_desco-rete_fte);
 fprintf(fp,"%61s\n%s%30s%31s%s\n","=====================",enfatizado_on,"TOTAL NETO",fmtnum("$zzz,zzz,zzz,zz9.99",cadena,r_t),enfatizado_off);
 fprintf(fp,"\r");
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 fprintf(fp,"%s%s%s%s%49s\n\n", salte_pagina, diezcpi, condensado_on, ancho_on, "DISCRIMINACION DE LA VENTA NETA");
 strorg(fechas,1,strlen(fechas));
 fprintf(fp,"%s%s%s%62s%s\n\n",diezcpi,ancho_off,enfatizado_on,fechas,enfatizado_off);
 fprintf(fp,"%41s%16s\n","CANTIDAD","VALOR");
 fprintf(fp,"%41s%20s\n","--------","------------------");
 con_lin = 6;
}
