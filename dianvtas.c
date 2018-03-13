
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
    ".\\dianvtas.pc"
};


static const unsigned long sqlctx = 1116000141;


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

 static const char *sq0003 = 
"select nit ,sum(valor) valor ,sum(valor_iva)  from dianvtas where valor>0 gr\
oup by nit order by valor            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,115,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,126,0,4,136,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
50,0,0,4,21,0,2,154,0,0,0,0,1,0,
64,0,0,5,405,0,3,159,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
90,0,0,6,75,0,4,184,0,2,0,0,1,0,2,4,0,0,2,4,0,0,
112,0,0,3,113,0,9,193,0,0,0,0,1,0,
126,0,0,3,0,0,13,200,0,3,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,
152,0,0,7,95,0,4,211,0,5,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,4,0,0,
186,0,0,3,0,0,15,234,0,0,0,0,1,0,
200,0,0,8,0,0,30,236,0,0,0,0,1,0,
};


/*****************************************************************
* FLISTPAR.C  Version 1.0 - Rev 1.2 - Mar. 11/98.
*
* dianvtas.pc Programa para la DIAN para listar VANTAS X NIT.
*
* Uso : flistpar fecha_ini fecha_fin device copias userid/password
*
* Martin A. Toloza L. Creado Marzo 11-1998.
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
void fecha_oracle3();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Facturas (C1) */
/* VARCHAR fecha_ini     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_ini;

/* VARCHAR fecha_fin     [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fecha_fin;

                                 /* Nits (C2) */
/* VARCHAR nomb_clie     [55]; */ 
struct { unsigned short len; unsigned char arr[55]; } nomb_clie;

/* VARCHAR direccion     [55]; */ 
struct { unsigned short len; unsigned char arr[55]; } direccion;

/* VARCHAR ciudad        [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } ciudad;

/* VARCHAR nombre_muni   [25]; */ 
struct { unsigned short len; unsigned char arr[25]; } nombre_muni;

double  nit;
double  valor;
double  valor_iva;
                                 /* dianvtas (C4) */
double  valor_total;
double  total_iva;
/* VARCHAR codigo_emp  [3]; */ 
struct { unsigned short len; unsigned char arr[3]; } codigo_emp;

/* VARCHAR nomb_emp    [51]; */ 
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
char *fmtnum(), r_t[100], r_t2[100], r_t3[100];
int     con_pag;                                   /* Contador de Paginas */
int     con_lin=66;                                /* Contador de Lineas  */
int     staora = 0;
int     oraest = 0;
char    copias[3];
int     cantidad;
char    fechas[90];
char    fecha [70];
char    cadena [200];
char    cadena2[100];
char    cadena3[70];
char    wciu[6];
double  porcentaje;
double  valor_parcial;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

if (argc < 7)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : dianvtas codigo_emp fecha_ini fecha_fin device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (codigo_emp.arr ,argv[1]);
codigo_emp.len = strlen(codigo_emp.arr);
strcpy (fecha_ini.arr, argv[2]);
fecha_ini.len   =      strlen(fecha_ini.arr);
strcpy (fecha_fin.arr, argv[3]);
fecha_fin.len   =      strlen(fecha_fin.arr);
if ( strlen(fecha_ini.arr) != 8 || strlen(fecha_fin.arr) != 8 ) {
   printf("Error, la fecha debe ser de 8 digitos y formato AAAAMMDD");
   exit (1);
}
strcpy (device,        argv[4]);
strlow (device);
strcpy (copias,        argv[5]);

strcpy(fecha,fecha_ini.arr);
fecha_oracle3(fecha);
strcpy(cadena,fecha);
strcpy(fecha,fecha_fin.arr);
strcat(cadena," hasta ");
fecha_oracle3(fecha);
strcat(cadena,fecha);
strcpy(fechas,cadena);

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

       /* EXEC SQL select nombre into :nomb_emp
                from   empresas, nits
                where  empresas.codigo_nit = nits.codigo_nit and
                       empresas.codigo_emp = to_number(:codigo_emp); */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 3;
       sqlstm.stmt = "select nombre into :b0  from empresas ,nits where (emp\
resas.codigo_nit=nits.codigo_nit and empresas.codigo_emp=to_number(:b1))";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)28;
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



      nomb_emp.arr[nomb_emp.len] = '\0';

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/

   /* EXEC SQL DECLARE C3 CURSOR FOR
            select nit, sum(valor) valor, sum(valor_iva)
            from   dianvtas
            where  valor > 0
            group  by nit
            order  by valor; */ 


   /* EXEC SQL delete from dianvtas; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 3;
   sqlstm.stmt = "delete from dianvtas ";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)50;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
       fprintf (stderr, "Error Borrando Dianvtas (%d)\n", sqlca.sqlcode);

   /* EXEC SQL insert into dianvtas
            select nit, sum(nvl(valor_oftalmica,0)+nvl(valor_contacto,0)),
                        sum(nvl(valor_iva,0))
            from  facturas f, nits n, clientes c
            where tipo_documento  in ('F','C')                       and
                  fecha_documento >= to_date(:fecha_ini,'yyyymmdd')  and
                  fecha_documento <= to_date(:fecha_fin,'yyyymmdd')  and
                  estado_factura   = 0                               and
                  f.codigo_cliente = c.codigo_cliente                and
                  c.codigo_nit     = n.codigo_nit                    and
                  f.tipo_factura   = :codigo_emp
            group by nit; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 3;
   sqlstm.stmt = "insert into dianvtas select nit ,sum((nvl(valor_oftalmica,\
0)+nvl(valor_contacto,0))) ,sum(nvl(valor_iva,0))  from facturas f ,nits n ,cl\
ientes c where ((((((tipo_documento in ('F','C') and fecha_documento>=to_date(\
:b0,'yyyymmdd')) and fecha_documento<=to_date(:b1,'yyyymmdd')) and estado_fact\
ura=0) and f.codigo_cliente=c.codigo_cliente) and c.codigo_nit=n.codigo_nit) a\
nd f.tipo_factura=:b2) group by nit";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)64;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlstm.sqhstv[0] = (unsigned char  *)&fecha_ini;
   sqlstm.sqhstl[0] = (unsigned long  )22;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqhstv[1] = (unsigned char  *)&fecha_fin;
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


/*
              not exists
              (select 'x'
               from   basura
               where  f.tipo_factura   = tipo_factura   and
                      f.tipo_documento = tipo_documento and
                      f.numero_factura = numero_factura )
*/


   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
       fprintf (stderr, "Error Insertando Dianvtas C1(%d)\n", sqlca.sqlcode);

   /* EXEC SQL select sum(valor), sum(valor_iva)
            into  :valor_total, :total_iva
            from   dianvtas
            where  valor > 0; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 3;
   sqlstm.stmt = "select sum(valor) ,sum(valor_iva) into :b0,:b1  from dianv\
tas where valor>0";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)90;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlstm.sqhstv[0] = (unsigned char  *)&valor_total;
   sqlstm.sqhstl[0] = (unsigned long  )8;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqhstv[1] = (unsigned char  *)&total_iva;
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



   oraest  = sqlca.sqlcode;
   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
       fprintf (stderr, "Error Leyendo Dianvtas C4(%d)\n", sqlca.sqlcode);

   /* EXEC SQL OPEN C3; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 3;
   sqlstm.stmt = sq0003;
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)112;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   staora  = 0;
   titulos();
   while (staora == 0) {

          if (con_lin > 62)
              titulos();
          /* EXEC SQL FETCH C3 INTO :nit, :valor, :valor_iva; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 3;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)126;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&nit;
          sqlstm.sqhstl[0] = (unsigned long  )8;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&valor;
          sqlstm.sqhstl[1] = (unsigned long  )8;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&valor_iva;
          sqlstm.sqhstl[2] = (unsigned long  )8;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
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
                   fprintf (stderr, "Error Leyendo C3 (%d)\n", staora);

          valor_parcial+=valor;

          /* EXEC SQL select nombre, direccion, codigo_ciu, nombre_muni
                   into :nomb_clie, :direccion, :ciudad, :nombre_muni
	           from  nits
                   where nit = :nit; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 5;
          sqlstm.stmt = "select nombre ,direccion ,codigo_ciu ,nombre_muni i\
nto :b0,:b1,:b2,:b3  from nits where nit=:b4";
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)152;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
          sqlstm.sqhstl[0] = (unsigned long  )57;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&direccion;
          sqlstm.sqhstl[1] = (unsigned long  )57;
          sqlstm.sqindv[1] = (         short *)0;
          sqlstm.sqharm[1] = (unsigned long )0;
          sqlstm.sqhstv[2] = (unsigned char  *)&ciudad;
          sqlstm.sqhstl[2] = (unsigned long  )32;
          sqlstm.sqindv[2] = (         short *)0;
          sqlstm.sqharm[2] = (unsigned long )0;
          sqlstm.sqhstv[3] = (unsigned char  *)&nombre_muni;
          sqlstm.sqhstl[3] = (unsigned long  )27;
          sqlstm.sqindv[3] = (         short *)0;
          sqlstm.sqharm[3] = (unsigned long )0;
          sqlstm.sqhstv[4] = (unsigned char  *)&nit;
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


          oraest  = sqlca.sqlcode;
          if (oraest != 1403 && oraest != 0)
              fprintf (stderr, "Error Leyendo C2 (%d)\n", oraest);
          nomb_clie.arr       [nomb_clie.len]      = '\0';
          direccion.arr       [direccion.len]      = '\0';
          ciudad.arr          [ciudad.len]         = '\0';
          nombre_muni.arr     [nombre_muni.len]    = '\0';

          sprintf(cadena2,"%12.0f",nit);
          sprintf(cadena,"%8.2f",valor);
          sprintf(cadena3,"%8.2f",valor_iva);
          fprintf(fp,"%15s %-40s %-3s %-20s%-45s %14s %14s\n",fmtnum("zzz,zzz,zz9",cadena2,r_t),nomb_clie.arr,ciudad.arr,nombre_muni.arr,direccion.arr,fmtnum("zzz,zzz,zz9",cadena,r_t2),fmtnum("zzz,zzz,zz9",cadena3,r_t3));
          con_lin++;
   }
   sprintf(cadena,"%8.2f",valor_total);
   sprintf(cadena3,"%8.2f",total_iva);
   fprintf(fp,"\n%98s %15s %15s\n","Total Valor ",fmtnum("zz,zzz,zzz,zz9",cadena,r_t),fmtnum("zz,zzz,zzz,zz9",cadena3,r_t3));
   cierre_impresora();

   /* EXEC SQL CLOSE C3; */ 

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
 con_pag++;
 if (!strcmp(codigo_emp.arr,"3"))
     strcpy(nomb_emp.arr,"");
 fprintf(fp,"%s%s%s%s%s\n\n",salte_pagina,diezcpi,ancho_on,nomb_emp.arr,ancho_off);
 fprintf(fp,"%s%s%30s%d\n\n",condensado_on,"VENTAS POR CLIENTE PARA LA DIAN","Pagina ",con_pag);
 strful(cadena,(int)(90-strlen(fechas))/2,' ');
 fprintf(fp,"%s%s\n\n",cadena,fechas);
 fprintf(fp,"%s\n","     NIT        NOMBRE   DEL   CLIENTE                   CIU MUNICIPIO           DIRECCION                                             VALOR");
 con_lin = 7;
}
