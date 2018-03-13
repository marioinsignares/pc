
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
    ".\\lcertifica.pc"
};


static const unsigned long sqlctx = 1232981914;


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
"select n.nombre ,n.nit ,sum((valor_deb-valor_cre)) ,n.codigo_nit  from acumu\
lanit a ,nits n ,plan p where (((((((n.codigo_nit=a.codigo_nit and a.ano_mes>=\
to_number(:b0)) and a.ano_mes<=to_number(:b1)) and p.cuenta in ('510503','5105\
06','510512','510515','510518','510521','510527','510536','510539','510548','5\
10560')) and p.cuenta=substr(a.cuenta,1,6)) and p.nivel='3') and a.codigo_emp=\
p.codigo_emp) and a.codigo_emp=to_number(:b2)) group by n.nombre,n.nit,n.codig\
o_nit order by n.nit            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,99,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,498,0,9,138,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
54,0,0,3,197,0,4,141,0,5,1,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,9,0,0,1,9,0,0,
88,0,0,2,0,0,13,158,0,4,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
118,0,0,4,314,0,4,170,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
152,0,0,5,300,0,4,187,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
186,0,0,2,0,0,15,219,0,0,0,0,1,0,
200,0,0,6,0,0,30,221,0,0,0,0,1,0,
};


/*****************************************************************
* LCERTIFICA.C Version 1.0 - Rev 1.2 - Ene. 16/98.
*
* lcertifica.c Programa que lista los certificados de ingresos y retenciones
*
* Uso : lcertifica codigo_emp ano_mes device copias userid/password
*
* Mario E. Santiago I. Creado Marzo 30 de 1.994
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
double redondo();

void titulos();

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid          [100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;
 
/* VARCHAR codigo_emp   [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

/* VARCHAR ano_mesi     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesi;

/* VARCHAR ano_mesf     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mesf;

/* VARCHAR nombre       [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nombre;

/* VARCHAR nombre_emp   [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nombre_emp;

/* VARCHAR nombre_r     [56]; */ 
struct { unsigned short len; unsigned char arr[56]; } nombre_r;

/* VARCHAR nombre_ciu   [26]; */ 
struct { unsigned short len; unsigned char arr[26]; } nombre_ciu;

/* VARCHAR direccion    [56]; */ 
struct { unsigned short len; unsigned char arr[56]; } direccion;

/* VARCHAR direccion_emp[56]; */ 
struct { unsigned short len; unsigned char arr[56]; } direccion_emp;

/* VARCHAR codigo_nita  [8]; */ 
struct { unsigned short len; unsigned char arr[8]; } codigo_nita;

double  nit;
double  nit_emp;
double  nita;
double  valor;
double  valor_ces;
double  valor_ret;
double  codigo_nit;
double  valor_sal;
int     a2k;

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
        		                /* Variables de recepcion para datos */

char *fmtnum(), r_t[100];
int     con_lin=66;                                /* Contador de Lineas  */
char    copias[3];
double  valor_tot;
int     j;
char    cadena[120];
char    cadena2[50];
int     oraest;
char    a;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

if (argc < 7)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : lcertifica codigo_emp ano_mesi ano_mesf device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

   strcpy (codigo_emp.arr, argv[1]);
   codigo_emp.len =        strlen(codigo_emp.arr);
   strcpy (ano_mesi.arr,   argv[2]);
   ano_mesi.len =          strlen(ano_mesi.arr);
   strcpy (ano_mesf.arr,   argv[3]);
   ano_mesf.len =          strlen(ano_mesf.arr);
   strcpy (device,         argv[4]);
   strlow (device);
   strcpy (copias,         argv[5]);

   if (!strpos ("/", argv[6])) {
       printf ("user id/password incorrecto.\n");
       exit (1);
   }
   strcpy(uid.arr,argv[6]);
   uid.len=strlen(uid.arr);

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



   if (sqlca.sqlcode==-1915) {
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

   /* C1 */
   /* EXEC SQL DECLARE C1 CURSOR FOR
      select n.nombre, n.nit, sum(valor_deb-valor_cre),
             n.codigo_nit
      from  acumulanit a, nits n, plan p
      where n.codigo_nit         = a.codigo_nit          and
            a.ano_mes           >= to_number(:ano_mesi)  and
            a.ano_mes           <= to_number(:ano_mesf)  and
            p.cuenta            in ('510503','510506','510512','510515',
                                    '510518','510521','510527','510536',
                                    '510539','510548','510560')
                                                         and
            p.cuenta             = substr(a.cuenta,1,6)  and
            p.nivel              = '3'                   and
            a.codigo_emp         = p.codigo_emp          and
            a.codigo_emp         = to_number(:codigo_emp)
      group by n.nombre, n.nit, n.codigo_nit
      order by n.nit; */ 


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
   sqlstm.sqhstv[0] = (unsigned char  *)&ano_mesi;
   sqlstm.sqhstl[0] = (unsigned long  )22;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesf;
   sqlstm.sqhstl[1] = (unsigned long  )22;
   sqlstm.sqindv[1] = (         short *)0;
   sqlstm.sqharm[1] = (unsigned long )0;
   sqlstm.sqhstv[2] = (unsigned char  *)&codigo_emp;
   sqlstm.sqhstl[2] = (unsigned long  )5;
   sqlstm.sqindv[2] = (         short *)0;
   sqlstm.sqharm[2] = (unsigned long )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* C2 */
   /* EXEC SQL select n.nombre, n.direccion, n.nit, c.nombre
            into  :nombre_emp, :direccion_emp, :nit_emp, :nombre_ciu
            from   nits n, empresas e, ciudades c
            where  n.codigo_ciu = c.codigo                and
                   n.codigo_nit = e.codigo_nit            and
                   e.codigo_emp = to_number(:codigo_emp); */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 5;
   sqlstm.stmt = "select n.nombre ,n.direccion ,n.nit ,c.nombre into :b0,:b1\
,:b2,:b3  from nits n ,empresas e ,ciudades c where ((n.codigo_ciu=c.codigo an\
d n.codigo_nit=e.codigo_nit) and e.codigo_emp=to_number(:b4))";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)54;
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
   sqlstm.sqhstl[3] = (unsigned long  )28;
   sqlstm.sqindv[3] = (         short *)0;
   sqlstm.sqharm[3] = (unsigned long )0;
   sqlstm.sqhstv[4] = (unsigned char  *)&codigo_emp;
   sqlstm.sqhstl[4] = (unsigned long  )5;
   sqlstm.sqindv[4] = (         short *)0;
   sqlstm.sqharm[4] = (unsigned long )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
       fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);

   nombre_emp.arr      [nombre_emp.len]       = '\0';
   direccion.arr       [direccion.len]        = '\0';
   nombre_ciu.arr      [nombre_ciu.len]       = '\0';

oraest  = 0;
while (oraest == 0) {

      /* EXEC SQL FETCH C1 INTO :nombre, :nit, :valor, :codigo_nit; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 5;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)88;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&nombre;
      sqlstm.sqhstl[0] = (unsigned long  )53;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&nit;
      sqlstm.sqhstl[1] = (unsigned long  )8;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&valor;
      sqlstm.sqhstl[2] = (unsigned long  )8;
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



      oraest  = sqlca.sqlcode;
      if (sqlca.sqlcode == 1403) break;

      if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
          fprintf (stderr, "Error leyendo C1 (%d)\n", sqlca.sqlcode);

      nombre.arr[nombre.len] = '\0';

      valor_ces=0;
      /* C3 */
      /* EXEC SQL select sum(valor_deb-valor_cre)
               into :valor_ces
               from  acumulanit a, plan p
               where a.ano_mes           >= to_number(:ano_mesi)   and
                     a.ano_mes           <= to_number(:ano_mesf)   and
                     p.cuenta            in ('510530','510533')    and
                     p.cuenta             = substr(a.cuenta,1,6)   and
                     p.nivel              = '3'                    and
                     a.codigo_emp         = p.codigo_emp           and
                     a.codigo_emp         = to_number(:codigo_emp) and
                     a.codigo_nit         = :codigo_nit; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 5;
      sqlstm.stmt = "select sum((valor_deb-valor_cre)) into :b0  from acumul\
anit a ,plan p where (((((((a.ano_mes>=to_number(:b1) and a.ano_mes<=to_number\
(:b2)) and p.cuenta in ('510530','510533')) and p.cuenta=substr(a.cuenta,1,6))\
 and p.nivel='3') and a.codigo_emp=p.codigo_emp) and a.codigo_emp=to_number(:b\
3)) and a.codigo_nit=:b4)";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)118;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&valor_ces;
      sqlstm.sqhstl[0] = (unsigned long  )8;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesi;
      sqlstm.sqhstl[1] = (unsigned long  )22;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesf;
      sqlstm.sqhstl[2] = (unsigned long  )22;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned long  )5;
      sqlstm.sqindv[3] = (         short *)0;
      sqlstm.sqharm[3] = (unsigned long )0;
      sqlstm.sqhstv[4] = (unsigned char  *)&codigo_nit;
      sqlstm.sqhstl[4] = (unsigned long  )8;
      sqlstm.sqindv[4] = (         short *)0;
      sqlstm.sqharm[4] = (unsigned long )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
       fprintf (stderr, "Error leyendo C3 (%d)\n", sqlca.sqlcode);

      valor_ret=0;
      /* C4 */
      /* EXEC SQL select sum(valor_deb-valor_cre)
               into :valor_ret
               from  acumulanit a, plan p
               where a.ano_mes           >= to_number(:ano_mesi)   and
                     a.ano_mes           <= to_number(:ano_mesf)   and
                     p.cuenta             = '236505'               and
                     p.cuenta             = substr(a.cuenta,1,6)   and
                     p.nivel              = '3'                    and
                     a.codigo_emp         = p.codigo_emp           and
                     a.codigo_emp         = to_number(:codigo_emp) and
                     a.codigo_nit         = :codigo_nit; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 5;
      sqlstm.stmt = "select sum((valor_deb-valor_cre)) into :b0  from acumul\
anit a ,plan p where (((((((a.ano_mes>=to_number(:b1) and a.ano_mes<=to_number\
(:b2)) and p.cuenta='236505') and p.cuenta=substr(a.cuenta,1,6)) and p.nivel='\
3') and a.codigo_emp=p.codigo_emp) and a.codigo_emp=to_number(:b3)) and a.codi\
go_nit=:b4)";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)152;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&valor_ret;
      sqlstm.sqhstl[0] = (unsigned long  )8;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&ano_mesi;
      sqlstm.sqhstl[1] = (unsigned long  )22;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&ano_mesf;
      sqlstm.sqhstl[2] = (unsigned long  )22;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned long  )5;
      sqlstm.sqindv[3] = (         short *)0;
      sqlstm.sqharm[3] = (unsigned long )0;
      sqlstm.sqhstv[4] = (unsigned char  *)&codigo_nit;
      sqlstm.sqhstl[4] = (unsigned long  )8;
      sqlstm.sqindv[4] = (         short *)0;
      sqlstm.sqharm[4] = (unsigned long )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) 
       fprintf (stderr, "Error leyendo C4 (%d)\n", sqlca.sqlcode);

      if (con_lin > 62)
          titulos();
      if (valor != 0) {
         sprintf (cadena,"%9.2f",nit);
         fprintf (fp,"%13s ",fmtnum("zzz,zzz,zz9",cadena,r_t));
         fprintf (fp,"%-42s",nombre.arr);
         sprintf (cadena,"%9.2f",valor);
         fprintf (fp,"%17s",fmtnum("$zz,zzz,zz9.99",cadena,r_t));
         sprintf (cadena,"%9.2f",valor_ces);
         fprintf (fp,"%17s",fmtnum("$zz,zzz,zz9.99",cadena,r_t));
         sprintf (cadena,"%9.2f",valor_ret);
         fprintf (fp,"%17s\n",fmtnum("$zz,zzz,zz9.99",cadena,r_t));
         con_lin++;
     }
}
cierre_impresora();

/* EXEC SQL CLOSE C1; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 5;
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)186;
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
sqlstm.offset = (unsigned short)200;
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
 char n[50], n1[50], n2[40], n3[50], n4[40];
 strcpy(n,nombre_emp.arr);
 strcat(n1,direccion_emp.arr);
 sprintf(n2,"%s%s",nombre_ciu.arr," -  COLOMBIA");
 sprintf(cadena,"%10.0f",nit_emp);
 sprintf(n3,"Nit : %14s",fmtnum("zzzz,zzz,zz9",cadena,r_t));
 strcpy(n4,"CERTIFICADO DE INGRESOS Y RETENCIONES");

 strful(cadena,(int)(46-strlen(n))/2,' ');
 fprintf(fp,"%s%s%s%s%s%s%s\n\n",salte_pagina,elite,ancho_on,cadena,n,diezcpi,ancho_off);
 strful(cadena,(int)(76-strlen(n2))/2,' ');
 fprintf(fp,"%s%s%s\n",enfatizado_on,cadena,n2);
 strful(cadena,(int)(76-strlen(n1))/2,' ');
 fprintf(fp,"%s%s\n",cadena,n1);
 strful(cadena,(int)(76-strlen(n3))/2,' ');
 fprintf(fp,"%s%s%s\n\n",cadena,n3,enfatizado_off);
 strful(cadena,(int)(76-strlen(n4))/2,' ');
 fprintf(fp,"%s%s%s%s%s%s\n",condensado_on,ancho_on,cadena,n4,condensado_off,ancho_off);
 fprintf(fp,"%s%-17s%-42s%-18s\n\n",elite,"       NIT  ","NOMBRE","SALARIOS Y OTROS  CESANTIAS E INT.   VALOR RETENCION");
 con_lin=6; 
}
