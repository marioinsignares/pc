
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
    ".\\actifdep.pc"
};


static const unsigned long sqlctx = 1038428929;


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
   unsigned char    *sqhstv[12];
   unsigned long    sqhstl[12];
	    short   *sqindv[12];
   unsigned long    sqharm[12];
   unsigned long     *sqharc[12];
} sqlstm = {8,12};

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

 static const char *sq0004 = 
"select inf  from infacu            ";
 static const char *sq0005 = 
"select (cta2_dep||'01') ,(cta3_dep||'01') ,monto_m_dep ,last_day(to_date(:b0\
,'yymm')) ,codigo  from activos where codigo_emp=:b1 order by cta1_dep        \
    ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,140,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,34,0,4,164,0,1,0,0,1,0,2,3,0,0,
46,0,0,3,140,0,4,195,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
76,0,0,4,35,0,9,208,0,0,0,0,1,0,
90,0,0,4,0,0,13,215,0,1,0,0,1,0,2,9,0,0,
108,0,0,4,0,0,15,229,0,0,0,0,1,0,
122,0,0,5,158,0,9,238,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
144,0,0,5,0,0,15,244,0,0,0,0,1,0,
158,0,0,6,0,0,30,246,0,0,0,0,1,0,
172,0,0,7,134,0,4,257,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
202,0,0,8,146,0,2,269,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
228,0,0,9,114,0,2,279,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
254,0,0,10,138,0,4,293,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
284,0,0,11,71,0,3,306,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
314,0,0,12,117,0,5,314,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
344,0,0,13,134,0,4,324,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
374,0,0,14,71,0,3,334,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
404,0,0,15,117,0,5,340,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
434,0,0,5,0,0,13,347,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,9,0,
0,
472,0,0,16,110,0,3,353,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
506,0,0,17,78,0,3,395,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
568,0,0,18,78,0,3,417,0,12,12,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
630,0,0,5,0,0,13,425,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,9,0,
0,
668,0,0,19,99,0,4,437,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,9,
0,0,
};


/*****************************************************************
* ACTIFDEP.C Version 1.0 - Rev 1.2 - Nov. 30/97.
*
* actifdep.c. Apropiacion para Depreciaciones.
*
* Uso: deprecia codigo_emp aamm device copias userid/password\n");
*
* Martin A. Toloza L. Creado en Noviembre 27 de 1.997.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <math.h>

double redondo();
void hacer_asiento();
void ver_inf();


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

                                 /* Infacu (C2) */
/* VARCHAR vecinf      [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecinf[20];

                                 /* Movto_C (C3) */
/* VARCHAR ano_mesf    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesf;

/* VARCHAR comprobanteb[07]; */ 
struct { unsigned short len; unsigned char arr[7]; } comprobanteb;

/* VARCHAR consecutivob[07]; */ 
struct { unsigned short len; unsigned char arr[7]; } consecutivob;

/* VARCHAR fechab      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechab;

                                 /* Movto_D (C4) */
/* VARCHAR secuenciab  [7]; */ 
struct { unsigned short len; unsigned char arr[7]; } secuenciab;

/* VARCHAR cuentab     [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuentab;

/* VARCHAR infa        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infa;

/* VARCHAR infb        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infb;

/* VARCHAR infc        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infc;

/* VARCHAR infd        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } infd;

/* VARCHAR codigo_nitb [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nitb;

/* VARCHAR valor_debb  [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } valor_debb;

/* VARCHAR valor_creb  [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } valor_creb;

char    inf         [5][14];
                                 /* Control_Mes (C5) */
double  consecutivo;
/* VARCHAR fuenteb     [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } fuenteb;

double  consecutivo13;
                                 /* Acumulados (C6) */
/* VARCHAR cuenta_db   [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuenta_db;

/* VARCHAR cuenta_cr   [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } cuenta_cr;

double  valor;
/* VARCHAR fecha_asto  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_asto;

float   ptaje;
/* VARCHAR codigo      [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo;

/* VARCHAR ano_mesi    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR ano_mes     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR codigox     [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } codigox;

                                 /* Plan (C8) */
/* VARCHAR veca        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } veca;

/* VARCHAR vecb        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecb;

/* VARCHAR vecc        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecc;

/* VARCHAR vecd        [14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecd;

char    vecplan     [5][14];

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

				     /* Parametros de comunicacion con ORACLE */
                                            /* Variables globales del usuario */
char    pagina[4];                                   /* Contador de Paginas */
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                  /* Contador de Lineas  */
int     cl;
int     staora     =0;
int     traidos    =0;
int     num_ret    =0;
int     loop_2     =0;
double  secuencia  =0;
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[100];
double  nitn;
int     diai;
int     mesx, mesi, mesf;
int     anox, anoi, anof;
int     i, j, k;
double  valor_deb;
double  valor_cre;
char    cadena[100];
char    login[30];
char    copias[5];
int     codigo_nit;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 8)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp aaaamm copias pagina device nro_cpbte userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("      device : s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (copias,           argv[3]);
       strcpy (pagina,           argv[4]);
       strcpy (device,           argv[5]);
       strlow (device);
       strcpy (comprobanteb.arr, argv[6]);
       comprobanteb.len =        strlen(comprobanteb.arr);

    if (!strpos ("/", argv[7]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[7]);
    uid.len =           strlen(uid.arr);

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

/*********************************************
 * Procesar una sentencia SQL (oexec).       *
 *********************************************/
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
    strcpy (ano_mes.arr,   argv[2]);
    ano_mes.len = strlen(ano_mes.arr);
    strcpy (cadena,argv[2]);
    strorg (cadena,1,4);
    anoi         =        atoi(cadena);
    strcpy (cadena,argv[2]);
    strorg (cadena,5,2);
    mesi         =        atoi(cadena);
    sprintf (ano_mesi.arr,"%04d%02d",anoi-1,13);
    ano_mesi.len = strlen(ano_mesi.arr);

    anof=anoi;
    mesf=mesi+1;
    if (mesi==12) {
        sprintf (ano_mes.arr, "%d%02d",anoi,13);
        ano_mes.len  =        strlen(ano_mes.arr);
        sprintf (ano_mesi.arr,"%d%02d",anoi,13);
        ano_mesi.len =        strlen(ano_mesi.arr);
        anof=anoi+1;
        mesf=1;
    }
    sprintf (ano_mesf.arr,"%d%02d",anof,mesf);
    ano_mesf.len =       strlen(ano_mesf.arr);

    /* EXEC SQL select n.nombre, n.nit, n.digito
                    into :nomb_emp, :nit, :digito
             from   nits n, empresas e
             where  n.codigo_nit = e.codigo_nit and
                    e.codigo_emp = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = "select n.nombre ,n.nit ,n.digito into :b0,:b1,:b2  from n\
its n ,empresas e where (n.codigo_nit=e.codigo_nit and e.codigo_emp=to_number(\
:b3))";
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
    sqlstm.sqhstv[1] = (unsigned char  *)&nit;
    sqlstm.sqhstl[1] = (unsigned long  )8;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&digito;
    sqlstm.sqhstl[2] = (unsigned long  )4;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[3] = (unsigned long  )5;
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
        fprintf (stderr, "Error leyendo Empresa (%d)\n", sqlca.sqlcode);

    /* EXEC SQL DECLARE C2 CURSOR FOR
             select inf
             from   infacu; */ 


    /* EXEC SQL OPEN C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = sq0004;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)76;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = 0;
    traidos = 0;
    num_ret = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C2 INTO :vecinf; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 4;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)90;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)vecinf;
          sqlstm.sqhstl[0] = (unsigned long  )16;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqharc[0] = (unsigned long   *)0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



          if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
             fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);

          staora  = sqlca.sqlcode;
          traidos = sqlca.sqlerrd[2];

          for (loop_2 = 0; loop_2 < (traidos - num_ret); loop_2++) {
              vecinf[loop_2].arr  [vecinf[loop_2].len] = '\0';
          }
          num_ret = traidos;
    }
    k = traidos;
    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)108;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL DECLARE C6 CURSOR FOR
             select cta2_dep||'01', cta3_dep||'01', monto_m_dep,
                    last_day(to_date(:ano_mesf,'yymm')), codigo
             from  activos
             where codigo_emp = :codigo_emp
             order by cta1_dep; */ 


    /* EXEC SQL OPEN C6; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = sq0005;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)122;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&ano_mesf;
    sqlstm.sqhstl[0] = (unsigned long  )22;
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



    hacer_asiento();

    cierre_impresora();

    /* EXEC SQL CLOSE C6; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)144;
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
    sqlstm.offset = (unsigned short)158;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    exit   (0);
}

void hacer_asiento()
{
  strcpy(fuenteb.arr,"13");
  fuenteb.len = strlen(fuenteb.arr);

/* Lee consecutivo de control_mes Fte 13 Cns ultimo Asiento Aj x Depreciacion */
  /* EXEC SQL select consecutivo   into :consecutivo13
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesf)      and
                 codigo_emp   = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 4;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3))";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)172;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo13;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&fuenteb;
  sqlstm.sqhstl[1] = (unsigned long  )5;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesf;
  sqlstm.sqhstl[2] = (unsigned long  )22;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[3] = (unsigned long  )5;
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
      fprintf (stderr, "Error leyendo Control_Mes (%d)\n", sqlca.sqlcode);
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo13);
        consecutivob.len = strlen(consecutivob.arr);
 
        /* EXEC SQL delete from movto_c 
                 where codigo_emp   = to_number(:codigo_emp)   and
                       comprobante  = to_number(:comprobanteb) and
                       clase        = 'CD'                     and
                       tipo         = '5'                      and
                       ano_mes      = to_number(:ano_mesf); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 4;
        sqlstm.stmt = "delete from movto_c  where ((((codigo_emp=to_number(:\
b0) and comprobante=to_number(:b1)) and clase='CD') and tipo='5') and ano_mes=\
to_number(:b2))";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)202;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned long  )5;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&comprobanteb;
        sqlstm.sqhstl[1] = (unsigned long  )9;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesf;
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



        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
            fprintf (stderr, "Error leyendo Movto_C (%d)\n", sqlca.sqlcode);

        /* EXEC SQL delete from movto_d
                 where codigo_emp   = to_number(:codigo_emp)   and
                       ano_mes      = to_number(:ano_mesf)     and
                       consecutivo  = to_number(:consecutivob); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 4;
        sqlstm.stmt = "delete from movto_d  where ((codigo_emp=to_number(:b0\
) and ano_mes=to_number(:b1)) and consecutivo=to_number(:b2))";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)228;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned long  )5;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesf;
        sqlstm.sqhstl[1] = (unsigned long  )22;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
        sqlstm.sqhstl[2] = (unsigned long  )9;
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
            fprintf (stderr, "Error leyendo Movto_D (%d)\n", sqlca.sqlcode);
  }

  strcpy(fuenteb.arr,"08");
  fuenteb.len = strlen(fuenteb.arr);

  /* Lee consecutivo de Control_mes Fte 08 sgte consecutivo */

  /* EXEC SQL select consecutivo+1 into :consecutivo
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesf)      and
                 codigo_emp   = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 4;
  sqlstm.stmt = "select (consecutivo+1) into :b0  from control_mes where ((f\
uente=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3)\
)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)254;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&fuenteb;
  sqlstm.sqhstl[1] = (unsigned long  )5;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesf;
  sqlstm.sqhstl[2] = (unsigned long  )22;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[3] = (unsigned long  )5;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes 08 (%d)\n", sqlca.sqlcode);
      consecutivo=1;
      sprintf(consecutivob.arr,"%5.0f",consecutivo);
      consecutivob.len = strlen(consecutivob.arr);
               /* Inserta en Control_Mes Fte 08 si no existe (C11) */
      /* EXEC SQL insert into control_mes
               values (:fuenteb, :ano_mesf, 'CONTROL DEPRECIACION',
                       :consecutivob, :codigo_emp); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 4;
      sqlstm.stmt = "insert into control_mes values (:b0,:b1,'CONTROL DEPREC\
IACION',:b2,:b3)";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)284;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&fuenteb;
      sqlstm.sqhstl[0] = (unsigned long  )5;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesf;
      sqlstm.sqhstl[1] = (unsigned long  )22;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
      sqlstm.sqhstl[2] = (unsigned long  )9;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned long  )5;
      sqlstm.sqindv[3] = (         short *)0;
      sqlstm.sqharm[3] = (unsigned long )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


     }
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo);
        consecutivob.len = strlen(consecutivob.arr);
               /* Actualiza Cns de Fte 08 en control_mes (C12) */
        /* EXEC SQL update control_mes
                 set    consecutivo = :consecutivob
                 where codigo_emp   = to_number(:codigo_emp)    and
                       ano_mes      = to_number(:ano_mesf)      and
                       fuente       = :fuenteb; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 4;
        sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((codig\
o_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3)";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)314;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&consecutivob;
        sqlstm.sqhstl[0] = (unsigned long  )9;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[1] = (unsigned long  )5;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesf;
        sqlstm.sqhstl[2] = (unsigned long  )22;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&fuenteb;
        sqlstm.sqhstl[3] = (unsigned long  )5;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  }

  strcpy(fuenteb.arr,"13");
  fuenteb.len = strlen(fuenteb.arr);

  /* EXEC SQL select consecutivo   into :consecutivo13
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesf)      and
                 codigo_emp   = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 4;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3))";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)344;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo13;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&fuenteb;
  sqlstm.sqhstl[1] = (unsigned long  )5;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesf;
  sqlstm.sqhstl[2] = (unsigned long  )22;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[3] = (unsigned long  )5;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes 12 (%d)\n", sqlca.sqlcode);
               /* Inserta en Control_Mes Fte 13 si no existe (C11) */
      /* EXEC SQL insert into control_mes
               values (:fuenteb, :ano_mesf, 'CONTROL DEPRECIACION',
                       :consecutivob, :codigo_emp); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 4;
      sqlstm.stmt = "insert into control_mes values (:b0,:b1,'CONTROL DEPREC\
IACION',:b2,:b3)";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)374;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&fuenteb;
      sqlstm.sqhstl[0] = (unsigned long  )5;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesf;
      sqlstm.sqhstl[1] = (unsigned long  )22;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
      sqlstm.sqhstl[2] = (unsigned long  )9;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned long  )5;
      sqlstm.sqindv[3] = (         short *)0;
      sqlstm.sqharm[3] = (unsigned long )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


     }
  else {
               /* Actualiza Cns de Fte 13 en control_mes (C12) */
        /* EXEC SQL update control_mes
                 set    consecutivo = :consecutivob
                 where codigo_emp   = to_number(:codigo_emp)    and
                       ano_mes      = to_number(:ano_mesf)      and
                       fuente       = :fuenteb; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 4;
        sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((codig\
o_emp=to_number(:b1) and ano_mes=to_number(:b2)) and fuente=:b3)";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)404;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&consecutivob;
        sqlstm.sqhstl[0] = (unsigned long  )9;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[1] = (unsigned long  )5;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesf;
        sqlstm.sqhstl[2] = (unsigned long  )22;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&fuenteb;
        sqlstm.sqhstl[3] = (unsigned long  )5;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  }

  /* EXEC SQL FETCH C6 INTO :cuenta_db, :cuenta_cr, :valor, :fecha_asto,
                         :ptaje, :codigo; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 6;
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)434;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&cuenta_db;
  sqlstm.sqhstl[0] = (unsigned long  )17;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&cuenta_cr;
  sqlstm.sqhstl[1] = (unsigned long  )17;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&valor;
  sqlstm.sqhstl[2] = (unsigned long  )8;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&fecha_asto;
  sqlstm.sqhstl[3] = (unsigned long  )22;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&ptaje;
  sqlstm.sqhstl[4] = (unsigned long  )4;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&codigo;
  sqlstm.sqhstl[5] = (unsigned long  )5;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  fecha_asto.arr  [fecha_asto.len] = '\0';
  strcpy(fechab.arr,fecha_asto.arr);
  fechab.len = strlen(fechab.arr);

  /* EXEC SQL insert into movto_c
           values(:codigo_emp, :ano_mesf, :comprobanteb, :consecutivob, 'CD',
                  'APROPIACION PARA DEPRECIACIONES',:fechab,'5', '0','','','','',''); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 6;
  sqlstm.stmt = "insert into movto_c values (:b0,:b1,:b2,:b3,'CD','APROPIACI\
ON PARA DEPRECIACIONES',:b4,'5','0','','','','','')";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)472;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned long  )5;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesf;
  sqlstm.sqhstl[1] = (unsigned long  )22;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&comprobanteb;
  sqlstm.sqhstl[2] = (unsigned long  )9;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&consecutivob;
  sqlstm.sqhstl[3] = (unsigned long  )9;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&fechab;
  sqlstm.sqhstl[4] = (unsigned long  )22;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
      fprintf (stderr, "Error leyendo Movto_C (%d)\n", sqlca.sqlcode);

  staora  = 0;
  while (staora == 0) {

        cuenta_db.arr  [cuenta_db.len]  = '\0';
        cuenta_cr.arr  [cuenta_cr.len]  = '\0';
        fecha_asto.arr [fecha_asto.len] = '\0';
        codigo.arr     [codigo.len]     = '\0';
        codigo.len  =  strlen(codigo.arr);
        secuencia++;

        sprintf(secuenciab.arr,"%6.0f",secuencia);
        secuenciab.len = strlen(secuenciab.arr);
        if (codigo_nit==0)
           strcpy(codigo_nitb.arr,"");
        else sprintf(codigo_nitb.arr,"%5d",codigo_nit);
        codigo_nitb.len = strlen(codigo_nitb.arr);
        if (valor<0)
           valor=valor*-1;
        valor=valor*(ptaje/12)/100;
        valor=redondo(valor);
        if (valor> 0) {
           strcpy(cuentab.arr,cuenta_db.arr);
           cuentab.len = strlen(cuentab.arr);
           strcpy(codigox.arr,cuentab.arr);
           codigox.len = strlen(codigox.arr);
           ver_inf();
           sprintf(valor_debb.arr,"%10.2f",valor);
           valor_debb.len = strlen(valor_debb.arr);
/*
           valor_debb.arr[strpos(".",valor_debb.arr)-1] = ',';
*/
           valor_debb.len = strlen(valor_debb.arr);
           strcpy (valor_creb.arr,"");
           valor_creb.len = strlen(valor_creb.arr);
                                          /* Graba en movto_d el Debito (C4) */
           /* EXEC SQL insert into movto_d
                    values(:codigo_emp, :ano_mesf, :consecutivob, :secuenciab,
                           :cuentab, :infa, :infb, :infc, :infd,
                           :codigo_nitb, :valor_debb, :valor_creb); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 12;
           sqlstm.stmt = "insert into movto_d values (:b0,:b1,:b2,:b3,:b4,:b\
5,:b6,:b7,:b8,:b9,:b10,:b11)";
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)506;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
           sqlstm.sqhstl[0] = (unsigned long  )5;
           sqlstm.sqindv[0] = (         short *)0;
           sqlstm.sqharm[0] = (unsigned long )0;
           sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesf;
           sqlstm.sqhstl[1] = (unsigned long  )22;
           sqlstm.sqindv[1] = (         short *)0;
           sqlstm.sqharm[1] = (unsigned long )0;
           sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
           sqlstm.sqhstl[2] = (unsigned long  )9;
           sqlstm.sqindv[2] = (         short *)0;
           sqlstm.sqharm[2] = (unsigned long )0;
           sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
           sqlstm.sqhstl[3] = (unsigned long  )9;
           sqlstm.sqindv[3] = (         short *)0;
           sqlstm.sqharm[3] = (unsigned long )0;
           sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
           sqlstm.sqhstl[4] = (unsigned long  )17;
           sqlstm.sqindv[4] = (         short *)0;
           sqlstm.sqharm[4] = (unsigned long )0;
           sqlstm.sqhstv[5] = (unsigned char  *)&infa;
           sqlstm.sqhstl[5] = (unsigned long  )16;
           sqlstm.sqindv[5] = (         short *)0;
           sqlstm.sqharm[5] = (unsigned long )0;
           sqlstm.sqhstv[6] = (unsigned char  *)&infb;
           sqlstm.sqhstl[6] = (unsigned long  )16;
           sqlstm.sqindv[6] = (         short *)0;
           sqlstm.sqharm[6] = (unsigned long )0;
           sqlstm.sqhstv[7] = (unsigned char  *)&infc;
           sqlstm.sqhstl[7] = (unsigned long  )16;
           sqlstm.sqindv[7] = (         short *)0;
           sqlstm.sqharm[7] = (unsigned long )0;
           sqlstm.sqhstv[8] = (unsigned char  *)&infd;
           sqlstm.sqhstl[8] = (unsigned long  )16;
           sqlstm.sqindv[8] = (         short *)0;
           sqlstm.sqharm[8] = (unsigned long )0;
           sqlstm.sqhstv[9] = (unsigned char  *)&codigo_nitb;
           sqlstm.sqhstl[9] = (unsigned long  )8;
           sqlstm.sqindv[9] = (         short *)0;
           sqlstm.sqharm[9] = (unsigned long )0;
           sqlstm.sqhstv[10] = (unsigned char  *)&valor_debb;
           sqlstm.sqhstl[10] = (unsigned long  )17;
           sqlstm.sqindv[10] = (         short *)0;
           sqlstm.sqharm[10] = (unsigned long )0;
           sqlstm.sqhstv[11] = (unsigned char  *)&valor_creb;
           sqlstm.sqhstl[11] = (unsigned long  )17;
           sqlstm.sqindv[11] = (         short *)0;
           sqlstm.sqharm[11] = (unsigned long )0;
           sqlstm.sqphsv = sqlstm.sqhstv;
           sqlstm.sqphsl = sqlstm.sqhstl;
           sqlstm.sqpind = sqlstm.sqindv;
           sqlstm.sqparm = sqlstm.sqharm;
           sqlstm.sqparc = sqlstm.sqharc;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    
           if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
               fprintf (stderr, "Error Grabando Debito (%d)\n", sqlca.sqlcode);

           strcpy(cuentab.arr,cuenta_cr.arr);
           cuentab.len = strlen(cuentab.arr);
           strcpy(codigox.arr,cuentab.arr);
           codigox.len = strlen(codigox.arr);
           ver_inf();
           strcpy (valor_debb.arr,"");
           valor_debb.len = strlen(valor_debb.arr);
           sprintf(valor_creb.arr,"%10.2f",valor);
           valor_creb.len = strlen(valor_creb.arr);
/*
           valor_creb.arr[strpos(".",valor_creb.arr)-1] = ',';
*/
           valor_creb.len = strlen(valor_creb.arr);
                                         /* Graba en movto_d el Credito (C4) */
           /* EXEC SQL insert into movto_d
                    values(:codigo_emp, :ano_mesf, :consecutivob, :secuenciab,
                           :cuentab, :infa, :infb, :infc, :infd,
                           :codigo_nitb, :valor_debb, :valor_creb); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 12;
           sqlstm.stmt = "insert into movto_d values (:b0,:b1,:b2,:b3,:b4,:b\
5,:b6,:b7,:b8,:b9,:b10,:b11)";
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)568;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
           sqlstm.sqhstl[0] = (unsigned long  )5;
           sqlstm.sqindv[0] = (         short *)0;
           sqlstm.sqharm[0] = (unsigned long )0;
           sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesf;
           sqlstm.sqhstl[1] = (unsigned long  )22;
           sqlstm.sqindv[1] = (         short *)0;
           sqlstm.sqharm[1] = (unsigned long )0;
           sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
           sqlstm.sqhstl[2] = (unsigned long  )9;
           sqlstm.sqindv[2] = (         short *)0;
           sqlstm.sqharm[2] = (unsigned long )0;
           sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
           sqlstm.sqhstl[3] = (unsigned long  )9;
           sqlstm.sqindv[3] = (         short *)0;
           sqlstm.sqharm[3] = (unsigned long )0;
           sqlstm.sqhstv[4] = (unsigned char  *)&cuentab;
           sqlstm.sqhstl[4] = (unsigned long  )17;
           sqlstm.sqindv[4] = (         short *)0;
           sqlstm.sqharm[4] = (unsigned long )0;
           sqlstm.sqhstv[5] = (unsigned char  *)&infa;
           sqlstm.sqhstl[5] = (unsigned long  )16;
           sqlstm.sqindv[5] = (         short *)0;
           sqlstm.sqharm[5] = (unsigned long )0;
           sqlstm.sqhstv[6] = (unsigned char  *)&infb;
           sqlstm.sqhstl[6] = (unsigned long  )16;
           sqlstm.sqindv[6] = (         short *)0;
           sqlstm.sqharm[6] = (unsigned long )0;
           sqlstm.sqhstv[7] = (unsigned char  *)&infc;
           sqlstm.sqhstl[7] = (unsigned long  )16;
           sqlstm.sqindv[7] = (         short *)0;
           sqlstm.sqharm[7] = (unsigned long )0;
           sqlstm.sqhstv[8] = (unsigned char  *)&infd;
           sqlstm.sqhstl[8] = (unsigned long  )16;
           sqlstm.sqindv[8] = (         short *)0;
           sqlstm.sqharm[8] = (unsigned long )0;
           sqlstm.sqhstv[9] = (unsigned char  *)&codigo_nitb;
           sqlstm.sqhstl[9] = (unsigned long  )8;
           sqlstm.sqindv[9] = (         short *)0;
           sqlstm.sqharm[9] = (unsigned long )0;
           sqlstm.sqhstv[10] = (unsigned char  *)&valor_debb;
           sqlstm.sqhstl[10] = (unsigned long  )17;
           sqlstm.sqindv[10] = (         short *)0;
           sqlstm.sqharm[10] = (unsigned long )0;
           sqlstm.sqhstv[11] = (unsigned char  *)&valor_creb;
           sqlstm.sqhstl[11] = (unsigned long  )17;
           sqlstm.sqindv[11] = (         short *)0;
           sqlstm.sqharm[11] = (unsigned long )0;
           sqlstm.sqphsv = sqlstm.sqhstv;
           sqlstm.sqphsl = sqlstm.sqhstl;
           sqlstm.sqpind = sqlstm.sqindv;
           sqlstm.sqparm = sqlstm.sqharm;
           sqlstm.sqparc = sqlstm.sqharc;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    
           if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
               fprintf (stderr, "Error Grabando Credito (%d)\n", sqlca.sqlcode);
        }
        /* EXEC SQL FETCH C6 INTO :cuenta_db, :cuenta_cr, :valor, :fecha_asto,
                               :ptaje, :codigo; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 12;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)630;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&cuenta_db;
        sqlstm.sqhstl[0] = (unsigned long  )17;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&cuenta_cr;
        sqlstm.sqhstl[1] = (unsigned long  )17;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&valor;
        sqlstm.sqhstl[2] = (unsigned long  )8;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&fecha_asto;
        sqlstm.sqhstl[3] = (unsigned long  )22;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&ptaje;
        sqlstm.sqhstl[4] = (unsigned long  )4;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqharm[4] = (unsigned long )0;
        sqlstm.sqhstv[5] = (unsigned char  *)&codigo;
        sqlstm.sqhstl[5] = (unsigned long  )5;
        sqlstm.sqindv[5] = (         short *)0;
        sqlstm.sqharm[5] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        staora  = sqlca.sqlcode;

        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
            fprintf (stderr, "Error leyendo C6 (%d)\n", sqlca.sqlcode);
  }
}

void ver_inf()
{
  /* EXEC SQL select infa, infb, infc, infd
           into :veca, :vecb, :vecc, :vecd
           from   plan
           where  codigo_emp = :codigo_emp and
                  cuenta     = :cuentab; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 12;
  sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b3  from pl\
an where (codigo_emp=:b4 and cuenta=:b5)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)668;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&veca;
  sqlstm.sqhstl[0] = (unsigned long  )16;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&vecb;
  sqlstm.sqhstl[1] = (unsigned long  )16;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&vecc;
  sqlstm.sqhstl[2] = (unsigned long  )16;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&vecd;
  sqlstm.sqhstl[3] = (unsigned long  )16;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[4] = (unsigned long  )5;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&cuentab;
  sqlstm.sqhstl[5] = (unsigned long  )17;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


          
  if (sqlca.sqlcode == 1403) 
      printf ("Cuentab (%-s) no existe\n", cuentab.arr);

  veca.arr [veca.len] = '\0';
  vecb.arr [vecb.len] = '\0';
  vecc.arr [vecc.len] = '\0';
  vecd.arr [vecd.len] = '\0';

  strcpy (vecplan[1], veca.arr);
  strcpy (vecplan[2], vecb.arr);
  strcpy (vecplan[3], vecc.arr);
  strcpy (vecplan[4], vecd.arr);

  for (i=1;i<=4;i++) {
       strcpy(inf[i],"");
  }
  i=j=0;
  for (i=1;i<=4;i++) {
      if (!strcmp(vecplan[i],"NIT")) {
          sprintf(inf[i],"%12.0f",nitn);
      }
      for (j=1;j<=k;j++) {
          if (!strcmp(vecplan[i],vecinf[j].arr) && strcmp(vecplan[i],"") ) {
              strcpy(inf[i],codigox.arr);
          }
      }
  }
  strcpy (infa.arr, inf[1]);
  strcpy (infb.arr, inf[2]);
  strcpy (infc.arr, inf[3]);
  strcpy (infd.arr, inf[4]);
  infa.len = strlen(infa.arr);
  infb.len = strlen(infb.arr);
  infc.len = strlen(infc.arr);
  infd.len = strlen(infd.arr);
}
