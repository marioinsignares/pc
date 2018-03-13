
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
    ".\\marcaord.pc"
};


static const unsigned long sqlctx = 1101418934;


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
   unsigned char    *sqhstv[11];
   unsigned long    sqhstl[11];
	    short   *sqindv[11];
   unsigned long    sqharm[11];
   unsigned long     *sqharc[11];
} sqlstm = {8,11};

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

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,98,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,408,0,4,124,0,11,2,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,
0,0,2,9,0,0,2,4,0,0,2,3,0,0,1,9,0,0,1,9,0,0,
86,0,0,3,0,0,30,166,0,0,0,0,1,0,
};


/*****************************************************************
* ORDENES.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* marcaord.c. Listado de Ordenes de Produccion.
*
* Uso : marcaord numero_orden device userid/password
*
* Martin A. Toloza L. Creado Enero 30-1998.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>


				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Ordenes_r (C1) */
double  numero_orden;
/* VARCHAR codigo_cliente[7]; */ 
struct { unsigned short len; unsigned char arr[7]; } codigo_cliente;

/* VARCHAR nomb_clie     [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nomb_clie;

/* VARCHAR fecha_control [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } fecha_control;

double  consecutivo;
float   numero_caja;
/* VARCHAR color_caja    [2]; */ 
struct { unsigned short len; unsigned char arr[2]; } color_caja;

double  valor_desctos;
/* VARCHAR orden         [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } orden;

                                 /* Ordenes_o (C2) */
double  valor_trat;
double  valor_color;
double  valor_bis_mont;
double  valor_otros;
double  valor_servicios;
int     contado;
/* VARCHAR consecutivo_a [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } consecutivo_a;


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
#define A_F1     "###,###.##"
int     con_pag;                                   /* Contador de Paginas */
int     con_lin=22;                                /* Contador de Lineas  */
char    fecha[20];
char    hora[12];
int     i;
char    cadena2[20];
char    cadena[20];
char    codigo[6];
char    r_t[20];

void titulos();
void titulos_c();
void fecha_corta();
void titulos_b();

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 4)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : marcaord numero_orden device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (orden.arr, argv[1]);
       orden.len   =      strlen(orden.arr);
       strcpy (device,    argv[2]);
       strlow (device);

    if (!strpos ("/", argv[3]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,   argv[3]);
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

    /* EXEC SQL select numero_orden, codigo_cliente, n.nombre,
                    to_char(fecha_control,'DD-MON-YYYY hh:mi:ss am'),
                    o.consecutivo, o.numero_caja, o.color_caja,
                    valor_desctos, o.contado
             into  :numero_orden, :codigo_cliente, :nomb_clie, :fecha_control,
                   :consecutivo, :numero_caja, :color_caja, :valor_desctos, :contado
             from   nits n, ordenes_r o
             where  n.codigo_nit in (select codigo_nit
                                     from   clientes
                                     where  clientes.codigo_cliente in
                                     (select codigo_cliente
                                      from ordenes_r
                                      where numero_orden = :orden))   and
                    numero_orden     = :orden; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 11;
    sqlstm.stmt = "select numero_orden ,codigo_cliente ,n.nombre ,to_char(fe\
cha_control,'DD-MON-YYYY hh:mi:ss am') ,o.consecutivo ,o.numero_caja ,o.color_\
caja ,valor_desctos ,o.contado into :b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8  from \
nits n ,ordenes_r o where (n.codigo_nit in (select codigo_nit  from clientes w\
here clientes.codigo_cliente in (select codigo_cliente  from ordenes_r where n\
umero_orden=:b9)) and numero_orden=:b9)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)28;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&numero_orden;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_cliente;
    sqlstm.sqhstl[1] = (unsigned long  )9;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&nomb_clie;
    sqlstm.sqhstl[2] = (unsigned long  )52;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&fecha_control;
    sqlstm.sqhstl[3] = (unsigned long  )52;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&consecutivo;
    sqlstm.sqhstl[4] = (unsigned long  )8;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&numero_caja;
    sqlstm.sqhstl[5] = (unsigned long  )4;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&color_caja;
    sqlstm.sqhstl[6] = (unsigned long  )4;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&valor_desctos;
    sqlstm.sqhstl[7] = (unsigned long  )8;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&contado;
    sqlstm.sqhstl[8] = (unsigned long  )4;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&orden;
    sqlstm.sqhstl[9] = (unsigned long  )12;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&orden;
    sqlstm.sqhstl[10] = (unsigned long  )12;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode != -1405 && sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo Ordenes_r (%d)\n", sqlca.sqlcode);

    codigo_cliente.arr [codigo_cliente.len] = '\0';
    nomb_clie.arr      [nomb_clie.len]      = '\0';
    fecha_control.arr  [fecha_control.len]  = '\0';
    color_caja.arr     [color_caja.len]     = '\0';
    strcpy(codigo,codigo_cliente.arr);
    strcpy(fecha,fecha_control.arr);
    strorg(fecha,1,11);
    strcpy(hora, fecha_control.arr);
    strorg(hora,13,11);
    fprintf (fp, "%s%s%c\r",line_feed6,set_vertical,52);
    if (numero_orden>100000) {
       if (numero_orden>1722000)
          titulos_b();
       else titulos();
       fprintf (fp, "%s%s\r",diezcpi,line_feed8vo);
       for (i=1;i<=24;i++) {
           fprintf(fp,"\n");
       }
       fprintf(fp,"%s",salte_pagina);
    }
    else titulos_c();

    cierre_impresora();

    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 11;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)86;
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
  cadena[9]='\0';
  cadena[8]=codigo[4];
  cadena[7]=' ';
  cadena[6]=codigo[3];
  cadena[5]=' ';
  cadena[4]=codigo[2];
  cadena[3]=' ';
  cadena[2]=codigo[1];
  cadena[1]=' ';
  cadena[0]=codigo[0];
  strcpy(cadena2,"");
  if (contado == 1)
     strcpy(cadena2,"CONTADO");
  fprintf (fp,"%s%s\n\n\n\n",condensado_off,diezcpi);
  fprintf (fp,"%51s\n\n\n%34s%5.0f%s%s   %s\n\n",cadena," ",numero_caja,"-",color_caja.arr,cadena2);
  fprintf (fp,"      %05.0f      ",consecutivo);
  strcpy(cadena,fecha);
  fecha_corta(cadena);
  fprintf (fp,"  %s ",cadena);
  fprintf (fp,"       %s ",hora);
}

void titulos_c()
{
  cadena[9]='\0';
  cadena[8]=codigo[4];
  cadena[7]=' ';
  cadena[6]=codigo[3];
  cadena[5]=' ';
  cadena[4]=codigo[2];
  cadena[3]=' ';
  cadena[2]=codigo[1];
  cadena[1]=' ';
  cadena[0]=codigo[0];
  strcpy(cadena2,"");
  if (contado == 1)
     strcpy(cadena2,"CONTADO");
  fprintf (fp,"%s%s\n\n\n\n",condensado_off,diezcpi);
  fprintf (fp,"%48s\n\n\n%21s%5.0f%s%s   %s\n\n",cadena," ",numero_caja,"-",color_caja.arr,cadena2);
  fprintf (fp," %05.0f      ",consecutivo);
  strcpy(cadena,fecha);
  fecha_corta(cadena);
  fprintf (fp,"     %s ",cadena);
  fprintf (fp,"       %s%s\n ",hora,salte_pagina);
}

void titulos_b()
{
  cadena[9]='\0';
  cadena[8]=codigo[4];
  cadena[7]=' ';
  cadena[6]=codigo[3];
  cadena[5]=' ';
  cadena[4]=codigo[2];
  cadena[3]=' ';
  cadena[2]=codigo[1];
  cadena[1]=' ';
  cadena[0]=codigo[0];
  strcpy(cadena2,"");
  if (contado == 1)
     strcpy(cadena2,"CONTADO");
  fprintf (fp,"%s%s\n\n\n",condensado_off,diezcpi);
  fprintf (fp,"%44s\n\n%46s\n\n%36s%5.0f%s%s\n\n",cadena,cadena2," ",numero_caja,"-",color_caja.arr);
  fprintf (fp,"      %05.0f      ",consecutivo);
  strcpy(cadena,fecha);
  fecha_corta(cadena);
  fprintf (fp,"  %s ",cadena);
  fprintf (fp,"   %s ",hora);
}

