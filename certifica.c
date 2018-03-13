
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
           char  filnam[15];
};
static const struct sqlcxp sqlfpn =
{
    14,
    ".\\CERTIFICA.pc"
};


static unsigned long sqlctx = 1043187;


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
            void  *sqhstv[8];
   unsigned int   sqhstl[8];
            int   sqhsts[8];
            void  *sqindv[8];
            int   sqinds[8];
   unsigned int   sqharm[8];
   unsigned int   *sqharc[8];
   unsigned short  sqadto[8];
   unsigned short  sqtdso[8];
} sqlstm = {10,8};

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
"select ((((e.primer_ap||' ')||e.segun_ap)||' ')||e.nombre) ,n.nit ,nvl(n.dig\
ito,(-1)) ,n.codigo_nit ,to_date(:b0,'yyyymmdd') ,to_date(:b1,'yyyymmdd') ,sys\
date  from acumulanit a ,nits n ,plan p ,nomemple e where ((((((((((((n.codigo\
_nit=a.codigo_nit and e.codigo_nit=n.codigo_nit) and a.ano_mes>=to_number(:b2)\
) and a.ano_mes<=to_number(:b3)) and p.cuenta in ('510503','510506','510512','\
510515','510518','510521','510524','510527','510536','510548','510560')) and p\
.cuenta=substr(a.cuenta,1,6)) and p.nivel='3') and (e.estado_lab<>'R' or (e.es\
tado_lab='R' and e.fecha_est>=to_date(:b0,'yyyymmdd')))) and e.codigo_emp=p.co\
digo_emp) and a.codigo_emp=p.codigo_emp) and a.codigo_emp=to_number(:b5)) and \
n.nit>=:b6) and n.nit<=:b7) group by e.primer_ap,e.segun_ap,e.nombre,n.nit,n.c\
odigo_nit,n.digito order by n.nit            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,116,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,823,0,9,186,0,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,9,0,0,1,9,0,0,
83,0,0,3,221,0,4,189,0,0,6,1,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,2,3,0,0,2,9,0,0,1,9,
0,0,
122,0,0,2,0,0,13,206,0,0,7,0,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,
165,0,0,4,408,0,4,221,0,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
200,0,0,5,372,0,4,238,0,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
235,0,0,6,366,0,4,255,0,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
270,0,0,7,363,0,4,274,0,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
305,0,0,8,363,0,4,291,0,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
340,0,0,9,355,0,4,307,0,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
375,0,0,10,355,0,4,323,0,0,5,4,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,
410,0,0,2,0,0,15,415,0,0,0,0,0,1,0,
425,0,0,11,0,0,30,417,0,0,0,0,0,1,0,
};


/*****************************************************************
* CERTIFICA.C Version 1.0 - Rev 1.2 - Ene. 16/98.
*
* lretenempl.c Programa que lista los certificados de ingresos y retenciones
*
* Uso : certifica codigo_emp ano_mes device copias userid/password
*
* Mario E. Santiago I. Creado Marzo 30 de 1.994
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <math.h>

double redondo();
void   numero_fecha();

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid          [100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

/* VARCHAR codigo_emp   [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

/* VARCHAR ano_mes13    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes13;

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

/* VARCHAR nombre_ciu   [22]; */ 
struct { unsigned short len; unsigned char arr[22]; } nombre_ciu;

/* VARCHAR direccion    [56]; */ 
struct { unsigned short len; unsigned char arr[56]; } direccion;

/* VARCHAR direccion_emp[56]; */ 
struct { unsigned short len; unsigned char arr[56]; } direccion_emp;

/* VARCHAR codigo_nita  [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nita;

/* VARCHAR niti         [13]; */ 
struct { unsigned short len; unsigned char arr[13]; } niti;

/* VARCHAR nitf         [13]; */ 
struct { unsigned short len; unsigned char arr[13]; } nitf;

/* VARCHAR fechai       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechai;

/* VARCHAR fechaf       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechaf;

/* VARCHAR fechae       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechae;

double  nit;
int     digito;
double  nit_emp;
int     digito_emp;
double  nita;
double  R37;
double  R38;
double  R39;
double  R40;
double  R41;
double  R43;
double  R44;
double  R45;
double  R46;
double  codigo_nit;
double  valor_sal;

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

                                            /* Variables globales del usuario */
        		                /* Variables de recepcion para datos */

char *fmtnum(), r_t[100];
int     con_lin=66;                                /* Contador de Lineas  */
char    copias[3];
double  valor_tot;
int     j;
char    cadena[120];
char    cadena2[50];
char    wcadena[120];
int     oraest;
char    a;
int     ano_ant;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;
//int     i, j;

if (argc < 9)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : certifica codigo_emp fechai fechaf niti nitf device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

   strcpy (codigo_emp.arr, argv[1]);
   codigo_emp.len =        strlen(codigo_emp.arr);
   strcpy (niti.arr,       argv[4]);
   niti.len =              strlen(niti.arr);
   strcpy (nitf.arr,       argv[5]);
   nitf.len =              strlen(nitf.arr);
   strcpy (device,         argv[6]);
   strlow (device);
   strcpy (copias,         argv[7]);

   if (!strpos ("/", argv[8])) {
       printf ("user id/password incorrecto.\n");
       exit (1);
   }
   strcpy(uid.arr,argv[8]);
   uid.len=strlen(uid.arr);

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

   strcpy (fechai.arr,     argv[2]);
   fechai.len  = strlen(fechai.arr);
   strcpy (ano_mesi.arr,   argv[2]);
   strorg (ano_mesi.arr,1,6);
   ano_mesi.len  = strlen(ano_mesi.arr);

   strcpy (ano_mes13.arr,  argv[2]);
   ano_mes13.len = strlen(ano_mes13.arr);

   strorg(ano_mes13.arr,1,4);
   ano_ant       = atoi(ano_mes13.arr)-1;
   sprintf(ano_mes13.arr, "%d%2d", ano_ant,13);
   ano_mes13.len = strlen(ano_mes13.arr);

   strcpy (fechaf.arr,   argv[3]);
   fechaf.len  = strlen(fechaf.arr);
   strcpy (ano_mesf.arr, argv[3]);
   strorg (ano_mesf.arr,1,4);
   ano_mesf.len  = strlen(ano_mesf.arr);
   sprintf(ano_mesf.arr, "%s%2d",ano_mesf.arr,12);
   ano_mesf.len  = strlen(ano_mesf.arr);

   /* C1 Salarios y demas ingresos laborales, R31*/
   /* EXEC SQL DECLARE C1 CURSOR FOR
      select e.primer_ap ||' '|| e.segun_ap ||' '|| e.nombre, n.nit, nvl(n.digito,-1),
             n.codigo_nit, to_date(:fechai,'yyyymmdd'),
             to_date(:fechaf,'yyyymmdd'),
             sysdate
      from  acumulanit a, nits n, plan p, nomemple e
      where n.codigo_nit         = a.codigo_nit           and
            e.codigo_nit         = n.codigo_nit           and
            a.ano_mes           >= to_number(:ano_mesi)   and
            a.ano_mes           <= to_number(:ano_mesf)   and
            p.cuenta            in ('510503','510506','510512','510515',
                                    '510518','510521','510524','510527',
                                    '510536','510548','510560')
                                                          and
            p.cuenta             = substr(a.cuenta,1,6)   and
            p.nivel              = '3'                    and
           (e.estado_lab        <> 'R'                    or
            (e.estado_lab        = 'R'                    and
             e.fecha_est >= to_date(:fechai,'yyyymmdd'))) and
            e.codigo_emp         = p.codigo_emp           and
            a.codigo_emp         = p.codigo_emp           and
            a.codigo_emp         = to_number(:codigo_emp) and
            n.nit               >= :niti                  and
            n.nit               <= :nitf
      group by e.primer_ap, e.segun_ap, e.nombre, n.nit, n.codigo_nit, n.digito
      order by n.nit; */ 

      
   /* EXEC SQL OPEN C1; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 10;
   sqlstm.arrsiz = 8;
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
   sqlstm.sqhstv[0] = (         void  *)&fechai;
   sqlstm.sqhstl[0] = (unsigned int  )22;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&fechaf;
   sqlstm.sqhstl[1] = (unsigned int  )22;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&ano_mesi;
   sqlstm.sqhstl[2] = (unsigned int  )22;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&ano_mesf;
   sqlstm.sqhstl[3] = (unsigned int  )22;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)&fechai;
   sqlstm.sqhstl[4] = (unsigned int  )22;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)0;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqhstv[5] = (         void  *)&codigo_emp;
   sqlstm.sqhstl[5] = (unsigned int  )5;
   sqlstm.sqhsts[5] = (         int  )0;
   sqlstm.sqindv[5] = (         void  *)0;
   sqlstm.sqinds[5] = (         int  )0;
   sqlstm.sqharm[5] = (unsigned int  )0;
   sqlstm.sqadto[5] = (unsigned short )0;
   sqlstm.sqtdso[5] = (unsigned short )0;
   sqlstm.sqhstv[6] = (         void  *)&niti;
   sqlstm.sqhstl[6] = (unsigned int  )15;
   sqlstm.sqhsts[6] = (         int  )0;
   sqlstm.sqindv[6] = (         void  *)0;
   sqlstm.sqinds[6] = (         int  )0;
   sqlstm.sqharm[6] = (unsigned int  )0;
   sqlstm.sqadto[6] = (unsigned short )0;
   sqlstm.sqtdso[6] = (unsigned short )0;
   sqlstm.sqhstv[7] = (         void  *)&nitf;
   sqlstm.sqhstl[7] = (unsigned int  )15;
   sqlstm.sqhsts[7] = (         int  )0;
   sqlstm.sqindv[7] = (         void  *)0;
   sqlstm.sqinds[7] = (         int  )0;
   sqlstm.sqharm[7] = (unsigned int  )0;
   sqlstm.sqadto[7] = (unsigned short )0;
   sqlstm.sqtdso[7] = (unsigned short )0;
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



   /* C2 */
   /* EXEC SQL select n.nombre, n.direccion, n.nit, nvl(n.digito,-1), c.nombre
            into  :nombre_emp, :direccion_emp, :nit_emp, :digito_emp, :nombre_ciu
            from   nits n, empresas e, ciudades c
            where  n.codigo_ciu = c.codigo                and
                   n.codigo_nit = e.codigo_nit            and
                   e.codigo_emp = to_number(:codigo_emp); */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 10;
   sqlstm.arrsiz = 8;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select n.nombre ,n.direccion ,n.nit ,nvl(n.digito,(-1)) ,c\
.nombre into :b0,:b1,:b2,:b3,:b4  from nits n ,empresas e ,ciudades c where ((\
n.codigo_ciu=c.codigo and n.codigo_nit=e.codigo_nit) and e.codigo_emp=to_numbe\
r(:b5))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )83;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&nombre_emp;
   sqlstm.sqhstl[0] = (unsigned int  )53;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&direccion_emp;
   sqlstm.sqhstl[1] = (unsigned int  )58;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&nit_emp;
   sqlstm.sqhstl[2] = (unsigned int  )8;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&digito_emp;
   sqlstm.sqhstl[3] = (unsigned int  )4;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)&nombre_ciu;
   sqlstm.sqhstl[4] = (unsigned int  )24;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)0;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqhstv[5] = (         void  *)&codigo_emp;
   sqlstm.sqhstl[5] = (unsigned int  )5;
   sqlstm.sqhsts[5] = (         int  )0;
   sqlstm.sqindv[5] = (         void  *)0;
   sqlstm.sqinds[5] = (         int  )0;
   sqlstm.sqharm[5] = (unsigned int  )0;
   sqlstm.sqadto[5] = (unsigned short )0;
   sqlstm.sqtdso[5] = (unsigned short )0;
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
       fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);

   nombre_emp.arr  [nombre_emp.len] = '\0';
   direccion.arr   [direccion.len]  = '\0';
   nombre_ciu.arr  [nombre_ciu.len] = '\0';

oraest = 0;
while (oraest == 0) {
      /* Salarios y demas ingresos laborales; R31 */
      /* EXEC SQL FETCH C1 INTO :nombre, :nit, :digito, :codigo_nit,
                             :fechai, :fechaf, :fechae; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 8;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )122;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&nombre;
      sqlstm.sqhstl[0] = (unsigned int  )53;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&nit;
      sqlstm.sqhstl[1] = (unsigned int  )8;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&digito;
      sqlstm.sqhstl[2] = (unsigned int  )4;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&codigo_nit;
      sqlstm.sqhstl[3] = (unsigned int  )8;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&fechai;
      sqlstm.sqhstl[4] = (unsigned int  )22;
      sqlstm.sqhsts[4] = (         int  )0;
      sqlstm.sqindv[4] = (         void  *)0;
      sqlstm.sqinds[4] = (         int  )0;
      sqlstm.sqharm[4] = (unsigned int  )0;
      sqlstm.sqadto[4] = (unsigned short )0;
      sqlstm.sqtdso[4] = (unsigned short )0;
      sqlstm.sqhstv[5] = (         void  *)&fechaf;
      sqlstm.sqhstl[5] = (unsigned int  )22;
      sqlstm.sqhsts[5] = (         int  )0;
      sqlstm.sqindv[5] = (         void  *)0;
      sqlstm.sqinds[5] = (         int  )0;
      sqlstm.sqharm[5] = (unsigned int  )0;
      sqlstm.sqadto[5] = (unsigned short )0;
      sqlstm.sqtdso[5] = (unsigned short )0;
      sqlstm.sqhstv[6] = (         void  *)&fechae;
      sqlstm.sqhstl[6] = (unsigned int  )22;
      sqlstm.sqhsts[6] = (         int  )0;
      sqlstm.sqindv[6] = (         void  *)0;
      sqlstm.sqinds[6] = (         int  )0;
      sqlstm.sqharm[6] = (unsigned int  )0;
      sqlstm.sqadto[6] = (unsigned short )0;
      sqlstm.sqtdso[6] = (unsigned short )0;
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



      oraest  = sqlca.sqlcode;
      if (sqlca.sqlcode == 1403) break;

      if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C1 (%d)\n", sqlca.sqlcode);

      nombre.arr[nombre.len] = '\0';
      fechai.arr[fechai.len] = '\0';
      fechaf.arr[fechaf.len] = '\0';
      fechae.arr[fechae.len] = '\0';

      /* Salarios y demas ingresos laborales(Vacaciones); */
      /* EXEC SQL select nvl(sum(valor_noved),0)
               into :R37
               from  nomnoved d, nomemple e, nits n
               where d.concepto          in (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,34,37,56,54) and
                     d.fecha_has         >= to_date(to_number(:ano_mesi),'yyyymm')           and
                     d.fecha_has         <= last_day(to_date(to_number(:ano_mesf),'yyyymm')) and
                     d.codigo             = e.codigo               and
                     d.codigo_emp         = e.codigo_emp           and
                     e.codigo_nit         = n.codigo_nit           and
                     e.codigo_emp         = to_number(:codigo_emp) and
                     n.codigo_nit         = :codigo_nit; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 8;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select nvl(sum(valor_noved),0) into :b0  from nomnoved \
d ,nomemple e ,nits n where (((((((d.concepto in (1,2,3,4,5,6,7,8,9,10,11,12,1\
3,14,15,17,34,37,56,54) and d.fecha_has>=to_date(to_number(:b1),'yyyymm')) and\
 d.fecha_has<=last_day(to_date(to_number(:b2),'yyyymm'))) and d.codigo=e.codig\
o) and d.codigo_emp=e.codigo_emp) and e.codigo_nit=n.codigo_nit) and e.codigo_\
emp=to_number(:b3)) and n.codigo_nit=:b4)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )165;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&R37;
      sqlstm.sqhstl[0] = (unsigned int  )8;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&ano_mesi;
      sqlstm.sqhstl[1] = (unsigned int  )22;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
      sqlstm.sqhstl[2] = (unsigned int  )22;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned int  )5;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&codigo_nit;
      sqlstm.sqhstl[4] = (unsigned int  )8;
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



      if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C4 (%d)\n", sqlca.sqlcode);

      R38=0;
      /* C3 Cesantias e intereses de cesantias efectivamente pagadas en el periodo */
      /* EXEC SQL select nvl(sum(valor_noved),0)
               into :R38
               from  nomnoved d, nomemple e, nits n
               where d.concepto          in (18,19,20,21,22) and
                     d.fecha_has         >= to_date(to_number(:ano_mesi),'yyyymm')           and
                     d.fecha_has         <= last_day(to_date(to_number(:ano_mesf),'yyyymm')) and
                     d.codigo             = e.codigo               and
                     d.codigo_emp         = e.codigo_emp           and
                     e.codigo_nit         = n.codigo_nit           and
                     e.codigo_emp         = to_number(:codigo_emp) and
                     n.codigo_nit         = :codigo_nit; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 8;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select nvl(sum(valor_noved),0) into :b0  from nomnoved \
d ,nomemple e ,nits n where (((((((d.concepto in (18,19,20,21,22) and d.fecha_\
has>=to_date(to_number(:b1),'yyyymm')) and d.fecha_has<=last_day(to_date(to_nu\
mber(:b2),'yyyymm'))) and d.codigo=e.codigo) and d.codigo_emp=e.codigo_emp) an\
d e.codigo_nit=n.codigo_nit) and e.codigo_emp=to_number(:b3)) and n.codigo_nit\
=:b4)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )200;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&R38;
      sqlstm.sqhstl[0] = (unsigned int  )8;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&ano_mesi;
      sqlstm.sqhstl[1] = (unsigned int  )22;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
      sqlstm.sqhstl[2] = (unsigned int  )22;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned int  )5;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&codigo_nit;
      sqlstm.sqhstl[4] = (unsigned int  )8;
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



      if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C3 (%d)\n", sqlca.sqlcode);

      R41=0;
      /* C3 Otros ingresos originados en la relacion laboral 41 */
      /* EXEC SQL select nvl(sum(valor_noved),0)
               into :R41
               from  nomnoved d, nomemple e, nits n
               where d.concepto          in (16,23,24) and
                     d.fecha_has         >= to_date(to_number(:ano_mesi),'yyyymm')           and
                     d.fecha_has         <= last_day(to_date(to_number(:ano_mesf),'yyyymm')) and
                     d.codigo             = e.codigo               and
                     d.codigo_emp         = e.codigo_emp           and
                     e.codigo_nit         = n.codigo_nit           and
                     e.codigo_emp         = to_number(:codigo_emp) and
                     n.codigo_nit         = :codigo_nit; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 8;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select nvl(sum(valor_noved),0) into :b0  from nomnoved \
d ,nomemple e ,nits n where (((((((d.concepto in (16,23,24) and d.fecha_has>=t\
o_date(to_number(:b1),'yyyymm')) and d.fecha_has<=last_day(to_date(to_number(:\
b2),'yyyymm'))) and d.codigo=e.codigo) and d.codigo_emp=e.codigo_emp) and e.co\
digo_nit=n.codigo_nit) and e.codigo_emp=to_number(:b3)) and n.codigo_nit=:b4)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )235;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&R41;
      sqlstm.sqhstl[0] = (unsigned int  )8;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&ano_mesi;
      sqlstm.sqhstl[1] = (unsigned int  )22;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
      sqlstm.sqhstl[2] = (unsigned int  )22;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned int  )5;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&codigo_nit;
      sqlstm.sqhstl[4] = (unsigned int  )8;
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



      if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C3 (%d)\n", sqlca.sqlcode);

//      printf("3) %9.0f %s %s %s", codigo_nit, fechai.arr, fechaf.arr, fechae.arr); getchar();
      R43=0;
      /* C4 */
      /*Aportes obligatorios por salud  R43*/
      /* EXEC SQL select nvl(sum(valor_noved),0)
               into :R43
               from  nomnoved d, nomemple e, nits n
               where d.concepto           in (12,15)               and
                     d.fecha_has         >= to_date(to_number(:ano_mesi),'yyyymm')           and
                     d.fecha_has         <= last_day(to_date(to_number(:ano_mesf),'yyyymm')) and
                     d.codigo             = e.codigo               and
                     d.codigo_emp         = e.codigo_emp           and
                     e.codigo_nit         = n.codigo_nit           and
                     e.codigo_emp         = to_number(:codigo_emp) and
                     n.codigo_nit         = :codigo_nit; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 8;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select nvl(sum(valor_noved),0) into :b0  from nomnoved \
d ,nomemple e ,nits n where (((((((d.concepto in (12,15) and d.fecha_has>=to_d\
ate(to_number(:b1),'yyyymm')) and d.fecha_has<=last_day(to_date(to_number(:b2)\
,'yyyymm'))) and d.codigo=e.codigo) and d.codigo_emp=e.codigo_emp) and e.codig\
o_nit=n.codigo_nit) and e.codigo_emp=to_number(:b3)) and n.codigo_nit=:b4)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )270;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&R43;
      sqlstm.sqhstl[0] = (unsigned int  )8;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&ano_mesi;
      sqlstm.sqhstl[1] = (unsigned int  )22;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
      sqlstm.sqhstl[2] = (unsigned int  )22;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned int  )5;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&codigo_nit;
      sqlstm.sqhstl[4] = (unsigned int  )8;
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



      if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C4 (%d)\n", sqlca.sqlcode);


      R44=0;
      /* EXEC SQL select nvl(sum(valor_noved),0)
               into :R44
               from  nomnoved d, nomemple e, nits n
               where d.concepto           in (48,49)               and
                     d.fecha_has         >= to_date(to_number(:ano_mesi),'yyyymm')           and
                     d.fecha_has         <= last_day(to_date(to_number(:ano_mesf),'yyyymm')) and
                     d.codigo             = e.codigo               and
                     d.codigo_emp         = e.codigo_emp           and
                     e.codigo_nit         = n.codigo_nit           and
                     e.codigo_emp         = to_number(:codigo_emp) and
                     n.codigo_nit         = :codigo_nit; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 8;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select nvl(sum(valor_noved),0) into :b0  from nomnoved \
d ,nomemple e ,nits n where (((((((d.concepto in (48,49) and d.fecha_has>=to_d\
ate(to_number(:b1),'yyyymm')) and d.fecha_has<=last_day(to_date(to_number(:b2)\
,'yyyymm'))) and d.codigo=e.codigo) and d.codigo_emp=e.codigo_emp) and e.codig\
o_nit=n.codigo_nit) and e.codigo_emp=to_number(:b3)) and n.codigo_nit=:b4)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )305;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&R44;
      sqlstm.sqhstl[0] = (unsigned int  )8;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&ano_mesi;
      sqlstm.sqhstl[1] = (unsigned int  )22;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
      sqlstm.sqhstl[2] = (unsigned int  )22;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned int  )5;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&codigo_nit;
      sqlstm.sqhstl[4] = (unsigned int  )8;
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



      if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C5 (%d)\n", sqlca.sqlcode);

      R45=0;
      /* EXEC SQL select nvl(sum(valor_noved),0)
               into :R45
               from  nomnoved d, nomemple e, nits n
               where d.concepto           = 44                     and
                     d.fecha_has         >= to_date(to_number(:ano_mesi),'yyyymm')           and
                     d.fecha_has         <= last_day(to_date(to_number(:ano_mesf),'yyyymm')) and
                     d.codigo             = e.codigo               and
                     d.codigo_emp         = e.codigo_emp           and
                     e.codigo_nit         = n.codigo_nit           and
                     e.codigo_emp         = to_number(:codigo_emp) and
                     n.codigo_nit         = :codigo_nit; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 8;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select nvl(sum(valor_noved),0) into :b0  from nomnoved \
d ,nomemple e ,nits n where (((((((d.concepto=44 and d.fecha_has>=to_date(to_n\
umber(:b1),'yyyymm')) and d.fecha_has<=last_day(to_date(to_number(:b2),'yyyymm\
'))) and d.codigo=e.codigo) and d.codigo_emp=e.codigo_emp) and e.codigo_nit=n.\
codigo_nit) and e.codigo_emp=to_number(:b3)) and n.codigo_nit=:b4)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )340;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&R45;
      sqlstm.sqhstl[0] = (unsigned int  )8;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&ano_mesi;
      sqlstm.sqhstl[1] = (unsigned int  )22;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
      sqlstm.sqhstl[2] = (unsigned int  )22;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned int  )5;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&codigo_nit;
      sqlstm.sqhstl[4] = (unsigned int  )8;
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



      if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C5 (%d)\n", sqlca.sqlcode);

      R46=0;
      /* EXEC SQL select nvl(sum(valor_noved),0)
               into :R46
               from  nomnoved d, nomemple e, nits n
               where d.concepto           = 31                     and
                     d.fecha_has         >= to_date(to_number(:ano_mesi),'yyyymm')           and
                     d.fecha_has         <= last_day(to_date(to_number(:ano_mesf),'yyyymm')) and
                     d.codigo             = e.codigo               and
                     d.codigo_emp         = e.codigo_emp           and
                     e.codigo_nit         = n.codigo_nit           and
                     e.codigo_emp         = to_number(:codigo_emp) and
                     n.codigo_nit         = :codigo_nit; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 8;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select nvl(sum(valor_noved),0) into :b0  from nomnoved \
d ,nomemple e ,nits n where (((((((d.concepto=31 and d.fecha_has>=to_date(to_n\
umber(:b1),'yyyymm')) and d.fecha_has<=last_day(to_date(to_number(:b2),'yyyymm\
'))) and d.codigo=e.codigo) and d.codigo_emp=e.codigo_emp) and e.codigo_nit=n.\
codigo_nit) and e.codigo_emp=to_number(:b3)) and n.codigo_nit=:b4)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )375;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&R46;
      sqlstm.sqhstl[0] = (unsigned int  )8;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&ano_mesi;
      sqlstm.sqhstl[1] = (unsigned int  )22;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&ano_mesf;
      sqlstm.sqhstl[2] = (unsigned int  )22;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned int  )5;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&codigo_nit;
      sqlstm.sqhstl[4] = (unsigned int  )8;
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



      if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
          fprintf (stderr, "Error leyendo C6 (%d)\n", sqlca.sqlcode);

          sprintf (cadena,"%9.2f",nit_emp);
          fprintf (fp,"\n\n\n\n\n%24s",fmtnum("zbzbzBzbzbzbzbzbz",cadena,r_t));

          if (digito_emp > 0) {
             sprintf (cadena,"%d ",digito_emp);
             fprintf (fp,"  %s ",fmtnum("z",cadena,r_t));
          }
          else if (digito_emp == 0)  {
                  fprintf (fp,"  %s ","0");
          }

          fprintf (fp,"\n\n%5s%-55s"," ",nombre_emp.arr);

          sprintf (cadena,"%13.2f",nit);
          fprintf (fp,"\n\n      %s","13");
          fprintf (fp," %23s",fmtnum("zbzbzbzbzbzbzbzbzbzbzbz",cadena,r_t));

          fprintf (fp," %-57s\n",nombre.arr);

          strcpy  (wcadena,fechai.arr);
          numero_fecha(wcadena);
          strcpy  (cadena,wcadena);
          fprintf (fp,"\n%17s",cadena);

          strcpy  (wcadena,fechaf.arr);
          numero_fecha(wcadena);
          strcpy  (cadena,wcadena);
          fprintf (fp,"%6s%-10s"," ",cadena);

          strcpy  (wcadena,fechae.arr);
          wcadena[0] = '1';
          wcadena[1] = '0';
          numero_fecha(wcadena);
          strcpy  (cadena,wcadena);
          if (!strcmp(codigo_emp.arr,"16"))
             fprintf (fp,"   %-10s  %-21s    1 3 0 0 1",cadena,nombre_ciu.arr);
          else
             fprintf (fp,"   %-10s  %-21s    0 8 0 0 1",cadena,nombre_ciu.arr);

          sprintf (cadena,"%9.2f",R37); //R37
          fprintf (fp,"\n\n\n%68s%14s\n"," ",fmtnum("$zz,zzz,zz9.99",cadena,r_t));

          sprintf (cadena,"%9.2f",R38);  //R38
          fprintf (fp,"%68s%14s\n"," ",fmtnum("$zz,zzz,zz9.99",cadena,r_t));

          sprintf (cadena,"%9.2f",0.00); //R39
          fprintf (fp,"%68s%14s\n"," ",fmtnum("$zz,zzz,zz9.99",cadena,r_t));

          sprintf (cadena,"%9.2f",0.00);  //R40
          fprintf (fp,"%68s%14s\n"," ",fmtnum("$zz,zzz,zz9.99",cadena,r_t));

          sprintf (cadena,"%9.2f",R41);  //R41
          fprintf (fp,"%68s%14s\n"," ",fmtnum("$zz,zzz,zz9.99",cadena,r_t));

          sprintf (cadena,"%9.2f",R37+R38+R41); //R42
          fprintf (fp,"%68s%14s\n\n"," ",fmtnum("$zz,zzz,zz9.99",cadena,r_t));

          sprintf (cadena,"%9.2f",redondo((R37-R43)*12.5/100,0));  //R43
          fprintf (fp,"%68s%14s\n"," ",fmtnum("$zz,zzz,zz9.99",cadena,r_t));

          sprintf (cadena,"%9.2f",R44+redondo((R37-R43)*12/100,0)); //R44
//          printf("R44=<%9.2f> R37=<%9.2f> R43=<%9.2f> REDONDO=<%9.2f>",R44,R37,R43,redondo((R37-R43)*12/100,0)); getchar();
          fprintf (fp,"%68s%14s\n"," ",fmtnum("$zz,zzz,zz9.99",cadena,r_t));

          sprintf (cadena,"%9.2f",R45);   //R45
          fprintf (fp,"%68s%14s\n"," ",fmtnum("$zz,zzz,zz9.99",cadena,r_t));

          sprintf (cadena,"%9.2f",R46);   //R46
          fprintf (fp,"%68s%14s"," ",fmtnum("$zz,zzz,zz9.99",cadena,r_t));

          fprintf (fp,"%s",salte_pagina);
//      }
//      digito=0;
//      digito_emp=0;
}
cierre_impresora();

/* EXEC SQL CLOSE C1; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 10;
sqlstm.arrsiz = 8;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )410;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)256;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



/* EXEC SQL COMMIT WORK RELEASE; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 10;
sqlstm.arrsiz = 8;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )425;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)256;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


exit   (0);
}

