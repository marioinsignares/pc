
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
    ".\\flistetpr.pc"
};


static const unsigned long sqlctx = 1140102999;


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
   unsigned char    *sqhstv[4];
   unsigned long    sqhstl[4];
	    short   *sqindv[4];
   unsigned long    sqharm[4];
   unsigned long     *sqharc[4];
} sqlstm = {8,4};

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
"select n.nombre ,nvl(n.nombre_muni,c.nombre) ,n.direccion ,n.codigo_nit  fro\
m etqprov p ,nits n ,ciudades c where (((n.codigo_nit=p.codigo_nit and n.codig\
o_ciu=c.codigo) and n.nit>=:b0) and n.nit<=:b1)           ";
 static const char *sq0003 = 
"select nvl(numero,0)  from telefonos where codigo_nit=:b0 order by orden    \
        ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,105,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,212,0,9,146,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
50,0,0,2,0,0,15,194,0,0,0,0,1,0,
64,0,0,4,0,0,30,195,0,0,0,0,1,0,
78,0,0,2,0,0,13,201,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,
108,0,0,5,54,0,4,224,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
130,0,0,3,84,0,9,242,0,1,1,0,1,0,1,9,0,0,
148,0,0,3,0,0,13,245,0,1,0,0,1,0,2,4,0,0,
166,0,0,3,0,0,15,264,0,0,0,0,1,0,
};


/*****************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* clientes.c Programa que lista las etiquetas segun lretencion
*
* Uso : clientes device copias userid/password
*
* Mario E. Santiago I. Creado Julio 5-1991.
* Teodoro Tarud & Cia Ltda.
*
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double redondo();
void leer_clientes();
void telefonos();
                                      /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

/* VARCHAR codigo_ciu[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_ciu;

/* VARCHAR niti[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } niti;

/* VARCHAR nitf[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } nitf;

/* VARCHAR codigo_cliente[8]; */ 
struct { unsigned short len; unsigned char arr[8]; } codigo_cliente;

/* VARCHAR nomb_clie[45]; */ 
struct { unsigned short len; unsigned char arr[45]; } nomb_clie;

/* VARCHAR nomb_ciu[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciu;

/* VARCHAR nombre_ciu[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nombre_ciu;

/* VARCHAR direccion[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } direccion;

double  telefono;
double  codigo_nit;
/* VARCHAR codigo_nit_c[8]; */ 
struct { unsigned short len; unsigned char arr[8]; } codigo_nit_c;


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


char *fmtnum(), r_t[80];
int     con_pag;                                   /* Contador de Paginas */
int     con_lin;                                   /* Contador de Lineas  */
char    copias[3];
char    nomb_clie1[46];
char    nomb_clie2[46];
char    nomb_clie3[46];
char    nomb_clie4[46];
char    direccion1[50];
char    direccion2[50];
char    direccion3[50];
char    direccion4[50];
char    telefono1[40];
char    telefono2[40];
char    telefono3[40];
char    telefono4[40];
char    nomb_ciu1[30];
char    nomb_ciu2[30];
char    nomb_ciu3[30];
char    nomb_ciu4[30];
char    cadena[100];
char    cadena2[35];
char    codigo_ant[8];
int     staora = 0;

void main(argc, argv)
int     argc;
char    *argv[];
{
char	device[6];
int	status = 0;

if (argc < 6)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : flistetpr niti nitf device copias");
    printf ("      userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (niti.arr,argv[1]);
niti.len = strlen(niti.arr);
strcpy (nitf.arr,argv[2]);
nitf.len = strlen(nitf.arr);
strcpy (device,      argv[3]);
strlow (device);
strcpy (copias,      argv[4]);

if (!strpos ("/", argv[5]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,    argv[5]);
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

/************************************************
 * Recuperar datos en el area de datos definida *
 * una fila al tiempo. (ofetch).                *
 * Aqui se hace la primera lectura del cursor 0.*
 ************************************************/

    /* EXEC SQL DECLARE C1 CURSOR FOR
        select n.nombre, nvl(n.nombre_muni,c.nombre), n.direccion, n.codigo_nit
	from  etqprov p, nits n, ciudades c
        where n.codigo_nit      = p.codigo_nit                       and
              n.codigo_ciu      = c.codigo                           and
              n.nit            >= :niti                              and
              n.nit            <= :nitf; */ 


    /* EXEC SQL DECLARE C3 CURSOR FOR
        select nvl(numero,0)
        from   telefonos
        where  codigo_nit = :codigo_nit_c
        order  by orden; */ 


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
    sqlstm.sqhstv[0] = (unsigned char  *)&niti;
    sqlstm.sqhstl[0] = (unsigned long  )17;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&nitf;
    sqlstm.sqhstl[1] = (unsigned long  )17;
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
        fprintf (fp,"%s%s",diezcpi,condensado_on);
        leer_clientes();
        strcpy(nomb_clie1,nomb_clie.arr);
        strorg(nomb_clie1,1,45);
        strcpy(direccion1,direccion.arr);
        strorg(direccion1,1,45);
        telefonos();
        sprintf(telefono1,"Telefono(s) : %s",cadena2);
        strcpy(nomb_ciu1,nomb_ciu.arr);

        leer_clientes();
        strcpy(nomb_clie2,nomb_clie.arr);
        strorg(nomb_clie2,1,45);
        strcpy(direccion2,direccion.arr);
        strorg(direccion2,1,45);
        telefonos();
        sprintf(telefono2,"Telefono(s) : %s",cadena2);
        strcpy(nomb_ciu2,nomb_ciu.arr);

        leer_clientes();
        strcpy(nomb_clie3,nomb_clie.arr);
        strorg(nomb_clie3,1,45);
        strcpy(direccion3,direccion.arr);
        strorg(direccion3,1,45);
        telefonos();
        sprintf(telefono3,"Telefono(s) : %s",cadena2);
        strcpy(nomb_ciu3,nomb_ciu.arr);

        leer_clientes();
        strcpy(nomb_clie4,nomb_clie.arr);
        strorg(nomb_clie4,1,45);
        strcpy(direccion4,direccion.arr);
        strorg(direccion4,1,45);
        telefonos();
        sprintf(telefono4,"Telefono(s) : %s",cadena2);
        strcpy(nomb_ciu4,nomb_ciu.arr);

        fprintf (fp,"%s%-62s  %-62s  %-62s  %-62s\n",elite,nomb_clie1,nomb_clie2,nomb_clie3,nomb_clie4);
        fprintf (fp,"%-62s  %-62s  %-62s  %-62s\n",direccion1,direccion2,direccion3,direccion4);
        fprintf (fp,"%-62s  %-62s  %-62s  %-62s\n",telefono1,telefono2,telefono3,telefono4);
        fprintf (fp,"%-62s  %-62s  %-62s  %-62s\n\n\n",nomb_ciu1,nomb_ciu2,nomb_ciu3,nomb_ciu4);
}

fprintf (fp,"%s%s\r",line_feed6,enfatizado_off);
cierre_impresora();
/* EXEC SQL CLOSE C1; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 3;
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)50;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


/* EXEC SQL COMMIT WORK RELEASE; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 3;
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)64;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


exit   (0);
}

void leer_clientes()
{
   /* EXEC SQL FETCH C1 INTO :nomb_clie, :nomb_ciu, :direccion, :codigo_nit; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 4;
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)78;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
   sqlstm.sqhstl[0] = (unsigned long  )47;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqhstv[1] = (unsigned char  *)&nomb_ciu;
   sqlstm.sqhstl[1] = (unsigned long  )32;
   sqlstm.sqindv[1] = (         short *)0;
   sqlstm.sqharm[1] = (unsigned long )0;
   sqlstm.sqhstv[2] = (unsigned char  *)&direccion;
   sqlstm.sqhstl[2] = (unsigned long  )52;
   sqlstm.sqindv[2] = (         short *)0;
   sqlstm.sqharm[2] = (unsigned long )0;
   sqlstm.sqhstv[3] = (unsigned char  *)&codigo_nit;
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



   staora  = sqlca.sqlcode;
   if (staora !=  1403) {
      if (staora == -1405) {
          staora  = 0;
          if (!strlen(nomb_ciu.arr)) {
              strcpy (nomb_ciu.arr, "");
              nomb_ciu.len = 0;
          }
      }
      else if (staora)
               fprintf (stderr, "Error leyendo C1 (%d)\n", staora);

      nomb_clie.arr       [nomb_clie.len]      = '\0';
      nomb_ciu.arr        [nomb_ciu.len]       = '\0';
      direccion.arr       [direccion.len]      = '\0';

      strcpy(codigo_ciu.arr,codigo_cliente.arr);
      strorg(codigo_ciu.arr,1,2);

      if (strcmp(codigo_ciu.arr,codigo_ant)) {
          codigo_ciu.len = strlen(codigo_ciu.arr);
          /* EXEC SQL select nombre into :nombre_ciu
                   from   ciudades
                   where  codigo = :codigo_ciu; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 4;
          sqlstm.stmt = "select nombre into :b0  from ciudades where codigo=\
:b1";
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)108;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&nombre_ciu;
          sqlstm.sqhstl[0] = (unsigned long  )32;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&codigo_ciu;
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
              fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);
          nombre_ciu.arr  [nombre_ciu.len]     = '\0';
          strcpy(codigo_ant,codigo_ciu.arr);
      }
      sprintf (codigo_nit_c.arr,"%5.0f",codigo_nit);
      codigo_nit_c.len = strlen(codigo_nit_c.arr);
   }
}

void telefonos()
{
 int oraest  = 0;
 int traidos = 0;
 strcpy(cadena2,"");
 /* EXEC SQL OPEN C3; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 4;
 sqlstm.stmt = sq0003;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)130;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo_nit_c;
 sqlstm.sqhstl[0] = (unsigned long  )10;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 while (oraest == 0) {

        /* EXEC SQL FETCH C3 INTO :telefono; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 4;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)148;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&telefono;
        sqlstm.sqhstl[0] = (unsigned long  )8;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        oraest  = sqlca.sqlcode;
        if (oraest == 1403 || traidos == 2) break;
        if (oraest != 1403 && oraest != 0)
            fprintf (stderr, "Error leyendo C3 (%d)\n", oraest);

        traidos++;
        if (traidos == 1) {
            sprintf (cadena,"%8.0f",telefono);
            strcpy  (cadena2,cadena);
        }
        else {
             if (telefono > 0) {
                 sprintf (cadena,"-%8.0f",telefono);
                 strcat  (cadena2,cadena);
             }
        }
 }
 /* EXEC SQL CLOSE C3; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 4;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)166;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}
