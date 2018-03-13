
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
    ".\\saldbcodia.pc"
};


static const unsigned long sqlctx = 1280417041;


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
   unsigned char    *sqhstv[14];
   unsigned long    sqhstl[14];
	    short   *sqindv[14];
   unsigned long    sqharm[14];
   unsigned long     *sqharc[14];
} sqlstm = {8,14};

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
"select codigo_emp ,codigo_bco ,nombre_corto ,cta_cte ,columna ,acumula ,salt\
o ,texto1 ,nvl(salto1,0) ,texto2 ,nvl(salto2,0) ,texto3 ,nvl(salto3,0) ,divisi\
on  from bancosq where (substr(nombre_corto,1,7)<>'FORMULA' and visible_excel \
in (0,2)) order by secuencia            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,101,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,272,0,9,135,0,0,0,0,1,0,
42,0,0,2,0,0,13,144,0,14,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,
0,2,3,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,3,0,0,2,9,0,0,
112,0,0,2,0,0,15,199,0,0,0,0,1,0,
126,0,0,3,0,0,30,201,0,0,0,0,1,0,
140,0,0,4,237,0,4,225,0,4,3,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
170,0,0,5,621,0,4,241,0,8,7,0,1,0,2,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,9,0,0,1,9,0,0,
};


/*****************************************************************
* SALDBCODIA.C Version 1.0 - Rev 1.2 - Dic. 20/93.
*
* saldobcodia.pc. Listado de los saldos de bancos
*
* Uso : saldbcodia copias device userid/password
*
* Martin A. Toloza L. Creado Diciembre 16-1997.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void listado();
void saltar(int s);
				     /* Parametros de comunicacion con ORACLE */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;
 
                                 /* Bancosq (C1) */
/* VARCHAR codigo_emp_q[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp_q;

/* VARCHAR codigo_bco_q[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_bco_q;

/* VARCHAR nombre_corto[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } nombre_corto;

/* VARCHAR cta_cte_q   [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cta_cte_q;

int     columna;
/* VARCHAR acumula     [2]; */ 
struct { unsigned short len; unsigned char arr[2]; } acumula;

int     salto1;
/* VARCHAR texto1      [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } texto1;

int     saltd1;
/* VARCHAR texto2      [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } texto2;

int     saltd2;
/* VARCHAR texto3      [15]; */ 
struct { unsigned short len; unsigned char arr[15]; } texto3;

int     saltd3;
/* VARCHAR division    [2]; */ 
struct { unsigned short len; unsigned char arr[2]; } division;

char    texto       [3][15];
int     salto       [4];
                                 /* Bancosm (C2) */
double  saldo;
/* VARCHAR codigo_emp  [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

/* VARCHAR codigo_bco  [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_bco;

/* VARCHAR cta_cte     [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cta_cte;

                                 /* Movtos (C3) */
double  valor_chq;

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
char    pagina[4];                                   /* Contador de Paginas */
int     con_pag=0;                                   /* Contador de Paginas */
int     con_lin=66;                                  /* Contador de Lineas  */
int     cl;
int     columna_ant=0;
int     staora =0;
        		                /* Variables de recepcion para datos */
char *fmtnum(), r_t[100];
char    cadena[255];
char    copias[5];

char    cad1[3][5][20];
int     s;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
char    fecha[30];
int	status = 0;

    if (argc < 3)
       {
	printf ("Incorrecta invocacion:\n");
        printf ("Uso : saldbcodia\n");
        printf ("      device : t salida por terminal\n");
	printf ("               s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }
       strcpy (device,         argv[1]);
       strlow (device);

    if (!strpos ("/", argv[2]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,  argv[2]);
    uid.len   =       strlen(uid.arr);
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
    abre_impresora("1");

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/

    /* EXEC SQL DECLARE C1 CURSOR FOR
             select codigo_emp, codigo_bco, nombre_corto, cta_cte,
                    columna, acumula, salto, texto1, nvl(salto1,0),
                    texto2, nvl(salto2,0), texto3,
                    nvl(salto3,0), division
             from   bancosq
             where  substr(nombre_corto,1,7) <> 'FORMULA' and
                    visible_excel in (0,2)
             order  by secuencia; */ 

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
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    strcpy (fecha, "");
    fecha_system(fecha);

    fprintf (fp, "%s%s%s\n-------------------\n\n",fecha,diezcpi,line_feed8vo);
    staora  = 0;
    while (staora == 0) {

           /* EXEC SQL FETCH C1 INTO :codigo_emp_q, :codigo_bco_q, :nombre_corto,
                                  :cta_cte_q, :columna, :acumula, :salto1,
                                  :texto1, :saltd1, :texto2, :saltd2,
                                  :texto3, :saltd3, :division; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 8;
           sqlstm.arrsiz = 14;
           sqlstm.iters = (unsigned long  )1;
           sqlstm.offset = (unsigned short)42;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)0;
           sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp_q;
           sqlstm.sqhstl[0] = (unsigned long  )5;
           sqlstm.sqindv[0] = (         short *)0;
           sqlstm.sqharm[0] = (unsigned long )0;
           sqlstm.sqhstv[1] = (unsigned char  *)&codigo_bco_q;
           sqlstm.sqhstl[1] = (unsigned long  )5;
           sqlstm.sqindv[1] = (         short *)0;
           sqlstm.sqharm[1] = (unsigned long )0;
           sqlstm.sqhstv[2] = (unsigned char  *)&nombre_corto;
           sqlstm.sqhstl[2] = (unsigned long  )22;
           sqlstm.sqindv[2] = (         short *)0;
           sqlstm.sqharm[2] = (unsigned long )0;
           sqlstm.sqhstv[3] = (unsigned char  *)&cta_cte_q;
           sqlstm.sqhstl[3] = (unsigned long  )12;
           sqlstm.sqindv[3] = (         short *)0;
           sqlstm.sqharm[3] = (unsigned long )0;
           sqlstm.sqhstv[4] = (unsigned char  *)&columna;
           sqlstm.sqhstl[4] = (unsigned long  )4;
           sqlstm.sqindv[4] = (         short *)0;
           sqlstm.sqharm[4] = (unsigned long )0;
           sqlstm.sqhstv[5] = (unsigned char  *)&acumula;
           sqlstm.sqhstl[5] = (unsigned long  )4;
           sqlstm.sqindv[5] = (         short *)0;
           sqlstm.sqharm[5] = (unsigned long )0;
           sqlstm.sqhstv[6] = (unsigned char  *)&salto1;
           sqlstm.sqhstl[6] = (unsigned long  )4;
           sqlstm.sqindv[6] = (         short *)0;
           sqlstm.sqharm[6] = (unsigned long )0;
           sqlstm.sqhstv[7] = (unsigned char  *)&texto1;
           sqlstm.sqhstl[7] = (unsigned long  )17;
           sqlstm.sqindv[7] = (         short *)0;
           sqlstm.sqharm[7] = (unsigned long )0;
           sqlstm.sqhstv[8] = (unsigned char  *)&saltd1;
           sqlstm.sqhstl[8] = (unsigned long  )4;
           sqlstm.sqindv[8] = (         short *)0;
           sqlstm.sqharm[8] = (unsigned long )0;
           sqlstm.sqhstv[9] = (unsigned char  *)&texto2;
           sqlstm.sqhstl[9] = (unsigned long  )17;
           sqlstm.sqindv[9] = (         short *)0;
           sqlstm.sqharm[9] = (unsigned long )0;
           sqlstm.sqhstv[10] = (unsigned char  *)&saltd2;
           sqlstm.sqhstl[10] = (unsigned long  )4;
           sqlstm.sqindv[10] = (         short *)0;
           sqlstm.sqharm[10] = (unsigned long )0;
           sqlstm.sqhstv[11] = (unsigned char  *)&texto3;
           sqlstm.sqhstl[11] = (unsigned long  )17;
           sqlstm.sqindv[11] = (         short *)0;
           sqlstm.sqharm[11] = (unsigned long )0;
           sqlstm.sqhstv[12] = (unsigned char  *)&saltd3;
           sqlstm.sqhstl[12] = (unsigned long  )4;
           sqlstm.sqindv[12] = (         short *)0;
           sqlstm.sqharm[12] = (unsigned long )0;
           sqlstm.sqhstv[13] = (unsigned char  *)&division;
           sqlstm.sqhstl[13] = (unsigned long  )4;
           sqlstm.sqindv[13] = (         short *)0;
           sqlstm.sqharm[13] = (unsigned long )0;
           sqlstm.sqphsv = sqlstm.sqhstv;
           sqlstm.sqphsl = sqlstm.sqhstl;
           sqlstm.sqpind = sqlstm.sqindv;
           sqlstm.sqparm = sqlstm.sqharm;
           sqlstm.sqparc = sqlstm.sqharc;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


           staora  = sqlca.sqlcode;
           if (staora == 1403) break;

           if (staora == -1405 ) {
               staora  = 0;
               if (!strlen(nombre_corto.arr)) {
                   strcpy (nombre_corto.arr, "");
                   nombre_corto.len = 0;
               }
               if (!strlen(texto1.arr)) {
                   strcpy (texto1.arr, "");
                   texto1.len = 0;
               }
               if (!strlen(texto2.arr)) {
                   strcpy (texto2.arr, "");
                   texto2.len = 0;
               }
               if (!strlen(texto3.arr)) {
                   strcpy (texto3.arr, "");
                   texto3.len = 0;
               }
               if (!strlen(division.arr)) {
                   strcpy (division.arr, "");
                   division.len = 0;
               }
           }
           else if (staora)
                    fprintf (stderr, "Error leyendo C1 (%d)\n", staora);

           codigo_emp_q.arr  [codigo_emp_q.len] = '\0';
           codigo_bco_q.arr  [codigo_bco_q.len] = '\0';
           nombre_corto.arr  [nombre_corto.len] = '\0';
           cta_cte_q.arr     [cta_cte_q.len]    = '\0';
           acumula.arr       [acumula.len]      = '\0';
           texto1.arr        [texto1.len]       = '\0';
           texto2.arr        [texto2.len]       = '\0';
           texto3.arr        [texto3.len]       = '\0';
           division.arr      [division.len]     = '\0';
           strcpy (texto[0], texto1.arr);
           salto[0] = saltd1;
           strcpy (texto[1], texto2.arr);
           salto[1] = saltd2;
           strcpy (texto[2], texto3.arr);
           salto[2] = saltd3;

           listado();
    }
    fprintf (fp, "%s%s",salte_pagina,line_feed6);

    cierre_impresora();

    /* EXEC SQL CLOSE C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 14;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)112;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 14;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)126;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    
    exit   (0);
}

void listado()
{
  int i=0,j=0,k=0;
  if (columna-columna_ant > 1) {
      strful(cadena,(columna-columna_ant-1)*20,' ');
      fprintf (fp,"%s",cadena);
  }
  fprintf (fp,"%s%s%-11s%s%9s",line_feed8vo,enfatizado_on,nombre_corto.arr,enfatizado_off," ");
  
  columna_ant=columna;
  saldo=0;
  if (!strcmp(acumula.arr,"S")) {
      strcpy(codigo_emp.arr,codigo_emp_q.arr);
      codigo_emp.len = strlen(codigo_emp.arr);
      strcpy(codigo_bco.arr,codigo_bco_q.arr);
      codigo_bco.len = strlen(codigo_bco.arr);
      strcpy(cta_cte.arr,cta_cte_q.arr);
      cta_cte.len    = strlen(cta_cte.arr);

      /* EXEC SQL select saldo into :saldo
               from   bancosm b
               where  b.codigo_emp          = :codigo_emp     and
                      b.codigo_bco          = :codigo_bco     and
                      b.cta_cte             = :cta_cte        and
                      ano_mes               =
                      (select max(ano_mes)
                       from   bancosm
                       where  codigo_emp    = b.codigo_emp    and
                              codigo_bco    = b.codigo_bco    and
                              cta_cte       = b.cta_cte); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 14;
      sqlstm.stmt = "select saldo into :b0  from bancosm b where (((b.codigo\
_emp=:b1 and b.codigo_bco=:b2) and b.cta_cte=:b3) and ano_mes=(select max(ano_\
mes)  from bancosm where ((codigo_emp=b.codigo_emp and codigo_bco=b.codigo_bco\
) and cta_cte=b.cta_cte)))";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)140;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&saldo;
      sqlstm.sqhstl[0] = (unsigned long  )8;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
      sqlstm.sqhstl[1] = (unsigned long  )5;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&codigo_bco;
      sqlstm.sqhstl[2] = (unsigned long  )5;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&cta_cte;
      sqlstm.sqhstl[3] = (unsigned long  )12;
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
          fprintf (stderr, "Error leyendo C2 (%d)\n", sqlca.sqlcode);
/*
Cheques posfechados
*/
      /* EXEC SQL select nvl(sum(valor_cre),0) into :valor_chq
               from   movto_d d, movto_c c
               where  d.infa        =        :cta_cte                      and
                      cuenta        = (select cuenta
                                       from   bancos
                                       where  codigo     = :codigo_bco     and
                                              codigo_emp = :codigo_emp     and
                                              tipo      != 'E')            and
                      c.fecha      <= (select last_day(to_date(max(ano_mes),lpad('mm',4,'y')))
                                       from   bancosm
                                       where  codigo_emp = :codigo_emp     and
                                              codigo_bco = :codigo_bco     and
                                              cta_cte    = :cta_cte)       and
                      c.fecha      < to_date(d.infd,'DD-MON-YYYY')         and
                      SYSDATE      < to_date(d.infd,'DD-MON-YYYY')         and
                      c.codigo_emp  =  :codigo_emp                         and
                      c.codigo_emp  = d.codigo_emp                         and
                      c.ano_mes     = d.ano_mes                            and
                      c.consecutivo = d.consecutivo                        and
                      d.valor_cre   is NOT NULL                            and
                      clase         = 'EG'                                 and
                      c.fecha      >= to_date(20010101,'yyyymmdd'); */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 8;
      sqlstm.arrsiz = 14;
      sqlstm.stmt = "select nvl(sum(valor_cre),0) into :b0  from movto_d d ,\
movto_c c where (((((((((((d.infa=:b1 and cuenta=(select cuenta  from bancos w\
here ((codigo=:b2 and codigo_emp=:b3) and tipo<>'E'))) and c.fecha<=(select la\
st_day(to_date(max(ano_mes),lpad('mm',4,'y')))  from bancosm where ((codigo_em\
p=:b3 and codigo_bco=:b2) and cta_cte=:b1))) and c.fecha<to_date(d.infd,'DD-MO\
N-YYYY')) and sysdate <to_date(d.infd,'DD-MON-YYYY')) and c.codigo_emp=:b3) an\
d c.codigo_emp=d.codigo_emp) and c.ano_mes=d.ano_mes) and c.consecutivo=d.cons\
ecutivo) and d.valor_cre is  not null ) and clase='EG') and c.fecha>=to_date(2\
0010101,'yyyymmdd'))";
      sqlstm.iters = (unsigned long  )1;
      sqlstm.offset = (unsigned short)170;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)0;
      sqlstm.sqhstv[0] = (unsigned char  *)&valor_chq;
      sqlstm.sqhstl[0] = (unsigned long  )8;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqhstv[1] = (unsigned char  *)&cta_cte;
      sqlstm.sqhstl[1] = (unsigned long  )12;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&codigo_bco;
      sqlstm.sqhstl[2] = (unsigned long  )5;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqhstv[3] = (unsigned char  *)&codigo_emp;
      sqlstm.sqhstl[3] = (unsigned long  )5;
      sqlstm.sqindv[3] = (         short *)0;
      sqlstm.sqharm[3] = (unsigned long )0;
      sqlstm.sqhstv[4] = (unsigned char  *)&codigo_emp;
      sqlstm.sqhstl[4] = (unsigned long  )5;
      sqlstm.sqindv[4] = (         short *)0;
      sqlstm.sqharm[4] = (unsigned long )0;
      sqlstm.sqhstv[5] = (unsigned char  *)&codigo_bco;
      sqlstm.sqhstl[5] = (unsigned long  )5;
      sqlstm.sqindv[5] = (         short *)0;
      sqlstm.sqharm[5] = (unsigned long )0;
      sqlstm.sqhstv[6] = (unsigned char  *)&cta_cte;
      sqlstm.sqhstl[6] = (unsigned long  )12;
      sqlstm.sqindv[6] = (         short *)0;
      sqlstm.sqharm[6] = (unsigned long )0;
      sqlstm.sqhstv[7] = (unsigned char  *)&codigo_emp;
      sqlstm.sqhstl[7] = (unsigned long  )5;
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
          fprintf (stderr, "Error leyendo C3 (%d)\n", sqlca.sqlcode);
      sprintf(cadena,"%9.2f",saldo+valor_chq);
      fprintf (fp,"\r%15s%s"," ",fmtnum("zzzz,zzz,zzz.zz",cadena,r_t));
  }
  if (salto1 > 0) {
      saltar(salto1+1);
      columna_ant=0;
  }
  fprintf (fp,"%s",line_feed6);
  s=0;
  for (i=0;i<=2;i++) {
      if (salto[i] > 0) {
          if (strcmp(texto[i],"")){
             fprintf (fp,"%s",texto[i]);
             s=1;
          }
          saltar(salto[i]);
          columna_ant=0;
      }
      else {
            strcpy(cad1[i][columna],texto[i]);
      }
  }
  fprintf (fp,"%s",line_feed8vo);
  if (s==1)
     fprintf (fp,"\n");
  if (salto1 > 0) {
      i=0;
      for (i=0;i<=2;i++) {
          j=1;
          for (j=1;j<=4;j++) {
              if (strcmp(cad1[i][j],"")) {
                  fprintf (fp,"%s %-19s %-19s %-19s %-19s\n",line_feed6,cad1[i][1],cad1[i][2],cad1[i][3],cad1[i][4]);
                  j=5;
              }
          }
      }
      i=0;
      for (i=0;i<=2;i++) {
          j=1;
          for (j=1;j<=4;j++) {
              strcpy(cad1[i][j],"");
          }
      }
  }
  if (!strcmp(division.arr,"*")) {
      strful(cadena,80,'*');
      fprintf (fp,"%s",cadena);
      saltar(salto1+1);
  }
}

void saltar(s)
int s;
{
int i;
  if (s == 99)
     fprintf (fp,"\f");
  else {
     if (s > 0) {
         for (i=1;i<=s;i++) {
             fprintf (fp,"\n");
         }
     }
  }

}
