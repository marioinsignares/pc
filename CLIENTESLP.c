
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
           char  filnam[16];
};
static const struct sqlcxp sqlfpn =
{
    15,
    ".\\clienteslp.pc"
};


static unsigned long sqlctx = 2087547;


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
            void  *sqhstv[14];
   unsigned int   sqhstl[14];
            int   sqhsts[14];
            void  *sqindv[14];
            int   sqinds[14];
   unsigned int   sqharm[14];
   unsigned int   *sqharc[14];
   unsigned short  sqadto[14];
   unsigned short  sqtdso[14];
} sqlstm = {10,14};

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

 static const char *sq0005 = 
"select cl.codigo_cliente ,n.nombre ,n.codigo_nit ,nvl(cl.dcto_financ,0) ,nvl\
(cl.dcto_cial,0) ,cl.lista ,decode(nvl(cl.contado,'0'),'0',' ','CONTADO') ,nvl\
(p.codigo,'N') ,nvl(os.ptaje,op.ptaje) ,nvl(to_char(cl.fec_dcto_cial,'DD-MON-Y\
YYY'),' ') ,nvl(to_char(cl.fec_dcto_financ,'DD-MON-YYYY'),' ') ,nvl(to_char(ot\
.fecha,'DD-MON-YYYY'),' ') fecha_ot ,decode(ot.marca,1,'*',' ') marca  from ni\
ts n ,ciudades c ,clientes cl ,preferencia p ,opticasp op ,opticass os ,optica\
st ot where ((((((((n.codigo_nit=cl.codigo_nit and n.codigo_ciu=c.codigo) and \
cl.codigo_cliente=p.codigo_cliente(+)) and cl.codigo_cliente=op.codigo_cliente\
(+)) and cl.codigo_cliente=os.codigo_cliente(+)) and cl.codigo_cliente=ot.codi\
go_cliente(+)) and cl.estado<>'R') and cl.codigo_cliente>=:b0) and cl.codigo_c\
liente<=:b1) group by cl.codigo_cliente,n.nombre,n.codigo_nit,cl.dcto_financ,c\
l.dcto_cial,cl.lista,cl.contado,p.codigo,op.ptaje,os.ptaje,cl.fec_dcto_cial,cl\
.fec_dcto_financ,ot.fecha,ot.marca order by cl.codigo_cliente,n.nombre        \
    ";

 static const char *sq0006 = 
"igo,cl.codigo_cliente            ";

 static const char *sq0007 = 
"ot.fecha,ot.marca order by pr.valor desc ,cl.codigo_cliente,n.nombre        \
    ";

 static const char *sq0008 = 
"lista desc ,cl.contado,cl.dcto_financ,p.codigo,cl.codigo_cliente            ";

 static const char *sq0012 = 
"select TIPO_TRABAJO ,sum(decode(lista,0,VALOR_UNIDAD,0)) LISTA0 ,sum(decode(\
lista,1,(VALOR_UNIDAD-((VALOR_UNIDAD* VALOR_DESCTO)/100)),0)) LISTA1  from SER\
VICIOS_LEN where ((TIPO_SERVICIO='TR' and SUBSTR(TIPO_TRABAJO,1,2) in ('AR','M\
R','SA')) and LISTA in (0,1)) group by TIPO_TRABAJO order by TIPO_TRABAJO     \
       ";

 static const char *sq0013 = 
"select codigo_articulo ,sum(decode(lista,0,valor_venta,0)) LISTA0 ,sum(decod\
e(lista,1,(valor_venta-((valor_venta* 10)/100)),0)) LISTA1 ,ref_descto ,nvl(to\
_char(fecha,'DD-MON-YYYY'),' ')  from precios_otr where (substr(codigo_articul\
o,1,2) in ('AR','MR','SA') and LISTA=0) group by codigo_articulo,ref_descto,fe\
cha order by codigo_articulo            ";

 static const char *sq0009 = 
"select nvl(numero,0)  from telefonos where codigo_nit=:b0 order by orden    \
        ";

 static const char *sq0010 = 
"select nombre ,cargo  from representa where codigo_nit=:b0           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,177,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,21,0,2,202,0,0,0,0,0,1,0,
51,0,0,3,404,0,3,208,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
74,0,0,4,54,0,4,224,0,0,1,0,0,1,0,2,4,0,0,
93,0,0,11,127,0,4,333,0,0,3,0,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,
120,0,0,5,1016,0,9,346,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
143,0,0,6,1057,0,9,350,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
166,0,0,7,1104,0,9,354,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
189,0,0,8,1100,0,9,358,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
212,0,0,5,0,0,13,369,0,0,13,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
3,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
279,0,0,6,0,0,13,373,0,0,13,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
3,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
346,0,0,7,0,0,13,377,0,0,14,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
3,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
417,0,0,8,0,0,13,381,0,0,14,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
3,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
488,0,0,12,317,0,9,483,0,0,0,0,0,1,0,
503,0,0,12,0,0,13,489,0,0,3,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,
530,0,0,13,350,0,9,638,0,0,0,0,0,1,0,
545,0,0,13,0,0,13,643,0,0,5,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,
580,0,0,5,0,0,15,674,0,0,0,0,0,1,0,
595,0,0,6,0,0,15,677,0,0,0,0,0,1,0,
610,0,0,9,0,0,15,679,0,0,0,0,0,1,0,
625,0,0,10,0,0,15,680,0,0,0,0,0,1,0,
640,0,0,12,0,0,15,681,0,0,0,0,0,1,0,
655,0,0,13,0,0,15,682,0,0,0,0,0,1,0,
670,0,0,14,0,0,30,684,0,0,0,0,0,1,0,
685,0,0,9,84,0,9,694,0,0,1,1,0,1,0,1,9,0,0,
704,0,0,9,0,0,13,697,0,0,1,0,0,1,0,2,4,0,0,
723,0,0,9,0,0,15,716,0,0,0,0,0,1,0,
738,0,0,10,69,0,9,724,0,0,1,1,0,1,0,1,9,0,0,
757,0,0,10,0,0,13,727,0,0,2,0,0,1,0,2,9,0,0,2,9,0,0,
780,0,0,10,0,0,15,753,0,0,0,0,0,1,0,
};


/*****************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* clientes.c Programa que lista los clientes
*
* Uso : clientes device copias userid/password
*
* Martin A. Toloza L. Creado Diciembre 17-1997.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <math.h>

void telefonos();
void contacto();
void titulos();

double redondo();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

/* VARCHAR nomb_emp   [61]; */ 
struct { unsigned short len; unsigned char arr[61]; } nomb_emp;

double  nit;
int     digito;
/* VARCHAR codigo_emp [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

                                 /* Nits (C1) */
/* VARCHAR codigo_cliente[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_cliente;

/* VARCHAR nomb_clie     [45]; */ 
struct { unsigned short len; unsigned char arr[45]; } nomb_clie;

/* VARCHAR nomb_ciu      [21]; */ 
struct { unsigned short len; unsigned char arr[21]; } nomb_ciu;

/* VARCHAR direccion     [46]; */ 
struct { unsigned short len; unsigned char arr[46]; } direccion;

double  nit;
int     digito;
double  codigo_nit;
float   dcto_financ;
float   dcto_cial;
float   ptaje;
int     lista;
/* VARCHAR contado       [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } contado;

/* VARCHAR codigo        [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } codigo;

/* VARCHAR ar            [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } ar;

/* VARCHAR codigo_clii   [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_clii;

/* VARCHAR codigo_clif   [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_clif;

                                 /* Ciudades (C2) */
/* VARCHAR nombre_ciu    [21]; */ 
struct { unsigned short len; unsigned char arr[21]; } nombre_ciu;

/* VARCHAR codigo_ciu    [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_ciu;

                                 /* Telefonos (C3) */
double  telefono;
/* VARCHAR codigo_nit_c  [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nit_c;

                                 /* Representa (C4) */
/* VARCHAR nomb_repre    [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } nomb_repre;

/* VARCHAR cargo         [21]; */ 
struct { unsigned short len; unsigned char arr[21]; } cargo;


/* VARCHAR tipo_trabajo  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } tipo_trabajo;

double  valor_unidad;
double  valor_unidad2;

/* VARCHAR codigo_articulo [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_articulo;

double  valor_venta;
double  valor_venta2;
double  ref_descto;

/* VARCHAR fecha_ini     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_ini;

/* VARCHAR fecha_fin     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_fin;

/* VARCHAR codigo_ini    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_ini;

/* VARCHAR codigo_fin    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_fin;

double  valor;
double  valor_total;
/* VARCHAR fec_dcto_cial[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fec_dcto_cial;
 
/* VARCHAR fec_dcto_financ[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fec_dcto_financ;

/* VARCHAR fecha_ot[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_ot;

/* VARCHAR marca[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } marca;

/* VARCHAR fecha_pre[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_pre;


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


#define A_F1 "###,###,###.##"

                                            /* Variables globales del usuario */
char *fmtnum(), r_t[80];
int     con_pag;                                   /* Contador de Paginas */
int     con_pagr;
int     con_lin= 63;                                   /* Contador de Lineas  */
int	staora = 0;
int	oraest = 0;
int     traidos= 0;
int     c;
char    copias[3];
char    codigo_ant[3];
char    repre[4];
char    orden[4];
char    paretto[4];

char    fechas[90];
char    fecha [70];
char    cadena[100];
char    cadena2[120];
char    cadena3[120];
char    cadena4[20];
double  porcentaje;
double  valor_parcial;
char    lprecio[22][150];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

if (argc < 8)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : clienteslp lista_representante (s/n) orden de codigo(s/n) con paretto(s/n) codigo_ini codigo_fin fecha_ini fecha_fin device pag_recupera userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (repre,    argv[1]);
strlow (repre);
strcpy (orden,    argv[2]);
strlow (orden);
strcpy (paretto,  argv[3]);
strlow (paretto);
strcpy (codigo_ini.arr,argv[4]);
codigo_ini.len   =     strlen(codigo_ini.arr);
strcpy (codigo_fin.arr,argv[5]);
codigo_fin.len   =     strlen(codigo_fin.arr);
strcpy (fecha_ini.arr, argv[6]);
fecha_ini.len   =      strlen(fecha_ini.arr);
strcpy (fecha_fin.arr, argv[7]);
fecha_fin.len   =      strlen(fecha_fin.arr);
if ( strlen(fecha_ini.arr) != 8 || strlen(fecha_fin.arr) != 8 ) {
   printf("Error, la fecha debe ser de 8 digitos y formato AAAAMMDD");
   exit (1);
}
strcpy (device,   argv[8]);
strlow (device);
strcpy (copias,   "1");
strcpy (cadena, argv[9]);
strorg (cadena,1,4);
con_pagr = atoi(cadena);

strcpy(fecha,fecha_ini.arr);
fecha_oracle3(fecha);
strcpy(cadena,fecha);
strcpy(fecha,fecha_fin.arr);
strcat(cadena," hasta ");
fecha_oracle3(fecha);
strcat(cadena,fecha);
strcpy(fechas,cadena);

if (!strpos ("/", argv[10]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,   argv[10]);
uid.len   =        strlen(uid.arr);
printf ("%s\n",uid.arr);

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

   /* EXEC SQL delete from paretto; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 10;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "delete  from paretto ";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )36;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
       fprintf (stderr, "Error Borrando Paretto (%d)\n", sqlca.sqlcode);
/*                   sum(nvl(valor_oftalmica,0)+nvl(valor_contacto,0)-nvl(rete_fte,0))*/

   /* EXEC SQL insert into paretto
            select codigo_cliente,
                   sum(valor_neto)
            from  facturas f
            where tipo_documento  in ('F','C')                       and
                  fecha_documento >= to_date(:fecha_ini,'yyyymmdd')  and
                  fecha_documento <= to_date(:fecha_fin,'yyyymmdd')  and
                  estado_factura   = 0                               and
              not exists
              (select 'x'
               from   basura
               where  f.tipo_factura   = tipo_factura   and
                      f.tipo_documento = tipo_documento and
                      f.numero_factura = numero_factura)
            group by codigo_cliente; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 10;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into paretto select codigo_cliente ,sum(valor_neto)\
  from facturas f where ((((tipo_documento in ('F','C') and fecha_documento>=t\
o_date(:b0,'yyyymmdd')) and fecha_documento<=to_date(:b1,'yyyymmdd')) and esta\
do_factura=0) and  not exists (select 'x'  from basura where ((f.tipo_factura=\
tipo_factura and f.tipo_documento=tipo_documento) and f.numero_factura=numero_\
factura))) group by codigo_cliente";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )51;
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



   /* EXEC SQL select sum(valor)
            into  :valor_total
            from   paretto
            where  valor > 0; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 10;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select sum(valor) into :b0  from paretto where valor>0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )74;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&valor_total;
   sqlstm.sqhstl[0] = (unsigned int  )8;
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



   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
       fprintf (stderr, "Error Insertando Paretto C1(%d)\n", sqlca.sqlcode);

   oraest  = sqlca.sqlcode;
   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
       fprintf (stderr, "Error Leyendo Paretto C4(%d)\n", sqlca.sqlcode);

    /* EXEC SQL DECLARE C1 CURSOR FOR
             select cl.codigo_cliente, n.nombre, n.codigo_nit, nvl(cl.dcto_financ,0), nvl(cl.dcto_cial,0), 
                    cl.lista, decode(nvl(cl.contado,'0'),'0',' ','CONTADO'), nvl(p.codigo,'N'), nvl(os.ptaje,op.ptaje), 
                    nvl(to_char(cl.fec_dcto_cial,'DD-MON-YYYY'),' '), 
                    nvl(to_char(cl.fec_dcto_financ,'DD-MON-YYYY'),' '),
                    nvl(to_char(ot.fecha,'DD-MON-YYYY'), ' ') as fecha_ot,
                    decode(ot.marca,1,'*',' ') as marca
	           from nits n, ciudades c, clientes cl, preferencia p, opticasp op, opticass os, opticast ot
             where n.codigo_nit       = cl.codigo_nit                     and
                   n.codigo_ciu       = c.codigo                          and
                   cl.codigo_cliente  = p.codigo_cliente(+)               and
                   cl.codigo_cliente  = op.codigo_cliente(+)              and
                   cl.codigo_cliente  = os.codigo_cliente(+)              and
                   cl.codigo_cliente  = ot.codigo_cliente(+)              and
                   cl.estado         <> 'R'                               and
                   cl.codigo_cliente >= :codigo_ini                       and
                   cl.codigo_cliente <= :codigo_fin
             group by cl.codigo_cliente, n.nombre, n.codigo_nit, cl.dcto_financ, cl.dcto_cial, cl.lista, cl.contado, p.codigo, op.ptaje,
                      os.ptaje, cl.fec_dcto_cial, cl.fec_dcto_financ, ot.fecha, ot.marca 
             order by cl.codigo_cliente, n.nombre; */ 


    /* EXEC SQL DECLARE C1A CURSOR FOR
             select cl.codigo_cliente, n.nombre, n.codigo_nit, nvl(cl.dcto_financ,0), nvl(cl.dcto_cial,0), 
                    cl.lista, decode(nvl(cl.contado,'0'),'0',' ','CONTADO'), nvl(p.codigo,'N'), nvl(os.ptaje,op.ptaje),
                    nvl(to_char(cl.fec_dcto_cial,'DD-MON-YYYY'),' '), 
                    nvl(to_char(cl.fec_dcto_financ,'DD-MON-YYYY'),' '),
                    nvl(to_char(ot.fecha,'DD-MON-YYYY'), ' ') as fecha_ot,
                    decode(ot.marca,1,'*',' ') as marca
      	     from nits n, ciudades c, clientes cl, preferencia p, opticasp op, opticass os, opticast ot
             where n.codigo_nit       = cl.codigo_nit                     and
                   n.codigo_ciu       = c.codigo                          and
                   cl.codigo_cliente  = p.codigo_cliente(+)               and
                   cl.codigo_cliente  = op.codigo_cliente(+)              and
                   cl.codigo_cliente  = os.codigo_cliente(+)              and
                   cl.codigo_cliente  = ot.codigo_cliente(+)              and
                   cl.estado         <> 'R'                               and
                   cl.codigo_cliente >= :codigo_ini                       and
                   cl.codigo_cliente <= :codigo_fin
             group by cl.codigo_cliente, n.nombre, n.codigo_nit, cl.dcto_financ, cl.dcto_cial, cl.lista, cl.contado, p.codigo, op.ptaje,
                      os.ptaje, cl.fec_dcto_cial, cl.fec_dcto_financ, ot.fecha, ot.marca 
             order by cl.lista desc, cl.contado, cl.dcto_financ, p.codigo, cl.codigo_cliente; */ 


    /* EXEC SQL DECLARE C1B CURSOR FOR
             select cl.codigo_cliente, n.nombre, n.codigo_nit, nvl(cl.dcto_financ,0), nvl(cl.dcto_cial,0), 
                    cl.lista, decode(nvl(cl.contado,'0'),'0',' ','CONTADO'), nvl(p.codigo,'N'), nvl(os.ptaje,op.ptaje), pr.valor, 
                    nvl(to_char(cl.fec_dcto_cial,'DD-MON-YYYY'), ' '), 
                    nvl(to_char(cl.fec_dcto_financ,'DD-MON-YYYY'), ' '),
                    nvl(to_char(ot.fecha,'DD-MON-YYYY'), ' ') as fecha_ot,
                    decode(ot.marca,1,'*',' ') as marca
	           from nits n, ciudades c, clientes cl, preferencia p, opticasp op, opticass os, paretto pr, opticast ot
             where n.codigo_nit       = cl.codigo_nit                     and
                   n.codigo_ciu       = c.codigo                          and
                   cl.codigo_cliente  = p.codigo_cliente(+)               and
                   cl.codigo_cliente  = op.codigo_cliente(+)              and
                   cl.codigo_cliente  = os.codigo_cliente(+)              and
                   cl.codigo_cliente  = ot.codigo_cliente(+)              and
                   cl.estado         <> 'R'                               and
                   cl.codigo_cliente >= :codigo_ini                       and
                   cl.codigo_cliente <= :codigo_fin                       and
                   cl.codigo_cliente  = pr.codigo_cliente
             group by pr.valor, cl.codigo_cliente, n.nombre, n.codigo_nit, cl.dcto_financ, cl.dcto_cial, cl.lista, cl.contado, p.codigo, op.ptaje,
                      os.ptaje, cl.fec_dcto_cial, cl.fec_dcto_financ, ot.fecha, ot.marca
             order by pr.valor desc, cl.codigo_cliente, n.nombre; */ 



    /* EXEC SQL DECLARE C1C CURSOR FOR
             select cl.codigo_cliente, n.nombre, n.codigo_nit, nvl(cl.dcto_financ,0), nvl(cl.dcto_cial,0), 
                    cl.lista, decode(nvl(cl.contado,'0'),'0',' ','CONTADO'), nvl(p.codigo,'N'), nvl(os.ptaje,op.ptaje), pr.valor, 
                    nvl(to_char(cl.fec_dcto_cial,'DD-MON-YYYY'), ' '), 
                    nvl(to_char(cl.fec_dcto_financ,'DD-MON-YYYY'), ' '),
                    nvl(to_char(ot.fecha,'DD-MON-YYYY'), ' ') as fecha_ot,
                    decode(ot.marca,1,'*',' ') as marca  
	           from nits n, ciudades c, clientes cl, preferencia p, opticasp op, opticass os, paretto pr, opticast ot
             where n.codigo_nit       = cl.codigo_nit                     and
                   n.codigo_ciu       = c.codigo                          and
                   cl.codigo_cliente  = p.codigo_cliente(+)               and
                   cl.codigo_cliente  = op.codigo_cliente(+)              and
                   cl.codigo_cliente  = ot.codigo_cliente(+)              and
                   cl.estado         <> 'R'                               and
                   cl.codigo_cliente >= :codigo_ini                       and
                   cl.codigo_cliente <= :codigo_fin                       and
                   cl.codigo_cliente  = pr.codigo_cliente
             group by pr.valor, cl.codigo_cliente, n.nombre, n.codigo_nit, cl.dcto_financ, cl.dcto_cial, cl.lista, cl.contado, p.codigo, op.ptaje,
                      os.ptaje, cl.fec_dcto_cial, cl.fec_dcto_financ, ot.fecha, ot.marca
             order by pr.valor desc, cl.lista desc, cl.contado, cl.dcto_financ, p.codigo, cl.codigo_cliente; */ 


    /* EXEC SQL DECLARE C3 CURSOR FOR
             select nvl(numero,0)
             from   telefonos
             where  codigo_nit = :codigo_nit_c
             order  by orden; */ 


    /* EXEC SQL DECLARE C4 CURSOR FOR
             select nombre, cargo
             from   representa
             where  codigo_nit = :codigo_nit_c; */ 


    /* EXEC SQL select n.nombre, n.nit, n.digito
             into  :nomb_emp, :nit, :digito
             from   nits n, empresas e
             where  n.codigo_nit = e.codigo_nit and
                    e.codigo_emp = 1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select n.nombre ,n.nit ,n.digito into :b0,:b1,:b2  from n\
its n ,empresas e where (n.codigo_nit=e.codigo_nit and e.codigo_emp=1)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )93;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_emp;
    sqlstm.sqhstl[0] = (unsigned int  )63;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&nit;
    sqlstm.sqhstl[1] = (unsigned int  )8;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&digito;
    sqlstm.sqhstl[2] = (unsigned int  )4;
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



    if (sqlca.sqlcode == 0)
        nomb_emp.arr [nomb_emp.len] = '\0';

    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Empresa (%d)\n", sqlca.sqlcode);

    if (!strcmp(orden,"s") && !strcmp(paretto,"n")) {
    	/* EXEC SQL OPEN C1; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 4;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = sq0005;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )120;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&codigo_ini;
     sqlstm.sqhstl[0] = (unsigned int  )22;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&codigo_fin;
     sqlstm.sqhstl[1] = (unsigned int  )22;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
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


    }
    else {
           if (!strcmp(orden,"n") && !strcmp(paretto,"n")) {
    	      /* EXEC SQL OPEN C1A; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 10;
           sqlstm.arrsiz = 4;
           sqlstm.sqladtp = &sqladt;
           sqlstm.sqltdsp = &sqltds;
           sqlbuft((void **)0, 
             "select cl.codigo_cliente ,n.nombre ,n.codigo_nit ,nvl(cl.dcto_\
financ,0) ,nvl(cl.dcto_cial,0) ,cl.lista ,decode(nvl(cl.contado,'0'),'0',' '\
,'CONTADO') ,nvl(p.codigo,'N') ,nvl(os.ptaje,op.ptaje) ,nvl(to_char(cl.fec_d\
cto_cial,'DD-MON-YYYY'),' ') ,nvl(to_char(cl.fec_dcto_financ,'DD-MON-YYYY'),\
' ') ,nvl(to_char(ot.fecha,'DD-MON-YYYY'),' ') fecha_ot ,decode(ot.marca,1,'\
*',' ') marca  from nits n ,ciudades c ,clientes cl ,preferencia p ,opticasp\
 op ,opticass os ,opticast ot where ((((((((n.codigo_nit=cl.codigo_nit and n\
.codigo_ciu=c.codigo) and cl.codigo_cliente=p.codigo_cliente(+)) and cl.codi\
go_cliente=op.codigo_cliente(+)) and cl.codigo_cliente=os.codigo_cliente(+))\
 and cl.codigo_cliente=ot.codigo_cliente(+)) and cl.estado<>'R') and cl.codi\
go_cliente>=:b0) and cl.codigo_cliente<=:b1) group by cl.codigo_cliente,n.no\
mbre,n.codigo_nit,cl.dcto_financ,cl.dcto_cial,cl.lista,cl.contado,p.codigo,o\
p.ptaje,os.ptaje,cl.fec_dcto_cial,cl.fec_dcto_financ,ot.fecha,ot.marca order\
 by cl.lista desc ,cl.contado,cl.dcto_financ,p.cod");
           sqlstm.stmt = sq0006;
           sqlstm.iters = (unsigned int  )1;
           sqlstm.offset = (unsigned int  )143;
           sqlstm.selerr = (unsigned short)1;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)256;
           sqlstm.occurs = (unsigned int  )0;
           sqlstm.sqhstv[0] = (         void  *)&codigo_ini;
           sqlstm.sqhstl[0] = (unsigned int  )22;
           sqlstm.sqhsts[0] = (         int  )0;
           sqlstm.sqindv[0] = (         void  *)0;
           sqlstm.sqinds[0] = (         int  )0;
           sqlstm.sqharm[0] = (unsigned int  )0;
           sqlstm.sqadto[0] = (unsigned short )0;
           sqlstm.sqtdso[0] = (unsigned short )0;
           sqlstm.sqhstv[1] = (         void  *)&codigo_fin;
           sqlstm.sqhstl[1] = (unsigned int  )22;
           sqlstm.sqhsts[1] = (         int  )0;
           sqlstm.sqindv[1] = (         void  *)0;
           sqlstm.sqinds[1] = (         int  )0;
           sqlstm.sqharm[1] = (unsigned int  )0;
           sqlstm.sqadto[1] = (unsigned short )0;
           sqlstm.sqtdso[1] = (unsigned short )0;
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


           }
           else {
                  if (!strcmp(orden,"s") && !strcmp(paretto,"s")) {
    	              /* EXEC SQL OPEN C1B; */ 

{
                   struct sqlexd sqlstm;

                   sqlstm.sqlvsn = 10;
                   sqlstm.arrsiz = 4;
                   sqlstm.sqladtp = &sqladt;
                   sqlstm.sqltdsp = &sqltds;
                   sqlbuft((void **)0, 
                     "select cl.codigo_cliente ,n.nombre ,n.codigo_nit ,nvl(\
cl.dcto_financ,0) ,nvl(cl.dcto_cial,0) ,cl.lista ,decode(nvl(cl.contado,'0')\
,'0',' ','CONTADO') ,nvl(p.codigo,'N') ,nvl(os.ptaje,op.ptaje) ,pr.valor ,nv\
l(to_char(cl.fec_dcto_cial,'DD-MON-YYYY'),' ') ,nvl(to_char(cl.fec_dcto_fina\
nc,'DD-MON-YYYY'),' ') ,nvl(to_char(ot.fecha,'DD-MON-YYYY'),' ') fecha_ot ,d\
ecode(ot.marca,1,'*',' ') marca  from nits n ,ciudades c ,clientes cl ,prefe\
rencia p ,opticasp op ,opticass os ,paretto pr ,opticast ot where (((((((((n\
.codigo_nit=cl.codigo_nit and n.codigo_ciu=c.codigo) and cl.codigo_cliente=p\
.codigo_cliente(+)) and cl.codigo_cliente=op.codigo_cliente(+)) and cl.codig\
o_cliente=os.codigo_cliente(+)) and cl.codigo_cliente=ot.codigo_cliente(+)) \
and cl.estado<>'R') and cl.codigo_cliente>=:b0) and cl.codigo_cliente<=:b1) \
and cl.codigo_cliente=pr.codigo_cliente) group by pr.valor,cl.codigo_cliente\
,n.nombre,n.codigo_nit,cl.dcto_financ,cl.dcto_cial,cl.lista,cl.contado,p.cod\
igo,op.ptaje,os.ptaje,cl.fec_dcto_cial,cl.fec_dcto_financ,");
                   sqlstm.stmt = sq0007;
                   sqlstm.iters = (unsigned int  )1;
                   sqlstm.offset = (unsigned int  )166;
                   sqlstm.selerr = (unsigned short)1;
                   sqlstm.cud = sqlcud0;
                   sqlstm.sqlest = (unsigned char  *)&sqlca;
                   sqlstm.sqlety = (unsigned short)256;
                   sqlstm.occurs = (unsigned int  )0;
                   sqlstm.sqhstv[0] = (         void  *)&codigo_ini;
                   sqlstm.sqhstl[0] = (unsigned int  )22;
                   sqlstm.sqhsts[0] = (         int  )0;
                   sqlstm.sqindv[0] = (         void  *)0;
                   sqlstm.sqinds[0] = (         int  )0;
                   sqlstm.sqharm[0] = (unsigned int  )0;
                   sqlstm.sqadto[0] = (unsigned short )0;
                   sqlstm.sqtdso[0] = (unsigned short )0;
                   sqlstm.sqhstv[1] = (         void  *)&codigo_fin;
                   sqlstm.sqhstl[1] = (unsigned int  )22;
                   sqlstm.sqhsts[1] = (         int  )0;
                   sqlstm.sqindv[1] = (         void  *)0;
                   sqlstm.sqinds[1] = (         int  )0;
                   sqlstm.sqharm[1] = (unsigned int  )0;
                   sqlstm.sqadto[1] = (unsigned short )0;
                   sqlstm.sqtdso[1] = (unsigned short )0;
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


                  }
                  else {
                         if (!strcmp(orden,"n") && !strcmp(paretto,"s")) {
    	                     /* EXEC SQL OPEN C1C; */ 

{
                          struct sqlexd sqlstm;

                          sqlstm.sqlvsn = 10;
                          sqlstm.arrsiz = 4;
                          sqlstm.sqladtp = &sqladt;
                          sqlstm.sqltdsp = &sqltds;
                          sqlbuft((void **)0, 
                            "select cl.codigo_cliente ,n.nombre ,n.codigo_ni\
t ,nvl(cl.dcto_financ,0) ,nvl(cl.dcto_cial,0) ,cl.lista ,decode(nvl(cl.conta\
do,'0'),'0',' ','CONTADO') ,nvl(p.codigo,'N') ,nvl(os.ptaje,op.ptaje) ,pr.va\
lor ,nvl(to_char(cl.fec_dcto_cial,'DD-MON-YYYY'),' ') ,nvl(to_char(cl.fec_dc\
to_financ,'DD-MON-YYYY'),' ') ,nvl(to_char(ot.fecha,'DD-MON-YYYY'),' ') fech\
a_ot ,decode(ot.marca,1,'*',' ') marca  from nits n ,ciudades c ,clientes cl\
 ,preferencia p ,opticasp op ,opticass os ,paretto pr ,opticast ot where (((\
(((((n.codigo_nit=cl.codigo_nit and n.codigo_ciu=c.codigo) and cl.codigo_cli\
ente=p.codigo_cliente(+)) and cl.codigo_cliente=op.codigo_cliente(+)) and cl\
.codigo_cliente=ot.codigo_cliente(+)) and cl.estado<>'R') and cl.codigo_clie\
nte>=:b0) and cl.codigo_cliente<=:b1) and cl.codigo_cliente=pr.codigo_client\
e) group by pr.valor,cl.codigo_cliente,n.nombre,n.codigo_nit,cl.dcto_financ,\
cl.dcto_cial,cl.lista,cl.contado,p.codigo,op.ptaje,os.ptaje,cl.fec_dcto_cial\
,cl.fec_dcto_financ,ot.fecha,ot.marca order by pr.valor desc ,cl.");
                          sqlstm.stmt = sq0008;
                          sqlstm.iters = (unsigned int  )1;
                          sqlstm.offset = (unsigned int  )189;
                          sqlstm.selerr = (unsigned short)1;
                          sqlstm.cud = sqlcud0;
                          sqlstm.sqlest = (unsigned char  *)&sqlca;
                          sqlstm.sqlety = (unsigned short)256;
                          sqlstm.occurs = (unsigned int  )0;
                          sqlstm.sqhstv[0] = (         void  *)&codigo_ini;
                          sqlstm.sqhstl[0] = (unsigned int  )22;
                          sqlstm.sqhsts[0] = (         int  )0;
                          sqlstm.sqindv[0] = (         void  *)0;
                          sqlstm.sqinds[0] = (         int  )0;
                          sqlstm.sqharm[0] = (unsigned int  )0;
                          sqlstm.sqadto[0] = (unsigned short )0;
                          sqlstm.sqtdso[0] = (unsigned short )0;
                          sqlstm.sqhstv[1] = (         void  *)&codigo_fin;
                          sqlstm.sqhstl[1] = (unsigned int  )22;
                          sqlstm.sqhsts[1] = (         int  )0;
                          sqlstm.sqindv[1] = (         void  *)0;
                          sqlstm.sqinds[1] = (         int  )0;
                          sqlstm.sqharm[1] = (unsigned int  )0;
                          sqlstm.sqadto[1] = (unsigned short )0;
                          sqlstm.sqtdso[1] = (unsigned short )0;
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


                         }
                 }
           }
    }
    strcpy(codigo_ant,"**");
    staora  = 0;
/*    printf("staora <%d>",staora); getchar(); */
 while (staora == 0) {

        if (!strcmp(orden,"s") && !strcmp(paretto,"n")) {
           /* EXEC SQL FETCH C1 INTO :codigo_cliente, :nomb_clie, :codigo_nit, :dcto_financ, :dcto_cial, :lista, :contado, :codigo, :ptaje, :fec_dcto_cial, :fec_dcto_financ, :fecha_ot, :marca; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 10;
           sqlstm.arrsiz = 13;
           sqlstm.sqladtp = &sqladt;
           sqlstm.sqltdsp = &sqltds;
           sqlstm.iters = (unsigned int  )1;
           sqlstm.offset = (unsigned int  )212;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)256;
           sqlstm.occurs = (unsigned int  )0;
           sqlstm.sqhstv[0] = (         void  *)&codigo_cliente;
           sqlstm.sqhstl[0] = (unsigned int  )8;
           sqlstm.sqhsts[0] = (         int  )0;
           sqlstm.sqindv[0] = (         void  *)0;
           sqlstm.sqinds[0] = (         int  )0;
           sqlstm.sqharm[0] = (unsigned int  )0;
           sqlstm.sqadto[0] = (unsigned short )0;
           sqlstm.sqtdso[0] = (unsigned short )0;
           sqlstm.sqhstv[1] = (         void  *)&nomb_clie;
           sqlstm.sqhstl[1] = (unsigned int  )47;
           sqlstm.sqhsts[1] = (         int  )0;
           sqlstm.sqindv[1] = (         void  *)0;
           sqlstm.sqinds[1] = (         int  )0;
           sqlstm.sqharm[1] = (unsigned int  )0;
           sqlstm.sqadto[1] = (unsigned short )0;
           sqlstm.sqtdso[1] = (unsigned short )0;
           sqlstm.sqhstv[2] = (         void  *)&codigo_nit;
           sqlstm.sqhstl[2] = (unsigned int  )8;
           sqlstm.sqhsts[2] = (         int  )0;
           sqlstm.sqindv[2] = (         void  *)0;
           sqlstm.sqinds[2] = (         int  )0;
           sqlstm.sqharm[2] = (unsigned int  )0;
           sqlstm.sqadto[2] = (unsigned short )0;
           sqlstm.sqtdso[2] = (unsigned short )0;
           sqlstm.sqhstv[3] = (         void  *)&dcto_financ;
           sqlstm.sqhstl[3] = (unsigned int  )4;
           sqlstm.sqhsts[3] = (         int  )0;
           sqlstm.sqindv[3] = (         void  *)0;
           sqlstm.sqinds[3] = (         int  )0;
           sqlstm.sqharm[3] = (unsigned int  )0;
           sqlstm.sqadto[3] = (unsigned short )0;
           sqlstm.sqtdso[3] = (unsigned short )0;
           sqlstm.sqhstv[4] = (         void  *)&dcto_cial;
           sqlstm.sqhstl[4] = (unsigned int  )4;
           sqlstm.sqhsts[4] = (         int  )0;
           sqlstm.sqindv[4] = (         void  *)0;
           sqlstm.sqinds[4] = (         int  )0;
           sqlstm.sqharm[4] = (unsigned int  )0;
           sqlstm.sqadto[4] = (unsigned short )0;
           sqlstm.sqtdso[4] = (unsigned short )0;
           sqlstm.sqhstv[5] = (         void  *)&lista;
           sqlstm.sqhstl[5] = (unsigned int  )4;
           sqlstm.sqhsts[5] = (         int  )0;
           sqlstm.sqindv[5] = (         void  *)0;
           sqlstm.sqinds[5] = (         int  )0;
           sqlstm.sqharm[5] = (unsigned int  )0;
           sqlstm.sqadto[5] = (unsigned short )0;
           sqlstm.sqtdso[5] = (unsigned short )0;
           sqlstm.sqhstv[6] = (         void  *)&contado;
           sqlstm.sqhstl[6] = (unsigned int  )12;
           sqlstm.sqhsts[6] = (         int  )0;
           sqlstm.sqindv[6] = (         void  *)0;
           sqlstm.sqinds[6] = (         int  )0;
           sqlstm.sqharm[6] = (unsigned int  )0;
           sqlstm.sqadto[6] = (unsigned short )0;
           sqlstm.sqtdso[6] = (unsigned short )0;
           sqlstm.sqhstv[7] = (         void  *)&codigo;
           sqlstm.sqhstl[7] = (unsigned int  )42;
           sqlstm.sqhsts[7] = (         int  )0;
           sqlstm.sqindv[7] = (         void  *)0;
           sqlstm.sqinds[7] = (         int  )0;
           sqlstm.sqharm[7] = (unsigned int  )0;
           sqlstm.sqadto[7] = (unsigned short )0;
           sqlstm.sqtdso[7] = (unsigned short )0;
           sqlstm.sqhstv[8] = (         void  *)&ptaje;
           sqlstm.sqhstl[8] = (unsigned int  )4;
           sqlstm.sqhsts[8] = (         int  )0;
           sqlstm.sqindv[8] = (         void  *)0;
           sqlstm.sqinds[8] = (         int  )0;
           sqlstm.sqharm[8] = (unsigned int  )0;
           sqlstm.sqadto[8] = (unsigned short )0;
           sqlstm.sqtdso[8] = (unsigned short )0;
           sqlstm.sqhstv[9] = (         void  *)&fec_dcto_cial;
           sqlstm.sqhstl[9] = (unsigned int  )22;
           sqlstm.sqhsts[9] = (         int  )0;
           sqlstm.sqindv[9] = (         void  *)0;
           sqlstm.sqinds[9] = (         int  )0;
           sqlstm.sqharm[9] = (unsigned int  )0;
           sqlstm.sqadto[9] = (unsigned short )0;
           sqlstm.sqtdso[9] = (unsigned short )0;
           sqlstm.sqhstv[10] = (         void  *)&fec_dcto_financ;
           sqlstm.sqhstl[10] = (unsigned int  )22;
           sqlstm.sqhsts[10] = (         int  )0;
           sqlstm.sqindv[10] = (         void  *)0;
           sqlstm.sqinds[10] = (         int  )0;
           sqlstm.sqharm[10] = (unsigned int  )0;
           sqlstm.sqadto[10] = (unsigned short )0;
           sqlstm.sqtdso[10] = (unsigned short )0;
           sqlstm.sqhstv[11] = (         void  *)&fecha_ot;
           sqlstm.sqhstl[11] = (unsigned int  )22;
           sqlstm.sqhsts[11] = (         int  )0;
           sqlstm.sqindv[11] = (         void  *)0;
           sqlstm.sqinds[11] = (         int  )0;
           sqlstm.sqharm[11] = (unsigned int  )0;
           sqlstm.sqadto[11] = (unsigned short )0;
           sqlstm.sqtdso[11] = (unsigned short )0;
           sqlstm.sqhstv[12] = (         void  *)&marca;
           sqlstm.sqhstl[12] = (unsigned int  )4;
           sqlstm.sqhsts[12] = (         int  )0;
           sqlstm.sqindv[12] = (         void  *)0;
           sqlstm.sqinds[12] = (         int  )0;
           sqlstm.sqharm[12] = (unsigned int  )0;
           sqlstm.sqadto[12] = (unsigned short )0;
           sqlstm.sqtdso[12] = (unsigned short )0;
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


        }
        else {
               if (!strcmp(orden,"n") && !strcmp(paretto,"n")) {
                   /* EXEC SQL FETCH C1A INTO :codigo_cliente, :nomb_clie, :codigo_nit, :dcto_financ, :dcto_cial, :lista, :contado, :codigo, :ptaje, :fec_dcto_cial, :fec_dcto_financ, :fecha_ot, :marca; */ 

{
                   struct sqlexd sqlstm;

                   sqlstm.sqlvsn = 10;
                   sqlstm.arrsiz = 13;
                   sqlstm.sqladtp = &sqladt;
                   sqlstm.sqltdsp = &sqltds;
                   sqlstm.iters = (unsigned int  )1;
                   sqlstm.offset = (unsigned int  )279;
                   sqlstm.cud = sqlcud0;
                   sqlstm.sqlest = (unsigned char  *)&sqlca;
                   sqlstm.sqlety = (unsigned short)256;
                   sqlstm.occurs = (unsigned int  )0;
                   sqlstm.sqhstv[0] = (         void  *)&codigo_cliente;
                   sqlstm.sqhstl[0] = (unsigned int  )8;
                   sqlstm.sqhsts[0] = (         int  )0;
                   sqlstm.sqindv[0] = (         void  *)0;
                   sqlstm.sqinds[0] = (         int  )0;
                   sqlstm.sqharm[0] = (unsigned int  )0;
                   sqlstm.sqadto[0] = (unsigned short )0;
                   sqlstm.sqtdso[0] = (unsigned short )0;
                   sqlstm.sqhstv[1] = (         void  *)&nomb_clie;
                   sqlstm.sqhstl[1] = (unsigned int  )47;
                   sqlstm.sqhsts[1] = (         int  )0;
                   sqlstm.sqindv[1] = (         void  *)0;
                   sqlstm.sqinds[1] = (         int  )0;
                   sqlstm.sqharm[1] = (unsigned int  )0;
                   sqlstm.sqadto[1] = (unsigned short )0;
                   sqlstm.sqtdso[1] = (unsigned short )0;
                   sqlstm.sqhstv[2] = (         void  *)&codigo_nit;
                   sqlstm.sqhstl[2] = (unsigned int  )8;
                   sqlstm.sqhsts[2] = (         int  )0;
                   sqlstm.sqindv[2] = (         void  *)0;
                   sqlstm.sqinds[2] = (         int  )0;
                   sqlstm.sqharm[2] = (unsigned int  )0;
                   sqlstm.sqadto[2] = (unsigned short )0;
                   sqlstm.sqtdso[2] = (unsigned short )0;
                   sqlstm.sqhstv[3] = (         void  *)&dcto_financ;
                   sqlstm.sqhstl[3] = (unsigned int  )4;
                   sqlstm.sqhsts[3] = (         int  )0;
                   sqlstm.sqindv[3] = (         void  *)0;
                   sqlstm.sqinds[3] = (         int  )0;
                   sqlstm.sqharm[3] = (unsigned int  )0;
                   sqlstm.sqadto[3] = (unsigned short )0;
                   sqlstm.sqtdso[3] = (unsigned short )0;
                   sqlstm.sqhstv[4] = (         void  *)&dcto_cial;
                   sqlstm.sqhstl[4] = (unsigned int  )4;
                   sqlstm.sqhsts[4] = (         int  )0;
                   sqlstm.sqindv[4] = (         void  *)0;
                   sqlstm.sqinds[4] = (         int  )0;
                   sqlstm.sqharm[4] = (unsigned int  )0;
                   sqlstm.sqadto[4] = (unsigned short )0;
                   sqlstm.sqtdso[4] = (unsigned short )0;
                   sqlstm.sqhstv[5] = (         void  *)&lista;
                   sqlstm.sqhstl[5] = (unsigned int  )4;
                   sqlstm.sqhsts[5] = (         int  )0;
                   sqlstm.sqindv[5] = (         void  *)0;
                   sqlstm.sqinds[5] = (         int  )0;
                   sqlstm.sqharm[5] = (unsigned int  )0;
                   sqlstm.sqadto[5] = (unsigned short )0;
                   sqlstm.sqtdso[5] = (unsigned short )0;
                   sqlstm.sqhstv[6] = (         void  *)&contado;
                   sqlstm.sqhstl[6] = (unsigned int  )12;
                   sqlstm.sqhsts[6] = (         int  )0;
                   sqlstm.sqindv[6] = (         void  *)0;
                   sqlstm.sqinds[6] = (         int  )0;
                   sqlstm.sqharm[6] = (unsigned int  )0;
                   sqlstm.sqadto[6] = (unsigned short )0;
                   sqlstm.sqtdso[6] = (unsigned short )0;
                   sqlstm.sqhstv[7] = (         void  *)&codigo;
                   sqlstm.sqhstl[7] = (unsigned int  )42;
                   sqlstm.sqhsts[7] = (         int  )0;
                   sqlstm.sqindv[7] = (         void  *)0;
                   sqlstm.sqinds[7] = (         int  )0;
                   sqlstm.sqharm[7] = (unsigned int  )0;
                   sqlstm.sqadto[7] = (unsigned short )0;
                   sqlstm.sqtdso[7] = (unsigned short )0;
                   sqlstm.sqhstv[8] = (         void  *)&ptaje;
                   sqlstm.sqhstl[8] = (unsigned int  )4;
                   sqlstm.sqhsts[8] = (         int  )0;
                   sqlstm.sqindv[8] = (         void  *)0;
                   sqlstm.sqinds[8] = (         int  )0;
                   sqlstm.sqharm[8] = (unsigned int  )0;
                   sqlstm.sqadto[8] = (unsigned short )0;
                   sqlstm.sqtdso[8] = (unsigned short )0;
                   sqlstm.sqhstv[9] = (         void  *)&fec_dcto_cial;
                   sqlstm.sqhstl[9] = (unsigned int  )22;
                   sqlstm.sqhsts[9] = (         int  )0;
                   sqlstm.sqindv[9] = (         void  *)0;
                   sqlstm.sqinds[9] = (         int  )0;
                   sqlstm.sqharm[9] = (unsigned int  )0;
                   sqlstm.sqadto[9] = (unsigned short )0;
                   sqlstm.sqtdso[9] = (unsigned short )0;
                   sqlstm.sqhstv[10] = (         void  *)&fec_dcto_financ;
                   sqlstm.sqhstl[10] = (unsigned int  )22;
                   sqlstm.sqhsts[10] = (         int  )0;
                   sqlstm.sqindv[10] = (         void  *)0;
                   sqlstm.sqinds[10] = (         int  )0;
                   sqlstm.sqharm[10] = (unsigned int  )0;
                   sqlstm.sqadto[10] = (unsigned short )0;
                   sqlstm.sqtdso[10] = (unsigned short )0;
                   sqlstm.sqhstv[11] = (         void  *)&fecha_ot;
                   sqlstm.sqhstl[11] = (unsigned int  )22;
                   sqlstm.sqhsts[11] = (         int  )0;
                   sqlstm.sqindv[11] = (         void  *)0;
                   sqlstm.sqinds[11] = (         int  )0;
                   sqlstm.sqharm[11] = (unsigned int  )0;
                   sqlstm.sqadto[11] = (unsigned short )0;
                   sqlstm.sqtdso[11] = (unsigned short )0;
                   sqlstm.sqhstv[12] = (         void  *)&marca;
                   sqlstm.sqhstl[12] = (unsigned int  )4;
                   sqlstm.sqhsts[12] = (         int  )0;
                   sqlstm.sqindv[12] = (         void  *)0;
                   sqlstm.sqinds[12] = (         int  )0;
                   sqlstm.sqharm[12] = (unsigned int  )0;
                   sqlstm.sqadto[12] = (unsigned short )0;
                   sqlstm.sqtdso[12] = (unsigned short )0;
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


               }
               else {
                      if (!strcmp(orden,"s") && !strcmp(paretto,"s")) {
                          /* EXEC SQL FETCH C1B INTO :codigo_cliente, :nomb_clie, :codigo_nit, :dcto_financ, :dcto_cial, :lista, :contado, :codigo, :ptaje, :valor, :fec_dcto_cial, :fec_dcto_financ, :fecha_ot, :marca; */ 

{
                          struct sqlexd sqlstm;

                          sqlstm.sqlvsn = 10;
                          sqlstm.arrsiz = 14;
                          sqlstm.sqladtp = &sqladt;
                          sqlstm.sqltdsp = &sqltds;
                          sqlstm.iters = (unsigned int  )1;
                          sqlstm.offset = (unsigned int  )346;
                          sqlstm.cud = sqlcud0;
                          sqlstm.sqlest = (unsigned char  *)&sqlca;
                          sqlstm.sqlety = (unsigned short)256;
                          sqlstm.occurs = (unsigned int  )0;
                          sqlstm.sqhstv[0] = (         void  *)&codigo_cliente;
                          sqlstm.sqhstl[0] = (unsigned int  )8;
                          sqlstm.sqhsts[0] = (         int  )0;
                          sqlstm.sqindv[0] = (         void  *)0;
                          sqlstm.sqinds[0] = (         int  )0;
                          sqlstm.sqharm[0] = (unsigned int  )0;
                          sqlstm.sqadto[0] = (unsigned short )0;
                          sqlstm.sqtdso[0] = (unsigned short )0;
                          sqlstm.sqhstv[1] = (         void  *)&nomb_clie;
                          sqlstm.sqhstl[1] = (unsigned int  )47;
                          sqlstm.sqhsts[1] = (         int  )0;
                          sqlstm.sqindv[1] = (         void  *)0;
                          sqlstm.sqinds[1] = (         int  )0;
                          sqlstm.sqharm[1] = (unsigned int  )0;
                          sqlstm.sqadto[1] = (unsigned short )0;
                          sqlstm.sqtdso[1] = (unsigned short )0;
                          sqlstm.sqhstv[2] = (         void  *)&codigo_nit;
                          sqlstm.sqhstl[2] = (unsigned int  )8;
                          sqlstm.sqhsts[2] = (         int  )0;
                          sqlstm.sqindv[2] = (         void  *)0;
                          sqlstm.sqinds[2] = (         int  )0;
                          sqlstm.sqharm[2] = (unsigned int  )0;
                          sqlstm.sqadto[2] = (unsigned short )0;
                          sqlstm.sqtdso[2] = (unsigned short )0;
                          sqlstm.sqhstv[3] = (         void  *)&dcto_financ;
                          sqlstm.sqhstl[3] = (unsigned int  )4;
                          sqlstm.sqhsts[3] = (         int  )0;
                          sqlstm.sqindv[3] = (         void  *)0;
                          sqlstm.sqinds[3] = (         int  )0;
                          sqlstm.sqharm[3] = (unsigned int  )0;
                          sqlstm.sqadto[3] = (unsigned short )0;
                          sqlstm.sqtdso[3] = (unsigned short )0;
                          sqlstm.sqhstv[4] = (         void  *)&dcto_cial;
                          sqlstm.sqhstl[4] = (unsigned int  )4;
                          sqlstm.sqhsts[4] = (         int  )0;
                          sqlstm.sqindv[4] = (         void  *)0;
                          sqlstm.sqinds[4] = (         int  )0;
                          sqlstm.sqharm[4] = (unsigned int  )0;
                          sqlstm.sqadto[4] = (unsigned short )0;
                          sqlstm.sqtdso[4] = (unsigned short )0;
                          sqlstm.sqhstv[5] = (         void  *)&lista;
                          sqlstm.sqhstl[5] = (unsigned int  )4;
                          sqlstm.sqhsts[5] = (         int  )0;
                          sqlstm.sqindv[5] = (         void  *)0;
                          sqlstm.sqinds[5] = (         int  )0;
                          sqlstm.sqharm[5] = (unsigned int  )0;
                          sqlstm.sqadto[5] = (unsigned short )0;
                          sqlstm.sqtdso[5] = (unsigned short )0;
                          sqlstm.sqhstv[6] = (         void  *)&contado;
                          sqlstm.sqhstl[6] = (unsigned int  )12;
                          sqlstm.sqhsts[6] = (         int  )0;
                          sqlstm.sqindv[6] = (         void  *)0;
                          sqlstm.sqinds[6] = (         int  )0;
                          sqlstm.sqharm[6] = (unsigned int  )0;
                          sqlstm.sqadto[6] = (unsigned short )0;
                          sqlstm.sqtdso[6] = (unsigned short )0;
                          sqlstm.sqhstv[7] = (         void  *)&codigo;
                          sqlstm.sqhstl[7] = (unsigned int  )42;
                          sqlstm.sqhsts[7] = (         int  )0;
                          sqlstm.sqindv[7] = (         void  *)0;
                          sqlstm.sqinds[7] = (         int  )0;
                          sqlstm.sqharm[7] = (unsigned int  )0;
                          sqlstm.sqadto[7] = (unsigned short )0;
                          sqlstm.sqtdso[7] = (unsigned short )0;
                          sqlstm.sqhstv[8] = (         void  *)&ptaje;
                          sqlstm.sqhstl[8] = (unsigned int  )4;
                          sqlstm.sqhsts[8] = (         int  )0;
                          sqlstm.sqindv[8] = (         void  *)0;
                          sqlstm.sqinds[8] = (         int  )0;
                          sqlstm.sqharm[8] = (unsigned int  )0;
                          sqlstm.sqadto[8] = (unsigned short )0;
                          sqlstm.sqtdso[8] = (unsigned short )0;
                          sqlstm.sqhstv[9] = (         void  *)&valor;
                          sqlstm.sqhstl[9] = (unsigned int  )8;
                          sqlstm.sqhsts[9] = (         int  )0;
                          sqlstm.sqindv[9] = (         void  *)0;
                          sqlstm.sqinds[9] = (         int  )0;
                          sqlstm.sqharm[9] = (unsigned int  )0;
                          sqlstm.sqadto[9] = (unsigned short )0;
                          sqlstm.sqtdso[9] = (unsigned short )0;
                          sqlstm.sqhstv[10] = (         void  *)&fec_dcto_cial;
                          sqlstm.sqhstl[10] = (unsigned int  )22;
                          sqlstm.sqhsts[10] = (         int  )0;
                          sqlstm.sqindv[10] = (         void  *)0;
                          sqlstm.sqinds[10] = (         int  )0;
                          sqlstm.sqharm[10] = (unsigned int  )0;
                          sqlstm.sqadto[10] = (unsigned short )0;
                          sqlstm.sqtdso[10] = (unsigned short )0;
                          sqlstm.sqhstv[11] = (         void  *)&fec_dcto_financ;
                          sqlstm.sqhstl[11] = (unsigned int  )22;
                          sqlstm.sqhsts[11] = (         int  )0;
                          sqlstm.sqindv[11] = (         void  *)0;
                          sqlstm.sqinds[11] = (         int  )0;
                          sqlstm.sqharm[11] = (unsigned int  )0;
                          sqlstm.sqadto[11] = (unsigned short )0;
                          sqlstm.sqtdso[11] = (unsigned short )0;
                          sqlstm.sqhstv[12] = (         void  *)&fecha_ot;
                          sqlstm.sqhstl[12] = (unsigned int  )22;
                          sqlstm.sqhsts[12] = (         int  )0;
                          sqlstm.sqindv[12] = (         void  *)0;
                          sqlstm.sqinds[12] = (         int  )0;
                          sqlstm.sqharm[12] = (unsigned int  )0;
                          sqlstm.sqadto[12] = (unsigned short )0;
                          sqlstm.sqtdso[12] = (unsigned short )0;
                          sqlstm.sqhstv[13] = (         void  *)&marca;
                          sqlstm.sqhstl[13] = (unsigned int  )4;
                          sqlstm.sqhsts[13] = (         int  )0;
                          sqlstm.sqindv[13] = (         void  *)0;
                          sqlstm.sqinds[13] = (         int  )0;
                          sqlstm.sqharm[13] = (unsigned int  )0;
                          sqlstm.sqadto[13] = (unsigned short )0;
                          sqlstm.sqtdso[13] = (unsigned short )0;
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


                      }
                      else {
                           if (!strcmp(orden,"n") && !strcmp(paretto,"s")) {
                               /* EXEC SQL FETCH C1C INTO :codigo_cliente, :nomb_clie, :codigo_nit, :dcto_financ, :dcto_cial, :lista, :contado, :codigo, :ptaje, :valor, :fec_dcto_cial, :fec_dcto_financ, :fecha_ot, :marca; */ 

{
                               struct sqlexd sqlstm;

                               sqlstm.sqlvsn = 10;
                               sqlstm.arrsiz = 14;
                               sqlstm.sqladtp = &sqladt;
                               sqlstm.sqltdsp = &sqltds;
                               sqlstm.iters = (unsigned int  )1;
                               sqlstm.offset = (unsigned int  )417;
                               sqlstm.cud = sqlcud0;
                               sqlstm.sqlest = (unsigned char  *)&sqlca;
                               sqlstm.sqlety = (unsigned short)256;
                               sqlstm.occurs = (unsigned int  )0;
                               sqlstm.sqhstv[0] = (         void  *)&codigo_cliente;
                               sqlstm.sqhstl[0] = (unsigned int  )8;
                               sqlstm.sqhsts[0] = (         int  )0;
                               sqlstm.sqindv[0] = (         void  *)0;
                               sqlstm.sqinds[0] = (         int  )0;
                               sqlstm.sqharm[0] = (unsigned int  )0;
                               sqlstm.sqadto[0] = (unsigned short )0;
                               sqlstm.sqtdso[0] = (unsigned short )0;
                               sqlstm.sqhstv[1] = (         void  *)&nomb_clie;
                               sqlstm.sqhstl[1] = (unsigned int  )47;
                               sqlstm.sqhsts[1] = (         int  )0;
                               sqlstm.sqindv[1] = (         void  *)0;
                               sqlstm.sqinds[1] = (         int  )0;
                               sqlstm.sqharm[1] = (unsigned int  )0;
                               sqlstm.sqadto[1] = (unsigned short )0;
                               sqlstm.sqtdso[1] = (unsigned short )0;
                               sqlstm.sqhstv[2] = (         void  *)&codigo_nit;
                               sqlstm.sqhstl[2] = (unsigned int  )8;
                               sqlstm.sqhsts[2] = (         int  )0;
                               sqlstm.sqindv[2] = (         void  *)0;
                               sqlstm.sqinds[2] = (         int  )0;
                               sqlstm.sqharm[2] = (unsigned int  )0;
                               sqlstm.sqadto[2] = (unsigned short )0;
                               sqlstm.sqtdso[2] = (unsigned short )0;
                               sqlstm.sqhstv[3] = (         void  *)&dcto_financ;
                               sqlstm.sqhstl[3] = (unsigned int  )4;
                               sqlstm.sqhsts[3] = (         int  )0;
                               sqlstm.sqindv[3] = (         void  *)0;
                               sqlstm.sqinds[3] = (         int  )0;
                               sqlstm.sqharm[3] = (unsigned int  )0;
                               sqlstm.sqadto[3] = (unsigned short )0;
                               sqlstm.sqtdso[3] = (unsigned short )0;
                               sqlstm.sqhstv[4] = (         void  *)&dcto_cial;
                               sqlstm.sqhstl[4] = (unsigned int  )4;
                               sqlstm.sqhsts[4] = (         int  )0;
                               sqlstm.sqindv[4] = (         void  *)0;
                               sqlstm.sqinds[4] = (         int  )0;
                               sqlstm.sqharm[4] = (unsigned int  )0;
                               sqlstm.sqadto[4] = (unsigned short )0;
                               sqlstm.sqtdso[4] = (unsigned short )0;
                               sqlstm.sqhstv[5] = (         void  *)&lista;
                               sqlstm.sqhstl[5] = (unsigned int  )4;
                               sqlstm.sqhsts[5] = (         int  )0;
                               sqlstm.sqindv[5] = (         void  *)0;
                               sqlstm.sqinds[5] = (         int  )0;
                               sqlstm.sqharm[5] = (unsigned int  )0;
                               sqlstm.sqadto[5] = (unsigned short )0;
                               sqlstm.sqtdso[5] = (unsigned short )0;
                               sqlstm.sqhstv[6] = (         void  *)&contado;
                               sqlstm.sqhstl[6] = (unsigned int  )12;
                               sqlstm.sqhsts[6] = (         int  )0;
                               sqlstm.sqindv[6] = (         void  *)0;
                               sqlstm.sqinds[6] = (         int  )0;
                               sqlstm.sqharm[6] = (unsigned int  )0;
                               sqlstm.sqadto[6] = (unsigned short )0;
                               sqlstm.sqtdso[6] = (unsigned short )0;
                               sqlstm.sqhstv[7] = (         void  *)&codigo;
                               sqlstm.sqhstl[7] = (unsigned int  )42;
                               sqlstm.sqhsts[7] = (         int  )0;
                               sqlstm.sqindv[7] = (         void  *)0;
                               sqlstm.sqinds[7] = (         int  )0;
                               sqlstm.sqharm[7] = (unsigned int  )0;
                               sqlstm.sqadto[7] = (unsigned short )0;
                               sqlstm.sqtdso[7] = (unsigned short )0;
                               sqlstm.sqhstv[8] = (         void  *)&ptaje;
                               sqlstm.sqhstl[8] = (unsigned int  )4;
                               sqlstm.sqhsts[8] = (         int  )0;
                               sqlstm.sqindv[8] = (         void  *)0;
                               sqlstm.sqinds[8] = (         int  )0;
                               sqlstm.sqharm[8] = (unsigned int  )0;
                               sqlstm.sqadto[8] = (unsigned short )0;
                               sqlstm.sqtdso[8] = (unsigned short )0;
                               sqlstm.sqhstv[9] = (         void  *)&valor;
                               sqlstm.sqhstl[9] = (unsigned int  )8;
                               sqlstm.sqhsts[9] = (         int  )0;
                               sqlstm.sqindv[9] = (         void  *)0;
                               sqlstm.sqinds[9] = (         int  )0;
                               sqlstm.sqharm[9] = (unsigned int  )0;
                               sqlstm.sqadto[9] = (unsigned short )0;
                               sqlstm.sqtdso[9] = (unsigned short )0;
                               sqlstm.sqhstv[10] = (         void  *)&fec_dcto_cial;
                               sqlstm.sqhstl[10] = (unsigned int  )22;
                               sqlstm.sqhsts[10] = (         int  )0;
                               sqlstm.sqindv[10] = (         void  *)0;
                               sqlstm.sqinds[10] = (         int  )0;
                               sqlstm.sqharm[10] = (unsigned int  )0;
                               sqlstm.sqadto[10] = (unsigned short )0;
                               sqlstm.sqtdso[10] = (unsigned short )0;
                               sqlstm.sqhstv[11] = (         void  *)&fec_dcto_financ;
                               sqlstm.sqhstl[11] = (unsigned int  )22;
                               sqlstm.sqhsts[11] = (         int  )0;
                               sqlstm.sqindv[11] = (         void  *)0;
                               sqlstm.sqinds[11] = (         int  )0;
                               sqlstm.sqharm[11] = (unsigned int  )0;
                               sqlstm.sqadto[11] = (unsigned short )0;
                               sqlstm.sqtdso[11] = (unsigned short )0;
                               sqlstm.sqhstv[12] = (         void  *)&fecha_ot;
                               sqlstm.sqhstl[12] = (unsigned int  )22;
                               sqlstm.sqhsts[12] = (         int  )0;
                               sqlstm.sqindv[12] = (         void  *)0;
                               sqlstm.sqinds[12] = (         int  )0;
                               sqlstm.sqharm[12] = (unsigned int  )0;
                               sqlstm.sqadto[12] = (unsigned short )0;
                               sqlstm.sqtdso[12] = (unsigned short )0;
                               sqlstm.sqhstv[13] = (         void  *)&marca;
                               sqlstm.sqhstl[13] = (unsigned int  )4;
                               sqlstm.sqhsts[13] = (         int  )0;
                               sqlstm.sqindv[13] = (         void  *)0;
                               sqlstm.sqinds[13] = (         int  )0;
                               sqlstm.sqharm[13] = (unsigned int  )0;
                               sqlstm.sqadto[13] = (unsigned short )0;
                               sqlstm.sqtdso[13] = (unsigned short )0;
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


                           }
                     }
              }
        }
        staora  = sqlca.sqlcode;
        if (staora ==  1403) break;
        if (staora == -1405) {
            staora  = 0;
            if (!strlen(nomb_ciu.arr)) {
                strcpy (nomb_ciu.arr, "");
                nomb_ciu.len = 0;
            }
        }
        else if (staora)
                 fprintf (stderr, "Error leyendo C1 (%d)\n", staora);

        codigo_cliente.arr  [codigo_cliente.len]  = '\0';
        nomb_clie.arr       [nomb_clie.len]       = '\0';
        ar.arr              [ar.len]              = '\0';
        contado.arr         [contado.len]         = '\0';
        codigo.arr          [codigo.len]          = '\0';
        fec_dcto_cial.arr   [fec_dcto_cial.len]   = '\0';
        fec_dcto_financ.arr [fec_dcto_financ.len] = '\0';
        fecha_ot.arr        [fecha_ot.len]        = '\0';
        marca.arr           [marca.len]           = '\0';

        strcpy(codigo_ciu.arr,codigo_cliente.arr);
        strorg(codigo_ciu.arr,1,2);

        if (con_lin > 62) {
              titulos();
        }
//      if (!strcmp(contado.arr,"CONTADO") || strcmp(codigo.arr,"N") || ptaje > 0 || dcto_financ > 0 || lista > 0) {
            if (!strcmp(codigo.arr,"N"))
                 strcpy(codigo.arr,"");
            sprintf (codigo_nit_c.arr,"%5.0f",codigo_nit);
            codigo_nit_c.len = strlen(codigo_nit_c.arr);

            telefonos();
            sprintf (cadena,"%12.0f",nit);
            if (!strcmp(paretto,"s")) {
/*               printf("pase por paretto"); getchar();*/
               valor_parcial+=valor;
               porcentaje=valor_parcial/valor_total;
               sprintf (cadena,"%9.0f",valor);
               if (con_pag >= con_pagr) 
                  fprintf (fp,"%01.4f %12s %5s %-55s ",porcentaje,fmtnum("zzz,zzz,zzz",cadena,r_t),codigo_cliente.arr,nomb_clie.arr);
            }
            else {
/*               printf("no es con paretto"); getchar();*/
                 if (con_pag >= con_pagr) 
                    fprintf (fp,"%5s %-55s",codigo_cliente.arr,nomb_clie.arr);
            }
            if (!strcmp(repre,"s")) {
                contacto();
                if (strcmp(cadena3,"")) {
                    strorg(cadena3,1,43);
                    if (con_pag >= con_pagr) 
                       fprintf(fp,"%-43s",cadena3);
                }
            }
            if (con_pag >= con_pagr) {
                sprintf (cadena,"%5.2f",dcto_cial);
                fprintf (fp,"%d    %-13s %5s",lista,contado.arr,fmtnum("zzz.zz",cadena,r_t));
                sprintf (cadena,"%5.2f",dcto_financ);
                fprintf (fp," %-7s   %-8s",fmtnum("zzz.zz",cadena,r_t),codigo.arr);
                sprintf (cadena,"%5.2f",ptaje);
                fprintf (fp,"%10s",fmtnum("zzz.zzzz",cadena,r_t));
                fprintf (fp,"%14s %11s %11s %2s\n",fec_dcto_cial.arr,fec_dcto_financ.arr, fecha_ot.arr, marca.arr);
            } 

            con_lin++;
            digito=0;
            ptaje=0;
//      }
 }
 if (!strcmp(paretto,"s")) {
     if (con_pag >= con_pagr) {
        sprintf(cadena,"%8.2f",valor_total);
        fprintf(fp,"\n%44s %15s\n","Total Valor ",fmtnum("$zz,zzz,zzz,zz9.99",cadena,r_t));
     }
 }

// if (con_lin > 36) {
        titulos();
// }
 if (con_pag >= con_pagr) {
    fprintf (fp,"%s%s%s",enfatizado_on,"DEFINICIONES",enfatizado_off);
    fprintf (fp,"\n\n%s%s%s",enfatizado_on,"TABLA DE PRECIOS                              FACTURACIO\b'N",enfatizado_off);
    fprintf (fp,"%s\n%s%62s\n\n","  CRE\b'DITO: Factura con corte quincenal","              LISTA 0      LISTA1","         CONTADO: Factura por Orden de Pedido");
 } 
 /* EXEC SQL DECLARE C5 CURSOR FOR
 SELECT TIPO_TRABAJO, SUM(decode(lista,0,VALOR_UNIDAD,0)) LISTA0,
                 	    SUM(decode(lista,1,VALOR_UNIDAD-VALOR_UNIDAD*VALOR_DESCTO/100,0)) LISTA1
 FROM SERVICIOS_LEN
 WHERE TIPO_SERVICIO = 'TR'  AND
       SUBSTR(TIPO_TRABAJO,1,2) IN ('AR','MR','SA') AND
       LISTA IN (0,1)
 group by TIPO_TRABAJO
 order by TIPO_TRABAJO; */ 


 /* EXEC SQL OPEN C5; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0012;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )488;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 staora  = 0;
 c = 0;

 while (staora == 0) {

        /* EXEC SQL FETCH C5 INTO :tipo_trabajo, :valor_unidad, :valor_unidad2; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 14;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )503;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&tipo_trabajo;
        sqlstm.sqhstl[0] = (unsigned int  )22;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&valor_unidad;
        sqlstm.sqhstl[1] = (unsigned int  )8;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&valor_unidad2;
        sqlstm.sqhstl[2] = (unsigned int  )8;
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


        staora  = sqlca.sqlcode;
        if (staora ==  1403) break;
        if (staora == -1405) {
            staora  = 0;
        }
        else if (staora)
                 fprintf (stderr, "Error leyendo C5 (%d)\n", staora);

        tipo_trabajo.arr  [tipo_trabajo.len] = '\0';
        if (con_pag >= con_pagr) {
            fprintf (fp,"%-10s ",tipo_trabajo.arr);
            sprintf (cadena,"%5.2f",valor_unidad);
            fprintf (fp,"%10s  ",fmtnum("zzz,zzz",cadena,r_t));
            sprintf (cadena,"%5.2f",valor_unidad2);
            if (c == 0 || c == 3 || c == 5 || c == 8) {
                if (c == 0) {
                   fprintf (fp,"%10s %s%s%s%s\n",fmtnum("zzz,zzz",cadena,r_t),enfatizado_on,"            DESCUENTOS",enfatizado_off,"   COMERCIAL : Por evento - en acuerdo    ");
                }
                else {
                      if(c == 3) {
                         fprintf (fp,"%10s %s%-100s%s\n",fmtnum("zzz,zzz",cadena,r_t),enfatizado_on,cadena2,enfatizado_off);
                      }
                      else {
                            if(c == 8) {
                               fprintf (fp,"%10s %s%-100s%s\n",fmtnum("zzz,zzz",cadena,r_t),enfatizado_on,cadena2,enfatizado_off);
                            }
                            else {
                                 fprintf (fp,"%10s %s%-100s%s\n",fmtnum("zzz,zzz",cadena,r_t),enfatizado_on,cadena2,enfatizado_off);
                            }
                      }
                }
            }
            else {
                fprintf (fp,"%10s %-100s\n",fmtnum("zzz,zzz",cadena,r_t),cadena2);
            }
        }
        con_lin++;
        if ( c == 0 ) {                        
           strcpy(cadena2,"                         FINANCIERO: Condicionado a cumplimiento");
           c = 1;
        }
        else {
           if ( c == 1 ) {
              strcpy(cadena2," ");
              c = 2;
           }
           else {
              if ( c == 2 ) {
                 strcpy(cadena2,         "            PROMOCIONES: Promo Martes Labocosta 20% -Martes-                     (* Aplica a todos los clientes)");
                 c = 3;
              }
              else {
                 if ( c == 3 ) {
                    strcpy(cadena2,      "                         Aplican Labocosta Digital Progresivos excepto Liberte\b'");
                    c = 4;
                 }
                 else {
                    if ( c == 4) {
                       strcpy(cadena2,   "                         Promo Labocosta Digital 20% -Martes-Jueves-Sa\b'bado-      (* Aplica a MO064 - MO020 - MO075)");
                       c = 5;
                    }
                    else {
                       if ( c == 5) {
                          strcpy(cadena2,"                         Aplican Labocosta Digital Progresivos excepto Liberte\b'");
                          c = 6;
                       }
                       else {
                          if ( c == 6) {
                             strcpy(cadena2," ");
                             c = 7;
                          }
                          else {
                             if ( c == 7) {
                                strcpy(cadena2,"                         DIGITALES MARCA PROPIA            (20% Dcto incluido en el precio)");
                                c = 8;
                             }
                             else {
                                if ( c == 8) {
                                   strcpy(cadena2,"                         LISTA DE PRECIOS MARCA PROPIA     (No aplica sobre otras promociones vigentes) ");
                                   c = 9;
                                }
                                else {
                                   if ( c == 9) {
                                      strcpy(cadena2,"                                                Descto condicionado 5% o 10%, segu\b'n negociacio\b'n ");
                                      c = 10;
                                   }
                                }
                             }
                          }
                       }
                    }
                 }
              }
           }
        }
 }
 fprintf (fp,"%10s %-100s\n"," ",cadena2);
 strcpy(cadena2,"                                                Descto comercial: No aplica sobre precio MP, pero si se puede aplicar sobre lista general segu\b'n negociacio\b'n.");
 fprintf (fp,"%10s %-100s\n"," ",cadena2);
 strcpy(cadena2,"                                               *El cliente suministra arte alfanume\b'rico para grabado la\b'ser. ");
 fprintf (fp,"%10s %-100s\n"," ",cadena2);
 strcpy(cadena2,"                                                Grabado institucional y Grabado que Identifica disen\b~o. Archivo clientes: Relacio\b'n entre Co\b'digo y Grabado");
 fprintf (fp,"%10s %-100s\n"," ",cadena2);
 con_pag++;
 if (con_pag >= con_pagr) 
    fprintf (fp,"\n\n");

 c = 0;
 
 if (con_pag >= con_pagr) {
    fprintf (fp,"%30s\n",      "                           REF. ");
    fprintf (fp,"%30s%24s\n\n","              LISTA 0      DESC. FECHA","LISTAS DE PRECIO");
 }
 con_lin++;
 strcpy(lprecio[0],"LP0 - LISTA 0 = Normal");    
 strcpy(lprecio[1],"LP1 - LISTA 1 = Dcto 10% x LP0 (Clientes general - O\b'pticas del grupo)");    
 strcpy(lprecio[2],"LP2 - LISTA 2 = Dcto 10% x LP1 (Ej = FOSCAL)");    
 strcpy(lprecio[3],"LP3 - LISTA 3 = Dcto 15% x LP1");    
 strcpy(lprecio[4],"LP4 - LISTA 4 = Dcto 20% x LP1");    
 strcpy(lprecio[5],"LP5 - LISTA 5 = Dcto 10% x LP0 (Exclusivo Grupo OPTICALIA)");    
 strcpy(lprecio[6]," ");    
 strcpy(lprecio[7], "BQ103- O\b'PTICA PANORAMA LTDA (Principal) -  Lista de Precios 1 ( Contado  ) - Factura Cre\b'dito - Dcto Comercial 10%");    
 strcpy(lprecio[8], "BQ332- O\b'PTICA PANORAMA LTDA (Sala Azul) -  Lista de Precios 1 ( Contado  ) - Factura Cre\b'dito - Dcto Comercial 10%");    
 strcpy(lprecio[9], "BQ269- O\b'PTICA PANORAMA LTDA (FOCA)      -  Lista de Precios 1 ( Contado  ) - Factura Cre\b'dito - Dcto Comercial 10%");    
 strcpy(lprecio[10],"BQ370- O\b'PTICA PANORAMA LTDA (FOCA-SUB.) -  Lista de Precios 1 ( Contado* ) - Factura Cre\b'dito - Dcto Comercial 10%");    
 strcpy(lprecio[11],"BQ373- O\b'PTICA PANORAMA LTDA (C.C.VIVA ) -  Lista de Precios 1 ( Contado* ) - Factura Cre\b'dito - Dcto Comercial 10%");    
 strcpy(lprecio[12],"BQ374- O\b'PTICA PANORAMA LTDA (FOCA-SUB2) -  Lista de Precios 1 ( Contado* ) - Factura Cre\b'dito - Dcto Comercial 10%");    
 strcpy(lprecio[13],"* - Se modifican los precios de Monofocal y Bifocal Flat Top 28 CR39 en Terminados y Regular Procesado,");    
 strcpy(lprecio[14],"aplicando una tarifa especial para estas referencias:");    
 strcpy(lprecio[15],"                                             Terminados   Procesados");    
 strcpy(lprecio[16],"                                               $/Unidad     $/Unidad");    
 strcpy(lprecio[17],"*Monofocal           CR39 1.498 ...............  2.700=       9.000=");    
 strcpy(lprecio[18],"*Bifocal Flat Top 28 CR39 1.498 ...............  5.500=       9.000=");    
 strcpy(lprecio[19],"VIGENCIA AGOSTO 22 DE 2017                                          ");    
 strcpy(lprecio[20],"OPTICAS DEL GRUPO");    
 strcpy(lprecio[21],"Servicios: Color-Tratamientos(No incluye AR/PR)-Bisel y Montaje-Ranuracio\b'n-Perforacio\b'n-Bordes pulidos y Disen\b~o especial");    
 strcpy(lprecio[22],"11,11% Desc sobre LP1.");    

 /* EXEC SQL DECLARE C6 CURSOR FOR
	select codigo_articulo, SUM(decode(lista,0,valor_venta,0)) LISTA0,
                      	        SUM(decode(lista,1,valor_venta-valor_venta*10/100,0)) LISTA1,
                                ref_descto, nvl(to_char(fecha,'DD-MON-YYYY'),' ')
	from precios_otr
	where substr(codigo_articulo,1,2) in ('AR','MR','SA') AND
      	      LISTA = 0
	group by codigo_articulo, ref_descto, fecha
	order by codigo_articulo; */ 

	
 /* EXEC SQL OPEN C6; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0013;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )530;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 staora  = 0;

 while (staora == 0) {

        /* EXEC SQL FETCH C6 INTO :codigo_articulo, :valor_venta, :valor_venta2, :ref_descto, :fecha_pre; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 14;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )545;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&codigo_articulo;
        sqlstm.sqhstl[0] = (unsigned int  )22;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&valor_venta;
        sqlstm.sqhstl[1] = (unsigned int  )8;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&valor_venta2;
        sqlstm.sqhstl[2] = (unsigned int  )8;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&ref_descto;
        sqlstm.sqhstl[3] = (unsigned int  )8;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&fecha_pre;
        sqlstm.sqhstl[4] = (unsigned int  )22;
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


        staora  = sqlca.sqlcode;
        if (staora ==  1403) break;
        if (staora == -1405) {
            staora  = 0;
        }
        else if (staora) {
                 fprintf (stderr, "Error leyendo C6 (%d)\n", staora);
                 getchar();
        }
        fecha_pre.arr       [fecha_pre.len] = '\0';

        codigo_articulo.arr  [codigo_articulo.len] = '\0';
        if (con_pag >= con_pagr) {
            fprintf (fp,"%-10s ",codigo_articulo.arr);
            sprintf (cadena,"%5.2f",valor_venta);
            fprintf (fp,"%10s  ",fmtnum("zzz,zzz",cadena,r_t));
            sprintf (cadena,"%3.0f",ref_descto);
            fprintf (fp,"%7s%s %11s   ",fmtnum("zzz",cadena,r_t),"%", fecha_pre.arr);
            fprintf(fp, "%-120s\n",lprecio[c]);
        }
        con_lin++;
        c++;
 }
 for (c=c; c < 23; c++) {
      fprintf(fp, "%46s%-120s\n"," ",lprecio[c]);
 }

 cierre_impresora();

 if (!strcmp(orden,"s")) {
    /* EXEC SQL CLOSE C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 14;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )580;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 }
 else {
    /* EXEC SQL CLOSE C1A; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 14;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )595;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 }
 /* EXEC SQL CLOSE C3; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )610;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 /* EXEC SQL CLOSE C4; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )625;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 /* EXEC SQL CLOSE C5; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )640;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 /* EXEC SQL CLOSE C6; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )655;
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
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )670;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 exit   (0);
}

void telefonos()
{
 strcpy(cadena2,"");
 traidos = 0;
 oraest  = 0;
 /* EXEC SQL OPEN C3; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0009;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )685;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo_nit_c;
 sqlstm.sqhstl[0] = (unsigned int  )8;
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


 while (oraest == 0) {

        /* EXEC SQL FETCH C3 INTO :telefono; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 14;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )704;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&telefono;
        sqlstm.sqhstl[0] = (unsigned int  )8;
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



        oraest  = sqlca.sqlcode;
        if (oraest == 1403 || traidos == 2) break;
        if (oraest != 1403 && oraest != 0)
            fprintf (stderr, "Error leyendo C3 (%d)\n", oraest);

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
 /* EXEC SQL CLOSE C3; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )723;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void contacto()
{
 strcpy(cadena3,"      ");
 traidos = 0;
 oraest  = 0;
 /* EXEC SQL OPEN C4; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0010;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )738;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo_nit_c;
 sqlstm.sqhstl[0] = (unsigned int  )8;
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


 while (oraest == 0) {

        /* EXEC SQL FETCH C4 INTO :nomb_repre, :cargo; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 14;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )757;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&nomb_repre;
        sqlstm.sqhstl[0] = (unsigned int  )33;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&cargo;
        sqlstm.sqhstl[1] = (unsigned int  )23;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
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
        if (oraest == 1403 || traidos == 2) break;
        if (oraest != 1403 && oraest != 0)
            fprintf (stderr, "Error leyendo C4 (%d)\n", oraest);

        nomb_repre.arr  [nomb_repre.len] = '\0';
        cargo.arr       [cargo.len] = '\0';
        traidos++;
        if (traidos == 1) {
            strcat  (cadena3,nomb_repre.arr);
//            strcat  (cadena3,", ");
//            strcat  (cadena3,cargo.arr);
        }
        else {
/*
             if (strcmp(nomb_repre.arr,"")) {
                 strcat(cadena3," - ");
                 strcat(cadena3,nomb_repre.arr);
                 strcat(cadena3,", ");
                 strcat(cadena3,cargo.arr);
             }
*/
        }
 }
 /* EXEC SQL CLOSE C4; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )780;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 char fecha[100];
 con_pag++;

 if (con_pag >= con_pagr) { 
    fprintf (fp,"%s",salte_pagina);
    strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
    fprintf(fp,"%s%s%s%s%s\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
    sprintf (cadena,"%12.0f",nit);
    fmtnum("zzz,zzz,zzz,zzz",cadena,r_t);
    fprintf (fp,"%s%s%25s %18s",condensado_on,ancho_on,"NIT :",r_t);
    if (digito > 0) {
        sprintf (cadena,"%d",digito);
        fmtnum("z",cadena,r_t);
        fprintf (fp,"-%s",r_t);
    }
    else if (digito == 0)
             fprintf (fp,"-%s","0");
    fprintf(fp,"%s%s",ancho_off,diezcpi);
/* fprintf (fp,"%s%s%s%s\n\n",diezcpi,ancho_on,"LABORATORIO OFTALMICO DE LA COSTA S.A.S.",ancho_off);*/
    fecha_system(fecha);
    fprintf (fp,"\n%20s%35s%20s%d\n",fecha," LISTADO DE CLIENTES PREMIUN","Pagina # ",con_pag);
    fprintf (fp,"%20s%35s\n"," "," 3.5% RETE.FTE. APLICADO");

    strful(cadena,(int)(90-strlen(fechas))/2,' ');
    fprintf(fp,"%s%s\n\n",cadena,fechas);
    fprintf (fp,"%s\n",nombre_ciu.arr);
    fprintf (fp,"%s%s%s",condensado_on,"Vigencia: A partir de Ago. 01-2017\n",condensado_off);

    if (!strcmp(repre,"s")) {
         if (!strcmp(paretto,"s")) {
            fprintf (fp,"%s%s %12s %s %-50s %-29s %-39s %-20s %-23s %-12s\n",      condensado_on,"      ","VALOR  ","      ","      ","             ","--ACUERDO COMERCIAL-    -DESCUENTOS-","---PREFERENCIAS---","FECHA ACTUALIZACION", "MARCA PR/"); 
            fprintf (fp,"%s%s %12s %s %-50s %-29s %-39s %-20s %-23s %-12s %2s\n\n",condensado_on,"     %","PARETTO","CODIGO","NOMBRE","REPRESENTANTE","L.PRECIO FACTURACION    COM.    FIN.","AR       SERVICIOS","COMERCIAL FINANCIERA","OPTICALIA","MP");
        }
        else {
            fprintf (fp,"%s%s %-49s %-29s %-39s %-20s %-23s %-12s\n",      condensado_on,"      ","      ","             ","--ACUERDO COMERCIAL-    -DESCUENTOS-","---PREFERENCIAS---","FECHA ACTUALIZACION", "MARCA PR/");
            fprintf (fp,"%s%s %-49s %-29s %-39s %-20s %-23s %-12s %2s\n\n",condensado_on,"CODIGO","NOMBRE","REPRESENTANTE","L.PRECIO FACTURACION    COM.    FIN.","AR       SERVICIOS","COMERCIAL FINANCIERA","OPTICALIA","MP");
        }
    }
    else {
        if (!strcmp(paretto,"s")) {
            fprintf (fp,"%s%s %12s %s %-50s %-39s %-20s %-23s %-12s\n",      condensado_on,"      ","VALOR  ","      ","      ","--ACUERDO COMERCIAL-    -DESCUENTOS-","---PREFERENCIAS---","FECHA ACTUALIZACION", "MARCA PR/");
            fprintf (fp,"%s%s %12s %s %-50s %-39s %-20s %-23s %-12s %2s\n\n",condensado_on,"     %","PARETTO","CODIGO","NOMBRE","L.PRECIO FACTURACION    COM.    FIN.","AR       SERVICIOS","COMERCIAL FINANCIERA","OPTICALIA","MP");
        }
        else {
            fprintf (fp,"%s%s %-49s %-39s %-20s %-23s %-12s\n",      condensado_on,"      ","      ","--ACUERDO COMERCIAL-    -DESCUENTOS-","---PREFERENCIAS---","FECHA ACTUALIZACION", "MARCA PR/");
            fprintf (fp,"%s%s %-49s %-39s %-20s %-23s %-12s %2s\n\n",condensado_on,"CODIGO","NOMBRE","L.PRECIO FACTURACION    COM.    FIN.","AR       SERVICIOS","COMERCIAL FINANCIERA","OPTICALIA","MP");
        }
    }
 }
 con_lin=12;
}
