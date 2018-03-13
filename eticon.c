
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
    ".\\eticon.pc"
};


static const unsigned long sqlctx = 936894085;


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
   unsigned char    *sqhstv[10];
   unsigned long    sqhstl[10];
	    short   *sqindv[10];
   unsigned long    sqharm[10];
   unsigned long     *sqharc[10];
} sqlstm = {8,10};

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
"select numero_orden ,fecha_documento ,nvl(ult_etiqueta,0) ,codigo_material ,\
decode(tipo_material,'03','01','06','01','00') ,diametro ,curva_base ,poder ,n\
vl(cantidad,0) ,nombre  from produclc ,almacen where (codigo_material=almacen.\
codigo_articulo and (numero_orden>=:b0 and numero_orden<=:b1)) order by numero\
_orden            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,102,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,34,0,4,126,0,1,0,0,1,0,2,3,0,0,
46,0,0,3,328,0,9,145,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
68,0,0,3,0,0,13,155,0,10,0,0,1,0,2,4,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,4,0,
0,2,9,0,0,2,4,0,0,2,3,0,0,2,9,0,0,
122,0,0,3,0,0,15,241,0,0,0,0,1,0,
136,0,0,4,0,0,30,243,0,0,0,0,1,0,
};


/*****************************************************************
* (MTL). ETICON.C Version 1.0 - Rev 1.2 - Feb. 17/98.
*
* eticon.c. Lista las Etiquetas Vistasoft y Centrisoft.
*
* uso : eticon orden_ini orden_fin device userid/password
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

void imprima();
void strltr();
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
int     cantidad;
int     a2k;
/* VARCHAR nombre         [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nombre;

/* VARCHAR orden_ini      [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } orden_ini;

/* VARCHAR orden_fin      [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } orden_fin;


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
double  conse;
int     staora = 0;
int     tab;
char    orden[9];
char    mensaje[35];
char    fecha[20];
char    tabla[5][30];
struct  imp {
         char  por[30];                 /* Porcentaje de agua       */
         char  cur[30];                 /* Curva base               */
         char  dia[30];                 /* Diametro del lente       */
         char  pod[30];                 /* Poder del lente          */
         char  con[30];                 /* Consecutivo              */
         char  fec[30];                 /* Fecha de la orden        */
            };
struct  imp vec[3];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	 device[6];
char	 leon[6];                           /* condensado + enfatizado_on */
char	 leof[6];                           /* condensado + enfatizado_of */
char     pod[10];
int	 i, act, tipo, tipw;
double curva;

    if (argc < 5)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : eticon orden_ini orden_fin device userid/password\n");
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

    /* EXEC SQL DECLARE C1 CURSOR FOR
	     select numero_orden, fecha_documento, nvl(ult_etiqueta,0),
	            codigo_material,
                    decode(tipo_material,'03','01','06','01','00'),
                    diametro, curva_base, poder, nvl(cantidad,0), nombre
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
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)46;
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



    sprintf (leon ,"%s", enfatizado_on);
    sprintf (leof ,"%s", enfatizado_off);
    tab    = 0;
    tipo   = atoi(tipo_material.arr);
    tipw   = 0;
    staora = 0;
    while (staora == 0) {

          /* EXEC SQL FETCH C1 INTO :numero_orden, :fecha_documento, :ult_etiqueta,
                                 :codigo_material, :tipo_material, :diametro,
                                 :curva_base, :poder, :cantidad, :nombre; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 10;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)68;
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
          sqlstm.sqhstv[8] = (unsigned char  *)&cantidad;
          sqlstm.sqhstl[8] = (unsigned long  )4;
          sqlstm.sqindv[8] = (         short *)0;
          sqlstm.sqharm[8] = (unsigned long )0;
          sqlstm.sqhstv[9] = (unsigned char  *)&nombre;
          sqlstm.sqhstl[9] = (unsigned long  )53;
          sqlstm.sqindv[9] = (         short *)0;
          sqlstm.sqharm[9] = (unsigned long )0;
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

          if (ult_etiqueta > 0)
             {
              if (tipo == atoi(tipo_material.arr) && tipw == 0)
                 { 
                  if (!strcmp (tipo_material.arr, "01"))
                       strcpy (mensaje, "Monte las etiquetas para Centrisoft");
                  else strcpy (mensaje, "Monte las etiquetas para Vistasoft ");
                  printf ("%58s\n", mensaje);
                  printf ("%60s\n", "Prenda la Impresora y presione <ENTER>");
                  getchar();

                  tipw = 1;
                  fprintf (fp, "%s%s%s\n", diezcpi,line_feed8vo,condensado_on);
                 }
              else
                  if (tipo != atoi(tipo_material.arr))
                      goto sigue;

              conse = ult_etiqueta;
              curva = atof(curva_base.arr) * .1;
              act   = (strpos ("%", nombre.arr)) - 2;
              strorg (nombre.arr, act, 2);
              strcpy (fecha, fecha_documento.arr);
              strorg (fecha, 4, (a2k+4));
                                                 
              sprintf (pod, "%9.2f", poder);
              if (poder > 0)
                 {
                  strltr (pod);
                  strcpy (orden, pod);
                  sprintf (pod, "%s%s", "+", orden);
                 }
                    
              sprintf (tabla[0], "%s%s%s%12.2f", leon, "CB", leof, curva);
              sprintf (tabla[1], "%s%s%s%10.2f", leon, "DIAM", leof, diametro);
              sprintf (tabla[2], "%s%s%s%9s", leon, "PODER", leof, pod);
              sprintf (orden, "%s%s%s", leon, "CONTROL", leof);
              sprintf (tabla[4], "%s%s%s%10s", leon, "F-EMPAQUE", leof, fecha);
 
               /* Lista los consecutivos de la Orden. */
              for (i=0; i<cantidad; i++)
                  {
                   if (tab == 3)
                       imprima();
                          
                   sprintf (tabla[3], "%s%6.0f%s%06.0f", orden, numero_orden,                                         "-", conse);
                                                        
                   strcpy (vec[tab].por, nombre.arr);
                   strcpy (vec[tab].cur, tabla[0]);
                   strcpy (vec[tab].dia, tabla[1]);
                   strcpy (vec[tab].pod, tabla[2]);
                   strcpy (vec[tab].con, tabla[3]);
                   strcpy (vec[tab].fec, tabla[4]);

                   tab++;
                   conse++;
                  }
             }
                 /* Lee otra Orden */
           sigue:;
          }

    if (tab > 0)
        imprima();
    fprintf (fp, "%s%s\r", line_feed6,condensado_off);

    cierre_impresora();
    system ("clear");

    /* EXEC SQL CLOSE C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 10;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)122;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 10;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)136;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    exit   (0);
}

/************************
* IMPRIMA()
*    Imprime una linea de etiquetas en el archivo de spool.
*/

void imprima()
{
    int j;
    if (!strcmp (tipo_material.arr, "00"))
       {       
        fprintf (fp, "%-22s%20s%42s%24s%42s%24s\n", vec[0].cur,vec[0].por, vec[1].cur,vec[0].por, vec[2].cur,vec[0].por);
        fprintf (fp, "%-24s%60s%66s\n", vec[0].dia, vec[1].dia, vec[2].dia);
        fprintf (fp, "%-24s%60s%66s\n", vec[0].pod, vec[1].pod, vec[2].pod);
        fprintf (fp, "%-30s%60s%66s\n", vec[0].con, vec[1].con, vec[2].con);
        fprintf (fp, "%-29s%60s%66s\n\n\n\n",vec[0].fec,vec[1].fec,vec[2].fec);
       }
    else   
       {       
        fprintf (fp, "%23s%61s%61s\n\n",  vec[0].por, vec[1].por, vec[2].por);
        fprintf (fp, "%35s%65s%66s\n",    vec[0].dia, vec[1].dia, vec[2].dia);
        fprintf (fp, "%35s%65s%66s\n",    vec[0].pod, vec[1].pod, vec[2].pod);
        fprintf (fp, "%41s%65s%66s\n",    vec[0].con, vec[1].con, vec[2].con);
        fprintf (fp, "%40s%65s%66s\n\n\n",vec[0].fec, vec[1].fec, vec[2].fec);
       }
    for (j=0; j<3; j++)
        {
         strcpy (vec[j].por, "");
         strcpy (vec[j].cur, "");
         strcpy (vec[j].dia, "");
         strcpy (vec[j].pod, "");
         strcpy (vec[j].con, "");
         strcpy (vec[j].fec, "");
        }
    tab = 0;
}
