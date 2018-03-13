
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
    ".\\nomliqui2.pc"
};


static const unsigned long sqlctx = 1216140623;


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
   unsigned char    *sqhstv[12];
   unsigned long    sqhstl[12];
	    short   *sqindv[12];
   unsigned long    sqharm[12];
   unsigned long     *sqharc[12];
} sqlstm = {8,12};

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
"select e.codigo ,n.codigo_nit ,n.nit ,((e.nombre||' ')||e.primer_ap) ,e.basi\
co ,e.ctacte ,e.estado_lab ,e.fecha_est ,to_char(e.fecha_ing,'yyyy/mm/dd') ,to\
_char(e.fecha_ing,'yyyymmdd') ,ocupacion ,profesion  from nomemple e ,nits n w\
here (((e.codigo_nit=n.codigo_nit and e.estado_lab<>'R') and e.fecha_ing<=to_d\
ate(:b0,'yyyymmdd')) and e.codigo_emp=:b1) order by n.nit            ";
 static const char *sq0003 = 
"select v.concepto ,v.clase_pd ,v.horas ,round(v.valor_noved,0) ,f.transporte\
 ,minimo  from nomnoved v ,nits n ,nomfijos f where (((((n.codigo_nit=:b0 and \
f.codigo_emp=v.codigo_emp) and v.fecha_has>=to_date(:b1,'yyyymmdd')) and v.fec\
ha_has<=to_date(:b2,'yyyymmdd')) and v.codigo_emp=:b3) and v.codigo=:b4) order\
 by v.clase_pd,v.concepto            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,207,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,379,0,9,254,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
50,0,0,4,0,0,30,257,0,0,0,0,1,0,
64,0,0,2,0,0,15,258,0,0,0,0,1,0,
78,0,0,2,0,0,13,278,0,12,0,0,1,0,2,3,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,9,0,
0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
140,0,0,3,347,0,9,308,0,5,5,0,1,0,1,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,
174,0,0,3,0,0,13,309,0,6,0,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,4,0,0,2,4,0,0,2,4,0,
0,
212,0,0,3,0,0,15,321,0,0,0,0,1,0,
226,0,0,2,0,0,13,339,0,12,0,0,1,0,2,3,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
288,0,0,5,148,0,4,396,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
310,0,0,3,0,0,13,492,0,6,0,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,4,0,0,2,4,0,0,2,4,0,
0,
348,0,0,6,316,0,4,576,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,3,0,0,1,9,0,0,1,9,0,0,
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

/* VARCHAR fecha_est      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_est;

/* VARCHAR fecha_ing      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_ing;

/* VARCHAR fecha_ingc     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_ingc;

int     diasing;
int     diasliq;
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

double  valor_noved;
double  basico;
double  prestamos;
double  transp;
double  minimo;
/* VARCHAR ocupacion[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } ocupacion;

/* VARCHAR profesion[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } profesion;


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

int     anoi;
int     mesi;
int     diai;
int     anof;
int     mesf;
int     diaf;

int	staora = 0;
char    formas[5];
char    fechas[100];
char    fecha[30];
char    cadena[100];
char    cadena2[100];
char    aestado[2][8];
int     dias;
int     diasinc;
double  promedio;
double  recargo;
double  extras;
double  dominicales;
double  comisiones;
double  otrosp;
double  primas;
double  cparciales;
double  cesantias;
double  cesnetas;
double  vacacionesp;
double  vacaciones;
double  intereses;
double  interesesp;
double  neto;
double  totbasico;
double  totpromedio;
double  totrecargo;
double  totextras;
double  totdominicales;
double  totcomisiones;
double  tottransp;
double  tototrosp;
double  totbaseliq;
double  totprimas;
double  totcesantias;
double  totcparciales;
double  totcesnetas;
double  totvacaciones;
double  totintereses;
double  totprestamos;
double  totneto;
int     nconta;
float   tdias;
float   tdiasre;
float   tdiasex;
float   tdiasdo;
int     diac;
int     cdiac;
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

if (argc < 6)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : nomliqui codigo_emp fecha_des(AAAAMMDD) fecha_has(AAAAMMDD) device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (codigo_emp.arr, argv[1]);
codigo_emp.len = strlen(codigo_emp.arr);
strcpy (fecha_des.arr,  argv[2]);
fecha_des.len = strlen(fecha_des.arr);

strcpy (cadena,fecha_des.arr);
strorg (cadena,1,4);
anoi         = atoi(cadena);
strcpy (cadena,fecha_des.arr);
strorg (cadena,5,2);
mesi         = atoi(cadena);
strcpy (cadena,fecha_des.arr);
strorg (cadena,7,2);
diai         = atoi(cadena);

strcpy (fecha_has.arr,  argv[3]);
fecha_has.len = strlen(fecha_has.arr);
strcpy (cadena,fecha_has.arr);
strorg (cadena,1,4);
anof         = atoi(cadena);
strcpy (cadena,fecha_has.arr);
strorg (cadena,5,2);
mesf         = atoi(cadena);
strcpy (cadena,fecha_has.arr);
strorg (cadena,7,2);
diaf         = atoi(cadena);

if (diai>diaf) {
  mesi--;
  diai+=30;
  diai=diaf-diai;
}
else diai=diaf-diai;
cdiac=diai;

if (mesi>mesf) {
  anoi--;
  mesi+=12;
  mesi=mesf-mesi;
}
else mesi=mesf-mesi;
cdiac+=mesi*30;
mesi=mesi+diai/30;

if (anoi>anof) {
    fprintf (stderr, "Error: anoi debe ser <= anof\n");
    exit   (0);
}
else anoi=anof-anoi;
cdiac+=anoi*360;
if (anoi>0) {
    fprintf (stderr, "Error: anof - anoi debe ser igual a cero (0)\n");
    exit   (0);
}

strcpy (device,         argv[4]);
strlow (device);
strcpy (copias,         argv[5]);

if (!strpos ("/", argv[6]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,   argv[6]);
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
       select e.codigo, n.codigo_nit, n.nit, e.nombre||' '||e.primer_ap, e.basico,
              e.ctacte, e.estado_lab, e.fecha_est, to_char(e.fecha_ing,'yyyy/mm/dd'),
              to_char(e.fecha_ing,'yyyymmdd'), ocupacion, profesion
       from   nomemple e, nits n
       where  e.codigo_nit    = n.codigo_nit     and
              e.estado_lab    <> 'R'             and
              e.fecha_ing     <= to_date(:fecha_has,'yyyymmdd') and
              e.codigo_emp    = :codigo_emp
       order by n.nit; */ 


 /* EXEC SQL DECLARE C2 CURSOR FOR
       select v.concepto, v.clase_pd, v.horas, round(v.valor_noved,0), f.transporte, minimo
       from   nomnoved v, nits n, nomfijos f
       where  n.codigo_nit    = :codigo_nit      and
              f.codigo_emp    = v.codigo_emp     and
              v.fecha_has    >= to_date(:fecha_des,'yyyymmdd') and
              v.fecha_has    <= to_date(:fecha_has,'yyyymmdd') and
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
 sqlstm.sqhstv[0] = (unsigned char  *)&fecha_has;
 sqlstm.sqhstl[0] = (unsigned long  )22;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned long  )7;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
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
 sqlstm.offset = (unsigned short)50;
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
 sqlstm.offset = (unsigned short)64;
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
 fecha_oracle4(fecha);
 strcpy(cadena,fecha);
 strcat(cadena," hasta ");
 strcpy(fecha,fecha_has.arr);
 fecha_oracle4(fecha);
 strcat(cadena,fecha);
 strcpy(fechas,cadena);
 titulos();

 staora  = 0;

 /* EXEC SQL FETCH C1 INTO :codigo, :codigo_nit, :nit, :nombre, :basico,
                        :ctacte, :estado_lab, :fecha_est, :fecha_ing,
                        :fecha_ingc, :ocupacion, profesion; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 12;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)78;
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
 sqlstm.sqhstv[4] = (unsigned char  *)&basico;
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
 sqlstm.sqhstv[7] = (unsigned char  *)&fecha_est;
 sqlstm.sqhstl[7] = (unsigned long  )22;
 sqlstm.sqindv[7] = (         short *)0;
 sqlstm.sqharm[7] = (unsigned long )0;
 sqlstm.sqhstv[8] = (unsigned char  *)&fecha_ing;
 sqlstm.sqhstl[8] = (unsigned long  )22;
 sqlstm.sqindv[8] = (         short *)0;
 sqlstm.sqharm[8] = (unsigned long )0;
 sqlstm.sqhstv[9] = (unsigned char  *)&fecha_ingc;
 sqlstm.sqhstl[9] = (unsigned long  )22;
 sqlstm.sqindv[9] = (         short *)0;
 sqlstm.sqharm[9] = (unsigned long )0;
 sqlstm.sqhstv[10] = (unsigned char  *)&ocupacion;
 sqlstm.sqhstl[10] = (unsigned long  )32;
 sqlstm.sqindv[10] = (         short *)0;
 sqlstm.sqharm[10] = (unsigned long )0;
 sqlstm.sqhstv[11] = (unsigned char  *)&profesion;
 sqlstm.sqhstl[11] = (unsigned long  )32;
 sqlstm.sqindv[11] = (         short *)0;
 sqlstm.sqharm[11] = (unsigned long )0;
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
 ocupacion.arr   [ocupacion.len]  = '\0';
 profesion.arr   [profesion.len]  = '\0';

 while (staora == 0) {
/*    fprintf (stderr, "Leyendo C1 codigo=(%d) codigo_nit(%d) staora(%d)\n", codigo, codigo_nit, staora); getchar(); */
      if (con_lin > 60)
         titulos();
      sprintf(cadena,"%12.0f",nit);
      strcpy(cadena2,nombre.arr);
      strorg(cadena2,1,30);
      fprintf(fp,"%11s %-30s",fmtnum("zzzz,zzz,zz9",cadena,r_t), cadena2);

      sprintf(cadena,"%12.0f",basico);
      fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
      /* EXEC SQL OPEN C2; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 12;
      sqlstm.stmt = sq0003;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)140;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&codigo_nit;
      sqlstm.sqhstl[0] = (unsigned long  )4;
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
      sqlstm.sqhstv[4] = (unsigned char  *)&codigo;
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


      /* EXEC SQL FETCH C2 INTO :concepto, :clase_pd, :horas, :valor_noved, :transp, :minimo; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 12;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)174;
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
      sqlstm.sqhstv[4] = (unsigned char  *)&transp;
      sqlstm.sqhstl[4] = (unsigned long  )8;
      sqlstm.sqindv[4] = (         short *)0;
      sqlstm.sqharm[4] = (unsigned long )0;
      sqlstm.sqhstv[5] = (unsigned char  *)&minimo;
      sqlstm.sqhstl[5] = (unsigned long  )8;
      sqlstm.sqindv[5] = (         short *)0;
      sqlstm.sqharm[5] = (unsigned long )0;
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
      if (staora == -1405)
          staora = 0;
      while (staora == 0) {
            acumule_nov();
      }
      totalnov();
      /* EXEC SQL CLOSE C2; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 12;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)212;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


//      fprintf(fp," %14s",ctacte.arr);
      if (!strcmp(estado_lab.arr,"I"))
          fprintf(fp," %3s","INC");
      else {
           if (!strcmp(estado_lab.arr,"V"))
              fprintf(fp," %3s","VAC");
           else
              fprintf(fp,"%1s %3d"," ",codigo);
      }
      fprintf(fp,"\n");
      tdias    = 0;
      tdiasre  = 0;
      tdiasex  = 0;
      tdiasdo  = 0;
      diasinc  = 0;
      dias     = 0;
      promedio = recargo = extras = dominicales = comisiones = transp = otrosp = primas = cparciales = cesantias = cesnetas = vacaciones = vacacionesp = intereses = interesesp = prestamos = neto = 0;
      /* EXEC SQL FETCH C1 INTO :codigo, :codigo_nit, :nit, :nombre, :basico,
                             :ctacte, :estado_lab, :fecha_est, :fecha_ing,
                             :fecha_ingc, :ocupacion, profesion; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 12;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)226;
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
      sqlstm.sqhstv[4] = (unsigned char  *)&basico;
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
      sqlstm.sqhstv[7] = (unsigned char  *)&fecha_est;
      sqlstm.sqhstl[7] = (unsigned long  )22;
      sqlstm.sqindv[7] = (         short *)0;
      sqlstm.sqharm[7] = (unsigned long )0;
      sqlstm.sqhstv[8] = (unsigned char  *)&fecha_ing;
      sqlstm.sqhstl[8] = (unsigned long  )22;
      sqlstm.sqindv[8] = (         short *)0;
      sqlstm.sqharm[8] = (unsigned long )0;
      sqlstm.sqhstv[9] = (unsigned char  *)&fecha_ingc;
      sqlstm.sqhstl[9] = (unsigned long  )22;
      sqlstm.sqindv[9] = (         short *)0;
      sqlstm.sqharm[9] = (unsigned long )0;
      sqlstm.sqhstv[10] = (unsigned char  *)&ocupacion;
      sqlstm.sqhstl[10] = (unsigned long  )32;
      sqlstm.sqindv[10] = (         short *)0;
      sqlstm.sqharm[10] = (unsigned long )0;
      sqlstm.sqhstv[11] = (unsigned char  *)&profesion;
      sqlstm.sqhstl[11] = (unsigned long  )32;
      sqlstm.sqindv[11] = (         short *)0;
      sqlstm.sqharm[11] = (unsigned long )0;
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
      ocupacion.arr   [ocupacion.len]  = '\0';
      profesion.arr   [profesion.len]  = '\0';

      staora  = sqlca.sqlcode;
      if (staora ==  1403) break;
      if (staora == -1405)
          staora  = 0;
      else if (staora)
               fprintf (stderr, "Error leyendo C1 (%d)\n", staora);
 }

 fprintf(fp,"\n %s%43s",enfatizado_on,"Totales =====>");
 sprintf(cadena,"%10.0f",totbasico);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totpromedio);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totrecargo);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totextras);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totdominicales);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totcomisiones);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",tottransp);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",tototrosp);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totprimas);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totcesantias);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totcparciales);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totcesantias-totcparciales);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totvacaciones);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totintereses);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totprestamos);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totneto);
 fprintf(fp," %11s%s\n",fmtnum("zzz,zzz,zz9",cadena,r_t),enfatizado_off);
 con_lin+=1;

}

void empresa()
{

 /* EXEC SQL select n.nombre
          into  :nomb_emp
          from   empresas e, nits n, nomfijos f
          where  e.codigo_nit = n.codigo_nit and
                 f.codigo_emp = e.codigo_emp and
                 e.codigo_emp = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 12;
 sqlstm.stmt = "select n.nombre into :b0  from empresas e ,nits n ,nomfijos \
f where ((e.codigo_nit=n.codigo_nit and f.codigo_emp=e.codigo_emp) and e.codig\
o_emp=:b1)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)288;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
 sqlstm.sqhstl[0] = (unsigned long  )52;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned long  )7;
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
 fprintf(fp,"%s%s%s%s\n",condensado_on,enfatizado_on,  "                                                                    PROMEDIO   PROMEDIO   PROMEDIO   PROMEDIO   PROMEDIO   PROMEDIO                          MENOS                                                   ",enfatizado_off);
 fprintf(fp,"%s%s%s%s\n",condensado_on,enfatizado_on,  "                                               SALARIO     SUELDO    RECARGO      HORAS   DOMINGOS      VALOR    AUXILIO      OTROS      VALOR  CESANTIAS  CESANTIAS  CESANTIAS      VALOR 12% INTER.  ANTICIPOS  NETO      FECHA    COD/",enfatizado_off);
 fprintf(fp,"%s%s%s%s\n\n",condensado_on,enfatizado_on,"CEDULA       NOMBRE                            MENSUAL   PROMEDIO   NOCTURNO     EXTRAS   FERIADOS   COMISION    TRANSP.   SALARIOS     PRIMAS    TOTALES  PARCIALES      NETAS VACACIONES  CESANTIAS  PRESTAMOS  LIQUIDADO INGRESO  ESTD",enfatizado_off);
 con_lin = 11;
}

void acumule_nov()
{
 while (staora == 0) {
//      if (con_lin > 60)
//         titulos();

      if (clase_pd == 1) {
         if (concepto == 1 || concepto == 2 || concepto == 9 || concepto == 10 || concepto == 13  || concepto == 17  || concepto == 57  || concepto == 58) {
            promedio  = promedio + valor_noved;
            if (concepto == 9 || concepto == 17) {
                tdias += horas;
                if (concepto == 17)
                    vacacionesp = vacacionesp + valor_noved;
            }
            else if (concepto != 13)
                     tdias += horas/8;
         }
         else {
                   if (concepto == 37) {
                       recargo = recargo + valor_noved;
                       tdiasre += horas/8;
                   }
                   else {
                        if (concepto == 3 || concepto == 4 || concepto == 6 || concepto == 8  || concepto == 11) {
                            extras  = extras + valor_noved;
                            tdiasex += horas/8;
                        }
                        else {
                             if (concepto == 5 || concepto == 7) {
                                 dominicales = dominicales + valor_noved;
                                 tdiasdo += horas/8;
                             }
                             else {
                                  if (concepto == 34)
                                      comisiones = comisiones + valor_noved;
                                  else {
                                       if (concepto == 35 || concepto == 53)
                                           otrosp = otrosp + valor_noved;
                                       else {
                                            if (concepto == 20)
                                                cparciales = cparciales + valor_noved;
                                            else {
                                                 if (concepto == 54 )
                                                     vacacionesp = vacacionesp + valor_noved;
                                                 else {
                                                      if (concepto == 59)
                                                          interesesp = interesesp + valor_noved;
                                                      else {
                                                           if (concepto == 25)
                                                               prestamos = prestamos + valor_noved;
                                                      }
                                                 }
                                            }
                                       }
                                  }
                             }
                        }
                   }
              }
      }

      /* EXEC SQL FETCH C2 INTO :concepto, :clase_pd, :horas, :valor_noved, :transp, :minimo; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 12;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)310;
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
      sqlstm.sqhstv[4] = (unsigned char  *)&transp;
      sqlstm.sqhstl[4] = (unsigned long  )8;
      sqlstm.sqindv[4] = (         short *)0;
      sqlstm.sqharm[4] = (unsigned long )0;
      sqlstm.sqhstv[5] = (unsigned char  *)&minimo;
      sqlstm.sqhstl[5] = (unsigned long  )8;
      sqlstm.sqindv[5] = (         short *)0;
      sqlstm.sqharm[5] = (unsigned long )0;
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
 tdias = tdias / 30;
// promedio    = promedio/mesi;
// printf("tdiasre<%5.2f>",tdiasre); getchar();
 if (tdiasre>0)
    recargo     = recargo/mesi;
 if (tdiasex>0)
    extras      = extras/mesi;
 if (tdiasdo>0)
    dominicales = dominicales/mesi;
 if (basico>minimo*2) {
     transp  = 0;
 }
 if (!strcmp(ocupacion.arr,"APRENDIZ F.LECTIVA"))
     transp  = 0;
 comisiones  = comisiones/mesi;
 otrosp      = otrosp/mesi;
 promedio    = basico + recargo + extras + dominicales + transp + comisiones + otrosp;
 if (promedio>basico)
    cesantias   = promedio;
 else cesantias = basico;

 strcpy (cadena,fecha_ingc.arr);
 strorg (cadena,1,4);
 anoi         = atoi(cadena);
 strcpy (cadena,fecha_ingc.arr);
 strorg (cadena,5,2);
 mesi         = atoi(cadena);
 strcpy (cadena,fecha_ingc.arr);
 strorg (cadena,7,2);
 diai         = atoi(cadena);

 fecha_has.len = strlen(fecha_has.arr);
 strcpy (cadena,fecha_has.arr);
 strorg (cadena,1,4);
 anof         = atoi(cadena);
 strcpy (cadena,fecha_has.arr);
 strorg (cadena,5,2);
 mesf         = atoi(cadena);
 strcpy (cadena,fecha_has.arr);
 strorg (cadena,7,2);
 diaf         = atoi(cadena);

 if (diai>diaf) {
   mesi--;
   diai+=30;
   diai=diaf-diai;
 }
 else diai=diaf-diai;
 diac=diai;

 if (mesi>mesf) {
   anoi--;
   mesi+=12;
   mesi=mesf-mesi;
 }
 else mesi=mesf-mesi;
 diac+=mesi*30;

 if (anoi>anof) {
     fprintf (stderr, "Error: anoi debe ser <= anof\n");
     exit   (0);
 }
 else anoi=anof-anoi;
 diac+=anoi*360;

 if (diac > 90)
    primas      = promedio;
 if (diac > 180)
    vacaciones  = basico + recargo + extras + dominicales + comisiones + otrosp;

 /* EXEC SQL select decode(concepto,27,0,30,0,45,0,saldoact)
          into   :prestamos
          from   nomdesfi f
          where  codigo_emp = :codigo_emp and
                 codigo     = :codigo     and
                 concepto   = (select concepto
                               from   nomtrafi
                               where  condes     = 26           and
                                      codigo_emp = :codigo_emp) and
                 ano_mes    = (select max(ano_mes)
                               from   nomdesfi
                               where  codigo_emp = :codigo_emp  and
                                      concepto   = f.concepto   and
                                      codigo     = f.codigo); */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 12;
 sqlstm.stmt = "select decode(concepto,27,0,30,0,45,0,saldoact) into :b0  fr\
om nomdesfi f where (((codigo_emp=:b1 and codigo=:b2) and concepto=(select con\
cepto  from nomtrafi where (condes=26 and codigo_emp=:b1))) and ano_mes=(selec\
t max(ano_mes)  from nomdesfi where ((codigo_emp=:b1 and concepto=f.concepto) \
and codigo=f.codigo)))";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)348;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&prestamos;
 sqlstm.sqhstl[0] = (unsigned long  )8;
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
 sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[3] = (unsigned long  )7;
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



 if (sqlca.sqlcode == 1403 ) {
       prestamos = 0;
 }

// sprintf(cadena,"%10.2f",tdias);
// fprintf(fp," %6s",fmtnum("zz9.99",cadena,r_t));
 sprintf(cadena,"%10.0f",promedio);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",recargo);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",extras);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",dominicales);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",comisiones);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",transp);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",otrosp);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 if (diac > cdiac)
    diasliq = cdiac;
 else diasliq = diac;
 if (strcmp(profesion.arr,"SENA")) {
     primas=primas*diasliq/360/2;
     sprintf(cadena,"%10.0f",primas);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     cesantias=cesantias*diasliq/360;
     sprintf(cadena,"%10.0f",cesantias);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     sprintf(cadena,"%10.0f",cparciales);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     sprintf(cadena,"%10.0f",cesantias-cparciales);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     vacaciones=(vacaciones*diasliq/360/2);
     sprintf(cadena,"%10.0f",vacaciones);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     intereses = ((cesantias-cparciales)*mesi/100)-interesesp;
     sprintf(cadena,"%10.0f",(cesantias-cparciales)*mesi/100-interesesp);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 }
 else {
     primas=0;
     sprintf(cadena,"%10.0f",primas);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     cesantias=0;
     sprintf(cadena,"%10.0f",cesantias);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     sprintf(cadena,"%10.0f",cparciales);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     sprintf(cadena,"%10.0f",cesantias-cparciales);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     vacaciones=0;
     sprintf(cadena,"%10.0f",vacaciones);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     intereses=0;
     sprintf(cadena,"%10.0f",0);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 }
 sprintf(cadena,"%10.0f",prestamos);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 neto = primas + cesantias - cparciales + vacaciones +  intereses - prestamos;
 sprintf(cadena,"%10.0f",neto);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 strcpy(fecha,fecha_ing.arr);
 strorg(fecha,3,8);
 strcpy(cadena,fecha);
 fprintf(fp," %8s",cadena);
 con_lin+=1;

 totbasico     = totbasico     + basico;
 totpromedio   = totpromedio   + promedio;
 totrecargo    = totrecargo    + recargo;
 totextras     = totextras     + extras;
 totdominicales= totdominicales+ dominicales;
 totcomisiones = totcomisiones + comisiones;
 tottransp     = tottransp     + transp;
 tototrosp     = tototrosp     + otrosp;
 totprimas     = totprimas     + primas;
 totcesantias  = totcesantias  + cesantias;
 totcparciales = totcparciales + cparciales;
 totcesnetas   = totcesnetas   + cesantias-cparciales;
 totvacaciones = totvacaciones + vacaciones;
 totintereses  = totintereses  + intereses;
 totprestamos  = totprestamos  + prestamos;
 totneto       = totneto       + neto;
 tdias         = 0;
 tdiasre       = 0;
 tdiasex       = 0;
 tdiasdo       = 0;
}
