
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
    ".\\marcanot.pc"
};


static const unsigned long sqlctx = 940367720;


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
   unsigned char    *sqhstv[5];
   unsigned long    sqhstl[5];
	    short   *sqindv[5];
   unsigned long    sqharm[5];
   unsigned long     *sqharc[5];
} sqlstm = {8,5};

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
2,0,0,1,0,0,27,79,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,156,0,4,100,0,5,3,0,1,0,2,9,0,0,2,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
};


/*****************************************************************
* ORDENES.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* marcanot.c. Marca las notas DB y CR de bancos con su consecutivo y fecha
*
* Uso : marcanot codigo_emp clase comprobante device userid/password
*
* Mario E. Santiago I. Creado Junio 7-1990.
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

void titulos();


/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;
 
/* VARCHAR fecha[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha;

/* VARCHAR descripcion[51]; */ 
struct { unsigned short len; unsigned char arr[51]; } descripcion;

/* VARCHAR codigo_emp[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

/* VARCHAR clase[4]; */ 
struct { unsigned short len; unsigned char arr[4]; } clase;

/* VARCHAR comprobante[7]; */ 
struct { unsigned short len; unsigned char arr[7]; } comprobante;


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


char    wcadena[20];
char    cadena [20];
char    r_t    [20];
				     /* Parametros de comunicacion con ORACLE */
void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 5)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : marcanot codigo_emp clase comprobante device userid/password");
	printf ("      device : t salida por terminal\n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (clase.arr,      argv[2]);
       clase.len      =        strlen(clase.arr);
       strcpy (comprobante.arr,argv[3]);
       comprobante.len=        strlen(comprobante.arr);
       strcpy (device,         argv[4]);
       strlow (device);

    if (!strpos ("/", argv[5]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[5]);
    uid.len    =        strlen(uid.arr);

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

         /* EXEC SQL select to_char(fecha,'DD-MON-YYYY'), descripcion
                  into  :fecha, :descripcion
                  from   movto_c
                  where  codigo_emp       = to_number(:codigo_emp) and
                         clase            =          (:clase) and
                         comprobante      = to_number(:comprobante); */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 8;
         sqlstm.arrsiz = 5;
         sqlstm.stmt = "select to_char(fecha,'DD-MON-YYYY') ,descripcion int\
o :b0,:b1  from movto_c where ((codigo_emp=to_number(:b2) and clase=:b3) and c\
omprobante=to_number(:b4))";
         sqlstm.iters = (unsigned long  )1;
         sqlstm.offset = (unsigned short)28;
         sqlstm.selerr = (unsigned short)1;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)0;
         sqlstm.sqhstv[0] = (unsigned char  *)&fecha;
         sqlstm.sqhstl[0] = (unsigned long  )22;
         sqlstm.sqindv[0] = (         short *)0;
         sqlstm.sqharm[0] = (unsigned long )0;
         sqlstm.sqhstv[1] = (unsigned char  *)&descripcion;
         sqlstm.sqhstl[1] = (unsigned long  )53;
         sqlstm.sqindv[1] = (         short *)0;
         sqlstm.sqharm[1] = (unsigned long )0;
         sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
         sqlstm.sqhstl[2] = (unsigned long  )5;
         sqlstm.sqindv[2] = (         short *)0;
         sqlstm.sqharm[2] = (unsigned long )0;
         sqlstm.sqhstv[3] = (unsigned char  *)&clase;
         sqlstm.sqhstl[3] = (unsigned long  )6;
         sqlstm.sqindv[3] = (         short *)0;
         sqlstm.sqharm[3] = (unsigned long )0;
         sqlstm.sqhstv[4] = (unsigned char  *)&comprobante;
         sqlstm.sqhstl[4] = (unsigned long  )9;
         sqlstm.sqindv[4] = (         short *)0;
         sqlstm.sqharm[4] = (unsigned long )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



         fecha.arr       [fecha.len]       = '\0';
         descripcion.arr [descripcion.len] = '\0';

    titulos();
    cierre_impresora();
    exit   (0);
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
  fprintf (fp,"%s%s\n\n\n",condensado_off,elite);
  strcpy  (cadena,fecha.arr);
  strcpy  (wcadena, cadena);
  fecha_corta(wcadena);
  strcpy  (cadena, wcadena);
  fprintf (fp,"Comprobante de : %4s %s#%s%s  Fecha : %s\n%s%s%s",clase.arr,ancho_on,comprobante.arr,ancho_off,cadena,descripcion.arr,diezcpi,salte_pagina);
}
