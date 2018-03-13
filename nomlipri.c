
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
    ".\\nomlipri.pc"
};


static const unsigned long sqlctx = 1216140615;


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
"select e.codigo ,n.codigo_nit ,n.nit ,n.nombre ,e.basico ,e.ctacte ,e.estado\
_lab  from nomemple e ,nits n where ((e.codigo_nit=n.codigo_nit and e.estado_l\
ab<>'R') and e.codigo_emp=:b0) order by e.codigo            ";
 static const char *sq0003 = 
"select v.concepto ,v.clase_pd ,v.horas ,round(v.valor_noved,0)  from nomnove\
d v ,nits n ,nomfijos f where ((((n.codigo_nit=:b0 and f.codigo_emp=v.codigo_e\
mp) and v.fecha_has=f.fecha_has) and v.codigo_emp=:b1) and v.codigo=:b2) order\
 by v.clase_pd,v.concepto            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,118,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,214,0,9,162,0,1,1,0,1,0,1,9,0,0,
46,0,0,4,0,0,30,165,0,0,0,0,1,0,
60,0,0,2,0,0,15,166,0,0,0,0,1,0,
74,0,0,2,0,0,13,187,0,7,0,0,1,0,2,3,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,9,0,
0,2,9,0,0,
116,0,0,3,269,0,9,211,0,3,3,0,1,0,1,3,0,0,1,9,0,0,1,3,0,0,
142,0,0,3,0,0,13,212,0,4,0,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,4,0,0,
172,0,0,3,0,0,15,222,0,0,0,0,1,0,
186,0,0,2,0,0,13,235,0,7,0,0,1,0,2,3,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,9,0,
0,2,9,0,0,
228,0,0,5,182,0,4,276,0,4,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,
258,0,0,3,0,0,13,344,0,4,0,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,4,0,0,
};


/*****************************************************************
* NOMLINOV  Version 1.0 - Rev 1.2 - Feb. 11/99.
*
* nomlinov.c Programa de liquidaci¢n de novedades
*
* Uso : nomlinov codigo_emp device copias userid/password
*
* Mario E. Santiago I. Creado Febrero 11-2000.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double redondo();
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

/* VARCHAR codigo_emp     [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR nomb_emp       [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nomb_emp;

/* VARCHAR fecha_has      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_has;

/* VARCHAR fecha_des      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_des;

/* VARCHAR ctacte         [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ctacte;

/* VARCHAR estado_lab     [2]; */ 
struct { unsigned short len; unsigned char arr[2]; } estado_lab;

double  sueldoact;
int     codigo_nit;
int     codigo;
int     concepto;
int     clase_pd;
int     horas;
double  nit;
/* VARCHAR nombre         [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } nombre;

double  sueldo;
double  valor_noved;

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


char *fmtnum(), r_t[100];
int     con_pag;                                   /* Contador de Paginas */
int     con_lin=66;                                /* Contador de Lineas  */
char    copias[6];

int	staora = 0;
char    formas[5];
char    fechas[100];
char    fecha[30];
char    cadena[100];
char    cadena2[100];
char    aestado[2][8];
int     dias;
int     diasinc;
double  basico;
double  transp;
double  otrosp;
double  otrosd;
double  iss;
double  prestamo;
double  totalp;
double  totald;
double  totbasico;
double  tottransp;
double  tototrosp;
double  tottotalp;
double  totiss;
double  totprestamo;
double  tototrosd;
double  tottotald;
double  totneto;
double  neto;
int     nconta;

void lista_empresa();
void empresa();
void titulos();
void totalnov();
void acumule_nov();

void main(argc, argv)
int     argc;
char    *argv[];
{
char    device[10];
int     status = 0;

if (argc < 5)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : nomlinov codigo_emp device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (codigo_emp.arr, argv[1]);
codigo_emp.len = strlen(codigo_emp.arr);
strcpy (device,             argv[2]);
strlow (device);
strcpy (copias,             argv[3]);

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
    abre_impresora(copias);

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/

 /* EXEC SQL DECLARE C1 CURSOR FOR
       select e.codigo, n.codigo_nit, n.nit, n.nombre, e.basico,
              e.ctacte, e.estado_lab
       from   nomemple e, nits n
       where  e.codigo_nit    = n.codigo_nit     and
              e.estado_lab    <> 'R'             and
              e.codigo_emp    = :codigo_emp
       order by e.codigo; */ 


 /* EXEC SQL DECLARE C2 CURSOR FOR
       select v.concepto, v.clase_pd, v.horas, round(v.valor_noved,0)
       from   nomnoved v, nits n, nomfijos f
       where  n.codigo_nit    = :codigo_nit      and
              f.codigo_emp    = v.codigo_emp     and
              v.fecha_has     = f.fecha_has      and
              v.codigo_emp    = :codigo_emp      and
              v.codigo        = :codigo
       order by v.clase_pd, v.concepto; */ 


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
 sqlstm.sqhstl[0] = (unsigned long  )7;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 empresa();
 lista_empresa();
 /* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)46;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)60;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 cierre_impresora();
 exit   (0);
}

void lista_empresa()
{

 strcpy(fecha,fecha_des.arr);
 fecha_oracle(fecha);
 strcpy(cadena,fecha);
 strcat(cadena," hasta ");
 strcpy(fecha,fecha_has.arr);
 fecha_oracle(fecha);
 strcat(cadena,fecha);
 strcpy(fechas,cadena);
 titulos();

 staora  = 0;

 /* EXEC SQL FETCH C1 INTO :codigo, :codigo_nit, :nit, :nombre, :sueldo,
                        :ctacte, :estado_lab; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 7;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)74;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo;
 sqlstm.sqhstl[0] = (unsigned long  )4;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_nit;
 sqlstm.sqhstl[1] = (unsigned long  )4;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&nit;
 sqlstm.sqhstl[2] = (unsigned long  )8;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&nombre;
 sqlstm.sqhstl[3] = (unsigned long  )52;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&sueldo;
 sqlstm.sqhstl[4] = (unsigned long  )8;
 sqlstm.sqindv[4] = (         short *)0;
 sqlstm.sqharm[4] = (unsigned long )0;
 sqlstm.sqhstv[5] = (unsigned char  *)&ctacte;
 sqlstm.sqhstl[5] = (unsigned long  )22;
 sqlstm.sqindv[5] = (         short *)0;
 sqlstm.sqharm[5] = (unsigned long )0;
 sqlstm.sqhstv[6] = (unsigned char  *)&estado_lab;
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

 if (staora == -1405) {
    staora = 0;
 }
 if (staora) {
    fprintf (stderr, "Error leyendo C1 (%d)\n", staora);
    exit   (1);
 }
 nombre.arr      [nombre.len]     = '\0';
 ctacte.arr      [ctacte.len]     = '\0';
 estado_lab.arr  [estado_lab.len] = '\0';

 while (staora == 0) {
/*    fprintf (stderr, "Leyendo C1 codigo=(%d) codigo_nit(%d) staora(%d)\n", codigo, codigo_nit, staora); getchar(); */
      sprintf(cadena,"%12.0f",nit);
      strcpy(cadena2,nombre.arr);
      strorg(cadena2,1,19);
      fprintf(fp,"%10s %-19s",fmtnum("zz,zzz,zz9",cadena,r_t), cadena2);
      sprintf(cadena,"%12.0f",sueldo);
      fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
      /* EXEC SQL OPEN C2; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 7;
      sqlstm.stmt = sq0003;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)116;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&codigo_nit;
      sqlstm.sqhstl[0] = (unsigned long  )4;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
      sqlstm.sqhstl[1] = (unsigned long  )7;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&codigo;
      sqlstm.sqhstl[2] = (unsigned long  )4;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL FETCH C2 INTO :concepto, :clase_pd, :horas, :valor_noved; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 7;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)142;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&concepto;
      sqlstm.sqhstl[0] = (unsigned long  )4;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&clase_pd;
      sqlstm.sqhstl[1] = (unsigned long  )4;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&horas;
      sqlstm.sqhstl[2] = (unsigned long  )4;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&valor_noved;
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
      if (staora) {
         fprintf (stderr, "Error leyendo C2 (%d) (%d) (%d)\n", codigo, codigo_nit, staora);
      }
      while (staora == 0) {
            acumule_nov();
      }
      totalnov();
      /* EXEC SQL CLOSE C2; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 7;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)172;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      fprintf(fp," %14s",ctacte.arr);
      if (!strcmp(estado_lab.arr,"I"))
          fprintf(fp," %6s","INCAPACI");
      else {
           if (!strcmp(estado_lab.arr,"V"))
              fprintf(fp," %6s","VACACION");
           else
              fprintf(fp," %2s %d","  ",codigo);
      }
      fprintf(fp,"\n");
      diasinc = dias   = 0;
      iss     = basico = transp  = otrosp = otrosd = prestamo = 0;
      /* EXEC SQL FETCH C1 INTO :codigo, :codigo_nit, :nit, :nombre, :sueldo,
                             :ctacte, :estado_lab; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 7;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)186;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&codigo;
      sqlstm.sqhstl[0] = (unsigned long  )4;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&codigo_nit;
      sqlstm.sqhstl[1] = (unsigned long  )4;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&nit;
      sqlstm.sqhstl[2] = (unsigned long  )8;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&nombre;
      sqlstm.sqhstl[3] = (unsigned long  )52;
      sqlstm.sqindv[3] = (         short *)0;
      sqlstm.sqharm[3] = (unsigned long )0;
      sqlstm.sqhstv[4] = (unsigned char  *)&sueldo;
      sqlstm.sqhstl[4] = (unsigned long  )8;
      sqlstm.sqindv[4] = (         short *)0;
      sqlstm.sqharm[4] = (unsigned long )0;
      sqlstm.sqhstv[5] = (unsigned char  *)&ctacte;
      sqlstm.sqhstl[5] = (unsigned long  )22;
      sqlstm.sqindv[5] = (         short *)0;
      sqlstm.sqharm[5] = (unsigned long )0;
      sqlstm.sqhstv[6] = (unsigned char  *)&estado_lab;
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


      nombre.arr      [nombre.len]     = '\0';
      ctacte.arr      [ctacte.len]     = '\0';
      estado_lab.arr  [estado_lab.len] = '\0';

      staora  = sqlca.sqlcode;
      if (staora ==  1403) break;
      if (staora == -1405)
          staora  = 0;
      else if (staora)
               fprintf (stderr, "Error leyendo C1 (%d)\n", staora);
 }
 neto = 0;

 fprintf(fp,"\n %s%30s",enfatizado_on,"Totales =====>");
 sprintf(cadena,"%10.0f",totbasico);
 fprintf(fp," %28s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%8.0f",tottransp);
 fprintf(fp," %8s",fmtnum("zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.0f",tototrosp);
 fprintf(fp," %9s",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",tottotalp);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.0f",totiss);
 fprintf(fp," %9s",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.0f",totprestamo);
 fprintf(fp," %9s",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%7.0f",tototrosd);
 fprintf(fp," %7s", fmtnum("zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.0f",tottotald);
 fprintf(fp," %9s",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totneto);
 fprintf(fp," %10s%s\n",fmtnum("zz,zzz,zz9",cadena,r_t),enfatizado_off);
 con_lin+=1;

}

void empresa()
{

 /* EXEC SQL select n.nombre, f.fecha_des, f.fecha_has
          into  :nomb_emp, :fecha_des, :fecha_has
          from   empresas e, nits n, nomfijos f
          where  e.codigo_nit = n.codigo_nit and
                 f.codigo_emp = e.codigo_emp and
                 e.codigo_emp = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 7;
 sqlstm.stmt = "select n.nombre ,f.fecha_des ,f.fecha_has into :b0,:b1,:b2  \
from empresas e ,nits n ,nomfijos f where ((e.codigo_nit=n.codigo_nit and f.co\
digo_emp=e.codigo_emp) and e.codigo_emp=:b3)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)228;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
 sqlstm.sqhstl[0] = (unsigned long  )52;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&fecha_des;
 sqlstm.sqhstl[1] = (unsigned long  )22;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&fecha_has;
 sqlstm.sqhstl[2] = (unsigned long  )22;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[3] = (unsigned long  )7;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Empresa(C5) (%d)\n", sqlca.sqlcode);

 nomb_emp.arr   [nomb_emp.len] = '\0';
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/


void titulos()
{
 con_pag++;
 fprintf(fp,"%s",salte_pagina);
 strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
 fprintf(fp,"%s%s%s%s%s\n\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
 fprintf(fp,"%s%s%s%44s",diezcpi,condensado_on,ancho_on,"LIQUIDACION DE NOVEDADES");
 fprintf(fp,"%s%s%17s %d\n\n",ancho_off,diezcpi,"PAGINA ",con_pag);
 strorg(fechas,1,strlen(fechas));
 fprintf(fp,"%s%62s%s\n\n",enfatizado_on,fechas,enfatizado_off);
 fprintf(fp,"%s%s%s%s\n\n",elite,enfatizado_on,"CEDULA     NOMBRE                 MENSUAL DI. DIAS    PRIMAS  TRANSP.     OTROS      TOTAL    I.S.S. PRESTAMOS   OTROS     TOTAL       NETO CTA-AHORRO    FIRMA",enfatizado_off);
 con_lin = 10;
}

void acumule_nov()
{
 while (staora == 0) {
      if (con_lin > 60)
         titulos();

      if (clase_pd == 1) {
         if (concepto == 1 || concepto == 2) {
            if (concepto != 15)
               dias = dias + horas / 8;
            else {
               dias = horas;
            }
            basico  = basico + valor_noved;
         }
         else {
            if (concepto == 12)
                   transp = transp + valor_noved;
            else if (concepto == 15)
                   basico = basico + valor_noved;
            else
                   otrosp = otrosp + valor_noved;
         }
      }
      else {
         if (concepto == 32)
            iss = iss + valor_noved;
         else {
            if (concepto == 26)
                prestamo = prestamo + valor_noved;
            else
                otrosd = otrosd + valor_noved;
         }
      }

      /* EXEC SQL FETCH C2 INTO :concepto, :clase_pd, :horas, :valor_noved; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 7;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)258;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&concepto;
      sqlstm.sqhstl[0] = (unsigned long  )4;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&clase_pd;
      sqlstm.sqhstl[1] = (unsigned long  )4;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&horas;
      sqlstm.sqhstl[2] = (unsigned long  )4;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&valor_noved;
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
      if (staora ==  1403) break;
      if (staora == -1405)
          staora  = 0;
      else if (staora)
               fprintf (stderr, "Error leyendo C2 (%d)\n", staora);

 }
}

void totalnov()
{
 totalp = basico + transp + otrosp;
 totald = iss    + prestamo + otrosd;
 neto   = totalp - totald;

 fprintf(fp," %3d %3d",diasinc,dias);
 sprintf(cadena,"%10.0f",basico);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",transp);
 fprintf(fp," %8s",fmtnum("zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.0f",otrosp);
 fprintf(fp," %9s",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totalp);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.0f",iss);
 fprintf(fp," %9s",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.0f",prestamo);
 fprintf(fp," %9s",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%7.0f",otrosd);
 fprintf(fp," %7s",fmtnum("zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.0f",totald);
 fprintf(fp," %9s",fmtnum("z,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%9.0f",neto);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 con_lin+=1;

 totbasico   = totbasico   + basico;
 tottransp   = tottransp   + transp;
 tototrosp   = tototrosp   + otrosp;
 tottotalp   = tottotalp   + totalp;
 totiss      = totiss      + iss;
 totprestamo = totprestamo + prestamo;
 tototrosd   = tototrosd   + otrosd;
 tottotald   = tottotald   + totald;
 totneto     = totneto     + neto;
}
