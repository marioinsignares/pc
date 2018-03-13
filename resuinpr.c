
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
    ".\\resuinpr.pc"
};


static const unsigned long sqlctx = 1257527639;


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
   unsigned char    *sqhstv[20];
   unsigned long    sqhstl[20];
	    short   *sqindv[20];
   unsigned long    sqharm[20];
   unsigned long     *sqharc[20];
} sqlstm = {8,20};

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
"select clase_material ,categoria ,nombre  from categorias            ";
 static const char *sq0002 = 
"valor_salidas_p,total_danos,valor_danos_p,total_entradas_ano,total_salidas_a\
no,valor_entradas_ano_p,valor_salidas_ano_p,total_danos_ano,valor_danos_ano_p \
order by almacen.clase,categoria,almacen.codigo_articulo            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,208,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,3,69,0,9,286,0,0,0,0,1,0,
42,0,0,3,0,0,13,290,0,3,0,0,1,0,2,9,0,0,2,3,0,0,2,9,0,0,
68,0,0,3,0,0,15,323,0,0,0,0,1,0,
82,0,0,2,1246,0,9,327,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
120,0,0,2,0,0,13,331,0,20,0,0,1,0,2,9,0,0,2,3,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
214,0,0,2,0,0,15,415,0,0,0,0,1,0,
228,0,0,4,0,0,30,417,0,0,0,0,1,0,
242,0,0,5,355,0,4,646,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
};


/*******************************************************************
* (MTL). Version 1.0 - Rev 1.2 - Feb. 25/98.
*
* repoinv.pc : Reporte actual de inventario.
*
* Uso : resuinv AAAAMM device pagina_ini pagina_fin clase_ini
*               categoria_ini categoria_fin userid/password
*
* Martin A. Toloza L. Creado Febrero 25-1998.
* Teodoro tarud & cia ltda.
*
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void acumula_totales();
void recuperar();
void total_subcategoria();
void arreglo_el_codigo(char codigo_a[], char codigo_s[]);
void total_categoria();
void total_clase();
void totales_de_clase(char mensaje[], int i);
void totaliza(char mensaje[], int i);
void borra_mes_anterior();
void borra_acumulados(int i);
void titulos();
void mov_cat();

				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Almacen (C1) */
/* VARCHAR clase          [4]; */ 
struct { unsigned short len; unsigned char arr[4]; } clase;

int     categoria;
int     a2k;
int     ope;
/* VARCHAR codigo_articulo[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigo_articulo;

/* VARCHAR nombre         [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nombre;

double  existencia;
double  ano_mes;
double  costo_promedio;
double  costo_reemplazo;
double  total_entradas;
double  total_salidas;
double  valor_entradas;
double  valor_salidas;
double  total_danos;
double  valor_danos;
double  total_entradas_ano;
double  total_salidas_ano;
double  valor_entradas_ano;
double  valor_salidas_ano;
double  total_danos_ano;
double  valor_danos_ano;
/* VARCHAR fechat         [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechat;

/* VARCHAR clase_ini      [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } clase_ini;

/* VARCHAR clase_fin      [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } clase_fin;

/* VARCHAR cat_ini        [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cat_ini;

/* VARCHAR cat_fin        [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cat_fin;

                                 /* Categorias (C2) */
                                 /* Procesos_acu (C3) */
double  valor_promedio;
/* VARCHAR clase_r        [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } clase_r;

/* VARCHAR fechat2        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechat2;


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
#define	TITULO_1 "LABORATORIO OFTALMICO DE LA COSTA S.A."
#define	TITULO_2 "REPORTE ACTUAL DE INVENTARIO AR -  "
#define TITULO_22 "RESUMEN DE CATEGORIAS  **EN PESOS**"
#define	TITULO_3 "      C O D I G O       EXISTENCIA  ENTRADAS   SALIDAS   DA\\OS     TOTAL   EXISTENCIA      EXISTENCIA      ENTRADAS        SALIDAS        DA\\OS     C O S T O"
#define	TITULO_4 "                            A         DEL        DEL      DEL     SALIDAS      A            A  COSTO      VALORIZADAS    VALORIZADAS   VALORIZADOS  DE SALIDAS"
#define	TITULO_5 "D E S C R I P C I O N   "
#define	TITULO_6 "   MES/      MES/      MES/      MES/   "
#define TITULO_7 "      PROMEDIO          MES/            MES/          MES/       MES/"
#define	TITULO_8 "                                      A\\O       A\\O       A\\O       A\\O                     REEMPLAZO         A\\O             A\\O           A\\O        A\\O"
#define	TITULO_9 "       Clase "

int 	con_pag;	                           /* Contador de paginas */
int 	con_lin;	                           /* Contador de lineas */
int 	ini_pag;                                   /* Pagina inicial */
int 	fin_pag;                                   /* Pagina final   */
int	staora = 0;
int	oraest = 0;

int 	categoria_s;
char    ano_mesa[20];
double  existencia_ant;
double  total;
                                         /* Vector de acumulados */
struct acu {
            double total_existencia_ant;
            double total_entradas;
            double total_entradas_ano;
            double total_salidas;
            double total_salidas_ano;
            double total_danos;
            double total_danos_ano;
            double existencia;
            double existencia_promedio;
            double existencia_reemplazo;
            double valor_entradas;
            double valor_entradas_ano;
            double valor_salidas;
            double valor_salidas_ano;
            double valor_danos;
            double valor_danos_ano;
           };
struct acu vect[4];

struct tit1 {
             char   primas[70];
             char   lentec[70];
             char   semitc[70];
             char   contsp[70];
             char   otrsum[70];
            };
struct tit1 vector1[2000];

struct tit2 {
             char   clases[50];
             char   vidrio[50];
            };
struct tit2 vector2[2000];

int     categoria_r;
int     imprimio_clase = 0;
int     imprimio_categoria = 0;
int     salte = 1;
char    recobrar[9];
char    cadena[60];
char    codigo_a[20];
char    codigo_s[20];
char    codigo_t[20];
int 	ano;
int 	anoi;
int     mesi;
double  ano_mesi;
char    fecha[20];

void main(argc, argv)
int	argc;
char	*argv[];
{
char    device[20];
char    anos[20];
char    mess[20];
int     categoria_ini;
int     categoria_fin;
int	status = 0;
int     i;

    if (argc < 9)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : repoinv AAAAMM device pagina_ini pagina_fin clase_ini categoria_ini categoria_fin userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (device, argv[2]);
       strlow (device);

       ini_pag        = atoi(argv[3]);
       fin_pag        = atoi(argv[4]);
       strcpy(recobrar,"N");
       if (ini_pag > 1)
           strcpy(recobrar,"S");

       strcpy(clase_ini.arr,argv[5]);
       clase_ini.len   =    strlen(clase_ini.arr);
       strcpy(clase_fin.arr,"Z");
       if(strcmp(clase_ini.arr,""))
          strcpy(clase_fin.arr,argv[5]);
       clase_fin.len   =    strlen(clase_fin.arr);

       strcpy(cat_ini.arr,argv[6]);
       cat_ini.len   =    strlen(cat_ini.arr);
       strcpy(cat_fin.arr,argv[7]);
       cat_fin.len   =    strlen(cat_fin.arr);
       categoria_ini=atoi(argv[6]);
       categoria_fin=atoi(argv[7]);


    if (!strpos ("/", argv[8]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,   argv[8]);
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

  strcpy (fecha,   argv[1]);
  ano_mesi = atof(fecha);
  strcpy(fechat.arr,fecha);
  fechat.len   =    strlen(fechat.arr);
  if ( (int)(strlen(fechat.arr)) < 6 ) {
      printf ("Fecha Incorrecta.\n");
      exit (1);
  }
  sprintf(fechat2.arr,"%6.0f",ano_mesi-1);
  fechat2.len  =    strlen(fechat2.arr);
  strcpy(anos,fecha);
  strorg(anos,1,4);
  anoi         = atoi(anos);
  strcpy(mess,fecha);
  strorg(mess,5,2);
  mesi         = atoi(mess);

    /* EXEC SQL DECLARE C1 CURSOR FOR
        select almacen.clase, categoria, almacen.codigo_articulo, nombre,
                   nvl(existencia,0),           nvl(ano_mes,0),
                   nvl(costo_promedio_p,0),     nvl(costo_reemplazo_p,0),
                   nvl(total_entradas,0),       nvl(total_salidas,0),
                   nvl(valor_entradas_p,0),     nvl(valor_salidas_p,0),
                   nvl(total_danos,0),          nvl(valor_danos_p,0),
                   nvl(total_entradas_ano,0),   nvl(total_salidas_ano,0),
                   nvl(valor_entradas_ano_p,0), nvl(valor_salidas_ano_p,0),
                   nvl(total_danos_ano,0),      nvl(valor_danos_ano_p,0)
        from almacen, procesos_acu
        where procesos_acu.codigo_articulo(+) = almacen.codigo_articulo and
              almacen.estado      = 'A'                                and
              (almacen.clase     >= :clase_ini  and
               almacen.clase     <= :clase_fin) and
              (almacen.categoria >= :cat_ini    and
               almacen.categoria <= :cat_fin)   and
               procesos_acu.clase(+) = almacen.clase and
               ano_mes <= :fechat and
               ano_mes  = (select max(ano_mes)
                           from procesos_acu au
                           where au.codigo_articulo(+) =
                                 almacen.codigo_articulo and
                                 ano_mes <= :fechat)
        group by almacen.clase, categoria, almacen.codigo_articulo, nombre,
                 existencia, ano_mes, costo_promedio_p, costo_reemplazo_p,
                 total_entradas, total_salidas, valor_entradas_p, valor_salidas_p,
                 total_danos, valor_danos_p, total_entradas_ano,
                 total_salidas_ano, valor_entradas_ano_p, valor_salidas_ano_p,
                 total_danos_ano, valor_danos_ano_p
        order by almacen.clase, categoria, almacen.codigo_articulo; */ 


    /* EXEC SQL DECLARE C2 CURSOR FOR
        select clase_material, categoria, nombre
        from   categorias; */ 


    /* EXEC SQL OPEN C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)28;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    staora  = 0;
    while (staora == 0) {

           /* EXEC SQL FETCH C2 INTO :clase, :categoria, :nombre; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 3;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)42;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&clase;
           sqlstm.sqhstl[0] = (unsigned long  )6;
           sqlstm.sqindv[0] = (         short *)0;
           sqlstm.sqharm[0] = (unsigned long )0;
           sqlstm.sqhstv[1] = (unsigned char  *)&categoria;
           sqlstm.sqhstl[1] = (unsigned long  )4;
           sqlstm.sqindv[1] = (         short *)0;
           sqlstm.sqharm[1] = (unsigned long )0;
           sqlstm.sqhstv[2] = (unsigned char  *)&nombre;
           sqlstm.sqhstl[2] = (unsigned long  )62;
           sqlstm.sqindv[2] = (         short *)0;
           sqlstm.sqharm[2] = (unsigned long )0;
           sqlstm.sqphsv = sqlstm.sqhstv;
           sqlstm.sqphsl = sqlstm.sqhstl;
           sqlstm.sqpind = sqlstm.sqindv;
           sqlstm.sqparm = sqlstm.sqharm;
           sqlstm.sqparc = sqlstm.sqharc;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



           staora  = sqlca.sqlcode;
           if (staora ==  1403) break;
           if (staora == -1405)
               staora  = 0;
           else if (staora)
                    fprintf (stderr, "Error Leyendo C2 (%d)\n", staora);

           clase.arr           [clase.len]           = '\0';
           nombre.arr          [nombre.len]          = '\0';

           if (!strcmp(clase.arr,"A"))
               strcpy(vector2[categoria].clases,nombre.arr);
           else
               if (!strcmp(clase.arr,"C"))
                   strcpy(vector2[categoria].vidrio,nombre.arr);
               else
                   if (!strcmp(clase.arr,"D"))
                       strcpy(vector1[categoria].primas,nombre.arr);
                   else
                       if (!strcmp(clase.arr,"E"))
                           strcpy(vector1[categoria].lentec,nombre.arr);
                       else
                           if (!strcmp(clase.arr,"F"))
                               strcpy(vector1[categoria].semitc,nombre.arr);
                       else
                           if (!strcmp(clase.arr,"G"))
                               strcpy(vector1[categoria].contsp,nombre.arr);
                       else
                           if (!strcmp(clase.arr,"H"))
                               strcpy(vector1[categoria].otrsum,nombre.arr);
    }
    /* EXEC SQL CLOSE C2; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)68;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    free(clase.arr);
    free(nombre.arr);

    /* EXEC SQL OPEN C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 6;
    sqlbuft((void **)0, 
      "select almacen.clase ,categoria ,almacen.codigo_articulo ,nombre ,nvl\
(existencia,0) ,nvl(ano_mes,0) ,nvl(costo_promedio_p,0) ,nvl(costo_reemplazo\
_p,0) ,nvl(total_entradas,0) ,nvl(total_salidas,0) ,nvl(valor_entradas_p,0) \
,nvl(valor_salidas_p,0) ,nvl(total_danos,0) ,nvl(valor_danos_p,0) ,nvl(total\
_entradas_ano,0) ,nvl(total_salidas_ano,0) ,nvl(valor_entradas_ano_p,0) ,nvl\
(valor_salidas_ano_p,0) ,nvl(total_danos_ano,0) ,nvl(valor_danos_ano_p,0)  f\
rom almacen ,procesos_acu where ((((((procesos_acu.codigo_articulo(+)=almace\
n.codigo_articulo and almacen.estado='A') and (almacen.clase>=:b0 and almace\
n.clase<=:b1)) and (almacen.categoria>=:b2 and almacen.categoria<=:b3)) and \
procesos_acu.clase(+)=almacen.clase) and ano_mes<=:b4) and ano_mes=(select m\
ax(ano_mes)  from procesos_acu au where (au.codigo_articulo(+)=almacen.codig\
o_articulo and ano_mes<=:b4))) group by almacen.clase,categoria,almacen.codi\
go_articulo,nombre,existencia,ano_mes,costo_promedio_p,costo_reemplazo_p,tot\
al_entradas,total_salidas,valor_entradas_p,");
    sqlstm.stmt = sq0002;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)82;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&clase_ini;
    sqlstm.sqhstl[0] = (unsigned long  )7;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&clase_fin;
    sqlstm.sqhstl[1] = (unsigned long  )7;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&cat_ini;
    sqlstm.sqhstl[2] = (unsigned long  )12;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&cat_fin;
    sqlstm.sqhstl[3] = (unsigned long  )12;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&fechat;
    sqlstm.sqhstl[4] = (unsigned long  )22;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&fechat;
    sqlstm.sqhstl[5] = (unsigned long  )22;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    strcpy(clase_r.arr,"*");
    staora  = 0;
    while (staora == 0) {
           /* EXEC SQL FETCH C1 INTO :clase, :categoria, :codigo_articulo, :nombre,
                                  :existencia, :ano_mes, :costo_promedio,
                                  :costo_reemplazo, :total_entradas,
                                  :total_salidas, :valor_entradas,
                                  :valor_salidas, :total_danos, :valor_danos,
                                  :total_entradas_ano, :total_salidas_ano,
                                  :valor_entradas_ano, :valor_salidas_ano,
                                  :total_danos_ano, :valor_danos_ano; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 20;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)120;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&clase;
           sqlstm.sqhstl[0] = (unsigned long  )6;
           sqlstm.sqindv[0] = (         short *)0;
           sqlstm.sqharm[0] = (unsigned long )0;
           sqlstm.sqhstv[1] = (unsigned char  *)&categoria;
           sqlstm.sqhstl[1] = (unsigned long  )4;
           sqlstm.sqindv[1] = (         short *)0;
           sqlstm.sqharm[1] = (unsigned long )0;
           sqlstm.sqhstv[2] = (unsigned char  *)&codigo_articulo;
           sqlstm.sqhstl[2] = (unsigned long  )22;
           sqlstm.sqindv[2] = (         short *)0;
           sqlstm.sqharm[2] = (unsigned long )0;
           sqlstm.sqhstv[3] = (unsigned char  *)&nombre;
           sqlstm.sqhstl[3] = (unsigned long  )62;
           sqlstm.sqindv[3] = (         short *)0;
           sqlstm.sqharm[3] = (unsigned long )0;
           sqlstm.sqhstv[4] = (unsigned char  *)&existencia;
           sqlstm.sqhstl[4] = (unsigned long  )8;
           sqlstm.sqindv[4] = (         short *)0;
           sqlstm.sqharm[4] = (unsigned long )0;
           sqlstm.sqhstv[5] = (unsigned char  *)&ano_mes;
           sqlstm.sqhstl[5] = (unsigned long  )8;
           sqlstm.sqindv[5] = (         short *)0;
           sqlstm.sqharm[5] = (unsigned long )0;
           sqlstm.sqhstv[6] = (unsigned char  *)&costo_promedio;
           sqlstm.sqhstl[6] = (unsigned long  )8;
           sqlstm.sqindv[6] = (         short *)0;
           sqlstm.sqharm[6] = (unsigned long )0;
           sqlstm.sqhstv[7] = (unsigned char  *)&costo_reemplazo;
           sqlstm.sqhstl[7] = (unsigned long  )8;
           sqlstm.sqindv[7] = (         short *)0;
           sqlstm.sqharm[7] = (unsigned long )0;
           sqlstm.sqhstv[8] = (unsigned char  *)&total_entradas;
           sqlstm.sqhstl[8] = (unsigned long  )8;
           sqlstm.sqindv[8] = (         short *)0;
           sqlstm.sqharm[8] = (unsigned long )0;
           sqlstm.sqhstv[9] = (unsigned char  *)&total_salidas;
           sqlstm.sqhstl[9] = (unsigned long  )8;
           sqlstm.sqindv[9] = (         short *)0;
           sqlstm.sqharm[9] = (unsigned long )0;
           sqlstm.sqhstv[10] = (unsigned char  *)&valor_entradas;
           sqlstm.sqhstl[10] = (unsigned long  )8;
           sqlstm.sqindv[10] = (         short *)0;
           sqlstm.sqharm[10] = (unsigned long )0;
           sqlstm.sqhstv[11] = (unsigned char  *)&valor_salidas;
           sqlstm.sqhstl[11] = (unsigned long  )8;
           sqlstm.sqindv[11] = (         short *)0;
           sqlstm.sqharm[11] = (unsigned long )0;
           sqlstm.sqhstv[12] = (unsigned char  *)&total_danos;
           sqlstm.sqhstl[12] = (unsigned long  )8;
           sqlstm.sqindv[12] = (         short *)0;
           sqlstm.sqharm[12] = (unsigned long )0;
           sqlstm.sqhstv[13] = (unsigned char  *)&valor_danos;
           sqlstm.sqhstl[13] = (unsigned long  )8;
           sqlstm.sqindv[13] = (         short *)0;
           sqlstm.sqharm[13] = (unsigned long )0;
           sqlstm.sqhstv[14] = (unsigned char  *)&total_entradas_ano;
           sqlstm.sqhstl[14] = (unsigned long  )8;
           sqlstm.sqindv[14] = (         short *)0;
           sqlstm.sqharm[14] = (unsigned long )0;
           sqlstm.sqhstv[15] = (unsigned char  *)&total_salidas_ano;
           sqlstm.sqhstl[15] = (unsigned long  )8;
           sqlstm.sqindv[15] = (         short *)0;
           sqlstm.sqharm[15] = (unsigned long )0;
           sqlstm.sqhstv[16] = (unsigned char  *)&valor_entradas_ano;
           sqlstm.sqhstl[16] = (unsigned long  )8;
           sqlstm.sqindv[16] = (         short *)0;
           sqlstm.sqharm[16] = (unsigned long )0;
           sqlstm.sqhstv[17] = (unsigned char  *)&valor_salidas_ano;
           sqlstm.sqhstl[17] = (unsigned long  )8;
           sqlstm.sqindv[17] = (         short *)0;
           sqlstm.sqharm[17] = (unsigned long )0;
           sqlstm.sqhstv[18] = (unsigned char  *)&total_danos_ano;
           sqlstm.sqhstl[18] = (unsigned long  )8;
           sqlstm.sqindv[18] = (         short *)0;
           sqlstm.sqharm[18] = (unsigned long )0;
           sqlstm.sqhstv[19] = (unsigned char  *)&valor_danos_ano;
           sqlstm.sqhstl[19] = (unsigned long  )8;
           sqlstm.sqindv[19] = (         short *)0;
           sqlstm.sqharm[19] = (unsigned long )0;
           sqlstm.sqphsv = sqlstm.sqhstv;
           sqlstm.sqphsl = sqlstm.sqhstl;
           sqlstm.sqpind = sqlstm.sqindv;
           sqlstm.sqparm = sqlstm.sqharm;
           sqlstm.sqparc = sqlstm.sqharc;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


           staora  = sqlca.sqlcode;
           if (staora ==  1403) break;
           if (staora == -1405)
               staora  = 0;
           else if (staora)
                    fprintf (stderr, "Error Leyendo C1 (%d)\n", staora);

           codigo_articulo.arr [codigo_articulo.len] = '\0';
           clase.arr           [clase.len]           = '\0';
           nombre.arr          [nombre.len]          = '\0';

           if (!strcmp(clase_r.arr,"*")) {
               strcpy(clase_r.arr,clase.arr);
               categoria_r = categoria;
               for(i=0;i<=2;i++)
                   borra_acumulados(i);
               if (!strcmp(clase.arr,"E"))
                   arreglo_el_codigo(codigo_articulo.arr,codigo_s);
               recuperar();
           }
           borra_mes_anterior();
           if (strcmp(clase.arr,clase_r.arr)) {
               salte = 1;
               total_categoria();
               total_clase();
               recuperar();
           }
           if (categoria != categoria_r) {
               salte = 0;
               total_categoria();
           }
           if (!strcmp(clase_r.arr,"E")) {
               strcpy(codigo_t,codigo_articulo.arr);
               strorg(codigo_t,2,2);
               if (strcmp(codigo_t,"03"))
                  {
                   strcpy(codigo_t,codigo_articulo.arr);
                   strorg(codigo_t,4,2);
                   if (strcmp(codigo_t,codigo_s)) {
                       total_subcategoria();
                   }
               }
           }
           if (con_lin > 60 && !strcmp(recobrar,"S"))
               recuperar();
           else
              {
               if (con_lin > 60 && !strcmp(recobrar,"N")) {
                   fprintf(fp,"%s\r", salte_pagina);
                   recuperar();
               }
              }
           existencia_ant        =  existencia
                                 -  total_entradas
                                 +  total_salidas
                                 +  total_danos;
           acumula_totales();
           imprimio_clase     = 0;
           imprimio_categoria = 0;
	                                          /* Lee el siguiente */
       /*  strcpy(clase_ini.arr,clase.arr); */
    }

    if (!strcmp(clase_r.arr,"E")) {
        strcpy(codigo_t,codigo_articulo.arr);
        strorg(codigo_t,2,2);
        if (strcmp(codigo_t,"03")) {
            total_subcategoria();
        }
    }
    salte = 1;
    total_categoria();
    total_clase();

    cierre_impresora();

    /* EXEC SQL CLOSE C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 20;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)214;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 20;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)228;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    free(clase.arr);
    free(codigo_articulo.arr);
    free(nombre.arr);
    exit   (0);
}

/****************************
 * Acumula los totales
 */

void acumula_totales()
{
  int suma_maximo;
  int i;
  if (!strcmp(clase.arr,"A"))
     {
      if (categoria == 99  || categoria == 199  || categoria == 299 ||
          categoria == 399 || categoria == 499  || categoria == 599 ||
          categoria == 699 || categoria == 799  || categoria == 899 ||
          categoria == 999 || categoria == 1099 || categoria == 1199)
          suma_maximo = 1;
      else
          suma_maximo = 2;
     }
  else
     {
      if (!strcmp(clase.arr,"C"))
         {
          if (categoria == 25)
              suma_maximo = 1;
          else
              suma_maximo = 2;
         }
      else
           suma_maximo = 2;
     }

     for (i=0;i<=suma_maximo;i++)
         {
          vect[i].total_existencia_ant  += existencia_ant;
          vect[i].total_entradas        += total_entradas;
          vect[i].total_entradas_ano    += total_entradas_ano;
          vect[i].total_salidas         += total_salidas;
          vect[i].total_salidas_ano     += total_salidas_ano;
          vect[i].total_danos           += total_danos;
          vect[i].total_danos_ano       += total_danos_ano;
          vect[i].existencia            += existencia;
          vect[i].existencia_promedio   += existencia * costo_promedio;
          vect[i].existencia_reemplazo  += existencia * costo_reemplazo;
          vect[i].valor_entradas        += valor_entradas;
          vect[i].valor_entradas_ano    += valor_entradas_ano;
          vect[i].valor_salidas         += valor_salidas;
          vect[i].valor_salidas_ano     += valor_salidas_ano;
          vect[i].valor_danos           += valor_danos;
          vect[i].valor_danos_ano       += valor_danos_ano;
         }
}
/*******************************************
* Recuperacion de una pagina si ya recupero
* ejecuta titulos y comienza a listar.
*/

void recuperar()
{
 ++con_pag;
 if (con_pag > fin_pag)
    {
     staora = 1;
     return;
    }
 if (!strcmp(recobrar,"S") && con_pag  ==  ini_pag)
    {
     printf ("Impresion en proceso : ");
     strcpy(recobrar,"N");
    }
 con_lin = 13;
 if (!strcmp(recobrar,"N"))
     titulos();
}
/*********************************
 * Totales por Sub-Categoria
 */

void total_subcategoria()
{
 char mensaje[30];
 if (strcmp(clase_r.arr,"A")) {
     borra_acumulados(0);
     return;
 }
 if (con_lin > 60 && !strcmp(recobrar,"S"))
     recuperar();
 else
    {
     if (con_lin > 60 && !strcmp(recobrar,"N"))
        {
          fprintf(fp,"%s\r",salte_pagina);
          recuperar();
        }
    }
 if (!strcmp(clase_r.arr,"A")) {
    if (categoria_s ==   5 || categoria_s ==  20 || categoria_s ==  36 ||
        categoria_s ==  37 || categoria_s ==  88 || categoria_s ==  99 ||
        categoria_s == 103 || categoria_s == 120 || categoria_s == 133) {
        if (!strcmp(recobrar,"N")) {
           strcpy(mensaje,"Sub - Totales      ");
           totaliza(mensaje,0);
        }
    }
    else {
         if (categoria_s == 188 || categoria_s == 199 || categoria_s == 232 ||
             categoria_s == 288 || categoria_s == 299 || categoria_s == 320 ||
             categoria_s == 399 || categoria_s == 420 || categoria_s == 499 ||
             categoria_s == 520 || categoria_s == 534 || categoria_s == 599 ) {
             if (!strcmp(recobrar,"N")) {
                strcpy(mensaje,"Sub - Totales      ");
                totaliza(mensaje,0);
             }
         }
         else {
               categoria_s = categoria;
               return;
              }
    }
 categoria_s = categoria;
 }
 con_lin+=3;
 borra_acumulados(0);
}
/***************************
 * Arreglo el codigo.
 */

void arreglo_el_codigo(char codigo_a[],char codigo_s[])
{
 strcpy(codigo_t, codigo_a);
 strorg(codigo_t,2,2);
 if (strcmp(codigo_t,"03"))
    {
     strcpy(codigo_s, codigo_a);
     strorg(codigo_s,4,2);
    }
}

/*********************************
 * Totales por Categoria
 */

void total_categoria()
{
  char mensaje[30];
  if (imprimio_categoria == 1)
      return;
  if (con_lin > 60 && !strcmp(recobrar,"S"))
      recuperar();
  else
      {
       if (con_lin > 60 && !strcmp(recobrar,"N"))
          {
           fprintf(fp,"%s\r",salte_pagina);
           recuperar();
          }
      }
  if (!strcmp(recobrar,"N")) {
      sprintf(mensaje,"%s %03d","Total Categoria",categoria_r);
      totaliza(mensaje,1);
      if (!strcmp(clase_r.arr,"D"))
         salte =  1;
  }
  con_lin+=3;
  total_subcategoria();
  borra_acumulados(1);
  categoria_r = categoria;
  imprimio_categoria = 1;
  strcpy(codigo_t, codigo_articulo.arr);
  strorg(codigo_t,2,2);
  if (strcmp(codigo_t,"03"))
      arreglo_el_codigo(codigo_articulo.arr,codigo_s);
}
/************************
 * Totales por Clase
 */

void total_clase()
{
 char mensaje[30];
 if (imprimio_clase == 1)
     return;
 if (con_lin > 60 && !strcmp(recobrar,"S"))
     recuperar();
 else
     {
      if (con_lin > 60 && !strcmp(recobrar,"N"))
         {
          fprintf(fp,"%s\r", salte_pagina);
          recuperar();
         }
     }
    if (!strcmp(recobrar,"S"))
       goto salto_total_clase;
    strcpy(mensaje,"Total Clase ");
    strcat(mensaje,clase_r.arr);
    strcat(mensaje,"      ");
    totales_de_clase(mensaje,2);
    fprintf(fp,"%s\r",salte_pagina);

salto_total_clase:
    con_lin += 2;
    borra_acumulados(2);
    strcpy(clase_r.arr,clase.arr);
    imprimio_clase = 1;
    strcpy(codigo_t,codigo_articulo.arr);
    strorg(codigo_t,2,2);
    if (!strcmp(codigo_t,"03"))
        arreglo_el_codigo(codigo_articulo.arr,codigo_s);
}
/****************************
 * Imprime totales de Clase
 */

void totales_de_clase(mensaje,i)
char mensaje[];
int i;
{
    totaliza(mensaje,i);

    clase_r.len = strlen(clase_r.arr);
    /* EXEC SQL select sum(nvl(existencia,0) * nvl(costo_promedio_p,0))
             into  :valor_promedio
             from  almacen al, procesos_acu ac
             where ac.codigo_articulo(+) = al.codigo_articulo and
                   al.estado   = 'A'                          and
                   al.clase    = :clase_r                     and
                   ac.clase(+) = al.clase                     and
                   ano_mes    <= :fechat2                     and
                   ano_mes     = (select max(ano_mes)
                                  from procesos_acu au
                                  where au.codigo_articulo(+) =
                                        al.codigo_articulo and
                                        ano_mes <= :fechat2); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 20;
    sqlstm.stmt = "select sum((nvl(existencia,0)* nvl(costo_promedio_p,0))) \
into :b0  from almacen al ,procesos_acu ac where (((((ac.codigo_articulo(+)=al\
.codigo_articulo and al.estado='A') and al.clase=:b1) and ac.clase(+)=al.clase\
) and ano_mes<=:b2) and ano_mes=(select max(ano_mes)  from procesos_acu au whe\
re (au.codigo_articulo(+)=al.codigo_articulo and ano_mes<=:b2)))";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)242;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&valor_promedio;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&clase_r;
    sqlstm.sqhstl[1] = (unsigned long  )7;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&fechat2;
    sqlstm.sqhstl[2] = (unsigned long  )22;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&fechat2;
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


    oraest  = sqlca.sqlcode;
    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error Leyendo C3 (%d)\n", sqlca.sqlcode);


    sprintf (cadena,"%9.2f",valor_promedio);
    fmtnum("zz,zzz,zzz,zz9",cadena,r_t);
    fprintf(fp,"%s %50s %s\n",
               "                                                  ",
               "Existencia a costo promedio mes Anterior", r_t );
}
/**************************
 * Totaliza acumulados
 */

void totaliza(mensaje,i)
char mensaje[];
int i;
{
  fprintf(fp,"  %s",mensaje);
  sprintf (cadena,"%6.0f",vect[i].total_existencia_ant);
  fmtnum("zzz,zz9",cadena,r_t);
  fprintf(fp,"%13s",r_t);

  sprintf (cadena,"%6.0f",vect[i].total_entradas);
  fprintf(fp,"%9s",fmtnum("zzz,zz9",cadena,r_t));

  sprintf (cadena,"%6.0f",vect[i].total_salidas);
  fprintf(fp,"%10s",fmtnum("zzz,zz9",cadena,r_t));

  sprintf (cadena,"%6.0f",vect[i].total_danos);
  fprintf(fp,"%10s",fmtnum("zzz,zz9",cadena,r_t));

  sprintf (cadena,"%6.0f",vect[i].total_salidas+vect[i].total_danos);
  fprintf(fp,"%10s",fmtnum("zzz,zz9",cadena,r_t));

  sprintf (cadena,"%6.0f",vect[i].existencia);
  fprintf(fp,"%11s",fmtnum("zzz,zz9",cadena,r_t));

  sprintf (cadena,"%9.2f",vect[i].existencia_promedio);
  fprintf(fp,"%19s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  sprintf (cadena,"%7.4f",vect[i].valor_entradas);
  fprintf(fp,"%15s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  sprintf (cadena,"%9.2f",vect[i].valor_salidas);
  fprintf(fp,"%14s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  sprintf (cadena,"%9.2f",vect[i].valor_danos);
  fprintf(fp,"%14s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  sprintf (cadena,"%9.2f",vect[i].valor_salidas+vect[i].valor_danos);
  fprintf(fp,"%14s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  strcpy(cadena," ");
  if (i != 0 && i != 2)
     mov_cat();
  strorg(cadena,1,36);
  fprintf(fp,"%-36s",cadena);

  sprintf (cadena,"%6.0f",vect[i].total_entradas_ano);
  fprintf(fp,"%7s",fmtnum("zzz,zz9",cadena,r_t));

  sprintf (cadena,"%6.0f",vect[i].total_salidas_ano);
  fprintf(fp,"%10s",fmtnum("zzz,zz9",cadena,r_t));

  sprintf (cadena,"%6.0f",vect[i].total_danos_ano);
  fprintf(fp,"%10s",fmtnum("zzz,zz9",cadena,r_t));

  sprintf (cadena,"%6.0f",vect[i].total_salidas_ano+vect[i].total_danos_ano);
  fprintf(fp,"%10s",fmtnum("zzz,zz9",cadena,r_t));

  sprintf (cadena,"%9.2f",vect[i].existencia_reemplazo);
  fprintf(fp,"%30s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  sprintf (cadena,"%7.4f",vect[i].valor_entradas_ano);
  fprintf(fp,"%15s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  sprintf (cadena,"%9.2f",vect[i].valor_salidas_ano);
  fprintf(fp,"%14s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  sprintf (cadena,"%9.2f",vect[i].valor_danos_ano);
  fprintf(fp,"%14s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  sprintf (cadena,"%9.2f",vect[i].valor_salidas_ano+vect[i].valor_danos_ano);
  fprintf(fp,"%14s\n\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

}
/***********************************************************
 * Borra Los acumulados de Entada y salida del mes anterior
 */

void borra_mes_anterior()
{
 if (ano_mes != ano_mesi)
    {
     total_entradas       = 0;
     total_salidas        = 0;
     total_danos          = 0;
     valor_entradas       = 0;
     valor_salidas        = 0;
     valor_danos          = 0;
    }
 if (a2k==2)
    sprintf(ano_mesa,"%4.0f",ano_mes);
 else
    sprintf(ano_mesa,"%6.0f",ano_mes);
 strorg(ano_mesa,1,4);
 ano = atoi(ano_mesa);
 if (ano != anoi) {
     total_entradas_ano   = 0;
     total_salidas_ano    = 0;
     total_danos_ano      = 0;
     valor_entradas_ano   = 0;
     valor_salidas_ano    = 0;
     valor_danos_ano      = 0;
 }
}

/**************************
 * Borra Acumulados
 */

void borra_acumulados(i)
int i;
{
    vect[i].existencia_promedio  = 0;
    vect[i].existencia_reemplazo = 0;
    vect[i].total_existencia_ant = 0;
    vect[i].existencia           = 0;
    vect[i].total_entradas       = 0;
    vect[i].total_entradas_ano   = 0;
    vect[i].total_salidas        = 0;
    vect[i].total_salidas_ano    = 0;
    vect[i].total_danos          = 0;
    vect[i].total_danos_ano      = 0;
    vect[i].valor_entradas       = 0;
    vect[i].valor_entradas_ano   = 0;
    vect[i].valor_salidas        = 0;
    vect[i].valor_salidas_ano    = 0;
    vect[i].valor_danos          = 0;
    vect[i].valor_danos_ano      = 0;
}

/*
************
* TITULOS():
*    Imprime titulos en el archivo de spool.
*
*/

void titulos()
{
    fprintf(fp,"%s%s%53s\nNIT: 890.112.740-2\n",diezcpi, ancho_on,TITULO_1);
    if (a2k==2) {
       fprintf(fp,"%s%s%48s%s%s%d",elite, ancho_on,TITULO_2,
                                      mes[mesi-1],"de 19",anoi);
    }
    else {
       fprintf(fp,"%s%s%48s%s%s%d",elite, ancho_on,TITULO_2,
                                      mes[mesi-1],"del ",anoi);
    }
    fprintf(fp,"%s%s     %s%d \n\n", ancho_off, diezcpi,"Pagina ", con_pag);
    fprintf(fp,"%s%s%48s%s%s\n\n",elite,ancho_on,TITULO_22,ancho_off,diezcpi);
    fprintf(fp,"%s%s\n",          elite,            TITULO_3);
    fprintf(fp,"%s\n",               TITULO_4);
    if (mesi==1)
        fprintf(fp,"%s%11s",           TITULO_5, mes[mesi+10]);
    else fprintf(fp,"%s%11s",          TITULO_5, mes[mesi-2]);
    fprintf(fp,"%s%11s",               TITULO_6, mes[mesi-1]);
    fprintf(fp,"%s\n",               TITULO_7);
    fprintf(fp,"%s\n\n",             TITULO_8);
    fprintf(fp,"%s%s%s%s%s  ", diezcpi,condensado_on, ancho_on,  TITULO_9,
                                  clase_r.arr);
    if (!strcmp(clase_r.arr,"D"))
       {
        fprintf(fp,"%s\n\n","  MATERIA PRIMA PARA LA ELABORACION DE LENTES DE CONTACTO BLANDOS");
       }
        else
       {
            if (!strcmp(clase_r.arr,"E"))
                fprintf(fp,"%s\n","  PRODUCTO TERMINADO - LENTES DE CONTACTO BLANDOS");
                fprintf(fp,"%s%s%s%s%03d ",diezcpi,condensado_on,ancho_on,"       Categoria ", categoria_r);
            if (!strcmp(clase_r.arr,"A")) {
                strcpy(cadena," ");
                fprintf(fp,"%s%s%s%s%s\n",diezcpi,condensado_on,ancho_on, vector2[categoria_r].clases,cadena);
               }
            if (!strcmp(clase_r.arr,"B"))
               fprintf(fp,"%s%s%s%s\n",diezcpi,condensado_on,ancho_on,"Suministro");
            if (!strcmp(clase_r.arr,"C")) {
                strcpy(cadena," ");
                fprintf(fp,"%s%s%s%s%s\n",diezcpi,condensado_on,ancho_on, vector2[categoria_r].vidrio,cadena);
               }
            if (!strcmp(clase_r.arr,"D"))
               fprintf(fp,"%s%s%s%s\n",diezcpi,condensado_on,ancho_on, vector1[categoria_r].primas);
            if (!strcmp(clase_r.arr,"E"))
               fprintf(fp,"%s%s%s%s\n",diezcpi,condensado_on,ancho_on, vector1[categoria_r].lentec);
            if (!strcmp(clase_r.arr,"F"))
               fprintf(fp,"%s%s%s%s\n",diezcpi,condensado_on,ancho_on, vector1[categoria_r].semitc);
            if (!strcmp(clase_r.arr,"G"))
               fprintf(fp,"%s%s%s%s\n",diezcpi,condensado_on,ancho_on, vector1[categoria_r].contsp);
            if (!strcmp(clase_r.arr,"H"))
               fprintf(fp,"%s%s%s%s\n",diezcpi,condensado_on,ancho_on, vector1[categoria_r].otrsum);
       }
    fprintf(fp,"%s%s%s%s\n\r",".",ancho_off,condensado_off,elite);
}

/*
******************************************
* MOV_CATEGORIA
*    Muevo las categorias
*/

void mov_cat()
{
 if (!strcmp(clase_r.arr,"A"))
      strcpy(cadena, vector2[categoria_r].clases);
 if (!strcmp(clase_r.arr,"B"))
      strcpy(cadena,"Suministro");
 if (!strcmp(clase_r.arr,"C"))
      strcpy(cadena, vector2[categoria_r].vidrio);
 if (!strcmp(clase_r.arr,"D"))
      strcpy(cadena, vector1[categoria_r].primas);
 if (!strcmp(clase_r.arr,"E"))
      strcpy(cadena, vector1[categoria_r].lentec);
 if (!strcmp(clase_r.arr,"F"))
      strcpy(cadena, vector1[categoria_r].semitc);
 if (!strcmp(clase_r.arr,"G"))
      strcpy(cadena, vector1[categoria_r].contsp);
 if (!strcmp(clase_r.arr,"H"))
      strcpy(cadena, vector1[categoria_r].otrsum);
}

