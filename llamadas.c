
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
    ".\\llamadas.pc"
};


static const unsigned long sqlctx = 1217256129;


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
   unsigned char    *sqhstv[10];
   unsigned long    sqhstl[10];
	    short   *sqindv[10];
   unsigned long    sqharm[10];
   unsigned long     *sqharc[10];
} sqlstm = {8,10};

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
"select o.nit ,o.factura ,origen ,substr(to_char(decode(substr(plan,1,9),'Red\
In 800',o.linea_que_paga,o.destino)),(length(to_char(decode(substr(plan,1,9),'\
RedIn 800',o.linea_que_paga,o.destino)))-(d.digitos-1)),d.digitos) ,d.codigo ,\
o.consumo_descuento  from orbitel o ,destinos d where (rtrim(decode(substr(pla\
n,1,9),'RedIn 800',o.ciudad_org,o.ciudad_des))=d.nombre and o.factura=:b0) ord\
er by o.fecha            ";
 static const char *sq0010 = 
"select codigo_nit  from telefonos where (numero=:b0 and codigo_ciu=:b1)     \
      ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,115,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,413,0,9,153,0,1,1,0,1,0,1,9,0,0,
46,0,0,2,0,0,15,157,0,0,0,0,1,0,
60,0,0,3,0,0,30,159,0,0,0,0,1,0,
74,0,0,4,138,0,4,172,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
104,0,0,5,71,0,3,186,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
134,0,0,6,117,0,5,193,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
164,0,0,2,0,0,13,200,0,6,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,
0,
202,0,0,7,144,0,4,204,0,4,1,0,1,0,2,4,0,0,2,3,0,0,2,3,0,0,1,9,0,0,
232,0,0,8,55,0,4,216,0,1,0,0,1,0,2,3,0,0,
250,0,0,9,230,0,3,221,0,10,10,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
4,0,0,1,9,0,0,1,9,0,0,1,3,0,0,1,9,0,0,
304,0,0,10,82,0,9,246,0,2,2,0,1,0,1,4,0,0,1,9,0,0,
326,0,0,10,0,0,13,248,0,1,0,0,1,0,2,3,0,0,
344,0,0,10,0,0,15,260,0,0,0,0,1,0,
358,0,0,11,149,0,3,265,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,
0,0,1,4,0,0,1,3,0,0,
404,0,0,2,0,0,13,273,0,6,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,9,0,0,2,4,0,
0,
};


/*****************************************************************
* DEPRECIA.C Version 1.0 - Rev 1.2 - Nov. 30/97.
*
* deprecia.c. Apropiacion para Depreciaciones.
*
* Uso: deprecia codigo_emp aamm device copias userid/password\n");
*
* Martin A. Toloza L. Creado en Noviembre 27 de 1.997.
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
void hacer_asiento();
void ver_inf();


/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Empresa (C1) */
double  nit;
int     codigo_nit;
int     digito;
/* VARCHAR codigo_emp  [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

/* VARCHAR consecutivob[07]; */ 
struct { unsigned short len; unsigned char arr[7]; } consecutivob;

/* VARCHAR secuenciab  [7]; */ 
struct { unsigned short len; unsigned char arr[7]; } secuenciab;

/* VARCHAR codigo_nitb [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_nitb;

/* VARCHAR facturab    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } facturab;

                                 /* Control_Mes (C5) */
double  consecutivo;
/* VARCHAR fuenteb     [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } fuenteb;

                                 /* Acumulados (C6) */
double  valor;
/* VARCHAR valor_fac   [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } valor_fac;

/* VARCHAR ano_mes     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

/* VARCHAR sucursal    [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } sucursal;

/* VARCHAR fecha       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha;

/* VARCHAR ciudad_des  [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } ciudad_des;

int     piva;
/* VARCHAR valiva      [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } valiva;

double  pfactu;
double  origen;
double  destino;
double  vlr_consumo;


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

				     /* Parametros de comunicacion con ORACLE */
                                            /* Variables globales del usuario */
char    pagina[4];                                   /* Contador de Paginas */
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                  /* Contador de Lineas  */
int     cl;
int     staora     =0;
int     traidos    =0;
int     num_ret    =0;
int     loop_2     =0;
double  secuencia  =0;
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[100];
double  nitn;
char    cadena[100];
char    login[30];

void main(argc, argv)
int     argc;
char    *argv[];
{

int	status = 0;

    if (argc < 6)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : codigo_emp sucursal fecha(aaaammdd) valor_factura factura valor_iva userid/password\n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (codigo_emp.arr, argv[1]);
       codigo_emp.len =        strlen(codigo_emp.arr);
       strcpy (sucursal.arr,   argv[2]);
       sucursal.len =          strlen(sucursal.arr);
       strcpy (fecha.arr,      argv[3]);
       fecha.len =             strlen(fecha.arr);
       strcpy (valor_fac.arr,  argv[4]);
       valor_fac.len =         strlen(valor_fac.arr);
       strcpy (facturab.arr,   argv[5]);
       facturab.len  =         strlen(facturab.arr);
       strcpy (valiva.arr,     argv[6]);
       valiva.len    =         strlen(valiva.arr);

    if (!strpos ("/", argv[7]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,    argv[7]);
    uid.len =           strlen(uid.arr);

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

/*********************************************
 * Procesar una sentencia SQL (oexec).       *
 *********************************************/

    strcpy (ano_mes.arr,argv[3]);
    ano_mes.len = strlen(ano_mes.arr);
    strorg (ano_mes.arr,1,6);
    ano_mes.len = strlen(ano_mes.arr);

    /* EXEC SQL DECLARE C6 CURSOR FOR
             select o.nit, o.factura,origen,
                    substr(to_char(decode(substr(plan,1,9),'RedIn 800',o.linea_que_paga,o.destino)),
                    length(to_char(decode(substr(plan,1,9),'RedIn 800',o.linea_que_paga,o.destino)))-(d.digitos-1),d.digitos),
                    d.codigo,
                    o.consumo_descuento
             from   orbitel o, destinos d
             where  rtrim(decode(substr(plan,1,9),'RedIn 800',o.ciudad_org,o.ciudad_des)) = d.nombre and
                    o.factura = :facturab
             order by o.fecha; */ 


    /* EXEC SQL OPEN C6; */ 

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
    sqlstm.sqhstv[0] = (unsigned char  *)&facturab;
    sqlstm.sqhstl[0] = (unsigned long  )22;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    hacer_asiento();

    /* EXEC SQL CLOSE C6; */ 

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



    /* EXEC SQL COMMIT WORK RELEASE; */ 

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



    exit   (0);
}

void hacer_asiento()
{

  strcpy(fuenteb.arr,"08");
  fuenteb.len = strlen(fuenteb.arr);

  /* Lee consecutivo de Control_mes Fte 08 sgte consecutivo */

  /* EXEC SQL select consecutivo+1
           into  :consecutivo
           from  control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mes)       and
                 codigo_emp   = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 4;
  sqlstm.stmt = "select (consecutivo+1) into :b0  from control_mes where ((f\
uente=to_number(:b1) and ano_mes=to_number(:b2)) and codigo_emp=to_number(:b3)\
)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)74;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&consecutivo;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&fuenteb;
  sqlstm.sqhstl[1] = (unsigned long  )5;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&ano_mes;
  sqlstm.sqhstl[2] = (unsigned long  )22;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[3] = (unsigned long  )5;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes 08 (%d)\n", sqlca.sqlcode);
      consecutivo=1;
      sprintf(consecutivob.arr,"%5.0f",consecutivo);
      consecutivob.len = strlen(consecutivob.arr);
               /* Inserta en Control_Mes Fte 08 si no existe (C11) */
      /* EXEC SQL insert into control_mes
               values (:fuenteb, :ano_mes, 'CONTROL CONTABILIDAD',:consecutivob, :codigo_emp); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 4;
      sqlstm.stmt = "insert into control_mes values (:b0,:b1,'CONTROL CONTAB\
ILIDAD',:b2,:b3)";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)104;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&fuenteb;
      sqlstm.sqhstl[0] = (unsigned long  )5;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
      sqlstm.sqhstl[1] = (unsigned long  )22;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
      sqlstm.sqhstl[2] = (unsigned long  )9;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned long  )5;
      sqlstm.sqindv[3] = (         short *)0;
      sqlstm.sqharm[3] = (unsigned long )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


     }
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo);
        consecutivob.len = strlen(consecutivob.arr);
               /* Actualiza Cns de Fte 08 en control_mes (C12) */
        /* EXEC SQL update control_mes
                 set    consecutivo = :consecutivob
                 where ano_mes      = to_number(:ano_mes)      and
                       fuente       = :fuenteb                 and
                       codigo_emp   = to_number(:codigo_emp); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 4;
        sqlstm.stmt = "update control_mes  set consecutivo=:b0 where ((ano_m\
es=to_number(:b1) and fuente=:b2) and codigo_emp=to_number(:b3))";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)134;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&consecutivob;
        sqlstm.sqhstl[0] = (unsigned long  )9;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
        sqlstm.sqhstl[1] = (unsigned long  )22;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&fuenteb;
        sqlstm.sqhstl[2] = (unsigned long  )5;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[3] = (unsigned long  )5;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  }

  /* EXEC SQL FETCH C6 INTO nit, pfactu, origen, destino,
                         ciudad_des, vlr_consumo; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 6;
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)164;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&nit;
  sqlstm.sqhstl[0] = (unsigned long  )8;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&pfactu;
  sqlstm.sqhstl[1] = (unsigned long  )8;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&origen;
  sqlstm.sqhstl[2] = (unsigned long  )8;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&destino;
  sqlstm.sqhstl[3] = (unsigned long  )8;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&ciudad_des;
  sqlstm.sqhstl[4] = (unsigned long  )42;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&vlr_consumo;
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


  ciudad_des.arr [ciudad_des.len] = '\0';

  /* EXEC SQL select n.nit, n.digito, n.codigo_nit
           into   :nit, :digito, :codigo_nit
           from   nits n, empresas e
           where  n.codigo_nit = e.codigo_nit and
                  e.codigo_emp = to_number(:codigo_emp); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 6;
  sqlstm.stmt = "select n.nit ,n.digito ,n.codigo_nit into :b0,:b1,:b2  from\
 nits n ,empresas e where (n.codigo_nit=e.codigo_nit and e.codigo_emp=to_numbe\
r(:b3))";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)202;
  sqlstm.selerr = (unsigned short)1;
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
  sqlstm.sqhstv[2] = (unsigned char  *)&codigo_nit;
  sqlstm.sqhstl[2] = (unsigned long  )4;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[3] = (unsigned long  )5;
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
        fprintf (stderr, "Error leyendo Empresa (%d)\n", sqlca.sqlcode);

  sprintf(codigo_nitb.arr,"%5d",codigo_nit);
  codigo_nitb.len = strlen(codigo_nitb.arr);

  /* EXEC SQL select 16
           into   :piva
           from   control_fac
           where  codigo_emp = 1; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 6;
  sqlstm.stmt = "select 16 into :b0  from control_fac where codigo_emp=1";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)232;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&piva;
  sqlstm.sqhstl[0] = (unsigned long  )4;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  /* EXEC SQL insert into llamadas_c
           (CODIGO_EMP,ANO_MES,CONSECUTIVO,FECHA,CODIGO_NIT,FACTURA,TELEFONO,VALOR,ESTADO,SUCURSAL,VALOR_EPL,VALOR_PUB,PTAJE_IVA,VALOR_IVA)
           values(:codigo_emp, :ano_mes, :consecutivob, to_date(:fecha,'yyyymmdd'), 6755,
                  :facturab, :origen, :valor_fac, 0, :sucursal, 0, 0, :piva, :valiva); */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 10;
  sqlstm.stmt = "insert into llamadas_c(CODIGO_EMP,ANO_MES,CONSECUTIVO,FECHA\
,CODIGO_NIT,FACTURA,TELEFONO,VALOR,ESTADO,SUCURSAL,VALOR_EPL,VALOR_PUB,PTAJE_I\
VA,VALOR_IVA) values (:b0,:b1,:b2,to_date(:b3,'yyyymmdd'),6755,:b4,:b5,:b6,0,:\
b7,0,0,:b8,:b9)";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)250;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned long  )5;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
  sqlstm.sqhstl[1] = (unsigned long  )22;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
  sqlstm.sqhstl[2] = (unsigned long  )9;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&fecha;
  sqlstm.sqhstl[3] = (unsigned long  )22;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&facturab;
  sqlstm.sqhstl[4] = (unsigned long  )22;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&origen;
  sqlstm.sqhstl[5] = (unsigned long  )8;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqhstv[6] = (unsigned char  *)&valor_fac;
  sqlstm.sqhstl[6] = (unsigned long  )22;
  sqlstm.sqindv[6] = (         short *)0;
  sqlstm.sqharm[6] = (unsigned long )0;
  sqlstm.sqhstv[7] = (unsigned char  *)&sucursal;
  sqlstm.sqhstl[7] = (unsigned long  )22;
  sqlstm.sqindv[7] = (         short *)0;
  sqlstm.sqharm[7] = (unsigned long )0;
  sqlstm.sqhstv[8] = (unsigned char  *)&piva;
  sqlstm.sqhstl[8] = (unsigned long  )4;
  sqlstm.sqindv[8] = (         short *)0;
  sqlstm.sqharm[8] = (unsigned long )0;
  sqlstm.sqhstv[9] = (unsigned char  *)&valiva;
  sqlstm.sqhstl[9] = (unsigned long  )22;
  sqlstm.sqindv[9] = (         short *)0;
  sqlstm.sqharm[9] = (unsigned long )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
      fprintf (stderr, "Error grabando llamadas_c (%d)\n", sqlca.sqlcode);

  /* EXEC SQL DECLARE C7 CURSOR FOR
           select codigo_nit
           from   telefonos
           where  numero     = :destino and
                  codigo_ciu = :ciudad_des; */ 


  staora  = 0;

  while (staora == 0) {

        ciudad_des.arr  [ciudad_des.len]  = '\0';
        secuencia++;

        sprintf(secuenciab.arr,"%6.0f",secuencia);
        secuenciab.len = strlen(secuenciab.arr);


        /* EXEC SQL OPEN C7; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 10;
        sqlstm.stmt = sq0010;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)304;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&destino;
        sqlstm.sqhstl[0] = (unsigned long  )8;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&ciudad_des;
        sqlstm.sqhstl[1] = (unsigned long  )42;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        /* EXEC SQL FETCH C7 INTO codigo_nit; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 10;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)326;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codigo_nit;
        sqlstm.sqhstl[0] = (unsigned long  )4;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        if (sqlca.sqlcode == 1403 || sqlca.sqlcode != 0) {
           if ( sqlca.sqlcode == -2112) {
              fprintf (stderr, "Warning, encontro varios registros con el mismo telefono (%d)\n", sqlca.sqlcode);
           }
           else {
//            fprintf (stderr, "Error leyendo telefonos (%d)\n", sqlca.sqlcode);
              codigo_nit=0;
           }
        }

        /* EXEC SQL CLOSE C7; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 10;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)344;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        sprintf(codigo_nitb.arr,"%5d",codigo_nit);
        codigo_nitb.len = strlen(codigo_nitb.arr);

        /* EXEC SQL insert into llamadas_d
                 (CODIGO_EMP,ANO_MES,CONSECUTIVO,SECUENCIA,CODIGO_CIU,NUMERO,VALOR,ESTADO,CODIGO_NIT)
                 values(:codigo_emp, :ano_mes, :consecutivob, :secuenciab,
                        :ciudad_des, :destino, :vlr_consumo, 0, :codigo_nit); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 10;
        sqlstm.stmt = "insert into llamadas_d(CODIGO_EMP,ANO_MES,CONSECUTIVO\
,SECUENCIA,CODIGO_CIU,NUMERO,VALOR,ESTADO,CODIGO_NIT) values (:b0,:b1,:b2,:b3,\
:b4,:b5,:b6,0,:b7)";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)358;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
        sqlstm.sqhstl[0] = (unsigned long  )5;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&ano_mes;
        sqlstm.sqhstl[1] = (unsigned long  )22;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&consecutivob;
        sqlstm.sqhstl[2] = (unsigned long  )9;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&secuenciab;
        sqlstm.sqhstl[3] = (unsigned long  )9;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&ciudad_des;
        sqlstm.sqhstl[4] = (unsigned long  )42;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqharm[4] = (unsigned long )0;
        sqlstm.sqhstv[5] = (unsigned char  *)&destino;
        sqlstm.sqhstl[5] = (unsigned long  )8;
        sqlstm.sqindv[5] = (         short *)0;
        sqlstm.sqharm[5] = (unsigned long )0;
        sqlstm.sqhstv[6] = (unsigned char  *)&vlr_consumo;
        sqlstm.sqhstl[6] = (unsigned long  )8;
        sqlstm.sqindv[6] = (         short *)0;
        sqlstm.sqharm[6] = (unsigned long )0;
        sqlstm.sqhstv[7] = (unsigned char  *)&codigo_nit;
        sqlstm.sqhstl[7] = (unsigned long  )4;
        sqlstm.sqindv[7] = (         short *)0;
        sqlstm.sqharm[7] = (unsigned long )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error Grabando llamadas_d (%d)\n", sqlca.sqlcode);

        /* EXEC SQL FETCH C6 INTO nit, pfactu, origen, destino,
                               ciudad_des, vlr_consumo; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 10;
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)404;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&nit;
        sqlstm.sqhstl[0] = (unsigned long  )8;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&pfactu;
        sqlstm.sqhstl[1] = (unsigned long  )8;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&origen;
        sqlstm.sqhstl[2] = (unsigned long  )8;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqhstv[3] = (unsigned char  *)&destino;
        sqlstm.sqhstl[3] = (unsigned long  )8;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&ciudad_des;
        sqlstm.sqhstl[4] = (unsigned long  )42;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqharm[4] = (unsigned long )0;
        sqlstm.sqhstv[5] = (unsigned char  *)&vlr_consumo;
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



        ciudad_des.arr [ciudad_des.len] = '\0';
        staora  = sqlca.sqlcode;

        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo C6 (%d)\n", sqlca.sqlcode);
  }
}
