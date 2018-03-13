
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
    ".\\nomplpor.pc"
};


static const unsigned long sqlctx = 1216140549;


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
"select n.nit ,n.digito ,n.nombre  from nomfijos e ,nits n where (e.codigo_ni\
t=n.codigo_nit and e.codigo_emp=:b0)           ";
 static const char *sq0003 = 
"select n.nit ,substr(e.nombre,1,decode(instr(e.nombre,' '),0,length(e.nombre\
),instr(e.nombre,' '))) ,decode(instr(e.nombre,' '),0,' ',substr(e.nombre,(ins\
tr(e.nombre,' ')+1),length(e.nombre))) ,e.primer_ap ,segun_ap ,(substr(ctacte,\
1,4)||substr(ctacte,6,7)) ,substr(ctacte,14,1)  from nomemple e ,nits n where \
(((e.codigo_nit=n.codigo_nit and e.estado_lab<>'R') and e.cesantias=:b0) and e\
.codigo_emp=:b1) order by n.nit            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,105,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,123,0,9,148,0,1,1,0,1,0,1,9,0,0,
46,0,0,4,0,0,30,182,0,0,0,0,1,0,
60,0,0,2,0,0,15,183,0,0,0,0,1,0,
74,0,0,3,431,0,9,192,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
96,0,0,3,0,0,13,196,0,7,0,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,2,3,0,0,
138,0,0,2,0,0,13,243,0,3,0,0,1,0,2,4,0,0,2,3,0,0,2,9,0,0,
};


/*****************************************************************
* NOMPLPOR  Version 1.0 - Rev 1.2 - Feb. 11/99.
*
* nomplpor.pc Programa de liquidaci¢n de novedades
*
* Uso : nomplpor codigo_emp device copias userid/password
*
* Mario E. Santiago I. Creado Enero 22-2001.
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

/* VARCHAR codigo_emp     [05]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR fecha_has      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_has;

/* VARCHAR fecha_des      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_des;

/* VARCHAR ctacte         [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ctacte;

/* VARCHAR fondo          [50]; */ 
struct { unsigned short len; unsigned char arr[50]; } fondo;

/* VARCHAR w_arch         [100]; */ 
struct { unsigned short len; unsigned char arr[100]; } w_arch;

double  nit;
int     digito;
/* VARCHAR razon[36]; */ 
struct { unsigned short len; unsigned char arr[36]; } razon;


double  identif;
/* VARCHAR pri_nomb[11]; */ 
struct { unsigned short len; unsigned char arr[11]; } pri_nomb;

/* VARCHAR seg_nomb[11]; */ 
struct { unsigned short len; unsigned char arr[11]; } seg_nomb;

/* VARCHAR pri_apell[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } pri_apell;

/* VARCHAR seg_apell[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } seg_apell;

/* VARCHAR cuenta[17]; */ 
struct { unsigned short len; unsigned char arr[17]; } cuenta;

int     digempl;

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


FILE    *fp1;
FILE    *fp2;

char *fmtnum(), r_t[100];
int     con_pag;                                   /* Contador de Paginas */
int     con_lin=66;                                /* Contador de Lineas  */
int     nconsec=0;
char    copias[6];

int	staora = 0;
char    formas[5];
char    fechas[100];
char    fecha[30];
char    cadena[100];
char    cadena2[200];
char    aestado[2][8];
char    registro[85];

void lista_empresa();
void regcontrol();
void regtraslado();

void main(argc, argv)
int     argc;
char    *argv[];
{
char    device[10];
int     status = 0;

if (argc < 6)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : nomplpor codigo_emp device copias fondo archivo userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    printf ("archivo: nombre archivo con toda su ruta ");
    exit (1);
   }

strcpy (codigo_emp.arr, argv[1]);
codigo_emp.len = strlen(codigo_emp.arr);
strcpy (device,             argv[2]);
strlow (device);
strcpy (copias,             argv[3]);
strcpy (fondo.arr,          argv[4]);
fondo.len = strlen(fondo.arr);
strcpy (w_arch.arr,         argv[5]);
w_arch.len = strlen(w_arch.arr);
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
       select n.nit, n.digito, n.nombre
       from   nomfijos e, nits n
       where  e.codigo_nit    = n.codigo_nit     and
              e.codigo_emp    = :codigo_emp; */ 


 /* EXEC SQL DECLARE C2 CURSOR FOR
      select n.nit, substr(e.nombre,1,decode(instr(e.nombre,' '),0,length(e.nombre),instr(e.nombre,' '))),
             decode(instr(e.nombre,' '),0,' ',substr(e.nombre, instr(e.nombre,' ')+1, length(e.nombre))),
             e.primer_ap, segun_ap, substr(ctacte,1,4)||substr(ctacte,6,7),
             substr(ctacte,14,1)
      from   nomemple e, nits n
      where  e.codigo_nit    = n.codigo_nit     and
             e.estado_lab    <> 'R'             and
             e.cesantias     = :fondo           and
             e.codigo_emp    = :codigo_emp
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



 if ((fp1 = fopen("cesantt", "w")) == NULL) {
     fprintf (stderr,"Error abriendo archivo pipe \n");
     exit (1);
 }

 lista_empresa();
 fclose(fp1);
 regcontrol();

 if ((fp1 = fopen("cesantc", "r")) == NULL) {
     fprintf (stderr,"Error abriendo archivo pipe \n");
     exit (1);
 }
 if ((fp2 = fopen(w_arch.arr, "w")) == NULL) {
     fprintf (stderr,"Error abriendo archivo %s\n",w_arch.arr);
     exit (1);
 }

 fread(registro,sizeof(registro),1,fp1);
 fwrite(registro,sizeof(registro),1,fp2);
 fclose(fp1);

 if ((fp1 = fopen("cesantt", "r")) == NULL) {
     fprintf (stderr,"Error abriendo archivo pipe \n");
     exit (1);
 }
 fread(registro,sizeof(registro),1,fp1);
 fwrite("\n",1,1,fp2);
 while(!feof(fp1)) {
    fwrite(registro,sizeof(registro),1,fp2);
    fread(registro,sizeof(registro),1,fp1);
 }
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

 /* EXEC SQL OPEN C2; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.stmt = sq0003;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)74;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&fondo;
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



 while (staora == 0) {

      /* EXEC SQL FETCH C2 INTO :identif,   :pri_nomb,  :seg_nomb,
                             :pri_apell, :seg_apell, :cuenta,
                             :digempl; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 7;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)96;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&identif;
      sqlstm.sqhstl[0] = (unsigned long  )8;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&pri_nomb;
      sqlstm.sqhstl[1] = (unsigned long  )13;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&seg_nomb;
      sqlstm.sqhstl[2] = (unsigned long  )13;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&pri_apell;
      sqlstm.sqhstl[3] = (unsigned long  )18;
      sqlstm.sqindv[3] = (         short *)0;
      sqlstm.sqharm[3] = (unsigned long )0;
      sqlstm.sqhstv[4] = (unsigned char  *)&seg_apell;
      sqlstm.sqhstl[4] = (unsigned long  )18;
      sqlstm.sqindv[4] = (         short *)0;
      sqlstm.sqharm[4] = (unsigned long )0;
      sqlstm.sqhstv[5] = (unsigned char  *)&cuenta;
      sqlstm.sqhstl[5] = (unsigned long  )19;
      sqlstm.sqindv[5] = (         short *)0;
      sqlstm.sqharm[5] = (unsigned long )0;
      sqlstm.sqhstv[6] = (unsigned char  *)&digempl;
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



      if (pri_nomb.len > 10)
          pri_nomb.len = 10;

      pri_nomb.arr      [pri_nomb.len]     = '\0';

      if (seg_nomb.len > 10)
          seg_nomb.len = 10;

      seg_nomb.arr       [seg_nomb.len]     = '\0';

      if (pri_apell.len > 15)
          pri_apell.len = 15;

      pri_apell.arr      [pri_apell.len]     = '\0';

      if (seg_apell.len > 15)
          seg_apell.len = 15;

      seg_apell.arr      [seg_apell.len]     = '\0';

      cuenta.arr         [cuenta.len]     = '\0';

      staora  = sqlca.sqlcode;

      if (staora) {
         fprintf (stderr, "Error leyendo C2 (%11.0f) (%d)\n", identif, staora);
      }

      if (staora ==  1403) break;
      if (staora == -1405)
          staora  = 0;
      else if (staora)
               fprintf (stderr, "Error leyendo C1 (%d)\n", staora);

      regtraslado();

 }
}

void regcontrol()
{
 staora  = 0;

 /* EXEC SQL FETCH C1 INTO :nit, :digito, :razon; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 7;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)138;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nit;
 sqlstm.sqhstl[0] = (unsigned long  )8;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&digito;
 sqlstm.sqhstl[1] = (unsigned long  )4;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&razon;
 sqlstm.sqhstl[2] = (unsigned long  )38;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 if (razon.len > 35)
     razon.len = 35;

 razon.arr      [razon.len]     = '\0';

 staora  = sqlca.sqlcode;

 if (staora == -1405) {
    staora = 0;
 }
 if (staora) {
    fprintf (stderr, "Error leyendo C1 (%d)\n", staora);
    exit   (1);
 }

 if ((fp1 = fopen("cesantc", "w")) == NULL) {
     fprintf (stderr,"Error abriendo archivo pipe \n");
     exit (1);
 }
 fprintf(fp1,"%s%011.0f%1d%-35s","1",nit,digito,razon.arr);
 fclose(fp1);
}

void regtraslado()
{
   fprintf(fp1,"%s%011.0f","2",identif);
   fprintf(fp1,"%-10s",pri_nomb.arr);
   fprintf(fp1,"%-10s",seg_nomb.arr);
   fprintf(fp1,"%-15s",pri_apell.arr);
   fprintf(fp1,"%-15s",seg_apell.arr);
   fprintf(fp1,"%-16s",cuenta.arr);
   fprintf(fp1,"%1d",digempl);
   fprintf(fp1,"%s","0051");
   fprintf(fp1,"%s\n","A");
}
