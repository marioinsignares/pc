
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
    ".\\flistparc.pc"
};


static const unsigned long sqlctx = 1142601919;


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
"select codigo_cliente ,valor  from paretto where valor>0 order by valor desc\
             ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,117,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,3,20,0,2,148,0,0,0,0,1,0,
42,0,0,4,492,0,3,153,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
72,0,0,5,54,0,4,175,0,1,0,0,1,0,2,4,0,0,
90,0,0,2,89,0,9,184,0,0,0,0,1,0,
104,0,0,2,0,0,13,189,0,2,0,0,1,0,2,9,0,0,2,4,0,0,
126,0,0,6,111,0,4,204,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
148,0,0,2,0,0,15,229,0,0,0,0,1,0,
162,0,0,7,0,0,30,231,0,0,0,0,1,0,
};


/*****************************************************************
* FLISTPAR.C  Version 1.0 - Rev 1.2 - Mar. 11/98.
*
* flistpar.pc Programa de facturacion para listar EL PARETTO.
*
* Uso : flistpar fecha_ini fecha_fin constante device copias userid/password
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


/* VARCHAR codigoi       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigoi;

/* VARCHAR codigof       [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } codigof;

                                 /* Nits (C2) */
/* VARCHAR nomb_clie     [55]; */ 
struct { unsigned short len; unsigned char arr[55]; } nomb_clie;

/* VARCHAR wcod          [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } wcod;

                                 /* Paretto (C3) */
/* VARCHAR codigo_cliente[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_cliente;

double  valor;
                                 /* Paretto (C4) */
double  valor_total;

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
char *fmtnum(), r_t[100];
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
char    wciu[6];
double  porcentaje;
double  valor_parcial;
double  constante;

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int	status = 0;

if (argc < 9)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : flistpar fecha_ini fecha_fin codigoi codigof constante device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (fecha_ini.arr, argv[1]);
fecha_ini.len   =      strlen(fecha_ini.arr);
strcpy (fecha_fin.arr, argv[2]);
fecha_fin.len   =      strlen(fecha_fin.arr);
if ( strlen(fecha_ini.arr) != 8 || strlen(fecha_fin.arr) != 8 ) {
   printf("Error, la fecha debe ser de 8 digitos y formato AAAAMMDD");
   exit (1);
}
strcpy (codigoi.arr, argv[3]);
codigoi.len   =      strlen(codigoi.arr);
strcpy (codigof.arr, argv[4]);
codigof.len   =      strlen(codigof.arr);

constante       =      atof(argv[5]);
strcpy (device,        argv[6]);
strlow (device);
strcpy (copias,        argv[7]);

strcpy(fecha,fecha_ini.arr);
fecha_oracle3(fecha);
strcpy(cadena,fecha);
strcpy(fecha,fecha_fin.arr);
strcat(cadena," hasta ");
fecha_oracle3(fecha);
strcat(cadena,fecha);
strcpy(fechas,cadena);

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

   /* EXEC SQL DECLARE C3 CURSOR FOR
            select codigo_cliente, valor
            from   paretto
            where  valor > 0
            order  by valor desc; */ 


   /* EXEC SQL delete from paretto; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 3;
   sqlstm.stmt = "delete from paretto ";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)28;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
       fprintf (stderr, "Error Borrando Paretto (%d)\n", sqlca.sqlcode);

   /* EXEC SQL insert into paretto
            select codigo_cliente,
                   sum(nvl(valor_oftalmica,0)+nvl(valor_contacto,0))
            from  facturas f
            where tipo_documento  in ('F','C')                       and
                  fecha_documento >= to_date(:fecha_ini,'yyyymmdd')  and
                  fecha_documento <= to_date(:fecha_fin,'yyyymmdd')  and
                  codigo_cliente  >= :codigoi                        and
                  codigo_cliente  <= :codigof                        and
                  estado_factura   = 0                               and
              not exists
              (select 'x'
               from   basura
               where  f.tipo_factura   = tipo_factura   and
                      f.tipo_documento = tipo_documento and
                      f.numero_factura = numero_factura)
            group by codigo_cliente; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 4;
   sqlstm.stmt = "insert into paretto select codigo_cliente ,sum((nvl(valor_\
oftalmica,0)+nvl(valor_contacto,0)))  from facturas f where ((((((tipo_documen\
to in ('F','C') and fecha_documento>=to_date(:b0,'yyyymmdd')) and fecha_docume\
nto<=to_date(:b1,'yyyymmdd')) and codigo_cliente>=:b2) and codigo_cliente<=:b3\
) and estado_factura=0) and  not exists (select 'x'  from basura where ((f.tip\
o_factura=tipo_factura and f.tipo_documento=tipo_documento) and f.numero_factu\
ra=numero_factura))) group by codigo_cliente";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)42;
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
   sqlstm.sqhstv[2] = (unsigned char  *)&codigoi;
   sqlstm.sqhstl[2] = (unsigned long  )22;
   sqlstm.sqindv[2] = (         short *)0;
   sqlstm.sqharm[2] = (unsigned long )0;
   sqlstm.sqhstv[3] = (unsigned char  *)&codigof;
   sqlstm.sqhstl[3] = (unsigned long  )22;
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
       fprintf (stderr, "Error Insertando Paretto C1(%d)\n", sqlca.sqlcode);

   /* EXEC SQL select sum(valor)
            into  :valor_total
            from   paretto
            where  valor > 0; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 4;
   sqlstm.stmt = "select sum(valor) into :b0  from paretto where valor>0";
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)72;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlstm.sqhstv[0] = (unsigned char  *)&valor_total;
   sqlstm.sqhstl[0] = (unsigned long  )8;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   oraest  = sqlca.sqlcode;
   if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
       fprintf (stderr, "Error Leyendo Paretto C4(%d)\n", sqlca.sqlcode);

   /* EXEC SQL OPEN C3; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 4;
   sqlstm.stmt = sq0002;
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)90;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   staora  = 0;
   titulos();
   while (staora == 0) {

          /* EXEC SQL FETCH C3 INTO :codigo_cliente, :valor; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 4;
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)104;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
          sqlstm.sqhstl[0] = (unsigned long  )8;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&valor;
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
                   fprintf (stderr, "Error Leyendo C3 (%d)\n", staora);

          codigo_cliente.arr  [codigo_cliente.len] = '\0';

          valor_parcial+=valor;
          strcpy (wcod.arr,codigo_cliente.arr);
          wcod.len   =        strlen(wcod.arr);

          /* EXEC SQL select n.nombre  into :nomb_clie
	           from  nits n, clientes cl
                   where n.codigo_nit      = cl.codigo_nit       and
                         cl.codigo_cliente =   :wcod; */ 

{
          struct sqlexd sqlstm;

          sqlstm.sqlvsn = 8;
          sqlstm.arrsiz = 4;
          sqlstm.stmt = "select n.nombre into :b0  from nits n ,clientes cl \
where (n.codigo_nit=cl.codigo_nit and cl.codigo_cliente=:b1)";
          sqlstm.iters = (unsigned long  )1;
          sqlstm.offset = (unsigned short)126;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)0;
          sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
          sqlstm.sqhstl[0] = (unsigned long  )57;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqhstv[1] = (unsigned char  *)&wcod;
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
          if (oraest != 1403 && oraest != 0)
              fprintf (stderr, "Error Leyendo C2 (%d)\n", oraest);
          nomb_clie.arr       [nomb_clie.len]      = '\0';

          porcentaje=valor_parcial/valor_total;
          strcpy (wciu,codigo_cliente.arr);
//          strorg (wciu,1,5);
          sprintf(cadena,"%8.2f",valor);
          strorg(nomb_clie.arr,1,35);
          fprintf(fp,"%01.4f %s %-35s %14s ",porcentaje,wciu,nomb_clie.arr,fmtnum("zzz,zzz,zz9.99",cadena,r_t));
          cantidad=(long int)valor/(long int)constante;
          if (cantidad > 70)
              cantidad = 70;
          strful(cadena,cantidad,'*');
          fprintf(fp,"I%s\n",cadena);
   }
   sprintf(cadena,"%8.2f",valor_total);
   fprintf(fp,"\n%44s %15s\n","Total Valor ",fmtnum("$zzz,zzz,zz9.99",cadena,r_t));
   cierre_impresora();

   /* EXEC SQL CLOSE C3; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 4;
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)148;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* EXEC SQL COMMIT WORK RELEASE; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 8;
   sqlstm.arrsiz = 4;
   sqlstm.iters = (unsigned long  )1;
   sqlstm.offset = (unsigned short)162;
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
 strful(cadena,37,'*');
 fprintf(fp,"%s%s%s%s\n\n",diezcpi,ancho_on,cadena,ancho_off);
 strful(cadena,(int)(45-strlen("CURVA DE PARETTO"))/2,' ');
 fprintf(fp,"%s%s%s\n\n",condensado_on,cadena,"CURVA DE PARETTO");
 strful(cadena,(int)(90-strlen(fechas))/2,' ');
 fprintf(fp,"%s%s\n\n",cadena,fechas);
 strful(cadena2,(int)(45-strlen("CONSTANTE $         "))/2,' ');
 sprintf(cadena,"%8.2f",constante);
 fprintf(fp,"%s%s%s\n\n",cadena2,"CONSTANTE $ ",fmtnum("zz,zzz,zz9.99",cadena,r_t));
 fprintf(fp,"%71s%s\n"," ","1         2         3         4         5         6         7");
 fprintf(fp,"%s\n","  %   CODIGO   NOMBRE   DEL   CLIENTE                 VALOR      1234567890123456789012345678901234567890123456789012345678901234567890");
 strful(cadena,70,'-');
 fprintf(fp,"%62s%s\n"," ",cadena);
 con_lin = 10;
}
