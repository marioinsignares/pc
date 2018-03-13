
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
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    ".\\cupones.pc"
};


static const unsigned long sqlctx = 1214601291;


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
   unsigned char    *sqhstv[8];
   unsigned long    sqhstl[8];
	    short   *sqindv[8];
   unsigned long    sqharm[8];
   unsigned long     *sqharc[8];
} sqlstm = {8,8};

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

 static const char *sq0002 = 
"select o.numero_orden ,o.codigo_cliente ,n.nombre ,nvl(n.nombre_muni,c.nombr\
e) ,to_char(o.fecha_control,'DD-MON-YYYY') ,o.consecutivo ,o.ano_mes ,nvl(o.pu\
ntos,0)  from nits n ,ordenes_c o ,ciudades c ,clientes ct where (((n.codigo_n\
it=ct.codigo_nit and ct.codigo_cliente=o.codigo_cliente) and n.codigo_ciu=c.co\
digo) and o.numero_orden=:b0) order by o.codigo_cliente,o.numero_orden        \
    ";
 static const char *sq0003 = 
"select o.numero_orden ,o.codigo_cliente ,n.nombre ,nvl(n.nombre_muni,c.nombr\
e) ,to_char(o.fecha_control,'DD-MON-YYYY') ,o.consecutivo ,o.ano_mes ,nvl(o.pu\
ntos,0)  from nits n ,ordenes_c o ,ciudades c ,clientes ct where (((n.codigo_n\
it=ct.codigo_nit and ct.codigo_cliente=o.codigo_cliente) and n.codigo_ciu=c.co\
digo) and to_char(o.fecha_documento,'yyyymmdd')=:b0) order by o.codigo_cliente\
,o.numero_orden            ";
 static const char *sq0004 = 
"select nvl(puntos,0)  from ordenes_d d where (d.consecutivo=:b0 and d.ano_me\
s=:b1)           ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,122,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,392,0,9,159,0,1,1,0,1,0,1,9,0,0,
46,0,0,3,415,0,9,173,0,1,1,0,1,0,1,9,0,0,
64,0,0,2,0,0,13,179,0,8,0,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,
0,2,3,0,0,2,3,0,0,
110,0,0,3,0,0,13,183,0,8,0,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,
0,2,3,0,0,2,3,0,0,
156,0,0,5,140,0,4,209,0,5,1,0,1,0,2,9,0,0,2,4,0,0,2,9,0,0,2,4,0,0,1,4,0,0,
190,0,0,4,93,0,9,222,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
212,0,0,4,0,0,13,226,0,1,0,0,1,0,2,3,0,0,
230,0,0,4,0,0,15,242,0,0,0,0,1,0,
244,0,0,6,0,0,30,248,0,0,0,0,1,0,
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

void ver_tipo_material();
void tipos1();
void tipos2();
void leer_material();
void leer_coloresv();
void leer_servicios();
void imprimo_servicios();
void totales();
void Rx_procesor();
void borro_puntos();
void titulos();
void hacer_asiento();
void reverso_asiento();
void ver_inf();

				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

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

/* VARCHAR orden          [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } orden;

double  nit_asesor;
double  nit_prof;
int     ano_mes;
int     puntos;
int     puntosc;
int     puntos_ac;
/* VARCHAR estado         [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } estado;

                                 /* Ordenes_d (C2) */
int     cantidad;
int     tcantidad;
/* VARCHAR ano_mesa       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesa;

/* VARCHAR consecutivoa   [08]; */ 
struct { unsigned short len; unsigned char arr[8]; } consecutivoa;

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
#define TITULO_1 "TEODORO TARUD & CIA LTDA."
#define TITULO_2 "Nit. 890.112.740-2"
#define A_F1     "###,###.##"
char *fmtnum(), r_t[100];
int     con_len;                                   /* Contador de Paginas */
int     con_lin= 22;                               /* Contador de Lineas  */
int     staora = 0;
int     staora2 = 0;
int     i;
char    cadena[100];
char    cadena2[100];
int     tpuntos;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 4)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : ordenes fecha (aaaammdd) orden device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (fecha.arr, argv[1]);
       fecha.len   =      strlen(fecha.arr);
       strcpy (orden.arr, argv[2]);
       orden.len   =      strlen(orden.arr);
       strcpy (device,    argv[3]);
       strlow (device);

    if (!strpos ("/", argv[4]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,   argv[4]);
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

  if (strcmp(orden.arr,"0")) {
    /* EXEC SQL DECLARE C1 CURSOR FOR
             select o.numero_orden, o.codigo_cliente, n.nombre,
                    nvl(n.nombre_muni,c.nombre),
                    to_char(o.fecha_control,'DD-MON-YYYY'),
                    o.consecutivo, o.ano_mes, nvl(o.puntos,0)
             from   nits n, ordenes_c o, ciudades c, clientes ct
             where  n.codigo_nit      = ct.codigo_nit    and
                    ct.codigo_cliente = o.codigo_cliente and
                    n.codigo_ciu      = c.codigo         and
                    o.numero_orden    = :orden
             order by o.codigo_cliente, o.numero_orden; */ 

    /* EXEC SQL OPEN C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.stmt = sq0002;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)28;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&orden;
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


  }
  else {
    /* EXEC SQL DECLARE C1A CURSOR FOR
             select o.numero_orden, o.codigo_cliente, n.nombre,
                    nvl(n.nombre_muni,c.nombre),
                    to_char(o.fecha_control,'DD-MON-YYYY'),
                    o.consecutivo, o.ano_mes, nvl(o.puntos,0)
             from   nits n, ordenes_c o, ciudades c, clientes ct
             where  n.codigo_nit      = ct.codigo_nit    and
                    ct.codigo_cliente = o.codigo_cliente and
                    n.codigo_ciu      = c.codigo         and
                    to_char(o.fecha_documento,'yyyymmdd') = :fecha
             order by o.codigo_cliente, o.numero_orden; */ 

    /* EXEC SQL OPEN C1A; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)46;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&fecha;
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


  }
    staora  = 0;
    while (staora == 0) {

          if (strcmp(orden.arr,"0")) {
             /* EXEC SQL FETCH C1 INTO :numero_orden, :codigo_cliente, :nomb_clie, :nomb_ciu,
                                    :fecha_control, :consecutivo, :ano_mes, :puntosc; */ 

{
             struct sqlexd sqlstm;

             sqlstm.sqlvsn = 8;
             sqlstm.arrsiz = 8;
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)64;
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
             sqlstm.sqhstv[7] = (unsigned char  *)&puntosc;
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


          }
          else {
             /* EXEC SQL FETCH C1A INTO :numero_orden, :codigo_cliente, :nomb_clie, :nomb_ciu,
                                     :fecha_control, :consecutivo, :ano_mes, :puntosc; */ 

{
             struct sqlexd sqlstm;

             sqlstm.sqlvsn = 8;
             sqlstm.arrsiz = 8;
             sqlstm.iters = (unsigned long  )1;
             sqlstm.offset = (unsigned short)110;
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
             sqlstm.sqhstv[7] = (unsigned char  *)&puntosc;
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
               select nvl(puntos,0)
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
          sqlstm.arrsiz = 8;
          sqlstm.stmt = "select nvl(profesional,' ') ,nvl(nit_prof,0) ,nvl(a\
sesor,' ') ,nvl(nit_asesor,0) into :b0,:b1,:b2,:b3  from ordenes_r where numer\
o_orden=:b4";
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)156;
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
          sqlstm.arrsiz = 8;
          sqlstm.stmt = sq0004;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)190;
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
                sqlstm.arrsiz = 8;
                sqlstm.iters = (unsigned long  )1;
                sqlstm.offset = (unsigned short)212;
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

          if (tpuntos+puntosc > 0) {
              titulos();
          }
          tpuntos = 0;
          /* EXEC SQL CLOSE C2; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 8;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)230;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    }
    fprintf(fp,"\r");
//    fprintf(fp,"%c\r",11);
    cierre_impresora();

    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 8;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)244;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
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
  char fechas[20];

  strcpy(fechas,fecha_control.arr);
  strorg(fechas,1,11);
  fprintf (fp,"%s%s%-54s%-54s\n%33s%s%s%s%7.0f%s%s%40s%s%s%7.0f%s%s%s\n\n\n\n\n\n",condensado_off,diezcpi,fechas,fechas," ",enfatizado_on,ancho_on,alto_on,numero_orden,ancho_off,alto_off," ",ancho_on,alto_on,numero_orden,ancho_off,alto_off,enfatizado_off);
  strorg(nomb_clie.arr,1,34);
  fprintf (fp,"%16s%s%-35s%19s%-35s\n"," ",enfatizado_on,nomb_clie.arr," ",nomb_clie.arr);
  fprintf (fp,"%9s%-17s%-25s%11s%-17s%-25s\n\n"," ",codigo_cliente.arr,nomb_ciu.arr," ",codigo_cliente.arr,nomb_ciu.arr);
  sprintf(cadena,"%12.0f",nit_prof);
  strcpy(cadena,fmtnum("zz,zzz,zzz,zz9",cadena,r_t));
  strorg(profesional.arr,31);
  fprintf (fp,"%19s%-32s%21s%-32s\n%25s%-26s%27s%-26s\n"," ",profesional.arr," ",profesional.arr," ",cadena," ",cadena);
  sprintf(cadena,"%12.0f",nit_asesor);
  strcpy(cadena,fmtnum("zz,zzz,zzz,zz9",cadena,r_t));
  strorg(asesor.arr,37);
  fprintf (fp,"%13s%-38s%16s%-38s\n%25s%-26s%27s%-26s\n\n\n\n\n"," ",asesor.arr," ",asesor.arr," ",cadena," ",cadena);
  sprintf(cadena,"%6d",tpuntos+puntosc);
  strcpy(cadena,fmtnum("zzz,zz9",cadena,r_t));
  fprintf (fp,"%22s%-32s%22s%-8s\n","PUNTOS DE ESTA ORDEN: ",cadena,"PUNTOS DE ESTA ORDEN: ",cadena);
  con_lin = 19;
  for (i=0;i<22-con_lin;i++)
       fprintf(fp,"\n");
}


