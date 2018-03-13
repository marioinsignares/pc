
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
    ".\\concurst.pc"
};


static const unsigned long sqlctx = 1215695629;


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

 static const char *sq0003 = 
"select o.numero_orden ,o.codigo_cliente ,n.nombre ,nvl(n.nombre_muni,c.nombr\
e) ,to_char(o.fecha_control,'DD-MON-YYYY') ,o.consecutivo ,o.ano_mes  from nit\
s n ,ordenes_c o ,ciudades c ,clientes ct where ((((((n.codigo_nit=ct.codigo_n\
it and ct.codigo_cliente=o.codigo_cliente) and n.codigo_ciu=c.codigo) and to_c\
har(o.fecha_documento,'yyyymmdd')>=:b0) and to_char(o.fecha_documento,'yyyymmd\
d')<=:b1) and o.codigo_cliente>=:b2) and o.codigo_cliente<=:b3) order by o.cod\
igo_cliente,o.numero_orden            ";
 static const char *sq0004 = 
"select decode(substr(codigo_articulo,1,1),'4',1,'5',1,'B',1,0) ,decode(subst\
r(codigo_articulo,3,2),'50',1,'51',1,'52',1,'54',1,'55',1,'56',1,'57',1,0) ,ca\
ntidad ,(cantidad* valor_venta)  from ordenes_d d where (d.consecutivo=:b0 and\
 d.ano_mes=:b1)           ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,165,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,140,0,4,190,0,4,1,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,
58,0,0,3,504,0,9,216,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
88,0,0,3,0,0,13,220,0,7,0,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,
0,2,3,0,0,
130,0,0,5,140,0,4,245,0,5,1,0,1,0,2,9,0,0,2,4,0,0,2,9,0,0,2,4,0,0,1,4,0,0,
164,0,0,4,258,0,9,258,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
186,0,0,4,0,0,13,263,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,2,4,0,0,
216,0,0,4,0,0,15,286,0,0,0,0,1,0,
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

/* VARCHAR nomb_clie      [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_clie;

/* VARCHAR nomb_ciu       [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciu;

/* VARCHAR fecha_control  [70]; */ 
struct { unsigned short len; unsigned char arr[70]; } fecha_control;

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
int     cuantos;
/* VARCHAR clase          [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } clase;

/* VARCHAR tipo           [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } tipo;

/* VARCHAR estado         [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } estado;

/* VARCHAR orden          [12]; */ 
struct { unsigned short len; unsigned char arr[12]; } orden;

                                 /* Ordenes_d (C2) */
int     cantidad;
double  valor;
int     tcantidad;
/* VARCHAR ano_mesa       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesa;

/* VARCHAR consecutivoa   [08]; */ 
struct { unsigned short len; unsigned char arr[8]; } consecutivoa;


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
int     tot_transit;
double  valort;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 4)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : relpuntos fecha ini (aaaammdd) fecha fin (aaaammdd) codigoi codigof device userid/password\n");
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

       strcpy (device,    argv[5]);
       strlow (device);

    if (!strpos ("/", argv[6]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,   argv[6]);
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


    /* EXEC SQL DECLARE C1 CURSOR FOR
             select o.numero_orden, o.codigo_cliente, n.nombre,
                    nvl(n.nombre_muni,c.nombre),
                    to_char(o.fecha_control,'DD-MON-YYYY'),
                    o.consecutivo, o.ano_mes
             from   nits n, ordenes_c o, ciudades c, clientes ct
             where  n.codigo_nit      = ct.codigo_nit    and
                    ct.codigo_cliente = o.codigo_cliente and
                    n.codigo_ciu      = c.codigo         and
                    to_char(o.fecha_documento,'yyyymmdd') >= :fecha  and
                    to_char(o.fecha_documento,'yyyymmdd') <= :fechaf and
                    o.codigo_cliente >= :codigoi  and
                    o.codigo_cliente <= :codigof
              order by o.codigo_cliente, o.numero_orden; */ 



    /* EXEC SQL OPEN C1; */ 

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


    staora  = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C1 INTO :numero_orden, :codigo_cliente, :nomb_clie, :nomb_ciu,
                                 :fecha_control, :consecutivo, :ano_mes; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 7;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)88;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&numero_orden;
          sqlstm.sqhstl[0] = (unsigned long  )8;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&codigo_cliente;
          sqlstm.sqhstl[1] = (unsigned long  )8;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&nomb_clie;
          sqlstm.sqhstl[2] = (unsigned long  )53;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqhstv[3] = (unsigned char  *)&nomb_ciu;
          sqlstm.sqhstl[3] = (unsigned long  )32;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqhstv[4] = (unsigned char  *)&fecha_control;
          sqlstm.sqhstl[4] = (unsigned long  )72;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqhstv[5] = (unsigned char  *)&consecutivo;
          sqlstm.sqhstl[5] = (unsigned long  )8;
          sqlstm.sqindv[5] = (         short *)0;
          sqlstm.sqharm[5] = (unsigned long )0;
          sqlstm.sqhstv[6] = (unsigned char  *)&ano_mes;
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


          staora  = sqlca.sqlcode;
          if (staora ==  1403) break;
          if (staora == -1405) {
              staora  = 0;
          }
          else if (staora)
                  fprintf (stderr, "Error leyendo Ordenes_c (%d)\n", staora);
          codigo_cliente.arr [codigo_cliente.len] = '\0';
          nomb_clie.arr      [nomb_clie.len]      = '\0';
          nomb_ciu.arr       [nomb_ciu.len]       = '\0';
          fecha_control.arr  [fecha_control.len]  = '\0';

          sprintf(ano_mesa.arr,"%6d",ano_mes);
          ano_mesa.len     =   strlen(ano_mesa.arr);
          sprintf(consecutivoa.arr,"%5.0f",consecutivo);
          consecutivoa.len =   strlen(consecutivoa.arr);

          /* EXEC SQL DECLARE C2 CURSOR FOR
               select decode(substr(codigo_articulo,1,1),'4',1,'5',1,'B',1,0), decode(substr(codigo_articulo,3,2),'50',1,'51',1,'52',1,'54',1,'55',1,'56',1,'57',1,0), cantidad, cantidad*valor_venta
               from   ordenes_d d
               where  d.consecutivo = :consecutivoa  and
                      d.ano_mes     = :ano_mesa; */ 


          /* EXEC SQL select nvl(profesional,' '), nvl(nit_prof,0), nvl(asesor,' '), nvl(nit_asesor,0)
                   into  :profesional, :nit_prof, :asesor, :nit_asesor
                   from   ordenes_r
                   where  numero_orden    = :numero_orden; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 7;
          sqlstm.stmt = "select nvl(profesional,' ') ,nvl(nit_prof,0) ,nvl(a\
sesor,' ') ,nvl(nit_asesor,0) into :b0,:b1,:b2,:b3  from ordenes_r where numer\
o_orden=:b4";
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)130;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&profesional;
          sqlstm.sqhstl[0] = (unsigned long  )72;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&nit_prof;
          sqlstm.sqhstl[1] = (unsigned long  )8;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&asesor;
          sqlstm.sqhstl[2] = (unsigned long  )72;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqhstv[3] = (unsigned char  *)&nit_asesor;
          sqlstm.sqhstl[3] = (unsigned long  )8;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqhstv[4] = (unsigned char  *)&numero_orden;
          sqlstm.sqhstl[4] = (unsigned long  )8;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



          if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
              fprintf (stderr, "Error leyendo Ordenes_r C8(%d)\n", sqlca.sqlcode);

          asesor.arr         [asesor.len]      = '\0';
          profesional.arr    [profesional.len] = '\0';

/***************************************/

          /* EXEC SQL OPEN C2; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 7;
          sqlstm.stmt = sq0004;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)164;
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
          cuantos  = 0;
          while (staora2 == 0) {

                /* EXEC SQL FETCH C2 INTO :clase, :tipo, :cantidad, :valor ; */ 

{
                struct sqlexd sqlstm;

                sqlstm.sqlvsn = 8;
                sqlstm.arrsiz = 7;
                sqlstm.iters = (unsigned long  )1;
                sqlstm.offset = (unsigned short)186;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)0;
                sqlstm.sqhstv[0] = (unsigned char  *)&clase;
                sqlstm.sqhstl[0] = (unsigned long  )5;
                sqlstm.sqindv[0] = (         short *)0;
                sqlstm.sqharm[0] = (unsigned long )0;
                sqlstm.sqhstv[1] = (unsigned char  *)&tipo;
                sqlstm.sqhstl[1] = (unsigned long  )5;
                sqlstm.sqindv[1] = (         short *)0;
                sqlstm.sqharm[1] = (unsigned long )0;
                sqlstm.sqhstv[2] = (unsigned char  *)&cantidad;
                sqlstm.sqhstl[2] = (unsigned long  )4;
                sqlstm.sqindv[2] = (         short *)0;
                sqlstm.sqharm[2] = (unsigned long )0;
                sqlstm.sqhstv[3] = (unsigned char  *)&valor;
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


                staora2  = sqlca.sqlcode;
                if (staora2 ==  1403) break;
                if (staora2 == -1405 || staora2 == 0) {
                   cuantos += cantidad;
                   valort  += valor;
                }
                if (staora2 == -1405) {
                   staora2  = 0;
                }
                else if (staora2)
                        fprintf (stderr, "Error leyendo C2 (%d)\n", staora2);
          }

          if ( !strcmp(clase.arr,"1") && cuantos >= 2 && valor > 0 ) {
              tot_transit++;
              if (con_lin > 60) {
                 titulos();
              }
              imprime();
              cuantos = 0;
          }

        /* EXEC SQL CLOSE C2; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 7;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)216;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    }
    sprintf(cadena,"%6.0d",tot_transit);
    strcpy(cadena,fmtnum("zzz,zzz",cadena,r_t));
    fprintf (fp,"\nTotal cupones: %7s\n",cadena);

    cierre_impresora();

    exit   (0);
}

/************************
* IMPRIME()
*    Imprime detalles de ordenes con puntos.
*/
void imprime()
{

  strorg(nomb_clie.arr,1,34);
  strorg(profesional.arr,1,30);
  strorg(asesor.arr,1,28);
  sprintf(cadena,"%9.0f",nit_prof);
  strcpy(cadena,fmtnum("zzzzz,zzz,zzz",cadena,r_t));
  sprintf(cadena2,"%9.0f",nit_asesor);
  strcpy(cadena2,fmtnum("zzzz,zzz,zzz",cadena2,r_t));
  sprintf(cadena3,"%6d",0);
  strcpy(cadena3,fmtnum("z,zzz",cadena3,r_t));
  fprintf (fp,"%6s %7.0f %5s %-34s %-20s %-30s %-13s %-28s %12s\n",cadena3,numero_orden,codigo_cliente.arr,nomb_clie.arr,nomb_ciu.arr,profesional.arr,cadena,asesor.arr,cadena2);
  con_lin++;

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
 fprintf(fp,"\n%20s%s%s\n\n"," "," RELACION DE CUPONES TRANSITIONS ",ancho_off);
 fecha_system(cadena);
 if (anoi==anof && mesi==mesf && diai==diaf)
    fprintf(fp,"%s%s%-44s%s%2d de %s / %d",condensado_on,"FECHA PROCESO : ",cadena,"DIA : ",diai,mes[mesi-1],anoi);
 else
    fprintf(fp,"%s%s%-44s%s%2d de %s / %d %s %2d de %s / %d",condensado_on,"FECHA PROCESO : ",cadena,"DEL : ",diai,mes[mesi-1],anoi," AL : ",diaf,mes[mesf-1],anof);

 fprintf(fp,"%54s %d\n\n","PAGINA ",con_pag);
 fprintf(fp,"%s\n\n","PUNTOS ORDEN   CODIGO NOMBRE CLIENTE                    CIUDAD               PROFESIONAL                       CEDULA     ASESOR                            CEDULA");
 con_lin = 9;

}


