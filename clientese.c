
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
    ".\\clientese.pc"
};


static const unsigned long sqlctx = 1052251137;


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

 static const char *sq0002 = 
"select cl.codigo_cliente ,n.nombre ,nvl(n.nombre_muni,c.nombre) ,cl.numero_q\
uincena ,max(cl.fecha)  from ciudades c ,nits n ,clientes te ,clientese cl whe\
re (((((cl.codigo_cliente=te.codigo_cliente and te.codigo_nit=n.codigo_nit) an\
d n.codigo_ciu=c.codigo) and cl.tipo_cliente='1') and cl.codigo_cliente>=:b0) \
and cl.codigo_cliente<=:b1) group by cl.codigo_cliente,n.nombre,n.nombre_muni,\
c.nombre,cl.numero_quincena order by cl.codigo_cliente,cl.numero_quincena     \
       ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,85,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,473,0,9,124,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
50,0,0,2,0,0,13,129,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,
84,0,0,2,0,0,15,167,0,0,0,0,1,0,
98,0,0,3,0,0,30,169,0,0,0,0,1,0,
};


/*****************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* clientese.pc Programa que lista los clientes
*
* Uso : clientese cliente_ini cliente_fin device copias userid/password
*
* Martin A. Toloza L. Creado Diciembre 18-1997.
* Teodoro Tarud & Cia Ltda.
*
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <math.h>

void titulos();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;
 
                                 /* Nits (C1) */
/* VARCHAR codigo_cliente[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_cliente;

/* VARCHAR nomb_clie     [45]; */ 
struct { unsigned short len; unsigned char arr[45]; } nomb_clie;

/* VARCHAR nomb_ciu      [21]; */ 
struct { unsigned short len; unsigned char arr[21]; } nomb_ciu;

int     numero_quincena;
/* VARCHAR fecha         [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } fecha;

/* VARCHAR codigo_clii   [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_clii;

/* VARCHAR codigo_clif   [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_clif;


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
char *fmtnum(), r_t[80];
int     con_pag= 0;                                   /* Contador de Paginas */
int     con_lin=66;                                   /* Contador de Lineas  */
int     staora = 0;
char    copias[3];
char    codigo_ant[6];

char    cadena[100];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

if (argc < 6)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : clientese cliente_ini cliente_fin device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (codigo_clii.arr, argv[1]);
codigo_clii.len  =       strlen(codigo_clii.arr);
strcpy (codigo_clif.arr, argv[2]);
codigo_clif.len  =       strlen(codigo_clif.arr);
strcpy (device,          argv[3]);
strlow (device);
strcpy (copias,          argv[4]);

if (!strpos ("/", argv[5]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,   argv[5]);
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
    abre_impresora(copias);

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/

    /* EXEC SQL DECLARE C1 CURSOR FOR
             select cl.codigo_cliente, n.nombre, nvl(n.nombre_muni,c.nombre),
                    cl.numero_quincena, max(cl.fecha)
	     from ciudades c, nits n, clientes te, clientese cl
             where cl.codigo_cliente  = te.codigo_cliente           and
                   te.codigo_nit      = n.codigo_nit                and
                   n.codigo_ciu       = c.codigo                    and
                   cl.tipo_cliente    = '1'                         and
                   cl.codigo_cliente >= :codigo_clii                and
                   cl.codigo_cliente <= :codigo_clif
             group by cl.codigo_cliente, n.nombre, n.nombre_muni,c.nombre,
                   cl.numero_quincena
             order by cl.codigo_cliente, cl.numero_quincena; */ 


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
    sqlstm.sqhstv[0] = (unsigned char  *)&codigo_clii;
    sqlstm.sqhstl[0] = (unsigned long  )8;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_clif;
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


    strcpy(codigo_ant,"**");
    staora  = 0;
 while (staora == 0) {

        /* EXEC SQL FETCH C1 INTO :codigo_cliente, :nomb_clie, :nomb_ciu,
                               :numero_quincena, :fecha; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 5;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)50;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
        sqlstm.sqhstl[0] = (unsigned long  )8;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&nomb_clie;
        sqlstm.sqhstl[1] = (unsigned long  )47;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&nomb_ciu;
        sqlstm.sqhstl[2] = (unsigned long  )23;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&numero_quincena;
        sqlstm.sqhstl[3] = (unsigned long  )4;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&fecha;
        sqlstm.sqhstl[4] = (unsigned long  )12;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqharm[4] = (unsigned long )0;
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
            if (!strlen(nomb_ciu.arr)) {
                strcpy (nomb_ciu.arr, "");
                nomb_ciu.len = 0;
            }
        }
        else if (staora)
                 fprintf (stderr, "Error leyendo C1 (%d)\n", staora);

        codigo_cliente.arr  [codigo_cliente.len] = '\0';
        nomb_clie.arr       [nomb_clie.len]      = '\0';
        nomb_ciu.arr        [nomb_ciu.len]       = '\0';
        fecha.arr           [fecha.len]          = '\0';

        if (strcmp(codigo_cliente.arr,codigo_ant)) {
            if (con_lin > 60)
                titulos();
            fprintf (fp,"\n%5s %-45s %-20s",codigo_cliente.arr,nomb_clie.arr,nomb_ciu.arr);
            if (numero_quincena == 1)
                fprintf (fp," %s","Primera");
            if (numero_quincena == 2)
                fprintf (fp," %s","Segunda");
            strcpy(codigo_ant,codigo_cliente.arr);
            con_lin++;
        }
        else if (numero_quincena == 2)
                 fprintf (fp," %s","y segunda");
 }
 fprintf (fp,"\n");

 cierre_impresora();

 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 5;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)84;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 /* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 5;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)98;
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
 fprintf (fp,"%s",salte_pagina);
 fprintf (fp,"%s%s%s%s\n\n",diezcpi,ancho_on,"           TEODORO TARUD & CIA LTDA.",ancho_off);
 fprintf (fp,"%55s%20s%d\n\n"," CUENTAS DE CONTROL","Pagina # ",con_pag);
 fprintf (fp,"%s%s %-45s %-20s %12s \n\n",condensado_on,"CLIEN","NOMBRE","CIUDAD","QUINCENA");
 con_lin=10;
}
