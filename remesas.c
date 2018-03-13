
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
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    ".\\remesas.pc"
};


static unsigned long sqlctx = 267107;


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
            void  *sqhstv[10];
   unsigned int   sqhstl[10];
            int   sqhsts[10];
            void  *sqindv[10];
            int   sqinds[10];
   unsigned int   sqharm[10];
   unsigned int   *sqharc[10];
   unsigned short  sqadto[10];
   unsigned short  sqtdso[10];
} sqlstm = {10,10};

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

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,123,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,91,0,4,163,0,0,3,1,0,1,0,2,9,0,0,2,4,0,0,1,9,0,0,
63,0,0,3,71,0,4,172,0,0,2,1,0,1,0,2,4,0,0,1,9,0,0,
86,0,0,4,595,0,4,182,0,0,10,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,
9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,1,9,0,0,
141,0,0,5,311,0,4,204,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,
9,0,0,
180,0,0,6,72,0,5,236,0,0,1,1,0,1,0,1,9,0,0,
199,0,0,7,72,0,5,242,0,0,1,1,0,1,0,1,9,0,0,
218,0,0,8,163,0,3,251,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
249,0,0,9,411,0,3,262,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
280,0,0,10,0,0,30,284,0,0,0,0,0,1,0,
};


/*****************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* ordenes.c. Listado de Los Rotulos de despacho.
*
* Uso : remesa codigo_trp numero_despacho codigo_cliente sobre device userid/password\n");
*
* Mario E. Santiago I. Creado Junio 9-1990.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void main(int argc, char *argv[]);
void titulos();
void servientrega();
void servientregasb();
void servicomerciales();
void aeromensajeria();
void chevalier();
void avianca();
				     /* Parametros de comunicacion con ORACLE */
                                            /* Variables globales del usuario */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Clientes (C1) */
/* VARCHAR nomb_clie[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nomb_clie;

/* VARCHAR nomb_ciu [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciu;

/* VARCHAR direccion[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } direccion;

double  telefono;
double  valor_flete;
/* VARCHAR codigo_ciu_trp[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_ciu_trp;

/* VARCHAR cliente   [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cliente;

/* VARCHAR codigo_trp[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_trp;

                                 /* Despachoc (C2) */
/* VARCHAR codigo_cliente[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_cliente;

/* VARCHAR despacho[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } despacho;

/* VARCHAR nomb_emp[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nomb_emp;

/* VARCHAR nomb_ciu_emp[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciu_emp;

/* VARCHAR direccion_emp[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } direccion_emp;

/* VARCHAR fecha[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha;

/* VARCHAR hora[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } hora;

double  telefono_emp;
double  nit;
int     digito;
double  valor_ordenes;

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


int     con_pag;                                   /* Contador de Paginas */
int     con_lin;                                   /* Contador de Lineas  */
char    nro_despacho[20];
char    grupo[5];
char    sobre[5];
char    wcadena[40];
char    cadena [40];
char    cadena2[40];
char    r_t[100];
int     ct;
char    direcc[50];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int     i;
int	status = 0;

  if (argc < 8)
       {
	      printf ("Incorrecta invocacion:\n");
	      printf ("Uso : remesa codigo_trp numero_despacho codigo_cliente sobre grupo device userid/password\n");
	      printf ("      device : t salida por terminal\n");
	      printf ("      device : s salida standar     \n");
	      printf ("               Px salida por impresora (x nro printer)\n");
	      printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (codigo_trp.arr,argv[1]);
       codigo_trp.len = strlen(codigo_trp.arr);

       strcpy (despacho.arr,argv[2]);
       despacho.len = strlen(despacho.arr);

       strcpy (cliente.arr, argv[3]);
       cliente.len = strlen(cliente.arr);

//printf("1) codigo_trp<%s>, cliente<%s> ",codigo_trp.arr,cliente.arr); getchar();


       strcpy (sobre,   argv[4]);
       strlow (sobre);
       
       strcpy(grupo, argv[5]);
       strlow (grupo);

       strcpy (device,  argv[6]);
       strlow (device);

    if (!strpos ("/", argv[7]))
       {
        printf ("user id/password incorrecto.\n");
	      exit (1);
       }

    strcpy (uid.arr,    argv[7]);
    uid.len   =  strlen(uid.arr);

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
    abre_impresora("1");

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/

    strcpy(nro_despacho,despacho.arr);
    ct=1;
    if (strpos ("-", despacho.arr)){
       ct=2;
       strcpy(despacho.arr," ");
       for (i=0;nro_despacho[i]!='-';i++) {
            despacho.arr[i]=nro_despacho[i];
       }
       despacho.arr[i]='\0';
    }
//printf("2) codigo_trp<%s>, cliente<%s> ",codigo_trp.arr,cliente.arr); getchar();
// strcmp(grupo,"s") || 
    if (strcmp(despacho.arr,"0")) {
/* C2 */
       if (strcmp(grupo,"s")) {
          /* EXEC SQL select codigo_cliente, valor_ordenes
                into  :codigo_cliente, :valor_ordenes
                from   despachoc
                where  numero_despacho = :despacho; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "select codigo_cliente ,valor_ordenes into :b0,:b1  \
from despachoc where numero_despacho=:b2";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )36;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (         void  *)&codigo_cliente;
          sqlstm.sqhstl[0] = (unsigned int  )12;
          sqlstm.sqhsts[0] = (         int  )0;
          sqlstm.sqindv[0] = (         void  *)0;
          sqlstm.sqinds[0] = (         int  )0;
          sqlstm.sqharm[0] = (unsigned int  )0;
          sqlstm.sqadto[0] = (unsigned short )0;
          sqlstm.sqtdso[0] = (unsigned short )0;
          sqlstm.sqhstv[1] = (         void  *)&valor_ordenes;
          sqlstm.sqhstl[1] = (unsigned int  )8;
          sqlstm.sqhsts[1] = (         int  )0;
          sqlstm.sqindv[1] = (         void  *)0;
          sqlstm.sqinds[1] = (         int  )0;
          sqlstm.sqharm[1] = (unsigned int  )0;
          sqlstm.sqadto[1] = (unsigned short )0;
          sqlstm.sqtdso[1] = (unsigned short )0;
          sqlstm.sqhstv[2] = (         void  *)&despacho;
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



       codigo_cliente.arr      [codigo_cliente.len]     = '\0';
       strcpy(cliente.arr,codigo_cliente.arr);
       cliente.len = strlen(cliente.arr);
       } else {
          /* EXEC SQL select valor_ordenes
                into   :valor_ordenes
                from   despachoc
                where  numero_despacho = :despacho; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 10;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "select valor_ordenes into :b0  from despachoc where\
 numero_despacho=:b1";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )63;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)256;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (         void  *)&valor_ordenes;
          sqlstm.sqhstl[0] = (unsigned int  )8;
          sqlstm.sqhsts[0] = (         int  )0;
          sqlstm.sqindv[0] = (         void  *)0;
          sqlstm.sqinds[0] = (         int  )0;
          sqlstm.sqharm[0] = (unsigned int  )0;
          sqlstm.sqadto[0] = (unsigned short )0;
          sqlstm.sqtdso[0] = (unsigned short )0;
          sqlstm.sqhstv[1] = (         void  *)&despacho;
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

/* C1 */
//printf("3)codigo_trp<%s>, cliente<%s> ",codigo_trp.arr,cliente.arr); getchar();

    /* EXEC SQL
        select n.nombre,
               nvl(n.ciudad_env,nvl(n.nombre_muni,c.nombre)),
               rtrim(nvl(n.direccion2,n.direccion),' '),
               max(nvl(t.numero,0)), valor_flete, codigo_ciu_trp, n.nit, n.digito
        into  :nomb_clie, :nomb_ciu, :direccion, :telefono, :valor_flete,
              :codigo_ciu_trp, :nit, :digito
      	from  clientes cl, nits n, telefonos t, ciudades c, transportes tr
        where n.codigo_nit  = cl.codigo_nit                                 and
              cl.codigo_cliente =  :cliente                                 and
              n.codigo_nit  = t.codigo_nit(+)                               and
              n.codigo_ciu  = c.codigo                                      and
              tr.codigo_trp =  :codigo_trp                                  and
              tr.codigo_ciu = substr(cl.codigo_cliente,1,2)
        group by n.nombre, n.nombre_muni, c.nombre, n.direccion,
                 valor_flete, codigo_ciu_trp, n.ciudad_env, n.direccion2, n.nit, n.digito; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 10;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select n.nombre ,nvl(n.ciudad_env,nvl(n.nombre_muni,c.nom\
bre)) ,rtrim(nvl(n.direccion2,n.direccion),' ') ,max(nvl(t.numero,0)) ,valor_f\
lete ,codigo_ciu_trp ,n.nit ,n.digito into :b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7  fr\
om clientes cl ,nits n ,telefonos t ,ciudades c ,transportes tr where (((((n.c\
odigo_nit=cl.codigo_nit and cl.codigo_cliente=:b8) and n.codigo_nit=t.codigo_n\
it(+)) and n.codigo_ciu=c.codigo) and tr.codigo_trp=:b9) and tr.codigo_ciu=sub\
str(cl.codigo_cliente,1,2)) group by n.nombre,n.nombre_muni,c.nombre,n.direcci\
on,valor_flete,codigo_ciu_trp,n.ciudad_env,n.direccion2,n.nit,n.digito";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )86;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_clie;
    sqlstm.sqhstl[0] = (unsigned int  )52;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&nomb_ciu;
    sqlstm.sqhstl[1] = (unsigned int  )32;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&direccion;
    sqlstm.sqhstl[2] = (unsigned int  )52;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&telefono;
    sqlstm.sqhstl[3] = (unsigned int  )8;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&valor_flete;
    sqlstm.sqhstl[4] = (unsigned int  )8;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&codigo_ciu_trp;
    sqlstm.sqhstl[5] = (unsigned int  )12;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&nit;
    sqlstm.sqhstl[6] = (unsigned int  )8;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (         void  *)&digito;
    sqlstm.sqhstl[7] = (unsigned int  )4;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         void  *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned int  )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (         void  *)&cliente;
    sqlstm.sqhstl[8] = (unsigned int  )12;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         void  *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned int  )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (         void  *)&codigo_trp;
    sqlstm.sqhstl[9] = (unsigned int  )8;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         void  *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned int  )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
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



       nomb_clie.arr           [nomb_clie.len]          = '\0';
       nomb_ciu.arr            [nomb_ciu.len]           = '\0';
       direccion.arr           [direccion.len]          = '\0';
       codigo_ciu_trp.arr      [codigo_ciu_trp.len]     = '\0';
/* C3 */
    /* EXEC SQL
        select n.nombre, c.nombre, n.direccion,
               nvl(t.numero,0), to_char(sysdate,'DD-MON-YYYY'), to_char(sysdate,'hh:mi:ss am')
        into  :nomb_emp, :nomb_ciu_emp, :direccion_emp, :telefono_emp,
              :fecha, :hora
        from nits n, ciudades c, telefonos t, empresas e
        where n.codigo_ciu = c.codigo                                      and
              n.codigo_nit = t.codigo_nit                                  and
              n.codigo_nit = e.codigo_nit                                  and
              e.codigo_emp = 1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 10;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select n.nombre ,c.nombre ,n.direccion ,nvl(t.numero,0) ,\
to_char(sysdate,'DD-MON-YYYY') ,to_char(sysdate,'hh:mi:ss am') into :b0,:b1,:b\
2,:b3,:b4,:b5  from nits n ,ciudades c ,telefonos t ,empresas e where (((n.cod\
igo_ciu=c.codigo and n.codigo_nit=t.codigo_nit) and n.codigo_nit=e.codigo_nit)\
 and e.codigo_emp=1)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )141;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_emp;
    sqlstm.sqhstl[0] = (unsigned int  )52;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&nomb_ciu_emp;
    sqlstm.sqhstl[1] = (unsigned int  )32;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&direccion_emp;
    sqlstm.sqhstl[2] = (unsigned int  )52;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&telefono_emp;
    sqlstm.sqhstl[3] = (unsigned int  )8;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&fecha;
    sqlstm.sqhstl[4] = (unsigned int  )22;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&hora;
    sqlstm.sqhstl[5] = (unsigned int  )17;
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



       nomb_emp.arr          [nomb_emp.len]         = '\0';
       nomb_ciu_emp.arr      [nomb_ciu_emp.len]     = '\0';
       direccion_emp.arr     [direccion_emp.len]    = '\0';
       fecha.arr             [fecha.len]            = '\0';
       hora.arr              [hora.len]             = '\0';

/************************************************
 * Recuperar datos en el area de datos definida *
 * una fila al tiempo. (ofetch).                *
 * Aqui se hace la primera lectura del cursor 0.*
 ************************************************/

if (!strcmp(sobre,"r")) {

/* C4 */

     strcat(codigo_trp.arr,sobre);
     codigo_trp.len = strlen(codigo_trp.arr);
 
/* C4S*/

    /* EXEC SQL
         update control_trp
         set consecutivo     = consecutivo + 1
         where codigo_trp    = :codigo_trp; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 10;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update control_trp  set consecutivo=(consecutivo+1) where\
 codigo_trp=:b0";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )180;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&codigo_trp;
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


}
else {
    /* EXEC SQL
         update control_trp
         set consecutivo     = consecutivo + 1
         where codigo_trp    = :codigo_trp; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 10;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update control_trp  set consecutivo=(consecutivo+1) where\
 codigo_trp=:b0";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )199;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&codigo_trp;
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


}
if (strcmp(grupo,"s")) {

/* C5 */

    /* EXEC SQL
         insert into remesas
         (CODIGO_TRP, NUMERO_DESPACHO, NUMERO_REMESA, FECHA, CODIGO_CLIENTE)
         select :codigo_trp, :despacho, consecutivo, sysdate, :cliente
         from   control_trp
         where  codigo_trp   = :codigo_trp; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 10;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into remesas(CODIGO_TRP,NUMERO_DESPACHO,NUMERO_REM\
ESA,FECHA,CODIGO_CLIENTE)select :b0 ,:b1 ,consecutivo ,sysdate ,:b2  from cont\
rol_trp where codigo_trp=:b0";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )218;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&codigo_trp;
    sqlstm.sqhstl[0] = (unsigned int  )8;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&despacho;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&cliente;
    sqlstm.sqhstl[2] = (unsigned int  )12;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&codigo_trp;
    sqlstm.sqhstl[3] = (unsigned int  )8;
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


}         
else {

/* C6 */

    /* EXEC SQL
         insert into remesas
         (CODIGO_TRP, NUMERO_DESPACHO, NUMERO_REMESA, FECHA, CODIGO_CLIENTE)
         select :codigo_trp, c.numero_despacho, consecutivo, sysdate, c.codigo_cliente
         from   control_trp t, despachoc c
         where  codigo_trp          = :codigo_trp and
                c.codigo_cliente_e  = :cliente    and
                c.fecha             = to_date(to_char(sysdate,'yyyymmdd'),'yyyymmdd') and
                c.numero_despacho_e = :despacho   and
                not exists (select 'x'
                            from remesas
                            where numero_despacho = c.numero_despacho); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 10;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into remesas(CODIGO_TRP,NUMERO_DESPACHO,NUMERO_REM\
ESA,FECHA,CODIGO_CLIENTE)select :b0 ,c.numero_despacho ,consecutivo ,sysdate ,\
c.codigo_cliente  from control_trp t ,despachoc c where ((((codigo_trp=:b0 and\
 c.codigo_cliente_e=:b2) and c.fecha=to_date(to_char(sysdate,'yyyymmdd'),'yyyy\
mmdd')) and c.numero_despacho_e=:b3) and  not exists (select 'x'  from remesas\
 where numero_despacho=c.numero_despacho))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )249;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&codigo_trp;
    sqlstm.sqhstl[0] = (unsigned int  )8;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&codigo_trp;
    sqlstm.sqhstl[1] = (unsigned int  )8;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&cliente;
    sqlstm.sqhstl[2] = (unsigned int  )12;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&despacho;
    sqlstm.sqhstl[3] = (unsigned int  )22;
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


}
                        
    titulos();

/*****************************************
** COMMIT LOS CAMBIOS A LA BASE DE DATOS *
******************************************/

    cierre_impresora();

    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 10;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )280;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 
//    EXEC SQL ROLLBACK WORK RELEASE;

    exit   (0);
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
  if (!strcmp(codigo_trp.arr,"1"))
      servicomerciales();
  else if (!strcmp(codigo_trp.arr,"2r"))
            servientregasb();
       else if (!strcmp(codigo_trp.arr,"2"))
                 servientrega();
            else if (!strcmp(codigo_trp.arr,"3"))
                      aeromensajeria();
                 else if (!strcmp(codigo_trp.arr,"4"))
                           chevalier();
                      else if (!strcmp(codigo_trp.arr,"5"))
                                avianca();
}
void servicomerciales()
{
    int i;
    strorg(nomb_clie.arr,1,40);
    nomb_clie.len = strlen(nomb_clie.arr);
    strcpy(cadena,fecha.arr);
    strcpy(wcadena,cadena);
    fecha_oracle(wcadena);
    strcpy(cadena,wcadena);
    fprintf (fp,"%s%s%56s%-7s%s\n\n\n\n",line_feed6,diezcpi," ","BAQ",codigo_ciu_trp.arr);
    fprintf (fp,"%-18s%-21s%-13s\n\n",nomb_ciu_emp.arr,cadena,hora.arr);
    fprintf (fp,"%-30s %s\n",nomb_emp.arr,nomb_clie.arr);
    strcpy(direcc,direccion.arr);
    strorg(direcc,1,30);
    if (strlen(direccion.arr) > 30) {
        fprintf (fp,"%31s%s\n"," ",direcc);
        strcpy(direcc,direccion.arr);
        strorg(direcc,31,15);
        fprintf (fp,"%-30s",direccion_emp.arr);
        fprintf (fp,"%s\n",direcc);
    }
    else {
          fprintf (fp,"%-30s",direccion_emp.arr);
          fprintf (fp," %s\n\n",direccion.arr);
         }
    sprintf (cadena,"%8.0f",telefono_emp);
    fmtnum("zzzzzzzz",cadena,r_t);
    strorg(nomb_ciu.arr,1,19);
    nomb_ciu.len = strlen(nomb_ciu.arr);
    fprintf (fp,"                               %-26s\n       %-25s",nomb_ciu.arr,r_t);
    sprintf (cadena,"%8.0f",telefono);
    fmtnum("zzzzzzzz",cadena,r_t);
    fprintf (fp,"      %s\n\n",r_t);

    if (strcmp(despacho.arr,"0")) {
       fprintf (fp,"%12s%3d %14s%s%s"," ",ct," ","MATERIAL OPTICO ",nro_despacho);
       if (!strcmp(sobre,"s")) {
           fprintf (fp,"\r%s%47s%s"," 2    1",",","DOCUMENTO");
       }
       else {
             fprintf (fp,"\r%s"," 1     ");
       }
    }
    else {
         if (!strcmp(sobre,"s")) {
             fprintf (fp,"\r%s%23s%s"," 1    1"," ","DOCUMENTO");
         }
         else {       
              fprintf (fp,"%12s%3d %14s%s"," ",ct," ","MATERIAL OPTICO ");
         }
    }
    fprintf (fp,"%s\n","");
    con_lin=13;
    for (i=1;i<=22-con_lin;i++) {
        fprintf(fp,"\n");
    }
}

void  servientrega()
  {
    int i;
    strorg(nomb_clie.arr,1,40);
    nomb_clie.len = strlen(nomb_clie.arr);
    strcpy(wcadena,fecha.arr);
    strcpy(cadena,wcadena);
    fecha_numero(wcadena);
    strcpy(cadena,wcadena);
    fprintf (fp,"%s%s%50s %5s\n\n\n\n",line_feed6,elite,cadena," ");
    fprintf (fp,"%8s %30s\n","        ",nomb_ciu.arr);
    fprintf (fp,"      %-29s  %-38s\n"," ",nomb_clie.arr);
    strcpy(direcc,direccion.arr);
    strorg(direcc,1,40);
    fprintf (fp,"%-36s %-38s\n"," ",direcc);
/*
    sprintf (cadena,"%8.0f",telefono_emp);
    fmtnum("zzzzzz",cadena,r_t);
    fprintf (fp,"%20s%25s",r_t," ");
*/
    sprintf (cadena,"%8.0f",telefono);
    fmtnum("zzzzzzzz",cadena,r_t);
    fprintf (fp,"%40s%-20s\n\n\n\n\n"," ",r_t);
    con_lin=12;
    if (strcmp(despacho.arr,"0")) {
       if (!strcmp(sobre,"s") || !strcmp(sobre,"r")) {
           fprintf (fp,"%5s%s\n"," ","SOBRE ");
           con_lin++;
       }
       else {
            fprintf (fp,"%5s%s%s\n"," ","CAJA   MATERIAL OPTICO ",nro_despacho);
            con_lin++;
       }
    }
    else {
       if (!strcmp(sobre,"s") || !strcmp(sobre,"r")) {
           fprintf (fp,"%5s%s\n"," ","SOBRE ");
           con_lin++;
       }
       else {       
             fprintf (fp,"%5s%s\n"," ","CAJA   MATERIAL OPTICO ");
             con_lin++;
       }
    }   
    for (i=1;i<=22-con_lin;i++) {
        fprintf(fp,"\n");
    }
    fprintf (fp,"%s\r",line_feed8vo);
    for (i=1;i<1;i++) {
        fprintf(fp,"\n");
    }
  }

void  servientregasb()
  {
    int i;
    strorg(nomb_clie.arr,1,40);
    nomb_clie.len = strlen(nomb_clie.arr);
    strcpy(wcadena,fecha.arr);
    strcpy(cadena,wcadena);
    fecha_numero(wcadena);
    strcpy(cadena,wcadena);
    fprintf (fp,"%s%s%23s %5s\n\n\n\n\n",line_feed6,elite,cadena," ");
    fprintf (fp,"%2s%-38s\n"," ",nomb_clie.arr);
    strcpy(direcc,direccion.arr);
    strorg(direcc,1,36);
    fprintf (fp,"%2s%-38s\n"," ",direcc);
    fprintf (fp,"%-13s\n\n",nomb_ciu.arr);
/*
    sprintf (cadena,"%8.0f",telefono_emp);
    fmtnum("zzzzzz",cadena,r_t);
    fprintf (fp,"%20s%25s",r_t," ");
*/
    sprintf (cadena,"%8.0f",telefono);
    fmtnum("zzzzzzzz",cadena,r_t);
    fprintf (fp,"%25s%-20s\n\n"," ",r_t);
    con_lin=11;
    if (strcmp(despacho.arr,"0")) {
       if (!strcmp(sobre,"r")) {
           fprintf (fp,"%2s%s\n"," ","FACTURA ");
       }
       else {
             fprintf (fp,"%36s%s%s\n"," ","CAJA   MATERIAL OPTICO ",nro_despacho);
       }
       con_lin++;
    }
    else {
       if (!strcmp(sobre,"r")) {
           fprintf (fp,"%2s%s\n"," ","FACTURA ");
       }
       else {
            fprintf (fp,"%36s%s\n"," ","CAJA   MATERIAL OPTICO ");
       }
       con_lin++;
    }

    sprintf (cadena,"%12.2f",valor_ordenes);
    fprintf (fp,"\n\n\n%44s%-15s\n"," ",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    con_lin+=4;
    
    for (i=1;i<=22-con_lin;i++) {
        fprintf(fp,"\n");
    }
    fprintf (fp,"%s\r",line_feed8vo);
    for (i=1;i<1;i++) {
        fprintf(fp,"\n");
    }
  }

void aeromensajeria()
  {
    int i;
    strorg(nomb_clie.arr,1,40);
    nomb_clie.len = strlen(nomb_clie.arr);
    sprintf (cadena,"%8.0f",telefono_emp);
    fmtnum("zzzzzz",cadena,r_t);
    fprintf (fp,"%s%s    %-27s %s\n\n",line_feed6,diezcpi,nomb_emp.arr,r_t);
    fprintf (fp,"    %-27s %s\n\n\n",direccion_emp.arr,nomb_ciu_emp.arr);
    sprintf (cadena,"%8.0f",telefono);
    fmtnum("zzzzzzzz",cadena,r_t);
    fprintf (fp,"    %-27 s%-36s\n  %68s",nomb_clie.arr,r_t,"X");
    strcpy(direcc,direccion.arr);
    strorg(direcc,1,22);
    if (strlen(direccion.arr) > 27) {
        fprintf (fp,"\r        %22s\n",direcc);
        strcpy(direcc,direccion.arr);
        strorg(direcc,23,18);
        fprintf (fp,"        %s",direcc);
    }
    else {
          fprintf (fp,"\r    %s",direccion.arr);
    }
    fprintf (fp,"\r                                %s\n\n",nomb_ciu.arr);
    if (strcmp(despacho.arr,"0")) {
       fprintf (fp,"%51s","X");
    }
    if (!strcmp(sobre,"s")) {
        fprintf (fp,"%9s","X");
    }
    sprintf (cadena,"%8.0f",valor_flete);
    fmtnum("$zz,zzz",cadena,r_t);
    fprintf (fp,"\r%81s\n",r_t);
    strcpy(cadena,hora.arr);
    strcpy(cadena2,hora.arr);
    strorg(cadena,1,2);
    strorg(cadena2,10,2);
    sprintf(hora.arr,"%s %s",cadena,cadena2);
    hora.len = strlen(hora.arr);
    strcpy(cadena,fecha.arr);
    strcpy(wcadena,cadena);
    fecha_numero(wcadena);
    strcpy(cadena,wcadena);
    fprintf (fp,"%35s %6s\n\n\r%83s",cadena,hora.arr,"-*-       -*-   ");
    if (strcmp(despacho.arr,"0")) {
       fprintf (fp,"\r%60s\n%60s","MATERIAL OPTICO",nro_despacho);
    }
    else {
       fprintf (fp,"\r%60s\n","MATERIAL OPTICO");
    }
    sprintf (cadena,"%8.0f",valor_flete);
    fmtnum("$zz,zzz",cadena,r_t);
    fprintf (fp,"\n\n%81s\n",r_t);
    con_lin=16;

    for (i=1;i<=20-con_lin;i++) {
        fprintf(fp,"\n");
    }
    fprintf (fp,"%s\r",line_feed8vo);
    for (i=1;i<4;i++) {
        fprintf(fp,"\n");
    }
  }


void  chevalier()
  {
    int i;
    strcpy(wcadena,fecha.arr);
    strcpy(cadena,wcadena);
    fecha_numero(wcadena);
    strcpy(cadena,wcadena);
    fprintf (fp,"%s%s%71s\n\n",line_feed6,diezcpi,cadena);
    strorg  (nomb_ciu.arr,1,11);
    fprintf (fp,"%61s%-22s\n"," ",nomb_ciu.arr);
    strorg(nomb_clie.arr,1,40);
    nomb_clie.len = strlen(nomb_clie.arr);
    fprintf (fp,"%39s%s\n"," ",nomb_clie.arr);
    strcpy(direcc,direccion.arr);
    strorg(direcc,1,17);
    fprintf (fp,"%-39s%s\n"," ",direccion.arr);
    sprintf (cadena,"%8.0f",telefono);
    fmtnum("zzzzzzzz",cadena,r_t);
    fprintf (fp,"%44s%-12s"," ",r_t);
    sprintf (cadena,"%12.0f",nit);
    fmtnum("zzz,zzz,zzz",cadena,r_t);
    fprintf (fp,"  %s",r_t);
    if (digito > 0) {
        sprintf (cadena,"%d",digito);
        fprintf (fp,"-%s",fmtnum("z",cadena,r_t));
    }
    else if (digito == 0)
             fprintf (fp,"-%s","0");
    fprintf (fp,"\n\n");
    if (strcmp(despacho.arr,"0")) {
       fprintf (fp," %d%-26s%-28s ",ct," CAJA  MATERIAL OPTICO ",nro_despacho);
    }
    else {
       fprintf (fp," %d%-26s ",ct," CAJA  MATERIAL OPTICO ");
    }
    if (!strcmp(sobre,"s")) {
        fprintf (fp,"%s","y 1 SOBRE ");
    }
    sprintf (cadena,"%8.0f",valor_flete);
    fmtnum("$zz,zzz",cadena,r_t);
    fprintf (fp,"\n\n\r%59s",r_t);
    con_lin=12;
    for (i=1;i<=20-con_lin;i++) {
        fprintf(fp,"\n");
    }
  }

void  avianca()
  {
    int i;
    strorg(nomb_clie.arr,1,40);
    nomb_clie.len = strlen(nomb_clie.arr);
    strcpy(wcadena,fecha.arr);
    strcpy(cadena,wcadena);
    fecha_numero(wcadena);
    strcpy(cadena,wcadena);
    fprintf (fp,"%s%s%57s\n\n\n\n\n\n\n\n\n\n\n\n",line_feed6,diezcpi,cadena);

    if (strcmp(despacho.arr,"0")) {
       fprintf (fp,"%47s%d%13s\n"," ",ct," CAJA M.OPTICO ");
    }
    else {
       fprintf (fp,"%47s%d%13s\n"," ",ct," CAJA M.OPTICO ");
    }

    sprintf (cadena,"%8.0f",telefono);
    fmtnum("zzzzzzzz",cadena,r_t);
    strorg(nomb_ciu.arr,1,20);
    nomb_ciu.len = strlen(nomb_ciu.arr);
    fprintf (fp,"%18s %21s %18s\n\n ",r_t,nomb_ciu.arr,nro_despacho);

    if (!strcmp(sobre,"s")) {
        fprintf (fp,"%s60","y 1 SOBRE ");
    }

    fprintf (fp," %-40s\n\n",nomb_clie.arr);

    strcpy(direcc,direccion.arr);
    strorg(direcc,1,31);
    fprintf (fp,"  %-31s\n",direcc);

    strcpy(direcc,"");
    if (strlen(direccion.arr) > 31) {
       strcpy(direcc,direccion.arr);
       strorg(direcc,32,14);
       fprintf (fp,"  %-15s\n",direcc);
    }
    con_lin=18;
    for (i=1;i<=22-con_lin;i++) {
        fprintf(fp,"\n");
    }
  }

