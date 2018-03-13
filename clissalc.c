
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
    ".\\clissalc.pc"
};


static const unsigned long sqlctx = 1035561264;


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
   unsigned char    *sqhstv[4];
   unsigned long    sqhstl[4];
	    short   *sqindv[4];
   unsigned long    sqharm[4];
   unsigned long     *sqharc[4];
} sqlstm = {8,4};

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
"select nombre ,nits.nit ,nvl(nits.digito,(-1)) ,clientem.saldoc  from client\
es ,clientem ,nits where (((((clientes.codigo_cliente=clientem.codigo_cliente \
and clientes.estado<>'R') and clientem.codigo_emp=:b0) and clientem.ano_mes=(s\
elect max(ano_mes)  from clientem cm where ((cm.codigo_emp=:b0 and cm.codigo_c\
liente=clientes.codigo_cliente) and cm.ano_mes<=:b2))) and clientes.codigo_nit\
=nits.codigo_nit) and clientem.saldoc<>0) order by clientes.codigo_cliente    \
        ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,100,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,0,0,15,168,0,0,0,0,1,0,
42,0,0,3,0,0,30,170,0,0,0,0,1,0,
56,0,0,4,115,0,4,181,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
78,0,0,2,474,0,9,190,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
104,0,0,2,0,0,13,195,0,4,0,0,1,0,2,9,0,0,2,4,0,0,2,3,0,0,2,4,0,0,
134,0,0,2,0,0,15,220,0,0,0,0,1,0,
};


/*****************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* clistsal.pc Programa que lista los saldos de clientes
*
* Uso : clistsal fecha_corte(AAAAMMDD) device copias userid/password
*
* Martin A. Toloza L. Creado Diciembre 19-1997.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void lista_empresa(int i);
void titulos();
void total();

double redondo();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;
 
                                 /* Clientes (C1) */
/* VARCHAR nomb_clie     [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_clie;

double  nit;
int     digito;
int     a2k;
double  saldo_cliente;
/* VARCHAR codigo_emp    [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

/* VARCHAR ano_mes       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } ano_mes;

                                 /* Empresas (C2) */
/* VARCHAR nomb_emp      [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_emp;


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
int     con_pag;                                   /* Contador de Paginas */
int     con_lin=66;                                /* Contador de Lineas  */
int	staora = 0;
char    copias[3];

double  saldo_total=0;
char    fecha_listado[60];
char    fecha_corte[20];
int     ano_corte;
int     mes_corte;
int     dia_corte;

char    cadena[100];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

if (argc < 5)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : clistsal fecha_corte(AAAAMMDD) device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (fecha_corte, argv[1]);
if ( strlen(fecha_corte) != 8 ) {
   printf("Error, la fecha de corte debe ser de 8 digitos y formato AAAAMMDD");
   exit (1);
}
strcpy (device,      argv[2]);
strlow (device);
strcpy (copias,      argv[3]);


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

  strcpy (ano_mes.arr,fecha_corte);
  strorg (ano_mes.arr,1,6);
  ano_mes.len = strlen(ano_mes.arr);

  strcpy(cadena,fecha_corte);
  strorg(cadena,7,2);
  dia_corte =  atoi(cadena);
  strcpy(cadena,fecha_corte);
  strorg(cadena,5,2);
  mes_corte =  atoi(cadena);
  strcpy(cadena,fecha_corte);
  strorg(cadena,1,4);
  ano_corte =  atoi(cadena);
  sprintf(cadena,"%d",ano_corte);
  fmtnum("zz,zzz",cadena,r_t);
  sprintf(fecha_listado,"%s %d %s%s",mes[mes_corte-1],dia_corte,"de",r_t);

    /* EXEC SQL DECLARE C1 CURSOR FOR
             select nombre, nits.nit, nvl(nits.digito,-1), clientem.saldoc
             from   clientes, clientem, nits
             where  clientes.codigo_cliente  = clientem.codigo_cliente and
                    clientes.estado         != 'R'                     and
                    clientem.codigo_emp      = :codigo_emp             and
                    clientem.ano_mes =
                    (select max(ano_mes)
                     from  clientem cm
                     where cm.codigo_emp     = :codigo_emp             and
                           cm.codigo_cliente = clientes.codigo_cliente and
                           cm.ano_mes       <= :ano_mes)               and
            clientes.codigo_nit              = nits.codigo_nit         and
            clientem.saldoc                 <> 0
            order by clientes.codigo_cliente; */ 


 lista_empresa(1);
 total();
 lista_empresa(3);
 total();
 con_pag=0;
 lista_empresa(2);
 total();

 cierre_impresora();

 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)28;
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
 sqlstm.offset = (unsigned short)42;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 exit   (0);
}

void lista_empresa(i)
int i;
{
 sprintf(codigo_emp.arr,"%d",i);
 codigo_emp.len  =  strlen(codigo_emp.arr);

 /* EXEC SQL select nombre into :nomb_emp
          from   empresas, nits
          where  empresas.codigo_nit = nits.codigo_nit and
                 empresas.codigo_emp = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.stmt = "select nombre into :b0  from empresas ,nits where (empresas.\
codigo_nit=nits.codigo_nit and empresas.codigo_emp=:b1)";
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)56;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&nomb_emp;
 sqlstm.sqhstl[0] = (unsigned long  )53;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned long  )5;
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
     fprintf (stderr, "Error leyendo Empresa (%d)\n", sqlca.sqlcode);

 nomb_emp.arr   [nomb_emp.len] = '\0';
 /* EXEC SQL OPEN C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 3;
 sqlstm.stmt = sq0002;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)78;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned long  )5;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned long  )5;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&ano_mes;
 sqlstm.sqhstl[2] = (unsigned long  )22;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 staora  = 0;
 while (staora == 0) {

       /* EXEC SQL FETCH C1 INTO :nomb_clie, :nit, :digito, :saldo_cliente; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 4;
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)104;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
       sqlstm.sqhstl[0] = (unsigned long  )53;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&nit;
       sqlstm.sqhstl[1] = (unsigned long  )8;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&digito;
       sqlstm.sqhstl[2] = (unsigned long  )4;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&saldo_cliente;
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
                fprintf (stderr, "Error leyendo C1 (%d)\n", staora);

       nomb_clie.arr   [nomb_clie.len] = '\0';
       if (con_lin > 60)
           titulos();
       sprintf (cadena,"%9.2f",nit);
       fprintf (fp,"%-45s %15s",nomb_clie.arr,fmtnum("zzz,zzz,zzz,zzz",cadena,r_t),fmtnum("z",cadena,r_t));
       if (digito >= 0) {
          sprintf (cadena,"%d",digito);
          fprintf (fp,"-%s",fmtnum("9",cadena,r_t));
       }
       else fprintf (fp,"  ");
       digito=0;
       saldo_total+=saldo_cliente;
       sprintf (cadena,"%12.2f",saldo_cliente);
       fprintf (fp," %18s\n",fmtnum("zz,zzz,zzz,zzz.zz",cadena,r_t));
       con_lin++;
 }
 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 8;
 sqlstm.arrsiz = 4;
 sqlstm.iters = (unsigned long  )1;
 sqlstm.offset = (unsigned short)134;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 con_pag++;
 fprintf (fp,"%s",salte_pagina);
 if (!strcmp(codigo_emp.arr,"3"))
     (strful(nomb_emp.arr,30,' '));
 strful(cadena,(int)(48-strlen(nomb_emp.arr))/2,' ');
 fprintf (fp,"%s%s%s%s%s\n\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
 fprintf (fp,"%55s%30s%d\n\n"," SALDO DE CLIENTES - CONTADO","Pagina # ",con_pag);
 strful(cadena,(int)(96-strlen(nomb_emp.arr))/2,' ');
 fprintf (fp,"%s%s%s%s\n\n",cadena,enfatizado_on,fecha_listado,enfatizado_off);
 fprintf (fp,"%-45s %14s %18s\n\n","NOMBRE   DEL   CLIENTE ","N I T","SALDO");
 con_lin=8;
}

void total()
{
   sprintf (cadena,"%12.2f",saldo_total);
   fprintf (fp,"\n%50s%32s\n","Total...",fmtnum("zz,zzz,zzz,zzz.zz",cadena,r_t));
   con_lin=66;
   saldo_total=0;
}
