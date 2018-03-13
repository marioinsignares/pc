
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
           char  filnam[12];
};
static const struct sqlcxp sqlfpn =
{
    11,
    ".\\ordcon.pc"
};


static const unsigned long sqlctx = 936907265;


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

 static const char *sq0002 = 
"select numero_orden ,fecha_documento ,nvl(ult_etiqueta,0) ,codigo_material ,\
tipo_material ,produclc.diametro ,curva_base ,poder ,nvl(cantidad_producir,0) \
,nvl(cantidad_hidratar,0) ,nvl(cantidad,0) ,nombre  from produclc ,almacen whe\
re (codigo_material=almacen.codigo_articulo and (numero_orden>=:b0 and numero_\
orden<=:b1)) order by numero_orden            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,111,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,356,0,9,147,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
50,0,0,2,0,0,13,152,0,12,0,0,1,0,2,4,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,4,0,
0,2,9,0,0,2,4,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,9,0,0,
112,0,0,3,60,0,5,186,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
134,0,0,2,0,0,15,216,0,0,0,0,1,0,
148,0,0,4,0,0,30,218,0,0,0,0,1,0,
162,0,0,5,102,0,4,254,0,2,1,0,1,0,2,4,0,0,1,9,0,0,
184,0,0,6,96,0,5,272,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
};


/*****************************************************************
* (MTL). ORDCON.C Version 1.0 - Rev 1.2 - Feb. 17/98.
*
* ordcon.c. Listado de Ordenes de Produccion.
*
* uso : ordcon orden_ini orden_fin device userid/password
*
* Martin A. Toloza Lozano. Creado Febrero 17-1998.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void titulos();
void busca_conse();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;
 
                                 /* Produclc (C1) */
double  numero_orden;
/* VARCHAR fecha_documento[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_documento;

float   ult_etiqueta;
/* VARCHAR codigo_material[13]; */ 
struct { unsigned short len; unsigned char arr[13]; } codigo_material;

/* VARCHAR tipo_material  [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } tipo_material;

float   diametro;
/* VARCHAR curva_base     [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } curva_base;

float   poder;
int     cantidad_producir;
int     cantidad_hidratar;
int     cantidad;
/* VARCHAR nombre         [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nombre;

/* VARCHAR orden_ini      [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } orden_ini;

/* VARCHAR orden_fin      [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } orden_fin;

                                 /* Produclc (C2) */
/* VARCHAR aconse         [9]; */ 
struct { unsigned short len; unsigned char arr[9]; } aconse;
      /* Consecutivo Incial en La Orden   */
/* VARCHAR anumero_orden  [9]; */ 
struct { unsigned short len; unsigned char arr[9]; } anumero_orden;

                                 /* Control_prl (C3) */
/* VARCHAR cconse         [9]; */ 
struct { unsigned short len; unsigned char arr[9]; } cconse;
      /* Consecutivo Final en Control_prl */
                                 /* Control_prl (C4) */
double  consecutivo;

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
#define TITULO_2 "LISTADO DE ORDENES DE PRODUCCION"
#define TITULO_3 "     NRO DE CONTROL               MATERIAL            DIAMETRO             CURVA BASE          PODER           OBSERVACIONES"

char tabla[10][30] = {
               "VISTASOFT 50% MONO-ESFERICO ",
               "VISTASOFT 50% MONO-ESFERICO ",
               "CENTRISOFT 38% MONO-ESFERICO ",
               "VISTASOFT 60% MONO-ESFERICO ",
               "VISTASOFT 60% MONO-ESFERICO ",
               "CENTRISOFT 38% MONO-ESFERICO ",
               "VISTASOFT 55% MONO-ESFERICO ",
               "VISTASOFT 55% MONO-ESFERICO "
              };
int     con_pag;                                   /* Contador de Paginas */
int     con_lin;                                   /* Contador de Lineas  */
int	staora = 0;
int	oraest = 0;
double  conse, conse1;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;
int	i, tipo;
float   curva;

    if (argc < 3)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : ordcon orden_ini orden_fin device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (orden_ini.arr, argv[1]);
       orden_ini.len   =      strlen(orden_ini.arr);
       strcpy (orden_fin.arr, argv[2]);
       orden_fin.len   =      strlen(orden_fin.arr);
       strcpy (device, argv[3]);
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

    /* EXEC SQL DECLARE C1 CURSOR FOR
	     select numero_orden, fecha_documento, nvl(ult_etiqueta,0),
	            codigo_material, tipo_material, produclc.diametro,
	            curva_base, poder, nvl(cantidad_producir,0),
                    nvl(cantidad_hidratar,0), nvl(cantidad,0), nombre
	     from produclc, almacen
             where codigo_material = almacen.codigo_articulo and
                  (numero_orden   >= :orden_ini              and
                   numero_orden   <= :orden_fin)
             order by numero_orden; */ 


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
    sqlstm.sqhstv[0] = (unsigned char  *)&orden_ini;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&orden_fin;
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



    staora  = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C1 INTO :numero_orden, :fecha_documento, :ult_etiqueta,
                                 :codigo_material, :tipo_material, :diametro,
                                 :curva_base, :poder, :cantidad_producir,
                                 :cantidad_hidratar, :cantidad, :nombre; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 12;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)50;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&numero_orden;
          sqlstm.sqhstl[0] = (unsigned long  )8;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&fecha_documento;
          sqlstm.sqhstl[1] = (unsigned long  )22;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&ult_etiqueta;
          sqlstm.sqhstl[2] = (unsigned long  )4;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqhstv[3] = (unsigned char  *)&codigo_material;
          sqlstm.sqhstl[3] = (unsigned long  )15;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqhstv[4] = (unsigned char  *)&tipo_material;
          sqlstm.sqhstl[4] = (unsigned long  )5;
          sqlstm.sqindv[4] = (         short *)0;
          sqlstm.sqharm[4] = (unsigned long )0;
          sqlstm.sqhstv[5] = (unsigned char  *)&diametro;
          sqlstm.sqhstl[5] = (unsigned long  )4;
          sqlstm.sqindv[5] = (         short *)0;
          sqlstm.sqharm[5] = (unsigned long )0;
          sqlstm.sqhstv[6] = (unsigned char  *)&curva_base;
          sqlstm.sqhstl[6] = (unsigned long  )7;
          sqlstm.sqindv[6] = (         short *)0;
          sqlstm.sqharm[6] = (unsigned long )0;
          sqlstm.sqhstv[7] = (unsigned char  *)&poder;
          sqlstm.sqhstl[7] = (unsigned long  )4;
          sqlstm.sqindv[7] = (         short *)0;
          sqlstm.sqharm[7] = (unsigned long )0;
          sqlstm.sqhstv[8] = (unsigned char  *)&cantidad_producir;
          sqlstm.sqhstl[8] = (unsigned long  )4;
          sqlstm.sqindv[8] = (         short *)0;
          sqlstm.sqharm[8] = (unsigned long )0;
          sqlstm.sqhstv[9] = (unsigned char  *)&cantidad_hidratar;
          sqlstm.sqhstl[9] = (unsigned long  )4;
          sqlstm.sqindv[9] = (         short *)0;
          sqlstm.sqharm[9] = (unsigned long )0;
          sqlstm.sqhstv[10] = (unsigned char  *)&cantidad;
          sqlstm.sqhstl[10] = (unsigned long  )4;
          sqlstm.sqindv[10] = (         short *)0;
          sqlstm.sqharm[10] = (unsigned long )0;
          sqlstm.sqhstv[11] = (unsigned char  *)&nombre;
          sqlstm.sqhstl[11] = (unsigned long  )53;
          sqlstm.sqindv[11] = (         short *)0;
          sqlstm.sqharm[11] = (unsigned long )0;
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
                   fprintf (stderr, "Error leyendo C1 (%d)\n", staora);

          fecha_documento.arr [fecha_documento.len] = '\0';
          codigo_material.arr [codigo_material.len] = '\0';
          tipo_material.arr   [tipo_material.len]   = '\0';
          curva_base.arr      [curva_base.len]      = '\0';
          nombre.arr          [nombre.len]          = '\0';

          if (cantidad == 0) goto sigue;

          titulos();
          tipo  = atoi(tipo_material.arr) - 1;
          curva = (float) (atoi(curva_base.arr) * .1);
          conse = ult_etiqueta;

          if (ult_etiqueta == 0)
             {
              busca_conse();
              sprintf(aconse.arr,"%08.0f",conse);
              aconse.len        = strlen(aconse.arr);
              sprintf(anumero_orden.arr,"%08.0f",numero_orden);
              anumero_orden.len = strlen(anumero_orden.arr);

              /* Actualiza la Orden C2 */
              /* EXEC SQL update produclc
	               set ult_etiqueta   = :aconse
	               where numero_orden = :anumero_orden; */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 8;
              sqlstm.arrsiz = 12;
              sqlstm.stmt = "update produclc  set ult_etiqueta=:b0 where num\
ero_orden=:b1";
              sqlstm.iters = (unsigned long  )1;
              sqlstm.offset = (unsigned short)112;
              sqlstm.cud = sqlcud0;
              sqlstm.sqlest = (unsigned char  *)&sqlca;
              sqlstm.sqlety = (unsigned short)0;
              sqlstm.sqhstv[0] = (unsigned char  *)&aconse;
              sqlstm.sqhstl[0] = (unsigned long  )11;
              sqlstm.sqindv[0] = (         short *)0;
              sqlstm.sqharm[0] = (unsigned long )0;
              sqlstm.sqhstv[1] = (unsigned char  *)&anumero_orden;
              sqlstm.sqhstl[1] = (unsigned long  )11;
              sqlstm.sqindv[1] = (         short *)0;
              sqlstm.sqharm[1] = (unsigned long )0;
              sqlstm.sqphsv = sqlstm.sqhstv;
              sqlstm.sqphsl = sqlstm.sqhstl;
              sqlstm.sqpind = sqlstm.sqindv;
              sqlstm.sqparm = sqlstm.sqharm;
              sqlstm.sqparc = sqlstm.sqharc;
              sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


              oraest = sqlca.sqlcode;
              if (oraest != 1403 && oraest != 0) 
                  fprintf (stderr, "Error Update Produclc(%d)\n", oraest);
             }
 
          /* Lista los consecutivos de la Orden. */
          for (i=0; i<cantidad; i++)
              {
               if (con_lin > 58)
                  {
                   fprintf (fp,"%s",salte_pagina);
                   titulos();
                  }
               fprintf (fp, "     %05.0f%s%08.0f", numero_orden,".",conse);
               fprintf (fp, "       %-30s%5.2f%18s%4.2f%18.2f\n",tabla[tipo],
                                     diametro," ",curva,poder);
               con_lin++;
               conse++;
              }
          fprintf (fp,"%s",salte_pagina);

          /* Lee otra Orden */
          sigue:;
    }

    cierre_impresora();

    /* EXEC SQL CLOSE C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 12;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)134;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 12;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)148;
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
    con_pag++;
    fprintf (fp,"%s%s%s%33s\n\n",condensado_off,diezcpi,ancho_on,TITULO_1);
    fprintf (fp,"%s%50s",condensado_on,TITULO_2);
    fprintf (fp,"%s%s%14s%d\n\n",ancho_off,condensado_off,"Pagina ",con_pag);
    fprintf (fp,"%s%s%7.0f",condensado_on,"NRO. ORDEN : ",numero_orden);
    fprintf (fp,"%s%s%s"," FECHA : ",fecha_documento.arr,"  MATERIA PRIMA : ");
    fprintf (fp,"%s%s%s\n",codigo_material.arr,"    DESCRIPCION : ",nombre.arr);
    fprintf (fp,"%s%d%s", "CANTIDAD INICIAL : ",cantidad_producir,
                          "     CANTIDAD HIDRATADOS : "); 
    fprintf (fp,"%d%s%d",cantidad_hidratar,"      CANTIDAD FINAL : ",cantidad);
    fprintf (fp,"%s%s\n\n", " TIPO DE LENTE : ",tipo_material.arr);
    fprintf (fp,"%s\n", TITULO_3);
    con_lin = 9;
}

/************************
* BUSCA_CONSE()
*    Busca el Primer Consecutivo para la orden en Proceso.
*/

void busca_conse()
{
    tipo_material.len = strlen(tipo_material.arr);

    /* EXEC SQL select consecutivo into :consecutivo
	     from  control_prl
	     where tipo_material = decode(:tipo_material,'03','03','06','06','00'); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 12;
    sqlstm.stmt = "select consecutivo into :b0  from control_prl where tipo_\
material=decode(:b1,'03','03','06','06','00')";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)162;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&tipo_material;
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



    oraest = sqlca.sqlcode;
    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
        fprintf (stderr,"Error Leyendo Control_prl C4(%d)\n",sqlca.sqlcode);

    conse  = consecutivo;
    conse1 = consecutivo + cantidad;
/*
    printf ("%s%8.0f%s%8.0f","Inicial", conse,"  Final", conse1);
    getchar();
*/
    sprintf(cconse.arr,"%08.0f",conse1);
    cconse.len     = strlen(cconse.arr);

    /* Actualiza Consecutivo C3 */
    /* EXEC SQL update control_prl
	     set   consecutivo   = :cconse
	     where tipo_material =
             decode(:tipo_material,'03','03','06','06','00'); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 12;
    sqlstm.stmt = "update control_prl  set consecutivo=:b0 where tipo_materi\
al=decode(:b1,'03','03','06','06','00')";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)184;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&cconse;
    sqlstm.sqhstl[0] = (unsigned long  )11;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&tipo_material;
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



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
        fprintf (stderr,"Error Update Control_prl(%d)\n",sqlca.sqlcode);
}
