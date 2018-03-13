
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
           char  filnam[15];
};
static const struct sqlcxp sqlfpn =
{
    14,
    ".\\auxibanco.pc"
};


static unsigned long sqlctx = 1054787;


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
            void  *sqhstv[11];
   unsigned int   sqhstl[11];
            int   sqhsts[11];
            void  *sqindv[11];
            int   sqinds[11];
   unsigned int   sqharm[11];
   unsigned int   *sqharc[11];
   unsigned short  sqadto[11];
   unsigned short  sqtdso[11];
} sqlstm = {10,11};

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

 static const char *sq0004 = 
"select nvl(infa,'0') ,decode(clase,'RC','0',nvl(infb,'0')) ,nvl(infc,'0') ,n\
vl(infd,'0') ,comprobante ,clase ,descripcion ,fecha ,nvl(valor_deb,0) ,nvl(va\
lor_cre,0) ,d.codigo_nit  from movto_d d ,movto_c c ,bancos b where ((((((((((\
(d.codigo_emp=c.codigo_emp and d.ano_mes=c.ano_mes) and d.consecutivo=c.consec\
utivo) and d.libro=to_number(:b0)) and c.codigo_emp=:b1) and to_date(to_char(c\
.fecha,'yyyymmdd'),'yyyymmdd')>=to_date(:b2,'yyyymmdd')) and to_date(to_char(c\
.fecha,'yyyymmdd'),'yyyymmdd')<=to_date(:b3,'yyyymmdd')) and d.cuenta=b.cuenta\
) and c.codigo_emp=b.codigo_emp) and b.tipo<>'E') and b.codigo=:b4) and d.infa\
=:b5) order by c.fecha            ";

 static const char *sq0005 = 
"select c.codigo_nitb ,d.infc ,c.fecha ,valor_cre ,decode(d.infb,'ANULADO','*\
** ANULADO ***',c.descripcion) ,c.clase ,c.comprobante  from movto_d d ,movto_\
c c where ((((((((((d.infa=:b0 and d.libro=to_number(:b1)) and cuenta=(select \
cuenta  from bancos where ((codigo=:b2 and tipo<>'E') and codigo_emp=:b3))) an\
d to_date(to_char(c.fecha,'yyyymmdd'),'yyyymmdd')<=to_date(:b4,'yyyymmdd')) an\
d to_date(to_char(c.fecha,'yyyymmdd'),'yyyymmdd')>=to_date(:b5,'yyyymmdd')) an\
d c.codigo_emp=:b3) and c.codigo_emp=d.codigo_emp) and c.ano_mes=d.ano_mes) an\
d c.consecutivo=d.consecutivo) and d.valor_cre is  not null ) and clase='EG') \
order by c.fecha,d.infc            ";

 static const char *sq0006 = 
"select c.codigo_nitb ,d.infc ,d.infd ,valor_cre ,c.descripcion ,c.clase ,c.c\
omprobante ,d.cuenta ,d.consecutivo ,d.secuencia  from movto_d d ,movto_c c wh\
ere (((((((((((d.infa=:b0 and d.libro=to_number(:b1)) and cuenta=(select cuent\
a  from bancos where ((codigo=:b2 and tipo<>'E') and codigo_emp=:b3))) and to_\
date(to_char(c.fecha,'yyyymmdd'),'yyyymmdd')>=to_date(20010101,'yyyymmdd')) an\
d to_date(to_char(c.fecha,'yyyymmdd'),'yyyymmdd')<=to_date(:b4,'yyyymmdd')) an\
d to_date(:b4,'yyyymmdd')<to_date(d.infd)) and c.codigo_emp=to_number(:b3)) an\
d c.codigo_emp=d.codigo_emp) and c.ano_mes=d.ano_mes) and c.consecutivo=d.cons\
ecutivo) and d.valor_cre is  not null ) and clase='EG') order by d.infd,d.infc\
            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,192,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,34,0,4,217,0,0,1,0,0,1,0,2,3,0,0,
55,0,0,3,140,0,4,271,0,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
86,0,0,4,656,0,9,345,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
125,0,0,5,657,0,9,346,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
168,0,0,6,712,0,9,347,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
211,0,0,4,0,0,15,352,0,0,0,0,0,1,0,
226,0,0,5,0,0,15,353,0,0,0,0,0,1,0,
241,0,0,6,0,0,15,354,0,0,0,0,0,1,0,
256,0,0,7,0,0,30,356,0,0,0,0,0,1,0,
271,0,0,8,234,0,4,366,0,0,8,7,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,
318,0,0,4,0,0,13,434,0,0,11,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,
9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
377,0,0,5,0,0,13,464,0,0,7,0,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,
0,0,2,4,0,0,
420,0,0,6,0,0,13,486,0,0,8,0,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,
0,0,2,4,0,0,2,9,0,0,
467,0,0,9,212,0,4,628,0,0,8,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,1,9,0,0,1,9,0,0,
514,0,0,10,135,0,4,678,0,0,4,3,0,1,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
545,0,0,11,78,0,4,692,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
568,0,0,12,294,0,5,738,0,0,11,11,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
};


/*****************************************************************
* AUXIBANCO.C Version 1.0 - Rev 1.2 - Dic. 20/93.
*
* auxibanco.pc. Listado del movimiento de cuentas auxiliares de banco
*
* Uso : auxibanco codigo_emp banco cta_cte fechai fechaf copias
*       device userid/password
*
* Martin A. Toloza L. Creado Diciembre 20-1997.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(int argc, char *argv[]);
void listado();
void listar();
void leer_movto();
void leer_c2();
void leer_c5();
void leer_c11();
void imprime_movto();
void imprime_chq();
void imprime_post();
void titulos();
void imprime_acumulanit();
void leer_bancos();
void leer_nit();
void totales();
void totales_post();
void actu_bancosm();

				     /* Parametros de comunicacion con ORACLE */

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Empresa (C1) */
/* VARCHAR nomb_emp      [41]; */ 
struct { unsigned short len; unsigned char arr[41]; } nomb_emp;

double  nit;
int     digito;
int     a2k;
/* VARCHAR codigo_emp    [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

                                 /* Movto (C2) */
double  consecutivo;
double  secuencia;
/* VARCHAR cuenta        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } cuenta;

/* VARCHAR veca          [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } veca;

/* VARCHAR vecb          [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecb;

/* VARCHAR vecc          [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecc;

/* VARCHAR vecd          [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecd;

double  comprobante;
/* VARCHAR clase         [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } clase;

/* VARCHAR descripcion   [41]; */ 
struct { unsigned short len; unsigned char arr[41]; } descripcion;

/* VARCHAR fecha         [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha;

double  valor_deb;
double  valor_cre;
double  codigo_nitm;
/* VARCHAR fechai2       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechai2;

/* VARCHAR fechaf        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechaf;

/* VARCHAR codigo_bco    [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_bco;

/* VARCHAR cta_cte       [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } cta_cte;

char    vecmov        [5][14];
                                 /* Movto (C5) */
double  codigo_nit;
/* VARCHAR cheque        [11]; */ 
struct { unsigned short len; unsigned char arr[11]; } cheque;

/* VARCHAR fecha_chq     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_chq;

double  valor_chq;
/* VARCHAR descripcionch [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } descripcionch;

/* VARCHAR clasech       [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } clasech;

double  comprobantech;
                                 /* Plan (C7) */
/* VARCHAR nombre_cta    [61]; */ 
struct { unsigned short len; unsigned char arr[61]; } nombre_cta;

/* VARCHAR db_cr         [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } db_cr;

char    vecplan       [5][14];
                                 /* Bancos (C8) */
/* VARCHAR nombre_bco    [46]; */ 
struct { unsigned short len; unsigned char arr[46]; } nombre_bco;

                                 /* BancosM (C9) */
double  valor_saldo;
/* VARCHAR ano_mesa      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesa;

                                 /* Nits (C10) */
/* VARCHAR nombre_ben    [35]; */ 
struct { unsigned short len; unsigned char arr[35]; } nombre_ben;

/* VARCHAR codigo_nitb   [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nitb;

                                 /* Movtos (C11) */
/* VARCHAR chequep       [11]; */ 
struct { unsigned short len; unsigned char arr[11]; } chequep;

/* VARCHAR fecha_chqp    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_chqp;

/* VARCHAR descripcionchp[41]; */ 
struct { unsigned short len; unsigned char arr[41]; } descripcionchp;

/* VARCHAR clasechp      [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } clasechp;

                                 /* BancosM (C12) */
/* VARCHAR ano_mesf      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesf;

/* VARCHAR saldoa        [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } saldoa;

/* VARCHAR libro         [04]; */ 
struct { unsigned short len; unsigned char arr[4]; } libro;


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
char    pagina[4];                                   /* Contador de Paginas */
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                  /* Contador de Lineas  */
int     cl;
int     staora  = 0;
int     traidos = 0;
int     num_ret = 0;
int     loop_6  = 0;
int     anof;
int     mesf;
int     diaf;
int     anof2;
int     mesf2;
int     diaf2;
char    ano_mesi[20];
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[100];
int     diai;
int     mesi;
int     mest;
int     diat;
int     anoi;
int     anot;
char    nombreb[51];
char    fechai[20];
double  x, num, doble;
double  total_deb;
double  total_cre;
double  total_pos;
double  saldo_ant;
double  valor_cns;
char    cadena[100];
char    cadena2[240];
char    copias[5];
int     i;
int     j;
int     k;
int     oraest_chq;
int     oraest_mov;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 8)
       {
       	printf ("Incorrecta invocacion:\n");
        printf ("Uso : auxibanco codigo_emp banco cta_cte fechai fechaf \n");
	      printf ("               libro(0= COLGAAP 1=IFRS)\n");
        printf ("      device : t salida por terminal\n");
      	printf ("               s salida standar     \n");
	      printf ("               Px salida por impresora (x nro printer)\n");
	      printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (codigo_bco.arr, argv[2]);
       codigo_bco.len =        strlen(codigo_bco.arr);
       strcpy (cta_cte.arr,    argv[3]);
       cta_cte.len    =        strlen(cta_cte.arr);
       strcpy (fechai,         argv[4]);
       strcpy (fechaf.arr,     argv[5]);
       fechaf.len     =        strlen(fechaf.arr);
       if ( strlen(fechai) != 8 || strlen(fechaf.arr) != 8 ) {
          printf("Error, la fecha debe ser de 8 digitos y formato AAAAMMDD");
          exit (1);
       }
       strcpy (device,         argv[6]);
       strlow (device);
       strcpy (libro.arr,      argv[7]);
       libro.len =             strlen(libro.arr);

    if (!strpos ("/", argv[8]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,  argv[8]);
    uid.len   =       strlen(uid.arr);

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
    strcpy (ano_mesi,       fechai);
    strorg (ano_mesi,1,6);
    sprintf(fechai2.arr,"%06s%02s",ano_mesi,"01");
    fechai2.len  = strlen(fechai2.arr);
    strcpy (ano_mesf.arr,   fechaf.arr);
    strorg (ano_mesf.arr,1,6);
    ano_mesf.len = strlen(ano_mesf.arr);
//    periodoy2k(ano_mesf.arr,a2k);
//    ano_mesf.len = strlen(ano_mesf.arr);
    strcpy (cadena,ano_mesi);
    strorg (cadena,1,4);
    anoi         = atoi(cadena);
    strcpy (cadena,ano_mesi);
    strorg (cadena,5,2);
    mesi         = atoi(cadena);
    strcpy (cadena,fechai);
    strorg (cadena,7,2);
    diai         = atoi(cadena);
    fecha_oracle4(fechai);

    strcpy (cadena,fechaf.arr);
    strorg (cadena,1,4);
    anof         = atoi(cadena);
    anof2=anof;
    strcpy (cadena,fechaf.arr);
    strorg (cadena,5,2);
    mesf         = atoi(cadena);
    mesf2=mesf;
    strcpy (cadena,fechaf.arr);
    strorg (cadena,7,2);
    diaf         = atoi(cadena);
    diaf2=diaf;
    anot=anoi;
    mest=mesi;
    diat=diai;
    if (mesi==1) {
       anoi--;
       mesi=12;
    }
    else {
       mesi--;
    }
    sprintf(ano_mesa.arr,"%d%02d",anoi,mesi);
    ano_mesa.len = strlen(ano_mesa.arr);
//    periodoy2k(ano_mesa.arr,a2k);
//    ano_mesa.len = strlen(ano_mesa.arr);

    /* EXEC SQL select n.nombre, n.nit, n.digito
                    into :nomb_emp, :nit, :digito
             from   nits n, empresas e
             where  n.codigo_nit = e.codigo_nit and
                    e.codigo_emp = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select n.nombre ,n.nit ,n.digito into :b0,:b1,:b2  from n\
its n ,empresas e where (n.codigo_nit=e.codigo_nit and e.codigo_emp=to_number(\
:b3))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )55;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&nomb_emp;
    sqlstm.sqhstl[0] = (unsigned int  )43;
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
    sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[3] = (unsigned int  )5;
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
        fprintf (stderr, "Error leyendo Empresa (%d)\n", sqlca.sqlcode);

    /* EXEC SQL DECLARE C2 CURSOR FOR
             select nvl(infa,'0'), decode(clase,'RC','0',nvl(infb,'0')),
                    nvl(infc,'0'), nvl(infd,'0'),
                    comprobante, clase, descripcion, fecha,
                    nvl(valor_deb,0), nvl(valor_cre,0), d.codigo_nit
             from   movto_d d, movto_c c, bancos b
             where  d.codigo_emp     = c.codigo_emp                  and
                    d.ano_mes        = c.ano_mes                     and
                    d.consecutivo    = c.consecutivo                 and
                    d.libro          = to_number(:libro)             and
                    c.codigo_emp     =  :codigo_emp                  and
                    to_date(to_char(c.fecha,'yyyymmdd'),'yyyymmdd') >= to_date(:fechai2,'yyyymmdd')  and
                    to_date(to_char(c.fecha,'yyyymmdd'),'yyyymmdd') <= to_date(:fechaf ,'yyyymmdd')  and
                    d.cuenta         = b.cuenta                      and
                    c.codigo_emp     = b.codigo_emp                  and
                    b.tipo          != 'E'                           and
                    b.codigo         = :codigo_bco                   and
                    d.infa           = :cta_cte
             order by c.fecha; */ 


    /* EXEC SQL DECLARE C5 CURSOR FOR
             select c.codigo_nitb, d.infc, c.fecha, valor_cre,
                    decode(d.infb,'ANULADO','*** ANULADO ***',c.descripcion),
                    c.clase, c.comprobante
             from   movto_d d, movto_c c
             where  d.infa        = :cta_cte                          and
                    d.libro       = to_number(:libro)                 and
                    cuenta        = (select cuenta
                                     from   bancos
                                     where  codigo     = :codigo_bco  and
                                            tipo      != 'E'          and
                                            codigo_emp = :codigo_emp) and
                    to_date(to_char(c.fecha,'yyyymmdd'),'yyyymmdd') <= to_date(:fechaf ,'yyyymmdd')      and
                    to_date(to_char(c.fecha,'yyyymmdd'),'yyyymmdd') >= to_date(:fechai2,'yyyymmdd')      and
                    c.codigo_emp  =  :codigo_emp                      and
                    c.codigo_emp  = d.codigo_emp                      and
                    c.ano_mes     = d.ano_mes                         and
                    c.consecutivo = d.consecutivo                     and
                    d.valor_cre   is NOT NULL                         and
                    clase         = 'EG'
             order by c.fecha, d.infc; */ 


    /* EXEC SQL DECLARE C11 CURSOR FOR
             select c.codigo_nitb, d.infc, d.infd, valor_cre,
                    c.descripcion, c.clase, c.comprobante,
                    d.cuenta, d.consecutivo, d.secuencia
             from   movto_d d, movto_c c
             where  d.infa        =  :cta_cte            and
                    d.libro       = to_number(:libro)    and
                    cuenta        = (select cuenta
                                     from   bancos
                                     where  codigo     = :codigo_bco  and
                                            tipo      != 'E'          and
                                            codigo_emp = :codigo_emp) and
                    to_date(to_char(c.fecha,'yyyymmdd'),'yyyymmdd') >= to_date(20010101,'yyyymmdd')      and
                    to_date(to_char(c.fecha,'yyyymmdd'),'yyyymmdd') <= to_date(:fechaf,'yyyymmdd')      and
                    to_date(:fechaf,'yyyymmdd')   <  to_date(d.infd) and
                    c.codigo_emp  = to_number(:codigo_emp)         and
                    c.codigo_emp  = d.codigo_emp                   and
                    c.ano_mes     = d.ano_mes                      and
                    c.consecutivo = d.consecutivo                  and
                    d.valor_cre   is NOT NULL                      and
                    clase         = 'EG'
             order by d.infd, d.infc; */ 


    /* EXEC SQL OPEN C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0004;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )86;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&libro;
    sqlstm.sqhstl[0] = (unsigned int  )6;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[1] = (unsigned int  )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&fechai2;
    sqlstm.sqhstl[2] = (unsigned int  )22;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&fechaf;
    sqlstm.sqhstl[3] = (unsigned int  )22;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&codigo_bco;
    sqlstm.sqhstl[4] = (unsigned int  )5;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&cta_cte;
    sqlstm.sqhstl[5] = (unsigned int  )8;
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


    /* EXEC SQL OPEN C5; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0005;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )125;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&cta_cte;
    sqlstm.sqhstl[0] = (unsigned int  )8;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&libro;
    sqlstm.sqhstl[1] = (unsigned int  )6;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&codigo_bco;
    sqlstm.sqhstl[2] = (unsigned int  )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[3] = (unsigned int  )5;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&fechaf;
    sqlstm.sqhstl[4] = (unsigned int  )22;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&fechai2;
    sqlstm.sqhstl[5] = (unsigned int  )22;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&codigo_emp;
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


    /* EXEC SQL OPEN C11; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0006;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )168;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&cta_cte;
    sqlstm.sqhstl[0] = (unsigned int  )8;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&libro;
    sqlstm.sqhstl[1] = (unsigned int  )6;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&codigo_bco;
    sqlstm.sqhstl[2] = (unsigned int  )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[3] = (unsigned int  )5;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&fechaf;
    sqlstm.sqhstl[4] = (unsigned int  )22;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&fechaf;
    sqlstm.sqhstl[5] = (unsigned int  )22;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&codigo_emp;
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


    listado();

    cierre_impresora();

    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )211;
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
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )226;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL CLOSE C11; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )241;
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
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )256;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    exit   (0);
}

void listado()
{
 staora=0;
 valor_saldo=0;
 saldo_ant=0;
 /* EXEC SQL select saldo into :valor_saldo
          from   bancosm b
          where  b.codigo_emp = :codigo_emp and
                 b.codigo_bco = :codigo_bco and
                 b.cta_cte    = :cta_cte    and
                 b.ano_mes    = (select max(ano_mes)
                                 from   bancosm
                                 where  codigo_emp = :codigo_emp and
                                        codigo_bco = :codigo_bco and
                                        cta_cte    = :cta_cte    and
                                        ano_mes   <= :ano_mesa); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select saldo into :b0  from bancosm b where (((b.codigo_emp=\
:b1 and b.codigo_bco=:b2) and b.cta_cte=:b3) and b.ano_mes=(select max(ano_mes\
)  from bancosm where (((codigo_emp=:b1 and codigo_bco=:b2) and cta_cte=:b3) a\
nd ano_mes<=:b7)))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )271;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&valor_saldo;
 sqlstm.sqhstl[0] = (unsigned int  )8;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned int  )5;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&codigo_bco;
 sqlstm.sqhstl[2] = (unsigned int  )5;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&cta_cte;
 sqlstm.sqhstl[3] = (unsigned int  )8;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[4] = (unsigned int  )5;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&codigo_bco;
 sqlstm.sqhstl[5] = (unsigned int  )5;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&cta_cte;
 sqlstm.sqhstl[6] = (unsigned int  )8;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&ano_mesa;
 sqlstm.sqhstl[7] = (unsigned int  )22;
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


 if (sqlca.sqlcode) {
     fprintf (stderr, "Error leyendo Bancosm C9 (%d)\n", sqlca.sqlcode);
     valor_saldo=0;
 }
 imprime_acumulanit();
 while (!oraest_mov || !oraest_chq) {
        leer_c2();

        leer_c5();
        staora = oraest_chq;

        listar();
        totales();
        actu_bancosm();
        staora=0;
        leer_c11();
        staora = oraest_chq;
        oraest_chq = staora;
        if (!oraest_chq) {
            fprintf (fp, "%s%45s%s%s\n\n",enfatizado_on," ","--- RELACION DE CHEQUES POST-FECHADOS ---",enfatizado_off);
           imprime_post();
           totales_post();
        }
 }
}

void listar()
{
   while (oraest_chq == 0 || oraest_mov == 0) {
         if ((strcmp(fecha.arr,fecha_chq.arr)) > 0 && oraest_chq == 0) {
                imprime_chq();
         }
         else {
              if (oraest_mov==0)
                  leer_movto();
              else imprime_chq();
         }
  }
}

void leer_movto()
{
  if (!strcmp(clase.arr,"EG")) {
      if (valor_deb > 0)
          imprime_movto();
  }
  else {
        if (strcmp(clase.arr,"CD")&&strcmp(clase.arr,"NB")) {
            strcpy(descripcion.arr,"CONSIGNACION");
        }
        imprime_movto();
  }
  leer_c2();
}

void leer_c2()
{
  /* EXEC SQL FETCH C2  INTO :veca, :vecb, :vecc, :vecd, :comprobante, :clase,
                          :descripcion, :fecha, :valor_deb, :valor_cre,
                          :codigo_nitm; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )318;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&veca;
  sqlstm.sqhstl[0] = (unsigned int  )16;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&vecb;
  sqlstm.sqhstl[1] = (unsigned int  )16;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&vecc;
  sqlstm.sqhstl[2] = (unsigned int  )16;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&vecd;
  sqlstm.sqhstl[3] = (unsigned int  )16;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&comprobante;
  sqlstm.sqhstl[4] = (unsigned int  )8;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&clase;
  sqlstm.sqhstl[5] = (unsigned int  )5;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&descripcion;
  sqlstm.sqhstl[6] = (unsigned int  )43;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&fecha;
  sqlstm.sqhstl[7] = (unsigned int  )22;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&valor_deb;
  sqlstm.sqhstl[8] = (unsigned int  )8;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&valor_cre;
  sqlstm.sqhstl[9] = (unsigned int  )8;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&codigo_nitm;
  sqlstm.sqhstl[10] = (unsigned int  )8;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
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


  oraest_mov  =     sqlca.sqlcode;

  if (oraest_mov == -1405 ) {
      oraest_mov  = 0;
      if (!strlen(clase.arr)) {
          strcpy (clase.arr, "");
          clase.len = 0;
      }
  }
  else if (oraest_mov)
           fprintf (stderr, "Error leyendo C2 (%d)\n", oraest_mov);

  veca.arr          [veca.len]        = '\0';
  vecb.arr          [vecb.len]        = '\0';
  vecc.arr          [vecc.len]        = '\0';
  vecd.arr          [vecd.len]        = '\0';
  clase.arr         [clase.len]       = '\0';
  descripcion.arr   [descripcion.len] = '\0';
  fecha.arr         [fecha.len]       = '\0';
  strcpy (vecmov[1], veca.arr);
  strcpy (vecmov[2], vecb.arr);
  strcpy (vecmov[3], vecc.arr);
  strcpy (vecmov[4], vecd.arr);
}

void leer_c5()
{
  /* EXEC SQL FETCH C5  INTO :codigo_nit, :cheque, :fecha_chq, :valor_chq,
                          :descripcionch, :clasech, :comprobantech; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )377;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_nit;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&cheque;
  sqlstm.sqhstl[1] = (unsigned int  )13;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&fecha_chq;
  sqlstm.sqhstl[2] = (unsigned int  )22;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&valor_chq;
  sqlstm.sqhstl[3] = (unsigned int  )8;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&descripcionch;
  sqlstm.sqhstl[4] = (unsigned int  )53;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&clasech;
  sqlstm.sqhstl[5] = (unsigned int  )5;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&comprobantech;
  sqlstm.sqhstl[6] = (unsigned int  )8;
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


  oraest_chq  =     sqlca.sqlcode;

  if (oraest_chq == -1405 ) {
      oraest_chq  = 0;
      if (!strlen(cheque.arr)) {
          strcpy (cheque.arr, "");
          cheque.len = 0;
      }
  }
  else if (oraest_chq)
           fprintf (stderr, "Error leyendo C5 (%d)\n", oraest_chq);

  cheque.arr        [cheque.len]        = '\0';
  fecha_chq.arr     [fecha_chq.len]     = '\0';
  descripcionch.arr [descripcionch.len] = '\0';
  clasech.arr       [clasech.len]       = '\0';
}

void leer_c11()
{
  /* EXEC SQL FETCH C11 INTO :codigo_nit, :chequep, :fecha_chqp, :valor_chq,
                          :descripcionchp, :clasechp, :comprobantech, :cuenta; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )420;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_nit;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&chequep;
  sqlstm.sqhstl[1] = (unsigned int  )13;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&fecha_chqp;
  sqlstm.sqhstl[2] = (unsigned int  )22;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&valor_chq;
  sqlstm.sqhstl[3] = (unsigned int  )8;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&descripcionchp;
  sqlstm.sqhstl[4] = (unsigned int  )43;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&clasechp;
  sqlstm.sqhstl[5] = (unsigned int  )5;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&comprobantech;
  sqlstm.sqhstl[6] = (unsigned int  )8;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&cuenta;
  sqlstm.sqhstl[7] = (unsigned int  )16;
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


  oraest_chq  =      sqlca.sqlcode;

  if (oraest_chq == -1405 ) {
      oraest_chq  = 0;
      if (!strlen(chequep.arr)) {
          strcpy (chequep.arr, "");
          chequep.len = 0;
      }
  }
  else if (oraest_chq)
           fprintf (stderr, "Error leyendo C11 (%d)\n", oraest_chq);

  chequep.arr        [chequep.len]        = '\0';
  fecha_chqp.arr     [fecha_chqp.len]     = '\0';
  descripcionchp.arr [descripcionchp.len] = '\0';
  clasechp.arr       [clasechp.len]       = '\0';
}

void imprime_movto()
{
  if (strcmp(fecha.arr,fechai) >= 0) {
     i=0;
     if (con_lin > 60)
         titulos();
     strcpy  (cadena,fecha.arr);
     numero_fechaf(cadena);
     fprintf (fp," %s ",cadena);
     strcpy(nombreb,"");
     for (i=1;i<=4;i++) {
          if (!strcmp(vecplan[i],"NIT-BENEF")) {
              strcpy (vecmov[3],vecmov[i]);
              sprintf(codigo_nitb.arr,"%5.0f",codigo_nitm);
              leer_nit();
          }
     }
     fprintf (fp,"%-34s %2s %6.0f ",nombreb,clase.arr,comprobante);
     fprintf (fp,"%-40s",descripcion.arr);
     sprintf (cadena,"%9.2f",valor_deb);
     fprintf (fp,"%27s",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
     sprintf (cadena,"%9.2f",valor_cre);
     fprintf (fp,"%15s\n",fmtnum("zzz,zzz,zzz.zz",cadena,r_t));
     total_deb += valor_deb;
     total_cre += valor_cre;
     con_lin ++;
  }
  else {
        saldo_ant += (valor_deb-valor_cre);
  }
}

void imprime_chq()
{
  if (strcmp(fecha_chq.arr,fechai) >= 0) {
     if (con_lin > 60)
         titulos();
     strcpy  (cadena,fecha_chq.arr);
     numero_fechaf(cadena);
     fprintf (fp," %s ",cadena);
     sprintf (codigo_nitb.arr,"%5.0f",codigo_nit);
     leer_nit();
     fprintf (fp,"%-34s %2s %6.0f %-40s",nombre_ben.arr,clasech.arr,comprobantech,descripcionch.arr);
     fprintf (fp,"%-12s",cheque.arr);
     sprintf (cadena,"%9.2f",valor_chq);
     fprintf (fp,"%30s\n",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
     total_cre += valor_chq;
     con_lin++;
  }
  else {
        saldo_ant -= valor_chq;
  }
  leer_c5();
}

void imprime_post()
{
  while (!oraest_chq) {
     if (con_lin > 60) {
         titulos();
         fprintf (fp, "%s%45s%s%s\n\n",enfatizado_on," ","--- RELACION DE CHEQUES POST-FECHADOS ---",enfatizado_off);
     }
     strcpy  (cadena,fecha_chqp.arr);
     numero_fechaf(cadena);
     fprintf (fp," %s ",cadena);
     sprintf (codigo_nitb.arr,"%5.0f",codigo_nit);
     leer_nit();
     fprintf (fp,"%-34s %2s %6.0f %-40s",nombre_ben.arr,clasechp.arr,comprobantech,descripcionchp.arr);
     fprintf (fp,"%-12s",chequep.arr);
     sprintf (cadena,"%9.2f",valor_chq);
     fprintf (fp,"%30s\n",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
     total_pos += valor_chq;
     con_lin++;
     leer_c11();
  }
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 char fecha[30];
 double decimal;

 strcpy (fecha, "");
 fecha_system(fecha);
 doble=atof(codigo_emp.arr);
 num=doble/2;
 decimal=modf(num,&x);
 if (doble==1)
    decimal=0;
 if (decimal==0)
     fprintf(fp,"%s",salte_pagina);
 else fprintf(fp,"%s.",salte_pagina);
 con_pag++;
 con_lin=10;
 strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
 fprintf(fp,"%s%s%s%s%s\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
 sprintf (cadena,"%12.0f",nit);
 fprintf (fp,"%s%s%25s %18s",condensado_on,ancho_on,"NIT :",fmtnum("zzz,zzz,zzz,zzz",cadena,r_t));
 if (digito > 0) {
    sprintf (cadena,"%d",digito);
    fprintf (fp,"-%s",fmtnum("z",cadena,r_t));
 }
 else if (digito == 0)
         fprintf (fp,"-%s","0");
 fprintf(fp,"\n%20s%s%s\n\n"," ","LIBRO AUXILIAR DE BANCO",ancho_off);
 fprintf(fp,"%s%-30s%s%10s %2d / %d A %10s %2d / %d","FECHA PROCESO : ",fecha,"PERIODO DE : ",mes[mest-1],diat,anot,mes[mesf2-1],diaf2,anof2);
 fprintf(fp,"%30s %d\n\n","PAGINA ",con_pag);
 fprintf(fp,"%137s\n","  FECHA   BENEFICIARIO                           COMPROBANTE D E S C R I P C I O N             CHEQUE              ----MOVTO DEL DIA---- ");
 fprintf(fp,"%137s\n","                                                                                                                 DEBITOS       CREDITOS");
  if (atoi(pagina)<=con_pag) {
     fprintf (fp,"%s%s%2s %s%-10s ",enfatizado_on,"BANCO : ",codigo_bco.arr,"CUENTA : ",cta_cte.arr);
     fprintf (fp,"%s%s\n\n",nombre_bco.arr,enfatizado_off);
  }
}

void imprime_acumulanit()
{
  /* EXEC SQL select nombre, infa, infb, infc, infd, db_cr
           into  :nombre_cta, :veca, :vecb, :vecc, :vecd, :db_cr
           from   plan p, bancos b
           where  p.codigo_emp =  :codigo_emp and
                  p.cuenta     = b.cuenta     and
                  p.codigo_emp = b.codigo_emp and
                  b.tipo      != 'E'          and
                  b.codigo     =  :codigo_bco; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select nombre ,infa ,infb ,infc ,infd ,db_cr into :b0,:b1,:\
b2,:b3,:b4,:b5  from plan p ,bancos b where ((((p.codigo_emp=:b6 and p.cuenta=\
b.cuenta) and p.codigo_emp=b.codigo_emp) and b.tipo<>'E') and b.codigo=:b7)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )467;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&nombre_cta;
  sqlstm.sqhstl[0] = (unsigned int  )63;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&veca;
  sqlstm.sqhstl[1] = (unsigned int  )16;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&vecb;
  sqlstm.sqhstl[2] = (unsigned int  )16;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&vecc;
  sqlstm.sqhstl[3] = (unsigned int  )16;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&vecd;
  sqlstm.sqhstl[4] = (unsigned int  )16;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&db_cr;
  sqlstm.sqhstl[5] = (unsigned int  )5;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[6] = (unsigned int  )5;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&codigo_bco;
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



  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != -1405 && sqlca.sqlcode != 0) {
      fprintf (stderr, "Error leyendo Plan C7 (%d)\n", sqlca.sqlcode);
      exit(1);
  }
  nombre_cta.arr [nombre_cta.len] = '\0';
  veca.arr       [veca.len]       = '\0';
  vecb.arr       [vecb.len]       = '\0';
  vecc.arr       [vecc.len]       = '\0';
  vecd.arr       [vecd.len]       = '\0';
  db_cr.arr      [db_cr.len]      = '\0';

  strcpy (vecplan[1], veca.arr);
  strcpy (vecplan[2], vecb.arr);
  strcpy (vecplan[3], vecc.arr);
  strcpy (vecplan[4], vecd.arr);

  i=0;
  for (i=1;i<=4;i++) {
      if (!strcmp(vecplan[i],"CTA-CTE")) {
          leer_bancos();
          i=5;
      }
  }

  if (con_lin > 60)
      titulos();

  if (!strcmp(db_cr.arr,"DB")) {
     if (atoi(pagina)<=con_pag) {
         saldo_ant=valor_saldo;
     }
  }
  else {
        if (atoi(pagina)<=con_pag) {
            saldo_ant=valor_saldo;
        }
  }
}

void leer_bancos()
{
  /* EXEC SQL select c.nombre into :nombre_bco
           from   bancos b, ctacte c
           where  b.codigo     =  :codigo_bco      and
                  c.cta_cte    =  :cta_cte         and
                  b.cuenta     = c.cuenta          and
                  b.codigo_emp =  :codigo_emp; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select c.nombre into :b0  from bancos b ,ctacte c where (((\
b.codigo=:b1 and c.cta_cte=:b2) and b.cuenta=c.cuenta) and b.codigo_emp=:b3)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )514;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&nombre_bco;
  sqlstm.sqhstl[0] = (unsigned int  )48;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&codigo_bco;
  sqlstm.sqhstl[1] = (unsigned int  )5;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&cta_cte;
  sqlstm.sqhstl[2] = (unsigned int  )8;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[3] = (unsigned int  )5;
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
      fprintf (stderr, "Error leyendo Bancos C8 (%d)\n", sqlca.sqlcode);
  nombre_bco.arr  [nombre_bco.len] = '\0';
}

void leer_nit()
{
  codigo_nitb.len = strlen(codigo_nitb.arr);
  /* EXEC SQL select substr(nombre,1,33) into :nombre_ben
           from   nits
           where  codigo_nit = to_number(:codigo_nitb); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select substr(nombre,1,33) into :b0  from nits where codigo\
_nit=to_number(:b1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )545;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&nombre_ben;
  sqlstm.sqhstl[0] = (unsigned int  )37;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&codigo_nitb;
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


  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
      fprintf (stderr, "Error leyendo Nits C10 (%d)\n", sqlca.sqlcode);
  nombre_ben.arr  [nombre_ben.len] = '\0';
  strcpy(nombreb,nombre_ben.arr);
}

void totales()
{
  if (atoi(pagina)<=con_pag) {
      fprintf (fp,"%137s\n","------------- --------------");
      sprintf (cadena,"%9.2f",saldo_ant);
      if (!strcmp(db_cr.arr,"DB"))
          fprintf (fp,"%46s %18s","Saldo Anterior DEBITO ==> ",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
      else fprintf (fp,"%46s %18s","Saldo Anterior CREDITO ==> ",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
      sprintf (cadena,"%9.2f",total_deb);
      fprintf (fp,"%41s %15s","Totales movimiento ==>",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
      sprintf (cadena,"%9.2f",total_cre);
      fprintf (fp,"%15s\n",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
      saldo_ant+=total_deb-total_cre;
      sprintf (cadena,"%10.2f",saldo_ant);
      fprintf (fp,"%46s %18s\n\n","Saldo actual ==> ",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
  }
  con_lin+=4;
}

void totales_post()
{
  if (atoi(pagina)<=con_pag) {
      fprintf (fp,"%137s\n","              --------------");
      sprintf (cadena,"%9.2f",total_pos);
      fprintf (fp,"%122s%15s\n","Total Post-Fechados ===>     ",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
      saldo_ant+=total_pos;
      sprintf (cadena,"%10.2f",saldo_ant);
      fprintf (fp,"%46s %18s\r","Saldo Del dia==> ",fmtnum("zzzz,zzz,zz9.99",cadena,r_t));
      saldo_ant=total_deb=total_cre=total_pos=0;
  }
  con_lin+=2;
}

void actu_bancosm()
{
  sprintf (saldoa.arr,"%10.2f",saldo_ant);
  saldoa.len   =       strlen(saldoa.arr);
  /* EXEC SQL update bancosm
           set    saldo  = :saldoa
           where  codigo_emp                   = :codigo_emp and
                  codigo_bco                   = :codigo_bco and
                  cta_cte                      = :cta_cte    and
                  ano_mes                      = :ano_mesf   and
                 (:fechaf = (select to_char(max(fecha),'yyyymmdd')
                             from   bancosm
                             where  codigo_emp = :codigo_emp and
                                    codigo_bco = :codigo_bco and
                                    cta_cte    = :cta_cte)   or
                  to_char(last_day(to_date(:fechaf,'yyyymmdd')),'yyyymmdd') = :fechaf); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update bancosm  set saldo=:b0 where ((((codigo_emp=:b1 and \
codigo_bco=:b2) and cta_cte=:b3) and ano_mes=:b4) and (:b5=(select to_char(max\
(fecha),'yyyymmdd')  from bancosm where ((codigo_emp=:b1 and codigo_bco=:b2) a\
nd cta_cte=:b3)) or to_char(last_day(to_date(:b5,'yyyymmdd')),'yyyymmdd')=:b5)\
)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )568;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&saldoa;
  sqlstm.sqhstl[0] = (unsigned int  )17;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[1] = (unsigned int  )5;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&codigo_bco;
  sqlstm.sqhstl[2] = (unsigned int  )5;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&cta_cte;
  sqlstm.sqhstl[3] = (unsigned int  )8;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&ano_mesf;
  sqlstm.sqhstl[4] = (unsigned int  )22;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&fechaf;
  sqlstm.sqhstl[5] = (unsigned int  )22;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[6] = (unsigned int  )5;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&codigo_bco;
  sqlstm.sqhstl[7] = (unsigned int  )5;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&cta_cte;
  sqlstm.sqhstl[8] = (unsigned int  )8;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&fechaf;
  sqlstm.sqhstl[9] = (unsigned int  )22;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&fechaf;
  sqlstm.sqhstl[10] = (unsigned int  )22;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
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
      fprintf (stderr, "Error actualizando Bancos C12 (%d)\n", sqlca.sqlcode);
}

