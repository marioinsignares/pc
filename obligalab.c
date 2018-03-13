
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
           char  filnam[15];
};
static const struct sqlcxp sqlfpn =
{
    14,
    ".\\obligalab.pc"
};


static const unsigned long sqlctx = 1233090330;


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

 static const char *sq0003 = 
"select inf  from infacu            ";
 static const char *sq0004 = 
"select cuenta_c1 ,cuenta_c2 ,codigo ,codigo_nit ,sum((nvl(valor_deb,0)-nvl(v\
alor_cre,0))) ,last_day(to_date(:b0,'yymm')) ,sucursal ,cen_cos  from acumulan\
it a ,cierres i where ((((a.codigo_emp=:b1 and a.codigo_emp=i.codigo_emp) and \
a.ano_mes>=:b2) and a.ano_mes<=:b3) and substr(a.cuenta,1,length(i.cuenta))=i.\
cuenta) group by i.cuenta,cuenta_c1,cuenta_c2,codigo,codigo_nit,sucursal,cen_c\
os order by i.cuenta            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,142,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,140,0,4,182,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
58,0,0,3,35,0,9,195,0,0,0,0,1,0,
72,0,0,3,0,0,13,203,0,1,0,0,1,0,2,9,0,0,
90,0,0,3,0,0,15,217,0,0,0,0,1,0,
104,0,0,4,420,0,9,234,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
134,0,0,3,0,0,15,241,0,0,0,0,1,0,
148,0,0,4,0,0,15,242,0,0,0,0,1,0,
162,0,0,5,0,0,30,244,0,0,0,0,1,0,
176,0,0,6,134,0,4,255,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
206,0,0,7,147,0,2,270,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
232,0,0,8,114,0,2,281,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
258,0,0,9,165,0,4,296,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
288,0,0,10,137,0,3,312,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
318,0,0,11,117,0,5,328,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
348,0,0,12,161,0,4,340,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
378,0,0,13,137,0,3,351,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
408,0,0,14,117,0,5,363,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
438,0,0,4,0,0,13,370,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,9,0,
0,2,9,0,0,2,3,0,0,
484,0,0,15,231,0,3,384,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
518,0,0,16,62,0,4,421,0,2,1,0,1,0,2,4,0,0,1,9,0,0,
540,0,0,17,205,0,3,443,0,14,14,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,
610,0,0,18,205,0,3,493,0,14,14,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,
680,0,0,19,205,0,3,549,0,14,14,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,
750,0,0,20,205,0,3,600,0,14,14,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,
820,0,0,4,0,0,13,637,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,4,0,0,2,9,0,
0,2,9,0,0,2,3,0,0,
866,0,0,21,99,0,4,650,0,6,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,9,
0,0,
};


/*****************************************************************
* OBLIGALAB.PC Version 1.0 - Rev 1.2 - Jun. 30/92.
*
* obligalab.pc. Cierre de obligaciones laborales
*
* Uso: obligalab codigo_emp aamm device copias userid/password
*
* Mario Santiago. Creado en Enero 19 de 2.006.
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
/* VARCHAR nomb_emp    [41]; */ 
struct { unsigned short len; unsigned char arr[41]; } nomb_emp;

double  nit;
double  nitn;
int     digito;
/* VARCHAR codigo_emp  [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

                                 /* Infacu (C2) */
/* VARCHAR vecinf      [20][14]; */ 
struct { unsigned short len; unsigned char arr[14]; } vecinf[20];

                                 /* Movto_C (C3) */
/* VARCHAR ano_mesf    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesf;

/* VARCHAR comprobanteb[7]; */ 
struct { unsigned short len; unsigned char arr[7]; } comprobanteb;

/* VARCHAR consecutivob[7]; */ 
struct { unsigned short len; unsigned char arr[7]; } consecutivob;

/* VARCHAR fechab      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechab;

                                 /* Movto_D (C4) */
/* VARCHAR secuenciab  [7]; */ 
struct { unsigned short len; unsigned char arr[7]; } secuenciab;

/* VARCHAR cuentab     [11]; */ 
struct { unsigned short len; unsigned char arr[11]; } cuentab;

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

/* VARCHAR sucursal    [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } sucursal;

/* VARCHAR traslado    [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } traslado;

int     cen_cos;
char    inf         [5][14];
                                 /* Control_Mes (C5) */
double  consecutivo;
/* VARCHAR fuenteb     [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } fuenteb;

double  consecutivo12;
                                 /* Acumulados (C6) */
/* VARCHAR cuenta_c1   [11]; */ 
struct { unsigned short len; unsigned char arr[11]; } cuenta_c1;

/* VARCHAR cuenta_c2   [11]; */ 
struct { unsigned short len; unsigned char arr[11]; } cuenta_c2;

double  valor;
/* VARCHAR fecha_asto  [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_asto;

/* VARCHAR ano_mesi    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR ano_mes     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR codigo      [11]; */ 
struct { unsigned short len; unsigned char arr[11]; } codigo;

int     codigo_nit;
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
int     diai;
int     mesx, mesi, mesf;
int     anox, anoi, anof;
int     i, j, k;
float   ptaje;
char    ptajeb[7];
char    cadena[100];
char    login[20];
char    copias[5];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 8)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp aaaamm traslado (T=Todas, A=Anual, S=Semestral) copias pagina device nro_cpbte userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("      device : s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (traslado.arr,     argv[3]);
       traslado.len =        strlen(traslado.arr);
       strcpy (copias,           argv[4]);
       strcpy (pagina,           argv[5]);
       strcpy (device,           argv[6]);
       strlow (device);
       strcpy (comprobanteb.arr, argv[7]);
       comprobanteb.len =        strlen(comprobanteb.arr);

    if (!strpos ("/", argv[8]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[8]);
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
    mesf=12;
    sprintf (ano_mesf.arr,"%d%02d",anof,mesf);
    ano_mesf.len =       strlen(ano_mesf.arr);

//    printf("Paso-1"); getchar();
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
    sqlstm.offset = (unsigned short)28;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
    sqlstm.sqhstl[0] = (unsigned long  )43;
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
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)58;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = 0;
    traidos = 0;
    num_ret = 0;
//    printf("Paso-2"); getchar();
    while (staora == 0) {

          /* EXEC SQL FETCH C2 INTO :vecinf; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 4;
          sqlstm.iters = (unsigned long  )20;
          sqlstm.offset = (unsigned short)72;
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
    sqlstm.offset = (unsigned short)90;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



//    printf("Paso-3"); getchar();
    /* EXEC SQL DECLARE C6 CURSOR FOR
             select cuenta_c1, cuenta_c2, codigo, codigo_nit, sum(nvl(valor_deb,0)-nvl(valor_cre,0)),
                    last_day(to_date(:ano_mesf,'yymm')), sucursal, cen_cos
             from  acumulanit a, cierres i
             where a.codigo_emp =  :codigo_emp                     and
                   a.codigo_emp = i.codigo_emp                     and
                   a.ano_mes   >=  :ano_mesi                       and
                   a.ano_mes   <=  :ano_mes                        and
                   substr(a.cuenta,1,length(i.cuenta)) = i.cuenta
             group by i.cuenta, cuenta_c1, cuenta_c2, codigo, codigo_nit, sucursal, cen_cos
             order by i.cuenta; */ 


//                   i.opcion     =  :traslado                       and

    /* EXEC SQL OPEN C6; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = sq0004;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)104;
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
    sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesi;
    sqlstm.sqhstl[2] = (unsigned long  )22;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&ano_mes;
    sqlstm.sqhstl[3] = (unsigned long  )22;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


//    printf("Paso-4"); getchar();

    hacer_asiento();

    cierre_impresora();

    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)134;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL CLOSE C6; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)148;
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
    sqlstm.offset = (unsigned short)162;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    exit   (0);
}

void hacer_asiento()
{
  strcpy(fuenteb.arr,"19");
  fuenteb.len = strlen(fuenteb.arr);

 /* Lee consecutivo de control_mes Fte 12 Cns ultimo Asiento Aj x Inflacion */
  /* EXEC SQL select consecutivo   into :consecutivo12
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
  sqlstm.offset = (unsigned short)176;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo12;
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



  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
      fprintf (stderr, "Error leyendo Control_Mes (%d)\n", sqlca.sqlcode);
//    printf("Paso-5"); getchar();
  }
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo12);
        consecutivob.len = strlen(consecutivob.arr);
//    printf("Paso-5.1"); getchar();

        /* EXEC SQL delete from movto_c
                 where codigo_emp   = to_number(:codigo_emp)   and
                       comprobante  = to_number(:comprobanteb) and
                       clase        = 'NO'                     and
                       tipo         = '10'                     and
                       ano_mes      = to_number(:ano_mesf); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 4;
        sqlstm.stmt = "delete from movto_c  where ((((codigo_emp=to_number(:\
b0) and comprobante=to_number(:b1)) and clase='NO') and tipo='10') and ano_mes\
=to_number(:b2))";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)206;
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
            fprintf (stderr, "Error leyendo Movto_Cx (%d)\n", sqlca.sqlcode);
//    printf("Paso-5.2"); getchar();

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
        sqlstm.offset = (unsigned short)232;
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



//    printf("Paso-5.3"); getchar();
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
                 codigo_emp   = to_number(:codigo_emp)
                 for update of consecutivo; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 4;
  sqlstm.stmt = "select (consecutivo+1) into :b0  from control_mes where ((f\
uente=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3)\
) for update of consecutivo ";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)258;
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



//    printf("Paso-5.4"); getchar();
  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes Fte 08 (%d)\n", sqlca.sqlcode);
      consecutivo=1;
      sprintf(consecutivob.arr,"%5.0f",consecutivo);
      consecutivob.len = strlen(consecutivob.arr);
               /* Inserta en Control_Mes Fte 08 si no existe (C11) */
//    printf("Paso-5.5"); getchar();
      /* EXEC SQL insert into control_mes
       		(FUENTE,
		 ANO_MES,
		 NOMBRE,
		 CONSECUTIVO,
		 CODIGO_EMP,
		 VERSION)
               values (:fuenteb, :ano_mesf, 'CONTROL OBLIGACIONES LABORALES',
                       :consecutivob, :codigo_emp,0); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 4;
      sqlstm.stmt = "insert into control_mes(FUENTE,ANO_MES,NOMBRE,CONSECUTI\
VO,CODIGO_EMP,VERSION) values (:b0,:b1,'CONTROL OBLIGACIONES LABORALES',:b2,:b\
3,0)";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)288;
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


//    printf("Paso-5.5.1"); getchar();
     }
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo);
        consecutivob.len = strlen(consecutivob.arr);
               /* Actualiza Cns de Fte 08 en control_mes (C12) */
//    printf("Paso-5.6"); getchar();
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
        sqlstm.offset = (unsigned short)318;
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


//    printf("Paso-5.6.1"); getchar();
  }

//    printf("Paso-6"); getchar();
  strcpy(fuenteb.arr,"19");
  fuenteb.len = strlen(fuenteb.arr);

  /* EXEC SQL select consecutivo   into :consecutivo12
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesf)      and
                 codigo_emp   = to_number(:codigo_emp)
                 for update of consecutivo; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 4;
  sqlstm.stmt = "select consecutivo into :b0  from control_mes where ((fuent\
e=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3)) fo\
r update of consecutivo ";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)348;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo12;
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
      fprintf (stderr, "Error leyendo Control_Mes Fte 12 (%d)\n", sqlca.sqlcode);
               /* Inserta en Control_Mes Fte 12 si no existe (C11) */
      /* EXEC SQL insert into control_mes
       		(FUENTE,
		 ANO_MES,
		 NOMBRE,
		 CONSECUTIVO,
		 CODIGO_EMP,
		 VERSION)
               values (:fuenteb, :ano_mesf, 'CONTROL OBLIGACIONES LABORALES',
                       :consecutivob, :codigo_emp,0); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 4;
      sqlstm.stmt = "insert into control_mes(FUENTE,ANO_MES,NOMBRE,CONSECUTI\
VO,CODIGO_EMP,VERSION) values (:b0,:b1,'CONTROL OBLIGACIONES LABORALES',:b2,:b\
3,0)";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)378;
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
               /* Actualiza Cns de Fte 12 en control_mes (C12) */
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
        sqlstm.offset = (unsigned short)408;
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

  /* EXEC SQL FETCH C6 INTO :cuenta_c1, :cuenta_c2, :codigo, :codigo_nit, :valor, :fecha_asto, :sucursal, :cen_cos; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 8;
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)438;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&cuenta_c1;
  sqlstm.sqhstl[0] = (unsigned long  )13;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&cuenta_c2;
  sqlstm.sqhstl[1] = (unsigned long  )13;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&codigo;
  sqlstm.sqhstl[2] = (unsigned long  )13;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&codigo_nit;
  sqlstm.sqhstl[3] = (unsigned long  )4;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&valor;
  sqlstm.sqhstl[4] = (unsigned long  )8;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&fecha_asto;
  sqlstm.sqhstl[5] = (unsigned long  )22;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqhstv[6] = (unsigned char  *)&sucursal;
  sqlstm.sqhstl[6] = (unsigned long  )8;
  sqlstm.sqindv[6] = (         short *)0;
  sqlstm.sqharm[6] = (unsigned long )0;
  sqlstm.sqhstv[7] = (unsigned char  *)&cen_cos;
  sqlstm.sqhstl[7] = (unsigned long  )4;
  sqlstm.sqindv[7] = (         short *)0;
  sqlstm.sqharm[7] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


//    printf("Paso-7"); getchar();

  cuenta_c1.arr   [cuenta_c1.len]   = '\0';
  cuenta_c2.arr   [cuenta_c2.len]   = '\0';
  codigo.arr      [codigo.len]      = '\0';
  fecha_asto.arr  [fecha_asto.len]  = '\0';
  strcpy(fechab.arr,fecha_asto.arr);
  fechab.len = strlen(fechab.arr);


//  printf("1) %s %s %s %s %s",codigo_emp.arr, ano_mesf.arr, comprobanteb.arr, consecutivob.arr, fechab.arr); getchar();


  /* EXEC SQL insert into movto_c
           (CODIGO_EMP,
	    ANO_MES,
	    COMPROBANTE,
	    CONSECUTIVO,
	    CLASE,
	    DESCRIPCION,
	    FECHA,
	    TIPO,
	    ESTADO,
	    NITB,
	    CODIGO_NITB,
	    VALORB,
	    RETENCION,
	    CONTADO)
           values(:codigo_emp, :ano_mesf, :comprobanteb, :consecutivob, 'NO',
                  'TRASLADO DE CUENTAS LABORALES',:fechab,'10', '0','','','','',''); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 8;
  sqlstm.stmt = "insert into movto_c(CODIGO_EMP,ANO_MES,COMPROBANTE,CONSECUT\
IVO,CLASE,DESCRIPCION,FECHA,TIPO,ESTADO,NITB,CODIGO_NITB,VALORB,RETENCION,CONT\
ADO) values (:b0,:b1,:b2,:b3,'NO','TRASLADO DE CUENTAS LABORALES',:b4,'10','0'\
,'','','','','')";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)484;
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
      fprintf (stderr, "Error leyendo Movto_Cy (%d)\n", sqlca.sqlcode);

  staora  = 0;
  while (staora == 0) {

//    printf("Paso-8"); getchar();
        cuenta_c1.arr   [cuenta_c1.len]   = '\0';
        cuenta_c2.arr   [cuenta_c2.len]   = '\0';
        codigo.arr      [codigo.len]      = '\0';
        fecha_asto.arr  [fecha_asto.len]  = '\0';
        secuencia++;
        sprintf(secuenciab.arr,"%6.0f",secuencia);
        secuenciab.len = strlen(secuenciab.arr);

        if (codigo_nit==0)
           strcpy(codigo_nitb.arr,"");
        else sprintf(codigo_nitb.arr,"%5d",codigo_nit);
        codigo_nitb.len = strlen(codigo_nitb.arr);
        /* EXEC SQL select nit
                 into  :nitn
                 from  nits
                 where codigo_nit = to_number(:codigo_nitb); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 8;
        sqlstm.stmt = "select nit into :b0  from nits where codigo_nit=to_nu\
mber(:b1)";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)518;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&nitn;
        sqlstm.sqhstl[0] = (unsigned long  )8;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&codigo_nitb;
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



        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo Nit (%d)\n", sqlca.sqlcode);

        if (valor < 0) {
           valor=valor*-1;
           strcpy(codigo.arr,cuenta_c1.arr);
           codigo.len = strlen(codigo.arr);
           strcpy(cuentab.arr,cuenta_c1.arr);
           cuentab.len = strlen(cuentab.arr);

           ver_inf();
           sprintf(valor_debb.arr,"%10.2f",valor);
           valor_debb.len = strlen(valor_debb.arr);
           strcpy (valor_creb.arr,"");
           valor_creb.len = strlen(valor_creb.arr);

                                          /* Graba en movto_d el Debito (C4) */
           /* EXEC SQL insert into movto_d
                    (CODIGO_EMP,
		     ANO_MES,
		     CONSECUTIVO,
		     SECUENCIA,
		     CUENTA,
		     INFA,
		     INFB,
		     INFC,
		     INFD,
		     CODIGO_NIT,
		     VALOR_DEB,
		     VALOR_CRE,
		     SUCURSAL,
		     CEN_COS)
                    values(:codigo_emp, :ano_mesf, :consecutivob, :secuenciab,
                           :cuentab, :infa, :infb, :infc, :infd,
                           :codigo_nitb, :valor_debb, :valor_creb, :sucursal, :cen_cos); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 14;
           sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO\
,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,\
CEN_COS) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b12,:b13)";
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)540;
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
           sqlstm.sqhstl[4] = (unsigned long  )13;
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
           sqlstm.sqhstv[12] = (unsigned char  *)&sucursal;
           sqlstm.sqhstl[12] = (unsigned long  )8;
           sqlstm.sqindv[12] = (         short *)0;
           sqlstm.sqharm[12] = (unsigned long )0;
           sqlstm.sqhstv[13] = (unsigned char  *)&cen_cos;
           sqlstm.sqhstl[13] = (unsigned long  )4;
           sqlstm.sqindv[13] = (         short *)0;
           sqlstm.sqharm[13] = (unsigned long )0;
           sqlstm.sqphsv = sqlstm.sqhstv;
           sqlstm.sqphsl = sqlstm.sqhstl;
           sqlstm.sqpind = sqlstm.sqindv;
           sqlstm.sqparm = sqlstm.sqharm;
           sqlstm.sqparc = sqlstm.sqharc;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



           if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
               printf("Error Grabando Debito (%d)\n", sqlca.sqlcode);
               printf("codigo_emp <%s>",codigo_emp.arr);
               printf("ano_mesf <%s>",ano_mesf.arr);
               printf("consecutivob <%s>",consecutivob.arr);
               printf("secuenciab <%s>",secuenciab.arr);
               printf("cuentab <%s>",cuentab.arr);
               printf("infa <%s>",infa.arr);
               printf("infb <%s>",infb.arr);
               printf("infc <%s>",infc.arr);
               printf("infd <%s>",infd.arr);
               printf("codigo_nitb <%s>\n",codigo_nitb.arr);
               printf("valor_debb <%s>\n",valor_debb.arr);
               printf("valor_creb <%s>\n",valor_creb); getchar();
           }

           strcpy(codigo.arr,cuenta_c2.arr);
           codigo.len = strlen(codigo.arr);
           strcpy(cuentab.arr,cuenta_c2.arr);
           cuentab.len = strlen(cuentab.arr);
           ver_inf();
           strcpy (valor_debb.arr,"");
           valor_debb.len = strlen(valor_debb.arr);
           sprintf(valor_creb.arr,"%10.2f",valor);
           valor_creb.len = strlen(valor_creb.arr);
           valor_creb.len = strlen(valor_creb.arr);
           secuencia++;
           sprintf(secuenciab.arr,"%6.0f",secuencia);
           secuenciab.len = strlen(secuenciab.arr);
                                         /* Graba en movto_d el Credito (C4) */

           /* EXEC SQL insert into movto_d
                    (CODIGO_EMP,
		     ANO_MES,
		     CONSECUTIVO,
		     SECUENCIA,
		     CUENTA,
		     INFA,
		     INFB,
		     INFC,
		     INFD,
		     CODIGO_NIT,
		     VALOR_DEB,
		     VALOR_CRE,
		     SUCURSAL,
		     CEN_COS)
                    values(:codigo_emp, :ano_mesf, :consecutivob, :secuenciab,
                           :cuentab, :infa, :infb, :infc, :infd,
                           :codigo_nitb, :valor_debb, :valor_creb, :sucursal, :cen_cos); */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 14;
           sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUTIVO\
,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURSAL,\
CEN_COS) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b12,:b13)";
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)610;
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
           sqlstm.sqhstl[4] = (unsigned long  )13;
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
           sqlstm.sqhstv[12] = (unsigned char  *)&sucursal;
           sqlstm.sqhstl[12] = (unsigned long  )8;
           sqlstm.sqindv[12] = (         short *)0;
           sqlstm.sqharm[12] = (unsigned long )0;
           sqlstm.sqhstv[13] = (unsigned char  *)&cen_cos;
           sqlstm.sqhstl[13] = (unsigned long  )4;
           sqlstm.sqindv[13] = (         short *)0;
           sqlstm.sqharm[13] = (unsigned long )0;
           sqlstm.sqphsv = sqlstm.sqhstv;
           sqlstm.sqphsl = sqlstm.sqhstl;
           sqlstm.sqpind = sqlstm.sqindv;
           sqlstm.sqparm = sqlstm.sqharm;
           sqlstm.sqparc = sqlstm.sqharc;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



           if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
               printf("Error Grabando Credito (%d)\n", sqlca.sqlcode);
               printf("codigo_emp <%s>",codigo_emp.arr);
               printf("ano_mesf <%s>",ano_mesf.arr);
               printf("consecutivob <%s>",consecutivob.arr);
               printf("secuenciab <%s>",secuenciab.arr);
               printf("cuentab <%s>",cuentab.arr);
               printf("infa <%s>",infa.arr);
               printf("infb <%s>",infb.arr);
               printf("infc <%s>",infc.arr);
               printf("infd <%s>",infd.arr);
               printf("codigo_nitb <%s>\n",codigo_nitb.arr);
               printf("valor_debb <%s>\n",valor_debb.arr);
               printf("valor_creb <%s>\n",valor_creb); getchar();
           }
        }

        else

        {
           if (valor != 0) {
              strcpy(codigo.arr,cuenta_c1.arr);
              codigo.len = strlen(codigo.arr);
              strcpy(cuentab.arr,cuenta_c1.arr);
              cuentab.len = strlen(cuentab.arr);
              secuencia++;
              sprintf(secuenciab.arr,"%6.0f",secuencia);
              secuenciab.len = strlen(secuenciab.arr);

              ver_inf();

              strcpy (valor_debb.arr,"");
              valor_debb.len = strlen(valor_debb.arr);
              sprintf(valor_creb.arr,"%10.2f",valor);
              valor_creb.len = strlen(valor_creb.arr);

                                          /* Graba en movto_d el Debito (C4) */
              /* EXEC SQL insert into movto_d
                    (CODIGO_EMP,
		     ANO_MES,
		     CONSECUTIVO,
		     SECUENCIA,
		     CUENTA,
		     INFA,
		     INFB,
		     INFC,
		     INFD,
		     CODIGO_NIT,
		     VALOR_DEB,
		     VALOR_CRE,
		     SUCURSAL,
		     CEN_COS)
                       values(:codigo_emp, :ano_mesf, :consecutivob, :secuenciab,
                              :cuentab, :infa, :infb, :infc, :infd,
                              :codigo_nitb, :valor_debb, :valor_creb, :sucursal, :cen_cos); */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 8;
              sqlstm.arrsiz = 14;
              sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUT\
IVO,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURS\
AL,CEN_COS) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b12,:b1\
3)";
              sqlstm.iters = (unsigned long  )1;
              sqlstm.offset = (unsigned short)680;
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
              sqlstm.sqhstl[4] = (unsigned long  )13;
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
              sqlstm.sqhstv[12] = (unsigned char  *)&sucursal;
              sqlstm.sqhstl[12] = (unsigned long  )8;
              sqlstm.sqindv[12] = (         short *)0;
              sqlstm.sqharm[12] = (unsigned long )0;
              sqlstm.sqhstv[13] = (unsigned char  *)&cen_cos;
              sqlstm.sqhstl[13] = (unsigned long  )4;
              sqlstm.sqindv[13] = (         short *)0;
              sqlstm.sqharm[13] = (unsigned long )0;
              sqlstm.sqphsv = sqlstm.sqhstv;
              sqlstm.sqphsl = sqlstm.sqhstl;
              sqlstm.sqpind = sqlstm.sqindv;
              sqlstm.sqparm = sqlstm.sqharm;
              sqlstm.sqparc = sqlstm.sqharc;
              sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



              if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
                  printf("Error Grabando Credito (%d)\n", sqlca.sqlcode);
                  printf("codigo_emp <%s>",codigo_emp.arr);
                  printf("ano_mesf <%s>",ano_mesf.arr);
                  printf("consecutivob <%s>",consecutivob.arr);
                  printf("secuenciab <%s>",secuenciab.arr);
                  printf("cuentab <%s>",cuentab.arr);
                  printf("infa <%s>",infa.arr);
                  printf("infb <%s>",infb.arr);
                  printf("infc <%s>",infc.arr);
                  printf("infd <%s>",infd.arr);
                  printf("codigo_nitb <%s>\n",codigo_nitb.arr);
                  printf("valor_debb <%s>\n",valor_debb.arr);
                  printf("valor_creb <%s>\n",valor_creb); getchar();
              }

              strcpy(codigo.arr,cuenta_c2.arr);
              codigo.len = strlen(codigo.arr);
              strcpy(cuentab.arr,cuenta_c2.arr);
              cuentab.len = strlen(cuentab.arr);
              ver_inf();

              secuencia++;
              sprintf(secuenciab.arr,"%6.0f",secuencia);
              secuenciab.len = strlen(secuenciab.arr);
              sprintf(valor_debb.arr,"%10.2f",valor);
              valor_debb.len = strlen(valor_debb.arr);
              strcpy (valor_creb.arr,"");
              valor_creb.len = strlen(valor_creb.arr);

                                         /* Graba en movto_d el Credito (C4) */

              /* EXEC SQL insert into movto_d
                    (CODIGO_EMP,
		     ANO_MES,
		     CONSECUTIVO,
		     SECUENCIA,
		     CUENTA,
		     INFA,
		     INFB,
		     INFC,
		     INFD,
		     CODIGO_NIT,
		     VALOR_DEB,
		     VALOR_CRE,
		     SUCURSAL,
		     CEN_COS)
                       values(:codigo_emp, :ano_mesf, :consecutivob, :secuenciab,
                              :cuentab, :infa, :infb, :infc, :infd,
                              :codigo_nitb, :valor_debb, :valor_creb, :sucursal, :cen_cos); */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 8;
              sqlstm.arrsiz = 14;
              sqlstm.stmt = "insert into movto_d(CODIGO_EMP,ANO_MES,CONSECUT\
IVO,SECUENCIA,CUENTA,INFA,INFB,INFC,INFD,CODIGO_NIT,VALOR_DEB,VALOR_CRE,SUCURS\
AL,CEN_COS) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b12,:b1\
3)";
              sqlstm.iters = (unsigned long  )1;
              sqlstm.offset = (unsigned short)750;
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
              sqlstm.sqhstl[4] = (unsigned long  )13;
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
              sqlstm.sqhstv[12] = (unsigned char  *)&sucursal;
              sqlstm.sqhstl[12] = (unsigned long  )8;
              sqlstm.sqindv[12] = (         short *)0;
              sqlstm.sqharm[12] = (unsigned long )0;
              sqlstm.sqhstv[13] = (unsigned char  *)&cen_cos;
              sqlstm.sqhstl[13] = (unsigned long  )4;
              sqlstm.sqindv[13] = (         short *)0;
              sqlstm.sqharm[13] = (unsigned long )0;
              sqlstm.sqphsv = sqlstm.sqhstv;
              sqlstm.sqphsl = sqlstm.sqhstl;
              sqlstm.sqpind = sqlstm.sqindv;
              sqlstm.sqparm = sqlstm.sqharm;
              sqlstm.sqparc = sqlstm.sqharc;
              sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



              if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
                  printf("Error Grabando Debito (%d)\n", sqlca.sqlcode);
                  printf("codigo_emp <%s>",codigo_emp.arr);
                  printf("ano_mesf <%s>",ano_mesf.arr);
                  printf("consecutivob <%s>",consecutivob.arr);
                  printf("secuenciab <%s>",secuenciab.arr);
                  printf("cuentab <%s>",cuentab.arr);
                  printf("infa <%s>",infa.arr);
                  printf("infb <%s>",infb.arr);
                  printf("infc <%s>",infc.arr);
                  printf("infd <%s>",infd.arr);
                  printf("codigo_nitb <%s>\n",codigo_nitb.arr);
                  printf("valor_debb <%s>\n",valor_debb.arr);
                  printf("valor_creb <%s>\n",valor_creb); getchar();
              }
           }
        }

        /* EXEC SQL FETCH C6 INTO :cuenta_c1, :cuenta_c2, :codigo, :codigo_nit, :valor, :fecha_asto, :sucursal, :cen_cos; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 14;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)820;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&cuenta_c1;
        sqlstm.sqhstl[0] = (unsigned long  )13;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&cuenta_c2;
        sqlstm.sqhstl[1] = (unsigned long  )13;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&codigo;
        sqlstm.sqhstl[2] = (unsigned long  )13;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&codigo_nit;
        sqlstm.sqhstl[3] = (unsigned long  )4;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&valor;
        sqlstm.sqhstl[4] = (unsigned long  )8;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqharm[4] = (unsigned long )0;
        sqlstm.sqhstv[5] = (unsigned char  *)&fecha_asto;
        sqlstm.sqhstl[5] = (unsigned long  )22;
        sqlstm.sqindv[5] = (         short *)0;
        sqlstm.sqharm[5] = (unsigned long )0;
        sqlstm.sqhstv[6] = (unsigned char  *)&sucursal;
        sqlstm.sqhstl[6] = (unsigned long  )8;
        sqlstm.sqindv[6] = (         short *)0;
        sqlstm.sqharm[6] = (unsigned long )0;
        sqlstm.sqhstv[7] = (unsigned char  *)&cen_cos;
        sqlstm.sqhstl[7] = (unsigned long  )4;
        sqlstm.sqindv[7] = (         short *)0;
        sqlstm.sqharm[7] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



//  printf("2) %s %s %s %s %s",codigo_emp.arr, ano_mesf.arr, comprobanteb.arr, consecutivob.arr, fechab.arr); getchar();

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
  sqlstm.arrsiz = 14;
  sqlstm.stmt = "select infa ,infb ,infc ,infd into :b0,:b1,:b2,:b3  from pl\
an where (codigo_emp=:b4 and cuenta=:b5)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)866;
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
  sqlstm.sqhstl[5] = (unsigned long  )13;
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
              strcpy(inf[i],codigo.arr);
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
