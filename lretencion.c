
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
           char  filnam[16];
};
static const struct sqlcxp sqlfpn =
{
    15,
    ".\\lretencion.pc"
};


static const unsigned long sqlctx = 1234815237;


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
"select r.nombre ,n.nombre ,n.nit ,sum((valor_cre-valor_deb)) ,decode(n.clase\
_docu,'N',r.ptaje2,r.ptaje) ,n.codigo_nit ,to_number(substr(p.cuenta,5,2))  fr\
om acumulanit a ,retencion r ,nits n ,plan p where ((((((((((n.codigo_nit=a.co\
digo_nit and a.ano_mes>=:b0) and a.ano_mes<=:b1) and ((p.cuenta>='236501' and \
p.cuenta<='236598') or p.cuenta in ('23670101','23670102','23680101'))) and p.\
cuenta=substr(a.cuenta,1,6)) and p.nivel='3') and substr(p.cuenta,5,2)=r.codig\
o) and a.codigo_emp=p.codigo_emp) and a.codigo_emp=:b2) and n.nit>=:b3) and n.\
nit<=:b4) group by r.nombre,n.nombre,n.nit,n.clase_docu,r.ptaje,r.ptaje2,n.cod\
igo_nit,p.cuenta order by n.nit,p.cuenta            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,115,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,3,186,0,4,162,0,5,1,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,1,9,0,0,
62,0,0,2,674,0,9,177,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
96,0,0,4,20,0,2,179,0,0,0,0,1,0,
110,0,0,2,0,0,13,186,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,
0,2,3,0,0,
152,0,0,5,298,0,4,214,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
186,0,0,6,32,0,3,262,0,1,1,0,1,0,1,4,0,0,
204,0,0,2,0,0,15,273,0,0,0,0,1,0,
218,0,0,7,0,0,30,275,0,0,0,0,1,0,
};


/*****************************************************************
* LRETENCION.C Version 1.0 - Rev 1.2 - Mar. 13/98.
*
* lretencion.c Programa que lista los certificados de retencion en la
* fuente.
*
* Uso : lretencion codigo_emp ano_mesi ano_mesf device copias userid/password
*
* Martin A. Toloza L. Creado Marzo 13-1998.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void titulos();
void totales();
void monletr();

double redondo();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Acumulanit (C1) */
/* VARCHAR nombre_r      [56]; */ 
struct { unsigned short len; unsigned char arr[56]; } nombre_r;

/* VARCHAR nombre        [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nombre;

double  nit;
double  valor;
float   ptaje;
double  codigo_nit;
int     codigo_ret;
/* VARCHAR codigo_emp    [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR ano_mesi      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR ano_mesf      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesf;

                                 /* Ciudades (C2) */
/* VARCHAR nombre_emp    [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nombre_emp;

/* VARCHAR direccion_emp [56]; */ 
struct { unsigned short len; unsigned char arr[56]; } direccion_emp;

double  nit_emp;
/* VARCHAR nombre_ciu    [22]; */ 
struct { unsigned short len; unsigned char arr[22]; } nombre_ciu;

                                 /* Acumulanit (C3) */
double  valor_sal;
/* VARCHAR codigo_nita   [8]; */ 
struct { unsigned short len; unsigned char arr[8]; } codigo_nita;

int     a2k;
int     ano;
/* VARCHAR niti         [13]; */ 
struct { unsigned short len; unsigned char arr[13]; } niti;

/* VARCHAR nitf         [13]; */ 
struct { unsigned short len; unsigned char arr[13]; } nitf;


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
#define A_F1 "###,###,###.##"

char *fmtnum(), r_t[100];
int     con_lin=66;                                /* Contador de Lineas  */
int	staora = 0;
int	oraest = 0;
double  nita=0;
int     j;
double  valor_tot=0;

char    copias[3];
char    cadena[120];
char    cadena2[50];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

if (argc < 7)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : lretencion codigo_emp ano_mesi ano_mesf nitini nitfin device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (codigo_emp.arr,  argv[1]);
codigo_emp.len   =       strlen(codigo_emp.arr);
strcpy (ano_mesi.arr,    argv[2]);
ano_mesi.len     =       strlen(ano_mesi.arr);
strcpy (ano_mesf.arr,    argv[3]);
ano_mesf.len     =       strlen(ano_mesf.arr);
strcpy (niti.arr,        argv[4]);
niti.len =               strlen(niti.arr);
strcpy (nitf.arr,        argv[5]);
nitf.len =               strlen(nitf.arr);
strcpy (device,          argv[6]);
strlow (device);
strcpy (copias,          argv[7]);

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
    abre_impresora(copias);

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/

    /* EXEC SQL DECLARE C1 CURSOR FOR
	     select r.nombre, n.nombre, n.nit,
       	     	    sum(valor_cre-valor_deb), decode(n.clase_docu,'N',r.ptaje2, r.ptaje),
	     	    n.codigo_nit, to_number(substr(p.cuenta,5,2))
	     from   acumulanit a, retencion r, nits n, plan p
       	     where n.codigo_nit         = a.codigo_nit         and
             	   a.ano_mes           >=  :ano_mesi           and
             	   a.ano_mes           <=  :ano_mesf           and
             	 ((p.cuenta            >= '236501'             and
             	   p.cuenta            <= '236598')            or
             	   p.cuenta in ('23670101','23670102','23680101')) and
             	   p.cuenta             = substr(a.cuenta,1,6) and
             	   p.nivel              = '3'                  and
             	   substr(p.cuenta,5,2) = r.codigo             and
             	   a.codigo_emp         = p.codigo_emp         and
             	   a.codigo_emp         = :codigo_emp          and
             	   n.nit               >= :niti                and
             	   n.nit               <= :nitf
       	     group by r.nombre, n.nombre, n.nit, n.clase_docu, r.ptaje, r.ptaje2,
                      n.codigo_nit, p.cuenta
       	     order by n.nit, p.cuenta; */ 


    /* EXEC SQL select n.nombre, n.direccion, n.nit, c.nombre
             into  :nombre_emp, :direccion_emp, :nit_emp, :nombre_ciu
             from   nits n, ciudades c, empresas e
             where  n.codigo_nit = e.codigo_nit  and
                    n.codigo_ciu = c.codigo      and
                    e.codigo_emp = :codigo_emp; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 5;
    sqlstm.stmt = "select n.nombre ,n.direccion ,n.nit ,c.nombre into :b0,:b\
1,:b2,:b3  from nits n ,ciudades c ,empresas e where ((n.codigo_nit=e.codigo_n\
it and n.codigo_ciu=c.codigo) and e.codigo_emp=:b4)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)28;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nombre_emp;
    sqlstm.sqhstl[0] = (unsigned long  )53;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&direccion_emp;
    sqlstm.sqhstl[1] = (unsigned long  )58;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&nit_emp;
    sqlstm.sqhstl[2] = (unsigned long  )8;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&nombre_ciu;
    sqlstm.sqhstl[3] = (unsigned long  )24;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[4] = (unsigned long  )7;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
        fprintf (stderr, "Error Leyendo Empresa C2(%d)\n", sqlca.sqlcode);
    }

    nombre_emp.arr       [nombre_emp.len]      = '\0';
    direccion_emp.arr    [direccion_emp.len]   = '\0';
    nombre_ciu.arr       [nombre_ciu.len]      = '\0';

    /* EXEC SQL OPEN C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 5;
    sqlstm.stmt = sq0002;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)62;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&ano_mesi;
    sqlstm.sqhstl[0] = (unsigned long  )22;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesf;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
    sqlstm.sqhstl[2] = (unsigned long  )7;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&niti;
    sqlstm.sqhstl[3] = (unsigned long  )15;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&nitf;
    sqlstm.sqhstl[4] = (unsigned long  )15;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    staora  = 0;
 /* EXEC SQL delete from etqprov; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 5;
 sqlstm.stmt = "delete from etqprov ";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)96;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error Borrando etiquetas para proveedores(etqprov) (%d)\n", sqlca.sqlcode);

 while (staora == 0) {

        /* EXEC SQL FETCH C1 INTO :nombre_r, :nombre, :nit, :valor,
                               :ptaje, :codigo_nit, :codigo_ret; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 7;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)110;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&nombre_r;
        sqlstm.sqhstl[0] = (unsigned long  )58;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&nombre;
        sqlstm.sqhstl[1] = (unsigned long  )53;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&nit;
        sqlstm.sqhstl[2] = (unsigned long  )8;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&valor;
        sqlstm.sqhstl[3] = (unsigned long  )8;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&ptaje;
        sqlstm.sqhstl[4] = (unsigned long  )4;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqharm[4] = (unsigned long )0;
        sqlstm.sqhstv[5] = (unsigned char  *)&codigo_nit;
        sqlstm.sqhstl[5] = (unsigned long  )8;
        sqlstm.sqindv[5] = (         short *)0;
        sqlstm.sqharm[5] = (unsigned long )0;
        sqlstm.sqhstv[6] = (unsigned char  *)&codigo_ret;
        sqlstm.sqhstl[6] = (unsigned long  )4;
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
        if (staora == -1405)
            staora  = 0;
        else if (staora) {
                 fprintf (stderr, "Error Leyendo C1 (%d)\n", staora);
                 }

        nombre_r.arr  [nombre_r.len] = '\0';
        nombre.arr    [nombre.len]   = '\0';

        if (nita != nit) {
            if (valor_tot>0) {
                totales();
            }
            nita=nit;
            con_lin=66;
        }
        if (valor > 0) {
           if (con_lin > 62)
               titulos();
           if (codigo_ret == 5) {
               sprintf(codigo_nita.arr,"%5.0f",codigo_nit);
               codigo_nita.len =   strlen(codigo_nita.arr);

               /* EXEC SQL select sum(valor_deb-valor_cre)
                        into  :valor_sal
	                from  acumulanit a, plan p
                        where a.codigo_nit     =  :codigo_nita        and
                              a.ano_mes       >=  :ano_mesi           and
                              a.ano_mes       <=  :ano_mesf           and
                              p.cuenta         = '510506'             and
                              p.cuenta         = substr(a.cuenta,1,6) and
                              p.nivel          = '3'                  and
                              a.codigo_emp     = p.codigo_emp         and
                              a.codigo_emp     =  :codigo_emp
                        group by a.codigo_nit, p.cuenta; */ 

{
               struct sqlexd sqlstm;

               sqlstm.sqlvsn = 8;
               sqlstm.arrsiz = 7;
               sqlstm.stmt = "select sum((valor_deb-valor_cre)) into :b0  fr\
om acumulanit a ,plan p where (((((((a.codigo_nit=:b1 and a.ano_mes>=:b2) and \
a.ano_mes<=:b3) and p.cuenta='510506') and p.cuenta=substr(a.cuenta,1,6)) and \
p.nivel='3') and a.codigo_emp=p.codigo_emp) and a.codigo_emp=:b4) group by a.c\
odigo_nit,p.cuenta";
               sqlstm.iters = (unsigned long  )1;
               sqlstm.offset = (unsigned short)152;
               sqlstm.selerr = (unsigned short)1;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)0;
               sqlstm.sqhstv[0] = (unsigned char  *)&valor_sal;
               sqlstm.sqhstl[0] = (unsigned long  )8;
               sqlstm.sqindv[0] = (         short *)0;
               sqlstm.sqharm[0] = (unsigned long )0;
               sqlstm.sqhstv[1] = (unsigned char  *)&codigo_nita;
               sqlstm.sqhstl[1] = (unsigned long  )10;
               sqlstm.sqindv[1] = (         short *)0;
               sqlstm.sqharm[1] = (unsigned long )0;
               sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesi;
               sqlstm.sqhstl[2] = (unsigned long  )22;
               sqlstm.sqindv[2] = (         short *)0;
               sqlstm.sqharm[2] = (unsigned long )0;
               sqlstm.sqhstv[3] = (unsigned char  *)&ano_mesf;
               sqlstm.sqhstl[3] = (unsigned long  )22;
               sqlstm.sqindv[3] = (         short *)0;
               sqlstm.sqharm[3] = (unsigned long )0;
               sqlstm.sqhstv[4] = (unsigned char  *)&codigo_emp;
               sqlstm.sqhstl[4] = (unsigned long  )7;
               sqlstm.sqindv[4] = (         short *)0;
               sqlstm.sqharm[4] = (unsigned long )0;
               sqlstm.sqphsv = sqlstm.sqhstv;
               sqlstm.sqphsl = sqlstm.sqhstl;
               sqlstm.sqpind = sqlstm.sqindv;
               sqlstm.sqparm = sqlstm.sqharm;
               sqlstm.sqparc = sqlstm.sqharc;
               sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


               oraest  = sqlca.sqlcode;
               if (oraest != 1403 && oraest != 0) {
                   fprintf (stderr, "Error Leyendo C3 (%d)\n", oraest);
               }
               sprintf (cadena,"%9.0f",valor_sal);
           }
           else {
                if (nit==890111018 && codigo_ret == 40) {
                    ptaje=2;
                }
                sprintf (cadena,"%9.0f",redondo((valor/ptaje)*100,0));
           }
           fprintf (fp,"%-35s",nombre_r.arr);
           if (codigo_ret != 5) {
               sprintf (cadena2,"%3.2f",ptaje);
               fprintf (fp,"%6s",fmtnum("zz9.99",cadena2,r_t));
           }
           else {
                fprintf (fp,"%6s"," ");
           }
           if (j==0) {
               fprintf (fp,"%16s",fmtnum("$z,zzz,zzz,zz9",cadena,r_t));
               sprintf (cadena,"%9.2f",valor);
               fprintf (fp,"%17s\n",fmtnum("$zz,zzz,zz9.99",cadena,r_t));
               j=1;
           }
           else {
               fprintf (fp,"%16s",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));
               sprintf (cadena,"%9.2f",valor);
               fprintf (fp,"%17s\n",fmtnum("zzz,zzz,zz9.99",cadena,r_t));
           }
           valor_tot+=valor;
           con_lin++;
        }

        sprintf(codigo_nita.arr,"%5.0f",codigo_nit);
        /* EXEC SQL insert into etqprov values(:codigo_nit); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 7;
        sqlstm.stmt = "insert into etqprov values (:b0)";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)186;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codigo_nit;
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



        if (sqlca.sqlcode != 0) {
            fprintf (stderr, "Error insertando etiquetas para proveedores(etqprov) (%s) (%d)\n", codigo_nita.arr, sqlca.sqlcode);
        }

 }
 if (valor_tot>0)
     totales();
 cierre_impresora();

 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 7;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)204;
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
 sqlstm.offset = (unsigned short)218;
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
 char n[60], n1[60], n2[60], n3[60], n4[60];
 strcpy(n,nombre_emp.arr);
 strcat(n1,direccion_emp.arr);
 sprintf(n2,"%s%s",nombre_ciu.arr," -  COLOMBIA");
 sprintf(cadena,"%10.0f",nit_emp);
 sprintf(n3,"Nit : %14s",fmtnum("zzzz,zzz,zz9",cadena,r_t));
 strcpy(n4,"CERTIFICADO DE RETENCION EN LA FUENTE ");

 strful(cadena,(int)(46-strlen(n))/2,' ');
 fprintf(fp,"%s%s%s%s%s%s%s\n\n",salte_pagina,elite,ancho_on,cadena,n,diezcpi,ancho_off);
 strful(cadena,(int)(76-strlen(n2))/2,' ');
 fprintf(fp,"%s%s%s\n",enfatizado_on,cadena,n2);
 strful(cadena,(int)(76-strlen(n1))/2,' ');
 fprintf(fp,"%s%s\n",cadena,n1);
 strful(cadena,(int)(76-strlen(n3))/2,' ');
 fprintf(fp,"%s%s%s\n\n\n\n\n",cadena,n3,enfatizado_off);
 fprintf(fp,"%s%s%s%s%s\n\n\n\n\n\n",condensado_on,ancho_on,n4,condensado_off,ancho_off);
 fprintf(fp,"%s\n","Certificamos que durante el a|o gravable de 2,008 practicamos retencio\b'n en");
 fprintf(fp,"%s\n\n","la fuente a los se|ores :");
 fprintf(fp,"%s%-57s%3s\n",enfatizado_on,"RAZON SOCIAL","NIT");
 fprintf(fp,"%-53s%11s%s\n","------------","-----------",enfatizado_off);
 sprintf(cadena,"%10.0f",nit);

 fprintf(fp,"%-50s%14s\n\n\n",nombre.arr,fmtnum("zzzz,zzz,zz9",cadena,r_t));
 fprintf(fp,"%s%-42s%15s\n",enfatizado_on," ","BASE SOMETIDA ");
 fprintf(fp,"%-35s%7s%15s%17s\n","CONCEPTO","%   ","A LA RETENCION","VALOR RETENIDO");
 fprintf(fp,"%-35s%7s%15s%17s%s\n","--------"," ------","--------------","--------------",enfatizado_off);
 con_lin=26;
}

void totales()
{
  int i;
  for (i=1;i<=35-con_lin;i++) {
      fprintf(fp,"\n");
  }
  sprintf(cadena,"%6.2f",valor_tot);
  fprintf(fp,"%s%52s%s%22s\n\n",enfatizado_on,"VALOR DE LA RETENCION =======>",enfatizado_off,fmtnum("$zz,zzz,zz9.99",cadena,r_t));
  monletr(valor_tot,cadena);
  fprintf(fp,"%s%s%s%s%s%s\n\n",elite,enfatizado_on,"SON : ",cadena,diezcpi,enfatizado_off);
  fprintf(fp,"%s%s%s%s\n\n",enfatizado_on,"LUGAR DONDE SE PRACTICO LA RETENCION : ",enfatizado_off,"BARRANQUILLA.");
  fprintf(fp,"%s\n","Para constancia, firmamos  en  BARRANQUILLA   a  los  16  di\b'as  del mes  de");
  fprintf(fp,"%s\n\n\n\n\n","FEBRERO DE 2,009.");
  fprintf(fp,"%s\n","______________________________");
  valor_tot=0;
  con_lin=66;
  j=0;
}
