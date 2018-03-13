
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
    ".\\FLISTPAR.pc"
};


static unsigned long sqlctx = 526779;


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
            void  *sqhstv[5];
   unsigned int   sqhstl[5];
            int   sqhsts[5];
            void  *sqindv[5];
            int   sqinds[5];
   unsigned int   sqharm[5];
   unsigned int   *sqharc[5];
   unsigned short  sqadto[5];
   unsigned short  sqtdso[5];
} sqlstm = {10,5};

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

 static const char *sq0002 = 
"select codigo_cliente ,valor  from paretto where valor>0 order by valor desc\
             ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,120,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,3,21,0,2,151,0,0,0,0,0,1,0,
51,0,0,4,519,0,3,156,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
86,0,0,5,54,0,4,179,0,0,1,0,0,1,0,2,4,0,0,
105,0,0,2,89,0,9,188,0,0,0,0,0,1,0,
120,0,0,2,0,0,13,193,0,0,2,0,0,1,0,2,9,0,0,2,4,0,0,
143,0,0,6,111,0,4,208,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
166,0,0,2,0,0,15,233,0,0,0,0,0,1,0,
181,0,0,7,0,0,30,235,0,0,0,0,0,1,0,
};


/*****************************************************************
* FLISTPAR.C  Version 1.0 - Rev 1.2 - Mar. 11/98.
*
* flistpar.pc Programa de facturacion para listar EL PARETTO.
*
* Uso : flistpar fecha_ini fecha_fin constante device copias userid/password
*
* Martin A. Toloza L. Creado Marzo 11-1998.
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
void fecha_oracle3();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Facturas (C1) */
/* VARCHAR fecha_ini     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_ini;

/* VARCHAR fecha_fin     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_fin;


/* VARCHAR codigoi       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigoi;

/* VARCHAR codigof       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigof;

                                 /* Nits (C2) */
/* VARCHAR nomb_clie     [55]; */ 
struct { unsigned short len; unsigned char arr[55]; } nomb_clie;

/* VARCHAR wcod          [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } wcod;

                                 /* Paretto (C3) */
/* VARCHAR codigo_cliente[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_cliente;

double  valor;
                                 /* Paretto (C4) */
double  valor_total;
/* VARCHAR librob     [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } librob;


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
char *fmtnum(), r_t[100];
int     con_pag;                                   /* Contador de Paginas */
int     con_lin=66;                                /* Contador de Lineas  */
int     staora = 0;
int     oraest = 0;
char    copias[3];
int     cantidad;
char    fechas[90];
char    fecha [70];
char    cadena [200];
char    cadena2[100];
char    wciu[6];
double  porcentaje;
double  valor_parcial;
double  constante;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

if (argc < 10)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : flistpar fecha_ini fecha_fin codigoi codigof constante device copias libro(0=COLGAAP, 1=IFRS) userid/password\n");
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
strcpy (codigoi.arr, argv[3]);
codigoi.len   =      strlen(codigoi.arr);
strcpy (codigof.arr, argv[4]);
codigof.len   =      strlen(codigof.arr);

constante       =      atof(argv[5]);
strcpy (device,        argv[6]);
strlow (device);
strcpy (copias,        argv[7]);
strcpy (librob.arr,    argv[8]);
librob.len      =      strlen(librob.arr);

strcpy(fecha,fecha_ini.arr);
fecha_oracle3(fecha);
strcpy(cadena,fecha);
strcpy(fecha,fecha_fin.arr);
strcat(cadena," hasta ");
fecha_oracle3(fecha);
strcat(cadena,fecha);
strcpy(fechas,cadena);

if (!strpos ("/", argv[9]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,   argv[9]);
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

   /* EXEC SQL DECLARE C3 CURSOR FOR
            select codigo_cliente, valor
            from   paretto
            where  valor > 0
            order  by valor desc; */ 


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

   /* EXEC SQL insert into paretto
            select codigo_cliente,
                   sum(nvl(valor_oftalmica,0)+nvl(valor_contacto,0))
            from  facturas f
            where tipo_documento  in ('F','C')                       and
                  fecha_documento >= to_date(:fecha_ini,'yyyymmdd')  and
                  fecha_documento <= to_date(:fecha_fin,'yyyymmdd')  and
                  codigo_cliente  >= :codigoi                        and
                  codigo_cliente  <= :codigof                        and
                  estado_factura   = 0                               and
                  libro            = to_number(:librob)              and
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
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into paretto select codigo_cliente ,sum((nvl(valor_\
oftalmica,0)+nvl(valor_contacto,0)))  from facturas f where (((((((tipo_docume\
nto in ('F','C') and fecha_documento>=to_date(:b0,'yyyymmdd')) and fecha_docum\
ento<=to_date(:b1,'yyyymmdd')) and codigo_cliente>=:b2) and codigo_cliente<=:b\
3) and estado_factura=0) and libro=to_number(:b4)) and  not exists (select 'x'\
  from basura where ((f.tipo_factura=tipo_factura and f.tipo_documento=tipo_do\
cumento) and f.numero_factura=numero_factura))) group by codigo_cliente";
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
   sqlstm.sqhstv[2] = (         void  *)&codigoi;
   sqlstm.sqhstl[2] = (unsigned int  )22;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&codigof;
   sqlstm.sqhstl[3] = (unsigned int  )22;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)&librob;
   sqlstm.sqhstl[4] = (unsigned int  )4;
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




   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
       fprintf (stderr, "Error Insertando Paretto C1(%d)\n", sqlca.sqlcode);

   /* EXEC SQL select sum(valor)
            into  :valor_total
            from   paretto
            where  valor > 0; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 10;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select sum(valor) into :b0  from paretto where valor>0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )86;
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



   oraest  = sqlca.sqlcode;
   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
       fprintf (stderr, "Error Leyendo Paretto C4(%d)\n", sqlca.sqlcode);

   /* EXEC SQL OPEN C3; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 10;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = sq0002;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )105;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   staora  = 0;
   titulos();
   while (staora == 0) {

          /* EXEC SQL FETCH C3 INTO :codigo_cliente, :valor; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 5;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )120;
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
          sqlstm.sqhstv[1] = (         void  *)&valor;
          sqlstm.sqhstl[1] = (unsigned int  )8;
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



          staora  = sqlca.sqlcode;
          if (staora ==  1403) break;
          if (staora == -1405)
              staora  = 0;
          else if (staora)
                   fprintf (stderr, "Error Leyendo C3 (%d)\n", staora);

          codigo_cliente.arr  [codigo_cliente.len] = '\0';

          valor_parcial+=valor;
          strcpy (wcod.arr,codigo_cliente.arr);
          wcod.len   =        strlen(wcod.arr);

          /* EXEC SQL select n.nombre  into :nomb_clie
	           from  nits n, clientes cl
                   where n.codigo_nit      = cl.codigo_nit       and
                         cl.codigo_cliente =   :wcod; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 5;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "select n.nombre into :b0  from nits n ,clientes cl \
where (n.codigo_nit=cl.codigo_nit and cl.codigo_cliente=:b1)";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )143;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (         void  *)&nomb_clie;
          sqlstm.sqhstl[0] = (unsigned int  )57;
          sqlstm.sqhsts[0] = (         int  )0;
          sqlstm.sqindv[0] = (         void  *)0;
          sqlstm.sqinds[0] = (         int  )0;
          sqlstm.sqharm[0] = (unsigned int  )0;
          sqlstm.sqadto[0] = (unsigned short )0;
          sqlstm.sqtdso[0] = (unsigned short )0;
          sqlstm.sqhstv[1] = (         void  *)&wcod;
          sqlstm.sqhstl[1] = (unsigned int  )8;
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
          if (oraest != 1403 && oraest != 0)
              fprintf (stderr, "Error Leyendo C2 (%d)\n", oraest);
          nomb_clie.arr       [nomb_clie.len]      = '\0';

          porcentaje=valor_parcial/valor_total;
          strcpy (wciu,codigo_cliente.arr);
 /*         strorg (wciu,1,2);*/
          sprintf(cadena,"%8.2f",valor);
          strorg(nomb_clie.arr,1,35);
          fprintf(fp,"%01.4f %s %-42s %14s ",porcentaje,wciu,nomb_clie.arr,fmtnum("zz,zzz,zzz,zz9",cadena,r_t));
          cantidad=(long int)valor/(long int)constante;
          if (cantidad > 70)
              cantidad = 70;
          strful(cadena,cantidad,'*');
          fprintf(fp,"I%s\n",cadena);
   }
   sprintf(cadena,"%8.2f",valor_total);
   fprintf(fp,"\n%44s %15s\n","Total Valor ",fmtnum("$zzzz,zzz,zzz,zz9",cadena,r_t));
   cierre_impresora();

   /* EXEC SQL CLOSE C3; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 10;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )166;
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
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )181;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   exit   (0);
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 con_pag++;
 strful(cadena,37,'*');
 fprintf(fp,"%s%s%s%s\n\n",diezcpi,ancho_on,cadena,ancho_off);
 strful(cadena,(int)(45-strlen("CURVA DE PARETTO"))/2,' ');
 fprintf(fp,"%s%s%s\n\n",condensado_on,cadena,"CURVA DE PARETTO");
 strful(cadena,(int)(90-strlen(fechas))/2,' ');
 fprintf(fp,"%s%s\n\n",cadena,fechas);
 strful(cadena2,(int)(45-strlen("CONSTANTE $         "))/2,' ');
 sprintf(cadena,"%8.2f",constante);
 fprintf(fp,"%s%s%s\n\n",cadena2,"CONSTANTE $ ",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 fprintf(fp,"%81s%s\n"," ","1         2         3         4         5         6         7");
 fprintf(fp,"%s\n","   %   CODIGO NOMBRE   DEL   CLIENTE                         VALOR      1234567890123456789012345678901234567890123456789012345678901234567890");
 strful(cadena,70,'-');
 fprintf(fp,"%72s%s\n"," ",cadena);
 con_lin = 10;
}
