
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
           char  filnam[16];
};
static const struct sqlcxp sqlfpn =
{
    15,
    ".\\NOMPLCONTA.pc"
};


static unsigned long sqlctx = 2146275;


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
            void  *sqhstv[4];
   unsigned int   sqhstl[4];
            int   sqhsts[4];
            void  *sqindv[4];
            int   sqinds[4];
   unsigned int   sqharm[4];
   unsigned int   *sqharc[4];
   unsigned short  sqadto[4];
   unsigned short  sqtdso[4];
} sqlstm = {10,4};

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

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,104,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,30,132,0,0,0,0,0,1,0,
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
char    registro[2];
char    * pch;

void leer_plano();
void hacer_asiento();
void ver_inf();

void main(argc, argv)
int     argc;
char    *argv[];
{
//char    device[10];
int     status = 0;

if (argc < 4)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : nomplconta codigo_emp archivo userid/password\n");
    printf ("               userid/password nombre usuario y password\n");
    printf ("archivo: nombre archivo con toda su rura ");
    exit (1);
   }

strcpy (codigo_emp.arr, argv[1]);
codigo_emp.len = strlen(codigo_emp.arr);
strcpy (w_arch.arr,         argv[2]);
w_arch.len = strlen(w_arch.arr);
if (!strpos ("/", argv[3]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,   argv[3]);
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

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/


// printf("archivo %s abierto\n",w_arch.arr);

 leer_plano();
 fclose(fp1);

 /* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )36;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 exit   (0);
}

void leer_plano()
{

 if ((fp1 = fopen(w_arch.arr, "r")) == NULL) {
     fprintf (stderr,"Error abriendo archivo %s\n",w_arch.arr);
     exit (1);
 }

 fread(registro,sizeof(registro),1,fp1);
 printf("1) Lei registro <%s>\n",registro);
/*
 while(!feof(fp1)) {
    printf("Lei registro <%s>\n",registro);
    pch = strtok (registro," ,.-");   // Aqui deja solo la coma
    while (pch != NULL) {
        printf ("%s\n",pch);     // Aqui deberias guardar tu dato en el array!
        pch = strtok (NULL, " ,.-");  // Aca tambien iria solo la coma.!!
    }
*/    
/*
    hacer_asiento();
    fread(registro,sizeof(registro),1,fp1);
*/       
// }

}
/*
void hacer_asiento()
{

  strcpy(fuenteb.arr,"17");
  fuenteb.len = strlen(fuenteb.arr);

  strcpy(comprobanteb.arr,ultimo_numero_c.arr);
  comprobanteb.len = strlen(comprobanteb.arr);

  strcpy(fechab.arr,fecha_corte_c.arr);
  fechab.len = strlen(fechab.arr);

*/
/* Lee consecutivo de control_mes Fte 17 Cns ultimo Asiento Aj x Depreciacion */
/*
  EXEC SQL select consecutivo   into :consecutivo15
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesa)      and
                 codigo_emp   = to_number(:codigo_emp);

  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
      fprintf (stderr, "Error leyendo Control_Mes (%d)\n", sqlca.sqlcode);
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo15);
        consecutivob.len = strlen(consecutivob.arr);

        EXEC SQL delete from movto_d
                 where codigo_emp   = to_number(:codigo_emp)   and
                       ano_mes      = to_number(:ano_mesa)     and
                       consecutivo  = (select consecutivo
                                       from   movto_c
                                       where codigo_emp  = to_number(:codigo_emp)   and
                                             comprobante = to_number(:comprobanteb) and
                                             clase       = 'VT'                     and
                                             tipo        = '3'                      and
                                             ano_mes     = to_number(:ano_mesa));

        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo Movto_D (%d)\n", sqlca.sqlcode);

        EXEC SQL delete from movto_c
                 where codigo_emp   = to_number(:codigo_emp)   and
                       comprobante  = to_number(:comprobanteb) and
                       clase        = 'VT'                     and
                       tipo         = '3'                      and
                       ano_mes      = to_number(:ano_mesa);

        if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
            fprintf (stderr, "Error leyendo Movto_C (%d)\n", sqlca.sqlcode);

  }

  strcpy(fuenteb.arr,"08");
  fuenteb.len = strlen(fuenteb.arr);
*/
  /* Lee consecutivo de Control_mes Fte 08 sgte consecutivo */
/*
  EXEC SQL select consecutivo+1 into :consecutivo2
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesa)      and
                 codigo_emp   = to_number(:codigo_emp)
           for update;

  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes 08 (%d)\n", sqlca.sqlcode);
      consecutivo2=1;
      sprintf(consecutivob.arr,"%5.0f",consecutivo2);
      consecutivob.len = strlen(consecutivob.arr);
*/      
               /* Inserta en Control_Mes Fte 08 si no existe (C11) */
/*               
      EXEC SQL insert into control_mes
              (FUENTE,ANO_MES,NOMBRE,CONSECUTIVO,CODIGO_EMP)
               values (:fuenteb, :ano_mesa, 'CONTROL VENTA CREDITO',
                       :consecutivob, :codigo_emp);
     }
  else {
        sprintf(consecutivob.arr,"%5.0f",consecutivo2);
        consecutivob.len = strlen(consecutivob.arr);
*/        
               /* Actualiza Cns de Fte 08 en control_mes (C12) */
/*               
        EXEC SQL update control_mes
                 set    consecutivo = :consecutivob
                 where codigo_emp   = to_number(:codigo_emp)    and
                       ano_mes      = to_number(:ano_mesa)      and
                       fuente       = :fuenteb;
  }

  strcpy(fuenteb.arr,"17");
  fuenteb.len = strlen(fuenteb.arr);

  EXEC SQL select consecutivo   into :consecutivo15
           from control_mes
           where fuente       = to_number(:fuenteb)       and
                 ano_mes      = to_number(:ano_mesa)      and
                 codigo_emp   = to_number(:codigo_emp)
           for update;

  if (sqlca.sqlcode)
     {
      fprintf (stderr, "Error leyendo Control_Mes 17 (%d)\n", sqlca.sqlcode);
*/      
               /* Inserta en Control_Mes Fte 15 si no existe (C11) */
/*               
      EXEC SQL insert into control_mes
               (FUENTE,ANO_MES,NOMBRE,CONSECUTIVO,CODIGO_EMP)
               values (:fuenteb, :ano_mesa, 'CONTROL VENTA CREDITO',
                       :consecutivob, :codigo_emp);
     }
  else {
*/  
               /* Actualiza Cns de Fte 15 en control_mes (C12) */
/*               
        EXEC SQL update control_mes
                 set    consecutivo = :consecutivob
                 where codigo_emp   = to_number(:codigo_emp)    and
                       ano_mes      = to_number(:ano_mesa)      and
                       fuente       = :fuenteb;
  }

//  printf("3) codigo_emp<%s> ano_mesa<%s> comprobanteb<%s> consecutivob<%s> fechab<%s>", codigo_emp.arr,ano_mesa.arr,comprobanteb.arr,consecutivob.arr,fechab.arr); getchar();
  EXEC SQL insert into movto_c
           (CODIGO_EMP,
	    ANO_MES,
	    COMPROBANTE,
	    CONSECUTIVO,
	    CLASE,
	    DESCRIPCION,
	    FECHA,
	    TIPO,
	    ESTADO,
	    NITB,
	    CODIGO_NITB,
	    VALORB,
	    RETENCION,
	    CONTADO)
           values(:codigo_emp, :ano_mesa, :comprobanteb, :consecutivob, 'VT',
                  'LENTES OFTALMICOS Y/O CONTACTO',:fechab,'3', '0','','','','','');

  if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
      fprintf (stderr, "Error insertando Movto_C (%d)\n", sqlca.sqlcode);


  staora  = 0;
  cuenta_db.arr  [cuenta_db.len]  = '\0';
  cuenta_cr.arr  [cuenta_cr.len]  = '\0';
  fecha_asto.arr [fecha_asto.len] = '\0';
  codigo.arr     [codigo.len]     = '\0';
  codigo.len  =  strlen(codigo.arr);

     strcpy(cuentab.arr,"13050525");
     cuentab.len = strlen(cuentab.arr);
     cuentab.arr  [cuentab.len]  = '\0';

     strcpy(codigox.arr,codigo_cliente_c.arr);
     codigox.len = strlen(codigox.arr);
     if (codigo_nit==0)
        strcpy(codigo_nitb.arr,"");
     else sprintf(codigo_nitb.arr,"%5.0f",codigo_nit);
     codigo_nitb.len = strlen(codigo_nitb.arr);
     sprintf(inf[2],"%10.0f",nitn);
     strcpy(inf[3],comprobanteb.arr);
     strcpy(inf[4],comprobanteb.arr);

     ver_inf();
//     sprintf(valor_debb.arr,"%10.2f",costo_factura);
     sprintf(valor_debb.arr,"%10.2f",total_cartera);
     valor_debb.len = strlen(valor_debb.arr);
     strcpy (valor_creb.arr,"");
     valor_creb.len = strlen(valor_creb.arr);
*/
                                          /* Graba en movto_d el Debito (C4) */
//  printf("5) codigo_emp<%s> ano_mesa<%s> consecutivob<%s> secuenciab<%s> cuentab<%s> infa<%s> infb<%s> infc<%s> infd<%s> codigo_nitb<%s> valor_debb<%s> valor_creb<%s>", codigo_emp.arr,ano_mesa.arr,consecutivob.arr,secuenciab.arr,cuentab.arr,infa.arr,infb.arr,infc.arr,infd.arr,codigo_nitb.arr,valor_debb.arr,valor_creb.arr ); getchar();
/*

     EXEC SQL insert into movto_d
                    (CODIGO_EMP,
            	       ANO_MES,
                     CONSECUTIVO,
            	       SECUENCIA,
            	       CUENTA,
            	       INFA,
            	       INFB,
            	       INFC,
            	       INFD,
            	       CODIGO_NIT,
            	       VALOR_DEB,
            	       VALOR_CRE,
            	       SUCURSAL,
            	       CEN_COS)
              values(to_number(:codigo_emp), 
                     to_number(:ano_mesa), 
                     to_number(:consecutivob), 
                     to_number(:secuenciab),
                     :cuentab, :infa, :infb, :infc, :infd,
                     to_number(:codigo_nitb), 
                     to_number(:valor_debb, '999999999.99'), 
                     to_number(:valor_creb, '999999999.99'),
                     '001',
                     1);

     if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
         fprintf (stderr, "Error Grabando Debito (%d)\n ", sqlca.sqlcode);
     }

     secuencia++;
     sprintf(secuenciab.arr,"%6.0f",secuencia);
     secuenciab.len = strlen(secuenciab.arr);

     strcpy(cuentab.arr,"23657501");
     cuentab.len = strlen(cuentab.arr);
     cuentab.arr  [cuentab.len]  = '\0';

     for (i=1;i<=4;i++) {
          strcpy(inf[i],"");
     }
     if (codigo_nit==0)
        strcpy(codigo_nitb.arr,"");
     else sprintf(codigo_nitb.arr,"%5.0f",codigo_nit);
     codigo_nitb.len = strlen(codigo_nitb.arr);
     strcpy(inf[2],comprobanteb.arr);

     ver_inf();
     strcpy (valor_debb.arr,"");
     valor_debb.len = strlen(valor_debb.arr);
     sprintf(valor_creb.arr,"%10.2f",valor_cree);
     valor_creb.len = strlen(valor_creb.arr);

//printf("5.2 CREE) codigo_emp<%s> ano_mesa<%s> consecutivob<%s> secuenciab<%s> cuentab<%s> infa<%s> infb<%s> infc<%s> infd<%s> codigo_nitb<%s> valor_debb<%s> valor_creb<%s>", codigo_emp.arr,ano_mesa.arr,consecutivob.arr,secuenciab.arr,cuentab.arr,infa.arr,infb.arr,infc.arr,infd.arr,codigo_nitb.arr,valor_debb.arr,valor_creb.arr ); getchar();

     EXEC SQL insert into movto_d
        (CODIGO_EMP,
	       ANO_MES,
         CONSECUTIVO,
	       SECUENCIA,
	       CUENTA,
	       INFA,
	       INFB,
	       INFC,
	       INFD,
	       CODIGO_NIT,
	       VALOR_DEB,
	       VALOR_CRE,
	       SUCURSAL,
	       CEN_COS)
              values(:codigo_emp, :ano_mesa, :consecutivob, :secuenciab,
                     :cuentab, :infa, :infb, :infc, :infd,
                     to_number(:codigo_nitb), to_number(:valor_debb, '999999999.99'), to_number(:valor_creb, '999999999.99'),'001',1);

     if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0) {
         fprintf (stderr, "Error Grabando Credito en CREE (%d)\n", sqlca.sqlcode);
     }

}
*/

/*
void ver_inf()
{
  EXEC SQL select infa, infb, infc, infd
           into :veca, :vecb, :vecc, :vecd
           from   plan
           where  codigo_emp = :codigo_emp and
                  cuenta     = :cuentab;

  if (sqlca.sqlcode == 1403)
      printf ("Cuentab (%-s) no existe\n", cuentab.arr);

  veca.arr [veca.len] = '\0';
  vecb.arr [vecb.len] = '\0';
  vecc.arr [vecc.len] = '\0';
  vecd.arr [vecd.len] = '\0';

  strcpy (vecplan[1], veca.arr);
  strcpy (vecplan[2], vecb.arr);
  strcpy (vecplan[3], vecc.arr);
  strcpy (vecplan[4], vecd.arr);

  i=j=0;
  for (i=1;i<=4;i++) {
      if (!strcmp(vecplan[i],"NIT")) {
          sprintf(inf[i],"%12.0f",nitn);
      }
      else {
            for (j=1;j<=k;j++) {
                if (!strcmp(vecplan[i],vecinf[j].arr) && strcmp(vecplan[i],"") ) {
                   strcpy(inf[i],codigox.arr);
                }
            }
      }
  }
  strtri(inf[1]);
  strtri(inf[2]);
  strtri(inf[3]);
  strtri(inf[4]);
  strcpy (infa.arr, inf[1]);
  strcpy (infb.arr, inf[2]);
  strcpy (infc.arr, inf[3]);
  strcpy (infd.arr, inf[4]);
  infa.len = strlen(infa.arr);
  infb.len = strlen(infb.arr);
  infc.len = strlen(infc.arr);
  infd.len = strlen(infd.arr);
}

*/