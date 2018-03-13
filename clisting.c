
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
    ".\\clisting.pc"
};


static const unsigned long sqlctx = 1052238607;


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

 static const char *sq0002 = 
"select numero ,to_number(to_char(fecha,'yyyymmdd')) ,codigo_cliente ,nit ,co\
digo_nit ,nvl(valor_cartera,0) ,nvl(valor_retefuente,0)  from ingresos_c c whe\
re ((((((codigo_emp=:b0 and tipo_documento='RC') and fecha>=to_date(:b1,'yyyym\
mdd')) and fecha<=to_date(:b2,'yyyymmdd')) and codigo_cliente>'0') and estado<\
>'2') and contado is null ) order by numero            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,103,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,365,0,9,142,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
54,0,0,3,126,0,4,159,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
76,0,0,2,0,0,13,172,0,7,0,0,1,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,
0,2,4,0,0,
118,0,0,2,0,0,15,198,0,0,0,0,1,0,
132,0,0,4,0,0,30,199,0,0,0,0,1,0,
146,0,0,5,54,0,4,232,0,2,1,0,1,0,2,9,0,0,1,4,0,0,
};


/*****************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - Oct. 9/92.
*
* clisting.c. Listado de La relacion de ingresos.
*
* Uso : clisting codigo_emp fecha_inicial fecha_final device userid/password
*
* Mario E. Santiago I. Creado Octubre-09-1992.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void titulos();
void lista_ingresos();
void fecha_oracle3();
				     /* Parametros de comunicacion con ORACLE */

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;
 
/* VARCHAR codigo_emp[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

/* VARCHAR codigo_nita[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nita;

/* VARCHAR codigo_cliente[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_cliente;

double  nit;
double  codigo_nit;
double  valor_retefuente;
double  valor_cartera;
float   numero;
double  fecha;
/* VARCHAR nomb_clie[51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_clie;

/* VARCHAR nomb_emp [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_emp;

/* VARCHAR fecha_ini[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_ini;

/* VARCHAR fecha_fin[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_fin;


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
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                   /* Contador de Lineas  */
int     cl;
int     oraest;
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[100];
double  tot_retefte;
double  tot_cartera;
char    fechas [70];
char    cadena [100];
char    cadena2[100];
char    wcadena[100];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

    if (argc < 6)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : clisting codigo_emp fecha_ini fecha_fin\n");
        printf ("      device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("      device : s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (fecha_ini.arr,  argv[2]);
       fecha_ini.len =         strlen(fecha_ini.arr);
       strcpy (fecha_fin.arr,  argv[3]);
       fecha_fin.len =         strlen(fecha_fin.arr);
       if ( strlen(fecha_ini.arr) != 8 || strlen(fecha_fin.arr) != 8 ) {
          printf("Error, la fecha debe ser de 8 digitos y formato AAAAMMDD");
          exit (1);
       }
       strcpy (device,         argv[4]);
       strlow (device);

    if (!strpos ("/", argv[5]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[5]);
    uid.len   =         strlen(uid.arr);

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

/*****************************************************
 * Crea o Abre un cursor en area de datos. (oopen)   *
 *****************************************************/
    /* C1 */
    /* EXEC SQL DECLARE C1 CURSOR FOR
        select numero, to_number(to_char(fecha,'yyyymmdd')),
               codigo_cliente, nit, codigo_nit,
               nvl(valor_cartera,0), nvl(valor_retefuente,0)
	from   ingresos_c c
        where  codigo_emp     = :codigo_emp                    and
               tipo_documento = 'RC'                           and
               fecha         >= to_date(:fecha_ini,'yyyymmdd') and
               fecha         <= to_date(:fecha_fin,'yyyymmdd') and
               codigo_cliente > '0'                            and
               estado        <> '2'                            and
               contado       is null
        order by numero; */ 


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
    sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[0] = (unsigned long  )5;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&fecha_ini;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&fecha_fin;
    sqlstm.sqhstl[2] = (unsigned long  )22;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


               
/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/
    strcpy(cadena2,fecha_ini.arr);
    strcpy(wcadena, cadena2);
    fecha_oracle3(wcadena);
    strcpy(cadena, wcadena);
    strcat(cadena," hasta ");
    strcpy(cadena2,fecha_fin.arr);
    strcpy(wcadena, cadena2);
    fecha_oracle3(wcadena);
    strcat(cadena, wcadena);
    strcpy(fechas,cadena);

    /* C3 */
    /* EXEC SQL select nombre
             into  :nomb_emp
	     from   empresas, nits
             where  nits.codigo_nit     = empresas.codigo_nit and
                    empresas.codigo_emp = to_number(:codigo_emp); */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 3;
    sqlstm.stmt = "select nombre into :b0  from empresas ,nits where (nits.c\
odigo_nit=empresas.codigo_nit and empresas.codigo_emp=to_number(:b1))";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)54;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
    sqlstm.sqhstl[0] = (unsigned long  )53;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
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



    nomb_emp.arr      [nomb_emp.len]     = '\0';
    if (sqlca.sqlcode) 
       fprintf(stderr,"Error C3 (%d) en empresa \n",sqlca.sqlcode);

    oraest  = 0;
    while (oraest == 0) {
   
           /* EXEC SQL FETCH C1 INTO :numero, :fecha,  :codigo_cliente,
                                  :nit, :codigo_nit, :valor_cartera,
                                  :valor_retefuente; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 7;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)76;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&numero;
           sqlstm.sqhstl[0] = (unsigned long  )4;
           sqlstm.sqindv[0] = (         short *)0;
           sqlstm.sqharm[0] = (unsigned long )0;
           sqlstm.sqhstv[1] = (unsigned char  *)&fecha;
           sqlstm.sqhstl[1] = (unsigned long  )8;
           sqlstm.sqindv[1] = (         short *)0;
           sqlstm.sqharm[1] = (unsigned long )0;
           sqlstm.sqhstv[2] = (unsigned char  *)&codigo_cliente;
           sqlstm.sqhstl[2] = (unsigned long  )8;
           sqlstm.sqindv[2] = (         short *)0;
           sqlstm.sqharm[2] = (unsigned long )0;
           sqlstm.sqhstv[3] = (unsigned char  *)&nit;
           sqlstm.sqhstl[3] = (unsigned long  )8;
           sqlstm.sqindv[3] = (         short *)0;
           sqlstm.sqharm[3] = (unsigned long )0;
           sqlstm.sqhstv[4] = (unsigned char  *)&codigo_nit;
           sqlstm.sqhstl[4] = (unsigned long  )8;
           sqlstm.sqindv[4] = (         short *)0;
           sqlstm.sqharm[4] = (unsigned long )0;
           sqlstm.sqhstv[5] = (unsigned char  *)&valor_cartera;
           sqlstm.sqhstl[5] = (unsigned long  )8;
           sqlstm.sqindv[5] = (         short *)0;
           sqlstm.sqharm[5] = (unsigned long )0;
           sqlstm.sqhstv[6] = (unsigned char  *)&valor_retefuente;
           sqlstm.sqhstl[6] = (unsigned long  )8;
           sqlstm.sqindv[6] = (         short *)0;
           sqlstm.sqharm[6] = (unsigned long )0;
           sqlstm.sqphsv = sqlstm.sqhstv;
           sqlstm.sqphsl = sqlstm.sqhstl;
           sqlstm.sqpind = sqlstm.sqindv;
           sqlstm.sqparm = sqlstm.sqharm;
           sqlstm.sqparc = sqlstm.sqharc;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


           oraest  = sqlca.sqlcode;
           if (sqlca.sqlcode == 1403) break;

           if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
               fprintf (stderr, "Error leyendo C1 (%d)\n", sqlca.sqlcode);

           codigo_cliente.arr      [codigo_cliente.len]     = '\0';
    
           lista_ingresos();
    } 
    if (tot_cartera > 0) {
       sprintf(cadena,"%9.2f",tot_cartera);
       fprintf(fp,"\n%88s%18s","TOTAL............. ",fmtnum("$zz,zzz,zz9.99",cadena,r_t));
       sprintf(cadena,"%9.2f",tot_retefte);
       fprintf(fp,"%18s\r",fmtnum("$z,zzz,zz9.99",cadena,r_t));
    }

    cierre_impresora();

/************************************************
 * Desconectarse de ORACLE.                     *
 ************************************************/

    /* EXEC SQL CLOSE C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 7;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)118;
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
    sqlstm.offset = (unsigned short)132;
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
 if (!strcmp(codigo_emp.arr,"3"))
    strcpy(nomb_emp.arr," ");
 fprintf(fp,"%s",salte_pagina);
 strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
 fprintf(fp,"%s%s%s%s%s\n\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
 fprintf(fp,"%s%s%s%43s",diezcpi,condensado_on,ancho_on,"LISTADO DE INGRESOS");
 fprintf(fp,"%s%s%17s %d\n\n",ancho_off,diezcpi,"PAGINA ",con_pag);
 strorg(fechas,1,strlen(fechas));
 fprintf(fp,"%s%62s%s\n\n",enfatizado_on,fechas,enfatizado_off);
 fprintf(fp,"%s%s%12s%15s%-45s%20s%21s\n",condensado_on,"COMPROBANTE","FECHA","CODIGO","     NOMBRE DEL CLIENTE","VALOR","DESCUENTO POR");
 fprintf(fp,"%120s\n\n","INGRESO       RETENCION");
 con_lin = 8;
}

void lista_ingresos()
{
 if (con_lin > 60)
    titulos();
 sprintf(codigo_nita.arr,"%5.0f",codigo_nit);
 codigo_nita.len = strlen(codigo_nita.arr);
 /* C2 */
 /* EXEC SQL select nombre
          into  :nomb_clie
          from   nits
          where  codigo_nit = :codigo_nit; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 7;
 sqlstm.stmt = "select nombre into :b0  from nits where codigo_nit=:b1";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)146;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
 sqlstm.sqhstl[0] = (unsigned long  )53;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_nit;
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



 nomb_clie.arr      [nomb_clie.len]     = '\0';

 if (sqlca.sqlcode) 
     fprintf(stderr,"Error C2 (%d) en cliente (%s) \n",sqlca.sqlcode,
                     codigo_nita.arr);

 fprintf(fp,"  %6.0f    ",numero);
 sprintf(cadena,"%8.0f",fecha);
 fprintf(fp,"%12s",fmtnum("9999-99-99",cadena,r_t));
 fprintf(fp,"%14s     ",codigo_cliente.arr);
 fprintf(fp,"%-45s",nomb_clie.arr);
 sprintf(cadena,"%9.2f",valor_cartera);
 fprintf(fp,"%18s",fmtnum("zz,zzz,zz9.99",cadena,r_t));
 sprintf(cadena,"%9.2f",valor_retefuente);
 fprintf(fp,"%18s\n",fmtnum("zz,zzz,zz9.99",cadena,r_t));
 tot_cartera+=valor_cartera;
 tot_retefte+=valor_retefuente;
 con_lin+=1;
}
