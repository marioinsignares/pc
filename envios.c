
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
           char  filnam[12];
};
static const struct sqlcxp sqlfpn =
{
    11,
    ".\\envios.pc"
};


static const unsigned long sqlctx = 1216160329;


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

 static const char *sq0003 = 
"select dc.codigo_cliente ,(decode(to_char(dc.fecha,'mm'),'01','Ene','02','Fe\
b','03','Mar','04','Abr','05','May','06','Jun','07','Jul','08','Ago','09','Sep\
','10','Oct','11','Nov','12','Dic','xx')||to_char(dc.fecha,' dd/yyyy')) ,dc.nu\
mero_despacho  from despachos d ,ordenes_c o ,despachoc dc where (((((d.numero\
_despacho=dc.numero_despacho and o.fecha_documento>=to_date((substr(:b0,1,6)||\
lpad(to_number(decode(substr(:b0,7,2),15,1,16)),2,0)),'yyyymmdd')) and o.fecha\
_documento<=to_date(:b0,'yyyymmdd')) and dc.codigo_cliente=o.codigo_cliente) a\
nd dc.fecha<=to_date(:b3,'yyyymmdd')) and nvl(dc.estado,0)=0) group by dc.codi\
go_cliente,dc.fecha,dc.numero_despacho order by dc.codigo_cliente,dc.fecha,dc.\
numero_despacho            ";
typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,0,0,27,95,0,3,3,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,
28,0,0,2,34,0,4,119,0,1,0,0,1,0,2,3,0,0,
46,0,0,3,727,0,9,144,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
76,0,0,3,0,0,13,150,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,4,0,0,
102,0,0,4,192,0,2,184,0,0,0,0,1,0,
116,0,0,5,644,0,3,195,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
146,0,0,6,343,0,5,215,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
168,0,0,3,0,0,15,231,0,0,0,0,1,0,
182,0,0,7,0,0,30,233,0,0,0,0,1,0,
196,0,0,8,184,0,4,265,0,3,1,0,1,0,2,9,0,0,2,9,0,0,1,9,0,0,
};


/*****************************************************************
* ROTULODE.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* envios.pc. Listado de Los despachos realizados.
*
* Uso : envios fecha_despacho fecha_ordenes definitivo device
*       userid/password
*
* Martin A. Toloza L. Creado Enero 02-1998.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void titulos();
void datos_cliente();
				     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } uid;

                                 /* Despachos (C1) */
/* VARCHAR codigo_cliente[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } codigo_cliente;

/* VARCHAR fecha_despacho[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } fecha_despacho;

double  numero_despacho;
int     a2k;
/* VARCHAR fechad        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechad;

/* VARCHAR fechao        [20]; */ 
struct { unsigned short len; unsigned char arr[20]; } fechao;

                                 /* Clientes (C5) */
/* VARCHAR nomb_clie     [51]; */ 
struct { unsigned short len; unsigned char arr[51]; } nomb_clie;

/* VARCHAR nomb_ciu      [30]; */ 
struct { unsigned short len; unsigned char arr[30]; } nomb_ciu;

/* VARCHAR cliente_ini   [6]; */ 
struct { unsigned short len; unsigned char arr[6]; } cliente_ini;


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
char   *fmtnum(), r_t[100];
int     con_pag;                                   /* Contador de Paginas */
int     con_lin=61;                                /* Contador de Lineas  */
int	  staora =0;
char    definitivo[2];

char    cadena[20];

void main(argc, argv)
int     argc;
char    *argv[];
{

char	device[6];
int   i=0;
int	status = 0;

    if (argc < 6)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : envios fecha_despacho fecha_ordenes definitivo device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("      device : s salida standar     \n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (fechad.arr, argv[1]);
       fechad.len   =      strlen(fechad.arr);
       strcpy (fechao.arr, argv[2]);
       fechao.len   =      strlen(fechao.arr);
       if ( strlen(fechad.arr) != 8 || strlen(fechao.arr) != 8 ) {
          printf("Error, la fecha debe ser de 8 digitos y formato AAAAMMDD");
          exit (1);
       }
       strcpy (definitivo, argv[3]);
       strlow (definitivo);
       strcpy (device,     argv[4]);
       strlow (device);

    if (!strpos ("/", argv[5]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid.arr,   argv[5]);
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
    abre_impresora("1");

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/
  /* EXEC SQL select y2k
           into   :a2k
           from   ano2000; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 8;
  sqlstm.arrsiz = 3;
  sqlstm.stmt = "select y2k into :b0  from ano2000 ";
  sqlstm.iters = (unsigned long  )1;
  sqlstm.offset = (unsigned short)28;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (unsigned char  *)&a2k;
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


  if (sqlca.sqlcode != 0 ) {
     fprintf (stderr, "Error, No existe registro alguno en tabla Y2K (%d)\n", sqlca.sqlcode);
     exit (1);
  }

    /* EXEC SQL DECLARE C1 CURSOR FOR
             select dc.codigo_cliente,
                    decode(to_char(dc.fecha,'mm'),'01','Ene','02','Feb',
                    '03','Mar','04','Abr','05','May','06','Jun','07','Jul',
                    '08','Ago','09','Sep','10','Oct','11','Nov',
                    '12','Dic','xx')||to_char(dc.fecha,' dd/yyyy'),
                    dc.numero_despacho
             from  despachos d, ordenes_c o, despachoc dc
             where d.numero_despacho  = dc.numero_despacho                 and
                   o.fecha_documento >= to_date(substr(:fechao,1,6)||lpad(to_number(decode(substr(:fechao,7,2),15,1,16)),2,0),'yyyymmdd') and
                   o.fecha_documento <= to_date(:fechao,'yyyymmdd')        and
                   dc.codigo_cliente  = o.codigo_cliente                   and
                   dc.fecha          <= to_date(:fechad,'yyyymmdd')        and
                   nvl(dc.estado,0)   = 0
             group by dc.codigo_cliente, dc.fecha, dc.numero_despacho
             order by dc.codigo_cliente, dc.fecha, dc.numero_despacho; */ 


    /* EXEC SQL OPEN C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)46;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&fechao;
    sqlstm.sqhstl[0] = (unsigned long  )22;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&fechao;
    sqlstm.sqhstl[1] = (unsigned long  )22;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&fechao;
    sqlstm.sqhstl[2] = (unsigned long  )22;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&fechad;
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



    if (strcmp(definitivo,"s")) {

       staora  = 0;
       while (staora == 0) {
              /* EXEC SQL FETCH C1 INTO :codigo_cliente, :fecha_despacho,
                                     :numero_despacho; */ 

{
              struct sqlexd sqlstm;

              sqlstm.sqlvsn = 8;
              sqlstm.arrsiz = 4;
              sqlstm.iters = (unsigned long  )1;
              sqlstm.offset = (unsigned short)76;
              sqlstm.cud = sqlcud0;
              sqlstm.sqlest = (unsigned char  *)&sqlca;
              sqlstm.sqlety = (unsigned short)0;
              sqlstm.sqhstv[0] = (unsigned char  *)&codigo_cliente;
              sqlstm.sqhstl[0] = (unsigned long  )8;
              sqlstm.sqindv[0] = (         short *)0;
              sqlstm.sqharm[0] = (unsigned long )0;
              sqlstm.sqhstv[1] = (unsigned char  *)&fecha_despacho;
              sqlstm.sqhstl[1] = (unsigned long  )32;
              sqlstm.sqindv[1] = (         short *)0;
              sqlstm.sqharm[1] = (unsigned long )0;
              sqlstm.sqhstv[2] = (unsigned char  *)&numero_despacho;
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
                       fprintf (stderr, "Error leyendo C1 (%d)\n", staora);

              codigo_cliente.arr [codigo_cliente.len] = '\0';
              fecha_despacho.arr [fecha_despacho.len] = '\0';

              if (con_lin > 60)
                  titulos();
              if (strcmp(cliente_ini.arr, codigo_cliente.arr)) {
                  if (i < 4) {
                     fprintf(fp,"%s","\n");
                     con_lin++;
                     i=0;
                  }
                  datos_cliente();
              }
              fprintf (fp,"%9.0f%11s",numero_despacho,fecha_despacho.arr);
              i++;
              if (i == 4) {
                 fprintf(fp,"\n");
                 con_lin++;
                 i=0;
              }
       }
       fprintf(fp,"\n");
       con_lin++;

       /* EXEC SQL delete from envios
                where ano_mes = (select ano||lpad(mes_proceso,2,0)
                                 from control_fac
                                 where codigo_emp = 1)    and
                      numero_quincena = (select numero_quincena
                                         from control_fac
                                         where codigo_emp = 1); */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 4;
       sqlstm.stmt = "delete from envios  where (ano_mes=(select (ano||lpad(\
mes_proceso,2,0))  from control_fac where codigo_emp=1) and numero_quincena=(s\
elect numero_quincena  from control_fac where codigo_emp=1))";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)102;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



       if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
           fprintf (stderr, "Error Borrando C3 (%d)\n", sqlca.sqlcode);

       /* EXEC SQL insert into envios
             (CODIGO_CLIENTE,CANTIDAD,VALOR,ANO_MES,NUMERO_QUINCENA)
             select dc.codigo_cliente, count(distinct dc.numero_despacho), NULL,
                    ano||lpad(mes_proceso,2,0), numero_quincena
             from  despachos d, ordenes_c o, despachoc dc, control_fac cf
             where o.codigo_cliente   = dc.codigo_cliente                 and
                   nvl(dc.estado,0)   = 0                                 and
                   dc.fecha          <= to_date(:fechad,'yyyymmdd')       and
                   cf.codigo_emp      = 1                                 and
                   d.numero_despacho  = dc.numero_despacho                and
                   o.fecha_documento >= to_date(substr(:fechao,1,6)||lpad(to_number(decode(substr(:fechao,7,2),15,1,16)),2,0),'yyyymmdd') and
                   o.fecha_documento <= to_date(:fechao,'yyyymmdd')
             group by dc.codigo_cliente, ano, mes_proceso, numero_quincena; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 8;
       sqlstm.arrsiz = 4;
       sqlstm.stmt = "insert into envios(CODIGO_CLIENTE,CANTIDAD,VALOR,ANO_M\
ES,NUMERO_QUINCENA)select dc.codigo_cliente ,count(distinct dc.numero_despacho\
) ,null  ,(ano||lpad(mes_proceso,2,0)) ,numero_quincena  from despachos d ,ord\
enes_c o ,despachoc dc ,control_fac cf where ((((((o.codigo_cliente=dc.codigo_\
cliente and nvl(dc.estado,0)=0) and dc.fecha<=to_date(:b0,'yyyymmdd')) and cf.\
codigo_emp=1) and d.numero_despacho=dc.numero_despacho) and o.fecha_documento>\
=to_date((substr(:b1,1,6)||lpad(to_number(decode(substr(:b1,7,2),15,1,16)),2,0\
)),'yyyymmdd')) and o.fecha_documento<=to_date(:b1,'yyyymmdd')) group by dc.co\
digo_cliente,ano,mes_proceso,numero_quincena";
       sqlstm.iters = (unsigned long  )1;
       sqlstm.offset = (unsigned short)116;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)0;
       sqlstm.sqhstv[0] = (unsigned char  *)&fechad;
       sqlstm.sqhstl[0] = (unsigned long  )22;
       sqlstm.sqindv[0] = (         short *)0;
       sqlstm.sqharm[0] = (unsigned long )0;
       sqlstm.sqhstv[1] = (unsigned char  *)&fechao;
       sqlstm.sqhstl[1] = (unsigned long  )22;
       sqlstm.sqindv[1] = (         short *)0;
       sqlstm.sqharm[1] = (unsigned long )0;
       sqlstm.sqhstv[2] = (unsigned char  *)&fechao;
       sqlstm.sqhstl[2] = (unsigned long  )22;
       sqlstm.sqindv[2] = (         short *)0;
       sqlstm.sqharm[2] = (unsigned long )0;
       sqlstm.sqhstv[3] = (unsigned char  *)&fechao;
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
           fprintf (stderr, "Error Insertando C4 (%d)\n", sqlca.sqlcode);
    }
    cierre_impresora();

    if (!strcmp(definitivo,"s")) {
        /* EXEC SQL update despachoc
                 set estado = 1
                 where nvl(estado,0) = 0 and
                       numero_despacho in
                       (select dc.numero_despacho
                        from despachos d, ordenes_c o, despachoc dc
                        where dc.numero_despacho = d.numero_despacho           and
                              nvl(dc.estado,0)   = 0                           and
                              dc.fecha          <= to_date(:fechad,'yyyymmdd') and
                              o.fecha_documento <= to_date(:fechao,'yyyymmdd') and
                              d.numero_orden     = o.numero_orden); */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 8;
        sqlstm.arrsiz = 4;
        sqlstm.stmt = "update despachoc  set estado=1 where (nvl(estado,0)=0\
 and numero_despacho in (select dc.numero_despacho  from despachos d ,ordenes_\
c o ,despachoc dc where ((((dc.numero_despacho=d.numero_despacho and nvl(dc.es\
tado,0)=0) and dc.fecha<=to_date(:b0,'yyyymmdd')) and o.fecha_documento<=to_da\
te(:b1,'yyyymmdd')) and d.numero_orden=o.numero_orden)))";
        sqlstm.iters = (unsigned long  )1;
        sqlstm.offset = (unsigned short)146;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (unsigned char  *)&fechad;
        sqlstm.sqhstl[0] = (unsigned long  )22;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&fechao;
        sqlstm.sqhstl[1] = (unsigned long  )22;
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
            fprintf (stderr, "Error Actualizando C2 (%d)\n", sqlca.sqlcode);
    }

    /* EXEC SQL CLOSE C1; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)168;
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
    sqlstm.offset = (unsigned short)182;
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
    fprintf(fp,"%s",salte_pagina);
    fprintf(fp,"%s%s%s%s\n\n",diezcpi,ancho_on,"Laboratorio oftalmico de la costa ltda.",ancho_off);
    fprintf(fp,"%s%s%40s%s%s",condensado_on,ancho_on,"Control de despachos ",condensado_off,ancho_off);
    fprintf(fp,"%20s%2d\n\n","Pagina # ", con_pag);
    strcpy (cadena,fechad.arr);
    valfec(cadena);
    fprintf(fp,"%40s%25s\n\n","Fecha de corte ",cadena);
    fprintf(fp," NUMERO             NUMERO             NUMERO             NUMERO \n");
    fprintf(fp," DESPACHO FECHA     DESPACHO FECHA     DESPACHO FECHA     DESPACHO FECHA     \n");
    fprintf(fp," -------- --------- -------- --------- -------- --------- -------- --------- \n");
    con_lin = 9;
    datos_cliente();
}

void datos_cliente()
{
    strcpy(cliente_ini.arr, codigo_cliente.arr);
    cliente_ini.len =   strlen(cliente_ini.arr);

    /* EXEC SQL select n.nombre, nvl(n.nombre_muni,c.nombre)
             into :nomb_clie, :nomb_ciu
             from   clientes cl, nits n, ciudades c
             where  cl.codigo_cliente =  :cliente_ini  and
                    cl.codigo_nit     = n.codigo_nit   and
                    n.codigo_ciu      = c.codigo; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 8;
    sqlstm.arrsiz = 4;
    sqlstm.stmt = "select n.nombre ,nvl(n.nombre_muni,c.nombre) into :b0,:b1\
  from clientes cl ,nits n ,ciudades c where ((cl.codigo_cliente=:b2 and cl.co\
digo_nit=n.codigo_nit) and n.codigo_ciu=c.codigo)";
    sqlstm.iters = (unsigned long  )1;
    sqlstm.offset = (unsigned short)196;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlstm.sqhstv[0] = (unsigned char  *)&nomb_clie;
    sqlstm.sqhstl[0] = (unsigned long  )53;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&nomb_ciu;
    sqlstm.sqhstl[1] = (unsigned long  )32;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&cliente_ini;
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



    if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
        fprintf (stderr, "Error leyendo C5 (%d)\n", sqlca.sqlcode);
    nomb_clie.arr   [nomb_clie.len] = '\0';
    nomb_ciu.arr    [nomb_ciu.len]  = '\0';
  /*strorg(nomb_clie.arr,1,37); */
    strorg(nomb_ciu.arr,1,19);
    fprintf (fp,"\n%s %s %s\n\n",codigo_cliente.arr,nomb_clie.arr,nomb_ciu.arr);
    con_lin+=3;
}
