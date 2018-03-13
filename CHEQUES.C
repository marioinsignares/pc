
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
    ".\\cheques.pc"
};


static unsigned long sqlctx = 260067;


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
            void  *sqhstv[8];
   unsigned int   sqhstl[8];
            int   sqhsts[8];
            void  *sqindv[8];
            int   sqinds[8];
   unsigned int   sqharm[8];
   unsigned int   *sqharc[8];
   unsigned short  sqadto[8];
   unsigned short  sqtdso[8];
} sqlstm = {10,8};

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
"select rownum ,c.codigo_emp ,nombre_corto ,codigo_bco ,cta_cte ,ult_listado \
,consecutivo ,nvl(chequera,'0') chequera  from control_chq c ,empresas e where\
 (ult_listado<consecutivo and c.codigo_emp=e.codigo_emp) order by rownum,c.cod\
igo_emp,codigo_bco,cta_cte            ";

 static const char *sq0005 = 
"select cheque  from control_chq2 where ((((codigo_emp=to_number(:b0) and cod\
igo_bco=to_number(:b1)) and cta_cte=:b2) and chequera=:b3) and consecutivo=:b4\
)           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,126,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,34,0,4,150,0,0,1,0,0,1,0,2,3,0,0,
55,0,0,3,270,0,9,174,0,0,0,0,0,1,0,
70,0,0,3,0,0,13,208,0,0,8,0,0,1,0,2,3,0,0,2,3,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,2,9,0,0,
117,0,0,3,0,0,15,241,0,0,0,0,0,1,0,
132,0,0,4,144,0,4,250,0,0,5,3,0,1,0,2,4,0,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
167,0,0,5,166,0,9,275,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
202,0,0,5,0,0,13,277,0,0,1,0,0,1,0,2,9,0,0,
221,0,0,6,296,0,4,290,0,0,8,5,0,1,0,2,9,0,0,2,4,0,0,2,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,
268,0,0,7,296,0,4,307,0,0,8,5,0,1,0,2,9,0,0,2,4,0,0,2,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,
315,0,0,8,132,0,5,357,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
346,0,0,9,0,0,30,367,0,0,0,0,0,1,0,
};


/*****************************************************************
* CHEQUES.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* cheques.c. Impresion de Los Cheques
*
* Uso : cheques codigo_emp device userid/password
*
* Mario E. Santiago I. Creado Noviembre 15-1994.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <sqlproto.h>
#include <math.h>

void imprime_01();
void imprime_05();
void imprime_05_p();
void imprime_06();
void imprime_06_p();
void imprime_07();
void imprime_13();
void imprime_13a();
void imprime_14();
void imprime_18();
void imprime_23();
void imprime_30();
void imprime_34();
void imprime_51();
void imprime_60();
void strtri();
void decimal();
void ver_montolet();
void numero_fecha();
void fecha_cheques();
void monletr();
				     /* Parametros de comunicacion con ORACLE */

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR    uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

/* VARCHAR    fecha[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } fecha;

/* VARCHAR    nombre[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } nombre;

/* VARCHAR    codigo_bco[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_bco;

/* VARCHAR    cta_cte[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } cta_cte;

/* VARCHAR    numero_cheque[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } numero_cheque;

/* VARCHAR    numero_cheque2[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } numero_cheque2;

/* VARCHAR    ultimo[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ultimo;

/* VARCHAR    codigo_emp[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_emp;

/* VARCHAR    ano_mes[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR    nomb_empresa[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } nomb_empresa;

/* VARCHAR    codigo_banco[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_banco;

double     valor_cheque;
double     consecutivo;
double     ult_listado;
double     ult_grabado;
/* VARCHAR    chequera[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } chequera;

int        fila;
int        empresa;
double     cuenta_cte;
int        a2k;

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
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                   /* Contador de Lineas  */
int     cl;
int     staora;
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[200];
char    cadena  [200];
char    cadena2 [200];
char    wcadena [200];

struct chpend {
       int    cod_emp;
       int    opcion;
       char   banco[20];
       double cuenta_corriente;
};
struct chpend vec[20];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int     i;
double  j;
char    op[4];
int	status = 0;

    if (argc < 3)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : cheques device userid/password\n");
	printf ("      device : t  = salida por terminal\n");
	printf ("               s  = salida standar     \n");
	printf ("               Px = salida por impresora (x nro impresora)\n");
        exit (1);
       }


    strcpy (device,   argv[1]);
    if (!strpos ("/", argv[2]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[2]);
    uid.len =    strlen(uid.arr);

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

    strcpy (ano_mes.arr,    "201501");
    ano_mes.len    =        strlen(ano_mes.arr);
/*
    periodoy2k(ano_mes.arr,a2k);
    ano_mes.len    =        strlen(ano_mes.arr);
*/
    strcpy(op,"0");
    do {
       /* C4 */
       /* EXEC SQL DECLARE C4 CURSOR FOR
       select rownum, c.codigo_emp, nombre_corto, codigo_bco, cta_cte,
              ult_listado, consecutivo, nvl(chequera,'0') as chequera
       from   control_chq c, empresas e
       where  ult_listado  < consecutivo and
              c.codigo_emp = e.codigo_emp
       order  by rownum, c.codigo_emp, codigo_bco, cta_cte; */ 

       /* EXEC SQL OPEN C4; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 4;
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
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



       if (staora) {
          printf ("\f ***** No hay cheques para imprimir ******\n");
          printf ("       Presione <Enter> para continuar");
          getchar();
          exit (0);
       }
       printf ("\f                 **** IMPRESION DE CHEQUES ****\n");
       printf ("        ");
       printf ("     ");
       printf ("     ");
       printf ("        ");
       printf ("  CHEQUE  ");
       printf ("  CHEQUE ",ult_grabado);
       printf ("  CHEQUES\n",ult_grabado);
       printf (" OPCION ");
       printf (" EMP ");
       printf (" BCO ");
       printf (" CTACTE ");
       printf ("  INICIAL ");
       printf ("  FINAL  ");
       printf ("  A LISTAR\n");
       printf (" ------ ");
       printf (" --- ");
       printf (" --- ");
       printf (" ------ ");
       printf ("  ------- ");
       printf ("  ------- ");
       printf (" --------\n");
       i=1;
       staora  = 0;
       while (staora==0) {

              /* EXEC SQL FETCH C4 INTO :fila, :empresa, :nomb_empresa,
                                     :codigo_banco, :cuenta_cte, :ult_listado,
                                     :ult_grabado, :chequera; */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 10;
              sqlstm.arrsiz = 8;
              sqlstm.sqladtp = &sqladt;
              sqlstm.sqltdsp = &sqltds;
              sqlstm.iters = (unsigned int  )1;
              sqlstm.offset = (unsigned int  )70;
              sqlstm.cud = sqlcud0;
              sqlstm.sqlest = (unsigned char  *)&sqlca;
              sqlstm.sqlety = (unsigned short)256;
              sqlstm.occurs = (unsigned int  )0;
              sqlstm.sqhstv[0] = (         void  *)&fila;
              sqlstm.sqhstl[0] = (unsigned int  )4;
              sqlstm.sqhsts[0] = (         int  )0;
              sqlstm.sqindv[0] = (         void  *)0;
              sqlstm.sqinds[0] = (         int  )0;
              sqlstm.sqharm[0] = (unsigned int  )0;
              sqlstm.sqadto[0] = (unsigned short )0;
              sqlstm.sqtdso[0] = (unsigned short )0;
              sqlstm.sqhstv[1] = (         void  *)&empresa;
              sqlstm.sqhstl[1] = (unsigned int  )4;
              sqlstm.sqhsts[1] = (         int  )0;
              sqlstm.sqindv[1] = (         void  *)0;
              sqlstm.sqinds[1] = (         int  )0;
              sqlstm.sqharm[1] = (unsigned int  )0;
              sqlstm.sqadto[1] = (unsigned short )0;
              sqlstm.sqtdso[1] = (unsigned short )0;
              sqlstm.sqhstv[2] = (         void  *)&nomb_empresa;
              sqlstm.sqhstl[2] = (unsigned int  )102;
              sqlstm.sqhsts[2] = (         int  )0;
              sqlstm.sqindv[2] = (         void  *)0;
              sqlstm.sqinds[2] = (         int  )0;
              sqlstm.sqharm[2] = (unsigned int  )0;
              sqlstm.sqadto[2] = (unsigned short )0;
              sqlstm.sqtdso[2] = (unsigned short )0;
              sqlstm.sqhstv[3] = (         void  *)&codigo_banco;
              sqlstm.sqhstl[3] = (unsigned int  )22;
              sqlstm.sqhsts[3] = (         int  )0;
              sqlstm.sqindv[3] = (         void  *)0;
              sqlstm.sqinds[3] = (         int  )0;
              sqlstm.sqharm[3] = (unsigned int  )0;
              sqlstm.sqadto[3] = (unsigned short )0;
              sqlstm.sqtdso[3] = (unsigned short )0;
              sqlstm.sqhstv[4] = (         void  *)&cuenta_cte;
              sqlstm.sqhstl[4] = (unsigned int  )8;
              sqlstm.sqhsts[4] = (         int  )0;
              sqlstm.sqindv[4] = (         void  *)0;
              sqlstm.sqinds[4] = (         int  )0;
              sqlstm.sqharm[4] = (unsigned int  )0;
              sqlstm.sqadto[4] = (unsigned short )0;
              sqlstm.sqtdso[4] = (unsigned short )0;
              sqlstm.sqhstv[5] = (         void  *)&ult_listado;
              sqlstm.sqhstl[5] = (unsigned int  )8;
              sqlstm.sqhsts[5] = (         int  )0;
              sqlstm.sqindv[5] = (         void  *)0;
              sqlstm.sqinds[5] = (         int  )0;
              sqlstm.sqharm[5] = (unsigned int  )0;
              sqlstm.sqadto[5] = (unsigned short )0;
              sqlstm.sqtdso[5] = (unsigned short )0;
              sqlstm.sqhstv[6] = (         void  *)&ult_grabado;
              sqlstm.sqhstl[6] = (unsigned int  )8;
              sqlstm.sqhsts[6] = (         int  )0;
              sqlstm.sqindv[6] = (         void  *)0;
              sqlstm.sqinds[6] = (         int  )0;
              sqlstm.sqharm[6] = (unsigned int  )0;
              sqlstm.sqadto[6] = (unsigned short )0;
              sqlstm.sqtdso[6] = (unsigned short )0;
              sqlstm.sqhstv[7] = (         void  *)&chequera;
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


              staora  = sqlca.sqlcode;
              if (sqlca.sqlcode == 1403) break;

              if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
                  fprintf (stderr, "Error leyendo C13 (%d)\n", sqlca.sqlcode);

              codigo_banco.arr [codigo_banco.len] = '\0';
              nomb_empresa.arr [nomb_empresa.len] = '\0';
              chequera.arr [chequera.len] = '\0';

              vec[i].opcion=fila;
              vec[i].cod_emp=empresa;
              strcpy(vec[i].banco,codigo_banco.arr);
              vec[i].cuenta_corriente=cuenta_cte;
              printf (" %02d     ",fila);
              printf (" %3s ",nomb_empresa.arr);
              printf (" %2s  ",codigo_banco.arr);
              printf (" %05.0f  ",cuenta_cte);
              printf (" %8.0f ",ult_listado+1);
              printf (" %8.0f ",ult_grabado);
              printf (" %8.0f \n",ult_grabado-ult_listado);
              i++;
       }

       printf ("\nEscoja su OPCION o cero (0) para salirse => ");
       gets(op);
       if (!strcmp(op,"0"))
           exit(0);
    }
    while (atoi(op) <= 0 || atoi(op) > fila);
    /* EXEC SQL CLOSE C4; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )117;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    sprintf (codigo_emp.arr,"%2d",vec[atoi(op)].cod_emp);
    codigo_emp.len = strlen(codigo_emp.arr);
    strcpy  (codigo_bco.arr,vec[atoi(op)].banco);
    codigo_bco.len = strlen(codigo_bco.arr);
    sprintf (cta_cte.arr,"%05.0f",vec[atoi(op)].cuenta_corriente);
    cta_cte.len = strlen(cta_cte.arr);
    /* C2 */
    /* EXEC SQL select consecutivo, ult_listado
             into  :ult_grabado, :ult_listado
	           from   control_chq
             where  codigo_emp     = to_number(:codigo_emp)  and
                    codigo_bco     = to_number(:codigo_bco)  and
                    cta_cte        =          (:cta_cte); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select consecutivo ,ult_listado into :b0,:b1  from contro\
l_chq where ((codigo_emp=to_number(:b2) and codigo_bco=to_number(:b3)) and cta\
_cte=:b4)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )132;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&ult_grabado;
    sqlstm.sqhstl[0] = (unsigned int  )8;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&ult_listado;
    sqlstm.sqhstl[1] = (unsigned int  )8;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
    sqlstm.sqhstl[2] = (unsigned int  )12;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&codigo_bco;
    sqlstm.sqhstl[3] = (unsigned int  )22;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&cta_cte;
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



    fprintf(fp,"%s%s%s%s\r",diezcpi,line_feed8vo,nql_on,idioma);
    for (j=ult_listado+1;j<=ult_grabado;j++) {
         sprintf(numero_cheque.arr,"%8.0f",j);
         strtri(numero_cheque.arr);
         numero_cheque.len = strlen(numero_cheque.arr); 
         /* C1 */
//         printf("numero_cheque.arr <%s>",numero_cheque.arr); getchar();

        if (strcmp(chequera.arr,"0")) {
            /* EXEC SQL DECLARE C1 CURSOR FOR
                     select cheque
	                   from   control_chq2
                     where  codigo_emp     = to_number(:codigo_emp)  and
                            codigo_bco     = to_number(:codigo_bco)  and
                            cta_cte        =          (:cta_cte)     and
                            chequera       = :chequera               and
                            consecutivo    = :numero_cheque; */ 


            /* EXEC SQL OPEN C1; */ 

{
            struct sqlexd sqlstm;

            sqlstm.sqlvsn = 10;
            sqlstm.arrsiz = 8;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.stmt = sq0005;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )167;
            sqlstm.selerr = (unsigned short)1;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)256;
            sqlstm.occurs = (unsigned int  )0;
            sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
            sqlstm.sqhstl[0] = (unsigned int  )12;
            sqlstm.sqhsts[0] = (         int  )0;
            sqlstm.sqindv[0] = (         void  *)0;
            sqlstm.sqinds[0] = (         int  )0;
            sqlstm.sqharm[0] = (unsigned int  )0;
            sqlstm.sqadto[0] = (unsigned short )0;
            sqlstm.sqtdso[0] = (unsigned short )0;
            sqlstm.sqhstv[1] = (         void  *)&codigo_bco;
            sqlstm.sqhstl[1] = (unsigned int  )22;
            sqlstm.sqhsts[1] = (         int  )0;
            sqlstm.sqindv[1] = (         void  *)0;
            sqlstm.sqinds[1] = (         int  )0;
            sqlstm.sqharm[1] = (unsigned int  )0;
            sqlstm.sqadto[1] = (unsigned short )0;
            sqlstm.sqtdso[1] = (unsigned short )0;
            sqlstm.sqhstv[2] = (         void  *)&cta_cte;
            sqlstm.sqhstl[2] = (unsigned int  )22;
            sqlstm.sqhsts[2] = (         int  )0;
            sqlstm.sqindv[2] = (         void  *)0;
            sqlstm.sqinds[2] = (         int  )0;
            sqlstm.sqharm[2] = (unsigned int  )0;
            sqlstm.sqadto[2] = (unsigned short )0;
            sqlstm.sqtdso[2] = (unsigned short )0;
            sqlstm.sqhstv[3] = (         void  *)&chequera;
            sqlstm.sqhstl[3] = (unsigned int  )22;
            sqlstm.sqhsts[3] = (         int  )0;
            sqlstm.sqindv[3] = (         void  *)0;
            sqlstm.sqinds[3] = (         int  )0;
            sqlstm.sqharm[3] = (unsigned int  )0;
            sqlstm.sqadto[3] = (unsigned short )0;
            sqlstm.sqtdso[3] = (unsigned short )0;
            sqlstm.sqhstv[4] = (         void  *)&numero_cheque;
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


            staora = 0;
            /* EXEC SQL FETCH C1 INTO :numero_cheque2; */ 

{
            struct sqlexd sqlstm;

            sqlstm.sqlvsn = 10;
            sqlstm.arrsiz = 8;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )202;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)256;
            sqlstm.occurs = (unsigned int  )0;
            sqlstm.sqhstv[0] = (         void  *)&numero_cheque2;
            sqlstm.sqhstl[0] = (unsigned int  )22;
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


            numero_cheque2.arr  [numero_cheque2.len] = '\0';
            
            if (sqlca.sqlcode) {
                fprintf (stderr, "1) Error leyendo control_chq2 (%d) codigo_emp=(%s) codigo_bco=(%s) cta_cte=(%s) numero_cheque=(%s)\n", sqlca.sqlcode, codigo_emp.arr, codigo_bco.arr, cta_cte.arr , numero_cheque.arr);
                break;
            }
            else {
/*
               strtri(numero_cheque2.arr);
               numero_cheque.len = strlen(numero_cheque2.arr); 
               numero_cheque.arr [numero_cheque2.len] = '\0';
*/               
               /* EXEC SQL select to_date(to_char(fecha,'yyyymmdd'),'yyyymmdd') as fecha, valor, nombre
                  into  :fecha, :valor_cheque, :nombre
	                from   cheques c, nits n
                  where  c.codigo_nit     = n.codigo_nit                   and
                         c.codigo_emp     = to_number(:codigo_emp)         and
                         c.codigo_bco     =          (:codigo_bco)         and
                         c.cta_cte        =          (:cta_cte)            and
                         c.cheque         =          (:numero_cheque2)     and
                         c.ano_mes       >= :ano_mes                       and
                         c.estado         not in ('3','4'); */ 

{
               struct sqlexd sqlstm;

               sqlstm.sqlvsn = 10;
               sqlstm.arrsiz = 8;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.stmt = "select to_date(to_char(fecha,'yyyymmdd'),'yyyy\
mmdd') fecha ,valor ,nombre into :b0,:b1,:b2  from cheques c ,nits n where (((\
(((c.codigo_nit=n.codigo_nit and c.codigo_emp=to_number(:b3)) and c.codigo_bco\
=:b4) and c.cta_cte=:b5) and c.cheque=:b6) and c.ano_mes>=:b7) and c.estado no\
t  in ('3','4'))";
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )221;
               sqlstm.selerr = (unsigned short)1;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)256;
               sqlstm.occurs = (unsigned int  )0;
               sqlstm.sqhstv[0] = (         void  *)&fecha;
               sqlstm.sqhstl[0] = (unsigned int  )82;
               sqlstm.sqhsts[0] = (         int  )0;
               sqlstm.sqindv[0] = (         void  *)0;
               sqlstm.sqinds[0] = (         int  )0;
               sqlstm.sqharm[0] = (unsigned int  )0;
               sqlstm.sqadto[0] = (unsigned short )0;
               sqlstm.sqtdso[0] = (unsigned short )0;
               sqlstm.sqhstv[1] = (         void  *)&valor_cheque;
               sqlstm.sqhstl[1] = (unsigned int  )8;
               sqlstm.sqhsts[1] = (         int  )0;
               sqlstm.sqindv[1] = (         void  *)0;
               sqlstm.sqinds[1] = (         int  )0;
               sqlstm.sqharm[1] = (unsigned int  )0;
               sqlstm.sqadto[1] = (unsigned short )0;
               sqlstm.sqtdso[1] = (unsigned short )0;
               sqlstm.sqhstv[2] = (         void  *)&nombre;
               sqlstm.sqhstl[2] = (unsigned int  )102;
               sqlstm.sqhsts[2] = (         int  )0;
               sqlstm.sqindv[2] = (         void  *)0;
               sqlstm.sqinds[2] = (         int  )0;
               sqlstm.sqharm[2] = (unsigned int  )0;
               sqlstm.sqadto[2] = (unsigned short )0;
               sqlstm.sqtdso[2] = (unsigned short )0;
               sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
               sqlstm.sqhstl[3] = (unsigned int  )12;
               sqlstm.sqhsts[3] = (         int  )0;
               sqlstm.sqindv[3] = (         void  *)0;
               sqlstm.sqinds[3] = (         int  )0;
               sqlstm.sqharm[3] = (unsigned int  )0;
               sqlstm.sqadto[3] = (unsigned short )0;
               sqlstm.sqtdso[3] = (unsigned short )0;
               sqlstm.sqhstv[4] = (         void  *)&codigo_bco;
               sqlstm.sqhstl[4] = (unsigned int  )22;
               sqlstm.sqhsts[4] = (         int  )0;
               sqlstm.sqindv[4] = (         void  *)0;
               sqlstm.sqinds[4] = (         int  )0;
               sqlstm.sqharm[4] = (unsigned int  )0;
               sqlstm.sqadto[4] = (unsigned short )0;
               sqlstm.sqtdso[4] = (unsigned short )0;
               sqlstm.sqhstv[5] = (         void  *)&cta_cte;
               sqlstm.sqhstl[5] = (unsigned int  )22;
               sqlstm.sqhsts[5] = (         int  )0;
               sqlstm.sqindv[5] = (         void  *)0;
               sqlstm.sqinds[5] = (         int  )0;
               sqlstm.sqharm[5] = (unsigned int  )0;
               sqlstm.sqadto[5] = (unsigned short )0;
               sqlstm.sqtdso[5] = (unsigned short )0;
               sqlstm.sqhstv[6] = (         void  *)&numero_cheque2;
               sqlstm.sqhstl[6] = (unsigned int  )22;
               sqlstm.sqhsts[6] = (         int  )0;
               sqlstm.sqindv[6] = (         void  *)0;
               sqlstm.sqinds[6] = (         int  )0;
               sqlstm.sqharm[6] = (unsigned int  )0;
               sqlstm.sqadto[6] = (unsigned short )0;
               sqlstm.sqtdso[6] = (unsigned short )0;
               sqlstm.sqhstv[7] = (         void  *)&ano_mes;
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
                   fprintf (stderr, "2) Error leyendo Cheques (%d) codigo_emp=(%s) codigo_bco=(%s) cta_cte=(%s) numero_cheque2=(%s) ano_mes=(%s)\n", sqlca.sqlcode, codigo_emp.arr, codigo_bco.arr, cta_cte.arr , numero_cheque2.arr, ano_mes.arr);
                   break;
               } 
            }
        }
        else {
         /* EXEC SQL select to_date(to_char(fecha,'yyyymmdd'),'yyyymmdd') as fecha, valor, nombre
                  into  :fecha, :valor_cheque, :nombre
	                from   cheques c, nits n
                  where  c.codigo_nit     = n.codigo_nit                   and
                         c.codigo_emp     = to_number(:codigo_emp)         and
                         c.codigo_bco     =          (:codigo_bco)         and
                         c.cta_cte        =          (:cta_cte)            and
                         c.cheque         =          (:numero_cheque)      and
                         c.ano_mes       >= :ano_mes                       and
                         c.estado         not in ('3','4'); */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 8;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = "select to_date(to_char(fecha,'yyyymmdd'),'yyyymmdd')\
 fecha ,valor ,nombre into :b0,:b1,:b2  from cheques c ,nits n where ((((((c.c\
odigo_nit=n.codigo_nit and c.codigo_emp=to_number(:b3)) and c.codigo_bco=:b4) \
and c.cta_cte=:b5) and c.cheque=:b6) and c.ano_mes>=:b7) and c.estado not  in \
('3','4'))";
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )268;
         sqlstm.selerr = (unsigned short)1;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&fecha;
         sqlstm.sqhstl[0] = (unsigned int  )82;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)&valor_cheque;
         sqlstm.sqhstl[1] = (unsigned int  )8;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&nombre;
         sqlstm.sqhstl[2] = (unsigned int  )102;
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
         sqlstm.sqhstl[3] = (unsigned int  )12;
         sqlstm.sqhsts[3] = (         int  )0;
         sqlstm.sqindv[3] = (         void  *)0;
         sqlstm.sqinds[3] = (         int  )0;
         sqlstm.sqharm[3] = (unsigned int  )0;
         sqlstm.sqadto[3] = (unsigned short )0;
         sqlstm.sqtdso[3] = (unsigned short )0;
         sqlstm.sqhstv[4] = (         void  *)&codigo_bco;
         sqlstm.sqhstl[4] = (unsigned int  )22;
         sqlstm.sqhsts[4] = (         int  )0;
         sqlstm.sqindv[4] = (         void  *)0;
         sqlstm.sqinds[4] = (         int  )0;
         sqlstm.sqharm[4] = (unsigned int  )0;
         sqlstm.sqadto[4] = (unsigned short )0;
         sqlstm.sqtdso[4] = (unsigned short )0;
         sqlstm.sqhstv[5] = (         void  *)&cta_cte;
         sqlstm.sqhstl[5] = (unsigned int  )22;
         sqlstm.sqhsts[5] = (         int  )0;
         sqlstm.sqindv[5] = (         void  *)0;
         sqlstm.sqinds[5] = (         int  )0;
         sqlstm.sqharm[5] = (unsigned int  )0;
         sqlstm.sqadto[5] = (unsigned short )0;
         sqlstm.sqtdso[5] = (unsigned short )0;
         sqlstm.sqhstv[6] = (         void  *)&numero_cheque;
         sqlstm.sqhstl[6] = (unsigned int  )22;
         sqlstm.sqhsts[6] = (         int  )0;
         sqlstm.sqindv[6] = (         void  *)0;
         sqlstm.sqinds[6] = (         int  )0;
         sqlstm.sqharm[6] = (unsigned int  )0;
         sqlstm.sqadto[6] = (unsigned short )0;
         sqlstm.sqtdso[6] = (unsigned short )0;
         sqlstm.sqhstv[7] = (         void  *)&ano_mes;
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


/*
                         c.fecha         >=   to_date(20130101,'yyyymmdd') and
*/
         if (sqlca.sqlcode)
             fprintf (stderr, "2) Error leyendo Cheques (%d) codigo_emp=(%s) codigo_bco=(%s) cta_cte=(%s) numero_cheque=(%s)\n", sqlca.sqlcode, codigo_emp.arr, codigo_bco.arr, cta_cte.arr , numero_cheque.arr);
        }
         fecha.arr  [11]  = '\0';
         nombre.arr [nombre.len] = '\0';

         if (!strcmp(codigo_bco.arr,"01"))
             imprime_01();
         else if (!strcmp(codigo_bco.arr,"05"))
                  imprime_05();
              else if (!strcmp(codigo_bco.arr,"06"))
                       imprime_06();
                   else if (!strcmp(codigo_bco.arr,"07"))
                            imprime_07();
                        else if (!strcmp(codigo_bco.arr,"13"))
                                 if (!strcmp(codigo_emp.arr,"16"))
                                    imprime_13a();
                                 else imprime_13();
                             else if (!strcmp(codigo_bco.arr,"14"))
                                      imprime_14();
                                  else if (!strcmp(codigo_bco.arr,"18"))
                                           imprime_18();
                                       else if (!strcmp(codigo_bco.arr,"23"))
                                                imprime_23();
                                            else if (!strcmp(codigo_bco.arr,"30"))
                                                     imprime_30();
                                            else if (!strcmp(codigo_bco.arr,"34"))
                                                     imprime_34();
                                            else if (!strcmp(codigo_bco.arr,"51"))
                                                     imprime_51();
                                            else if (!strcmp(codigo_bco.arr,"60"))
                                                     imprime_60();
    }
    fprintf(fp,"%s%s\r",line_feed6,nql_off);
    sprintf(ultimo.arr,"%8.0f",ult_grabado);
    ultimo.len =         strlen(ultimo.arr);
    /* C3 */
    /* EXEC SQL update control_chq
	     set ult_listado   = to_number(:ultimo)
             where codigo_emp  = to_number(:codigo_emp)   and
                   codigo_bco  = to_number(:codigo_bco)   and
                   cta_cte     =          (:cta_cte); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update control_chq  set ult_listado=to_number(:b0) where \
((codigo_emp=to_number(:b1) and codigo_bco=to_number(:b2)) and cta_cte=:b3)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )315;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&ultimo;
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
    sqlstm.sqhstv[2] = (         void  *)&codigo_bco;
    sqlstm.sqhstl[2] = (unsigned int  )22;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&cta_cte;
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



/*****************************************
** COMMIT LOS CAMBIOS A LA BASE DE DATOS *
******************************************/

    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )346;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


//    EXEC SQL ROLLBACK WORK RELEASE;

    cierre_impresora();
    exit   (0);
}

/************************************
* IMPRIME_01()
*    Imprime chque BANCO BOGOTA (01)
*/

void imprime_01()
{
    char wcadena[10];

    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    numero_fecha(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"\n\n\n\n\n%39s%-15s"," ",cadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"%-15s\n\n",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%5s%-45s\n\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%8s%-53s\n\n"," ",cadena2);
       fprintf (fp,"%5s%-60s\n"," ",cadena);
    }
    else  fprintf (fp,"%8s%-45s\n\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

/************************************
* IMPRIME_05()
*    Imprime chque BANCO CAFETERO (05)
*/

void imprime_05()
{
    char wcadena[10];
    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    numero_fecha(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"\n\n\n%38s%-15s"," ",cadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"%-15s\n\n",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%12s%-45s\n\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%12s%-53s\n\n\n"," ",cadena2);
       fprintf (fp,"%5s%-60s\n\n\n"," ",cadena);
    }
    else  fprintf (fp,"%12s%-45s\n\n\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

/************************************
* IMPRIME_05_P()
*    Imprime chque BANCO CAFETERO (05)
*/

void imprime_05_p()
{
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"\n\n\n%42s%-19s\n\n\n"," ",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%12s%-45s\n\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%12s%-53s\n\n",elite,cadena2);
       fprintf (fp,"%5s%-60s\n\n\n\n"," ",cadena);
    }
    else  fprintf (fp,"%12s%-45s\n\n\n\n\n"," ",cadena);
    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    fecha_cheques(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"%s%9s%17s",diezcpi,"B/quilla,",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 13;
}

/************************************
* IMPRIME_06()
*    Imprime chque BANCO BANCOQUIA (06)
*/

void imprime_06()
{
    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    numero_fecha(wcadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"\n\n\n%39s%-13s%-15s\n\n\n"," ",wcadena,fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%12s%-45s\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%12s%-53s\n\n"," ",cadena2);
       fprintf (fp,"%5s%-60s\n\n\n"," ",cadena);
    }
    else fprintf (fp,"%12s%-45s\n\n\n\n\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

/************************************
* IMPRIME_06_p()
*    Imprime chque BANCO BANCOQUIA (06)
*/

void imprime_06_p()
{
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"\n\n\n\n%44s%-15s\n\n"," ",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%8s%-45s\n\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%8s%-53s\n\n"," ",cadena2);
       fprintf (fp,"%1s%-60s\n\n\n"," ",cadena);
    }
    else  fprintf (fp,"%8s%-45s\n\n\n\n\n"," ",cadena);
    strcpy  (cadena,fecha.arr);
    strcpy (wcadena, cadena);
    fecha_cheques(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"%6s%20s","B/Q,",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

/************************************
* IMPRIME_07()
*    Imprime chque BANCO CAFETERO (07)
*/

void imprime_07()
{
    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    numero_fecha(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"\n\n\n\n%39s%-15s"," ",cadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"%-15s\n\n\n",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%12s%-45s\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%12s%-53s\n\n"," ",cadena2);
       fprintf (fp,"%5s%-60s\n\n\n\n"," ",cadena);
    }
    else  fprintf (fp,"%12s%-45s\n\n\n\n\n\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

/************************************
* IMPRIME_13()
*    Imprime chque BANCO GANADARO (13)
*/

void imprime_13()
{
    char wcadena[10];
    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    numero_fecha(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"\n\n\n%38s%-15s"," ",cadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"%-15s\n\n",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%12s%-45s\n\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%12s%-53s\n\n\n"," ",cadena2);
       fprintf (fp,"%5s%-60s\n\n\n"," ",cadena);
    }
    else  fprintf (fp,"%12s%-45s\n\n\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

/************************************
* IMPRIME_13a()
*    Imprime chque BANCO GANADARO CARTAGENA (13)
*/

void imprime_13a()
{
    char wcadena[10];
    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    numero_fecha(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"\n\n\n\n%38s%-16s"," ",cadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"%-15s\n\n",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%12s%-45s\n\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%12s%-53s\n\n\n"," ",cadena2);
       fprintf (fp,"%5s%-60s\n\n\n"," ",cadena);
    }
    else  fprintf (fp,"%12s%-45s\n\n\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

/************************************
* IMPRIME_14()
*    Imprime chque BANCO DE CREDITO (14)
*/

void imprime_14()
{
    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    fecha_cheques(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"\n\n\n\n\n%10s%20s"," ",cadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"%23s%-15s\n\n"," ",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%11s%-45s\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%11s%-53s\n\n"," ",cadena2);
       fprintf (fp,"%4s%-60s\n"," ",cadena);
    }
    else  fprintf (fp,"%11s%-45s\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

/************************************
* IMPRIME_18()
*    Imprime chque BANCO CALDAS (18)
*/

void imprime_18()
{
    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    numero_fecha(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"\n\n\n%38s%10s   "," ",cadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"%-15s\n\n\n",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%11s%-45s\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%10s%-53s\n\n"," ",cadena2);
       fprintf (fp,"%3s%-60s\n"," ",cadena);
    }
    else  fprintf (fp,"%10s%-45s\n\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

/************************************
* IMPRIME_23()
*    Imprime chque BANCO UNION COLOMBIANO (23)
*/

void imprime_23()
{
    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    numero_fecha(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"\n\n\n\n%39s%-15s"," ",cadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"%-15s\n\n",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%12s%-45s\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%10s%-53s\n\n"," ",cadena2);
       fprintf (fp,"%7s%-60s\n"," ",cadena);
    }
    else  fprintf (fp,"%10s%-45s\n\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

/************************************
* IMPRIME_30()
*    Imprime chque BANCO COOPERATIVO (30)
*/

void imprime_30()
{
    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    numero_fecha(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"\n\n\n%41s%-12s"," ",cadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"%-19s\n",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"\n%12s%-45s\n\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%9s%-53s\n\n\n"," ",cadena2);
       fprintf (fp,"%4s%-60s\n"," ",cadena);
    }
    else  fprintf (fp,"%12s%-45s\n\n\n\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

void imprime_34()
{
    char wcadena[10];

    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    numero_fecha(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"\n\n\n%39s%-15s"," ",cadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"%s%-15s\n\n\n",enfatizado_on,fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%s%13s%-45s\n\n",enfatizado_off," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%13s%-53s\n\n"," ",cadena2);
       fprintf (fp,"%5s%-60s\n"," ",cadena);
    }
    else  fprintf (fp,"%8s%-45s\n\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

void imprime_51()
{
    char wcadena[10];
    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    numero_fecha(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"\n\n\n%39s%-15s"," ",cadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"%s%-15s\n\n\n",enfatizado_on,fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%s%13s%-45s\n\n",enfatizado_off," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%13s%-53s\n\n"," ",cadena2);
       fprintf (fp,"%5s%-60s\n"," ",cadena);
    }
    else  fprintf (fp,"%8s%-45s\n\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 8;
}

/************************************
* IMPRIME_60()
*    Imprime chque BANCO PICHINCHA (60)
*/

void imprime_60()
{
    char wcadena[10];

    strcpy  (cadena,fecha.arr);
    strcpy  (wcadena, cadena);
    numero_fecha(wcadena);
    strcpy  (cadena, wcadena);
    fprintf (fp,"\n\n\n%39s%-15s"," ",cadena);
    sprintf (cadena,"%9.2f",valor_cheque);
    fprintf (fp,"%-15s\n\n",fmtnum("$$$,$$$,$$z.zz",cadena,r_t));
    fprintf (fp,"%5s%-45s\n\n\n"," ",nombre.arr);
    strcpy(cadena2,"");
    ver_montolet();
    if (strcmp(cadena2,"")) {
       fprintf (fp,"%8s%-53s\n\n"," ",cadena2);
       fprintf (fp,"%5s%-60s\n"," ",cadena);
    }
    else  fprintf (fp,"%8s%-45s\n\n"," ",cadena);
    fprintf(fp,"%s\r",salte_pagina);
    con_lin = 7;
}


void ver_montolet()
{
    int i=0,j;
    monletr(valor_cheque,cadena);
    if (strlen(cadena) > 53) {
       for (i=53;i>=0;i--) {
            if (cadena[i]==' ')
                break;
       }
       strcpy(cadena2,cadena);
       strorg(cadena2,1,i);
       for (j=i;j<=53;j++) {
            cadena2[j]='-';
       }
       cadena2[j]='\0';
       strorg(cadena,i+1,strlen(cadena)-i);
    }

}
