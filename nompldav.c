
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
    ".\\nompldav.pc"
};


static const unsigned long sqlctx = 1303141435;


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
   unsigned char    *sqhstv[6];
   unsigned long    sqhstl[6];
	    short   *sqindv[6];
   unsigned long    sqharm[6];
   unsigned long     *sqharc[6];
} sqlstm = {8,6};

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
"select e.codigo ,n.codigo_nit ,n.nit ,e.ctacte ,e.tipocta ,substr(((rtrim(e.\
nombre)||' ')||e.primer_ap),1,18) nombre  from nomemple e ,nits n where (((e.c\
odigo_nit=n.codigo_nit and e.estado_lab<>'R') and e.codigo_emp=:b0) and e.ctac\
te is  not null ) order by e.codigo            ";
 static const char *sq0003 = 
"select v.clase_pd ,round(v.valor_noved,0)  from nomnoved v ,nits n ,nomfijos\
 f where ((((n.codigo_nit=:b0 and f.codigo_emp=v.codigo_emp) and v.fecha_has=f\
.fecha_has) and v.codigo_emp=:b1) and v.codigo=:b2) order by v.clase_pd,v.conc\
epto            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,111,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,279,0,9,157,0,1,1,0,1,0,1,9,0,0,
46,0,0,4,0,0,30,201,0,0,0,0,1,0,
60,0,0,2,0,0,15,202,0,0,0,0,1,0,
74,0,0,2,0,0,13,213,0,6,0,0,1,0,2,3,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,
112,0,0,3,248,0,9,230,0,3,3,0,1,0,1,3,0,0,1,9,0,0,1,3,0,0,
138,0,0,3,0,0,13,231,0,2,0,0,1,0,2,3,0,0,2,4,0,0,
160,0,0,3,0,0,15,242,0,0,0,0,1,0,
174,0,0,2,0,0,13,244,0,6,0,0,1,0,2,3,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,
212,0,0,3,0,0,13,267,0,2,0,0,1,0,2,3,0,0,2,4,0,0,
234,0,0,5,154,0,4,281,0,4,1,0,1,0,2,4,0,0,2,9,0,0,2,9,0,0,1,9,0,0,
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

/* VARCHAR codigo_emp     [05]; */ 
struct { unsigned short len; unsigned char arr[5]; } codigo_emp;

/* VARCHAR fecha_has      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_has;

/* VARCHAR fecha_des      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_des;

/* VARCHAR tipocta        [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } tipocta;

/* VARCHAR ctacte         [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ctacte;

/* VARCHAR xctacte        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } xctacte;

/* VARCHAR fechat         [06]; */ 
struct { unsigned short len; unsigned char arr[6]; } fechat;

/* VARCHAR nombre         [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nombre;

/* VARCHAR csi            [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } csi;

/* VARCHAR w_arch         [100]; */ 
struct { unsigned short len; unsigned char arr[100]; } w_arch;

int     codigo_nit;
int     codigo;
int     clase_pd;
int     i;
int     j;
double  nit;
double  nite;
double  ntotal;
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
char    comando[100];
char    csubsrv[20];
char    aestado[2][8];
double  ndeven;
double  ndeduc;
char    registro[170];

void lista_empresa();
void acumule_nov();
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
    printf ("Uso : nomlinov codigo_emp device copias primas(S/N) archivo userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    printf ("archivo: nombre archivo con toda su rura ");
    exit (1);
   }

strcpy (codigo_emp.arr, argv[1]);
codigo_emp.len = strlen(codigo_emp.arr);
strcpy (device,             argv[2]);
strlow (device);
strcpy (copias,             argv[3]);
strcpy (csi.arr,            argv[4]);
csi.len = strlen(csi.arr);
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
       select e.codigo, n.codigo_nit, n.nit,
              e.ctacte, e.tipocta, 
              substr(rtrim(e.nombre)||' '||e.primer_ap,1,18) as nombre
       from   nomemple e, nits n
       where  e.codigo_nit    = n.codigo_nit     and
              e.estado_lab    <> 'R'             and
              e.codigo_emp    = :codigo_emp      and
              e.ctacte      is not null
       order by e.codigo; */ 


 /* EXEC SQL DECLARE C2 CURSOR FOR
       select v.clase_pd, round(v.valor_noved,0)
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



 if (!strcmp(csi.arr,"S"))
    sprintf(csubsrv,"%s%02d","PP",atoi(codigo_emp.arr));
 else
    sprintf(csubsrv,"%s%02d","PN",atoi(codigo_emp.arr));

 if ((fp1 = fopen("nominat", "w")) == NULL) {
     fprintf (stderr,"Error abriendo archivo pipe \n");
     exit (1);
 }
 lista_empresa();
 fclose(fp1);
 regcontrol();

strcpy(comando,"COPY nominac + nominat ");
strcat(comando,w_arch.arr);
system(comando);
/*
 if ((fp1 = fopen("nominac", "r")) == NULL) {
     fprintf (stderr,"Error abriendo archivo pipe \n");
     exit (1);
 }
 if ((fp2 = fopen(w_arch.arr, "w")) == NULL) {
     fprintf (stderr,"Error abriendo archivo %s\n",w_arch.arr);
     exit (1);
 }
 fread(registro,sizeof(registro),1,fp1);
 while(!feof(fp1)) {
    fwrite(registro,sizeof(registro),1,fp2);
    fread(registro,sizeof(registro),1,fp1);
 }
 fclose(fp1);
 if ((fp1 = fopen("nominat", "r")) == NULL) {
     fprintf (stderr,"Error abriendo archivo pipe \n");
     exit (1);
 }
 fread(registro,sizeof(registro),1,fp1);
 fwrite("\n",1,1,fp2);
 while(!feof(fp1)) {
    fwrite(registro,sizeof(registro),1,fp2);
    fread(registro,sizeof(registro),1,fp1);
 }
*/
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

 staora  = 0;

 /* EXEC SQL FETCH C1 INTO :codigo, :codigo_nit, :nit, :ctacte, :tipocta, :nombre; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
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
 sqlstm.sqhstv[3] = (unsigned char  *)&ctacte;
 sqlstm.sqhstl[3] = (unsigned long  )22;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&tipocta;
 sqlstm.sqhstl[4] = (unsigned long  )5;
 sqlstm.sqindv[4] = (         short *)0;
 sqlstm.sqharm[4] = (unsigned long )0;
 sqlstm.sqhstv[5] = (unsigned char  *)&nombre;
 sqlstm.sqhstl[5] = (unsigned long  )32;
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

 if (staora == -1405) {
    staora = 0;
 }
 if (staora) {
    fprintf (stderr, "Error leyendo C1 (%d)\n", staora);
    exit   (1);
 }
 tipocta.arr      [tipocta.len]     = '\0';
 ctacte.arr       [ctacte.len]      = '\0';
 nombre.arr       [nombre.len]      = '\0';

 while (staora == 0) {
      sprintf(cadena,"%12.0f",nit);
      /* EXEC SQL OPEN C2; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 6;
      sqlstm.stmt = sq0003;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)112;
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


      /* EXEC SQL FETCH C2 INTO :clase_pd, :valor_noved; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 6;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)138;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&clase_pd;
      sqlstm.sqhstl[0] = (unsigned long  )4;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&valor_noved;
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



      staora  = sqlca.sqlcode;
      if (staora) {
         fprintf (stderr, "Error leyendo C2 (%d) (%d) (%d)\n", codigo, codigo_nit, staora);
      }
      while (staora == 0) {
            acumule_nov();
            regtraslado();

      }
      /* EXEC SQL CLOSE C2; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 6;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)160;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      ndeven = ndeduc = 0;
      /* EXEC SQL FETCH C1 INTO :codigo, :codigo_nit, :nit, :ctacte, :tipocta, :nombre; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 6;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)174;
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
      sqlstm.sqhstv[3] = (unsigned char  *)&ctacte;
      sqlstm.sqhstl[3] = (unsigned long  )22;
      sqlstm.sqindv[3] = (         short *)0;
      sqlstm.sqharm[3] = (unsigned long )0;
      sqlstm.sqhstv[4] = (unsigned char  *)&tipocta;
      sqlstm.sqhstl[4] = (unsigned long  )5;
      sqlstm.sqindv[4] = (         short *)0;
      sqlstm.sqharm[4] = (unsigned long )0;
      sqlstm.sqhstv[5] = (unsigned char  *)&nombre;
      sqlstm.sqhstl[5] = (unsigned long  )32;
      sqlstm.sqindv[5] = (         short *)0;
      sqlstm.sqharm[5] = (unsigned long )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



      tipocta.arr      [tipocta.len]    = '\0';
      ctacte.arr       [ctacte.len]     = '\0';
      nombre.arr       [nombre.len]     = '\0';

      staora  = sqlca.sqlcode;
      if (staora ==  1403) break;
      if (staora == -1405)
          staora  = 0;
      else if (staora)
               fprintf (stderr, "Error leyendo C1 (%d)\n", staora);
 }
}

void acumule_nov()
{
 while (staora == 0) {
      if (clase_pd == 1)
           ndeven = ndeven + valor_noved;
      else
           ndeduc = ndeduc + valor_noved;

      /* EXEC SQL FETCH C2 INTO :clase_pd, :valor_noved; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 6;
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)212;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&clase_pd;
      sqlstm.sqhstl[0] = (unsigned long  )4;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&valor_noved;
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



      staora  = sqlca.sqlcode;
      if (staora ==  1403) break;
      if (staora == -1405)
          staora  = 0;
      else if (staora)
               fprintf (stderr, "Error leyendo C2 (%d)\n", staora);

 }
}

void regcontrol()
{
 /* EXEC SQL select nit||digito, ctacte, to_char(fecha_has,'yymmdd')
          into :nite, :xctacte, :fechat
          from nomfijos f, nits n
          where f.codigo_nit = n.codigo_nit and
                f.codigo_emp = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 6;
 sqlstm.stmt = "select (nit||digito) ,ctacte ,to_char(fecha_has,'yymmdd') in\
to :b0,:b1,:b2  from nomfijos f ,nits n where (f.codigo_nit=n.codigo_nit and f\
.codigo_emp=:b3)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)234;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nite;
 sqlstm.sqhstl[0] = (unsigned long  )8;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&xctacte;
 sqlstm.sqhstl[1] = (unsigned long  )22;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&fechat;
 sqlstm.sqhstl[2] = (unsigned long  )8;
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


 staora  = sqlca.sqlcode;

 if (staora == -1405) {
    staora = 0;
 }
 if (staora) {
    fprintf (stderr, "Error leyendo C3 (%d)\n", staora);
    exit   (1);
 }
 xctacte.arr      [xctacte.len]     = '\0';
 fechat.arr       [fechat.len]      = '\0';

 if ((fp1 = fopen("nominac", "w")) == NULL) {
     fprintf (stderr,"Error abriendo archivo pipe \n");
     exit (1);
 }

 cadena[0]='\0';
 j=0;
 for(i=0;i<strlen(xctacte.arr);++i) {
     if (xctacte.arr[i] != '-') {
        cadena[j]=xctacte.arr[i];
        ++j;
     }
 }
 cadena[j]='\0';

 if (!strcmp(codigo_emp.arr,"22"))  {
    fprintf(fp1,"%s","1");
    fprintf(fp1,"%010.0f%s%s",nite,"KOOMBEA LIMITADA","225");
    fprintf(fp1,"%s","P.QUINCENA");
    fprintf(fp1,"%s%s%s",fechat.arr,"A",fechat.arr);
    fprintf(fp1,"%06d",nconsec);
    fprintf(fp1,"%s%012.0f","000000000000",ntotal);
    fprintf(fp1,"%s%s",cadena,"D");
    fprintf(fp1,"%s\n","                                                                                                                                    ");
    }
 else {
    fprintf(fp1,"%s","RC");
    fprintf(fp1,"%016.0f%s%s",nite,"NOMI",csubsrv);
    fprintf(fp1,"%s%s%s%s%016.0f00%06d","00",cadena,"CA","000051",ntotal,nconsec);
    fprintf(fp1,"%s","00000000");
    fprintf(fp1,"%s","000000");
    fprintf(fp1,"%s","0000");
    fprintf(fp1,"%s","9999");
    fprintf(fp1,"%s","00000000");
    fprintf(fp1,"%s","000000");
    fprintf(fp1,"%s","00");
    fprintf(fp1,"%s","01");
    fprintf(fp1,"%s","000000000589");
    fprintf(fp1,"%s","0000");
    fprintf(fp1,"%s\n","0000000000000000000000000000000000000000");
    }
 fclose(fp1);
}

void regtraslado()
{
   cadena[0]='\0';
   j=0;
   for(i=0;i<strlen(ctacte.arr);++i) {
       if (ctacte.arr[i] != '-') {
          cadena[j]=ctacte.arr[i];
          ++j;
       }
   }
   cadena[j]='\0';
 if (!strcmp(codigo_emp.arr,"22")) {
    fprintf(fp1,"%s%015.0f","6",nit);
//NOMBRE 18
    fprintf(fp1,"%-18s",nombre.arr);
    fprintf(fp1,"%s","005600078");
//BCO CUENTA BENEFICIARIO 9
    fprintf(fp1,"%s%s%s","000",cadena,"  S");
    if (!strcmp(tipocta.arr,"CA"))
        fprintf(fp1,"%s","37");
    else
        fprintf(fp1,"%s","27");
    fprintf(fp1,"%010.0f",ndeven-ndeduc);
    fprintf(fp1,"%s","000000000");
    fprintf(fp1,"%s\n","000000000000 ");
    }
 else {
    fprintf(fp1,"%s%016.0f","TR",nit);
    fprintf(fp1,"0000000000000000");
    fprintf(fp1,"%s%s%s%s","0000",cadena,tipocta.arr,"000051");
    fprintf(fp1,"%016.0f00",ndeven-ndeduc);
    fprintf(fp1,"%s","000000");
    fprintf(fp1,"%s","02");
    fprintf(fp1,"%s","0");
    fprintf(fp1,"%s","9999");
    fprintf(fp1,"%s","0000000000000000000000000000000000000000");
    fprintf(fp1,"%s","000000000000000000");
    fprintf(fp1,"%s","00000000");
    fprintf(fp1,"%s","0000");
    fprintf(fp1,"%s","0000");
    fprintf(fp1,"%s\n","0000000");
    }
   ntotal  = ntotal + ndeven-ndeduc;
   ndeven  = ndeduc = 0;
   ++nconsec;
}
