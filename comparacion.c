
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
           char  filnam[17];
};
static const struct sqlcxp sqlfpn =
{
    16,
    ".\\comparacion.pc"
};


static const unsigned long sqlctx = 936823746;


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

 static const char *sq0005 = 
"select factura ,orden ,fecha ,cant  from facordg where  not exists (select o\
rden  from facord where facord.orden=facordg.orden) order by fecha,orden      \
      ";
 static const char *sq0006 = 
"select r.consecutivo ,numero_orden ,fecha_control ,factura ,sum(cantidad)  f\
rom ordenes_r r ,ordenes_d d where ((r.consecutivo=d.consecutivo and r.ano_mes\
=d.ano_mes) and numero_orden in (select orden  from facord l where  not exists\
 (select orden  from facordg o where o.orden=l.orden))) group by r.consecutivo\
,numero_orden,fecha_control,factura order by fecha_control,r.consecutivo      \
      ";
 static const char *sq0007 = 
"select g.factura ,g.orden ,g.fecha ,g.cant ,f.cant  from facord f ,facordg g\
 where (f.orden=g.orden(+) and f.cant<>g.cant) order by g.fecha,g.factura     \
       ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,94,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,110,0,4,119,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
50,0,0,3,39,0,4,128,0,1,0,0,1,0,2,4,0,0,
68,0,0,4,66,0,4,133,0,2,0,0,1,0,2,4,0,0,2,9,0,0,
90,0,0,5,160,0,9,180,0,0,0,0,1,0,
104,0,0,5,0,0,13,187,0,4,0,0,1,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,0,
134,0,0,5,0,0,15,215,0,0,0,0,1,0,
148,0,0,6,394,0,9,216,0,0,0,0,1,0,
162,0,0,6,0,0,13,224,0,5,0,0,1,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,4,0,0,
196,0,0,6,0,0,15,256,0,0,0,0,1,0,
210,0,0,7,161,0,9,257,0,0,0,0,1,0,
224,0,0,7,0,0,13,266,0,5,0,0,1,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,4,0,0,
258,0,0,7,0,0,15,298,0,0,0,0,1,0,
272,0,0,8,0,0,30,301,0,0,0,0,1,0,
};


/*****************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - Mar. 05/98.
*
* comparacion.pc Programa que lista las comparaciones de talla
*
* Uso : comparacion codigo_optica device userid/password
*
* Martin A. Toloza L. Creado Marzo 05-1998.
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
void fecha_oracle();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;
 
                                 /* Nits (C1) */
/* VARCHAR nomb_optica   [55]; */ 
struct { unsigned short len; unsigned char arr[55]; } nomb_optica;

/* VARCHAR cod_clie      [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } cod_clie;

                                 /* Facord (C2) */
float   cantlab;
float   cantopt;
/* VARCHAR fecha         [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha;

                                 /* Facordg (C3) */
double  factura;
double  orden;
float   cantidad;
short int     fact_i;
                                 /* Ordenes_r (C4) */
double  conse;
                                 /* Facord (C5) */
float   cantidaf;

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
int     con_pag;                                   /* Contador de Paginas */
int     con_lin=61;                                /* Contador de Lineas  */
int	staora = 0;
double  totalc = 0;

char    cadena[100];
char    titulo0[100];
char    titulo1[100];
char    titulo2[100];
char    fechas[40];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

if (argc < 4)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : comparacion codigo_optica device userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (cod_clie.arr, argv[1]);
cod_clie.len  =       strlen(cod_clie.arr);
strcpy (device ,      argv[2]);
strlow (device);

if (!strpos ("/", argv[3]))
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

 /* EXEC SQL select nombre into :nomb_optica
          from   nits
          where codigo_nit = (select codigo_nit
                              from clientes
                              where codigo_cliente = :cod_clie); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.stmt = "select nombre into :b0  from nits where codigo_nit=(select c\
odigo_nit  from clientes where codigo_cliente=:b1)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)28;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_optica;
 sqlstm.sqhstl[0] = (unsigned long  )57;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&cod_clie;
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
     fprintf (stderr, "Error Leyendo C1 (%d)\n", sqlca.sqlcode);
 nomb_optica.arr  [nomb_optica.len]  = '\0';

 /* EXEC SQL select sum(cant) into :cantlab
          from facord; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.stmt = "select sum(cant) into :b0  from facord ";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)50;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&cantlab;
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


 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
     fprintf (stderr, "Error Leyendo Facord C2(%d)\n", sqlca.sqlcode);

 /* EXEC SQL select sum(cant), last_day(max(fecha))
          into   :cantopt, :fecha
          from facordg; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.stmt = "select sum(cant) ,last_day(max(fecha)) into :b0,:b1  from fa\
cordg ";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)68;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&cantopt;
 sqlstm.sqhstl[0] = (unsigned long  )4;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&fecha;
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


 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
     fprintf (stderr, "Error Leyendo Facordg C2(%d)\n", sqlca.sqlcode);

 fecha.arr   [fecha.len] = '\0';
 sprintf(cadena,"(%6.0f)",cantlab);
 strcat (cadena,"  OPTICA");
 strcpy (titulo0,cadena);
 sprintf(cadena,"(%6.0f)",cantopt);
 strcat (cadena,"  DIFERENCIA");
 strcat (titulo0,cadena);
 sprintf(cadena,"(%6.0f)",cantlab-cantopt);
 strcat (titulo0,cadena);
 fecha_oracle(fecha.arr);
 strcpy (fechas,fecha.arr);
 
 /* EXEC SQL DECLARE C3 CURSOR FOR
          select factura, orden, fecha, cant
          from  facordg
          where not exists (select orden
                            from  facord
                            where facord.orden = facordg.orden)
          order by fecha, orden; */ 


 /* EXEC SQL DECLARE C4 CURSOR FOR
          select r.consecutivo, numero_orden, fecha_control,
                 factura, sum(cantidad)
          from   ordenes_r r, ordenes_d d
          where  r.consecutivo = d.consecutivo and
                 r.ano_mes     = d.ano_mes     and
                 numero_orden in (select orden
                                  from facord l
                                  where not exists (select orden
                                                    from  facordg o
                                                    where o.orden = l.orden))
          group by r.consecutivo, numero_orden, fecha_control, factura
          order by fecha_control, r.consecutivo; */ 


 /* EXEC SQL DECLARE C5 CURSOR FOR
          select g.factura, g.orden, g.fecha, g.cant, f.cant
          from   facord f, facordg g
          where  f.orden    = g.orden(+) and
                 f.cant    != g.cant
          order by g.fecha, g.factura; */ 


 /* EXEC SQL OPEN C3; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.stmt = sq0005;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)90;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 staora  = 0;
 totalc  = 0;
 strcpy (titulo1,"ORDENES QUE NO EXISTEN EN EL LABORATORIO");
 strcpy (titulo2,"   FACTURA  NRO.ORDEN FECHA       CANTIDAD");
 while (staora == 0) {

        /* EXEC SQL FETCH C3 INTO :factura, :orden, :fecha, :cantidad; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 4;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)104;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&factura;
        sqlstm.sqhstl[0] = (unsigned long  )8;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&orden;
        sqlstm.sqhstl[1] = (unsigned long  )8;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&fecha;
        sqlstm.sqhstl[2] = (unsigned long  )22;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&cantidad;
        sqlstm.sqhstl[3] = (unsigned long  )4;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
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
                 fprintf (stderr, "Error Leyendo C3 (%d)\n", staora);

        fecha.arr   [fecha.len] = '\0';

        if (con_lin > 60)
            titulos();
        sprintf(cadena,"%10.0f",factura);
        fprintf(fp,"%10s",fmtnum("zzzzzzzzz9",cadena,r_t));
        sprintf(cadena,"%10.0f",orden);
        fprintf(fp,"%11s",fmtnum("zzzzzzzzzz",cadena,r_t));
        sprintf(cadena,"%6.0f",cantidad);
        fprintf(fp,"%10s%11s\n",fecha.arr,fmtnum("zz,zzz,zz9",cadena,r_t));

        totalc += cantidad;
        con_lin++;
 }
 sprintf(cadena,"%6.0f",totalc);
 fprintf(fp,"%42s\n","==========");
 fprintf(fp,"%42s\n\n\n",fmtnum("zz,zzz,zz9",cadena,r_t));
 con_lin+=4;

 /* EXEC SQL CLOSE C3; */ 

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


 /* EXEC SQL OPEN C4; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 4;
 sqlstm.stmt = sq0006;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)148;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 staora  = 0;
 totalc  = 0;
 strcpy (titulo1,"ORDENES QUE NO EXISTEN EN LA OPTICA");
 strcpy (titulo2,"CONSECUTIVO  NRO.ORDEN FECHA_CON    FACTURA   CANTIDAD");
 titulos();
 while (staora == 0) {

        /* EXEC SQL FETCH C4 INTO :conse, :orden, :fecha, :factura:fact_i, :cantidad; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 5;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)162;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&conse;
        sqlstm.sqhstl[0] = (unsigned long  )8;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&orden;
        sqlstm.sqhstl[1] = (unsigned long  )8;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&fecha;
        sqlstm.sqhstl[2] = (unsigned long  )22;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&factura;
        sqlstm.sqhstl[3] = (unsigned long  )8;
        sqlstm.sqindv[3] = (         short *)&fact_i;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&cantidad;
        sqlstm.sqhstl[4] = (unsigned long  )4;
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
        if (staora == -1405)
            staora  = 0;
        else if (staora)
                 fprintf (stderr, "Error Leyendo C4 (%d)\n", staora);

        fecha.arr   [fecha.len] = '\0';
        if (fact_i == -1)
            factura = 0;

        if (con_lin > 60)
            titulos();
        sprintf(cadena,"%10.0f",conse);
        fprintf(fp,"%11s",fmtnum("zzzzzzzzz9",cadena,r_t));
        sprintf(cadena,"%10.0f",orden);
        fprintf(fp,"%11s",fmtnum("zzzzzzzzz9",cadena,r_t));
        sprintf(cadena,"%10.0f",factura);
        fprintf(fp,"%10s%11s",fecha.arr,fmtnum("zzzzzzzzzz",cadena,r_t));
        sprintf(cadena,"%6.0f",cantidad);
        fprintf(fp,"%11s\n",fmtnum("zz,zzz,zz9",cadena,r_t));

        totalc += cantidad;
        con_lin++;
 }
 sprintf(cadena,"%6.0f",totalc);
 fprintf(fp,"%54s\n","==========");
 fprintf(fp,"%54s\n\n\n",fmtnum("zz,zzz,zz9",cadena,r_t));
 con_lin+=4;

 /* EXEC SQL CLOSE C4; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 5;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)196;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 /* EXEC SQL OPEN C5; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 5;
 sqlstm.stmt = sq0007;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)210;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 staora  = 0;
 totalc  = 0;
 cantlab = 0;
 strcpy (titulo1,"FACTURAS CON CANTIDADES ERRADAS Y SIN ORDENES EN LA OPTICA");
 strcpy (titulo2,"   FACTURA  NRO.ORDEN FECHA_CON     OPTICA LABORATORIO");
 titulos();
 while (staora == 0) {

        /* EXEC SQL FETCH C5 INTO :factura, :orden, :fecha, :cantidad, :cantidaf; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 5;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)224;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&factura;
        sqlstm.sqhstl[0] = (unsigned long  )8;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&orden;
        sqlstm.sqhstl[1] = (unsigned long  )8;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&fecha;
        sqlstm.sqhstl[2] = (unsigned long  )22;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&cantidad;
        sqlstm.sqhstl[3] = (unsigned long  )4;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&cantidaf;
        sqlstm.sqhstl[4] = (unsigned long  )4;
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
        if (staora == -1405)
            staora  = 0;
        else if (staora)
                 fprintf (stderr, "Error Leyendo C5 (%d)\n", staora);

        fecha.arr   [fecha.len] = '\0';

        if (con_lin > 60)
            titulos();
        sprintf(cadena,"%10.0f",factura);
        fprintf(fp,"%10s",fmtnum("zzzzzzzzz9",cadena,r_t));
        sprintf(cadena,"%10.0f",orden);
        fprintf(fp,"%11s",fmtnum("zzzzzzzzz9",cadena,r_t));
        sprintf(cadena,"%6.0f",cantidad);
        fprintf(fp,"%10s%11s",fecha.arr,fmtnum("zz,zzz,zz9",cadena,r_t));
        sprintf(cadena,"%6.0f",cantidaf);
        fprintf(fp,"%12s\n",fmtnum("zz,zzz,zz9",cadena,r_t));

        totalc += cantidad;
        cantlab+= cantidaf;
        con_lin++;
 }
 sprintf(cadena,"%6.0f",totalc);
 fprintf(fp,"%54s\n","========== ===========");
 fprintf(fp,"%42s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%6.0f",cantlab);
 fprintf(fp,"%12s\n",fmtnum("zz,zzz,zz9",cadena,r_t));

 /* EXEC SQL CLOSE C5; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 5;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)258;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 cierre_impresora();

 /* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 5;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)272;
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
 char fecha[20];
 if (con_lin > 60) {
     con_pag++;
     con_lin=0;
     fprintf (fp,"%s",salte_pagina);
 }
 fecha_system(fecha);
 fprintf (fp,"%s%s%s%s\n\n",diezcpi,ancho_on,nomb_optica.arr,ancho_off);
 fprintf (fp,"%s   %40s\n",fecha,titulo1);
 fprintf (fp,"%s%s%18s%d\n\n","COMPARACION A ",fechas,"Pagina # ",con_pag);
 fprintf (fp,"%s%s\n\n","TOTAL DE LENTES: LABORATORIO",titulo0);
 fprintf (fp,"%s\n",titulo2);
 con_lin+=8;
}
