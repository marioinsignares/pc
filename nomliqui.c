
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

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,0,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[14];
};
static const struct sqlcxp sqlfpn =
{
    13,
    ".\\nomliqui.pc"
};


static unsigned long sqlctx = 536211;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
            void  *sqhstv[15];
   unsigned int   sqhstl[15];
            int   sqhsts[15];
            void  *sqindv[15];
            int   sqinds[15];
   unsigned int   sqharm[15];
   unsigned int   *sqharc[15];
   unsigned short  sqadto[15];
   unsigned short  sqtdso[15];
} sqlstm = {10,15};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned long *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned long *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned long *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(char *, int *);

 static const char *sq0002 = 
"select e.codigo ,n.codigo_nit ,n.nit ,((e.nombre||' ')||e.primer_ap) ,e.basi\
co ,to_char(e.fecha_suact,'yyyymmdd') ,e.sueldo_ant ,e.ctacte ,e.estado_lab ,e\
.fecha_est ,to_char(e.fecha_ing,'yyyy/mm/dd') ,to_char(e.fecha_ing,'yyyymmdd')\
 ,ocupacion ,profesion ,(to_date(:b0,'yyyymmdd')-e.fecha_suact) diasaum  from \
nomemple e ,nits n where (((((e.codigo_nit=n.codigo_nit and e.fecha_ing<=to_da\
te(:b0,'yyyymmdd')) and (e.estado_lab<>'R' and e.profesion<>'SENA')) and e.cod\
igo_emp=:b2) and e.codigo>=:b3) and e.codigo<=:b4) order by n.nit            ";

 static const char *sq0006 = 
"select transporte ,minimo  from nomfijop where (fecha_des<=to_date(:b0,'yyyy\
mmdd') and fecha_has>=to_date(:b1,'yyyymmdd'))           ";

 static const char *sq0003 = 
"select v.concepto ,v.clase_pd ,v.horas ,round(v.valor_noved,0)  from nomnove\
d v ,nits n ,nomfijos f where (((((n.codigo_nit=:b0 and f.codigo_emp=v.codigo_\
emp) and v.fecha_has>=to_date(:b1,'yyyymmdd')) and v.fecha_has<=to_date(:b2,'y\
yyymmdd')) and v.codigo_emp=:b3) and v.codigo=:b4) order by v.clase_pd,v.conce\
pto            ";

 static const char *sq0005 = 
"select to_char(max(v.fecha_has),'yyyymmdd')  from nomnoved v where ((((v.fec\
ha_has>=to_date(:b0,'yyyymmdd') and v.fecha_has<=to_date(:b1,'yyyymmdd')) and \
v.concepto=20) and v.codigo_emp=:b2) and v.codigo=:b3)           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,230,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,543,0,9,323,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
71,0,0,7,0,0,30,326,0,0,0,0,0,1,0,
86,0,0,2,0,0,15,327,0,0,0,0,0,1,0,
101,0,0,2,0,0,13,347,0,0,15,0,0,1,0,2,3,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,
9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,
176,0,0,6,133,0,9,367,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
199,0,0,6,0,0,13,368,0,0,2,0,0,1,0,2,4,0,0,2,4,0,0,
222,0,0,6,0,0,15,369,0,0,0,0,0,1,0,
237,0,0,3,325,0,9,398,0,0,5,5,0,1,0,1,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,
272,0,0,3,0,0,13,399,0,0,4,0,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,4,0,0,
303,0,0,3,0,0,15,421,0,0,0,0,0,1,0,
318,0,0,2,0,0,13,463,0,0,15,0,0,1,0,2,3,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,4,0,0,2,
9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,
393,0,0,8,148,0,4,521,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
416,0,0,3,0,0,13,656,0,0,4,0,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,4,0,0,
447,0,0,9,316,0,4,823,0,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,3,0,0,1,9,0,0,1,9,0,0,
482,0,0,5,219,0,9,894,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,
513,0,0,5,0,0,13,895,0,0,1,0,0,1,0,2,9,0,0,
532,0,0,5,0,0,15,941,0,0,0,0,0,1,0,
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

/* VARCHAR codigo_emp     [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_emp;

/* VARCHAR nomb_emp       [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nomb_emp;

/* VARCHAR fecha_has      [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_has;

/* VARCHAR fecha_des2     [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_des2;

/* VARCHAR fecha_des      [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_des;

/* VARCHAR fecha_des90    [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_des90;

/* VARCHAR fecha_est      [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_est;

/* VARCHAR fecha_ing      [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_ing;

/* VARCHAR fecha_ingc     [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_ingc;

/* VARCHAR fecha_ces      [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } fecha_ces;

/* VARCHAR codigoi        [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigoi;

/* VARCHAR codigof        [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigof;

int     diasing;
int     diasliq;
int     diasaum;
/* VARCHAR ctacte         [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } ctacte;

/* VARCHAR estado_lab     [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } estado_lab;

double  sueldoact;
/* VARCHAR fecha_suact    [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } fecha_suact;

double  sueldo_ant;
int     codigo_nit;
int     codigo;
int     concepto;
int     clase_pd;
int     horas;
double  nit;
/* VARCHAR nombre         [60]; */ 
struct { unsigned short len; unsigned char arr[60]; } nombre;

double  valor_noved;
double  basico;
double  prestamos;
double  transp;
double  transporte;
double  minimo;
/* VARCHAR pfecha_ing[60]; */ 
struct { unsigned short len; unsigned char arr[60]; } pfecha_ing;

/* VARCHAR ocupacion[60]; */ 
struct { unsigned short len; unsigned char arr[60]; } ocupacion;

/* VARCHAR profesion[60]; */ 
struct { unsigned short len; unsigned char arr[60]; } profesion;


/* EXEC SQL END DECLARE SECTION; */ 

/* EXEC SQL INCLUDE SQLCA;
 */ 
/*
 * $Header: sqlca.h,v 1.3 1994/12/12 19:27:27 jbasu Exp $ sqlca.h 
 */

/* Copyright (c) 1985,1986, 1998 by Oracle Corporation. */
 
/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************

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
 
MODIFIED
    lvbcheng   07/31/98 -  long to int
    jbasu      12/12/94 -  Bug 217878: note this is an SOSD file
    losborne   08/11/92 -  No sqlca var if SQLCA_NONE macro set 
  Clare      12/06/84 - Ch SQLCA to not be an extern.
  Clare      10/21/85 - Add initialization.
  Bradbury   01/05/86 - Only initialize when SQLCA_INIT set
  Clare      06/12/86 - Add SQLCA_STORAGE_CLASS option.
*/
 
#ifndef SQLCA
#define SQLCA 1
 
struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ int     sqlabc;
         /* b4  */ int     sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ int     sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef   SQLCA_STORAGE_CLASS
SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif
 
#ifdef  SQLCA_INIT
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
#endif
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
char    formas[9];
char    fechas[100];
char    fecha[60];
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
float   pinteres;
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
void fecha_ini90dias();

void main(argc, argv)
int     argc;
char    *argv[];
{
char    device[10];
int     status = 0;

if (argc < 8)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : nomliqui codigo_emp fecha_des(AAAAMMDD) fecha_has(AAAAMMDD) codigoi codigof device copias userid/password\n");
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
if (diaf < 30)
   diaf = 30;

if (diai>diaf) {
  mesi--;
  diai+=30;
  diai=diaf-diai;
}
else {
       if (diaf > 30 )
          diai=(diaf-diai);
       else diai=(diaf-diai)+1;
      }
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

strcpy (codigoi.arr,  argv[4]);
codigoi.len = strlen(codigoi.arr);
strcpy (codigof.arr,  argv[5]);
codigof.len = strlen(codigof.arr);

strcpy (device,         argv[6]);
strlow (device);
strcpy (copias,         argv[7]);

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

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )100;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&uid;
    sqlstm.sqhstl[0] = (unsigned int  )102;
    sqlstm.sqhsts[0] = (         int  )102;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
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
/*
       select e.codigo, n.codigo_nit, n.nit, e.nombre||' '||e.primer_ap, e.basico,
              e.ctacte, e.estado_lab, e.fecha_est, e.fecha_ing,
              (to_date(:fecha_has,'yyyymmdd')-e.fecha_ing), ocupacion
       from   nomemple e, nits n
       where  e.codigo_nit    = n.codigo_nit     and
              e.estado_lab    <> 'R'             and
              e.fecha_ing     <= to_date(:fecha_has,'yyyymmdd') and
              e.codigo_emp    = :codigo_emp
       order by n.nit;

                    (e.estado_lab    = 'R'                            and
              e.fecha_est >= to_date(:fecha_des,'yyyymmdd')    and
              e.fecha_est <= to_date(:fecha_has,'yyyymmdd')))  and

*/
 /* EXEC SQL DECLARE C1 CURSOR FOR
       select e.codigo, n.codigo_nit, n.nit, e.nombre||' '||e.primer_ap, e.basico,
              to_char(e.fecha_suact,'yyyymmdd'), e.sueldo_ant,
              e.ctacte, e.estado_lab, e.fecha_est, to_char(e.fecha_ing,'yyyy/mm/dd'),
              to_char(e.fecha_ing,'yyyymmdd'), ocupacion, profesion,
              (to_date(:fecha_has,'yyyymmdd') - e.fecha_suact) as diasaum
       from   nomemple e, nits n
       where  e.codigo_nit    = n.codigo_nit                   and
              e.fecha_ing    <= to_date(:fecha_has,'yyyymmdd') and 
             (e.estado_lab   <> 'R'                            and
              e.profesion    <> 'SENA')                        and
              e.codigo_emp    = :codigo_emp                    and
              e.codigo       >= :codigoi                       and
              e.codigo       <= :codigof
       order by n.nit; */ 


 /* EXEC SQL DECLARE C2 CURSOR FOR
       select v.concepto, v.clase_pd, v.horas, round(v.valor_noved,0)
       from   nomnoved v, nits n, nomfijos f
       where  n.codigo_nit    = :codigo_nit      and
              f.codigo_emp    = v.codigo_emp     and
              v.fecha_has    >= to_date(:fecha_des,'yyyymmdd') and
              v.fecha_has    <= to_date(:fecha_has,'yyyymmdd') and
              v.codigo_emp    = :codigo_emp      and
              v.codigo        = :codigo
       order by v.clase_pd, v.concepto; */ 


 /* EXEC SQL DECLARE C2A CURSOR FOR
       select v.concepto, v.clase_pd, v.horas, round(v.valor_noved,0)
       from   nomnoved v, nits n, nomfijos f
       where  n.codigo_nit    = :codigo_nit      and
              f.codigo_emp    = v.codigo_emp     and
              v.fecha_has    >= to_date(:fecha_des90,'yyyymmdd') and
              v.fecha_has    <= to_date(:fecha_has,'yyyymmdd') and
              v.codigo_emp    = :codigo_emp      and
              v.codigo        = :codigo
       order by v.clase_pd, v.concepto; */ 


 /* EXEC SQL DECLARE C3 CURSOR FOR   //CES.PARCIALES ANO ACT.
       select to_char(max(v.fecha_has),'yyyymmdd')
       from   nomnoved v
       where  v.fecha_has    >= to_date(:fecha_des,'yyyymmdd') and
              v.fecha_has    <= to_date(:fecha_has,'yyyymmdd') and
              v.concepto      = 20               and
              v.codigo_emp    = :codigo_emp      and
              v.codigo        = :codigo; */ 


 /* EXEC SQL DECLARE C4 CURSOR FOR
       select transporte, minimo
       from   nomfijop
       where  fecha_des    <= to_date(:fecha_des,'yyyymmdd') and
              fecha_has    >= to_date(:fecha_has,'yyyymmdd'); */ 


 /* EXEC SQL OPEN C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0002;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )36;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_has;
 sqlstm.sqhstl[0] = (unsigned int  )42;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_has;
 sqlstm.sqhstl[1] = (unsigned int  )42;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[2] = (unsigned int  )12;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&codigoi;
 sqlstm.sqhstl[3] = (unsigned int  )12;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&codigof;
 sqlstm.sqhstl[4] = (unsigned int  )12;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 empresa();
 lista_empresa();
 /* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )71;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )86;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
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
                        :fecha_suact, :sueldo_ant,
                        :ctacte, :estado_lab, :fecha_est, :fecha_ing,
                        :fecha_ingc, :ocupacion, :profesion, :diasaum; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 15;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )101;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo;
 sqlstm.sqhstl[0] = (unsigned int  )4;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&codigo_nit;
 sqlstm.sqhstl[1] = (unsigned int  )4;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&nit;
 sqlstm.sqhstl[2] = (unsigned int  )8;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&nombre;
 sqlstm.sqhstl[3] = (unsigned int  )62;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&basico;
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&fecha_suact;
 sqlstm.sqhstl[5] = (unsigned int  )17;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&sueldo_ant;
 sqlstm.sqhstl[6] = (unsigned int  )8;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&ctacte;
 sqlstm.sqhstl[7] = (unsigned int  )42;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&estado_lab;
 sqlstm.sqhstl[8] = (unsigned int  )12;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&fecha_est;
 sqlstm.sqhstl[9] = (unsigned int  )42;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&fecha_ing;
 sqlstm.sqhstl[10] = (unsigned int  )42;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)0;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&fecha_ingc;
 sqlstm.sqhstl[11] = (unsigned int  )42;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&ocupacion;
 sqlstm.sqhstl[12] = (unsigned int  )62;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&profesion;
 sqlstm.sqhstl[13] = (unsigned int  )62;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&diasaum;
 sqlstm.sqhstl[14] = (unsigned int  )4;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)0;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
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

      /* EXEC SQL OPEN C4; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 15;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0006;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )176;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&fecha_des;
      sqlstm.sqhstl[0] = (unsigned int  )42;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&fecha_has;
      sqlstm.sqhstl[1] = (unsigned int  )42;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL FETCH C4 INTO :transporte, :minimo; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 15;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )199;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&transporte;
      sqlstm.sqhstl[0] = (unsigned int  )8;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&minimo;
      sqlstm.sqhstl[1] = (unsigned int  )8;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL CLOSE C4; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 15;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )222;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 while (staora == 0) {
      transp  = 0;
//    fprintf (stderr, "Leyendo C1 codigo=(%d) codigo_nit(%d) staora(%d)\n", codigo, codigo_nit, staora); getchar();
      if (con_lin > 60)
         titulos();
      sprintf(cadena,"%13.0f",nit);
      strcpy(cadena2,nombre.arr);
      strorg(cadena2,1,26);
      fprintf(fp,"%13s %-26s",fmtnum("zzzzz,zzz,zz9",cadena,r_t), cadena2);
      if (strcmp(fecha_suact.arr,fecha_has.arr) > 0)
          basico = sueldo_ant;
      sprintf(cadena,"%12.0f",basico);
      fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t)); 
      strcpy(pfecha_ing.arr,fecha_ing.arr);
      strcpy(fecha_des2.arr,fecha_des.arr);
      if (strcmp(fecha_ingc.arr,fecha_des.arr) > 0) {
          strcpy(fecha_des.arr,fecha_ingc.arr);
//          printf ("0) codigo = (%d) fecha_ingc=(%s) fecha_des2.arr=(%s)  fecha_des.arr=(%s)\n", codigo, fecha_ingc.arr, fecha_des2.arr, fecha_des.arr); getchar();
      }                                  
//      printf("%s",cadena2); getchar();
/*
      if (diasaum < 90) {
         fecha_ini90dias();
         EXEC SQL OPEN C2A;
         EXEC SQL FETCH C2A INTO :concepto, :clase_pd, :horas, :valor_noved;
      } else {
*/
         /* EXEC SQL OPEN C2; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 15;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = sq0003;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )237;
         sqlstm.selerr = (unsigned short)1;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&codigo_nit;
         sqlstm.sqhstl[0] = (unsigned int  )4;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)&fecha_des;
         sqlstm.sqhstl[1] = (unsigned int  )42;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&fecha_has;
         sqlstm.sqhstl[2] = (unsigned int  )42;
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
         sqlstm.sqhstl[3] = (unsigned int  )12;
         sqlstm.sqhsts[3] = (         int  )0;
         sqlstm.sqindv[3] = (         void  *)0;
         sqlstm.sqinds[3] = (         int  )0;
         sqlstm.sqharm[3] = (unsigned int  )0;
         sqlstm.sqadto[3] = (unsigned short )0;
         sqlstm.sqtdso[3] = (unsigned short )0;
         sqlstm.sqhstv[4] = (         void  *)&codigo;
         sqlstm.sqhstl[4] = (unsigned int  )4;
         sqlstm.sqhsts[4] = (         int  )0;
         sqlstm.sqindv[4] = (         void  *)0;
         sqlstm.sqinds[4] = (         int  )0;
         sqlstm.sqharm[4] = (unsigned int  )0;
         sqlstm.sqadto[4] = (unsigned short )0;
         sqlstm.sqtdso[4] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


         /* EXEC SQL FETCH C2 INTO :concepto, :clase_pd, :horas, :valor_noved; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 15;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )272;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&concepto;
         sqlstm.sqhstl[0] = (unsigned int  )4;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)&clase_pd;
         sqlstm.sqhstl[1] = (unsigned int  )4;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&horas;
         sqlstm.sqhstl[2] = (unsigned int  )4;
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (         void  *)&valor_noved;
         sqlstm.sqhstl[3] = (unsigned int  )8;
         sqlstm.sqhsts[3] = (         int  )0;
         sqlstm.sqindv[3] = (         void  *)0;
         sqlstm.sqinds[3] = (         int  )0;
         sqlstm.sqharm[3] = (unsigned int  )0;
         sqlstm.sqadto[3] = (unsigned short )0;
         sqlstm.sqtdso[3] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


//      }
//      transp = transporte;

      staora  = sqlca.sqlcode;
      if (staora) {
         fprintf (stderr, "Error leyendo C2 (%d) (%d) (%d)\n", codigo, codigo_nit, staora);
      }
      if (staora == -1405)
          staora = 0;
      while (staora == 0) {
            acumule_nov();
      }
//      printf("2)"); getchar();
      totalnov();
//      printf("3)"); getchar();
/*
      if (diasaum < 90) {
         EXEC SQL CLOSE C2A;
      }
      else {
*/      
         /* EXEC SQL CLOSE C2; */ 

{
         struct sqlexd sqlstm;

         sqlstm.sqlvsn = 10;
         sqlstm.arrsiz = 15;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )303;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)256;
         sqlstm.occurs = (unsigned int  )0;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


//      }
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
      promedio = 0;
      recargo  = 0;
      extras   = 0;
      dominicales = 0;
      comisiones  = 0;
      otrosp      = 0;
      primas      = 0;
      pinteres    = 0;
      cparciales  = 0;
      cesantias   = 0;
      cesnetas    = 0;
      vacaciones  = 0;
      vacacionesp = 0;
      intereses   = 0;
      interesesp  = 0;
      prestamos   = 0;
      neto        = 0;
      transp      = 0;

      if (strcmp(fecha_ingc.arr,fecha_des2.arr) > 0) {
          strcpy(fecha_des.arr,fecha_des2.arr);
//          printf ("0.1) codigo = (%d) fecha_ingc=(%s) fecha_des2.arr=(%s)  fecha_des.arr=(%s)\n", codigo, fecha_ingc.arr, fecha_des2.arr, fecha_des.arr); getchar();
      }

      /* EXEC SQL FETCH C1 INTO :codigo, :codigo_nit, :nit, :nombre, :basico,
                             :fecha_suact, :sueldo_ant,
                             :ctacte, :estado_lab, :fecha_est, :fecha_ing,
                             :fecha_ingc, :ocupacion, :profesion, :diasaum; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 15;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )318;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&codigo;
      sqlstm.sqhstl[0] = (unsigned int  )4;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&codigo_nit;
      sqlstm.sqhstl[1] = (unsigned int  )4;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&nit;
      sqlstm.sqhstl[2] = (unsigned int  )8;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&nombre;
      sqlstm.sqhstl[3] = (unsigned int  )62;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&basico;
      sqlstm.sqhstl[4] = (unsigned int  )8;
      sqlstm.sqhsts[4] = (         int  )0;
      sqlstm.sqindv[4] = (         void  *)0;
      sqlstm.sqinds[4] = (         int  )0;
      sqlstm.sqharm[4] = (unsigned int  )0;
      sqlstm.sqadto[4] = (unsigned short )0;
      sqlstm.sqtdso[4] = (unsigned short )0;
      sqlstm.sqhstv[5] = (         void  *)&fecha_suact;
      sqlstm.sqhstl[5] = (unsigned int  )17;
      sqlstm.sqhsts[5] = (         int  )0;
      sqlstm.sqindv[5] = (         void  *)0;
      sqlstm.sqinds[5] = (         int  )0;
      sqlstm.sqharm[5] = (unsigned int  )0;
      sqlstm.sqadto[5] = (unsigned short )0;
      sqlstm.sqtdso[5] = (unsigned short )0;
      sqlstm.sqhstv[6] = (         void  *)&sueldo_ant;
      sqlstm.sqhstl[6] = (unsigned int  )8;
      sqlstm.sqhsts[6] = (         int  )0;
      sqlstm.sqindv[6] = (         void  *)0;
      sqlstm.sqinds[6] = (         int  )0;
      sqlstm.sqharm[6] = (unsigned int  )0;
      sqlstm.sqadto[6] = (unsigned short )0;
      sqlstm.sqtdso[6] = (unsigned short )0;
      sqlstm.sqhstv[7] = (         void  *)&ctacte;
      sqlstm.sqhstl[7] = (unsigned int  )42;
      sqlstm.sqhsts[7] = (         int  )0;
      sqlstm.sqindv[7] = (         void  *)0;
      sqlstm.sqinds[7] = (         int  )0;
      sqlstm.sqharm[7] = (unsigned int  )0;
      sqlstm.sqadto[7] = (unsigned short )0;
      sqlstm.sqtdso[7] = (unsigned short )0;
      sqlstm.sqhstv[8] = (         void  *)&estado_lab;
      sqlstm.sqhstl[8] = (unsigned int  )12;
      sqlstm.sqhsts[8] = (         int  )0;
      sqlstm.sqindv[8] = (         void  *)0;
      sqlstm.sqinds[8] = (         int  )0;
      sqlstm.sqharm[8] = (unsigned int  )0;
      sqlstm.sqadto[8] = (unsigned short )0;
      sqlstm.sqtdso[8] = (unsigned short )0;
      sqlstm.sqhstv[9] = (         void  *)&fecha_est;
      sqlstm.sqhstl[9] = (unsigned int  )42;
      sqlstm.sqhsts[9] = (         int  )0;
      sqlstm.sqindv[9] = (         void  *)0;
      sqlstm.sqinds[9] = (         int  )0;
      sqlstm.sqharm[9] = (unsigned int  )0;
      sqlstm.sqadto[9] = (unsigned short )0;
      sqlstm.sqtdso[9] = (unsigned short )0;
      sqlstm.sqhstv[10] = (         void  *)&fecha_ing;
      sqlstm.sqhstl[10] = (unsigned int  )42;
      sqlstm.sqhsts[10] = (         int  )0;
      sqlstm.sqindv[10] = (         void  *)0;
      sqlstm.sqinds[10] = (         int  )0;
      sqlstm.sqharm[10] = (unsigned int  )0;
      sqlstm.sqadto[10] = (unsigned short )0;
      sqlstm.sqtdso[10] = (unsigned short )0;
      sqlstm.sqhstv[11] = (         void  *)&fecha_ingc;
      sqlstm.sqhstl[11] = (unsigned int  )42;
      sqlstm.sqhsts[11] = (         int  )0;
      sqlstm.sqindv[11] = (         void  *)0;
      sqlstm.sqinds[11] = (         int  )0;
      sqlstm.sqharm[11] = (unsigned int  )0;
      sqlstm.sqadto[11] = (unsigned short )0;
      sqlstm.sqtdso[11] = (unsigned short )0;
      sqlstm.sqhstv[12] = (         void  *)&ocupacion;
      sqlstm.sqhstl[12] = (unsigned int  )62;
      sqlstm.sqhsts[12] = (         int  )0;
      sqlstm.sqindv[12] = (         void  *)0;
      sqlstm.sqinds[12] = (         int  )0;
      sqlstm.sqharm[12] = (unsigned int  )0;
      sqlstm.sqadto[12] = (unsigned short )0;
      sqlstm.sqtdso[12] = (unsigned short )0;
      sqlstm.sqhstv[13] = (         void  *)&profesion;
      sqlstm.sqhstl[13] = (unsigned int  )62;
      sqlstm.sqhsts[13] = (         int  )0;
      sqlstm.sqindv[13] = (         void  *)0;
      sqlstm.sqinds[13] = (         int  )0;
      sqlstm.sqharm[13] = (unsigned int  )0;
      sqlstm.sqadto[13] = (unsigned short )0;
      sqlstm.sqtdso[13] = (unsigned short )0;
      sqlstm.sqhstv[14] = (         void  *)&diasaum;
      sqlstm.sqhstl[14] = (unsigned int  )4;
      sqlstm.sqhsts[14] = (         int  )0;
      sqlstm.sqindv[14] = (         void  *)0;
      sqlstm.sqinds[14] = (         int  )0;
      sqlstm.sqharm[14] = (unsigned int  )0;
      sqlstm.sqadto[14] = (unsigned short )0;
      sqlstm.sqtdso[14] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
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

 fprintf(fp,"\n %s%38s",enfatizado_on,"Totales =====>");
 sprintf(cadena,"%10.0f",totbasico);
 fprintf(fp," %11s",fmtnum("zzz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totpromedio);
 fprintf(fp," %10s",fmtnum("zzz,zzz,zz9",cadena,r_t));
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
 fprintf(fp," %11s",fmtnum("zzz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totcparciales);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 sprintf(cadena,"%10.0f",totcesantias-totcparciales);
 fprintf(fp," %11s",fmtnum("zzz,zzz,zz9",cadena,r_t));
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

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 15;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select n.nombre into :b0  from empresas e ,nits n ,nomfijos \
f where ((e.codigo_nit=n.codigo_nit and f.codigo_emp=e.codigo_emp) and e.codig\
o_emp=:b1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )393;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nomb_emp;
 sqlstm.sqhstl[0] = (unsigned int  )62;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned int  )12;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
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
 fprintf(fp,"%s%s%s%44s",diezcpi,condensado_on,ancho_on,"LIQUIDACION DE SALARIOS MAS PRESTACIONES");
 fprintf(fp,"%s%s%17s %d\n\n",ancho_off,diezcpi,"PAGINA ",con_pag);
 strorg(fechas,1,strlen(fechas));
 fprintf(fp,"%s%62s%s\n\n",enfatizado_on,fechas,enfatizado_off);
 fprintf(fp,"%s%s%s%s\n",condensado_on,enfatizado_on,  "                                                                  PROMEDIO   PROMEDIO   PROMEDIO   PROMEDIO   PROMEDIO   PROMEDIO                            MENOS                                                   ",enfatizado_off);
 fprintf(fp,"%s%s%s%s\n",condensado_on,enfatizado_on,  "                                            SALARIO      SUELDO    RECARGO      HORAS   DOMINGOS      VALOR    AUXILIO      OTROS      VALOR  CESANTIAS  CESANTIAS   CESANTIAS      VALOR 12% INTER.  ANTICIPOS  NETO       FECHA   COD/",enfatizado_off);
 fprintf(fp,"%s%s%s%s\n\n",condensado_on,enfatizado_on,"CEDULA       NOMBRE                         MENSUAL    PROMEDIO   NOCTURNO     EXTRAS   FERIADOS   COMISION    TRANSP.   SALARIOS     PRIMAS    TOTALES  PARCIALES       NETAS VACACIONES  CESANTIAS  PRESTAMOS  LIQUIDADO  INGRESO ESTD",enfatizado_off);
 con_lin = 11;
}

void  fecha_ini90dias()
{
int ano;
int mes;
int dia;
   strcpy (fecha_des90.arr,  fecha_des.arr);
   strcpy (cadena,fecha_des90.arr);
   strorg (cadena,1,4);
   ano         = atoi(cadena);
   strcpy (cadena,fecha_des90.arr);
   strorg (cadena,5,2);
   mes         = atoi(cadena);
   strcpy (cadena,fecha_des90.arr);
   strorg (cadena,7,2);
   dia         = atoi(cadena);
   if (mes > 3) {
       mes = mes-2;
   }
   else {
       ano--;
       if (mes == 2) {
           mes = 12;
       } 
       else {
           mes = 11;
       }
   }
   sprintf(fecha_des90.arr,"%4d%2d%2d",ano,mes,dia);
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
                        if (concepto == 3 || concepto == 4 || concepto == 6 || concepto == 8  || concepto == 11  || concepto == 56 ) {
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
                                            if ( concepto == 20 || concepto == 21 ) {
                                                cparciales = cparciales + valor_noved;
                                                pinteres   = pinteres   + horas;
                                            }
                                            else {
                                                 if (concepto == 54 )
                                                     vacacionesp = vacacionesp + valor_noved;
                                                 else {
                                                      if (concepto == 59)
                                                          interesesp = interesesp + valor_noved;
                                                      else {
                                                           if (concepto == 25)
                                                               prestamos = prestamos + valor_noved;
                                                           else {
                                                                if (concepto == 12) {
                                                                   transp = transp + valor_noved;
//    printf("1) %s basico = <%12.0f> diasaum = <%d> transp =<%10.2f>",nombre.arr,basico, diasaum, transp ); getchar();
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
              }
      }

      /* EXEC SQL FETCH C2 INTO :concepto, :clase_pd, :horas, :valor_noved; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 15;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )416;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&concepto;
      sqlstm.sqhstl[0] = (unsigned int  )4;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&clase_pd;
      sqlstm.sqhstl[1] = (unsigned int  )4;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&horas;
      sqlstm.sqhstl[2] = (unsigned int  )4;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&valor_noved;
      sqlstm.sqhstl[3] = (unsigned int  )8;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
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
 int mesx;
 float fmesi;
 double promediox;
 double dias_p;

// printf ("0) codigo = (%d) fecha_ingc=(%s) \n", codigo, fecha_ingc.arr); getchar();

 strcpy (cadena,fecha_ingc.arr);
 strorg (cadena,1,4);
 anoi         = atoi(cadena);
 strcpy (cadena,fecha_ingc.arr);
 strorg (cadena,5,2);
 mesx         = atoi(cadena);
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
   mesx--;
   diai+=30;
   diai=diaf-diai;
 }
 else {
       if (diaf > 30)
          diai=diaf-diai;
       else diai=diaf-diai+1;
 }
 diac=diai;

 if (mesx>mesf) {
   anoi--;
   mesx+=12;
 }
 mesx=mesf-mesx;
 diac+=mesx*30;

 if (anoi>anof) {
     fprintf (stderr, "Error: anoi debe ser <= anof\n");
     exit   (0);
 }
 else anoi=anof-anoi;
 diac+=anoi*360;
 if (diac < 360) {
     fmesi = (float) diac/30;
 }
  else {
      fmesi = (float) mesi;
 }

//  printf ("1) codigo=(%d) mesx(%d) diac(%d) fmesi(%f)\n", codigo, mesx, diac, fmesi); getchar();

// if (tdiasre>0) {
 if (recargo>0) {
    if (mesi>0)
        recargo = recargo/fmesi;
 }
// if (tdiasex>0) {
 if (extras>0) {
    if (mesi>0)
       extras   = extras/fmesi;
 }
// if (tdiasdo>0) {
 if (dominicales>0) {
    if (fmesi>0)
       dominicales = dominicales/fmesi;
 }
 if (basico>minimo*2) {
//     printf("1) codigo <%d> basico = <%10.2f> minimo*2 = <%10.2f>",codigo,basico,minimo*2); getchar(); 
     transp  = 0;
 }

 if (!strcmp(ocupacion.arr,"APRENDIZ F.LECTIVA")) {
//     printf("2) codigo <%d> basico = <%10.2f> minimo*2 = <%10.2f>",codigo,basico,minimo*2); getchar(); 
     transp  = 0;
 }
 
 if (mesi>0) {
    comisiones  = comisiones/fmesi;
    otrosp      = otrosp/fmesi;
 }

// printf("codigo <%d> promedio = <%10.2f> fmesi = <%10.2f>",codigo,promedio,fmesi); 
 promedio = promedio/fmesi;
// printf("codigo <%d> promedio = <%10.2f> fmesi = <%10.2f>",codigo,promedio,fmesi); getchar();
 if (diasaum >= 90) {
     promediox = basico + recargo + extras + dominicales + comisiones + otrosp;
 }
 else {
     promediox = promedio + recargo + extras + dominicales + comisiones + otrosp;
 }    
// printf("%12.0f %12.0f %12.0f %12.0f %12.0f %12.0f %12.0f %12.0f",promediox, minimo*2, basico, recargo, extras, dominicales, comisiones, otrosp); getchar();
 if (promediox<=minimo*2) {
//     printf("1) tiene transporte: codigo <%d> basico = <%10.2f> minimo*2 = <%10.2f>",codigo,basico,minimo*2); 
     transp  = transporte;
 }
 else {
//     printf("2) tiene transporte: codigo <%d> basico = <%10.2f> minimo*2 = <%10.2f> fmesi=<%10.2f>",codigo,basico,minimo*2, fmesi); 
     transp  =  transp/fmesi;
 }
 promediox    = promediox + transp;
// printf("%12.0f %12.0f",promediox, transp ); getchar();

 if (promediox>basico || diasaum < 90) {
//    printf("1) %s basico = <%12.0f> promediox = <%12.0f> diasaum = <%d>",nombre.arr,basico, promediox, diasaum ); getchar();
    cesantias   = promediox;
 }
 else {
//      printf("2) %s basico = <%12.0f> promediox = <%12.0f> diasaum = <%d>",nombre.arr,basico, promediox, diasaum ); getchar();
      cesantias = basico;
}
 
// if (diac >= 90)
    primas  = promediox ;

    if (diac >= 180) { 
       dias_p = 15;
    }
    else {
       dias_p = (double)15/180 * diac;
    }
    primas  = redondo( ( ( promediox / 30 ) * dias_p ), 0 );
//    printf("primas %f diac %d, dias_p %f, promediox %f ",primas, diac, dias_p, promediox); getchar();
   
// if (diac >= 180)

    if (diac >= 360) { 
       dias_p = 15;
    }
    else {
       dias_p = (double)15/360 * diac;
    }

    if (diasaum >= 90) {
       vacaciones  = basico + recargo + extras + dominicales + comisiones + otrosp;
       vacaciones  = redondo( ( ( vacaciones / 30 ) * dias_p ), 0 );
    }
    else {
       vacaciones  = promedio + recargo + extras + dominicales + comisiones + otrosp;
       vacaciones  = redondo( ( ( vacaciones / 30 ) * dias_p ), 0 );
    }
// printf("4)"); getchar();

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

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 15;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select decode(concepto,27,0,30,0,45,0,saldoact) into :b0  fr\
om nomdesfi f where (((codigo_emp=:b1 and codigo=:b2) and concepto=(select con\
cepto  from nomtrafi where (condes=26 and codigo_emp=:b1))) and ano_mes=(selec\
t max(ano_mes)  from nomdesfi where ((codigo_emp=:b1 and concepto=f.concepto) \
and codigo=f.codigo)))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )447;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&prestamos;
 sqlstm.sqhstl[0] = (unsigned int  )8;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned int  )12;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&codigo;
 sqlstm.sqhstl[2] = (unsigned int  )4;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[3] = (unsigned int  )12;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[4] = (unsigned int  )12;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 if (sqlca.sqlcode == 1403 ) {
       prestamos = 0;
 }

// printf("5)"); getchar();
// sprintf(cadena,"%10.2f",tdias);
// fprintf(fp," %6s",fmtnum("zz9.99",cadena,r_t));
//printf("3) %s basico = <%12.0f> promediox = <%12.0f> diasaum = <%d>",nombre.arr,basico, promediox, diasaum ); getchar();

 sprintf(cadena,"%10.0f",promediox);
 fprintf(fp," %11s",fmtnum("zzz,zzz,zz9",cadena,r_t));
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

// printf("diasliq %4d diac %4d cdiac %4d ",diasliq,diac,cdiac); getchar();
// printf("5.1)"); getchar();
//  printf ("2) proesion=(%s) \n", profesion.arr); getchar();
 if (strcmp(profesion.arr,"SENA")) {
// printf("5.1.1.1)"); getchar();
/*
     if ( mesf > 6 )
        primas=primas*diasliq/360/2;
     else
        primas=primas*diasliq/180/2;
*/        
     sprintf(cadena,"%10.0f",primas);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
       
//     printf("cesantias sueldo %10.0f",cesantias); getchar();
     cesantias=redondo(cesantias*diasliq/360,0);
//     printf("cesantias %10.0f",cesantias); getchar();
     sprintf(cadena,"%10.0f",cesantias);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
// printf("5.1.1.2)"); getchar();
     sprintf(cadena,"%10.0f",cparciales);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     sprintf(cadena,"%10.0f",cesantias-cparciales);
     fprintf(fp," %11s",fmtnum("zzz,zzz,zz9",cadena,r_t));
//     vacaciones=(vacaciones*diasliq/360/2);
     sprintf(cadena,"%10.0f",vacaciones);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     /* EXEC SQL OPEN C3; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 15;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = sq0005;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )482;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&fecha_des;
     sqlstm.sqhstl[0] = (unsigned int  )42;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&fecha_has;
     sqlstm.sqhstl[1] = (unsigned int  )42;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
     sqlstm.sqhstl[2] = (unsigned int  )12;
     sqlstm.sqhsts[2] = (         int  )0;
     sqlstm.sqindv[2] = (         void  *)0;
     sqlstm.sqinds[2] = (         int  )0;
     sqlstm.sqharm[2] = (unsigned int  )0;
     sqlstm.sqadto[2] = (unsigned short )0;
     sqlstm.sqtdso[2] = (unsigned short )0;
     sqlstm.sqhstv[3] = (         void  *)&codigo;
     sqlstm.sqhstl[3] = (unsigned int  )4;
     sqlstm.sqhsts[3] = (         int  )0;
     sqlstm.sqindv[3] = (         void  *)0;
     sqlstm.sqinds[3] = (         int  )0;
     sqlstm.sqharm[3] = (unsigned int  )0;
     sqlstm.sqadto[3] = (unsigned short )0;
     sqlstm.sqtdso[3] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


     /* EXEC SQL FETCH C3 INTO :fecha_ces; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 15;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )513;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&fecha_ces;
     sqlstm.sqhstl[0] = (unsigned int  )42;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


     staora = sqlca.sqlcode;
// printf("5.1.1)"); getchar();
/*
     if (staora==0) {
 	strcpy (cadena,fecha_ces.arr);
 	strorg (cadena,1,4);
 	anoi         = atoi(cadena);
 	strcpy (cadena,fecha_ces.arr);
 	strorg (cadena,5,2);
 	mesx         = atoi(cadena);
 	strcpy (cadena,fecha_ces.arr);
 	strorg (cadena,7,2);
 	diai         = atoi(cadena);
// printf("5.1.2)"); getchar();

 	if (diai>diaf) {
   	   mesx--;
   	   diai+=30;
           diai=diaf-diai;
 	}
 	else diai=diaf-diai;
 	diac=diai;

 	if (mesx>mesf) {
   	   anoi--;
   	   mesx+=12;
 	}
 	mesx=mesf-mesx;
 	diac+=mesx*30;

 	if (anoi>anof) {
     	   fprintf (stderr, "Error: anoi debe ser <= anof\n");
     	   exit   (0);
 	}
 	else anoi=anof-anoi;
 	diac+=anoi*360;
// printf("5.1.3)"); getchar();
     }
     else {
           if (diac > cdiac)
               mesx=mesi;
     }
*/
//printf("mesx=%4d",mesx); getchar();

     /* EXEC SQL CLOSE C3; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 15;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )532;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


     
//      printf("diasliqcomp %4d ",diasliq); getchar();
     if (diasliq >= 360) {
         mesx = 12;
     }
     else {
//         printf ("2) codigo=(%d) mesx(%d) diac(%d)\n", codigo, mesx, diac); getchar();
         mesx = diasliq/30;
     }
     
//     printf("mesx %4d  ",mesx); getchar();
/*     if ((cesantias-cparciales) >0 && mesx==0) {
        mesx=1;
     }
*/
//      printf("cparciales %10.0f",cparciales); getchar();
     intereses = ((cesantias-cparciales)*(fmesi-pinteres)/100);
     sprintf(cadena,"%10.0f",intereses);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
// printf("5.2)"); getchar();
 }
 else {
// printf("5.2.1)"); getchar();
     primas=0;
     sprintf(cadena,"%10.0f",primas);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     cesantias=0;
     sprintf(cadena,"%10.0f",cesantias);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     sprintf(cadena,"%10.0f",cparciales);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
// printf("5.2.2)"); getchar();
     sprintf(cadena,"%10.0f",cesantias-cparciales);
     fprintf(fp," %11s",fmtnum("zzz,zzz,zz9",cadena,r_t));
     vacaciones=0;
     sprintf(cadena,"%10.0f",vacaciones);
// printf("5.2.3)"); getchar();
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
     intereses=0;
     sprintf(cadena,"%10.0f",intereses);
// printf("5.2.4)"); getchar();
     sprintf(cadena,"%10.0f",0);
     fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
// printf("5.3)"); getchar();
 }
 sprintf(cadena,"%10.0f",prestamos);
 fprintf(fp," %10s",fmtnum("zz,zzz,zz9",cadena,r_t));
 neto = primas + cesantias - cparciales + vacaciones +  intereses - prestamos;
 sprintf(cadena,"%10.0f",neto);
 fprintf(fp," %11s",fmtnum("zzz,zzz,zz9",cadena,r_t));
 strcpy(fecha,fecha_ing.arr);
 strorg(fecha,3,8);
 strcpy(cadena,fecha);
 fprintf(fp," %8s",cadena);
 con_lin+=1;
// printf("6)"); getchar();

 totbasico     = totbasico     + basico;
 totpromedio   = totpromedio   + promediox;
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
// printf("7)"); getchar();
}
