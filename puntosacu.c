
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
    ".\\puntosacu.pc"
};


static const unsigned long sqlctx = 1199798389;


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
   unsigned char    *sqhstv[7];
   unsigned long    sqhstl[7];
	    short   *sqindv[7];
   unsigned long    sqharm[7];
   unsigned long     *sqharc[7];
} sqlstm = {8,7};

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

 static const char *sq0006 = 
"select o.codigo_cliente ,n.nombre ,nvl(n.nombre_muni,c.nombre) ,o.consecutiv\
o ,o.ano_mes ,nvl(puntos,0)  from nits n ,ordenes_c o ,ciudades c ,clientes ct\
 where ((((((n.codigo_nit=ct.codigo_nit and ct.codigo_cliente=o.codigo_cliente\
) and n.codigo_ciu=c.codigo) and to_char(o.fecha_documento,'yyyymmdd')>=:b0) a\
nd to_char(o.fecha_documento,'yyyymmdd')<=:b1) and o.codigo_cliente>=:b2) and \
o.codigo_cliente<=:b3) order by o.codigo_cliente,o.numero_orden            ";
 static const char *sq0007 = 
"select nvl(puntos,0)  from ordenes_d d where (d.consecutivo=:b0 and d.ano_me\
s=:b1)           ";
 static const char *sq0005 = 
"select (sum(nvl(puntos_cli,0))-sum(nvl(puntos_rd,0)))  from puntosacu where \
(fecha<=(to_date(:b0,'yyyymmdd')-1) and codigo_cliente=:b1)           ";
 static const char *sq0004 = 
"select nvl(puntos_cli,0) ,nvl(a.puntos_rd,0) ,(nvl(puntos_cli,0)-nvl(a.punto\
s_rd,0)) ,a.codigo_cliente ,n.nombre ,nvl(n.nombre_muni,c.nombre) ,sum(decode(\
p.saldo,0,nvl(p.puntos,0),0))  from puntosacu a ,redimidos p ,nits n ,ciudades\
 c ,clientes ct where ((((a.codigo_cliente=p.codigo_cliente(+) and a.codigo_cl\
iente=ct.codigo_cliente) and n.codigo_nit=ct.codigo_nit) and n.codigo_ciu=c.co\
digo) and a.fecha=to_date(:b0,'yyyymmdd')) group by puntos_cli,a.puntos_rd,a.c\
odigo_cliente,n.nombre,n.nombre_muni,c.nombre order by a.puntos_rd desc ,punto\
s_cli desc             ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,187,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,140,0,4,212,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
58,0,0,3,58,0,2,222,0,1,1,0,1,0,1,9,0,0,
76,0,0,6,463,0,9,260,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
106,0,0,6,0,0,13,261,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,3,0,0,2,3,0,
0,
144,0,0,7,93,0,9,292,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
166,0,0,7,0,0,13,296,0,1,0,0,1,0,2,3,0,0,
184,0,0,7,0,0,15,308,0,0,0,0,1,0,
198,0,0,5,146,0,9,314,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
220,0,0,5,0,0,13,315,0,1,0,0,1,0,2,3,0,0,
238,0,0,5,0,0,15,324,0,0,0,0,1,0,
252,0,0,6,0,0,13,342,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,3,0,0,2,3,0,
0,
290,0,0,7,93,0,9,361,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
312,0,0,7,0,0,13,366,0,1,0,0,1,0,2,3,0,0,
330,0,0,7,0,0,15,378,0,0,0,0,1,0,
344,0,0,4,567,0,9,382,0,1,1,0,1,0,1,9,0,0,
362,0,0,4,0,0,13,385,0,7,0,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,2,3,0,0,
404,0,0,5,146,0,9,398,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
426,0,0,5,0,0,13,399,0,1,0,0,1,0,2,3,0,0,
444,0,0,5,0,0,15,408,0,0,0,0,1,0,
458,0,0,4,0,0,15,439,0,0,0,0,1,0,
472,0,0,8,0,0,30,440,0,0,0,0,1,0,
486,0,0,9,66,0,3,462,0,4,4,0,1,0,1,3,0,0,1,3,0,0,1,9,0,0,1,9,0,0,
516,0,0,10,57,0,4,532,0,1,0,0,1,0,2,9,0,0,
534,0,0,11,96,0,3,535,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
568,0,0,12,56,0,5,537,0,0,0,0,1,0,
};


/*****************************************************************
* ORDENES.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* ordenes.c. Listado de Ordenes de Produccion.
*
* Uso : ordenes numero_orden device userid/password
*
* Martin A. Toloza L. Creado Febrero 10-1998.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double redondo();
void inserta();
void imprime();
void titulos();

				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;


/* VARCHAR nomb_emp   [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_emp;

double  nit;
int     digito;
/* VARCHAR codigo_emp [4]; */ 
struct { unsigned short len; unsigned char arr[4]; } codigo_emp;


                                            /* Variables globales del usuario */
char    pagina[4];                                   /* Contador de Paginas */
int     con_pag=0;                                   /* Contador de Paginas */
                                 /* Ordenes_c (C1) */
double  numero_orden;
int     loop_2 = 0;
int     traidos = 0;
int     num_ret = 0;
/* VARCHAR codigo_cliente [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_cliente;

/* VARCHAR cod_cli        [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } cod_cli;

/* VARCHAR nomb_clie      [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_clie;

/* VARCHAR nomb_ciu       [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciu;

/* VARCHAR asesor         [70]; */ 
struct { unsigned short len; unsigned char arr[70]; } asesor;

/* VARCHAR profesional    [70]; */ 
struct { unsigned short len; unsigned char arr[70]; } profesional;

/* VARCHAR fecha          [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha;

/* VARCHAR fechaf         [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechaf;

double  nit_asesor;
double  nit_prof;
int     ano_mes;
int     puntos;
double  valor;
int     puntosc;
int     puntos_ac;
int     saldoant;
/* VARCHAR estado         [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } estado;

/* VARCHAR orden          [12]; */ 
struct { unsigned short len; unsigned char arr[12]; } orden;

                                 /* Ordenes_d (C2) */
int     cantidad;
int     tcantidad;
/* VARCHAR ano_mesa       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesa;

/* VARCHAR consecutivoa   [08]; */ 
struct { unsigned short len; unsigned char arr[8]; } consecutivoa;

/* VARCHAR bonoa          [08]; */ 
struct { unsigned short len; unsigned char arr[8]; } bonoa;

/* VARCHAR puntosa        [08]; */ 
struct { unsigned short len; unsigned char arr[8]; } puntosa;

/* VARCHAR valora         [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } valora;


int     diai;
int     mesi;
int     anoi;
int     diaf;
int     mesf;
int     anof;
/* VARCHAR codigoi [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigoi;

/* VARCHAR codigof [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigof;

                                 /* Tipos (C3) */
/* VARIABLES PARA ASIENTOS CONTABLES */

double  consecutivo;

int     tot_puntos;
int     puntos_cli;
int     puntos_rd;
int     sal_puntos;
int     tot_saldo;
int     puntos_cr;
int     tpuntos_rd;
int     tsaldoant;
int     tpuntos_cli;
int     tpuntosacu;
int     tsal_puntos;
int     tpuntos_cr;
                                 /* Acumulados (C6) */
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
char *fmtnum(), r_t[100];
int     con_len;                                   /* Contador de Paginas */
int     con_lin= 61;                               /* Contador de Lineas  */
int     staora = 0;
int     staora2 = 0;
int     i;
int     j, k;
char    cadena[100];
char    cadena2[100];
char    cadena3[100];
int     tpuntos;
char    redimir[2];
int     bonos;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 4)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : relpuntos fecha ini (aaaammdd) fecha fin (aaaammdd) codigoi codigof redimir(s/n) device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (codigo_emp.arr,     "1");
       codigo_emp.len = strlen(codigo_emp.arr);

       strcpy (fecha.arr, argv[1]);
       fecha.len   =      strlen(fecha.arr);

       strcpy (cadena,fecha.arr);
       strorg (cadena,1,4);
       anoi         =          atoi(cadena);

       strcpy (cadena,fecha.arr);
       strorg (cadena,5,2);
       mesi         =          atoi(cadena);

       strcpy (cadena,fecha.arr);
       strorg (cadena,7,2);
       diai         =          atoi(cadena);

       strcpy (fechaf.arr, argv[2]);
       fechaf.len   =      strlen(fechaf.arr);

       strcpy (cadena,fechaf.arr);
       strorg (cadena,1,4);
       anof         =          atoi(cadena);

       strcpy (cadena,fechaf.arr);
       strorg (cadena,5,2);
       mesf         =          atoi(cadena);

       strcpy (cadena,fechaf.arr);
       strorg (cadena,7,2);
       diaf         =          atoi(cadena);

       strcpy (codigoi.arr, argv[3]);
       codigoi.len   =      strlen(codigoi.arr);

       strcpy (codigof.arr, argv[4]);
       codigof.len   =      strlen(codigof.arr);

       strcpy (redimir, argv[5]);

       strcpy (device,    argv[6]);
       strlow (device);

    if (!strpos ("/", argv[7]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,   argv[7]);
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
    abre_impresora("1");

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/

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
    sqlstm.sqhstl[3] = (unsigned long  )6;
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


    /* EXEC SQL DELETE FROM PUNTOSACU
             WHERE FECHA = to_date(:fechaf,'yyyymmdd'); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = "delete from PUNTOSACU  where FECHA=to_date(:b0,'yyyymmdd'\
)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)58;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&fechaf;
    sqlstm.sqhstl[0] = (unsigned long  )22;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL DECLARE C3 CURSOR FOR
             select nvl(puntos_cli,0), nvl(a.puntos_rd,0),  nvl(puntos_cli,0)-nvl(a.puntos_rd,0),
                    a.codigo_cliente, n.nombre, nvl(n.nombre_muni,c.nombre),
                    sum(decode(p.saldo,0,nvl(p.puntos,0),0))
             from   puntosacu a, redimidos p, nits n, ciudades c, clientes ct
             where  a.codigo_cliente  = p.codigo_cliente(+) and
                    a.codigo_cliente  = ct.codigo_cliente   and
                    n.codigo_nit      = ct.codigo_nit       and
                    n.codigo_ciu      = c.codigo            and
                    a.fecha           = to_date(:fechaf,'yyyymmdd')
             group by puntos_cli, a.puntos_rd,
                    a.codigo_cliente, n.nombre, n.nombre_muni, c.nombre
             order by a.puntos_rd desc, puntos_cli desc; */ 


    /* EXEC SQL DECLARE C3A CURSOR FOR
             select sum(nvl(puntos_cli,0))-sum(nvl(puntos_rd,0))
             from   puntosacu
             where  fecha <= to_date(:fecha,'yyyymmdd')-1 and
                    codigo_cliente = :cod_cli; */ 


    /* EXEC SQL DECLARE C1 CURSOR FOR
             select o.codigo_cliente, n.nombre,
                    nvl(n.nombre_muni,c.nombre),
                    o.consecutivo, o.ano_mes, nvl(puntos,0)
             from   nits n, ordenes_c o, ciudades c, clientes ct
             where  n.codigo_nit      = ct.codigo_nit    and
                    ct.codigo_cliente = o.codigo_cliente and
                    n.codigo_ciu      = c.codigo         and
                    to_char(o.fecha_documento,'yyyymmdd') >= :fecha and
                    to_char(o.fecha_documento,'yyyymmdd') <= :fechaf and
                    o.codigo_cliente >= :codigoi and
                    o.codigo_cliente <= :codigof
              order by o.codigo_cliente, o.numero_orden; */ 


    staora  = 0;
    /* EXEC SQL OPEN C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = sq0006;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)76;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&fecha;
    sqlstm.sqhstl[0] = (unsigned long  )22;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&fechaf;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&codigoi;
    sqlstm.sqhstl[2] = (unsigned long  )8;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&codigof;
    sqlstm.sqhstl[3] = (unsigned long  )8;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL FETCH C1 INTO :codigo_cliente, :nomb_clie, :nomb_ciu,
                           :consecutivo, :ano_mes, :puntosc; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 6;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)106;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&nomb_clie;
    sqlstm.sqhstl[1] = (unsigned long  )53;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&nomb_ciu;
    sqlstm.sqhstl[2] = (unsigned long  )32;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&consecutivo;
    sqlstm.sqhstl[3] = (unsigned long  )8;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&ano_mes;
    sqlstm.sqhstl[4] = (unsigned long  )4;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&puntosc;
    sqlstm.sqhstl[5] = (unsigned long  )4;
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
    if (staora == -1405) {
        staora  = 0;
    }
    else if (staora)
             fprintf (stderr, "Error leyendo Ordenes_c (%d)\n", staora);

    codigo_cliente.arr [codigo_cliente.len] = '\0';
    nomb_clie.arr      [nomb_clie.len] = '\0';
    nomb_ciu.arr       [nomb_ciu.len] = '\0';

    sprintf(cod_cli.arr,"%s",codigo_cliente.arr);
    cod_cli.len     =   strlen(cod_cli.arr);
//  printf("cod_cli<%s> codigo_cliente<%s>", cod_cli.arr,codigo_cliente.arr); getchar();

    sprintf(ano_mesa.arr,"%6d",ano_mes);
    ano_mesa.len     =   strlen(ano_mesa.arr);
    sprintf(consecutivoa.arr,"%5.0f",consecutivo);
    consecutivoa.len =   strlen(consecutivoa.arr);

    /* EXEC SQL DECLARE C2 CURSOR FOR
             select nvl(puntos,0)
             from   ordenes_d d
             where  d.consecutivo = :consecutivoa  and
                    d.ano_mes     = :ano_mesa; */ 


/***************************************/

    /* EXEC SQL OPEN C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 6;
    sqlstm.stmt = sq0007;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)144;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&consecutivoa;
    sqlstm.sqhstl[0] = (unsigned long  )10;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    staora2  = 0;
    while (staora2 == 0) {

           /* EXEC SQL FETCH C2 INTO :puntos; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 6;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)166;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&puntos;
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


           staora2  = sqlca.sqlcode;
           if (staora2 ==  1403) break;
           if (staora2 == -1405 || staora2 == 0)
               tpuntos += puntos;
           if (staora2 == -1405) {
               staora2  = 0;
           }
           else if (staora2)
                    fprintf (stderr, "Error leyendo C2 (%d)\n", staora2);
    }

    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 6;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)184;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    staora  = sqlca.sqlcode;
    while (staora == 0) {

          if (strcmp(codigo_cliente.arr,cod_cli.arr)) {
              /* EXEC SQL OPEN C3A; */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 8;
              sqlstm.arrsiz = 6;
              sqlstm.stmt = sq0005;
              sqlstm.iters = (unsigned long  )1;
              sqlstm.offset = (unsigned short)198;
              sqlstm.cud = sqlcud0;
              sqlstm.sqlest = (unsigned char  *)&sqlca;
              sqlstm.sqlety = (unsigned short)0;
              sqlstm.sqhstv[0] = (unsigned char  *)&fecha;
              sqlstm.sqhstl[0] = (unsigned long  )22;
              sqlstm.sqindv[0] = (         short *)0;
              sqlstm.sqharm[0] = (unsigned long )0;
              sqlstm.sqhstv[1] = (unsigned char  *)&cod_cli;
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


              /* EXEC SQL FETCH C3A INTO :saldoant; */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 8;
              sqlstm.arrsiz = 6;
              sqlstm.iters = (unsigned long  )1;
              sqlstm.offset = (unsigned short)220;
              sqlstm.cud = sqlcud0;
              sqlstm.sqlest = (unsigned char  *)&sqlca;
              sqlstm.sqlety = (unsigned short)0;
              sqlstm.sqhstv[0] = (unsigned char  *)&saldoant;
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


                   staora2  = sqlca.sqlcode;
                   if (staora2 == -1405 || staora2 ==  1403 || staora2 == 0) {
                      if (staora2 == -1405 || staora2 ==  1403)
                           saldoant = 0;
                      staora2  = 0;
                   }
                   else if (staora2)
                           fprintf (stderr, "Error leyendo C3A (%d)\n", staora2);
              /* EXEC SQL CLOSE C3A; */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 8;
              sqlstm.arrsiz = 6;
              sqlstm.iters = (unsigned long  )1;
              sqlstm.offset = (unsigned short)238;
              sqlstm.cud = sqlcud0;
              sqlstm.sqlest = (unsigned char  *)&sqlca;
              sqlstm.sqlety = (unsigned short)0;
              sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


              if (puntos_cli > 0) {
//                  if (!strcmp(cod_cli.arr,"MD114")) {
//                     printf("2) %s %6d",cod_cli.arr,puntos_cli);
//                     getchar();
//                  }
                  inserta();
              }
              sprintf(cod_cli.arr,"%s",codigo_cliente.arr);
              cod_cli.len     =   strlen(cod_cli.arr);
              puntos_cli = 0;
          }
          puntos_cli += tpuntos+puntosc;
//          if (!strcmp(cod_cli.arr,"MD114")) {
//             printf("1)%s %s %6d %6d ",consecutivoa.arr,cod_cli.arr,puntos_cli,tpuntos+puntosc);
//             getchar();
//          }

          /* EXEC SQL FETCH C1 INTO :codigo_cliente, :nomb_clie, :nomb_ciu,
                                 :consecutivo, :ano_mes, :puntosc; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 6;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)252;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
          sqlstm.sqhstl[0] = (unsigned long  )8;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&nomb_clie;
          sqlstm.sqhstl[1] = (unsigned long  )53;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&nomb_ciu;
          sqlstm.sqhstl[2] = (unsigned long  )32;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqhstv[3] = (unsigned char  *)&consecutivo;
          sqlstm.sqhstl[3] = (unsigned long  )8;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqhstv[4] = (unsigned char  *)&ano_mes;
          sqlstm.sqhstl[4] = (unsigned long  )4;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqhstv[5] = (unsigned char  *)&puntosc;
          sqlstm.sqhstl[5] = (unsigned long  )4;
          sqlstm.sqindv[5] = (         short *)0;
          sqlstm.sqharm[5] = (unsigned long )0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                                 //, :puntos_rd;

          codigo_cliente.arr [codigo_cliente.len] = '\0';
          nomb_clie.arr      [nomb_clie.len] = '\0';
          nomb_ciu.arr       [nomb_ciu.len] = '\0';

          staora = sqlca.sqlcode;
          if (staora ==  1403) break;
          if (staora == -1405) {
              staora = 0;
          }

          sprintf(ano_mesa.arr,"%6d",ano_mes);
          ano_mesa.len     =   strlen(ano_mesa.arr);
          sprintf(consecutivoa.arr,"%5.0f",consecutivo);
          consecutivoa.len =   strlen(consecutivoa.arr);

          /* EXEC SQL OPEN C2; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 6;
          sqlstm.stmt = sq0007;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)290;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&consecutivoa;
          sqlstm.sqhstl[0] = (unsigned long  )10;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesa;
          sqlstm.sqhstl[1] = (unsigned long  )22;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


          staora2 = 0;
          tpuntos = 0;
          while (staora2 == 0) {

                /* EXEC SQL FETCH C2 INTO :puntos; */ 

{
                struct sqlexd sqlstm;

                sqlstm.sqlvsn = 8;
                sqlstm.arrsiz = 6;
                sqlstm.iters = (unsigned long  )1;
                sqlstm.offset = (unsigned short)312;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)0;
                sqlstm.sqhstv[0] = (unsigned char  *)&puntos;
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


                staora2  = sqlca.sqlcode;
                if (staora2 ==  1403) break;
                if (staora2 == -1405 || staora2 == 0)
                   tpuntos += puntos;
                if (staora2 == -1405) {
                   staora2  = 0;
                }
                else if (staora2)
                        fprintf (stderr, "Error leyendo C2 (%d)\n", staora2);
          }

          /* EXEC SQL CLOSE C2; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 6;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)330;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    }
    inserta();

    /* EXEC SQL OPEN C3; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 6;
    sqlstm.stmt = sq0004;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)344;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&fechaf;
    sqlstm.sqhstl[0] = (unsigned long  )22;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    staora  = 0;
    while (staora == 0) {
           /* EXEC SQL FETCH C3 INTO :puntos_cli, :puntos_rd, :sal_puntos,
                                  :codigo_cliente, :nomb_clie, :nomb_ciu, :puntos_cr; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 7;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)362;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&puntos_cli;
           sqlstm.sqhstl[0] = (unsigned long  )4;
           sqlstm.sqindv[0] = (         short *)0;
           sqlstm.sqharm[0] = (unsigned long )0;
           sqlstm.sqhstv[1] = (unsigned char  *)&puntos_rd;
           sqlstm.sqhstl[1] = (unsigned long  )4;
           sqlstm.sqindv[1] = (         short *)0;
           sqlstm.sqharm[1] = (unsigned long )0;
           sqlstm.sqhstv[2] = (unsigned char  *)&sal_puntos;
           sqlstm.sqhstl[2] = (unsigned long  )4;
           sqlstm.sqindv[2] = (         short *)0;
           sqlstm.sqharm[2] = (unsigned long )0;
           sqlstm.sqhstv[3] = (unsigned char  *)&codigo_cliente;
           sqlstm.sqhstl[3] = (unsigned long  )8;
           sqlstm.sqindv[3] = (         short *)0;
           sqlstm.sqharm[3] = (unsigned long )0;
           sqlstm.sqhstv[4] = (unsigned char  *)&nomb_clie;
           sqlstm.sqhstl[4] = (unsigned long  )53;
           sqlstm.sqindv[4] = (         short *)0;
           sqlstm.sqharm[4] = (unsigned long )0;
           sqlstm.sqhstv[5] = (unsigned char  *)&nomb_ciu;
           sqlstm.sqhstl[5] = (unsigned long  )32;
           sqlstm.sqindv[5] = (         short *)0;
           sqlstm.sqharm[5] = (unsigned long )0;
           sqlstm.sqhstv[6] = (unsigned char  *)&puntos_cr;
           sqlstm.sqhstl[6] = (unsigned long  )4;
           sqlstm.sqindv[6] = (         short *)0;
           sqlstm.sqharm[6] = (unsigned long )0;
           sqlstm.sqphsv = sqlstm.sqhstv;
           sqlstm.sqphsl = sqlstm.sqhstl;
           sqlstm.sqpind = sqlstm.sqindv;
           sqlstm.sqparm = sqlstm.sqharm;
           sqlstm.sqparc = sqlstm.sqharc;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


           codigo_cliente.arr [codigo_cliente.len] = '\0';
           nomb_clie.arr [nomb_clie.len] = '\0';
           nomb_ciu.arr [nomb_ciu.len] = '\0';
           staora = sqlca.sqlcode;
           if (staora ==  1403) break;

           if (con_lin > 60) {
              titulos();
           }
           sprintf(cod_cli.arr,"%s",codigo_cliente.arr);
           cod_cli.len     =   strlen(cod_cli.arr);
           /* EXEC SQL OPEN C3A; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 7;
           sqlstm.stmt = sq0005;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)404;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&fecha;
           sqlstm.sqhstl[0] = (unsigned long  )22;
           sqlstm.sqindv[0] = (         short *)0;
           sqlstm.sqharm[0] = (unsigned long )0;
           sqlstm.sqhstv[1] = (unsigned char  *)&cod_cli;
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


           /* EXEC SQL FETCH C3A INTO :saldoant; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 7;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)426;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&saldoant;
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


                staora2  = sqlca.sqlcode;
                if (staora2 == -1405 || staora2 ==  1403 || staora2 == 0) {
                   if (staora2 == -1405 || staora2 ==  1403)
                        saldoant = 0;
                   staora2  = 0;
                }
                else if (staora2)
                        fprintf (stderr, "Error leyendo C3A (%d)\n", staora2);
           /* EXEC SQL CLOSE C3A; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 7;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)444;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


           imprime();
    }
    sprintf(cadena,"%9d",tsaldoant);
    strcpy(cadena,fmtnum("zz,zzz,zzz",cadena,r_t));
    fprintf (fp,"\n%11s",cadena);

    sprintf(cadena,"%9d",tpuntos_cli);
    strcpy(cadena,fmtnum("zz,zzz,zzz",cadena,r_t));
    fprintf (fp,"%11s",cadena);

    sprintf(cadena,"%9d",tpuntosacu);
    strcpy(cadena,fmtnum("zz,zzz,zzz",cadena,r_t));
    fprintf (fp,"%11s",cadena);

    sprintf(cadena,"%9d",tpuntos_rd);
    strcpy(cadena,fmtnum("zz,zzz,zzz",cadena,r_t));
    fprintf (fp,"%11s",cadena);

    sprintf(cadena,"%9d",tsal_puntos);
    strcpy(cadena,fmtnum("zz,zzz,zzz",cadena,r_t));
    fprintf (fp,"%11s",cadena," ");

    sprintf(cadena,"%9d",tot_saldo);
    strcpy(cadena,fmtnum("zz,zzz,zzz",cadena,r_t));
    fprintf (fp,"%11s",cadena);

    sprintf(cadena,"%9d",tpuntos_cr);
    strcpy(cadena,fmtnum("zz,zzz,zzz",cadena,r_t));
    fprintf (fp,"%11s\n",cadena);

    /* EXEC SQL CLOSE C3; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 7;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)458;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 7;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)472;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    cierre_impresora();

    exit   (0);
}

/************************
* INSERTA()
*    Imprime detalles de ordenes con puntos.
*/
void inserta()
{

   puntos = (int) ((puntos_cli+saldoant)/5000);
//   puntos = (int) ((puntos_cli)/5000);
   bonos  = puntos;
// printf("puntos %d",puntos); getchar();
   if (puntos > 0) {
       puntos_rd = bonos * 5000;
   }
   else  puntos_rd = 0;

   /* EXEC SQL INSERT INTO PUNTOSACU
            VALUES (:puntos_cli, :puntos_rd, :cod_cli, to_date(:fechaf,'yyyymmdd')); */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 7;
   sqlstm.stmt = "insert into PUNTOSACU values (:b0,:b1,:b2,to_date(:b3,'yyy\
ymmdd'))";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)486;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlstm.sqhstv[0] = (unsigned char  *)&puntos_cli;
   sqlstm.sqhstl[0] = (unsigned long  )4;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqhstv[1] = (unsigned char  *)&puntos_rd;
   sqlstm.sqhstl[1] = (unsigned long  )4;
   sqlstm.sqindv[1] = (         short *)0;
   sqlstm.sqharm[1] = (unsigned long )0;
   sqlstm.sqhstv[2] = (unsigned char  *)&cod_cli;
   sqlstm.sqhstl[2] = (unsigned long  )8;
   sqlstm.sqindv[2] = (         short *)0;
   sqlstm.sqharm[2] = (unsigned long )0;
   sqlstm.sqhstv[3] = (unsigned char  *)&fechaf;
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



}

/************************
* IMPRIME()
*    Imprime detalles de ordenes con puntos.
*/
void imprime()
{

/*
  tot_puntos += puntos_cli;
  sprintf(cadena,"%12d",tot_puntos);
  strcpy(cadena,fmtnum("zzz,zzz,zzz",cadena,r_t));
  fprintf (fp,"%11s",cadena);
*/
  tsaldoant+=saldoant;
  sprintf(cadena,"%9d",saldoant);
  strcpy(cadena,fmtnum("z,zzz,zzz",cadena,r_t));
  fprintf (fp,"%11s",cadena);

  tpuntos_cli+=puntos_cli;
  sprintf(cadena,"%9d",puntos_cli);
  strcpy(cadena,fmtnum("z,zzz,zzz",cadena,r_t));
  fprintf (fp,"%11s",cadena);

  tpuntosacu+=(saldoant+puntos_cli);
  sprintf(cadena,"%9d",saldoant+puntos_cli);
  strcpy(cadena,fmtnum("z,zzz,zzz",cadena,r_t));
  fprintf (fp,"%11s",cadena);

  tpuntos_rd+=puntos_rd;
  sprintf(cadena,"%9d",puntos_rd);
  strcpy(cadena,fmtnum("z,zzz,zzz",cadena,r_t));
  fprintf (fp,"%11s ",cadena);

  tsal_puntos+=(sal_puntos+saldoant);
  sprintf(cadena,"%9d",sal_puntos+saldoant);
  strcpy(cadena,fmtnum("z,zzz,zzz",cadena,r_t));
  fprintf (fp,"%11s",cadena);

  tot_saldo += (puntos_cli - puntos_rd + saldoant);
  sprintf(cadena,"%9d",tot_saldo);
  strcpy(cadena,fmtnum("z,zzz,zzz",cadena,r_t));
  fprintf (fp,"%11s",cadena);

  tpuntos_cr+=puntos_cr;
  sprintf(cadena,"%9d",puntos_cr);
  strcpy(cadena,fmtnum("z,zzz,zzz",cadena,r_t));
  fprintf (fp,"%11s",cadena);

  strorg(nomb_clie.arr,1,46);
  fprintf (fp," %-6s %-46s %-20s\n",codigo_cliente.arr,nomb_clie.arr,nomb_ciu.arr);

  con_lin++;
  strlow (redimir);
  if (!strcmp(redimir,"s")) {
     puntos = (int) ((saldoant+puntos_cli)/5000);
     bonos  = puntos;
//   printf("puntos %d",puntos); getchar();
     if (puntos > 0) {
        valor  = 250000;
        sprintf(valora.arr,"%15.2f",valor);
        valora.len = strlen(valora.arr);
        puntos = 5000;
        sprintf(puntosa.arr,"%d",puntos);
        puntosa.len = strlen(puntosa.arr);
        for (i=1;i<=bonos;i++) {
             /* EXEC SQL select numero+1
                      into bonoa
                      from control_bon for update; */ 

{
             struct sqlexd sqlstm;

             sqlstm.sqlvsn = 8;
             sqlstm.arrsiz = 7;
             sqlstm.stmt = "select (numero+1) into :b0  from control_bon  fo\
r update ";
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)516;
             sqlstm.selerr = (unsigned short)1;
             sqlstm.cud = sqlcud0;
             sqlstm.sqlest = (unsigned char  *)&sqlca;
             sqlstm.sqlety = (unsigned short)0;
             sqlstm.sqhstv[0] = (unsigned char  *)&bonoa;
             sqlstm.sqhstl[0] = (unsigned long  )10;
             sqlstm.sqindv[0] = (         short *)0;
             sqlstm.sqharm[0] = (unsigned long )0;
             sqlstm.sqphsv = sqlstm.sqhstv;
             sqlstm.sqphsl = sqlstm.sqhstl;
             sqlstm.sqpind = sqlstm.sqindv;
             sqlstm.sqparm = sqlstm.sqharm;
             sqlstm.sqparc = sqlstm.sqharc;
             sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


             /* EXEC SQL INSERT INTO REDIMIDOS
                      VALUES (:codigo_cliente,:bonoa,to_date(to_char(sysdate,'DD-MON-YYYY')),'',:puntosa,:valora,:valora,0); */ 

{
             struct sqlexd sqlstm;

             sqlstm.sqlvsn = 8;
             sqlstm.arrsiz = 7;
             sqlstm.stmt = "insert into REDIMIDOS values (:b0,:b1,to_date(to\
_char(sysdate ,'DD-MON-YYYY')),'',:b2,:b3,:b3,0)";
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)534;
             sqlstm.cud = sqlcud0;
             sqlstm.sqlest = (unsigned char  *)&sqlca;
             sqlstm.sqlety = (unsigned short)0;
             sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
             sqlstm.sqhstl[0] = (unsigned long  )8;
             sqlstm.sqindv[0] = (         short *)0;
             sqlstm.sqharm[0] = (unsigned long )0;
             sqlstm.sqhstv[1] = (unsigned char  *)&bonoa;
             sqlstm.sqhstl[1] = (unsigned long  )10;
             sqlstm.sqindv[1] = (         short *)0;
             sqlstm.sqharm[1] = (unsigned long )0;
             sqlstm.sqhstv[2] = (unsigned char  *)&puntosa;
             sqlstm.sqhstl[2] = (unsigned long  )10;
             sqlstm.sqindv[2] = (         short *)0;
             sqlstm.sqharm[2] = (unsigned long )0;
             sqlstm.sqhstv[3] = (unsigned char  *)&valora;
             sqlstm.sqhstl[3] = (unsigned long  )22;
             sqlstm.sqindv[3] = (         short *)0;
             sqlstm.sqharm[3] = (unsigned long )0;
             sqlstm.sqhstv[4] = (unsigned char  *)&valora;
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


             /* EXEC SQL update control_bon
                      set numero = numero + 1,
                          fecha  = sysdate; */ 

{
             struct sqlexd sqlstm;

             sqlstm.sqlvsn = 8;
             sqlstm.arrsiz = 7;
             sqlstm.stmt = "update control_bon  set numero=(numero+1),fecha=\
sysdate ";
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)568;
             sqlstm.cud = sqlcud0;
             sqlstm.sqlest = (unsigned char  *)&sqlca;
             sqlstm.sqlety = (unsigned short)0;
             sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        }
     }
  }

}


/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{

 con_pag++;
 fprintf(fp,"%s",salte_pagina);
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
 fprintf(fp,"\n%20s%s\n"," "," RELACION DE PUNTOS LABOCOSTA");
 fprintf(fp,"%15s%s%s\n"," "," PROGRAMA DE FILELIDAD - PUNTOS LABOCOSTA",ancho_off);
 fecha_system(cadena);
 if (anoi==anof && mesi==mesf && diai==diaf)
    fprintf(fp,"%s%s%-44s%s%2d de %s / %d",condensado_on,"FECHA PROCESO : ",cadena,"DIA : ",diai,mes[mesi-1],anoi);
 else
    fprintf(fp,"%s%s%-44s%s%2d de %s / %d %s %2d de %s / %d",condensado_on,"FECHA PROCESO : ",cadena,"DEL : ",diai,mes[mesi-1],anoi," AL : ",diaf,mes[mesf-1],anof);

 fprintf(fp,"%23s %d\n\n","PAGINA ",con_pag);
 fprintf(fp,"%s\n",  " SALDO     PUNTOS                 PUNTOS     SALDO      TOTAL      PUNTOS");
 fprintf(fp,"%s\n",  " ANTERIOR  GANADOS       PUNTOS   REDIMIDOS  PUNTOS     SALDO      ACREDITADOS  CODIGO NOMBRE CLIENTE                                 CIUDAD");
 strcpy(cadena,mes[mesi-1]);
 strorg (cadena,1,3);
 strcpy(cadena2,mes[mesf-1]);
 strorg (cadena2,1,3);
// fprintf(fp," A %s/%02d  DEL PER.  ACUMULADOS   DEL PER.   A %s/%02d   ACUMULADO                                                                       \n\n",cadena,diai,cadena2,diaf);
 fprintf(fp," A Sep/30  DEL PER.  ACUMULADOS   DEL PER.   A %s/%02d   ACUMULADO                                                                       \n\n",cadena2,diaf);
 con_lin = 11;     // z,zzz,zzz  z,zzz,zzz  z,zzz,zzz  z,zzz,zzz  z,zzz,zzz z,zzz,zzz  z,zzz,zzz

}



