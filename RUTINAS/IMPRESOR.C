
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
           char  filnam[22];
};
static const struct sqlcxp sqlfpn =
{
    21,
    ".\\rutinas\\impresor.pc"
};


static const unsigned long sqlctx = 1089226566;


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
   unsigned char    *sqhstv[31];
   unsigned long    sqhstl[31];
	    short   *sqindv[31];
   unsigned long    sqharm[31];
   unsigned long     *sqharc[31];
} sqlstm = {8,31};

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

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{8,4114,
2,0,0,1,74,0,4,107,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
24,0,0,2,537,0,4,126,0,31,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,1,9,0,0,
};


/******************************************************************
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
#include <sqlproto.h>

int strorg();

/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* Variables de la tabla impresora. */
/* VARCHAR    w_impresora     [03]; */ 
struct { unsigned short len; unsigned char arr[3]; } w_impresora;

/* VARCHAR    w_modelo        [26]; */ 
struct { unsigned short len; unsigned char arr[26]; } w_modelo;

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

int abre_impresora();

int busco_impresora(device)
char    device[];
{
strlow (device);

strcpy (impresorat.arr, device);
impresorat.len = strlen(impresorat.arr);

/* EXEC SQL SELECT   ruta into :w_ruta
         FROM     modelos
         WHERE    impresora = :impresorat and
                  usuario   = USER; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 8;
sqlstm.arrsiz = 2;
sqlstm.stmt = "select ruta into :b0  from modelos where (impresora=:b1 and u\
suario=user )";
sqlstm.iters = (unsigned long  )1;
sqlstm.offset = (unsigned short)2;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlstm.sqhstv[0] = (unsigned char  *)&w_ruta;
sqlstm.sqhstl[0] = (unsigned long  )103;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqhstv[1] = (unsigned char  *)&impresorat;
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




if (sqlca.sqlcode) {
   printf ("Device Incorrecto o no existe.\n");
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

     sqlstm.sqlvsn = 8;
     sqlstm.arrsiz = 31;
     sqlstm.stmt = "select impresora ,modelo ,normal ,elite ,salte_pagina ,s\
alte_linea ,condensado_on ,condensado_off ,ancho_on ,ancho_off ,enfatizado_on \
,enfatizado_off ,italica_on ,italica_off ,subrayado_on ,subrayado_off ,set_ver\
tical ,vertical ,clear_buffer ,line_feed8 ,line_feed6 ,grafica ,line_feed8vo ,\
alto_on ,alto_off ,tamano_pagina ,nql_on ,nql_off ,color ,idioma into :b0,:b1,\
:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b12,:b13,:b14,:b15,:b16,:b17,:b18,:\
b19,:b20,:b21,:b22,:b23,:b24,:b25,:b26,:b27,:b28,:b29  from impresoras where i\
mpresora=:b30";
     sqlstm.iters = (unsigned long  )1;
     sqlstm.offset = (unsigned short)24;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)0;
     sqlstm.sqhstv[0] = (unsigned char  *)&w_impresora;
     sqlstm.sqhstl[0] = (unsigned long  )5;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqhstv[1] = (unsigned char  *)&w_modelo;
     sqlstm.sqhstl[1] = (unsigned long  )28;
     sqlstm.sqindv[1] = (         short *)0;
     sqlstm.sqharm[1] = (unsigned long )0;
     sqlstm.sqhstv[2] = (unsigned char  *)&w_diezcpi;
     sqlstm.sqhstl[2] = (unsigned long  )33;
     sqlstm.sqindv[2] = (         short *)0;
     sqlstm.sqharm[2] = (unsigned long )0;
     sqlstm.sqhstv[3] = (unsigned char  *)&w_elite;
     sqlstm.sqhstl[3] = (unsigned long  )33;
     sqlstm.sqindv[3] = (         short *)0;
     sqlstm.sqharm[3] = (unsigned long )0;
     sqlstm.sqhstv[4] = (unsigned char  *)&w_salte_pagina;
     sqlstm.sqhstl[4] = (unsigned long  )33;
     sqlstm.sqindv[4] = (         short *)0;
     sqlstm.sqharm[4] = (unsigned long )0;
     sqlstm.sqhstv[5] = (unsigned char  *)&w_salte_linea;
     sqlstm.sqhstl[5] = (unsigned long  )33;
     sqlstm.sqindv[5] = (         short *)0;
     sqlstm.sqharm[5] = (unsigned long )0;
     sqlstm.sqhstv[6] = (unsigned char  *)&w_condensado_on;
     sqlstm.sqhstl[6] = (unsigned long  )33;
     sqlstm.sqindv[6] = (         short *)0;
     sqlstm.sqharm[6] = (unsigned long )0;
     sqlstm.sqhstv[7] = (unsigned char  *)&w_condensado_off;
     sqlstm.sqhstl[7] = (unsigned long  )33;
     sqlstm.sqindv[7] = (         short *)0;
     sqlstm.sqharm[7] = (unsigned long )0;
     sqlstm.sqhstv[8] = (unsigned char  *)&w_ancho_on;
     sqlstm.sqhstl[8] = (unsigned long  )33;
     sqlstm.sqindv[8] = (         short *)0;
     sqlstm.sqharm[8] = (unsigned long )0;
     sqlstm.sqhstv[9] = (unsigned char  *)&w_ancho_off;
     sqlstm.sqhstl[9] = (unsigned long  )33;
     sqlstm.sqindv[9] = (         short *)0;
     sqlstm.sqharm[9] = (unsigned long )0;
     sqlstm.sqhstv[10] = (unsigned char  *)&w_enfatizado_on;
     sqlstm.sqhstl[10] = (unsigned long  )33;
     sqlstm.sqindv[10] = (         short *)0;
     sqlstm.sqharm[10] = (unsigned long )0;
     sqlstm.sqhstv[11] = (unsigned char  *)&w_enfatizado_off;
     sqlstm.sqhstl[11] = (unsigned long  )33;
     sqlstm.sqindv[11] = (         short *)0;
     sqlstm.sqharm[11] = (unsigned long )0;
     sqlstm.sqhstv[12] = (unsigned char  *)&w_italica_on;
     sqlstm.sqhstl[12] = (unsigned long  )33;
     sqlstm.sqindv[12] = (         short *)0;
     sqlstm.sqharm[12] = (unsigned long )0;
     sqlstm.sqhstv[13] = (unsigned char  *)&w_italica_off;
     sqlstm.sqhstl[13] = (unsigned long  )33;
     sqlstm.sqindv[13] = (         short *)0;
     sqlstm.sqharm[13] = (unsigned long )0;
     sqlstm.sqhstv[14] = (unsigned char  *)&w_subrayado_on;
     sqlstm.sqhstl[14] = (unsigned long  )33;
     sqlstm.sqindv[14] = (         short *)0;
     sqlstm.sqharm[14] = (unsigned long )0;
     sqlstm.sqhstv[15] = (unsigned char  *)&w_subrayado_off;
     sqlstm.sqhstl[15] = (unsigned long  )33;
     sqlstm.sqindv[15] = (         short *)0;
     sqlstm.sqharm[15] = (unsigned long )0;
     sqlstm.sqhstv[16] = (unsigned char  *)&w_set_vertical;
     sqlstm.sqhstl[16] = (unsigned long  )33;
     sqlstm.sqindv[16] = (         short *)0;
     sqlstm.sqharm[16] = (unsigned long )0;
     sqlstm.sqhstv[17] = (unsigned char  *)&w_vertical;
     sqlstm.sqhstl[17] = (unsigned long  )33;
     sqlstm.sqindv[17] = (         short *)0;
     sqlstm.sqharm[17] = (unsigned long )0;
     sqlstm.sqhstv[18] = (unsigned char  *)&w_clear_buffer;
     sqlstm.sqhstl[18] = (unsigned long  )33;
     sqlstm.sqindv[18] = (         short *)0;
     sqlstm.sqharm[18] = (unsigned long )0;
     sqlstm.sqhstv[19] = (unsigned char  *)&w_line_feed8;
     sqlstm.sqhstl[19] = (unsigned long  )33;
     sqlstm.sqindv[19] = (         short *)0;
     sqlstm.sqharm[19] = (unsigned long )0;
     sqlstm.sqhstv[20] = (unsigned char  *)&w_line_feed6;
     sqlstm.sqhstl[20] = (unsigned long  )33;
     sqlstm.sqindv[20] = (         short *)0;
     sqlstm.sqharm[20] = (unsigned long )0;
     sqlstm.sqhstv[21] = (unsigned char  *)&w_grafica;
     sqlstm.sqhstl[21] = (unsigned long  )33;
     sqlstm.sqindv[21] = (         short *)0;
     sqlstm.sqharm[21] = (unsigned long )0;
     sqlstm.sqhstv[22] = (unsigned char  *)&w_line_feed8vo;
     sqlstm.sqhstl[22] = (unsigned long  )33;
     sqlstm.sqindv[22] = (         short *)0;
     sqlstm.sqharm[22] = (unsigned long )0;
     sqlstm.sqhstv[23] = (unsigned char  *)&w_alto_on;
     sqlstm.sqhstl[23] = (unsigned long  )33;
     sqlstm.sqindv[23] = (         short *)0;
     sqlstm.sqharm[23] = (unsigned long )0;
     sqlstm.sqhstv[24] = (unsigned char  *)&w_alto_off;
     sqlstm.sqhstl[24] = (unsigned long  )33;
     sqlstm.sqindv[24] = (         short *)0;
     sqlstm.sqharm[24] = (unsigned long )0;
     sqlstm.sqhstv[25] = (unsigned char  *)&w_tamano_pagina;
     sqlstm.sqhstl[25] = (unsigned long  )33;
     sqlstm.sqindv[25] = (         short *)0;
     sqlstm.sqharm[25] = (unsigned long )0;
     sqlstm.sqhstv[26] = (unsigned char  *)&w_nql_on;
     sqlstm.sqhstl[26] = (unsigned long  )33;
     sqlstm.sqindv[26] = (         short *)0;
     sqlstm.sqharm[26] = (unsigned long )0;
     sqlstm.sqhstv[27] = (unsigned char  *)&w_nql_off;
     sqlstm.sqhstl[27] = (unsigned long  )33;
     sqlstm.sqindv[27] = (         short *)0;
     sqlstm.sqharm[27] = (unsigned long )0;
     sqlstm.sqhstv[28] = (unsigned char  *)&w_color;
     sqlstm.sqhstl[28] = (unsigned long  )33;
     sqlstm.sqindv[28] = (         short *)0;
     sqlstm.sqharm[28] = (unsigned long )0;
     sqlstm.sqhstv[29] = (unsigned char  *)&w_idioma;
     sqlstm.sqhstl[29] = (unsigned long  )33;
     sqlstm.sqindv[29] = (         short *)0;
     sqlstm.sqharm[29] = (unsigned long )0;
     sqlstm.sqhstv[30] = (unsigned char  *)&impresorat;
     sqlstm.sqhstl[30] = (unsigned long  )5;
     sqlstm.sqindv[30] = (         short *)0;
     sqlstm.sqharm[30] = (unsigned long )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (!sqlca.sqlcode || sqlca.sqlcode != 1403) {
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
void cierre_impresora()
{
  fclose(fp);
}
