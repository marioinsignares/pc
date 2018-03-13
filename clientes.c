
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
    ".\\clientes.pc"
};


static const unsigned long sqlctx = 936797183;


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
"select cl.codigo_cliente ,n.nombre ,nvl(n.nombre_muni,c.nombre) ,n.direccion\
 ,n.nit ,nvl(digito,(-1)) ,n.codigo_nit  from nits n ,ciudades c ,clientes cl \
where (((n.codigo_nit=cl.codigo_nit and n.codigo_ciu=c.codigo) and cl.codigo_c\
liente>=:b0) and cl.codigo_cliente<=:b1) group by cl.codigo_cliente,n.nombre,n\
.nombre_muni,c.nombre,n.direccion,n.nit,digito,n.codigo_nit order by cl.codigo\
_cliente            ";
 static const char *sq0003 = 
"select nvl(numero,0)  from telefonos where codigo_nit=:b0 order by orden    \
        ";
 static const char *sq0004 = 
"select nombre ,cargo  from representa where codigo_nit=:b0           ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,113,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,408,0,9,161,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
50,0,0,2,0,0,13,166,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,3,0,
0,2,4,0,0,
92,0,0,5,54,0,4,191,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
114,0,0,2,0,0,15,229,0,0,0,0,1,0,
128,0,0,3,0,0,15,230,0,0,0,0,1,0,
142,0,0,4,0,0,15,231,0,0,0,0,1,0,
156,0,0,6,0,0,30,233,0,0,0,0,1,0,
170,0,0,3,84,0,9,243,0,1,1,0,1,0,1,9,0,0,
188,0,0,3,0,0,13,246,0,1,0,0,1,0,2,4,0,0,
206,0,0,3,0,0,15,265,0,0,0,0,1,0,
220,0,0,4,69,0,9,273,0,1,1,0,1,0,1,9,0,0,
238,0,0,4,0,0,13,276,0,2,0,0,1,0,2,9,0,0,2,9,0,0,
260,0,0,4,0,0,15,300,0,0,0,0,1,0,
};


/*****************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* clientes.c Programa que lista los clientes
*
* Uso : clientes device copias userid/password
*
* Martin A. Toloza L. Creado Diciembre 17-1997.
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

void telefonos();
void contacto();
void titulos();

double redondo();
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

/* VARCHAR direccion     [46]; */ 
struct { unsigned short len; unsigned char arr[46]; } direccion;

double  nit;
int     digito;
double  codigo_nit;
/* VARCHAR codigo_clii   [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_clii;

/* VARCHAR codigo_clif   [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_clif;

                                 /* Ciudades (C2) */
/* VARCHAR nombre_ciu    [21]; */ 
struct { unsigned short len; unsigned char arr[21]; } nombre_ciu;

/* VARCHAR codigo_ciu    [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_ciu;

                                 /* Telefonos (C3) */
double  telefono;
/* VARCHAR codigo_nit_c  [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nit_c;

                                 /* Representa (C4) */
/* VARCHAR nomb_repre    [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } nomb_repre;

/* VARCHAR cargo         [21]; */ 
struct { unsigned short len; unsigned char arr[21]; } cargo;


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


#define A_F1 "###,###,###.##"

                                            /* Variables globales del usuario */
char *fmtnum(), r_t[80];
int     con_pag;                                   /* Contador de Paginas */
int     con_lin;                                   /* Contador de Lineas  */
int	staora = 0;
int	oraest = 0;
int     traidos= 0;
char    copias[3];
char    codigo_ant[3];
char    repre[4];

char    cadena[100];
char    cadena2[20];
char    cadena3[120];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

if (argc < 7)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : clientes clie_ini clie_fin lista_representante (s/n) device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (codigo_clii.arr, argv[1]);
codigo_clii.len  =       strlen(codigo_clii.arr);
strcpy (codigo_clif.arr, argv[2]);
codigo_clif.len  =       strlen(codigo_clif.arr);
strcpy (repre,       argv[3]);
strlow (repre);
strcpy (device,      argv[4]);
strlow (device);
strcpy (copias,      argv[5]);

if (!strpos ("/", argv[6]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,   argv[6]);
uid.len   =        strlen(uid.arr);
printf ("%s\n",uid.arr);

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
                    n.direccion, n.nit, nvl(digito,-1), n.codigo_nit
	     from nits n, ciudades c, clientes cl
             where n.codigo_nit       = cl.codigo_nit                     and
                   n.codigo_ciu       = c.codigo                          and
                   cl.codigo_cliente >= :codigo_clii                      and
                   cl.codigo_cliente <= :codigo_clif
             group by cl.codigo_cliente, n.nombre, n.nombre_muni, c.nombre,
                       n.direccion, n.nit, digito, n.codigo_nit
             order by cl.codigo_cliente; */ 


    /* EXEC SQL DECLARE C3 CURSOR FOR
             select nvl(numero,0)
             from   telefonos
             where  codigo_nit = :codigo_nit_c
             order  by orden; */ 


    /* EXEC SQL DECLARE C4 CURSOR FOR
             select nombre, cargo
             from   representa
             where  codigo_nit = :codigo_nit_c; */ 


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
                               :direccion, :nit, :digito, :codigo_nit; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 7;
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
        sqlstm.sqhstv[3] = (unsigned char  *)&direccion;
        sqlstm.sqhstl[3] = (unsigned long  )48;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&nit;
        sqlstm.sqhstl[4] = (unsigned long  )8;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqharm[4] = (unsigned long )0;
        sqlstm.sqhstv[5] = (unsigned char  *)&digito;
        sqlstm.sqhstl[5] = (unsigned long  )4;
        sqlstm.sqindv[5] = (         short *)0;
        sqlstm.sqharm[5] = (unsigned long )0;
        sqlstm.sqhstv[6] = (unsigned char  *)&codigo_nit;
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
            sqlstm.arrsiz = 7;
            sqlstm.stmt = "select nombre into :b0  from ciudades where codig\
o=:b1";
            sqlstm.iters = (unsigned long  )1;
            sqlstm.offset = (unsigned short)92;
            sqlstm.selerr = (unsigned short)1;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)0;
            sqlstm.sqhstv[0] = (unsigned char  *)&nombre_ciu;
            sqlstm.sqhstl[0] = (unsigned long  )23;
            sqlstm.sqindv[0] = (         short *)0;
            sqlstm.sqharm[0] = (unsigned long )0;
            sqlstm.sqhstv[1] = (unsigned char  *)&codigo_ciu;
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
                fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);
            nombre_ciu.arr  [nombre_ciu.len]     = '\0';
            strcpy(codigo_ant,codigo_ciu.arr);
            titulos();
        }
        if (con_lin > 60)
            titulos();
        sprintf (codigo_nit_c.arr,"%5.0f",codigo_nit);
        codigo_nit_c.len = strlen(codigo_nit_c.arr);

        telefonos();
        sprintf (cadena,"%12.0f",nit);
        fprintf (fp,"%5s %-45s %-45s %-20s %17s %18s",codigo_cliente.arr,nomb_clie.arr,direccion.arr,nomb_ciu.arr,cadena2,fmtnum("zzz,zzz,zzz,zzz",cadena,r_t));
        if (digito > 0) {
           sprintf (cadena,"%d",digito);
           fprintf (fp,"-%s",fmtnum("z",cadena,r_t));
        }
        else if (digito == 0)
                fprintf (fp,"-%s","0");
        if (!strcmp(repre,"s")) {
            contacto();
            fprintf (fp,"\r      %-45s",nomb_clie.arr);
            if (strcmp(cadena3,"")) {
                fprintf(fp,"\n%s",cadena3); 
                con_lin++;
            }
        }
        fprintf (fp,"\n");
        con_lin++;
        digito=0;
 }

 cierre_impresora();

 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 7;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)114;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 /* EXEC SQL CLOSE C3; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 7;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)128;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 /* EXEC SQL CLOSE C4; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 7;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)142;
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
 sqlstm.offset = (unsigned short)156;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 exit   (0);
}

void telefonos()
{
 strcpy(cadena2,"");
 traidos = 0;
 oraest  = 0;
 /* EXEC SQL OPEN C3; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 7;
 sqlstm.stmt = sq0003;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)170;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo_nit_c;
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


 while (oraest == 0) {

        /* EXEC SQL FETCH C3 INTO :telefono; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 7;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)188;
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
 sqlstm.arrsiz = 7;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)206;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void contacto()
{
 strcpy(cadena3,"      ");
 traidos = 0;
 oraest  = 0;
 /* EXEC SQL OPEN C4; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 7;
 sqlstm.stmt = sq0004;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)220;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo_nit_c;
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


 while (oraest == 0) {

        /* EXEC SQL FETCH C4 INTO :nomb_repre, :cargo; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 7;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)238;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&nomb_repre;
        sqlstm.sqhstl[0] = (unsigned long  )33;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&cargo;
        sqlstm.sqhstl[1] = (unsigned long  )23;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
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
            fprintf (stderr, "Error leyendo C4 (%d)\n", oraest);

        nomb_repre.arr  [nomb_repre.len] = '\0';
        cargo.arr       [cargo.len] = '\0';
        traidos++;
        if (traidos == 1) {
            strcat  (cadena3,nomb_repre.arr);
            strcat  (cadena3,", ");
            strcat  (cadena3,cargo.arr);
        }
        else {
             if (strcmp(nomb_repre.arr,"")) {
                 strcat(cadena3," - ");
                 strcat(cadena3,nomb_repre.arr);
                 strcat(cadena3,", ");
                 strcat(cadena3,cargo.arr);
             }
        }
 }
 /* EXEC SQL CLOSE C4; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 7;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)260;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 char fecha[20];
 con_pag++;
 fprintf (fp,"%s",salte_pagina);
 fprintf (fp,"%s%s%s%s\n\n",diezcpi,ancho_on,"           TEODORO TARUD & CIA LTDA.",ancho_off);
 fecha_system(fecha);
 fprintf (fp,"%20s%35s%20s%d\n\n",fecha," LISTADO DE CLIENTES","Pagina # ",con_pag);
 fprintf (fp,"%s\n\n",nombre_ciu.arr);
 fprintf (fp,"%s\n","CODIG");
 fprintf (fp,"%s%s %-45s %-45s %-20s %15s %18s\n\n",condensado_on,"CLIEN","NOMBRE","DIRECCION","CIUDAD","TELEFONO(S)","NIT");
 con_lin=10;
}
