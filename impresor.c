
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
           char  filnam[14];
};
static const struct sqlcxp sqlfpn =
{
    13,
    ".\\impresor.pc"
};


static unsigned long sqlctx = 531387;


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
            void  *sqhstv[31];
   unsigned int   sqhstl[31];
            int   sqhsts[31];
            void  *sqindv[31];
            int   sqinds[31];
   unsigned int   sqharm[31];
   unsigned int   *sqharc[31];
   unsigned short  sqadto[31];
   unsigned short  sqtdso[31];
} sqlstm = {10,31};

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
5,0,0,1,87,0,4,116,0,0,3,1,0,1,0,2,9,0,0,2,9,0,0,1,9,0,0,
32,0,0,2,537,0,4,141,0,0,31,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,
};


/*******************************************************************
* (MESI). precios_lista.C Version 1.0 - Rev 1.2 - Mar. 3/90.
*
* precios_lista.c. Lista de precios de lentes oftalmicos
*
* uso : precios_lista DD-MMM-AA device userid/password
*
* Mario E. Santiago I. Creado Marzo 23-1990.
* Teodoro tarud & cia ltda.
*
*
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <setjmp.h>
#include <stdlib.h>
#include <sys/types.h>

int strorg();

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* Variables de la tabla impresora. */
/* VARCHAR    w_impresora     [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } w_impresora;

/* VARCHAR    w_modelo        [26]; */ 
struct { unsigned short len; unsigned char arr[26]; } w_modelo;

/* VARCHAR    w_programa      [205]; */ 
struct { unsigned short len; unsigned char arr[205]; } w_programa;

/* VARCHAR    w_diezcpi       [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_diezcpi;

/* VARCHAR    w_elite         [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_elite;

/* VARCHAR    w_salte_pagina  [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_salte_pagina;

/* VARCHAR    w_salte_linea   [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_salte_linea;

/* VARCHAR    w_condensado_on [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_condensado_on;

/* VARCHAR    w_condensado_off[31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_condensado_off;

/* VARCHAR    w_ancho_on      [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_ancho_on;

/* VARCHAR    w_ancho_off     [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_ancho_off;

/* VARCHAR    w_enfatizado_on [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_enfatizado_on;

/* VARCHAR    w_enfatizado_off[31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_enfatizado_off;

/* VARCHAR    w_italica_on    [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_italica_on;

/* VARCHAR    w_italica_off   [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_italica_off;

/* VARCHAR    w_subrayado_on  [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_subrayado_on;

/* VARCHAR    w_subrayado_off [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_subrayado_off;

/* VARCHAR    w_set_vertical  [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_set_vertical;

/* VARCHAR    w_vertical      [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_vertical;

/* VARCHAR    w_clear_buffer  [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_clear_buffer;

/* VARCHAR    w_line_feed8    [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_line_feed8;

/* VARCHAR    w_line_feed6    [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_line_feed6;

/* VARCHAR    w_grafica       [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_grafica;

/* VARCHAR    w_line_feed8vo  [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_line_feed8vo;

/* VARCHAR    w_alto_on       [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_alto_on;

/* VARCHAR    w_alto_off      [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_alto_off;

/* VARCHAR    w_tamano_pagina [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_tamano_pagina;

/* VARCHAR    w_nql_on        [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_nql_on;

/* VARCHAR    w_nql_off       [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_nql_off;

/* VARCHAR    w_color         [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_color;

/* VARCHAR    w_idioma        [31]; */ 
struct { unsigned short len; unsigned char arr[31]; } w_idioma;


/* VARCHAR	impresorat[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } impresorat;

/* VARCHAR     w_ruta    [101]; */ 
struct { unsigned short len; unsigned char arr[101]; } w_ruta;


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


FILE    *fp;

char    impresora       [03];
char    modelo          [26];
char    diezcpi         [31];
char    elite           [31];
char    salte_pagina    [31];
char    salte_linea     [31];
char    condensado_on   [31];
char    condensado_off  [31];
char    ancho_on        [31];
char    ancho_off       [31];
char    enfatizado_on   [31];
char    enfatizado_off  [31];
char    italica_on      [31];
char    italica_off     [31];
char    subrayado_on    [31];
char    subrayado_off   [31];
char    set_vertical    [31];
char    vertical        [31];
char    clear_buffer    [31];
char    line_feed8      [31];
char    line_feed6      [31];
char    grafica         [31];
char    line_feed8vo    [31];
char    alto_on         [31];
char    alto_off        [31];
char    tamano_pagina   [31];
char    nql_on          [31];
char    nql_off         [31];
char    color           [31];
char    idioma          [31];
int     staora2          = 0;


int abre_impresora();
int busco_impresora(device);
int cierre_impresora();


int busco_impresora(device)
char    device[];
{
   strlow (device);

   strcpy (impresorat.arr, device);
   impresorat.len = strlen(impresorat.arr);

/*
   printf ("<%s>",impresorat.arr); getchar();
//*/

   /* EXEC SQL SELECT   ruta, programa 
            into :w_ruta, :w_programa
            FROM     modelos
            WHERE    impresora = :impresorat and
                     usuario   = USER; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 10;
   sqlstm.arrsiz = 3;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select ruta ,programa into :b0,:b1  from modelos where (im\
presora=:b2 and usuario=USER)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )5;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&w_ruta;
   sqlstm.sqhstl[0] = (unsigned int  )103;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&w_programa;
   sqlstm.sqhstl[1] = (unsigned int  )207;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&impresorat;
   sqlstm.sqhstl[2] = (unsigned int  )5;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
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



   staora2  = sqlca.sqlcode;

   if (sqlca.sqlcode == -1405 )
       staora2 = 0;
   if (staora2 != 1403 && staora2 != 0) {
      printf ("Device %s Incorrecto o no existe (%d).\n",impresorat.arr,sqlca.sqlcode);
      exit (1);
   }

   w_ruta.arr [w_ruta.len] = '\0';
   return (0);
}

int abre_impresora(copia)
char    copia[];
{
  char copias[3];
  strcpy (copias, copia);

     /* EXEC SQL SELECT   impresora, modelo, normal, elite,  salte_pagina,
                       salte_linea, condensado_on, condensado_off, ancho_on,
                       ancho_off, enfatizado_on, enfatizado_off, italica_on,
                       italica_off, subrayado_on, subrayado_off, set_vertical,
                       vertical, clear_buffer, line_feed8, line_feed6, grafica,
                       line_feed8vo, alto_on, alto_off, tamano_pagina, nql_on,
                       nql_off, color, idioma
              INTO     :w_impresora, :w_modelo, :w_diezcpi, :w_elite,
                       :w_salte_pagina, :w_salte_linea, :w_condensado_on,
                       :w_condensado_off, :w_ancho_on, :w_ancho_off,
                       :w_enfatizado_on, :w_enfatizado_off, :w_italica_on,
                       :w_italica_off, :w_subrayado_on, :w_subrayado_off,
                       :w_set_vertical, :w_vertical, :w_clear_buffer,
                       :w_line_feed8, :w_line_feed6, :w_grafica,
                       :w_line_feed8vo, :w_alto_on,
                       :w_alto_off, :w_tamano_pagina, :w_nql_on,
                       :w_nql_off, :w_color, :w_idioma
		 FROM  impresoras
		 WHERE impresora = :impresorat; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 31;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select impresora ,modelo ,normal ,elite ,salte_pagina ,s\
alte_linea ,condensado_on ,condensado_off ,ancho_on ,ancho_off ,enfatizado_on \
,enfatizado_off ,italica_on ,italica_off ,subrayado_on ,subrayado_off ,set_ver\
tical ,vertical ,clear_buffer ,line_feed8 ,line_feed6 ,grafica ,line_feed8vo ,\
alto_on ,alto_off ,tamano_pagina ,nql_on ,nql_off ,color ,idioma into :b0,:b1,\
:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b12,:b13,:b14,:b15,:b16,:b17,:b18,:\
b19,:b20,:b21,:b22,:b23,:b24,:b25,:b26,:b27,:b28,:b29  from impresoras where i\
mpresora=:b30";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )32;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&w_impresora;
     sqlstm.sqhstl[0] = (unsigned int  )5;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&w_modelo;
     sqlstm.sqhstl[1] = (unsigned int  )28;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqhstv[2] = (         void  *)&w_diezcpi;
     sqlstm.sqhstl[2] = (unsigned int  )33;
     sqlstm.sqhsts[2] = (         int  )0;
     sqlstm.sqindv[2] = (         void  *)0;
     sqlstm.sqinds[2] = (         int  )0;
     sqlstm.sqharm[2] = (unsigned int  )0;
     sqlstm.sqadto[2] = (unsigned short )0;
     sqlstm.sqtdso[2] = (unsigned short )0;
     sqlstm.sqhstv[3] = (         void  *)&w_elite;
     sqlstm.sqhstl[3] = (unsigned int  )33;
     sqlstm.sqhsts[3] = (         int  )0;
     sqlstm.sqindv[3] = (         void  *)0;
     sqlstm.sqinds[3] = (         int  )0;
     sqlstm.sqharm[3] = (unsigned int  )0;
     sqlstm.sqadto[3] = (unsigned short )0;
     sqlstm.sqtdso[3] = (unsigned short )0;
     sqlstm.sqhstv[4] = (         void  *)&w_salte_pagina;
     sqlstm.sqhstl[4] = (unsigned int  )33;
     sqlstm.sqhsts[4] = (         int  )0;
     sqlstm.sqindv[4] = (         void  *)0;
     sqlstm.sqinds[4] = (         int  )0;
     sqlstm.sqharm[4] = (unsigned int  )0;
     sqlstm.sqadto[4] = (unsigned short )0;
     sqlstm.sqtdso[4] = (unsigned short )0;
     sqlstm.sqhstv[5] = (         void  *)&w_salte_linea;
     sqlstm.sqhstl[5] = (unsigned int  )33;
     sqlstm.sqhsts[5] = (         int  )0;
     sqlstm.sqindv[5] = (         void  *)0;
     sqlstm.sqinds[5] = (         int  )0;
     sqlstm.sqharm[5] = (unsigned int  )0;
     sqlstm.sqadto[5] = (unsigned short )0;
     sqlstm.sqtdso[5] = (unsigned short )0;
     sqlstm.sqhstv[6] = (         void  *)&w_condensado_on;
     sqlstm.sqhstl[6] = (unsigned int  )33;
     sqlstm.sqhsts[6] = (         int  )0;
     sqlstm.sqindv[6] = (         void  *)0;
     sqlstm.sqinds[6] = (         int  )0;
     sqlstm.sqharm[6] = (unsigned int  )0;
     sqlstm.sqadto[6] = (unsigned short )0;
     sqlstm.sqtdso[6] = (unsigned short )0;
     sqlstm.sqhstv[7] = (         void  *)&w_condensado_off;
     sqlstm.sqhstl[7] = (unsigned int  )33;
     sqlstm.sqhsts[7] = (         int  )0;
     sqlstm.sqindv[7] = (         void  *)0;
     sqlstm.sqinds[7] = (         int  )0;
     sqlstm.sqharm[7] = (unsigned int  )0;
     sqlstm.sqadto[7] = (unsigned short )0;
     sqlstm.sqtdso[7] = (unsigned short )0;
     sqlstm.sqhstv[8] = (         void  *)&w_ancho_on;
     sqlstm.sqhstl[8] = (unsigned int  )33;
     sqlstm.sqhsts[8] = (         int  )0;
     sqlstm.sqindv[8] = (         void  *)0;
     sqlstm.sqinds[8] = (         int  )0;
     sqlstm.sqharm[8] = (unsigned int  )0;
     sqlstm.sqadto[8] = (unsigned short )0;
     sqlstm.sqtdso[8] = (unsigned short )0;
     sqlstm.sqhstv[9] = (         void  *)&w_ancho_off;
     sqlstm.sqhstl[9] = (unsigned int  )33;
     sqlstm.sqhsts[9] = (         int  )0;
     sqlstm.sqindv[9] = (         void  *)0;
     sqlstm.sqinds[9] = (         int  )0;
     sqlstm.sqharm[9] = (unsigned int  )0;
     sqlstm.sqadto[9] = (unsigned short )0;
     sqlstm.sqtdso[9] = (unsigned short )0;
     sqlstm.sqhstv[10] = (         void  *)&w_enfatizado_on;
     sqlstm.sqhstl[10] = (unsigned int  )33;
     sqlstm.sqhsts[10] = (         int  )0;
     sqlstm.sqindv[10] = (         void  *)0;
     sqlstm.sqinds[10] = (         int  )0;
     sqlstm.sqharm[10] = (unsigned int  )0;
     sqlstm.sqadto[10] = (unsigned short )0;
     sqlstm.sqtdso[10] = (unsigned short )0;
     sqlstm.sqhstv[11] = (         void  *)&w_enfatizado_off;
     sqlstm.sqhstl[11] = (unsigned int  )33;
     sqlstm.sqhsts[11] = (         int  )0;
     sqlstm.sqindv[11] = (         void  *)0;
     sqlstm.sqinds[11] = (         int  )0;
     sqlstm.sqharm[11] = (unsigned int  )0;
     sqlstm.sqadto[11] = (unsigned short )0;
     sqlstm.sqtdso[11] = (unsigned short )0;
     sqlstm.sqhstv[12] = (         void  *)&w_italica_on;
     sqlstm.sqhstl[12] = (unsigned int  )33;
     sqlstm.sqhsts[12] = (         int  )0;
     sqlstm.sqindv[12] = (         void  *)0;
     sqlstm.sqinds[12] = (         int  )0;
     sqlstm.sqharm[12] = (unsigned int  )0;
     sqlstm.sqadto[12] = (unsigned short )0;
     sqlstm.sqtdso[12] = (unsigned short )0;
     sqlstm.sqhstv[13] = (         void  *)&w_italica_off;
     sqlstm.sqhstl[13] = (unsigned int  )33;
     sqlstm.sqhsts[13] = (         int  )0;
     sqlstm.sqindv[13] = (         void  *)0;
     sqlstm.sqinds[13] = (         int  )0;
     sqlstm.sqharm[13] = (unsigned int  )0;
     sqlstm.sqadto[13] = (unsigned short )0;
     sqlstm.sqtdso[13] = (unsigned short )0;
     sqlstm.sqhstv[14] = (         void  *)&w_subrayado_on;
     sqlstm.sqhstl[14] = (unsigned int  )33;
     sqlstm.sqhsts[14] = (         int  )0;
     sqlstm.sqindv[14] = (         void  *)0;
     sqlstm.sqinds[14] = (         int  )0;
     sqlstm.sqharm[14] = (unsigned int  )0;
     sqlstm.sqadto[14] = (unsigned short )0;
     sqlstm.sqtdso[14] = (unsigned short )0;
     sqlstm.sqhstv[15] = (         void  *)&w_subrayado_off;
     sqlstm.sqhstl[15] = (unsigned int  )33;
     sqlstm.sqhsts[15] = (         int  )0;
     sqlstm.sqindv[15] = (         void  *)0;
     sqlstm.sqinds[15] = (         int  )0;
     sqlstm.sqharm[15] = (unsigned int  )0;
     sqlstm.sqadto[15] = (unsigned short )0;
     sqlstm.sqtdso[15] = (unsigned short )0;
     sqlstm.sqhstv[16] = (         void  *)&w_set_vertical;
     sqlstm.sqhstl[16] = (unsigned int  )33;
     sqlstm.sqhsts[16] = (         int  )0;
     sqlstm.sqindv[16] = (         void  *)0;
     sqlstm.sqinds[16] = (         int  )0;
     sqlstm.sqharm[16] = (unsigned int  )0;
     sqlstm.sqadto[16] = (unsigned short )0;
     sqlstm.sqtdso[16] = (unsigned short )0;
     sqlstm.sqhstv[17] = (         void  *)&w_vertical;
     sqlstm.sqhstl[17] = (unsigned int  )33;
     sqlstm.sqhsts[17] = (         int  )0;
     sqlstm.sqindv[17] = (         void  *)0;
     sqlstm.sqinds[17] = (         int  )0;
     sqlstm.sqharm[17] = (unsigned int  )0;
     sqlstm.sqadto[17] = (unsigned short )0;
     sqlstm.sqtdso[17] = (unsigned short )0;
     sqlstm.sqhstv[18] = (         void  *)&w_clear_buffer;
     sqlstm.sqhstl[18] = (unsigned int  )33;
     sqlstm.sqhsts[18] = (         int  )0;
     sqlstm.sqindv[18] = (         void  *)0;
     sqlstm.sqinds[18] = (         int  )0;
     sqlstm.sqharm[18] = (unsigned int  )0;
     sqlstm.sqadto[18] = (unsigned short )0;
     sqlstm.sqtdso[18] = (unsigned short )0;
     sqlstm.sqhstv[19] = (         void  *)&w_line_feed8;
     sqlstm.sqhstl[19] = (unsigned int  )33;
     sqlstm.sqhsts[19] = (         int  )0;
     sqlstm.sqindv[19] = (         void  *)0;
     sqlstm.sqinds[19] = (         int  )0;
     sqlstm.sqharm[19] = (unsigned int  )0;
     sqlstm.sqadto[19] = (unsigned short )0;
     sqlstm.sqtdso[19] = (unsigned short )0;
     sqlstm.sqhstv[20] = (         void  *)&w_line_feed6;
     sqlstm.sqhstl[20] = (unsigned int  )33;
     sqlstm.sqhsts[20] = (         int  )0;
     sqlstm.sqindv[20] = (         void  *)0;
     sqlstm.sqinds[20] = (         int  )0;
     sqlstm.sqharm[20] = (unsigned int  )0;
     sqlstm.sqadto[20] = (unsigned short )0;
     sqlstm.sqtdso[20] = (unsigned short )0;
     sqlstm.sqhstv[21] = (         void  *)&w_grafica;
     sqlstm.sqhstl[21] = (unsigned int  )33;
     sqlstm.sqhsts[21] = (         int  )0;
     sqlstm.sqindv[21] = (         void  *)0;
     sqlstm.sqinds[21] = (         int  )0;
     sqlstm.sqharm[21] = (unsigned int  )0;
     sqlstm.sqadto[21] = (unsigned short )0;
     sqlstm.sqtdso[21] = (unsigned short )0;
     sqlstm.sqhstv[22] = (         void  *)&w_line_feed8vo;
     sqlstm.sqhstl[22] = (unsigned int  )33;
     sqlstm.sqhsts[22] = (         int  )0;
     sqlstm.sqindv[22] = (         void  *)0;
     sqlstm.sqinds[22] = (         int  )0;
     sqlstm.sqharm[22] = (unsigned int  )0;
     sqlstm.sqadto[22] = (unsigned short )0;
     sqlstm.sqtdso[22] = (unsigned short )0;
     sqlstm.sqhstv[23] = (         void  *)&w_alto_on;
     sqlstm.sqhstl[23] = (unsigned int  )33;
     sqlstm.sqhsts[23] = (         int  )0;
     sqlstm.sqindv[23] = (         void  *)0;
     sqlstm.sqinds[23] = (         int  )0;
     sqlstm.sqharm[23] = (unsigned int  )0;
     sqlstm.sqadto[23] = (unsigned short )0;
     sqlstm.sqtdso[23] = (unsigned short )0;
     sqlstm.sqhstv[24] = (         void  *)&w_alto_off;
     sqlstm.sqhstl[24] = (unsigned int  )33;
     sqlstm.sqhsts[24] = (         int  )0;
     sqlstm.sqindv[24] = (         void  *)0;
     sqlstm.sqinds[24] = (         int  )0;
     sqlstm.sqharm[24] = (unsigned int  )0;
     sqlstm.sqadto[24] = (unsigned short )0;
     sqlstm.sqtdso[24] = (unsigned short )0;
     sqlstm.sqhstv[25] = (         void  *)&w_tamano_pagina;
     sqlstm.sqhstl[25] = (unsigned int  )33;
     sqlstm.sqhsts[25] = (         int  )0;
     sqlstm.sqindv[25] = (         void  *)0;
     sqlstm.sqinds[25] = (         int  )0;
     sqlstm.sqharm[25] = (unsigned int  )0;
     sqlstm.sqadto[25] = (unsigned short )0;
     sqlstm.sqtdso[25] = (unsigned short )0;
     sqlstm.sqhstv[26] = (         void  *)&w_nql_on;
     sqlstm.sqhstl[26] = (unsigned int  )33;
     sqlstm.sqhsts[26] = (         int  )0;
     sqlstm.sqindv[26] = (         void  *)0;
     sqlstm.sqinds[26] = (         int  )0;
     sqlstm.sqharm[26] = (unsigned int  )0;
     sqlstm.sqadto[26] = (unsigned short )0;
     sqlstm.sqtdso[26] = (unsigned short )0;
     sqlstm.sqhstv[27] = (         void  *)&w_nql_off;
     sqlstm.sqhstl[27] = (unsigned int  )33;
     sqlstm.sqhsts[27] = (         int  )0;
     sqlstm.sqindv[27] = (         void  *)0;
     sqlstm.sqinds[27] = (         int  )0;
     sqlstm.sqharm[27] = (unsigned int  )0;
     sqlstm.sqadto[27] = (unsigned short )0;
     sqlstm.sqtdso[27] = (unsigned short )0;
     sqlstm.sqhstv[28] = (         void  *)&w_color;
     sqlstm.sqhstl[28] = (unsigned int  )33;
     sqlstm.sqhsts[28] = (         int  )0;
     sqlstm.sqindv[28] = (         void  *)0;
     sqlstm.sqinds[28] = (         int  )0;
     sqlstm.sqharm[28] = (unsigned int  )0;
     sqlstm.sqadto[28] = (unsigned short )0;
     sqlstm.sqtdso[28] = (unsigned short )0;
     sqlstm.sqhstv[29] = (         void  *)&w_idioma;
     sqlstm.sqhstl[29] = (unsigned int  )33;
     sqlstm.sqhsts[29] = (         int  )0;
     sqlstm.sqindv[29] = (         void  *)0;
     sqlstm.sqinds[29] = (         int  )0;
     sqlstm.sqharm[29] = (unsigned int  )0;
     sqlstm.sqadto[29] = (unsigned short )0;
     sqlstm.sqtdso[29] = (unsigned short )0;
     sqlstm.sqhstv[30] = (         void  *)&impresorat;
     sqlstm.sqhstl[30] = (unsigned int  )5;
     sqlstm.sqhsts[30] = (         int  )0;
     sqlstm.sqindv[30] = (         void  *)0;
     sqlstm.sqinds[30] = (         int  )0;
     sqlstm.sqharm[30] = (unsigned int  )0;
     sqlstm.sqadto[30] = (unsigned short )0;
     sqlstm.sqtdso[30] = (unsigned short )0;
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



    if (sqlca.sqlcode) {
         fprintf (stderr, "Error leyendo impresoras (%d) \n", sqlca.sqlcode);
    }

    if (!sqlca.sqlcode || sqlca.sqlcode != 1403 ) {
        w_impresora.arr[w_impresora.len]          = '\0';
        w_modelo.arr[w_modelo.len]                = '\0';
        w_diezcpi.arr[w_diezcpi.len]              = '\0';
        w_elite.arr[w_elite.len]                  = '\0';
        w_salte_pagina.arr[w_salte_pagina.len]    = '\0';
        w_salte_linea.arr[w_salte_linea.len]      = '\0';
        w_condensado_on.arr[w_condensado_on.len]  = '\0';
        w_condensado_off.arr[w_condensado_off.len]= '\0';
        w_ancho_on.arr[w_ancho_on.len]            = '\0';
        w_ancho_off.arr[w_ancho_off.len]          = '\0';
        w_enfatizado_on.arr[w_enfatizado_on.len]  = '\0';
        w_enfatizado_off.arr[w_enfatizado_off.len]= '\0';
        w_italica_on.arr[w_italica_on.len]        = '\0';
        w_italica_off.arr[w_italica_off.len]      = '\0';
        w_subrayado_on.arr[w_subrayado_on.len]    = '\0';
        w_subrayado_off.arr[w_subrayado_off.len]  = '\0';
        w_set_vertical.arr[w_set_vertical.len]    = '\0';
        w_vertical.arr[w_vertical.len]            = '\0';
        w_clear_buffer.arr[w_clear_buffer.len]    = '\0';
        w_line_feed8.arr[w_line_feed8.len]        = '\0';
        w_line_feed6.arr[w_line_feed6.len]        = '\0';
        w_grafica.arr[w_grafica.len]              = '\0';
        w_line_feed8vo.arr[w_line_feed8vo.len]    = '\0';
        w_alto_on.arr[w_alto_on.len]              = '\0';
        w_alto_off.arr[w_alto_off.len]            = '\0';
        w_tamano_pagina.arr[w_tamano_pagina.len]  = '\0';
        w_nql_on.arr[w_nql_on.len]                = '\0';
        w_nql_off.arr[w_nql_off.len]              = '\0';
        w_color.arr[w_color.len]                  = '\0';
        w_idioma.arr[w_idioma.len]                = '\0';

        strcpy(impresora,w_impresora.arr);
        strcpy(modelo,w_modelo.arr);
        strcpy(diezcpi,w_diezcpi.arr);
        strcpy(elite,w_elite.arr);
        strcpy(salte_pagina,w_salte_pagina.arr);
        strcpy(salte_linea,w_salte_linea.arr);
        strcpy(condensado_on,w_condensado_on.arr);
        strcpy(condensado_off,w_condensado_off.arr);
        strcpy(ancho_on,w_ancho_on.arr);
        strcpy(ancho_off,w_ancho_off.arr);
        strcpy(enfatizado_on,w_enfatizado_on.arr);
        strcpy(enfatizado_off,w_enfatizado_off.arr);
        strcpy(italica_on,w_italica_on.arr);
        strcpy(italica_off,w_italica_off.arr);
        strcpy(subrayado_on,w_subrayado_on.arr);
        strcpy(subrayado_off,w_subrayado_off.arr);
        strcpy(set_vertical,w_set_vertical.arr);
        strcpy(vertical,w_vertical.arr);
        strcpy(clear_buffer,w_clear_buffer.arr);
        strcpy(line_feed8,w_line_feed8.arr);
        strcpy(line_feed6,w_line_feed6.arr);
        strcpy(grafica,w_grafica.arr);
        strcpy(line_feed8vo,w_line_feed8vo.arr);
        strcpy(alto_on,w_alto_on.arr);
        strcpy(alto_off,w_alto_off.arr);
        strcpy(tamano_pagina,w_tamano_pagina.arr);
        strcpy(nql_on,w_nql_on.arr);
        strcpy(nql_off,w_nql_off.arr);
        strcpy(color,w_color.arr);
        strcpy(idioma,w_idioma.arr);
    }

  if ((fp = fopen(w_ruta.arr, "w")) == NULL)
     {
      fprintf (stderr,"Error abriendo archivo pipe \n");
      exit (1);
  }

return 0;
}

int cierre_impresora()
{
  char comando[50];
  char archivo[50];

  fclose(fp);

  if (!strcmp(impresorat.arr,"t")) {
//     strcpy(comando,"README.com");
     strcpy(comando,w_programa.arr);
     sprintf(archivo," %s",w_ruta.arr);
     strcat(comando,archivo);
     system(comando);
  }

  return 0;
}
