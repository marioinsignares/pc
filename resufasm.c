
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
    ".\\resufasm.pc"
};


static unsigned long sqlctx = 537171;


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
            void  *sqhstv[18];
   unsigned int   sqhstl[18];
            int   sqhsts[18];
            void  *sqindv[18];
            int   sqinds[18];
   unsigned int   sqharm[18];
   unsigned int   *sqharc[18];
   unsigned short  sqadto[18];
   unsigned short  sqtdso[18];
} sqlstm = {10,18};

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

 static const char *sq0002 = 
"to<=to_date(to_number(:b2),'yyyymmdd')) and codigo_cliente>=:b3) and codigo_\
cliente<=:b4) and libro=to_number(:b5)) and decode(:b6,0,0,f.lista)=:b6) and  \
not exists (select 'x'  from basura where ((f.tipo_factura=tipo_factura and f.\
tipo_documento=tipo_documento) and f.numero_factura=numero_factura))) group by\
 codigo_cliente order by codigo_cliente            ";

 static const char *sq0011 = 
"umber(:b2),'yyyymmdd')) and codigo_cliente>=:b3) and codigo_cliente<=:b4) an\
d libro=to_number(:b5)) and decode(:b6,0,0,f.lista)=:b6) and  not exists (sele\
ct 'x'  from basura where ((f.tipo_factura=tipo_factura and f.tipo_documento=t\
ipo_documento) and f.numero_factura=numero_factura)))           ";

 static const char *sq0006 = 
"to<=to_date(to_number(:b2),'yyyymmdd')) and codigo_cliente>=:b3) and codigo_\
cliente<=:b4) and libro=to_number(:b5)) and decode(:b6,0,0,f.lista)=:b6) and e\
xists (select 'x'  from basura where ((f.tipo_factura=tipo_factura and f.tipo_\
documento=tipo_documento) and f.numero_factura=numero_factura))) group by codi\
go_cliente order by codigo_cliente            ";

 static const char *sq0005 = 
"ocumento<=to_date(to_number(:b2),'yyyymmdd')) and substr(codigo_cliente,1,2)\
=:b3) and substr(f.codigo_cliente,1,2)=c.codigo) and libro=to_number(:b4)) and\
 decode(:b5,0,0,f.lista)=:b5) and  not exists (select 'x'  from basura where (\
(f.tipo_factura=tipo_factura and f.tipo_documento=tipo_documento) and f.numero\
_factura=numero_factura))) group by c.nombre           ";

 static const char *sq0009 = 
"o_date(to_number(:b1),'yyyymmdd')) and fecha_documento<=to_date(to_number(:b\
2),'yyyymmdd')) and codigo_cliente>=:b3) and codigo_cliente<=:b4) and v.codigo\
=to_number(:b5)) and substr(f.codigo_cliente,1,2)=c.codigo) and c.vendedor=v.c\
odigo) and c.dpto=d.codigo) and d.zonas=z.codigo) and libro=to_number(:b6)) an\
d decode(to_number(:b7),0,0,f.lista)=to_number(:b7)) and  not exists (select '\
x'  from opticasp where codigo_cliente=f.codigo_cliente)) and  not exists (sel\
ect 'x'  from basura where ((f.tipo_factura=tipo_factura and f.tipo_documento=\
tipo_documento) and f.numero_factura=numero_factura))) group by v.codigo,v.cod\
igo_nom,v.nombre,z.nombre order by v.codigo,z.nombre            ";

 static const char *sq0024 = 
"o_date(to_number(:b1),'yyyymmdd')) and fecha_documento<=to_date(to_number(:b\
2),'yyyymmdd')) and codigo_cliente>=:b3) and codigo_cliente<=:b4) and v.codigo\
=to_number(:b5)) and substr(f.codigo_cliente,1,2)=c.codigo) and c.vendedor=v.c\
odigo) and c.dpto=d.codigo) and d.zonas=z.codigo) and libro=to_number(:b6)) an\
d decode(:b7,0,0,f.lista)=:b7) and exists (select 'x'  from opticasp where cod\
igo_cliente=f.codigo_cliente)) and  not exists (select 'x'  from basura where \
((f.tipo_factura=tipo_factura and f.tipo_documento=tipo_documento) and f.numer\
o_factura=numero_factura))) group by v.codigo,v.codigo_nom,v.nombre,z.nombre o\
rder by v.codigo,z.nombre            ";

 static const char *sq0003 = 
"r(:b1)) and substr(codigo_cliente,1,2)=:b2) and nvl(valor_cartera,0)>0) and \
substr(i.codigo_cliente,1,2)=c.codigo) and i.tipo_documento='RC') and i.codigo\
_cliente>'0') and i.estado<>'2') and i.codigo_emp=:b3) and decode(:b4,0,0,i.li\
sta)=:b4) group by c.nombre           ";

 static const char *sq0004 = 
"r(:b1)) and substr(codigo_cliente,1,2)=:b2) and nvl(valor_cartera,0)>0) and \
substr(i.codigo_cliente,1,2)=c.codigo) and i.tipo_documento='RC') and i.codigo\
_cliente>'0') and i.estado<>'2') and decode(:b3,0,0,i.lista)=:b3) and i.codigo\
_emp=:b5) group by c.nombre           ";

 static const char *sq0012 = 
"cha,'yyyymmdd'))<=to_number(:b1)) and nvl(valor_cartera,0)>0) and substr(i.c\
odigo_cliente,1,2)=c.codigo) and i.tipo_documento='RC') and i.codigo_cliente>'\
0') and i.estado<>'2') and i.codigo_emp=:b2) and c.vendedor=v.codigo) and z.co\
digo=c.zona) and v.codigo=to_number(:b3)) and decode(:b4,0,0,i.lista)=:b4) and\
  not exists (select 'x'  from opticasp where codigo_cliente=i.codigo_cliente)\
) group by v.nombre order by v.nombre            ";

 static const char *sq0014 = 
"cha,'yyyymmdd'))<=to_number(:b1)) and nvl(valor_cartera,0)>0) and substr(i.c\
odigo_cliente,1,2)=c.codigo) and i.tipo_documento='RC') and i.codigo_cliente>'\
0') and i.estado<>'2') and i.codigo_emp=:b2) and c.vendedor=v.codigo) and z.co\
digo=c.zona) and v.codigo=to_number(:b3)) and decode(:b4,0,0,i.lista)=:b4) and\
  not exists (select 'x'  from opticasp where codigo_cliente=i.codigo_cliente)\
) group by v.nombre order by v.nombre            ";

 static const char *sq0020 = 
"cha,'yyyymmdd'))<=to_number(:b1)) and nvl(valor_cartera,0)>0) and substr(i.c\
odigo_cliente,1,2)=c.codigo) and i.tipo_documento='RC') and i.codigo_cliente>'\
0') and i.estado<>'2') and i.codigo_emp=:b2) and c.vendedor=v.codigo) and z.co\
digo=c.zona) and v.codigo=to_number(:b3)) and decode(:b4,0,0,i.lista)=:b4) and\
 exists (select 'x'  from opticasp where codigo_cliente=i.codigo_cliente)) gro\
up by v.nombre order by v.nombre            ";

 static const char *sq0021 = 
"cha,'yyyymmdd'))<=to_number(:b1)) and nvl(valor_cartera,0)>0) and substr(i.c\
odigo_cliente,1,2)=c.codigo) and i.tipo_documento='RC') and i.codigo_cliente>'\
0') and i.estado<>'2') and i.codigo_emp=:b2) and c.vendedor=v.codigo) and z.co\
digo=c.zona) and v.codigo=to_number(:b3)) and decode(:b4,0,0,i.lista)=:b4) and\
 exists (select 'x'  from opticasp where codigo_cliente=i.codigo_cliente)) gro\
up by v.nombre order by v.nombre            ";

 static const char *sq0013 = 
"artera,0)>0) and i.tipo_documento='RC') and i.codigo_cliente>'0') and i.esta\
do<>'2') and decode(:b2,0,0,i.lista)=:b2) and i.codigo_emp=:b4) and  not exist\
s (select 'x'  from opticasp where codigo_cliente=i.codigo_cliente))          \
 ";

 static const char *sq0015 = 
"artera,0)>0) and i.tipo_documento='RC') and i.codigo_cliente>'0') and i.esta\
do<>'2') and i.codigo_emp=:b2) and decode(:b3,0,0,i.lista)=:b3) and  not exist\
s (select 'x'  from opticasp where codigo_cliente=i.codigo_cliente))          \
 ";

 static const char *sq0016 = 
"artera,0)>0) and i.tipo_documento='RC') and i.codigo_cliente>'0') and i.esta\
do<>'2') and i.codigo_emp=:b2) and decode(:b3,0,0,i.lista)=:b3) and exists (se\
lect 'x'  from opticasp where codigo_cliente=i.codigo_cliente))           ";

 static const char *sq0017 = 
"artera,0)>0) and i.tipo_documento='RC') and i.codigo_cliente>'0') and i.esta\
do<>'2') and i.codigo_emp=:b2) and decode(:b3,0,0,i.lista)=:b3) and exists (se\
lect 'x'  from opticasp where codigo_cliente=i.codigo_cliente))           ";

 static const char *sq0019 = 
"rtera,0)>0) and i.tipo_documento='RC') and i.codigo_cliente>'0') and i.estad\
o<>'2') and decode(:b2,0,0,i.lista)=:b2) and i.codigo_emp=:b4)           ";

 static const char *sq0018 = 
"rtera,0)>0) and i.tipo_documento='RC') and i.codigo_cliente>'0') and i.estad\
o<>'2') and decode(:b2,0,0,i.lista)=:b2) and i.codigo_emp=:b4)           ";

 static const char *sq0008 = 
"tipo_documento='C')) and fecha_documento>=to_date(to_number(:b1),'yyyymmdd')\
) and fecha_documento<=to_date(to_number(:b2),'yyyymmdd')) and codigo_cliente>\
=:b3) and codigo_cliente<=:b4) and substr(f.codigo_cliente,1,2)=c.codigo) and \
c.vendedor=v.codigo) and c.dpto=d.codigo) and d.zonas=z.codigo) and libro=to_n\
umber(:b5)) and decode(to_number(:b6),0,0,f.lista)=to_number(:b6)) and  not ex\
ists (select 'x'  from opticasp where codigo_cliente=f.codigo_cliente)) and  n\
ot exists (select 'x'  from basura where ((f.tipo_factura=tipo_factura and f.t\
ipo_documento=tipo_documento) and f.numero_factura=numero_factura))) group by \
v.codigo,v.codigo_nom,v.nombre,z.nombre,c.nombre order by v.codigo,z.nombre,c.\
nombre            ";

 static const char *sq0022 = 
"umber(:b1),'yyyymmdd')) and fecha_documento<=to_date(to_number(:b2),'yyyymmd\
d')) and codigo_cliente>=:b3) and codigo_cliente<=:b4) and substr(f.codigo_cli\
ente,1,2)=c.codigo) and c.vendedor=v.codigo) and c.dpto=d.codigo) and d.zonas=\
z.codigo) and libro=to_number(:b5)) and decode(:b6,0,0,f.lista)=:b6) and  not \
exists (select 'x'  from opticasp where codigo_cliente=f.codigo_cliente)) and \
 not exists (select 'x'  from basura where ((f.tipo_factura=tipo_factura and f\
.tipo_documento=tipo_documento) and f.numero_factura=numero_factura)))        \
   ";

 static const char *sq0010 = 
"tipo_documento='C')) and fecha_documento>=to_date(to_number(:b1),'yyyymmdd')\
) and fecha_documento<=to_date(to_number(:b2),'yyyymmdd')) and codigo_cliente>\
=:b3) and codigo_cliente<=:b4) and substr(f.codigo_cliente,1,2)=c.codigo) and \
c.vendedor=v.codigo) and c.dpto=d.codigo) and d.zonas=z.codigo) and libro=to_n\
umber(:b5)) and decode(:b6,0,0,f.lista)=:b6) and exists (select 'x'  from opti\
casp where codigo_cliente=f.codigo_cliente)) and  not exists (select 'x'  from\
 basura where ((f.tipo_factura=tipo_factura and f.tipo_documento=tipo_document\
o) and f.numero_factura=numero_factura))) group by v.codigo,v.codigo_nom,v.nom\
bre,z.nombre,c.nombre order by v.codigo,z.nombre,c.nombre            ";

 static const char *sq0023 = 
"umber(:b1),'yyyymmdd')) and fecha_documento<=to_date(to_number(:b2),'yyyymmd\
d')) and codigo_cliente>=:b3) and codigo_cliente<=:b4) and substr(f.codigo_cli\
ente,1,2)=c.codigo) and c.vendedor=v.codigo) and c.dpto=d.codigo) and d.zonas=\
z.codigo) and libro=to_number(:b5)) and decode(:b6,0,0,f.lista)=:b6) and exist\
s (select 'x'  from opticasp where codigo_cliente=f.codigo_cliente)) and  not \
exists (select 'x'  from basura where ((f.tipo_factura=tipo_factura and f.tipo\
_documento=tipo_documento) and f.numero_factura=numero_factura)))           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4114,0,0,0,
5,0,0,1,0,0,27,251,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,25,0,0,30,1172,0,0,0,0,0,1,0,
51,0,0,2,1385,0,9,1198,0,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,
98,0,0,2,0,0,13,1201,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
169,0,0,2,0,0,15,1265,0,0,0,0,0,1,0,
184,0,0,11,1320,0,9,1272,0,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,
231,0,0,11,0,0,13,1275,0,0,13,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
298,0,0,11,0,0,15,1302,0,0,0,0,0,1,0,
313,0,0,6,1380,0,9,1321,0,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,
360,0,0,6,0,0,13,1327,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
431,0,0,6,0,0,15,1388,0,0,0,0,0,1,0,
446,0,0,26,111,0,4,1396,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
469,0,0,5,1389,0,9,1466,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,
512,0,0,5,0,0,13,1467,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
583,0,0,5,0,0,15,1501,0,0,0,0,0,1,0,
598,0,0,9,1710,0,9,1517,0,0,9,9,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
649,0,0,9,0,0,13,1518,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
720,0,0,9,0,0,15,1559,0,0,0,0,0,1,0,
735,0,0,24,1683,0,9,1575,0,0,9,9,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
786,0,0,24,0,0,13,1576,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
857,0,0,24,0,0,15,1617,0,0,0,0,0,1,0,
872,0,0,3,1294,0,9,1632,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,
911,0,0,3,0,0,13,1633,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
982,0,0,3,0,0,15,1667,0,0,0,0,0,1,0,
997,0,0,4,1294,0,9,1673,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,
1036,0,0,4,0,0,13,1674,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
1107,0,0,4,0,0,15,1708,0,0,0,0,0,1,0,
1122,0,0,12,1461,0,9,1720,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,
1161,0,0,12,0,0,13,1721,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
1232,0,0,12,0,0,15,1749,0,0,0,0,0,1,0,
1247,0,0,14,1461,0,9,1777,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,
1286,0,0,14,0,0,13,1778,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
1357,0,0,14,0,0,15,1805,0,0,0,0,0,1,0,
1372,0,0,20,1456,0,9,1841,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,
1411,0,0,20,0,0,13,1842,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
1482,0,0,20,0,0,15,1870,0,0,0,0,0,1,0,
1497,0,0,21,1456,0,9,1897,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,
1536,0,0,21,0,0,13,1898,0,0,14,0,0,1,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
1607,0,0,21,0,0,15,1925,0,0,0,0,0,1,0,
1622,0,0,13,1257,0,9,2087,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
1657,0,0,13,0,0,13,2090,0,0,13,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
1724,0,0,15,1257,0,9,2140,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
1759,0,0,15,0,0,13,2143,0,0,13,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
1826,0,0,16,1252,0,9,2244,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
1861,0,0,16,0,0,13,2247,0,0,13,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
1928,0,0,16,0,0,15,2292,0,0,0,0,0,1,0,
1943,0,0,17,1252,0,9,2299,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
1978,0,0,17,0,0,13,2302,0,0,13,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2045,0,0,17,0,0,15,2326,0,0,0,0,0,1,0,
2060,0,0,19,1173,0,9,2408,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
2095,0,0,19,0,0,13,2411,0,0,13,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2162,0,0,18,1173,0,9,2461,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
2197,0,0,18,0,0,13,2464,0,0,13,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2264,0,0,18,1173,0,9,2550,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
2299,0,0,19,1173,0,9,2551,0,0,5,5,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,
2334,0,0,27,54,0,4,2561,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
2357,0,0,8,1742,0,9,2658,0,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,
2404,0,0,8,0,0,13,2659,0,0,18,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,
0,2,4,0,0,2,4,0,0,2,4,0,0,
2491,0,0,8,0,0,13,2698,0,0,18,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,
0,2,4,0,0,2,4,0,0,2,4,0,0,
2578,0,0,22,1571,0,9,2782,0,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,
2625,0,0,22,0,0,13,2785,0,0,13,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2692,0,0,8,0,0,15,2814,0,0,0,0,0,1,0,
2707,0,0,10,1715,0,9,2858,0,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,
2754,0,0,10,0,0,13,2859,0,0,18,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,
0,2,4,0,0,2,4,0,0,2,4,0,0,
2841,0,0,10,0,0,13,2898,0,0,18,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,
0,2,4,0,0,2,4,0,0,2,4,0,0,
2928,0,0,23,1566,0,9,2971,0,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,
2975,0,0,23,0,0,13,2974,0,0,13,0,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,
3042,0,0,10,0,0,15,3002,0,0,0,0,0,1,0,
3057,0,0,28,557,0,4,3345,0,0,7,1,0,1,0,2,3,0,0,2,3,0,0,2,4,0,0,2,9,0,0,2,9,0,0,
2,4,0,0,1,9,0,0,
3100,0,0,29,120,0,4,3365,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
};


/*****************************************************************
* RESUFAC.C  Version 1.0 - Rev 1.2 - Sep. 16/91.
*
* resufacp.c Programa para listar la facturacion de un periodo determinado
*
* Uso : resufac numero_quincena device copias userid/password
*
* Martin A. Toloza L. Creado Enero 14-1998.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
double redondo();

void lista_empresa(int e);
void lista_basura(int e);
void imprime_facturas();
void totaliza(int i);
void porcentualiza(int i);
void titulo_ciudad();
void borro_totales(int i);
void borro_totalesa(int i);
void borro_totalesb(int i);
void acumulo_totales(int i);
void empresa();
void titulos();
void titulos_og();
void lista_zonas(int e);
void imprime_zonas();
void titulo_zona();
void lista_zonasg(int e);
void titulo_opticasg();
void imprime_recaudos();
void imprime_recaudos_og();
void acumulo_recaudos(int i);
void borro_recaudos(int i);
void recaudos_ciudad();
void ventas_ciudad();
void ventas_zona();
void ventas_zona_og();
void porcentualiza_pagos(int i);
void porcentualiza_pagosg(int i);
void acumulo_totales_z(int i);;
void porcentualiza_pagost(int i);
char *flista();

                                     /* Parametros de comunicacion con ORACLE */
        		             /* Variables de recepcion para datos */
/* EXEC SQL BEGIN DECLARE SECTION; */ 


/* VARCHAR uid[200]; */ 
struct { unsigned short len; unsigned char arr[200]; } uid;

                                 /* Facturas (C1) y (C6) */
double  numero_factura;
/* VARCHAR codigo_cliente [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } codigo_cliente;

/* VARCHAR ciudad [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } ciudad;

/* VARCHAR codigo_ven [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } codigo_ven;

/* VARCHAR codigo_ven2 [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } codigo_ven2;

/* VARCHAR codigo_nom [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } codigo_nom;

/* VARCHAR cvendedor[40]; */ 
struct { unsigned short len; unsigned char arr[40]; } cvendedor;

double  valor_neto[13];
double  valor_neto_z[13];
double  valor_neto_a[13];
double  valor_total;
double  valor_total_z;
double  valor_total_a;
double  valor_pagos[13];
double  total_pagos;
/* VARCHAR nomb_clie_r[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } nomb_clie_r;

double  valor_neto_r[13];
double  valor_total_r;
int     hojas;
/* VARCHAR codigo_emp     [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } codigo_emp;

/* VARCHAR numero_quincena[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } numero_quincena;

float   retefte;
                                 /* Nits (C2) */
/* VARCHAR nomb_clie      [100]; */ 
struct { unsigned short len; unsigned char arr[100]; } nomb_clie;

/* VARCHAR wcod           [40]; */ 
struct { unsigned short len; unsigned char arr[40]; } wcod;

/* VARCHAR nombre_zona    [100]; */ 
struct { unsigned short len; unsigned char arr[100]; } nombre_zona;

                                 /* Ciudades (C3) */
/* VARCHAR nomb_ciudad    [100]; */ 
struct { unsigned short len; unsigned char arr[100]; } nomb_ciudad;

/* VARCHAR wciu           [100]; */ 
struct { unsigned short len; unsigned char arr[100]; } wciu;

                                 /* Control_fac (C4) */
int     ano;
int     mes_proceso;
float   ptaje_iva;
/* VARCHAR fecinicial     [90]; */ 
struct { unsigned short len; unsigned char arr[90]; } fecinicial;

/* VARCHAR corte          [90]; */ 
struct { unsigned short len; unsigned char arr[90]; } corte;

                                 /* Empresas (C5) */
/* VARCHAR nomb_emp       [200]; */ 
struct { unsigned short len; unsigned char arr[200]; } nomb_emp;


/* VARCHAR fecha_ini[90]; */ 
struct { unsigned short len; unsigned char arr[90]; } fecha_ini;

/* VARCHAR fecha_fin[90]; */ 
struct { unsigned short len; unsigned char arr[90]; } fecha_fin;

/* VARCHAR fecha_aini[90]; */ 
struct { unsigned short len; unsigned char arr[90]; } fecha_aini;

/* VARCHAR fecha_afin[90]; */ 
struct { unsigned short len; unsigned char arr[90]; } fecha_afin;

/* VARCHAR clientei[90]; */ 
struct { unsigned short len; unsigned char arr[90]; } clientei;

/* VARCHAR clientef[90]; */ 
struct { unsigned short len; unsigned char arr[90]; } clientef;

/* VARCHAR vcodigo[90]; */ 
struct { unsigned short len; unsigned char arr[90]; } vcodigo;

char    registro[200];
/* VARCHAR p_lista[4]; */ 
struct { unsigned short len; unsigned char arr[4]; } p_lista;

/* VARCHAR librob     [02]; */ 
struct { unsigned short len; unsigned char arr[2]; } librob;


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

                                            /* Variables globales del usuario */
#define A_F1 "###,###,###.##"
#define O1 " Impresion en proceso...... "
#define O2 " Recuperacion en proceso...... "

FILE    *fp1;

char *fmtnum(), r_t[300];
int     con_pag;                                   /* Contador de Paginas */
int     con_lin=66;                                /* Contador de Lineas  */
int    	inicio = 0;
int	    staora = 0;
int     serv   = 0;
char    copias[20];
int     tit_ciu=0;
int     tit_zon=0;
int     opticasg=0;
char    fechas[100];
char    fecha[100];
char    cadena[200];
char    mensajes[100];
char    wciu2[100];
int     j;
int     a, m;
char    ai[90];
char    mi[90];
char    wnomb_clie[100];
int     anod;
double  anof;
int     mesd;
int     diad;
int     lopticasg;
 
struct acu {
            double val_neto[20];
            double val_total;
            double val_netoa[20];
            double val_totala;
            double val_neto_r[20];
            double val_total_r;
           };
struct acu vect[4];
float   c;
char    nro_quincena[90];
char    formas[90];

void main(argc, argv)
int     argc;
char    *argv[];
{
char    device[20];
int	status = 0;
char    anoa[90];
char    mesa[90];
char    diaa[90];
int     i;

if (argc < 9)
   {
    printf ("Incorrecta invocacion:\n");
    printf ("Uso : resufac fecha_ini fecha_fin cliente_ini cliente_fin lista(0=todos, 5=CECOP) Libro device copias userid/password\n");
    printf ("      device : t salida por terminal\n");
    printf ("               Px salida por impresora (x nro printer)\n");
    printf ("               Libro (0=COLGAAP, 1=IFRS)\n");
    printf ("               userid/password nombre usuario y password\n");
    exit (1);
   }

strcpy (fecha_ini.arr,argv[1]);
fecha_ini.len = strlen(fecha_ini.arr);
strcpy (fecha_fin.arr,argv[2]);
fecha_fin.len = strlen(fecha_fin.arr);

strcpy (anoa,argv[1]);
strcpy (mesa,argv[1]);
strcpy (diaa,argv[1]);
strorg (anoa,1,4);
strorg (mesa,5,4);
anod = atoi(anoa);
anod -= 1;
sprintf(fecha_aini.arr,"%d%s",anod,mesa);
fecha_aini.len = strlen(fecha_aini.arr);
//printf("fecha_aini.arr <%s>",fecha_aini.arr); getchar();

strcpy (anoa,argv[2]);
strcpy (mesa,argv[2]);
strcpy (diaa,argv[2]);
strorg (anoa,1,4);
strorg (mesa,5,2);
strorg (diaa,7,2);
//printf("%s",diaa); getchar();
mesd = atoi(mesa);
diad = atoi(diaa);
anod = atoi(anoa);
anod -= 1;
sprintf(anoa,"%4d",anod);
anof = atof(anoa);
//printf("%4.2f = %6d %6d %6d %6d",anof,(int)(redondo(anof/4)), (int)(anof/4), mesd, diad); getchar();
if ((int)(redondo(anof/4)) == (int)(anof/4)) {
   if (mesd == 2)
       diad = 29;
}
else {
   if (mesd == 2)
       diad = 28;
}
sprintf(fecha_afin.arr,"%d%s%2d",anod,mesa,diad);
fecha_afin.len = strlen(fecha_afin.arr);
//printf("fecha_afin.arr <%s>",fecha_afin.arr); getchar();

strcpy (clientei.arr,argv[3]);
clientei.len = strlen(clientei.arr);
strcpy (clientef.arr,argv[4]);
clientef.len = strlen(clientef.arr);

strcpy (p_lista.arr,argv[5]);
p_lista.len = strlen(p_lista.arr);
if (!(atoi(p_lista.arr) >= 0 && atoi(p_lista.arr) <= 9)) 
   {
    printf ("Error, lista(%s) debe estar entre 0 y 9.\n",p_lista.arr);
    exit (1);
   }

strcpy (librob.arr,    argv[6]);
librob.len      =      strlen(librob.arr);
      
strcpy (device,   argv[7]);
strlow (device);
strcpy (copias,   argv[8]);

if (!strpos ("/", argv[9]))
   {
    printf ("user id/password incorrecto.\n");
    exit (1);
   }

strcpy (uid.arr,   argv[9]);
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
    sqlstm.sqhstl[0] = (unsigned int  )202;
    sqlstm.sqhsts[0] = (         int  )202;
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

    busco_impresora(device);
    abre_impresora(copias);

/**********************************************
 * Ventas x cliente ofi                       *
 **********************************************/

  /* EXEC SQL DECLARE C1 CURSOR FOR
        select codigo_cliente,\
            sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",\
            sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",\
            sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",\
            sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",\
            sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",\
            sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",\
            sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",\
            sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",\
            sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",\
            sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",\
            sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",\
            sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",\
            sum(valor_neto) \
	      from facturas f\
        where to_number(:codigo_emp)    = tipo_factura                     and\
              (tipo_documento = 'F'                                         or\
               tipo_documento = 'C'                                      ) and\
              fecha_documento >= to_date(to_number(:fecha_ini),'yyyymmdd') and\
              fecha_documento <= to_date(to_number(:fecha_fin),'yyyymmdd') and\
              codigo_cliente  >= :clientei                                 and\
              codigo_cliente  <= :clientef                                 and\
              libro            = to_number(:librob)                        and\
              decode(:p_lista,0,0,f.lista) = :p_lista                      and\
              not exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura)\
         group by codigo_cliente \
         order by codigo_cliente; */ 


/**********************************************
 * Recaudos x ciudad, año actual ofi         *
 **********************************************/

  /* EXEC SQL DECLARE C1A CURSOR FOR
	select  c.nombre,\
	        sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) "01",\
	        sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) "02",\
	        sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) "03",\
	        sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) "04",\
	        sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) "05",\
	        sum(decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) "06",\
	        sum(decode(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) "07",\
	        sum(decode(to_char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) "08",\
	        sum(decode(to_char(i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) "09",\
	        sum(decode(to_char(i.fecha,'mm'),'10',nvl(valor_cartera,0),0)) "10",\
	        sum(decode(to_char(i.fecha,'mm'),'11',nvl(valor_cartera,0),0)) "11",\
	        sum(decode(to_char(i.fecha,'mm'),'12',nvl(valor_cartera,0),0)) "12",\
      	        sum(nvl(valor_cartera,0))\
	from ingresos_c i, ciudades c\
	where   to_number(to_char(i.fecha,'yyyymmdd')) >= to_number(:fecha_ini) and\
      	  to_number(to_char(i.fecha,'yyyymmdd')) <= to_number(:fecha_fin) and\
          substr(codigo_cliente,1,2) = :wciu                 and\
      	  nvl(valor_cartera,0) > 0                           and\
      	  substr(i.codigo_cliente,1,2) = c.codigo            and\
      		i.tipo_documento = 'RC'                            and\
      		i.codigo_cliente > '0'                             and\
      		i.estado        <> '2'                             and\
          i.codigo_emp     = :codigo_emp                     and\
          decode(:p_lista,0,0,i.lista) = :p_lista           
/o           and\
      		not exists (select 'x' from opticasp\
                	    where codigo_cliente = i.codigo_cliente)\o/
	group by c.nombre; */ 


/**********************************************
 * Recaudos x ciudad, año anterior ofi       *
 **********************************************/

  /* EXEC SQL DECLARE C1B CURSOR FOR
	select  c.nombre,\
	        sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) "01",\
	        sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) "02",\
	        sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) "03",\
	        sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) "04",\
	        sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) "05",\
	        sum(decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) "06",\
	        sum(decode(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) "07",\
	        sum(decode(to_char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) "08",\
	        sum(decode(to_char(i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) "09",\
	        sum(decode(to_char(i.fecha,'mm'),'10',nvl(valor_cartera,0),0)) "10",\
	        sum(decode(to_char(i.fecha,'mm'),'11',nvl(valor_cartera,0),0)) "11",\
	        sum(decode(to_char(i.fecha,'mm'),'12',nvl(valor_cartera,0),0)) "12",\
      	        sum(nvl(valor_cartera,0))\
	from ingresos_c i, ciudades c\
	where   to_number(to_char(i.fecha,'yyyymmdd')) >= to_number(:fecha_aini) and\
 	        to_number(to_char(i.fecha,'yyyymmdd')) <= to_number(:fecha_afin) and\
          substr(codigo_cliente,1,2) = :wciu                 and\
 	        nvl(valor_cartera,0) > 0                           and\
 	        substr(i.codigo_cliente,1,2) = c.codigo            and\
      		i.tipo_documento = 'RC'                            and\
      		i.codigo_cliente > '0'                             and\
      		i.estado        <> '2'                             and\
          decode(:p_lista,0,0,i.lista) = :p_lista            and\
          i.codigo_emp     = :codigo_emp                   
          /o  and\
      		not exists (select 'x' from opticasp\
                	    where codigo_cliente = i.codigo_cliente)\o/
	group by c.nombre; */ 


/**********************************************
 * Ventas x ciudades, año anterior ofi        *
 **********************************************/

  /* EXEC SQL DECLARE C1C CURSOR FOR
        select c.nombre,\
            sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",\
            sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",\
            sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",\
            sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",\
            sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",\
            sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",\
            sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",\
            sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",\
            sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",\
            sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",\
            sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",\
            sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",\
            sum(valor_neto) \
	from facturas f, ciudades c\
        where to_number(:codigo_emp)    = tipo_factura                      and\
              (tipo_documento = 'F'                                          or\
               tipo_documento = 'C'                                      )  and\
              fecha_documento >= to_date(to_number(:fecha_aini),'yyyymmdd') and\
              fecha_documento <= to_date(to_number(:fecha_afin),'yyyymmdd') and\
              substr(codigo_cliente,1,2)   = :wciu                          and\
              substr(f.codigo_cliente,1,2) = c.codigo                       and\
              libro            = to_number(:librob)                         and\
              decode(:p_lista,0,0,f.lista) = :p_lista                       and\
              not exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura)\
        group by c.nombre; */ 


/**********************************************
 * Ventas x clientes, año actual extra of     *
 **********************************************/

  /* EXEC SQL DECLARE C6 CURSOR FOR
        select codigo_cliente,\
            sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",\
            sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",\
            sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",\
            sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",\
            sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",\
            sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",\
            sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",\
            sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",\
            sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",\
            sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",\
            sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",\
            sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",\
            sum(valor_neto) \
	      from facturas f\
        where to_number(:codigo_emp)    = tipo_factura                     and\
              (tipo_documento = 'F'                                         or\
               tipo_documento = 'C'                                      ) and\
              fecha_documento >= to_date(to_number(:fecha_ini),'yyyymmdd') and\
              fecha_documento <= to_date(to_number(:fecha_fin),'yyyymmdd') and\
              codigo_cliente  >= :clientei                                 and\
              codigo_cliente  <= :clientef                                 and\
              libro            = to_number(:librob)                        and\
              decode(:p_lista,0,0,f.lista) = :p_lista                      and\
              exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura)\
        group by codigo_cliente \
        order by codigo_cliente; */ 


/**********************************************
 * Ventas x ciudades, año actual extra of     *
 **********************************************/

  /* EXEC SQL DECLARE C6A CURSOR FOR
        select c.nombre,\
            sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",\
            sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",\
            sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",\
            sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",\
            sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",\
            sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",\
            sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",\
            sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",\
            sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",\
            sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",\
            sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",\
            sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",\
            sum(valor_neto) \
	      from facturas f, ciudades c\
        where to_number(:codigo_emp)    = tipo_factura                     and\
              (tipo_documento = 'F'                                         or\
               tipo_documento = 'C'                                      ) and\
              fecha_documento >= to_date(to_number(:fecha_ini),'yyyymmdd') and\
              fecha_documento <= to_date(to_number(:fecha_fin),'yyyymmdd') and\
              substr(codigo_cliente,1,2) = :wciu                           and\
              substr(f.codigo_cliente,1,2) = c.codigo                      and\
              libro            = to_number(:librob)                        and\
              decode(:p_lista,0,0,f.lista) = :p_lista                      and\
              exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura)\
         group by c.nombre; */ 


/**********************************************
 * Ventas x asesor, año actual ofi            *
 **********************************************/

  /* EXEC SQL DECLARE C7 CURSOR FOR
         select v.codigo, v.codigo_nom, v.nombre, z.nombre, c.nombre,\
            sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",\
            sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",\
            sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",\
            sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",\
            sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",\
            sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",\
            sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",\
            sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",\
            sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",\
            sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",\
            sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",\
            sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",\
            sum(valor_neto)\
         from facturas f, vendedores v, zonas z, departamentos d, ciudades c\
         where to_number(:codigo_emp)    = tipo_factura                     and\
              (tipo_documento = 'F'                                          or\
               tipo_documento = 'C')                                        and\
               fecha_documento >= to_date(to_number(:fecha_ini),'yyyymmdd') and\
               fecha_documento <= to_date(to_number(:fecha_fin),'yyyymmdd') and\
               codigo_cliente  >= :clientei                                 and\
               codigo_cliente  <= :clientef                                 and\
               substr(f.codigo_cliente,1,2) = c.codigo                      and\
               c.vendedor       = v.codigo                                  and\
               c.dpto           = d.codigo                                  and\
               d.zonas          = z.codigo                                  and\
               libro            = to_number(:librob)                        and\
               decode(to_number(:p_lista),0,0,f.lista) = to_number(:p_lista) and\
               not exists (select 'x' from opticasp\
                           where codigo_cliente = f.codigo_cliente)         and\
               not exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura)\
         group by v.codigo, v.codigo_nom, v.nombre, z.nombre, c.nombre\
         order by v.codigo, z.nombre, c.nombre; */ 


/**********************************************
 * Ventas x asesor, año anterior ofi          *
 **********************************************/

  /* EXEC SQL DECLARE C7A CURSOR FOR
         select v.codigo,\
            sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",\
            sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",\
            sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",\
            sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",\
            sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",\
            sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",\
            sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",\
            sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",\
            sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",\
            sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",\
            sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",\
            sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",\
            sum(valor_neto)\
         from facturas f, vendedores v, zonas z, departamentos d, ciudades c\
         where to_number(:codigo_emp)    = tipo_factura                     and\
              (tipo_documento = 'F'                                          or\
               tipo_documento = 'C')                                        and\
               fecha_documento >= to_date(to_number(:fecha_aini),'yyyymmdd') and\
               fecha_documento <= to_date(to_number(:fecha_afin),'yyyymmdd') and\
               codigo_cliente  >= :clientei                                 and\
               codigo_cliente  <= :clientef                                 and\
               v.codigo         = to_number(:cvendedor)                     and\
               substr(f.codigo_cliente,1,2) = c.codigo                      and\
               c.vendedor       = v.codigo                                  and\
               c.dpto           = d.codigo                                  and\
               d.zonas          = z.codigo                                  and\
               libro            = to_number(:librob)                        and\
               decode(to_number(:p_lista),0,0,f.lista) = to_number(:p_lista) and\
               not exists (select 'x' from opticasp\
                           where codigo_cliente = f.codigo_cliente)         and\
               not exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura)\
         group by v.codigo, v.codigo_nom, v.nombre, z.nombre\
         order by v.codigo, z.nombre; */ 


/*****************************************************
 * Ventas x asesor, año actual opticas del grupo ofi *
 *****************************************************/

  /* EXEC SQL DECLARE C8 CURSOR FOR
         select v.codigo, v.codigo_nom, v.nombre, z.nombre, c.nombre,\
            sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",\
            sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",\
            sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",\
            sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",\
            sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",\
            sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",\
            sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",\
            sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",\
            sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",\
            sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",\
            sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",\
            sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",\
            sum(valor_neto)\
         from facturas f, vendedores v, zonas z, departamentos d, ciudades c\
         where to_number(:codigo_emp)    = tipo_factura                     and\
              (tipo_documento = 'F'                                          or\
               tipo_documento = 'C')                                        and\
               fecha_documento >= to_date(to_number(:fecha_ini),'yyyymmdd') and\
               fecha_documento <= to_date(to_number(:fecha_fin),'yyyymmdd') and\
               codigo_cliente  >= :clientei                                 and\
               codigo_cliente  <= :clientef                                 and\
               substr(f.codigo_cliente,1,2) = c.codigo                      and\
               c.vendedor       = v.codigo                                  and\
               c.dpto           = d.codigo                                  and\
               d.zonas          = z.codigo                                  and\
               libro            = to_number(:librob)                        and\
               decode(:p_lista,0,0,f.lista) = :p_lista                      and\
               exists (select 'x' from opticasp\
                       where codigo_cliente = f.codigo_cliente)             and\
               not exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura)\
         group by v.codigo, v.codigo_nom, v.nombre, z.nombre, c.nombre\
         order by v.codigo, z.nombre, c.nombre; */ 


/************************************
 * Ventas totales, año anterior ofi *
 ************************************/

  /* EXEC SQL DECLARE C9 CURSOR FOR
        select sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",\
               sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",\
               sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",\
               sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",\
               sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",\
               sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",\
               sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",\
               sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",\
               sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",\
               sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",\
               sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",\
               sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",\
               sum(valor_neto) \
	      from facturas f\
        where to_number(:codigo_emp)    = tipo_factura                      and\
              (tipo_documento = 'F'                                          or\
               tipo_documento = 'C'                                      )  and\
              fecha_documento >= to_date(to_number(:fecha_aini),'yyyymmdd') and\
              fecha_documento <= to_date(to_number(:fecha_afin),'yyyymmdd') and\
              codigo_cliente  >= :clientei                                  and\
              codigo_cliente  <= :clientef                                  and\
              libro            = to_number(:librob)                         and\
              decode(:p_lista,0,0,f.lista) = :p_lista                       and\
              not exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura); */ 


/**********************************
 * Pagos x asesor, año actual ofi *
 **********************************/

  /* EXEC SQL DECLARE C10 CURSOR FOR
	select  v.nombre,\
	        sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) "01",\
	        sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) "02",\
	        sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) "03",\
	        sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) "04",\
	        sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) "05",\
	        sum(decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) "06",\
	        sum(decode(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) "07",\
	        sum(decode(to_char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) "08",\
	        sum(decode(to_char(i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) "09",\
	        sum(decode(to_char(i.fecha,'mm'),'10',nvl(valor_cartera,0),0)) "10",\
	        sum(decode(to_char(i.fecha,'mm'),'11',nvl(valor_cartera,0),0)) "11",\
	        sum(decode(to_char(i.fecha,'mm'),'12',nvl(valor_cartera,0),0)) "12",\
      	        sum(nvl(valor_cartera,0))\
	from ingresos_c i, ciudades c, vendedores v, zonas z\
	where   to_number(to_char(i.fecha,'yyyymmdd')) >= to_number(:fecha_ini) and\
 	        to_number(to_char(i.fecha,'yyyymmdd')) <= to_number(:fecha_fin) and\
 	        nvl(valor_cartera,0) > 0                           and\
 	        substr(i.codigo_cliente,1,2) = c.codigo            and\
      		i.tipo_documento = 'RC'                            and\
      		i.codigo_cliente > '0'                             and\
      		i.estado        <> '2'                             and\
          i.codigo_emp     = :codigo_emp                     and\
          c.vendedor       = v.codigo                        and\
          z.codigo         = c.zona                          and\
          v.codigo         = to_number(:cvendedor)           and\
          decode(:p_lista,0,0,i.lista) = :p_lista            and\
      		not exists (select 'x' from opticasp\
                	    where codigo_cliente = i.codigo_cliente)\
	group by v.nombre\
  order by v.nombre; */ 


/**********************************
 * Pagos genereles año actual ofi *
 **********************************/

  /* EXEC SQL DECLARE C10A CURSOR FOR
	select  sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) "01",\
	        sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) "02",\
	        sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) "03",\
	        sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) "04",\
	        sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) "05",\
	        sum(decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) "06",\
	        sum(decode(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) "07",\
	        sum(decode(to_char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) "08",\
	        sum(decode(to_char(i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) "09",\
	        sum(decode(to_char(i.fecha,'mm'),'10',nvl(valor_cartera,0),0)) "10",\
	        sum(decode(to_char(i.fecha,'mm'),'11',nvl(valor_cartera,0),0)) "11",\
	        sum(decode(to_char(i.fecha,'mm'),'12',nvl(valor_cartera,0),0)) "12",\
 	        sum(nvl(valor_cartera,0))\
	from ingresos_c i\
	where   to_number(to_char(i.fecha,'yyyymmdd')) >= to_number(:fecha_ini) and\
 	        to_number(to_char(i.fecha,'yyyymmdd')) <= to_number(:fecha_fin) and\
 	        nvl(valor_cartera,0) > 0                           and\
      		i.tipo_documento = 'RC'                            and\
      		i.codigo_cliente > '0'                             and\
      		i.estado        <> '2'                             and\
          decode(:p_lista,0,0,i.lista) = :p_lista            and\
          i.codigo_emp     = :codigo_emp                     and\
      		not exists (select 'x' from opticasp\
                	    where codigo_cliente = i.codigo_cliente); */ 


/************************************
 * Pagos x asesor, año anterior ofi *
 ************************************/

  /* EXEC SQL DECLARE C10B CURSOR FOR
	select  v.nombre,\
	        sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) "01",\
	        sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) "02",\
	        sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) "03",\
	        sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) "04",\
	        sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) "05",\
	        sum(decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) "06",\
	        sum(decode(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) "07",\
	        sum(decode(to_char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) "08",\
	        sum(decode(to_char(i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) "09",\
	        sum(decode(to_char(i.fecha,'mm'),'10',nvl(valor_cartera,0),0)) "10",\
	        sum(decode(to_char(i.fecha,'mm'),'11',nvl(valor_cartera,0),0)) "11",\
	        sum(decode(to_char(i.fecha,'mm'),'12',nvl(valor_cartera,0),0)) "12",\
 	        sum(nvl(valor_cartera,0))\
	from ingresos_c i, ciudades c, vendedores v, zonas z\
	where   to_number(to_char(i.fecha,'yyyymmdd')) >= to_number(:fecha_aini) and\
 	        to_number(to_char(i.fecha,'yyyymmdd')) <= to_number(:fecha_afin) and\
 	        nvl(valor_cartera,0) > 0                           and\
	        substr(i.codigo_cliente,1,2) = c.codigo            and\
      		i.tipo_documento = 'RC'                            and\
      		i.codigo_cliente > '0'                             and\
      		i.estado        <> '2'                             and\
          i.codigo_emp     = :codigo_emp                     and\
          c.vendedor       = v.codigo                        and\
          z.codigo         = c.zona                          and\
          v.codigo         = to_number(:cvendedor)           and\
          decode(:p_lista,0,0,i.lista) = :p_lista            and\
      		not exists (select 'x' from opticasp\
                	    where codigo_cliente = i.codigo_cliente)\
	group by v.nombre\
        order by v.nombre; */ 


/*********************************************
 * Pagos genereles año anterior clientes ofi *
 *********************************************/

  /* EXEC SQL DECLARE C10C CURSOR FOR
	select  sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) "01",\
	        sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) "02",\
	        sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) "03",\
	        sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) "04",\
	        sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) "05",\
	        sum(decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) "06",\
	        sum(decode(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) "07",\
	        sum(decode(to_char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) "08",\
	        sum(decode(to_char(i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) "09",\
	        sum(decode(to_char(i.fecha,'mm'),'10',nvl(valor_cartera,0),0)) "10",\
	        sum(decode(to_char(i.fecha,'mm'),'11',nvl(valor_cartera,0),0)) "11",\
	        sum(decode(to_char(i.fecha,'mm'),'12',nvl(valor_cartera,0),0)) "12",\
 	        sum(nvl(valor_cartera,0))\
	from ingresos_c i\
	where   to_number(to_char(i.fecha,'yyyymmdd')) >= to_number(:fecha_aini) and\
 	        to_number(to_char(i.fecha,'yyyymmdd')) <= to_number(:fecha_afin) and\
 	        nvl(valor_cartera,0) > 0                           and\
      		i.tipo_documento = 'RC'                            and\
      		i.codigo_cliente > '0'                             and\
      		i.estado        <> '2'                             and\
          i.codigo_emp     = :codigo_emp                     and\
          decode(:p_lista,0,0,i.lista) = :p_lista            and\
      		not exists (select 'x' from opticasp\
                	    where codigo_cliente = i.codigo_cliente); */ 


/**********************************************
 * Pagos genereles año actual opticas propias *
 **********************************************/

  /* EXEC SQL DECLARE C10D CURSOR FOR
	select  sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) "01",\
	        sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) "02",\
	        sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) "03",\
	        sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) "04",\
	        sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) "05",\
	        sum(decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) "06",\
	        sum(decode(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) "07",\
	        sum(decode(to_char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) "08",\
	        sum(decode(to_char(i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) "09",\
	        sum(decode(to_char(i.fecha,'mm'),'10',nvl(valor_cartera,0),0)) "10",\
	        sum(decode(to_char(i.fecha,'mm'),'11',nvl(valor_cartera,0),0)) "11",\
	        sum(decode(to_char(i.fecha,'mm'),'12',nvl(valor_cartera,0),0)) "12",\
 	        sum(nvl(valor_cartera,0))\
	from ingresos_c i\
	where   to_number(to_char(i.fecha,'yyyymmdd')) >= to_number(:fecha_ini) and\
 	        to_number(to_char(i.fecha,'yyyymmdd')) <= to_number(:fecha_fin) and\
 	        nvl(valor_cartera,0) > 0                           and\
      		i.tipo_documento = 'RC'                            and\
      		i.codigo_cliente > '0'                             and\
      		i.estado        <> '2'                             and\
          i.codigo_emp     = :codigo_emp                     and\
          decode(:p_lista,0,0,i.lista) = :p_lista            and\
      		exists (select 'x' from opticasp\
                        where codigo_cliente = i.codigo_cliente); */ 


/************************************************
 * Pagos genereles año anterior opticas propias *
 ************************************************/

  /* EXEC SQL DECLARE C10E CURSOR FOR
	select  sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) "01",\
	        sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) "02",\
	        sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) "03",\
	        sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) "04",\
	        sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) "05",\
	        sum(decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) "06",\
	        sum(decode(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) "07",\
	        sum(decode(to_char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) "08",\
	        sum(decode(to_char(i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) "09",\
	        sum(decode(to_char(i.fecha,'mm'),'10',nvl(valor_cartera,0),0)) "10",\
	        sum(decode(to_char(i.fecha,'mm'),'11',nvl(valor_cartera,0),0)) "11",\
	        sum(decode(to_char(i.fecha,'mm'),'12',nvl(valor_cartera,0),0)) "12",\
      	        sum(nvl(valor_cartera,0))\
	from ingresos_c i\
	where   to_number(to_char(i.fecha,'yyyymmdd')) >= to_number(:fecha_aini) and\
 	        to_number(to_char(i.fecha,'yyyymmdd')) <= to_number(:fecha_afin) and\
 	        nvl(valor_cartera,0) > 0                           and\
      		i.tipo_documento = 'RC'                            and\
      		i.codigo_cliente > '0'                             and\
      		i.estado        <> '2'                             and\
          i.codigo_emp     = :codigo_emp                     and\
          decode(:p_lista,0,0,i.lista) = :p_lista            and\
      		exists (select 'x' from opticasp\
                        where codigo_cliente = i.codigo_cliente); */ 


/************************************
 * Pagos genereles año anterior ofi *
 ************************************/

  /* EXEC SQL DECLARE C10F CURSOR FOR
	select  sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) "01",\
	        sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) "02",\
	        sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) "03",\
	        sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) "04",\
	        sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) "05",\
	        sum(decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) "06",\
	        sum(decode(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) "07",\
	        sum(decode(to_char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) "08",\
	        sum(decode(to_char(i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) "09",\
	        sum(decode(to_char(i.fecha,'mm'),'10',nvl(valor_cartera,0),0)) "10",\
	        sum(decode(to_char(i.fecha,'mm'),'11',nvl(valor_cartera,0),0)) "11",\
	        sum(decode(to_char(i.fecha,'mm'),'12',nvl(valor_cartera,0),0)) "12",\
 	        sum(nvl(valor_cartera,0))\
	from ingresos_c i\
	where   to_number(to_char(i.fecha,'yyyymmdd')) >= to_number(:fecha_aini) and\
 	        to_number(to_char(i.fecha,'yyyymmdd')) <= to_number(:fecha_afin) and\
 	        nvl(valor_cartera,0) > 0                           and\
      		i.tipo_documento = 'RC'                            and\
      		i.codigo_cliente > '0'                             and\
      		i.estado        <> '2'                             and\
          decode(:p_lista,0,0,i.lista) = :p_lista            and\
          i.codigo_emp     = :codigo_emp; */ 


/**********************************
 * Pagos genereles año actual ofi *
 **********************************/

  /* EXEC SQL DECLARE C10G CURSOR FOR
	select  sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) "01",\
	        sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) "02",\
	        sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) "03",\
	        sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) "04",\
	        sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) "05",\
	        sum(decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) "06",\
	        sum(decode(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) "07",\
	        sum(decode(to_char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) "08",\
	        sum(decode(to_char(i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) "09",\
	        sum(decode(to_char(i.fecha,'mm'),'10',nvl(valor_cartera,0),0)) "10",\
	        sum(decode(to_char(i.fecha,'mm'),'11',nvl(valor_cartera,0),0)) "11",\
	        sum(decode(to_char(i.fecha,'mm'),'12',nvl(valor_cartera,0),0)) "12",\
 	        sum(nvl(valor_cartera,0))\
	from ingresos_c i\
	where   to_number(to_char(i.fecha,'yyyymmdd')) >= to_number(:fecha_ini) and\
 	        to_number(to_char(i.fecha,'yyyymmdd')) <= to_number(:fecha_fin) and\
 	        nvl(valor_cartera,0) > 0                           and\
      		i.tipo_documento = 'RC'                            and\
      		i.codigo_cliente > '0'                             and\
      		i.estado        <> '2'                             and\
          decode(:p_lista,0,0,i.lista) = :p_lista            and\
          i.codigo_emp     = :codigo_emp; */ 


/*************************************************
 * Pagos x asesor, año actual opticas propias of *
 *************************************************/

  /* EXEC SQL DECLARE C11 CURSOR FOR
  select v.nombre,\
	        sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) "01",\
	        sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) "02",\
	        sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) "03",\
	        sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) "04",\
	        sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) "05",\
	        sum(decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) "06",\
	        sum(decode(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) "07",\
	        sum(decode(to_char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) "08",\
	        sum(decode(to_char(i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) "09",\
	        sum(decode(to_char(i.fecha,'mm'),'10',nvl(valor_cartera,0),0)) "10",\
	        sum(decode(to_char(i.fecha,'mm'),'11',nvl(valor_cartera,0),0)) "11",\
	        sum(decode(to_char(i.fecha,'mm'),'12',nvl(valor_cartera,0),0)) "12",\
          sum(nvl(valor_cartera,0))\
  from ingresos_c i, ciudades c, vendedores v, zonas z\
	where   to_number(to_char(i.fecha,'yyyymmdd')) >= to_number(:fecha_ini) and\
          to_number(to_char(i.fecha,'yyyymmdd')) <= to_number(:fecha_fin) and\
          nvl(valor_cartera,0) > 0                           and\
          substr(i.codigo_cliente,1,2) = c.codigo            and\
      		i.tipo_documento = 'RC'                            and\
      		i.codigo_cliente > '0'                             and\
      		i.estado        <> '2'                             and\
          i.codigo_emp     = :codigo_emp                     and\
          c.vendedor       = v.codigo                        and\
          z.codigo         = c.zona                          and\
          v.codigo         = to_number(:cvendedor)           and\
          decode(:p_lista,0,0,i.lista) = :p_lista            and\
      		exists (select 'x' from opticasp\
                  where codigo_cliente = i.codigo_cliente)\
	group by v.nombre\
  order by v.nombre; */ 


/***************************************************
 * Pagos x asesor, año anterior opticas propias of *
 ***************************************************/

  /* EXEC SQL DECLARE C11B CURSOR FOR
  select v.nombre,\
	        sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) "01",\
	        sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) "02",\
	        sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) "03",\
	        sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) "04",\
	        sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) "05",\
	        sum(decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) "06",\
	        sum(decode(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) "07",\
	        sum(decode(to_char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) "08",\
	        sum(decode(to_char(i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) "09",\
	        sum(decode(to_char(i.fecha,'mm'),'10',nvl(valor_cartera,0),0)) "10",\
	        sum(decode(to_char(i.fecha,'mm'),'11',nvl(valor_cartera,0),0)) "11",\
	        sum(decode(to_char(i.fecha,'mm'),'12',nvl(valor_cartera,0),0)) "12",\
 	        sum(nvl(valor_cartera,0))\
  from ingresos_c i, ciudades c, vendedores v, zonas z\
	where   to_number(to_char(i.fecha,'yyyymmdd')) >= to_number(:fecha_aini) and\
          to_number(to_char(i.fecha,'yyyymmdd')) <= to_number(:fecha_afin) and\
          nvl(valor_cartera,0) > 0                           and\
          substr(i.codigo_cliente,1,2) = c.codigo            and\
      		i.tipo_documento = 'RC'                            and\
      		i.codigo_cliente > '0'                             and\
      		i.estado        <> '2'                             and\
          i.codigo_emp     = :codigo_emp                     and\
          c.vendedor       = v.codigo                        and\
          z.codigo         = c.zona                          and\
          v.codigo         = to_number(:cvendedor)           and\
          decode(:p_lista,0,0,i.lista) = :p_lista            and\
      		exists (select 'x' from opticasp\
                  where codigo_cliente = i.codigo_cliente)\
	group by v.nombre\
  order by v.nombre; */ 


/*************************************
 * Ventas, año anterior ofi          *
 *************************************/

  /* EXEC SQL DECLARE C11C CURSOR FOR
         select sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",
                sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",
                sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",
                sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",
                sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",
                sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",
                sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",
                sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",
                sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",
                sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",
                sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",
                sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",
                sum(valor_neto)
         from facturas f, vendedores v, zonas z, departamentos d, ciudades c
         where to_number(:codigo_emp)    = tipo_factura                      and
              (tipo_documento = 'F'                                          or
               tipo_documento = 'C')                                         and
               fecha_documento >= to_date(to_number(:fecha_aini),'yyyymmdd') and
               fecha_documento <= to_date(to_number(:fecha_afin),'yyyymmdd') and
               codigo_cliente  >= :clientei                                  and
               codigo_cliente  <= :clientef                                  and
               substr(f.codigo_cliente,1,2) = c.codigo                       and
               c.vendedor       = v.codigo                                   and
               c.dpto           = d.codigo                                   and
               d.zonas          = z.codigo                                   and
               libro            = to_number(:librob)                         and
               decode(:p_lista,0,0,f.lista) = :p_lista                       and
               not exists (select 'x' from opticasp
                           where codigo_cliente = f.codigo_cliente)          and
               not exists
              (select 'x'
               from   basura
               where  f.tipo_factura   = tipo_factura   and
                      f.tipo_documento = tipo_documento and
                      f.numero_factura = numero_factura); */ 


/**********************************************
 * Ventas, año anterior ofi opticas del grupo *
 **********************************************/

  /* EXEC SQL DECLARE C11D CURSOR FOR
         select sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",
                sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",
                sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",
                sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",
                sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",
                sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",
                sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",
                sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",
                sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",
                sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",
                sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",
                sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",
                sum(valor_neto)
         from facturas f, vendedores v, zonas z, departamentos d, ciudades c
         where to_number(:codigo_emp)    = tipo_factura                      and
              (tipo_documento = 'F'                                          or
               tipo_documento = 'C')                                         and
               fecha_documento >= to_date(to_number(:fecha_aini),'yyyymmdd') and
               fecha_documento <= to_date(to_number(:fecha_afin),'yyyymmdd') and
               codigo_cliente  >= :clientei                                  and
               codigo_cliente  <= :clientef                                  and
               substr(f.codigo_cliente,1,2) = c.codigo                       and
               c.vendedor       = v.codigo                                   and
               c.dpto           = d.codigo                                   and
               d.zonas          = z.codigo                                   and
               libro            = to_number(:librob)                         and
               decode(:p_lista,0,0,f.lista) = :p_lista                       and
               exists (select 'x' from opticasp
                       where codigo_cliente = f.codigo_cliente)              and
               not exists
              (select 'x'
               from   basura
               where  f.tipo_factura   = tipo_factura   and
                      f.tipo_documento = tipo_documento and
                      f.numero_factura = numero_factura); */ 


/*****************************************************
 * Ventas x asesor, año anterior opticas del grupo ofi *
 *****************************************************/

  /* EXEC SQL DECLARE C11E CURSOR FOR
         select v.codigo,\
            sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) "01",\
            sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) "02",\
            sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) "03",\
            sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) "04",\
            sum(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) "05",\
            sum(decode(to_char(fecha_documento,'mm'),'06',valor_neto,0)) "06",\
            sum(decode(to_char(fecha_documento,'mm'),'07',valor_neto,0)) "07",\
            sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0)) "08",\
            sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) "09",\
            sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) "10",\
            sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) "11",\
            sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) "12",\
            sum(valor_neto)\
         from facturas f, vendedores v, zonas z, departamentos d, ciudades c\
         where to_number(:codigo_emp)    = tipo_factura                     and\
              (tipo_documento = 'F'                                          or\
               tipo_documento = 'C')                                        and\
               fecha_documento >= to_date(to_number(:fecha_aini),'yyyymmdd') and\
               fecha_documento <= to_date(to_number(:fecha_afin),'yyyymmdd') and\
               codigo_cliente  >= :clientei                                 and\
               codigo_cliente  <= :clientef                                 and\
               v.codigo         = to_number(:cvendedor)                     and\
               substr(f.codigo_cliente,1,2) = c.codigo                      and\
               c.vendedor       = v.codigo                                  and\
               c.dpto           = d.codigo                                  and\
               d.zonas          = z.codigo                                  and\
               libro            = to_number(:librob)                        and\
               decode(:p_lista,0,0,f.lista) = :p_lista                      and\
               exists (select 'x' from opticasp\
                       where codigo_cliente = f.codigo_cliente)             and\
               not exists\
              (select 'x'\
               from   basura\
               where  f.tipo_factura   = tipo_factura   and\
                      f.tipo_documento = tipo_documento and\
                      f.numero_factura = numero_factura)\
         group by v.codigo, v.codigo_nom, v.nombre, z.nombre\
         order by v.codigo, z.nombre; */ 


 strcpy(ai,fecha_ini.arr);
 strorg(ai,1,4);
 strcpy(mi,fecha_ini.arr);
 strorg(mi,5,2);
 a = atoi(ai);
 m = atoi(mi);

 for (i=0;i<=3;i++) {
     borro_totalesb(i);
 }

/* LISTA LABOCOSTA S.A. */

 lista_empresa(1);
 for (i=0;i<=3;i++) {
     borro_totalesb(i);
 }
 lista_zonas(1);
 for (i=1;i<=3;i++) {
     borro_totales(i);
 }

/* LISTA OPTICAS DEL GRUPO */

 for (i=0;i<=3;i++) {
     borro_totalesb(i);
 }
 lopticasg = 1;
 lista_zonasg(1);
 for (i=1;i<=3;i++) {
     borro_totales(i);
 }

/* LISTA LILIAN */

 lista_empresa(3);
 for (i=1;i<=3;i++) {
     borro_totales(i);
 }
 lista_zonas(3);
 for (i=1;i<=3;i++) {
     borro_totales(i);
 }
 con_pag=0;

/* LISTA LABORATORIO OFTALMICO LTDA. */
/*
 lista_empresa(2);
 con_pag=0;
 serv=1;
 lista_basura(1);
 for (i=1;i<=3;i++) {
     borro_totales(i);
 }
 lista_basura(2);
 for (i=1;i<=3;i++) {
     borro_totales(i);
 }
*/
 cierre_impresora();

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

void lista_empresa(e)
int e;
{
 int i;
 sprintf(codigo_emp.arr,"%d",e);
 empresa();

 strcpy(fecha,fecha_ini.arr);
 fecha_oracle3(fecha);
 strcpy(cadena,fecha);
 strcat(cadena," hasta ");
 strcpy(fecha,fecha_fin.arr);
 fecha_oracle3(fecha);
 strcat(cadena,fecha);
 strcpy(fechas,cadena);
 inicio  = 0;
 staora  = 0;
 valor_total=0;
 for (i=0;i<=12;++i) {
      valor_neto[i]=0;
 }
 /* EXEC SQL OPEN C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select codigo_cliente ,sum(decode(to_char(fecha_documento,'mm'),'01',val\
or_neto,0)) \"01\" ,sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto\
,0)) \"02\" ,sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) \"\
03\" ,sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) \"04\" ,s\
um(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) \"05\" ,sum(deco\
de(to_char(fecha_documento,'mm'),'06',valor_neto,0)) \"06\" ,sum(decode(to_c\
har(fecha_documento,'mm'),'07',valor_neto,0)) \"07\" ,sum(decode(to_char(fec\
ha_documento,'mm'),'08',valor_neto,0)) \"08\" ,sum(decode(to_char(fecha_docu\
mento,'mm'),'09',valor_neto,0)) \"09\" ,sum(decode(to_char(fecha_documento,'\
mm'),'10',valor_neto,0)) \"10\" ,sum(decode(to_char(fecha_documento,'mm'),'1\
1',valor_neto,0)) \"11\" ,sum(decode(to_char(fecha_documento,'mm'),'12',valo\
r_neto,0)) \"12\" ,sum(valor_neto)  from facturas f where ((((((((to_number(\
:b0)=tipo_factura and (tipo_documento='F' or tipo_documento='C')) and fecha_\
documento>=to_date(to_number(:b1),'yyyymmdd')) and fecha_documen");
 sqlstm.stmt = sq0002;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )51;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned int  )12;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[2] = (unsigned int  )92;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&clientei;
 sqlstm.sqhstl[3] = (unsigned int  )92;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&clientef;
 sqlstm.sqhstl[4] = (unsigned int  )92;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&librob;
 sqlstm.sqhstl[5] = (unsigned int  )4;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&p_lista;
 sqlstm.sqhstl[6] = (unsigned int  )6;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&p_lista;
 sqlstm.sqhstl[7] = (unsigned int  )6;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C1 INTO :codigo_cliente,
                              :valor_neto[1],
                              :valor_neto[2],
                              :valor_neto[3],
                              :valor_neto[4],
                              :valor_neto[5],
                              :valor_neto[6],
                              :valor_neto[7],
                              :valor_neto[8],
                              :valor_neto[9],
                              :valor_neto[10],
                              :valor_neto[11],
                              :valor_neto[12],
                              :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 14;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )98;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&codigo_cliente;
       sqlstm.sqhstl[0] = (unsigned int  )42;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[1] = (unsigned int  )8;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[2] = (unsigned int  )8;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[3] = (unsigned int  )8;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
       sqlstm.sqhstv[13] = (         void  *)&valor_total;
       sqlstm.sqhstl[13] = (unsigned int  )8;
       sqlstm.sqhsts[13] = (         int  )0;
       sqlstm.sqindv[13] = (         void  *)0;
       sqlstm.sqinds[13] = (         int  )0;
       sqlstm.sqharm[13] = (unsigned int  )0;
       sqlstm.sqadto[13] = (unsigned short )0;
       sqlstm.sqtdso[13] = (unsigned short )0;
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



       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C1 (%d)\n", staora);

       codigo_cliente.arr   [codigo_cliente.len] = '\0';
       if (inicio == 0) {
           inicio  = 1;
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
          }
       strcpy(wciu2,codigo_cliente.arr);
       strorg(wciu2,1,2);
       if (strcmp(wciu2,wciu.arr)) {
           if (con_lin > 56)
               titulos();
           sprintf(mensajes,"TOTAL CIUDAD %d",anod+1);
           totaliza(0);
           ventas_ciudad();
           recaudos_ciudad();
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
           titulo_ciudad();
       }
       strcpy(wcod.arr,codigo_cliente.arr);
       wcod.len  =  strlen(wcod.arr);
       imprime_facturas();
 }
 if (con_lin > 56)
    titulos();
 sprintf(mensajes,"TOTAL CIUDAD %d",anod+1);
 totaliza(0);
 ventas_ciudad();
 recaudos_ciudad();
 strcpy(wciu.arr,codigo_cliente.arr);
 strorg(wciu.arr,1,2);
// if (con_lin > 56)
 tit_ciu = 1;
 titulos();
 sprintf(mensajes,"TOTALES GENERALES %d",anod+1);
 totaliza(1);
// recaudos_ciudad();
/*
 for (i=0;i<=3;i++) {
     borro_totales(i);
 }
*/
 /* EXEC SQL CLOSE C1; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )169;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 staora = 0;
 valor_total=0;
 for (i=0;i<=12;++i) {
      valor_neto[i]=0;
 }
 /* EXEC SQL OPEN C9; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) \"01\
\" ,sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) \"02\" ,sum\
(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) \"03\" ,sum(decode\
(to_char(fecha_documento,'mm'),'04',valor_neto,0)) \"04\" ,sum(decode(to_cha\
r(fecha_documento,'mm'),'05',valor_neto,0)) \"05\" ,sum(decode(to_char(fecha\
_documento,'mm'),'06',valor_neto,0)) \"06\" ,sum(decode(to_char(fecha_docume\
nto,'mm'),'07',valor_neto,0)) \"07\" ,sum(decode(to_char(fecha_documento,'mm\
'),'08',valor_neto,0)) \"08\" ,sum(decode(to_char(fecha_documento,'mm'),'09'\
,valor_neto,0)) \"09\" ,sum(decode(to_char(fecha_documento,'mm'),'10',valor_\
neto,0)) \"10\" ,sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)\
) \"11\" ,sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) \"12\"\
 ,sum(valor_neto)  from facturas f where ((((((((to_number(:b0)=tipo_factura\
 and (tipo_documento='F' or tipo_documento='C')) and fecha_documento>=to_dat\
e(to_number(:b1),'yyyymmdd')) and fecha_documento<=to_date(to_n");
 sqlstm.stmt = sq0011;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )184;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned int  )12;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_aini;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&fecha_afin;
 sqlstm.sqhstl[2] = (unsigned int  )92;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&clientei;
 sqlstm.sqhstl[3] = (unsigned int  )92;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&clientef;
 sqlstm.sqhstl[4] = (unsigned int  )92;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&librob;
 sqlstm.sqhstl[5] = (unsigned int  )4;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&p_lista;
 sqlstm.sqhstl[6] = (unsigned int  )6;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&p_lista;
 sqlstm.sqhstl[7] = (unsigned int  )6;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C9 INTO :valor_neto[1],
                              :valor_neto[2],
                              :valor_neto[3],
                              :valor_neto[4],
                              :valor_neto[5],
                              :valor_neto[6],
                              :valor_neto[7],
                              :valor_neto[8],
                              :valor_neto[9],
                              :valor_neto[10],
                              :valor_neto[11],
                              :valor_neto[12],
                              :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 14;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )231;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[0] = (unsigned int  )8;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[1] = (unsigned int  )8;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[2] = (unsigned int  )8;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[3] = (unsigned int  )8;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_total;
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
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



       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C9 (%d)\n", staora);
       for (i=0;i<=1;++i)
            acumulo_totales(i);
 }
 sprintf(mensajes,"TOTALES GENERALES %d",anod);

 porcentualiza(1);

 /* EXEC SQL CLOSE C9; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )298;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 porcentualiza_pagost(1);

// if(e!=1)
    con_lin=66;
}

void lista_basura(e)
int e;
{
 int i;
 sprintf(codigo_emp.arr,"%d",e);
 empresa();

 valor_total=0;
 for (i=0;i<=12;++i) {
      valor_neto[i]=0;
 }
 /* EXEC SQL OPEN C6; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select codigo_cliente ,sum(decode(to_char(fecha_documento,'mm'),'01',val\
or_neto,0)) \"01\" ,sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto\
,0)) \"02\" ,sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) \"\
03\" ,sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) \"04\" ,s\
um(decode(to_char(fecha_documento,'mm'),'05',valor_neto,0)) \"05\" ,sum(deco\
de(to_char(fecha_documento,'mm'),'06',valor_neto,0)) \"06\" ,sum(decode(to_c\
har(fecha_documento,'mm'),'07',valor_neto,0)) \"07\" ,sum(decode(to_char(fec\
ha_documento,'mm'),'08',valor_neto,0)) \"08\" ,sum(decode(to_char(fecha_docu\
mento,'mm'),'09',valor_neto,0)) \"09\" ,sum(decode(to_char(fecha_documento,'\
mm'),'10',valor_neto,0)) \"10\" ,sum(decode(to_char(fecha_documento,'mm'),'1\
1',valor_neto,0)) \"11\" ,sum(decode(to_char(fecha_documento,'mm'),'12',valo\
r_neto,0)) \"12\" ,sum(valor_neto)  from facturas f where ((((((((to_number(\
:b0)=tipo_factura and (tipo_documento='F' or tipo_documento='C')) and fecha_\
documento>=to_date(to_number(:b1),'yyyymmdd')) and fecha_documen");
 sqlstm.stmt = sq0006;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )313;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned int  )12;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[2] = (unsigned int  )92;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&clientei;
 sqlstm.sqhstl[3] = (unsigned int  )92;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&clientef;
 sqlstm.sqhstl[4] = (unsigned int  )92;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&librob;
 sqlstm.sqhstl[5] = (unsigned int  )4;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&p_lista;
 sqlstm.sqhstl[6] = (unsigned int  )6;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&p_lista;
 sqlstm.sqhstl[7] = (unsigned int  )6;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
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



 inicio  = 0;
 staora  = 0;
 while (staora == 0) {

       /* EXEC SQL FETCH C6 INTO :codigo_cliente,
                              :valor_neto[1],
                              :valor_neto[2],
                              :valor_neto[3],
                              :valor_neto[4],
                              :valor_neto[5],
                              :valor_neto[6],
                              :valor_neto[7],
                              :valor_neto[8],
                              :valor_neto[9],
                              :valor_neto[10],
                              :valor_neto[11],
                              :valor_neto[12],
                              :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 14;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )360;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&codigo_cliente;
       sqlstm.sqhstl[0] = (unsigned int  )42;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[1] = (unsigned int  )8;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[2] = (unsigned int  )8;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[3] = (unsigned int  )8;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
       sqlstm.sqhstv[13] = (         void  *)&valor_total;
       sqlstm.sqhstl[13] = (unsigned int  )8;
       sqlstm.sqhsts[13] = (         int  )0;
       sqlstm.sqindv[13] = (         void  *)0;
       sqlstm.sqinds[13] = (         int  )0;
       sqlstm.sqharm[13] = (unsigned int  )0;
       sqlstm.sqadto[13] = (unsigned short )0;
       sqlstm.sqtdso[13] = (unsigned short )0;
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



       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C6 (%d)\n", staora);

       codigo_cliente.arr   [codigo_cliente.len] = '\0';
       if (inicio == 0) {
           inicio  = 1;
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
          }
       strcpy(wciu2,codigo_cliente.arr);
       strorg(wciu2,1,2);
       if (strcmp(wciu2,wciu.arr)) {
           if (con_lin > 56)
               titulos();
           sprintf(mensajes,"TOTAL CIUDAD %d",anod+1);
           totaliza(0);
           ventas_ciudad();
           recaudos_ciudad();
           strcpy(wciu.arr,codigo_cliente.arr);
           strorg(wciu.arr,1,2);
           titulo_ciudad();
       }
       strcpy(wcod.arr,codigo_cliente.arr);
       wcod.len  =  strlen(wcod.arr);
       imprime_facturas();
 }
 if (con_lin > 56)
    titulos();
 sprintf(mensajes,"TOTAL CIUDAD %d",anod+1);
 totaliza(0);
 ventas_ciudad();
 recaudos_ciudad();
 strcpy(wciu.arr,codigo_cliente.arr);
 strorg(wciu.arr,1,2);
 sprintf(mensajes,"TOTALES GENERALES %d",anod+1);
 totaliza(0);
/*
 for (i=1;i<=3;i++) {
     borro_totales(i);
 }
*/
 con_lin=66;
 /* EXEC SQL CLOSE C6; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )431;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void imprime_facturas()
{
 int i;
 if (con_lin > 60)
    titulos();
 /* EXEC SQL select n.nombre
          into  :nomb_clie
          from  nits n, clientes cl
          where n.codigo_nit      = cl.codigo_nit      and
                cl.codigo_cliente = :wcod; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select n.nombre into :b0  from nits n ,clientes cl where (n.\
codigo_nit=cl.codigo_nit and cl.codigo_cliente=:b1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )446;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nomb_clie;
 sqlstm.sqhstl[0] = (unsigned int  )102;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&wcod;
 sqlstm.sqhstl[1] = (unsigned int  )42;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
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



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Nits(C2) (%d)\n", sqlca.sqlcode);

 nomb_clie.arr   [nomb_clie.len] = '\0';
 if (hojas > 1) {
    sprintf(cadena,"%06.0f",numero_factura+hojas-1);
    cadena[3]='-';
    strorg(cadena,4,3);
 }
 else strcpy(cadena,"  ");
 fprintf(fp,"%6s ",codigo_cliente.arr);
 strorg(nomb_clie.arr,1,39);
 fprintf(fp,"%-39s",nomb_clie.arr);

 for (i=m;i<=12;i++) {
     sprintf (cadena,"%6.2f",valor_neto[i]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zz9",cadena,r_t));
 }
 for (i=1;i<m;i++) {
     sprintf (cadena,"%6.2f",valor_neto[i]);
     fprintf(fp,"%14s",fmtnum("zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",valor_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=1;
 for (i=0;i<=1;++i)
      acumulo_totales(i);
}

void totaliza(i)
int i;
{
 if (con_lin > 62)
    titulos();
 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (j=1;j<m;j++) {
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",vect[i].val_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;
 borro_totales(i);
 tit_ciu=0;
}

void ventas_ciudad()    //Aqui esta el problema
{
  int i;
  valor_total_a = 0;
  for (i=1;i<=12;i++) {
    valor_neto_a[i] = 0;
  }

  /* EXEC SQL OPEN C1C; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlbuft((void **)0, 
    "select c.nombre ,sum(decode(to_char(fecha_documento,'mm'),'01',valor_ne\
to,0)) \"01\" ,sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) \
\"02\" ,sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) \"03\" \
,sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) \"04\" ,sum(de\
code(to_char(fecha_documento,'mm'),'05',valor_neto,0)) \"05\" ,sum(decode(to\
_char(fecha_documento,'mm'),'06',valor_neto,0)) \"06\" ,sum(decode(to_char(f\
echa_documento,'mm'),'07',valor_neto,0)) \"07\" ,sum(decode(to_char(fecha_do\
cumento,'mm'),'08',valor_neto,0)) \"08\" ,sum(decode(to_char(fecha_documento\
,'mm'),'09',valor_neto,0)) \"09\" ,sum(decode(to_char(fecha_documento,'mm'),\
'10',valor_neto,0)) \"10\" ,sum(decode(to_char(fecha_documento,'mm'),'11',va\
lor_neto,0)) \"11\" ,sum(decode(to_char(fecha_documento,'mm'),'12',valor_net\
o,0)) \"12\" ,sum(valor_neto)  from facturas f ,ciudades c where ((((((((to_\
number(:b0)=tipo_factura and (tipo_documento='F' or tipo_documento='C')) and\
 fecha_documento>=to_date(to_number(:b1),'yyyymmdd')) and fecha_d");
  sqlstm.stmt = sq0005;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )469;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned int  )12;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&fecha_aini;
  sqlstm.sqhstl[1] = (unsigned int  )92;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&fecha_afin;
  sqlstm.sqhstl[2] = (unsigned int  )92;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&wciu;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&librob;
  sqlstm.sqhstl[4] = (unsigned int  )4;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&p_lista;
  sqlstm.sqhstl[5] = (unsigned int  )6;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&p_lista;
  sqlstm.sqhstl[6] = (unsigned int  )6;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
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


  /* EXEC SQL FETCH C1C INTO :nomb_ciudad,
                          :valor_neto_a[1],
                          :valor_neto_a[2],
                          :valor_neto_a[3],
                          :valor_neto_a[4],
                          :valor_neto_a[5],
                          :valor_neto_a[6],
                          :valor_neto_a[7],
                          :valor_neto_a[8],
                          :valor_neto_a[9],
                          :valor_neto_a[10],
                          :valor_neto_a[11],
                          :valor_neto_a[12],
                          :valor_total_a; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )512;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&nomb_ciudad;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&valor_neto_a[1];
  sqlstm.sqhstl[1] = (unsigned int  )8;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&valor_neto_a[2];
  sqlstm.sqhstl[2] = (unsigned int  )8;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&valor_neto_a[3];
  sqlstm.sqhstl[3] = (unsigned int  )8;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&valor_neto_a[4];
  sqlstm.sqhstl[4] = (unsigned int  )8;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&valor_neto_a[5];
  sqlstm.sqhstl[5] = (unsigned int  )8;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&valor_neto_a[6];
  sqlstm.sqhstl[6] = (unsigned int  )8;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&valor_neto_a[7];
  sqlstm.sqhstl[7] = (unsigned int  )8;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&valor_neto_a[8];
  sqlstm.sqhstl[8] = (unsigned int  )8;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&valor_neto_a[9];
  sqlstm.sqhstl[9] = (unsigned int  )8;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&valor_neto_a[10];
  sqlstm.sqhstl[10] = (unsigned int  )8;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&valor_neto_a[11];
  sqlstm.sqhstl[11] = (unsigned int  )8;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)0;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&valor_neto_a[12];
  sqlstm.sqhstl[12] = (unsigned int  )8;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)0;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&valor_total_a;
  sqlstm.sqhstl[13] = (unsigned int  )8;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)0;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
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


  nomb_ciudad.arr   [nomb_ciudad.len] = '\0';
  sprintf(mensajes,"TOTAL CIUDAD %d",anod);
  if (con_lin > 62) {
      titulos();
  }

  fprintf(fp,"\n%-4s"," ");
  fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);
  for (i=m;i<=12;i++) {
     sprintf (cadena,"%6.2f",valor_neto_a[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
  }
  for (i=1;i<m;i++) {
     sprintf (cadena,"%6.2f",valor_neto_a[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
  }
  sprintf (cadena,"%6.2f",valor_total_a);
  fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  con_lin+=2;
  /* EXEC SQL CLOSE C1C; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )583;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  valor_total_a = 0;
  for (i=1;i<=12;i++) {
    valor_neto_a[i] = 0;
  }
}

void ventas_zona()
{
  int i;
  valor_total = 0;
  for (i=1;i<=12;i++) {
    valor_neto[i] = 0;
  }
//  printf("Vendedor %s ",cvendedor.arr); getchar();
  /* EXEC SQL OPEN C7A; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlbuft((void **)0, 
    "select v.codigo ,sum(decode(to_char(fecha_documento,'mm'),'01',valor_ne\
to,0)) \"01\" ,sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) \
\"02\" ,sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) \"03\" \
,sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) \"04\" ,sum(de\
code(to_char(fecha_documento,'mm'),'05',valor_neto,0)) \"05\" ,sum(decode(to\
_char(fecha_documento,'mm'),'06',valor_neto,0)) \"06\" ,sum(decode(to_char(f\
echa_documento,'mm'),'07',valor_neto,0)) \"07\" ,sum(decode(to_char(fecha_do\
cumento,'mm'),'08',valor_neto,0)) \"08\" ,sum(decode(to_char(fecha_documento\
,'mm'),'09',valor_neto,0)) \"09\" ,sum(decode(to_char(fecha_documento,'mm'),\
'10',valor_neto,0)) \"10\" ,sum(decode(to_char(fecha_documento,'mm'),'11',va\
lor_neto,0)) \"11\" ,sum(decode(to_char(fecha_documento,'mm'),'12',valor_net\
o,0)) \"12\" ,sum(valor_neto)  from facturas f ,vendedores v ,zonas z ,depar\
tamentos d ,ciudades c where ((((((((((((((to_number(:b0)=tipo_factura and (\
tipo_documento='F' or tipo_documento='C')) and fecha_documento>=t");
  sqlstm.stmt = sq0009;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )598;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned int  )12;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&fecha_aini;
  sqlstm.sqhstl[1] = (unsigned int  )92;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&fecha_afin;
  sqlstm.sqhstl[2] = (unsigned int  )92;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&clientei;
  sqlstm.sqhstl[3] = (unsigned int  )92;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&clientef;
  sqlstm.sqhstl[4] = (unsigned int  )92;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&cvendedor;
  sqlstm.sqhstl[5] = (unsigned int  )42;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&librob;
  sqlstm.sqhstl[6] = (unsigned int  )4;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&p_lista;
  sqlstm.sqhstl[7] = (unsigned int  )6;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&p_lista;
  sqlstm.sqhstl[8] = (unsigned int  )6;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
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


  /* EXEC SQL FETCH C7A INTO :codigo_ven2,
                          :valor_neto[1],
                          :valor_neto[2],
                          :valor_neto[3],
                          :valor_neto[4],
                          :valor_neto[5],
                          :valor_neto[6],
                          :valor_neto[7],
                          :valor_neto[8],
                          :valor_neto[9],
                          :valor_neto[10],
                          :valor_neto[11],
                          :valor_neto[12],
                          :valor_total; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )649;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_ven2;
  sqlstm.sqhstl[0] = (unsigned int  )42;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&valor_neto[1];
  sqlstm.sqhstl[1] = (unsigned int  )8;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&valor_neto[2];
  sqlstm.sqhstl[2] = (unsigned int  )8;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&valor_neto[3];
  sqlstm.sqhstl[3] = (unsigned int  )8;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&valor_neto[4];
  sqlstm.sqhstl[4] = (unsigned int  )8;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&valor_neto[5];
  sqlstm.sqhstl[5] = (unsigned int  )8;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&valor_neto[6];
  sqlstm.sqhstl[6] = (unsigned int  )8;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&valor_neto[7];
  sqlstm.sqhstl[7] = (unsigned int  )8;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&valor_neto[8];
  sqlstm.sqhstl[8] = (unsigned int  )8;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&valor_neto[9];
  sqlstm.sqhstl[9] = (unsigned int  )8;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&valor_neto[10];
  sqlstm.sqhstl[10] = (unsigned int  )8;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&valor_neto[11];
  sqlstm.sqhstl[11] = (unsigned int  )8;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)0;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&valor_neto[12];
  sqlstm.sqhstl[12] = (unsigned int  )8;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)0;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&valor_total;
  sqlstm.sqhstl[13] = (unsigned int  )8;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)0;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
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



 staora  = sqlca.sqlcode;
 if (staora == -1405)
     staora  = 0;
 else if (staora)
          fprintf (stderr, "Error leyendo C7A.1 (%d)\n", staora);

 codigo_ven2.arr  [codigo_ven2.len]  = '\0';

  sprintf(mensajes,"SUB-TOTAL ZONA %d",anod);
  if (con_lin > 62)
     titulo_zona();

  fprintf(fp,"\n%-4s"," ");
  fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);
  for (i=m;i<=12;i++) {
     sprintf (cadena,"%6.2f",valor_neto[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
  }
  for (i=1;i<m;i++) {
     sprintf (cadena,"%6.2f",valor_neto[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
  }
  sprintf (cadena,"%6.2f",valor_total);
  fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  con_lin+=2;
  /* EXEC SQL CLOSE C7A; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )720;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  valor_total = 0;
  for (i=1;i<=12;i++) {
    valor_neto[i] = 0;
  }
}

void ventas_zona_og()
{
  int i;
  valor_total = 0;
  for (i=1;i<=12;i++) {
    valor_neto[i] = 0;
  }
//  printf("Vendedor %s ",cvendedor.arr); getchar();
  /* EXEC SQL OPEN C11E; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlbuft((void **)0, 
    "select v.codigo ,sum(decode(to_char(fecha_documento,'mm'),'01',valor_ne\
to,0)) \"01\" ,sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) \
\"02\" ,sum(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) \"03\" \
,sum(decode(to_char(fecha_documento,'mm'),'04',valor_neto,0)) \"04\" ,sum(de\
code(to_char(fecha_documento,'mm'),'05',valor_neto,0)) \"05\" ,sum(decode(to\
_char(fecha_documento,'mm'),'06',valor_neto,0)) \"06\" ,sum(decode(to_char(f\
echa_documento,'mm'),'07',valor_neto,0)) \"07\" ,sum(decode(to_char(fecha_do\
cumento,'mm'),'08',valor_neto,0)) \"08\" ,sum(decode(to_char(fecha_documento\
,'mm'),'09',valor_neto,0)) \"09\" ,sum(decode(to_char(fecha_documento,'mm'),\
'10',valor_neto,0)) \"10\" ,sum(decode(to_char(fecha_documento,'mm'),'11',va\
lor_neto,0)) \"11\" ,sum(decode(to_char(fecha_documento,'mm'),'12',valor_net\
o,0)) \"12\" ,sum(valor_neto)  from facturas f ,vendedores v ,zonas z ,depar\
tamentos d ,ciudades c where ((((((((((((((to_number(:b0)=tipo_factura and (\
tipo_documento='F' or tipo_documento='C')) and fecha_documento>=t");
  sqlstm.stmt = sq0024;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )735;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[0] = (unsigned int  )12;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&fecha_aini;
  sqlstm.sqhstl[1] = (unsigned int  )92;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&fecha_afin;
  sqlstm.sqhstl[2] = (unsigned int  )92;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&clientei;
  sqlstm.sqhstl[3] = (unsigned int  )92;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&clientef;
  sqlstm.sqhstl[4] = (unsigned int  )92;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&cvendedor;
  sqlstm.sqhstl[5] = (unsigned int  )42;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&librob;
  sqlstm.sqhstl[6] = (unsigned int  )4;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&p_lista;
  sqlstm.sqhstl[7] = (unsigned int  )6;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&p_lista;
  sqlstm.sqhstl[8] = (unsigned int  )6;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
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


  /* EXEC SQL FETCH C11E INTO :codigo_ven2,
                           :valor_neto[1],
                           :valor_neto[2],
                           :valor_neto[3],
                           :valor_neto[4],
                           :valor_neto[5],
                           :valor_neto[6],
                           :valor_neto[7],
                           :valor_neto[8],
                           :valor_neto[9],
                           :valor_neto[10],
                           :valor_neto[11],
                           :valor_neto[12],
                           :valor_total; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )786;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&codigo_ven2;
  sqlstm.sqhstl[0] = (unsigned int  )42;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&valor_neto[1];
  sqlstm.sqhstl[1] = (unsigned int  )8;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&valor_neto[2];
  sqlstm.sqhstl[2] = (unsigned int  )8;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&valor_neto[3];
  sqlstm.sqhstl[3] = (unsigned int  )8;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&valor_neto[4];
  sqlstm.sqhstl[4] = (unsigned int  )8;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&valor_neto[5];
  sqlstm.sqhstl[5] = (unsigned int  )8;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&valor_neto[6];
  sqlstm.sqhstl[6] = (unsigned int  )8;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&valor_neto[7];
  sqlstm.sqhstl[7] = (unsigned int  )8;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&valor_neto[8];
  sqlstm.sqhstl[8] = (unsigned int  )8;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&valor_neto[9];
  sqlstm.sqhstl[9] = (unsigned int  )8;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&valor_neto[10];
  sqlstm.sqhstl[10] = (unsigned int  )8;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&valor_neto[11];
  sqlstm.sqhstl[11] = (unsigned int  )8;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)0;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&valor_neto[12];
  sqlstm.sqhstl[12] = (unsigned int  )8;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)0;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&valor_total;
  sqlstm.sqhstl[13] = (unsigned int  )8;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)0;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
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



 staora  = sqlca.sqlcode;
 if (staora == -1405)
     staora  = 0;
 else if (staora)
          fprintf (stderr, "Error leyendo C11D.1 (%d)\n", staora);

 codigo_ven2.arr  [codigo_ven2.len]  = '\0';

  sprintf(mensajes,"SUB-TOTAL ZONA %d",anod);
  if (con_lin > 62)
     titulos();

  fprintf(fp,"\n%-4s"," ");
  fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);
  for (i=m;i<=12;i++) {
     sprintf (cadena,"%6.2f",valor_neto[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
  }
  for (i=1;i<m;i++) {
     sprintf (cadena,"%6.2f",valor_neto[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
  }
  sprintf (cadena,"%6.2f",valor_total);
  fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  con_lin+=2;
  /* EXEC SQL CLOSE C11E; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )857;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  valor_total = 0;
  for (i=1;i<=12;i++) {
    valor_neto[i] = 0;
  }
}

void recaudos_ciudad()
{
  int i;
  total_pagos = 0;
  for (i=1;i<=12;i++) {
    valor_pagos[i] = 0;
  }
  /* EXEC SQL OPEN C1A; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlbuft((void **)0, 
    "select c.nombre ,sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_carter\
a,0),0)) \"01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),\
0)) \"02\" ,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"\
03\" ,sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" \
,sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(\
decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decod\
e(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_\
char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(\
i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fec\
ha,'mm'),'10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'m\
m'),'11',nvl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'\
12',nvl(valor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingreso\
s_c i ,ciudades c where (((((((((to_number(to_char(i.fecha,'yyyymmdd'))>=to_\
number(:b0) and to_number(to_char(i.fecha,'yyyymmdd'))<=to_numbe");
  sqlstm.stmt = sq0003;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )872;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&fecha_ini;
  sqlstm.sqhstl[0] = (unsigned int  )92;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&fecha_fin;
  sqlstm.sqhstl[1] = (unsigned int  )92;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&wciu;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[3] = (unsigned int  )12;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&p_lista;
  sqlstm.sqhstl[4] = (unsigned int  )6;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&p_lista;
  sqlstm.sqhstl[5] = (unsigned int  )6;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
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


  /* EXEC SQL FETCH C1A INTO :nomb_ciudad,
                         :valor_pagos[1],
                         :valor_pagos[2],
                         :valor_pagos[3],
                         :valor_pagos[4],
                         :valor_pagos[5],
                         :valor_pagos[6],
                         :valor_pagos[7],
                         :valor_pagos[8],
                         :valor_pagos[9],
                         :valor_pagos[10],
                         :valor_pagos[11],
                         :valor_pagos[12],
                         :total_pagos; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )911;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&nomb_ciudad;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&valor_pagos[1];
  sqlstm.sqhstl[1] = (unsigned int  )8;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&valor_pagos[2];
  sqlstm.sqhstl[2] = (unsigned int  )8;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&valor_pagos[3];
  sqlstm.sqhstl[3] = (unsigned int  )8;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&valor_pagos[4];
  sqlstm.sqhstl[4] = (unsigned int  )8;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&valor_pagos[5];
  sqlstm.sqhstl[5] = (unsigned int  )8;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&valor_pagos[6];
  sqlstm.sqhstl[6] = (unsigned int  )8;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&valor_pagos[7];
  sqlstm.sqhstl[7] = (unsigned int  )8;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&valor_pagos[8];
  sqlstm.sqhstl[8] = (unsigned int  )8;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&valor_pagos[9];
  sqlstm.sqhstl[9] = (unsigned int  )8;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&valor_pagos[10];
  sqlstm.sqhstl[10] = (unsigned int  )8;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&valor_pagos[11];
  sqlstm.sqhstl[11] = (unsigned int  )8;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)0;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&valor_pagos[12];
  sqlstm.sqhstl[12] = (unsigned int  )8;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)0;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&total_pagos;
  sqlstm.sqhstl[13] = (unsigned int  )8;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)0;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
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


//  staoraa  = sqlca.sqlcode;
  nomb_ciudad.arr   [nomb_ciudad.len] = '\0';
  sprintf(mensajes,"RECAUDO %d",anod+1);
  if (con_lin > 62)
     titulos();

  fprintf(fp,"\n%-4s"," ");
  fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);
  for (i=m;i<=12;i++) {
     sprintf (cadena,"%6.2f",valor_pagos[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
  }
  for (i=1;i<m;i++) {
     sprintf (cadena,"%6.2f",valor_pagos[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
  }
  sprintf (cadena,"%6.2f",total_pagos);
  fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

  con_lin+=2;
  /* EXEC SQL CLOSE C1A; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )982;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



  total_pagos = 0;
  for (i=1;i<=12;i++) {
    valor_pagos[i] = 0;
  }
  /* EXEC SQL OPEN C1B; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlbuft((void **)0, 
    "select c.nombre ,sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_carter\
a,0),0)) \"01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),\
0)) \"02\" ,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"\
03\" ,sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" \
,sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(\
decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decod\
e(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_\
char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(\
i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fec\
ha,'mm'),'10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'m\
m'),'11',nvl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'\
12',nvl(valor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingreso\
s_c i ,ciudades c where (((((((((to_number(to_char(i.fecha,'yyyymmdd'))>=to_\
number(:b0) and to_number(to_char(i.fecha,'yyyymmdd'))<=to_numbe");
  sqlstm.stmt = sq0004;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )997;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&fecha_aini;
  sqlstm.sqhstl[0] = (unsigned int  )92;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&fecha_afin;
  sqlstm.sqhstl[1] = (unsigned int  )92;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&wciu;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&p_lista;
  sqlstm.sqhstl[3] = (unsigned int  )6;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&p_lista;
  sqlstm.sqhstl[4] = (unsigned int  )6;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&codigo_emp;
  sqlstm.sqhstl[5] = (unsigned int  )12;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
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


  /* EXEC SQL FETCH C1B INTO :nomb_ciudad,
                         :valor_pagos[1],
                         :valor_pagos[2],
                         :valor_pagos[3],
                         :valor_pagos[4],
                         :valor_pagos[5],
                         :valor_pagos[6],
                         :valor_pagos[7],
                         :valor_pagos[8],
                         :valor_pagos[9],
                         :valor_pagos[10],
                         :valor_pagos[11],
                         :valor_pagos[12],
                         :total_pagos; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1036;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&nomb_ciudad;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&valor_pagos[1];
  sqlstm.sqhstl[1] = (unsigned int  )8;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&valor_pagos[2];
  sqlstm.sqhstl[2] = (unsigned int  )8;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&valor_pagos[3];
  sqlstm.sqhstl[3] = (unsigned int  )8;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&valor_pagos[4];
  sqlstm.sqhstl[4] = (unsigned int  )8;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&valor_pagos[5];
  sqlstm.sqhstl[5] = (unsigned int  )8;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&valor_pagos[6];
  sqlstm.sqhstl[6] = (unsigned int  )8;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&valor_pagos[7];
  sqlstm.sqhstl[7] = (unsigned int  )8;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&valor_pagos[8];
  sqlstm.sqhstl[8] = (unsigned int  )8;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&valor_pagos[9];
  sqlstm.sqhstl[9] = (unsigned int  )8;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&valor_pagos[10];
  sqlstm.sqhstl[10] = (unsigned int  )8;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&valor_pagos[11];
  sqlstm.sqhstl[11] = (unsigned int  )8;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)0;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&valor_pagos[12];
  sqlstm.sqhstl[12] = (unsigned int  )8;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)0;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&total_pagos;
  sqlstm.sqhstl[13] = (unsigned int  )8;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)0;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
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


// staoraa  = sqlca.sqlcode;
 nomb_ciudad.arr   [nomb_ciudad.len] = '\0';
 sprintf(mensajes,"RECAUDO %d",anod);
 if (con_lin > 62)
    titulos();

 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);
 for (i=m;i<=12;i++) {
     sprintf (cadena,"%6.2f",valor_pagos[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (i=1;i<m;i++) {
     sprintf (cadena,"%6.2f",valor_pagos[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 sprintf (cadena,"%6.2f",total_pagos);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;
 /* EXEC SQL CLOSE C1B; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1107;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



}

void imprime_recaudos()
{
 int i;
 valor_total_r = 0;
 for (i=1;i<=12;i++) {
   valor_neto_r[i] = 0;
 }
// printf("10) codigo_emp <%s>, fecha_ini <%s> fecha_fin <%s>, cvendedor<%s> ",codigo_emp.arr,fecha_ini.arr, fecha_fin.arr, cvendedor.arr); getchar();
 /* EXEC SQL OPEN C10; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select v.nombre ,sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera\
,0),0)) \"01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0\
)) \"02\" ,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"\
03\" ,sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" \
,sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(\
decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decod\
e(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_\
char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(\
i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fec\
ha,'mm'),'10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'m\
m'),'11',nvl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'\
12',nvl(valor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingreso\
s_c i ,ciudades c ,vendedores v ,zonas z where ((((((((((((to_number(to_char\
(i.fecha,'yyyymmdd'))>=to_number(:b0) and to_number(to_char(i.fe");
 sqlstm.stmt = sq0012;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1122;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[0] = (unsigned int  )92;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[2] = (unsigned int  )12;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&cvendedor;
 sqlstm.sqhstl[3] = (unsigned int  )42;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&p_lista;
 sqlstm.sqhstl[4] = (unsigned int  )6;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&p_lista;
 sqlstm.sqhstl[5] = (unsigned int  )6;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
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


 /* EXEC SQL FETCH C10 INTO :nomb_clie_r,
                         :valor_neto_r[1],
                         :valor_neto_r[2],
                         :valor_neto_r[3],
                         :valor_neto_r[4],
                         :valor_neto_r[5],
                         :valor_neto_r[6],
                         :valor_neto_r[7],
                         :valor_neto_r[8],
                         :valor_neto_r[9],
                         :valor_neto_r[10],
                         :valor_neto_r[11],
                         :valor_neto_r[12],
                         :valor_total_r; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1161;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nomb_clie_r;
 sqlstm.sqhstl[0] = (unsigned int  )102;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&valor_neto_r[1];
 sqlstm.sqhstl[1] = (unsigned int  )8;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&valor_neto_r[2];
 sqlstm.sqhstl[2] = (unsigned int  )8;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&valor_neto_r[3];
 sqlstm.sqhstl[3] = (unsigned int  )8;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&valor_neto_r[4];
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&valor_neto_r[5];
 sqlstm.sqhstl[5] = (unsigned int  )8;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&valor_neto_r[6];
 sqlstm.sqhstl[6] = (unsigned int  )8;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&valor_neto_r[7];
 sqlstm.sqhstl[7] = (unsigned int  )8;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&valor_neto_r[8];
 sqlstm.sqhstl[8] = (unsigned int  )8;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&valor_neto_r[9];
 sqlstm.sqhstl[9] = (unsigned int  )8;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&valor_neto_r[10];
 sqlstm.sqhstl[10] = (unsigned int  )8;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)0;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&valor_neto_r[11];
 sqlstm.sqhstl[11] = (unsigned int  )8;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&valor_neto_r[12];
 sqlstm.sqhstl[12] = (unsigned int  )8;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&valor_total_r;
 sqlstm.sqhstl[13] = (unsigned int  )8;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
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


 staora  = sqlca.sqlcode;
 nomb_clie_r.arr   [nomb_clie_r.len] = '\0';
// printf("0) (%d) fecha_ini.arr <%s>, fecha_fin.arr <%s>, wciu.arr <%s>, codigo_emp.arr <%s>, cvendedor.arr <%s>, valor_neto_r[%4d] = <%15.0f> ",staora,fecha_ini.arr, fecha_fin.arr, wciu.arr, codigo_emp.arr, cvendedor.arr,1,valor_neto_r[1]); getchar();
 if (staora == -1405)
     staora  = 0;
 else if (staora) {
         nomb_clie_r.arr[0] = '\0';
         valor_total_r=0;
         for (i=0;i<=12;++i) {
             valor_neto_r[i]=0;
         }
         fprintf (stderr, "Error leyendo C10 (%d)\n", staora);
      }
 sprintf(mensajes,"RECAUDO %d",anod+1);
 /* EXEC SQL CLOSE C10; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1232;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 if (con_lin > 62)
    titulos();

 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);
 for (i=m;i<=12;i++) {
// printf("1) valor_neto_r[%4d] = <%15.0f> ",i,valor_neto_r[i]); getchar();
     sprintf (cadena,"%6.2f",valor_neto_r[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (i=1;i<m;i++) {
// printf("2) valor_neto_r[%4d] = <%15.0f> ",i,valor_neto_r[i]); getchar();
     sprintf (cadena,"%6.2f",valor_neto_r[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 sprintf (cadena,"%6.2f",valor_total_r);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;
 for (i=0;i<=1;++i) {
      acumulo_recaudos(i);
 }

 valor_total_r = 0;
 for (i=1;i<=12;i++) {
   valor_neto_r[i] = 0;
 }
 /* EXEC SQL OPEN C10B; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select v.nombre ,sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera\
,0),0)) \"01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0\
)) \"02\" ,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"\
03\" ,sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" \
,sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(\
decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decod\
e(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_\
char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(\
i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fec\
ha,'mm'),'10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'m\
m'),'11',nvl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'\
12',nvl(valor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingreso\
s_c i ,ciudades c ,vendedores v ,zonas z where ((((((((((((to_number(to_char\
(i.fecha,'yyyymmdd'))>=to_number(:b0) and to_number(to_char(i.fe");
 sqlstm.stmt = sq0014;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1247;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_aini;
 sqlstm.sqhstl[0] = (unsigned int  )92;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_afin;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[2] = (unsigned int  )12;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&cvendedor;
 sqlstm.sqhstl[3] = (unsigned int  )42;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&p_lista;
 sqlstm.sqhstl[4] = (unsigned int  )6;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&p_lista;
 sqlstm.sqhstl[5] = (unsigned int  )6;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
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


 /* EXEC SQL FETCH C10B INTO :nomb_clie_r,
                         :valor_neto_r[1],
                         :valor_neto_r[2],
                         :valor_neto_r[3],
                         :valor_neto_r[4],
                         :valor_neto_r[5],
                         :valor_neto_r[6],
                         :valor_neto_r[7],
                         :valor_neto_r[8],
                         :valor_neto_r[9],
                         :valor_neto_r[10],
                         :valor_neto_r[11],
                         :valor_neto_r[12],
                         :valor_total_r; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1286;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nomb_clie_r;
 sqlstm.sqhstl[0] = (unsigned int  )102;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&valor_neto_r[1];
 sqlstm.sqhstl[1] = (unsigned int  )8;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&valor_neto_r[2];
 sqlstm.sqhstl[2] = (unsigned int  )8;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&valor_neto_r[3];
 sqlstm.sqhstl[3] = (unsigned int  )8;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&valor_neto_r[4];
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&valor_neto_r[5];
 sqlstm.sqhstl[5] = (unsigned int  )8;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&valor_neto_r[6];
 sqlstm.sqhstl[6] = (unsigned int  )8;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&valor_neto_r[7];
 sqlstm.sqhstl[7] = (unsigned int  )8;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&valor_neto_r[8];
 sqlstm.sqhstl[8] = (unsigned int  )8;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&valor_neto_r[9];
 sqlstm.sqhstl[9] = (unsigned int  )8;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&valor_neto_r[10];
 sqlstm.sqhstl[10] = (unsigned int  )8;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)0;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&valor_neto_r[11];
 sqlstm.sqhstl[11] = (unsigned int  )8;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&valor_neto_r[12];
 sqlstm.sqhstl[12] = (unsigned int  )8;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&valor_total_r;
 sqlstm.sqhstl[13] = (unsigned int  )8;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
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


 staora  = sqlca.sqlcode;
 nomb_clie_r.arr   [nomb_clie_r.len] = '\0';
 if (staora == -1405)
     staora  = 0;
 else if (staora) {
         nomb_clie_r.arr[0] = '\0';
         valor_total_r=0;
         for (i=0;i<=12;++i) {
             valor_neto_r[i]=0;
         }
         fprintf (stderr, "Error leyendo C10B (%d)\n", staora);
      }
 sprintf(mensajes,"RECAUDO %d",anod);
 /* EXEC SQL CLOSE C10B; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1357;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 if (con_lin > 62)
    titulos();

 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);
 for (i=m;i<=12;i++) {
     sprintf (cadena,"%6.2f",valor_neto_r[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (i=1;i<m;i++) {
     sprintf (cadena,"%6.2f",valor_neto_r[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 sprintf (cadena,"%6.2f",valor_total_r);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;
/*
 for (i=0;i<=1;++i) {
      acumulo_recaudos(i);
 }
*/
 tit_ciu=0;

}

void imprime_recaudos_og()
{
 int i;

// printf("11) codigo_emp <%s>, fecha_ini <%s> fecha_fin <%s>, cvendedor<%s> ",codigo_emp.arr,fecha_ini.arr, fecha_fin.arr, cvendedor.arr); getchar();
 valor_total_r=0;
 for (i=0;i<=12;++i) {
      valor_neto_r[i]=0;
 }
 /* EXEC SQL OPEN C11; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select v.nombre ,sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera\
,0),0)) \"01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0\
)) \"02\" ,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"\
03\" ,sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" \
,sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(\
decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decod\
e(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_\
char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(\
i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fec\
ha,'mm'),'10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'m\
m'),'11',nvl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'\
12',nvl(valor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingreso\
s_c i ,ciudades c ,vendedores v ,zonas z where ((((((((((((to_number(to_char\
(i.fecha,'yyyymmdd'))>=to_number(:b0) and to_number(to_char(i.fe");
 sqlstm.stmt = sq0020;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1372;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[0] = (unsigned int  )92;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[2] = (unsigned int  )12;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&cvendedor;
 sqlstm.sqhstl[3] = (unsigned int  )42;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&p_lista;
 sqlstm.sqhstl[4] = (unsigned int  )6;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&p_lista;
 sqlstm.sqhstl[5] = (unsigned int  )6;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
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


 /* EXEC SQL FETCH C11 INTO :nomb_clie_r,
                         :valor_neto_r[1],
                         :valor_neto_r[2],
                         :valor_neto_r[3],
                         :valor_neto_r[4],
                         :valor_neto_r[5],
                         :valor_neto_r[6],
                         :valor_neto_r[7],
                         :valor_neto_r[8],
                         :valor_neto_r[9],
                         :valor_neto_r[10],
                         :valor_neto_r[11],
                         :valor_neto_r[12],
                         :valor_total_r; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1411;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nomb_clie_r;
 sqlstm.sqhstl[0] = (unsigned int  )102;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&valor_neto_r[1];
 sqlstm.sqhstl[1] = (unsigned int  )8;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&valor_neto_r[2];
 sqlstm.sqhstl[2] = (unsigned int  )8;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&valor_neto_r[3];
 sqlstm.sqhstl[3] = (unsigned int  )8;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&valor_neto_r[4];
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&valor_neto_r[5];
 sqlstm.sqhstl[5] = (unsigned int  )8;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&valor_neto_r[6];
 sqlstm.sqhstl[6] = (unsigned int  )8;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&valor_neto_r[7];
 sqlstm.sqhstl[7] = (unsigned int  )8;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&valor_neto_r[8];
 sqlstm.sqhstl[8] = (unsigned int  )8;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&valor_neto_r[9];
 sqlstm.sqhstl[9] = (unsigned int  )8;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&valor_neto_r[10];
 sqlstm.sqhstl[10] = (unsigned int  )8;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)0;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&valor_neto_r[11];
 sqlstm.sqhstl[11] = (unsigned int  )8;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&valor_neto_r[12];
 sqlstm.sqhstl[12] = (unsigned int  )8;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&valor_total_r;
 sqlstm.sqhstl[13] = (unsigned int  )8;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
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


 staora  = sqlca.sqlcode;
 nomb_clie_r.arr   [nomb_clie_r.len] = '\0';
 if (staora == -1405)
     staora  = 0;
 else if (staora) {
         nomb_clie_r.arr[0] = '\0';
         valor_total_r=0;
         for (i=0;i<=12;++i) {
             valor_neto_r[i]=0;
         }
         fprintf (stderr, "Error leyendo C11: (%d)\n", staora);
      }

 sprintf(mensajes,"RECAUDO %d",anod+1);
 /* EXEC SQL CLOSE C11; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1482;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 if (con_lin > 62)
    titulos();

 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);
 for (i=m;i<=12;i++) {
     sprintf (cadena,"%6.2f",valor_neto_r[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (i=1;i<m;i++) {
     sprintf (cadena,"%6.2f",valor_neto_r[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",valor_total_r);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;
 for (i=0;i<=1;++i) {
      acumulo_recaudos(i);
 }

 valor_total_r=0;
 for (i=0;i<=12;++i) {
      valor_neto_r[i]=0;
 }
 /* EXEC SQL OPEN C11B; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select v.nombre ,sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera\
,0),0)) \"01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0\
)) \"02\" ,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"\
03\" ,sum(decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" \
,sum(decode(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(\
decode(to_char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decod\
e(to_char(i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_\
char(i.fecha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(\
i.fecha,'mm'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fec\
ha,'mm'),'10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'m\
m'),'11',nvl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'\
12',nvl(valor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingreso\
s_c i ,ciudades c ,vendedores v ,zonas z where ((((((((((((to_number(to_char\
(i.fecha,'yyyymmdd'))>=to_number(:b0) and to_number(to_char(i.fe");
 sqlstm.stmt = sq0021;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1497;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_aini;
 sqlstm.sqhstl[0] = (unsigned int  )92;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_afin;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[2] = (unsigned int  )12;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&cvendedor;
 sqlstm.sqhstl[3] = (unsigned int  )42;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&p_lista;
 sqlstm.sqhstl[4] = (unsigned int  )6;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&p_lista;
 sqlstm.sqhstl[5] = (unsigned int  )6;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
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


 /* EXEC SQL FETCH C11B INTO :nomb_clie_r,
                         :valor_neto_r[1],
                         :valor_neto_r[2],
                         :valor_neto_r[3],
                         :valor_neto_r[4],
                         :valor_neto_r[5],
                         :valor_neto_r[6],
                         :valor_neto_r[7],
                         :valor_neto_r[8],
                         :valor_neto_r[9],
                         :valor_neto_r[10],
                         :valor_neto_r[11],
                         :valor_neto_r[12],
                         :valor_total_r; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1536;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nomb_clie_r;
 sqlstm.sqhstl[0] = (unsigned int  )102;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&valor_neto_r[1];
 sqlstm.sqhstl[1] = (unsigned int  )8;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&valor_neto_r[2];
 sqlstm.sqhstl[2] = (unsigned int  )8;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&valor_neto_r[3];
 sqlstm.sqhstl[3] = (unsigned int  )8;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&valor_neto_r[4];
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&valor_neto_r[5];
 sqlstm.sqhstl[5] = (unsigned int  )8;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&valor_neto_r[6];
 sqlstm.sqhstl[6] = (unsigned int  )8;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&valor_neto_r[7];
 sqlstm.sqhstl[7] = (unsigned int  )8;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&valor_neto_r[8];
 sqlstm.sqhstl[8] = (unsigned int  )8;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&valor_neto_r[9];
 sqlstm.sqhstl[9] = (unsigned int  )8;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&valor_neto_r[10];
 sqlstm.sqhstl[10] = (unsigned int  )8;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)0;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&valor_neto_r[11];
 sqlstm.sqhstl[11] = (unsigned int  )8;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&valor_neto_r[12];
 sqlstm.sqhstl[12] = (unsigned int  )8;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&valor_total_r;
 sqlstm.sqhstl[13] = (unsigned int  )8;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
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


 staora  = sqlca.sqlcode;
 nomb_clie_r.arr   [nomb_clie_r.len] = '\0';
 if (staora == -1405)
     staora  = 0;
 else if (staora) {
         nomb_clie_r.arr[0] = '\0';
         valor_total_r=0;
         for (i=0;i<=12;++i) {
             valor_neto_r[i]=0;
         }
         fprintf (stderr, "Error leyendo C11 > (%d)\n", staora);
      }
 sprintf(mensajes,"RECAUDO %d",anod);
 /* EXEC SQL CLOSE C11B; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1607;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 if (con_lin > 62)
    titulos();

 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);
 for (i=m;i<=12;i++) {
     sprintf (cadena,"%6.2f",valor_neto_r[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (i=1;i<m;i++) {
     sprintf (cadena,"%6.2f",valor_neto_r[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",valor_total_r);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;
 tit_ciu=0;

}

void acumulo_recaudos(i)
int i;
{

 for (j=1;j<=12;j++) {
     vect[i].val_neto_r[j] +=valor_neto_r[j];
 }
 vect[i].val_total_r       +=valor_total_r;

}

void borro_recaudos(i)
int i;
{

 for (j=1;j<=12;j++) {
     vect[i].val_neto_r[j] =0;
 }
 vect[i].val_total_r =0;

}

void totaliza_r(i)
int i;
{
 if (con_lin > 62)
    titulos();
 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
     sprintf (cadena,"%6.2f",vect[i].val_neto_r[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (j=1;j<m;j++) {
     sprintf (cadena,"%6.2f",vect[i].val_neto_r[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",vect[i].val_total_r);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;
 borro_recaudos(i);
 tit_ciu=0;
}

void porcentualiza(i)
int i;
{

// if (con_lin > 60)
//    titulos();
 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (j=1;j<m;j++) {
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",vect[i].val_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;

 sprintf(mensajes,"PORCENTAJE COMPARATIVO");
 if (con_lin > 62)
    titulos();
 fprintf(fp,"\n%-4s"," ");
 con_lin+=1;
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
     sprintf (cadena,"%6.2f",0.0);
     if (vect[i].val_neto[j] > 0) {
//        printf("1) vect[%d].val_netoa[%d] <%6.2f> - vect[i].val_neto[j] <6.2f>",i,j,vect[i].val_netoa[j],vect[i].val_neto[j]); getchar();
        sprintf (cadena,"%6.2f",(vect[i].val_netoa[j]-vect[i].val_neto[j])/vect[i].val_neto[j]*100);
     }
     else {
           if (vect[i].val_neto[j] == 0 && vect[i].val_netoa[j] > 0 ) {
//             printf("i=<%d>,j=<%d>",i,j); getchar();
//             printf("x%d)pase-1 vect[i].val_netoa[j]=%12.2f ", j, vect[i].val_netoa[j]); getchar();
//             printf("y%d)pase-1 vect[i].val_neto[j]=%12.2f ", j, vect[i].val_neto[j]); getchar();
//             printf("z%d)pase-1 vect[i].val_netoa[j]=%12.2f, vect[i].val_neto[j]=%12.2f ",j, vect[i].val_netoa[j], vect[i].val_neto[j]); getchar();
               sprintf (cadena,"%6.2f",100.00);
//               printf("j <%d>, m <%d>",j,m); getchar();
//             printf("pase-1.1.x %s ", cadena); getchar();
           }
     }
//   printf("pase-1.1.1 %s ", cadena); getchar();
     fprintf(fp,"%14s",fmtnum("z,zzz,zz9.99",cadena,r_t));
 }
 for (j=1;j<m;j++) {
     sprintf (cadena,"%6.2f",0.0);
     if (vect[i].val_netoa[j] > 0) {
//        printf("2) vect[%d].val_netoa[%d] <%6.2f> - vect[i].val_neto[j] <6.2f>",i,j,vect[i].val_netoa[j],vect[i].val_neto[j]); getchar();
        sprintf (cadena,"%6.2f",(vect[i].val_netoa[j]-vect[i].val_neto[j])/vect[i].val_neto[j]*100);
     }
     else {
           if (vect[i].val_neto[j] == 0 && vect[i].val_netoa[j] > 0 ) {
//               printf("pase-2 vect[i].val_netoa[j]=%12.2f vect[i].val_neto[j]=%12.2f ", vect[i].val_netoa[j], vect[i].val_neto[j]); getchar();
               sprintf (cadena,"%6.2f",100.00);
//             printf("pase-2.1.x %s ", cadena); getchar();
           }
     }
     fprintf(fp,"%14s",fmtnum("z,zzz,zz9.99",cadena,r_t));
 }

 if (vect[i].val_total > 0) {
    sprintf (cadena,"%6.2f",(vect[i].val_totala-vect[i].val_total)/vect[i].val_total*100);
 }
 else {
       sprintf (cadena,"%6.2f",0.0);
       if (vect[i].val_total == 0 && vect[i].val_totala > 0)
           sprintf (cadena,"%6.2f",100.00);
 }
 fprintf(fp,"%16s\n",fmtnum("z,zzz,zz9.99",cadena,r_t));

 con_lin+=1;
 borro_totales(i);
 borro_totalesa(i);
 tit_ciu=0;
}

void porcentualiza_pagos(i)
int i;
{
 int k;
 staora = 0;
 valor_total=0;
 for (k=0;k<=12;++k) {
      valor_neto[k]=0;
 }
 k=0;
 /* EXEC SQL OPEN C10A; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) \"\
01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) \"02\" \
,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"03\" ,sum(\
decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" ,sum(decod\
e(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(decode(to_\
char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decode(to_char(\
i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_char(i.fec\
ha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(i.fecha,'m\
m'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fecha,'mm'),'\
10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'mm'),'11',n\
vl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'12',nvl(va\
lor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingresos_c i wher\
e ((((((((to_number(to_char(i.fecha,'yyyymmdd'))>=to_number(:b0) and to_numb\
er(to_char(i.fecha,'yyyymmdd'))<=to_number(:b1)) and nvl(valor_c");
 sqlstm.stmt = sq0013;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1622;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[0] = (unsigned int  )92;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&p_lista;
 sqlstm.sqhstl[2] = (unsigned int  )6;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&p_lista;
 sqlstm.sqhstl[3] = (unsigned int  )6;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[4] = (unsigned int  )12;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C10A INTO :valor_neto[1],
                                :valor_neto[2],
                                :valor_neto[3],
                                :valor_neto[4],
                                :valor_neto[5],
                                :valor_neto[6],
                                :valor_neto[7],
                                :valor_neto[8],
                                :valor_neto[9],
                                :valor_neto[10],
                                :valor_neto[11],
                                :valor_neto[12],
                                :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 14;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )1657;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[0] = (unsigned int  )8;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[1] = (unsigned int  )8;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[2] = (unsigned int  )8;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[3] = (unsigned int  )8;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_total;
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
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



       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C10A (%d)\n", staora);
       for (k=0;k<=1;++k)
            acumulo_totales(k);
 }

 sprintf(mensajes,"TOTAL RECAUDOS %d",anod+1);

 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (j=1;j<m;j++) {
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",vect[i].val_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;

 borro_totales(i);

 staora = 0;
 valor_total=0;
 for (k=0;k<=12;++k) {
      valor_neto[k]=0;
 }
 /* EXEC SQL OPEN C10C; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) \"\
01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) \"02\" \
,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"03\" ,sum(\
decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" ,sum(decod\
e(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(decode(to_\
char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decode(to_char(\
i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_char(i.fec\
ha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(i.fecha,'m\
m'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fecha,'mm'),'\
10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'mm'),'11',n\
vl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'12',nvl(va\
lor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingresos_c i wher\
e ((((((((to_number(to_char(i.fecha,'yyyymmdd'))>=to_number(:b0) and to_numb\
er(to_char(i.fecha,'yyyymmdd'))<=to_number(:b1)) and nvl(valor_c");
 sqlstm.stmt = sq0015;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1724;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_aini;
 sqlstm.sqhstl[0] = (unsigned int  )92;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_afin;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[2] = (unsigned int  )12;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&p_lista;
 sqlstm.sqhstl[3] = (unsigned int  )6;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&p_lista;
 sqlstm.sqhstl[4] = (unsigned int  )6;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C10C INTO :valor_neto[1],
                                :valor_neto[2],
                                :valor_neto[3],
                                :valor_neto[4],
                                :valor_neto[5],
                                :valor_neto[6],
                                :valor_neto[7],
                                :valor_neto[8],
                                :valor_neto[9],
                                :valor_neto[10],
                                :valor_neto[11],
                                :valor_neto[12],
                                :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 14;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )1759;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[0] = (unsigned int  )8;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[1] = (unsigned int  )8;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[2] = (unsigned int  )8;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[3] = (unsigned int  )8;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_total;
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
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



       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C10C (%d)\n", staora);
       for (k=0;k<=1;++k)
            acumulo_totales(k);
 }
 sprintf(mensajes,"TOTAL RECAUDOS %d",anod);

 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
//     printf("1) vect[%4d].val_neto[%4d] = <%15.0f>",i,j,vect[i].val_neto[j]); getchar();
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (j=1;j<m;j++) {
//     printf("2) vect[%4d].val_neto[%4d] = ",i,j,vect[i].val_neto[j]); getchar();
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",vect[i].val_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;

 sprintf(mensajes,"PORCENTAJE COMPARATIVO");
 if (con_lin > 62)
    titulos();
 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
     sprintf (cadena,"%6.2f",0.0);
     if (vect[i].val_neto[j] > 0) {
        sprintf (cadena,"%6.2f",(vect[i].val_netoa[j]-vect[i].val_neto[j])/vect[i].val_neto[j]*100);
     }
     else {
           if (vect[i].val_neto[j] == 0 && vect[i].val_netoa[j] > 0 ) {
               sprintf (cadena,"%6.2f",100.00);
           }
     }
     fprintf(fp,"%14s",fmtnum("z,zzz,zz9.99",cadena,r_t));
 }
 for (j=1;j<m;j++) {
     sprintf (cadena,"%6.2f",0.0);
     if (vect[i].val_netoa[j] > 0) {
        sprintf (cadena,"%6.2f",(vect[i].val_netoa[j]-vect[i].val_neto[j])/vect[i].val_neto[j]*100);
     }
     else {
           if (vect[i].val_neto[j] == 0 && vect[i].val_netoa[j] > 0 ) {
               sprintf (cadena,"%6.2f",100.00);
           }
     }
     fprintf(fp,"%14s",fmtnum("z,zzz,zz9.99",cadena,r_t));
 }

 if (vect[i].val_total > 0) {
    sprintf (cadena,"%6.2f",(vect[i].val_totala-vect[i].val_total)/vect[i].val_total*100);
 }
 else {
      sprintf (cadena,"%6.2f",0.0);
      if (vect[i].val_total == 0 && vect[i].val_totala > 0 ) 
         sprintf (cadena,"%6.2f",100.00);
 }
 fprintf(fp,"%16s\n",fmtnum("z,zzz,zz9.99",cadena,r_t));

 con_lin+=2;
 borro_totales(i);
 borro_totalesa(i);
 tit_ciu=0;
}

void porcentualiza_pagosg(i)
int i;
{
 int k;
 staora = 0;
 valor_total=0;
 for (k=0;k<=12;++k) {
      valor_neto[k]=0;
 }
 k=0;
 /* EXEC SQL OPEN C10D; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) \"\
01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) \"02\" \
,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"03\" ,sum(\
decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" ,sum(decod\
e(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(decode(to_\
char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decode(to_char(\
i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_char(i.fec\
ha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(i.fecha,'m\
m'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fecha,'mm'),'\
10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'mm'),'11',n\
vl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'12',nvl(va\
lor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingresos_c i wher\
e ((((((((to_number(to_char(i.fecha,'yyyymmdd'))>=to_number(:b0) and to_numb\
er(to_char(i.fecha,'yyyymmdd'))<=to_number(:b1)) and nvl(valor_c");
 sqlstm.stmt = sq0016;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1826;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[0] = (unsigned int  )92;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[2] = (unsigned int  )12;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&p_lista;
 sqlstm.sqhstl[3] = (unsigned int  )6;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&p_lista;
 sqlstm.sqhstl[4] = (unsigned int  )6;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C10D INTO :valor_neto[1],
                                :valor_neto[2],
                                :valor_neto[3],
                                :valor_neto[4],
                                :valor_neto[5],
                                :valor_neto[6],
                                :valor_neto[7],
                                :valor_neto[8],
                                :valor_neto[9],
                                :valor_neto[10],
                                :valor_neto[11],
                                :valor_neto[12],
                                :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 14;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )1861;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[0] = (unsigned int  )8;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[1] = (unsigned int  )8;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[2] = (unsigned int  )8;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[3] = (unsigned int  )8;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_total;
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
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



       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C10D (%d)\n", staora);
       for (k=0;k<=1;++k)
            acumulo_totales(k);
 }

 sprintf(mensajes,"TOTAL RECAUDOS %d",anod+1);

 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (j=1;j<m;j++) {
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",vect[i].val_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;

 borro_totales(i);

 /* EXEC SQL CLOSE C10D; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1928;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 staora = 0;
 valor_total=0;
 for (k=0;k<=12;++k) {
      valor_neto[k]=0;
 }
 /* EXEC SQL OPEN C10E; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) \"\
01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) \"02\" \
,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"03\" ,sum(\
decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" ,sum(decod\
e(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(decode(to_\
char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decode(to_char(\
i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_char(i.fec\
ha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(i.fecha,'m\
m'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fecha,'mm'),'\
10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'mm'),'11',n\
vl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'12',nvl(va\
lor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingresos_c i wher\
e ((((((((to_number(to_char(i.fecha,'yyyymmdd'))>=to_number(:b0) and to_numb\
er(to_char(i.fecha,'yyyymmdd'))<=to_number(:b1)) and nvl(valor_c");
 sqlstm.stmt = sq0017;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1943;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_aini;
 sqlstm.sqhstl[0] = (unsigned int  )92;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_afin;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[2] = (unsigned int  )12;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&p_lista;
 sqlstm.sqhstl[3] = (unsigned int  )6;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&p_lista;
 sqlstm.sqhstl[4] = (unsigned int  )6;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C10E INTO :valor_neto[1],
                                :valor_neto[2],
                                :valor_neto[3],
                                :valor_neto[4],
                                :valor_neto[5],
                                :valor_neto[6],
                                :valor_neto[7],
                                :valor_neto[8],
                                :valor_neto[9],
                                :valor_neto[10],
                                :valor_neto[11],
                                :valor_neto[12],
                                :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 14;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )1978;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[0] = (unsigned int  )8;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[1] = (unsigned int  )8;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[2] = (unsigned int  )8;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[3] = (unsigned int  )8;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_total;
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
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



       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C10E (%d)\n", staora);
       for (k=0;k<=1;++k)
            acumulo_totales(k);
 }
 sprintf(mensajes,"TOTAL RECAUDOS %d",anod);
 /* EXEC SQL CLOSE C10E; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2045;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
//     printf("1) vect[%4d].val_neto[%4d] = <%15.0f>",i,j,vect[i].val_neto[j]); getchar();
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (j=1;j<m;j++) {
//     printf("2) vect[%4d].val_neto[%4d] = ",i,j,vect[i].val_neto[j]); getchar();
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",vect[i].val_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;

 sprintf(mensajes,"PORCENTAJE COMPARATIVO");
 if (con_lin > 62)
    titulos();
 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
     sprintf (cadena,"%6.2f",0.0);
//     printf("1) %s %10.2f %14s",mensajes,vect[i].val_neto[j],cadena); getchar();
     if (vect[i].val_neto[j] > 0) {
        sprintf (cadena,"%6.2f",(vect[i].val_netoa[j]-vect[i].val_neto[j])/vect[i].val_neto[j]*100);
     }
     else {
           if (vect[i].val_neto[j] == 0 && vect[i].val_netoa[j] > 0 ) {
               sprintf (cadena,"%6.2f",100.00);
           }
     }
//     printf("1.1) %s %10.2f %14s",mensajes,vect[i].val_neto[j],cadena); getchar();
     fprintf(fp,"%14s",fmtnum("z,zzz,zz9.99",cadena,r_t));
 }
 for (j=1;j<m;j++) {
     sprintf (cadena,"%6.2f",0.0);
     if (vect[i].val_neto[j] > 0) {
        sprintf (cadena,"%6.2f",(vect[i].val_netoa[j]-vect[i].val_neto[j])/vect[i].val_neto[j]*100);
     }
     else {
           if (vect[i].val_neto[j] == 0 && vect[i].val_netoa[j] > 0 ) {
               sprintf (cadena,"%6.2f",100.00);
           }
     }
//     printf("2) %s %10.2f",mensajes,vect[i].val_neto[j]); getchar();
     fprintf(fp,"%14s",fmtnum("z,zzz,zz9.99",cadena,r_t));
 }

 if (vect[i].val_total > 0) {
     sprintf (cadena,"%6.2f",(vect[i].val_totala-vect[i].val_total)/vect[i].val_total*100);
 }
 else {
        sprintf (cadena,"%6.2f",0.0);
        if (vect[i].val_total == 0 && vect[i].val_totala > 0 ) {
           sprintf (cadena,"%6.2f",100.00);
        }
 }
 fprintf(fp,"%16s\n",fmtnum("z,zzz,zz9.99",cadena,r_t));

 con_lin+=2;
 borro_totales(i);
 borro_totalesa(i);
 tit_ciu=0;
}

void porcentualiza_pagost(i)
int i;
{
 int k;
 staora = 0;
 valor_total=0;
 for (k=0;k<=12;++k) {
      valor_neto[k]=0;
 }
 k=0;
 /* EXEC SQL OPEN C10G; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) \"\
01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) \"02\" \
,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"03\" ,sum(\
decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" ,sum(decod\
e(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(decode(to_\
char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decode(to_char(\
i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_char(i.fec\
ha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(i.fecha,'m\
m'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fecha,'mm'),'\
10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'mm'),'11',n\
vl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'12',nvl(va\
lor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingresos_c i wher\
e (((((((to_number(to_char(i.fecha,'yyyymmdd'))>=to_number(:b0) and to_numbe\
r(to_char(i.fecha,'yyyymmdd'))<=to_number(:b1)) and nvl(valor_ca");
 sqlstm.stmt = sq0019;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2060;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[0] = (unsigned int  )92;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&p_lista;
 sqlstm.sqhstl[2] = (unsigned int  )6;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&p_lista;
 sqlstm.sqhstl[3] = (unsigned int  )6;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[4] = (unsigned int  )12;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C10G INTO :valor_neto[1],
                                :valor_neto[2],
                                :valor_neto[3],
                                :valor_neto[4],
                                :valor_neto[5],
                                :valor_neto[6],
                                :valor_neto[7],
                                :valor_neto[8],
                                :valor_neto[9],
                                :valor_neto[10],
                                :valor_neto[11],
                                :valor_neto[12],
                                :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 14;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )2095;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[0] = (unsigned int  )8;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[1] = (unsigned int  )8;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[2] = (unsigned int  )8;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[3] = (unsigned int  )8;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_total;
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
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



       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C10G (%d)\n", staora);
       for (k=0;k<=1;++k)
            acumulo_totales(k);
 }

 sprintf(mensajes,"TOTAL RECAUDOS %d",anod+1);

 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (j=1;j<m;j++) {
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",vect[i].val_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;

 borro_totales(i);

 staora = 0;
 valor_total=0;
 for (k=0;k<=12;++k) {
      valor_neto[k]=0;
 }
 /* EXEC SQL OPEN C10F; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) \"\
01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) \"02\" \
,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"03\" ,sum(\
decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" ,sum(decod\
e(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(decode(to_\
char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decode(to_char(\
i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_char(i.fec\
ha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(i.fecha,'m\
m'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fecha,'mm'),'\
10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'mm'),'11',n\
vl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'12',nvl(va\
lor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingresos_c i wher\
e (((((((to_number(to_char(i.fecha,'yyyymmdd'))>=to_number(:b0) and to_numbe\
r(to_char(i.fecha,'yyyymmdd'))<=to_number(:b1)) and nvl(valor_ca");
 sqlstm.stmt = sq0018;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2162;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_aini;
 sqlstm.sqhstl[0] = (unsigned int  )92;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_afin;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&p_lista;
 sqlstm.sqhstl[2] = (unsigned int  )6;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&p_lista;
 sqlstm.sqhstl[3] = (unsigned int  )6;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[4] = (unsigned int  )12;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C10F INTO :valor_neto[1],
                                :valor_neto[2],
                                :valor_neto[3],
                                :valor_neto[4],
                                :valor_neto[5],
                                :valor_neto[6],
                                :valor_neto[7],
                                :valor_neto[8],
                                :valor_neto[9],
                                :valor_neto[10],
                                :valor_neto[11],
                                :valor_neto[12],
                                :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 14;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )2197;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[0] = (unsigned int  )8;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[1] = (unsigned int  )8;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[2] = (unsigned int  )8;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[3] = (unsigned int  )8;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_total;
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
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



       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C10F (%d)\n", staora);
       for (k=0;k<=1;++k)
            acumulo_totales(k);
 }
 sprintf(mensajes,"TOTAL RECAUDOS %d",anod);

 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
//     printf("1) vect[%4d].val_neto[%4d] = <%15.0f>",i,j,vect[i].val_neto[j]); getchar();
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (j=1;j<m;j++) {
//     printf("2) vect[%4d].val_neto[%4d] = ",i,j,vect[i].val_neto[j]); getchar();
     sprintf (cadena,"%6.2f",vect[i].val_neto[j]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",vect[i].val_total);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=2;

 sprintf(mensajes,"PORCENTAJE COMPARATIVO");
 if (con_lin > 62)
    titulos();
 fprintf(fp,"\n%-4s"," ");
 fprintf(fp,"%s%s%-21s%s%s",enfatizado_on,ancho_on,mensajes,enfatizado_off,ancho_off);

 for (j=m;j<=12;j++) {
     sprintf (cadena,"%6.2f",0.0);
     if (vect[i].val_neto[j] > 0) {
        sprintf (cadena,"%6.2f",(vect[i].val_netoa[j]-vect[i].val_neto[j])/vect[i].val_neto[j]*100);
     }
     else {
           if (vect[i].val_neto[j] == 0 && vect[i].val_netoa[j] > 0 ) {
               sprintf (cadena,"%6.2f",100.00);
           }
     }
     fprintf(fp,"%14s",fmtnum("z,zzz,zz9.99",cadena,r_t));
 }
 for (j=1;j<m;j++) {
     sprintf (cadena,"%6.2f",0.0);
     if (vect[i].val_netoa[j] > 0) {
        sprintf (cadena,"%6.2f",(vect[i].val_netoa[j]-vect[i].val_neto[j])/vect[i].val_neto[j]*100);
     }
     else {
           if (vect[i].val_neto[j] == 0 && vect[i].val_netoa[j] > 0 ) {
               sprintf (cadena,"%6.2f",100.00);
           }
     }
     fprintf(fp,"%14s",fmtnum("z,zzz,zz9.99",cadena,r_t));
 }

 if (vect[i].val_netoa[j] > 0) {
    sprintf (cadena,"%6.2f",(vect[i].val_totala-vect[i].val_total)/vect[i].val_total*100);
 }
 else {
      sprintf (cadena,"%6.2f",0.0);
      if (vect[i].val_total == 0 && vect[i].val_totala > 0 ) 
          sprintf (cadena,"%6.2f",100.00);
 }
 fprintf(fp,"%16s\n",fmtnum("z,zzz,zz9.99",cadena,r_t));
 con_lin+=2;

 /* EXEC SQL OPEN C10F; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) \"\
01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) \"02\" \
,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"03\" ,sum(\
decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" ,sum(decod\
e(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(decode(to_\
char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decode(to_char(\
i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_char(i.fec\
ha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(i.fecha,'m\
m'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fecha,'mm'),'\
10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'mm'),'11',n\
vl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'12',nvl(va\
lor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingresos_c i wher\
e (((((((to_number(to_char(i.fecha,'yyyymmdd'))>=to_number(:b0) and to_numbe\
r(to_char(i.fecha,'yyyymmdd'))<=to_number(:b1)) and nvl(valor_ca");
 sqlstm.stmt = sq0018;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2264;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_aini;
 sqlstm.sqhstl[0] = (unsigned int  )92;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_afin;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&p_lista;
 sqlstm.sqhstl[2] = (unsigned int  )6;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&p_lista;
 sqlstm.sqhstl[3] = (unsigned int  )6;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[4] = (unsigned int  )12;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
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


 /* EXEC SQL OPEN C10G; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select sum(decode(to_char(i.fecha,'mm'),'01',nvl(valor_cartera,0),0)) \"\
01\" ,sum(decode(to_char(i.fecha,'mm'),'02',nvl(valor_cartera,0),0)) \"02\" \
,sum(decode(to_char(i.fecha,'mm'),'03',nvl(valor_cartera,0),0)) \"03\" ,sum(\
decode(to_char(i.fecha,'mm'),'04',nvl(valor_cartera,0),0)) \"04\" ,sum(decod\
e(to_char(i.fecha,'mm'),'05',nvl(valor_cartera,0),0)) \"05\" ,sum(decode(to_\
char(i.fecha,'mm'),'06',nvl(valor_cartera,0),0)) \"06\" ,sum(decode(to_char(\
i.fecha,'mm'),'07',nvl(valor_cartera,0),0)) \"07\" ,sum(decode(to_char(i.fec\
ha,'mm'),'08',nvl(valor_cartera,0),0)) \"08\" ,sum(decode(to_char(i.fecha,'m\
m'),'09',nvl(valor_cartera,0),0)) \"09\" ,sum(decode(to_char(i.fecha,'mm'),'\
10',nvl(valor_cartera,0),0)) \"10\" ,sum(decode(to_char(i.fecha,'mm'),'11',n\
vl(valor_cartera,0),0)) \"11\" ,sum(decode(to_char(i.fecha,'mm'),'12',nvl(va\
lor_cartera,0),0)) \"12\" ,sum(nvl(valor_cartera,0))  from ingresos_c i wher\
e (((((((to_number(to_char(i.fecha,'yyyymmdd'))>=to_number(:b0) and to_numbe\
r(to_char(i.fecha,'yyyymmdd'))<=to_number(:b1)) and nvl(valor_ca");
 sqlstm.stmt = sq0019;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2299;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[0] = (unsigned int  )92;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&p_lista;
 sqlstm.sqhstl[2] = (unsigned int  )6;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&p_lista;
 sqlstm.sqhstl[3] = (unsigned int  )6;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[4] = (unsigned int  )12;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
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


 con_lin+=2;
 borro_totales(i);
 borro_totalesa(i);
 tit_ciu=0;
}

void titulo_ciudad()
{
 wciu.len  =  strlen(wciu.arr);
 /* EXEC SQL select nombre
          into  :nomb_ciudad
          from   ciudades
          where  codigo = :wciu; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select nombre into :b0  from ciudades where codigo=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2334;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nomb_ciudad;
 sqlstm.sqhstl[0] = (unsigned int  )102;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&wciu;
 sqlstm.sqhstl[1] = (unsigned int  )102;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
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



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Ciudades(C3) (%d)\n", sqlca.sqlcode);

 nomb_ciudad.arr   [nomb_ciudad.len] = '\0';
 if (con_lin > 58)
    titulos();
 if (tit_ciu==0) {
     fprintf(fp,"\n%s%16s%s%s%s%s\n\n",enfatizado_on,ancho_on,"CIUDAD ",nomb_ciudad.arr,ancho_off,enfatizado_off);
     con_lin+=3;
 }
}

void titulo_zona()
{
 int i;

 if (con_lin > 58)
    titulos_og();
 if (tit_zon==1) {
     fprintf(fp,"\n\n%s%16s%s%s%s%s\n\n",enfatizado_on,ancho_on,"       "," ",ancho_off,enfatizado_off);
     con_lin+=4;
     fprintf(fp,"%194s\n",         "ASESOR         DEPARTAMENTO   CIUDAD             FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION     FACTURACION");
     fprintf(fp,"%s%47s",enfatizado_on," ");

     for (i=m;i<=12;i++) {
          strcpy(cadena,mes[i-1]);
          strupp(cadena);
          fprintf(fp,"%14s",cadena);
     }
     for (i=1;i<m;i++) {
          strcpy(cadena,mes[i-1]);
          strupp(cadena);
          fprintf(fp,"%14s",cadena);
     }
     fprintf(fp,"%15s\n","TOTAL");

     fprintf(fp,"%s%50s",enfatizado_on," ");

     for (i=m;i<=12;i++) {
         sprintf (cadena,"%4d",a);
         fprintf(fp,"%5s%-9s"," ",fmtnum("z,zz9",cadena,r_t));
     }

     for (i=1;i<m;i++) {
         sprintf (cadena,"%4d",a+1);
         fprintf(fp,"%5s%-9s"," ",fmtnum("z,zz9",cadena,r_t));
     }

     fprintf(fp,"%s%5s\n\n",enfatizado_off," ");

     con_lin += 8;
 }
}

void lista_zonas(e)
int e;
{
 int i;
// int j;
 sprintf(codigo_emp.arr,"%d",e);
 empresa();
 strcpy(fecha,fecha_ini.arr);
 fecha_oracle3(fecha);
 strcpy(cadena,fecha);
 strcat(cadena," hasta ");
 strcpy(fecha,fecha_fin.arr);
 fecha_oracle3(fecha);
 strcat(cadena,fecha);
 strcpy(fechas,cadena);
 inicio  = 0;
 staora  = 0;
 tit_ciu = 1;
 tit_zon = 1;
 if (con_lin > 56)
    titulos_og();
// titulo_zona();
/*
 for (i=1;i<=3;i++) {
    for (j=1;j<=12;j++) {
        vect[i].val_neto[j] =0;
        vect[i].val_netoa[j] =0;
//        printf("lista zonas: <%d,%d> <%15.0f> <%15.0f>",i,j,vect[i].val_neto[j],vect[i].val_netoa[j]); getchar();
    }
    vect[i].val_total =0;
    vect[i].val_totala =0;
//    printf("lista zonas: <%d> <%15.0f> <%15.0f>",i,vect[i].val_total,vect[i].val_totala); getchar();
 }
*/
 valor_total_z=0;
 for (i=0;i<=12;++i) {
      valor_neto_z[i]=0;
 }
 /* EXEC SQL OPEN C7; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select v.codigo ,v.codigo_nom ,v.nombre ,z.nombre ,c.nombre ,sum(decode(\
to_char(fecha_documento,'mm'),'01',valor_neto,0)) \"01\" ,sum(decode(to_char\
(fecha_documento,'mm'),'02',valor_neto,0)) \"02\" ,sum(decode(to_char(fecha_\
documento,'mm'),'03',valor_neto,0)) \"03\" ,sum(decode(to_char(fecha_documen\
to,'mm'),'04',valor_neto,0)) \"04\" ,sum(decode(to_char(fecha_documento,'mm'\
),'05',valor_neto,0)) \"05\" ,sum(decode(to_char(fecha_documento,'mm'),'06',\
valor_neto,0)) \"06\" ,sum(decode(to_char(fecha_documento,'mm'),'07',valor_n\
eto,0)) \"07\" ,sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0))\
 \"08\" ,sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) \"09\"\
 ,sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) \"10\" ,sum(d\
ecode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) \"11\" ,sum(decode(t\
o_char(fecha_documento,'mm'),'12',valor_neto,0)) \"12\" ,sum(valor_neto)  fr\
om facturas f ,vendedores v ,zonas z ,departamentos d ,ciudades c where ((((\
(((((((((to_number(:b0)=tipo_factura and (tipo_documento='F' or ");
 sqlstm.stmt = sq0008;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2357;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned int  )12;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[2] = (unsigned int  )92;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&clientei;
 sqlstm.sqhstl[3] = (unsigned int  )92;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&clientef;
 sqlstm.sqhstl[4] = (unsigned int  )92;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&librob;
 sqlstm.sqhstl[5] = (unsigned int  )4;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&p_lista;
 sqlstm.sqhstl[6] = (unsigned int  )6;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&p_lista;
 sqlstm.sqhstl[7] = (unsigned int  )6;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
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


 /* EXEC SQL FETCH C7 INTO :codigo_ven,
                        :codigo_nom,
                        :nomb_clie,
                        :nombre_zona,
                        :nomb_ciudad,
                        :valor_neto_z[1],
                        :valor_neto_z[2],
                        :valor_neto_z[3],
                        :valor_neto_z[4],
                        :valor_neto_z[5],
                        :valor_neto_z[6],
                        :valor_neto_z[7],
                        :valor_neto_z[8],
                        :valor_neto_z[9],
                        :valor_neto_z[10],
                        :valor_neto_z[11],
                        :valor_neto_z[12],
                        :valor_total_z; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2404;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo_ven;
 sqlstm.sqhstl[0] = (unsigned int  )42;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&codigo_nom;
 sqlstm.sqhstl[1] = (unsigned int  )42;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&nomb_clie;
 sqlstm.sqhstl[2] = (unsigned int  )102;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&nombre_zona;
 sqlstm.sqhstl[3] = (unsigned int  )102;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&nomb_ciudad;
 sqlstm.sqhstl[4] = (unsigned int  )102;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&valor_neto_z[1];
 sqlstm.sqhstl[5] = (unsigned int  )8;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&valor_neto_z[2];
 sqlstm.sqhstl[6] = (unsigned int  )8;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&valor_neto_z[3];
 sqlstm.sqhstl[7] = (unsigned int  )8;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&valor_neto_z[4];
 sqlstm.sqhstl[8] = (unsigned int  )8;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&valor_neto_z[5];
 sqlstm.sqhstl[9] = (unsigned int  )8;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&valor_neto_z[6];
 sqlstm.sqhstl[10] = (unsigned int  )8;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)0;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&valor_neto_z[7];
 sqlstm.sqhstl[11] = (unsigned int  )8;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&valor_neto_z[8];
 sqlstm.sqhstl[12] = (unsigned int  )8;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&valor_neto_z[9];
 sqlstm.sqhstl[13] = (unsigned int  )8;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&valor_neto_z[10];
 sqlstm.sqhstl[14] = (unsigned int  )8;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)0;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)&valor_neto_z[11];
 sqlstm.sqhstl[15] = (unsigned int  )8;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)0;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)&valor_neto_z[12];
 sqlstm.sqhstl[16] = (unsigned int  )8;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)0;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)&valor_total_z;
 sqlstm.sqhstl[17] = (unsigned int  )8;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)0;
 sqlstm.sqinds[17] = (         int  )0;
 sqlstm.sqharm[17] = (unsigned int  )0;
 sqlstm.sqadto[17] = (unsigned short )0;
 sqlstm.sqtdso[17] = (unsigned short )0;
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



 staora  = sqlca.sqlcode;
 if (staora == -1405)
     staora  = 0;
 else if (staora)
          fprintf (stderr, "Error leyendo C7.1 (%d)\n", staora);

 strorg(nomb_clie.arr,1,14);
 nomb_clie.arr [nomb_clie.len] = '\0';
 nombre_zona.arr [nombre_zona.len] = '\0';
 nomb_ciudad.arr [nomb_ciudad.len] = '\0';
 codigo_ven.arr  [codigo_ven.len]  = '\0';
 codigo_nom.arr  [codigo_nom.len]  = '\0';
 strcpy(cvendedor.arr,codigo_ven.arr );
 cvendedor.len = strlen(cvendedor.arr);

 strcpy(wnomb_clie,nomb_clie.arr);
// printf("1) codigo_emp <%s>, fecha_ini <%s> fecha_fin <%s>, cvendedor<%s>, codigo_nom<%s>, wnomb_clie<%s> ",codigo_emp.arr,fecha_ini.arr, fecha_fin.arr, cvendedor.arr, codigo_nom.arr, wnomb_clie); getchar();

 while (staora == 0) {
       imprime_zonas();
       /* EXEC SQL FETCH C7 INTO :codigo_ven,
                              :codigo_nom,
                              :nomb_clie,
                              :nombre_zona,
                              :nomb_ciudad,
                              :valor_neto_z[1],
                              :valor_neto_z[2],
                              :valor_neto_z[3],
                              :valor_neto_z[4],
                              :valor_neto_z[5],
                              :valor_neto_z[6],
                              :valor_neto_z[7],
                              :valor_neto_z[8],
                              :valor_neto_z[9],
                              :valor_neto_z[10],
                              :valor_neto_z[11],
                              :valor_neto_z[12],
                              :valor_total_z; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 18;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )2491;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&codigo_ven;
       sqlstm.sqhstl[0] = (unsigned int  )42;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&codigo_nom;
       sqlstm.sqhstl[1] = (unsigned int  )42;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&nomb_clie;
       sqlstm.sqhstl[2] = (unsigned int  )102;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&nombre_zona;
       sqlstm.sqhstl[3] = (unsigned int  )102;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&nomb_ciudad;
       sqlstm.sqhstl[4] = (unsigned int  )102;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto_z[1];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto_z[2];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto_z[3];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto_z[4];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto_z[5];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto_z[6];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto_z[7];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_neto_z[8];
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
       sqlstm.sqhstv[13] = (         void  *)&valor_neto_z[9];
       sqlstm.sqhstl[13] = (unsigned int  )8;
       sqlstm.sqhsts[13] = (         int  )0;
       sqlstm.sqindv[13] = (         void  *)0;
       sqlstm.sqinds[13] = (         int  )0;
       sqlstm.sqharm[13] = (unsigned int  )0;
       sqlstm.sqadto[13] = (unsigned short )0;
       sqlstm.sqtdso[13] = (unsigned short )0;
       sqlstm.sqhstv[14] = (         void  *)&valor_neto_z[10];
       sqlstm.sqhstl[14] = (unsigned int  )8;
       sqlstm.sqhsts[14] = (         int  )0;
       sqlstm.sqindv[14] = (         void  *)0;
       sqlstm.sqinds[14] = (         int  )0;
       sqlstm.sqharm[14] = (unsigned int  )0;
       sqlstm.sqadto[14] = (unsigned short )0;
       sqlstm.sqtdso[14] = (unsigned short )0;
       sqlstm.sqhstv[15] = (         void  *)&valor_neto_z[11];
       sqlstm.sqhstl[15] = (unsigned int  )8;
       sqlstm.sqhsts[15] = (         int  )0;
       sqlstm.sqindv[15] = (         void  *)0;
       sqlstm.sqinds[15] = (         int  )0;
       sqlstm.sqharm[15] = (unsigned int  )0;
       sqlstm.sqadto[15] = (unsigned short )0;
       sqlstm.sqtdso[15] = (unsigned short )0;
       sqlstm.sqhstv[16] = (         void  *)&valor_neto_z[12];
       sqlstm.sqhstl[16] = (unsigned int  )8;
       sqlstm.sqhsts[16] = (         int  )0;
       sqlstm.sqindv[16] = (         void  *)0;
       sqlstm.sqinds[16] = (         int  )0;
       sqlstm.sqharm[16] = (unsigned int  )0;
       sqlstm.sqadto[16] = (unsigned short )0;
       sqlstm.sqtdso[16] = (unsigned short )0;
       sqlstm.sqhstv[17] = (         void  *)&valor_total_z;
       sqlstm.sqhstl[17] = (unsigned int  )8;
       sqlstm.sqhsts[17] = (         int  )0;
       sqlstm.sqindv[17] = (         void  *)0;
       sqlstm.sqinds[17] = (         int  )0;
       sqlstm.sqharm[17] = (unsigned int  )0;
       sqlstm.sqadto[17] = (unsigned short )0;
       sqlstm.sqtdso[17] = (unsigned short )0;
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



       strorg(nomb_clie.arr,1,14);
       nomb_clie.arr [nomb_clie.len]     = '\0';
       strorg(nombre_zona.arr,1,14);
       nombre_zona.arr [nombre_zona.len] = '\0';
       strorg(nomb_ciudad.arr,1,14);
       nomb_ciudad.arr [nomb_ciudad.len] = '\0';
       codigo_ven.arr [codigo_ven.len]   = '\0';
       codigo_nom.arr [codigo_nom.len]   = '\0';

       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C7.2 (%d)\n", staora);

       if (strcmp(nomb_clie.arr,wnomb_clie)) {
           sprintf(mensajes,"SUB-TOTAL ZONA %d",anod+1);
           tit_ciu = 1;
           tit_zon = 1;
           totaliza(0);
//           printf("pase-1"); getchar();
           tit_ciu = 1;
           tit_zon = 1;
           ventas_zona();
           inicio=0;
           strcpy(wnomb_clie,nomb_clie.arr);
           tit_ciu = 1;
           tit_zon = 1;
           imprime_recaudos();
           fprintf(fp,"\n");
           con_lin++;
           strcpy(cvendedor.arr,codigo_ven.arr );
           cvendedor.len = strlen(cvendedor.arr);
//           printf("2) codigo_emp <%s>, fecha_ini <%s> fecha_fin <%s>, cvendedor<%s>, codigo_nom<%s>, wnomb_clie<%s> ",codigo_emp.arr,fecha_ini.arr, fecha_fin.arr, cvendedor.arr, codigo_nom.arr, wnomb_clie); getchar();
           staora  = 0;
       }
 }
 sprintf(mensajes,"SUB-TOTAL ZONA %d",anod+1);
 tit_ciu = 1;
 tit_zon = 1;
 totaliza(0);
// printf("pase-2"); getchar();
 tit_ciu = 1;
 tit_zon = 1;
 ventas_zona();
 tit_ciu = 1;
 tit_zon = 1;
 imprime_recaudos();
 sprintf(mensajes,"TOTAL ZONAS %d",anod+1);
 tit_ciu = 1;
 tit_zon = 1;
 totaliza(1);

 tit_ciu = 1;
 tit_zon = 1;
 if (con_lin > 56)
    titulos_og();
// titulo_zona();

 staora = 0;
 valor_total=0;
 for (i=0;i<=12;++i) {
      valor_neto[i]=0;
 }
 /* EXEC SQL OPEN C11C; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) \"01\
\" ,sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) \"02\" ,sum\
(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) \"03\" ,sum(decode\
(to_char(fecha_documento,'mm'),'04',valor_neto,0)) \"04\" ,sum(decode(to_cha\
r(fecha_documento,'mm'),'05',valor_neto,0)) \"05\" ,sum(decode(to_char(fecha\
_documento,'mm'),'06',valor_neto,0)) \"06\" ,sum(decode(to_char(fecha_docume\
nto,'mm'),'07',valor_neto,0)) \"07\" ,sum(decode(to_char(fecha_documento,'mm\
'),'08',valor_neto,0)) \"08\" ,sum(decode(to_char(fecha_documento,'mm'),'09'\
,valor_neto,0)) \"09\" ,sum(decode(to_char(fecha_documento,'mm'),'10',valor_\
neto,0)) \"10\" ,sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)\
) \"11\" ,sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) \"12\"\
 ,sum(valor_neto)  from facturas f ,vendedores v ,zonas z ,departamentos d ,\
ciudades c where (((((((((((((to_number(:b0)=tipo_factura and (tipo_document\
o='F' or tipo_documento='C')) and fecha_documento>=to_date(to_n");
 sqlstm.stmt = sq0022;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2578;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned int  )12;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_aini;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&fecha_afin;
 sqlstm.sqhstl[2] = (unsigned int  )92;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&clientei;
 sqlstm.sqhstl[3] = (unsigned int  )92;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&clientef;
 sqlstm.sqhstl[4] = (unsigned int  )92;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&librob;
 sqlstm.sqhstl[5] = (unsigned int  )4;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&p_lista;
 sqlstm.sqhstl[6] = (unsigned int  )6;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&p_lista;
 sqlstm.sqhstl[7] = (unsigned int  )6;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C11C INTO :valor_neto[1],
                                :valor_neto[2],
                                :valor_neto[3],
                                :valor_neto[4],
                                :valor_neto[5],
                                :valor_neto[6],
                                :valor_neto[7],
                                :valor_neto[8],
                                :valor_neto[9],
                                :valor_neto[10],
                                :valor_neto[11],
                                :valor_neto[12],
                                :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 18;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )2625;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[0] = (unsigned int  )8;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[1] = (unsigned int  )8;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[2] = (unsigned int  )8;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[3] = (unsigned int  )8;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_total;
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
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



       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C11C (%d)\n", staora);
       for (i=0;i<=1;++i)
            acumulo_totales(i);
 }
 sprintf(mensajes,"TOTAL ZONAS %d",anod);

 tit_ciu = 1;
 tit_zon = 1;
 porcentualiza(1);

 /* EXEC SQL CLOSE C7; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2692;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 tit_ciu = 1;
 tit_zon = 1;
 porcentualiza_pagos(1);

 borro_totales(0);
 borro_totalesa(0);
 borro_totalesb(0);
 borro_totales(1);
 borro_totalesa(1);
 borro_totalesb(1);
 con_lin=66;


}

void lista_zonasg(e)
int e;
{
 int i;
// int j;
 sprintf(codigo_emp.arr,"%d",e);
 empresa();
 strcpy(fecha,fecha_ini.arr);
 fecha_oracle3(fecha);
 strcpy(cadena,fecha);
 strcat(cadena," hasta ");
 strcpy(fecha,fecha_fin.arr);
 fecha_oracle3(fecha);
 strcat(cadena,fecha);
 strcpy(fechas,cadena);
 inicio  = 0;
 staora  = 0;
 tit_ciu = 1;
 tit_zon = 1;
 opticasg = 1;
 if (con_lin > 56)
    titulos_og();

 valor_total_z=0;
 for (i=0;i<=12;++i) {
      valor_neto_z[i]=0;
 }
 /* EXEC SQL OPEN C8; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select v.codigo ,v.codigo_nom ,v.nombre ,z.nombre ,c.nombre ,sum(decode(\
to_char(fecha_documento,'mm'),'01',valor_neto,0)) \"01\" ,sum(decode(to_char\
(fecha_documento,'mm'),'02',valor_neto,0)) \"02\" ,sum(decode(to_char(fecha_\
documento,'mm'),'03',valor_neto,0)) \"03\" ,sum(decode(to_char(fecha_documen\
to,'mm'),'04',valor_neto,0)) \"04\" ,sum(decode(to_char(fecha_documento,'mm'\
),'05',valor_neto,0)) \"05\" ,sum(decode(to_char(fecha_documento,'mm'),'06',\
valor_neto,0)) \"06\" ,sum(decode(to_char(fecha_documento,'mm'),'07',valor_n\
eto,0)) \"07\" ,sum(decode(to_char(fecha_documento,'mm'),'08',valor_neto,0))\
 \"08\" ,sum(decode(to_char(fecha_documento,'mm'),'09',valor_neto,0)) \"09\"\
 ,sum(decode(to_char(fecha_documento,'mm'),'10',valor_neto,0)) \"10\" ,sum(d\
ecode(to_char(fecha_documento,'mm'),'11',valor_neto,0)) \"11\" ,sum(decode(t\
o_char(fecha_documento,'mm'),'12',valor_neto,0)) \"12\" ,sum(valor_neto)  fr\
om facturas f ,vendedores v ,zonas z ,departamentos d ,ciudades c where ((((\
(((((((((to_number(:b0)=tipo_factura and (tipo_documento='F' or ");
 sqlstm.stmt = sq0010;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2707;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned int  )12;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_ini;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&fecha_fin;
 sqlstm.sqhstl[2] = (unsigned int  )92;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&clientei;
 sqlstm.sqhstl[3] = (unsigned int  )92;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&clientef;
 sqlstm.sqhstl[4] = (unsigned int  )92;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&librob;
 sqlstm.sqhstl[5] = (unsigned int  )4;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&p_lista;
 sqlstm.sqhstl[6] = (unsigned int  )6;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&p_lista;
 sqlstm.sqhstl[7] = (unsigned int  )6;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
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


 /* EXEC SQL FETCH C8 INTO :codigo_ven,
                        :codigo_nom,
                        :nomb_clie,
                        :nombre_zona,
                        :nomb_ciudad,
                        :valor_neto_z[1],
                        :valor_neto_z[2],
                        :valor_neto_z[3],
                        :valor_neto_z[4],
                        :valor_neto_z[5],
                        :valor_neto_z[6],
                        :valor_neto_z[7],
                        :valor_neto_z[8],
                        :valor_neto_z[9],
                        :valor_neto_z[10],
                        :valor_neto_z[11],
                        :valor_neto_z[12],
                        :valor_total_z; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2754;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo_ven;
 sqlstm.sqhstl[0] = (unsigned int  )42;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&codigo_nom;
 sqlstm.sqhstl[1] = (unsigned int  )42;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&nomb_clie;
 sqlstm.sqhstl[2] = (unsigned int  )102;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&nombre_zona;
 sqlstm.sqhstl[3] = (unsigned int  )102;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&nomb_ciudad;
 sqlstm.sqhstl[4] = (unsigned int  )102;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&valor_neto_z[1];
 sqlstm.sqhstl[5] = (unsigned int  )8;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&valor_neto_z[2];
 sqlstm.sqhstl[6] = (unsigned int  )8;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&valor_neto_z[3];
 sqlstm.sqhstl[7] = (unsigned int  )8;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&valor_neto_z[4];
 sqlstm.sqhstl[8] = (unsigned int  )8;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&valor_neto_z[5];
 sqlstm.sqhstl[9] = (unsigned int  )8;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&valor_neto_z[6];
 sqlstm.sqhstl[10] = (unsigned int  )8;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)0;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&valor_neto_z[7];
 sqlstm.sqhstl[11] = (unsigned int  )8;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&valor_neto_z[8];
 sqlstm.sqhstl[12] = (unsigned int  )8;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&valor_neto_z[9];
 sqlstm.sqhstl[13] = (unsigned int  )8;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&valor_neto_z[10];
 sqlstm.sqhstl[14] = (unsigned int  )8;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)0;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)&valor_neto_z[11];
 sqlstm.sqhstl[15] = (unsigned int  )8;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)0;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)&valor_neto_z[12];
 sqlstm.sqhstl[16] = (unsigned int  )8;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)0;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)&valor_total_z;
 sqlstm.sqhstl[17] = (unsigned int  )8;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)0;
 sqlstm.sqinds[17] = (         int  )0;
 sqlstm.sqharm[17] = (unsigned int  )0;
 sqlstm.sqadto[17] = (unsigned short )0;
 sqlstm.sqtdso[17] = (unsigned short )0;
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



 staora  = sqlca.sqlcode;
 if (staora == -1405)
     staora  = 0;
 else if (staora)
          fprintf (stderr, "Error leyendo C8.1 (%d)\n", staora);

 strorg(nomb_clie.arr,1,14);
 nomb_clie.arr [nomb_clie.len] = '\0';
 nombre_zona.arr [nombre_zona.len] = '\0';
 nomb_ciudad.arr [nomb_ciudad.len] = '\0';
 codigo_ven.arr  [codigo_ven.len]  = '\0';
 codigo_nom.arr  [codigo_nom.len]  = '\0';
 strcpy(cvendedor.arr,codigo_ven.arr );
 cvendedor.len = strlen(cvendedor.arr);

 strcpy(wnomb_clie,nomb_clie.arr);
// printf("1) codigo_emp <%s>, fecha_ini <%s> fecha_fin <%s>, cvendedor<%s>, codigo_nom<%s>, wnomb_clie<%s> ",codigo_emp.arr,fecha_ini.arr, fecha_fin.arr, cvendedor.arr, codigo_nom.arr, wnomb_clie); getchar();

 while (staora == 0) {
       imprime_zonas();
       /* EXEC SQL FETCH C8 INTO :codigo_ven,
                              :codigo_nom,
                              :nomb_clie,
                              :nombre_zona,
                              :nomb_ciudad,
                              :valor_neto_z[1],
                              :valor_neto_z[2],
                              :valor_neto_z[3],
                              :valor_neto_z[4],
                              :valor_neto_z[5],
                              :valor_neto_z[6],
                              :valor_neto_z[7],
                              :valor_neto_z[8],
                              :valor_neto_z[9],
                              :valor_neto_z[10],
                              :valor_neto_z[11],
                              :valor_neto_z[12],
                              :valor_total_z; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 18;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )2841;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&codigo_ven;
       sqlstm.sqhstl[0] = (unsigned int  )42;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&codigo_nom;
       sqlstm.sqhstl[1] = (unsigned int  )42;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&nomb_clie;
       sqlstm.sqhstl[2] = (unsigned int  )102;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&nombre_zona;
       sqlstm.sqhstl[3] = (unsigned int  )102;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&nomb_ciudad;
       sqlstm.sqhstl[4] = (unsigned int  )102;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto_z[1];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto_z[2];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto_z[3];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto_z[4];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto_z[5];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto_z[6];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto_z[7];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_neto_z[8];
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
       sqlstm.sqhstv[13] = (         void  *)&valor_neto_z[9];
       sqlstm.sqhstl[13] = (unsigned int  )8;
       sqlstm.sqhsts[13] = (         int  )0;
       sqlstm.sqindv[13] = (         void  *)0;
       sqlstm.sqinds[13] = (         int  )0;
       sqlstm.sqharm[13] = (unsigned int  )0;
       sqlstm.sqadto[13] = (unsigned short )0;
       sqlstm.sqtdso[13] = (unsigned short )0;
       sqlstm.sqhstv[14] = (         void  *)&valor_neto_z[10];
       sqlstm.sqhstl[14] = (unsigned int  )8;
       sqlstm.sqhsts[14] = (         int  )0;
       sqlstm.sqindv[14] = (         void  *)0;
       sqlstm.sqinds[14] = (         int  )0;
       sqlstm.sqharm[14] = (unsigned int  )0;
       sqlstm.sqadto[14] = (unsigned short )0;
       sqlstm.sqtdso[14] = (unsigned short )0;
       sqlstm.sqhstv[15] = (         void  *)&valor_neto_z[11];
       sqlstm.sqhstl[15] = (unsigned int  )8;
       sqlstm.sqhsts[15] = (         int  )0;
       sqlstm.sqindv[15] = (         void  *)0;
       sqlstm.sqinds[15] = (         int  )0;
       sqlstm.sqharm[15] = (unsigned int  )0;
       sqlstm.sqadto[15] = (unsigned short )0;
       sqlstm.sqtdso[15] = (unsigned short )0;
       sqlstm.sqhstv[16] = (         void  *)&valor_neto_z[12];
       sqlstm.sqhstl[16] = (unsigned int  )8;
       sqlstm.sqhsts[16] = (         int  )0;
       sqlstm.sqindv[16] = (         void  *)0;
       sqlstm.sqinds[16] = (         int  )0;
       sqlstm.sqharm[16] = (unsigned int  )0;
       sqlstm.sqadto[16] = (unsigned short )0;
       sqlstm.sqtdso[16] = (unsigned short )0;
       sqlstm.sqhstv[17] = (         void  *)&valor_total_z;
       sqlstm.sqhstl[17] = (unsigned int  )8;
       sqlstm.sqhsts[17] = (         int  )0;
       sqlstm.sqindv[17] = (         void  *)0;
       sqlstm.sqinds[17] = (         int  )0;
       sqlstm.sqharm[17] = (unsigned int  )0;
       sqlstm.sqadto[17] = (unsigned short )0;
       sqlstm.sqtdso[17] = (unsigned short )0;
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



       strorg(nomb_clie.arr,1,14);
       nomb_clie.arr [nomb_clie.len]     = '\0';
       strorg(nombre_zona.arr,1,14);
       nombre_zona.arr [nombre_zona.len] = '\0';
       strorg(nomb_ciudad.arr,1,14);
       nomb_ciudad.arr [nomb_ciudad.len] = '\0';
       codigo_ven.arr [codigo_ven.len]   = '\0';
       codigo_nom.arr [codigo_nom.len]   = '\0';

       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C8.2 (%d)\n", staora);

       if (strcmp(nomb_clie.arr,wnomb_clie)) {
           sprintf(mensajes,"SUB-TOTAL ZONA %d",anod+1);
           totaliza(0);
//           printf("pase-1"); getchar();
           ventas_zona();
           inicio=0;
           strcpy(wnomb_clie,nomb_clie.arr);
           imprime_recaudos();
           fprintf(fp,"\n");
           con_lin++;
           strcpy(cvendedor.arr,codigo_ven.arr );
           cvendedor.len = strlen(cvendedor.arr);
//           printf("2) codigo_emp <%s>, fecha_ini <%s> fecha_fin <%s>, cvendedor<%s>, codigo_nom<%s>, wnomb_clie<%s> ",codigo_emp.arr,fecha_ini.arr, fecha_fin.arr, cvendedor.arr, codigo_nom.arr, wnomb_clie); getchar();
           staora  = 0;
       }
 }
 sprintf(mensajes,"SUB-TOTAL ZONA %d",anod+1);
 totaliza(0);
// printf("pase-2"); getchar();

/***  EN LAS DOS LINEAS SIGUIENTES ESTA EL PROBLEMA */
 ventas_zona_og();
 imprime_recaudos_og();
// printf("pase-1"); getchar();
 
 sprintf(mensajes,"TOTAL ZONAS %d",anod+1);
 totaliza(1);

 tit_ciu = 1;
 if (con_lin > 56)
    titulos_og();
// titulo_zona();

 staora = 0;
 valor_total=0;
 for (i=0;i<=12;++i) {
      valor_neto[i]=0;
 }
 /* EXEC SQL OPEN C11D; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0, 
   "select sum(decode(to_char(fecha_documento,'mm'),'01',valor_neto,0)) \"01\
\" ,sum(decode(to_char(fecha_documento,'mm'),'02',valor_neto,0)) \"02\" ,sum\
(decode(to_char(fecha_documento,'mm'),'03',valor_neto,0)) \"03\" ,sum(decode\
(to_char(fecha_documento,'mm'),'04',valor_neto,0)) \"04\" ,sum(decode(to_cha\
r(fecha_documento,'mm'),'05',valor_neto,0)) \"05\" ,sum(decode(to_char(fecha\
_documento,'mm'),'06',valor_neto,0)) \"06\" ,sum(decode(to_char(fecha_docume\
nto,'mm'),'07',valor_neto,0)) \"07\" ,sum(decode(to_char(fecha_documento,'mm\
'),'08',valor_neto,0)) \"08\" ,sum(decode(to_char(fecha_documento,'mm'),'09'\
,valor_neto,0)) \"09\" ,sum(decode(to_char(fecha_documento,'mm'),'10',valor_\
neto,0)) \"10\" ,sum(decode(to_char(fecha_documento,'mm'),'11',valor_neto,0)\
) \"11\" ,sum(decode(to_char(fecha_documento,'mm'),'12',valor_neto,0)) \"12\"\
 ,sum(valor_neto)  from facturas f ,vendedores v ,zonas z ,departamentos d ,\
ciudades c where (((((((((((((to_number(:b0)=tipo_factura and (tipo_document\
o='F' or tipo_documento='C')) and fecha_documento>=to_date(to_n");
 sqlstm.stmt = sq0023;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2928;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[0] = (unsigned int  )12;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&fecha_aini;
 sqlstm.sqhstl[1] = (unsigned int  )92;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&fecha_afin;
 sqlstm.sqhstl[2] = (unsigned int  )92;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&clientei;
 sqlstm.sqhstl[3] = (unsigned int  )92;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&clientef;
 sqlstm.sqhstl[4] = (unsigned int  )92;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&librob;
 sqlstm.sqhstl[5] = (unsigned int  )4;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&p_lista;
 sqlstm.sqhstl[6] = (unsigned int  )6;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&p_lista;
 sqlstm.sqhstl[7] = (unsigned int  )6;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
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


 while (staora == 0) {

       /* EXEC SQL FETCH C11D INTO :valor_neto[1],
                                :valor_neto[2],
                                :valor_neto[3],
                                :valor_neto[4],
                                :valor_neto[5],
                                :valor_neto[6],
                                :valor_neto[7],
                                :valor_neto[8],
                                :valor_neto[9],
                                :valor_neto[10],
                                :valor_neto[11],
                                :valor_neto[12],
                                :valor_total; */ 

{
       struct sqlexd sqlstm;

       sqlstm.sqlvsn = 10;
       sqlstm.arrsiz = 18;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )2975;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&valor_neto[1];
       sqlstm.sqhstl[0] = (unsigned int  )8;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&valor_neto[2];
       sqlstm.sqhstl[1] = (unsigned int  )8;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&valor_neto[3];
       sqlstm.sqhstl[2] = (unsigned int  )8;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&valor_neto[4];
       sqlstm.sqhstl[3] = (unsigned int  )8;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&valor_neto[5];
       sqlstm.sqhstl[4] = (unsigned int  )8;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)&valor_neto[6];
       sqlstm.sqhstl[5] = (unsigned int  )8;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&valor_neto[7];
       sqlstm.sqhstl[6] = (unsigned int  )8;
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqhstv[7] = (         void  *)&valor_neto[8];
       sqlstm.sqhstl[7] = (unsigned int  )8;
       sqlstm.sqhsts[7] = (         int  )0;
       sqlstm.sqindv[7] = (         void  *)0;
       sqlstm.sqinds[7] = (         int  )0;
       sqlstm.sqharm[7] = (unsigned int  )0;
       sqlstm.sqadto[7] = (unsigned short )0;
       sqlstm.sqtdso[7] = (unsigned short )0;
       sqlstm.sqhstv[8] = (         void  *)&valor_neto[9];
       sqlstm.sqhstl[8] = (unsigned int  )8;
       sqlstm.sqhsts[8] = (         int  )0;
       sqlstm.sqindv[8] = (         void  *)0;
       sqlstm.sqinds[8] = (         int  )0;
       sqlstm.sqharm[8] = (unsigned int  )0;
       sqlstm.sqadto[8] = (unsigned short )0;
       sqlstm.sqtdso[8] = (unsigned short )0;
       sqlstm.sqhstv[9] = (         void  *)&valor_neto[10];
       sqlstm.sqhstl[9] = (unsigned int  )8;
       sqlstm.sqhsts[9] = (         int  )0;
       sqlstm.sqindv[9] = (         void  *)0;
       sqlstm.sqinds[9] = (         int  )0;
       sqlstm.sqharm[9] = (unsigned int  )0;
       sqlstm.sqadto[9] = (unsigned short )0;
       sqlstm.sqtdso[9] = (unsigned short )0;
       sqlstm.sqhstv[10] = (         void  *)&valor_neto[11];
       sqlstm.sqhstl[10] = (unsigned int  )8;
       sqlstm.sqhsts[10] = (         int  )0;
       sqlstm.sqindv[10] = (         void  *)0;
       sqlstm.sqinds[10] = (         int  )0;
       sqlstm.sqharm[10] = (unsigned int  )0;
       sqlstm.sqadto[10] = (unsigned short )0;
       sqlstm.sqtdso[10] = (unsigned short )0;
       sqlstm.sqhstv[11] = (         void  *)&valor_neto[12];
       sqlstm.sqhstl[11] = (unsigned int  )8;
       sqlstm.sqhsts[11] = (         int  )0;
       sqlstm.sqindv[11] = (         void  *)0;
       sqlstm.sqinds[11] = (         int  )0;
       sqlstm.sqharm[11] = (unsigned int  )0;
       sqlstm.sqadto[11] = (unsigned short )0;
       sqlstm.sqtdso[11] = (unsigned short )0;
       sqlstm.sqhstv[12] = (         void  *)&valor_total;
       sqlstm.sqhstl[12] = (unsigned int  )8;
       sqlstm.sqhsts[12] = (         int  )0;
       sqlstm.sqindv[12] = (         void  *)0;
       sqlstm.sqinds[12] = (         int  )0;
       sqlstm.sqharm[12] = (unsigned int  )0;
       sqlstm.sqadto[12] = (unsigned short )0;
       sqlstm.sqtdso[12] = (unsigned short )0;
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



       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C11C (%d)\n", staora);
       for (i=0;i<=1;++i)
            acumulo_totales(i);
 }
 sprintf(mensajes,"TOTAL ZONAS %d",anod);

 porcentualiza(1);
// printf("pase-2"); getchar();

 /* EXEC SQL CLOSE C8; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3042;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


/*EN LA SIGUIENTE LINEA HAY PROBLEMAS */

 porcentualiza_pagosg(1);
// printf("pase-3"); getchar();

 borro_totales(0);
 borro_totalesa(0);
 borro_totalesb(0);
// printf("pase-4"); getchar();
 borro_totales(1);
 borro_totalesa(1);
 borro_totalesb(1);
 con_lin=66;
// printf("pase-5"); getchar();

}

/* esta es la original 
void lista_zonasg(e)
int e;
{
 int i;
// int j;
 sprintf(codigo_emp.arr,"%d",e);
 empresa();
 strcpy(fecha,fecha_ini.arr);
 fecha_oracle3(fecha);
 strcpy(cadena,fecha);
 strcat(cadena," hasta ");
 strcpy(fecha,fecha_fin.arr);
 fecha_oracle3(fecha);
 strcat(cadena,fecha);
 strcpy(fechas,cadena);
 inicio  = 0;
 staora  = 0;
 tit_ciu = 1;
 tit_zon = 1;
 opticasg = 1;
 if (con_lin > 56)
    titulos_og();
// titulo_zona();

 for (i=1;i<=3;i++) {
    for (j=1;j<=12;j++) {
        vect[i].val_neto[j] =0;
        vect[i].val_netoa[j] =0;
//        printf("lista zonas g: <%d,%d> <%15.0f> <%15.0f>",i,j,vect[i].val_neto[j],vect[i].val_netoa[j]); getchar();
    }
    vect[i].val_total =0;
    vect[i].val_totala =0;
//    printf("lista zonas g: <%d> <%15.0f> <%15.0f>",i,vect[i].val_total,vect[i].val_totala); getchar();
 }

 EXEC SQL OPEN C8;
 EXEC SQL FETCH C8 INTO :codigo_ven,
                        :codigo_nom,
                        :nomb_clie,
                        :nombre_zona,
                        :nomb_ciudad,
                        :valor_neto_z[1],
                        :valor_neto_z[2],
                        :valor_neto_z[3],
                        :valor_neto_z[4],
                        :valor_neto_z[5],
                        :valor_neto_z[6],
                        :valor_neto_z[7],
                        :valor_neto_z[8],
                        :valor_neto_z[9],
                        :valor_neto_z[10],
                        :valor_neto_z[11],
                        :valor_neto_z[12],
                        :valor_total_z;

 staora  = sqlca.sqlcode;
 if (staora == -1405)
     staora  = 0;
 else if (staora)
          fprintf (stderr, "Error leyendo C7.1 (%d)\n", staora);

 strorg(nomb_clie.arr,1,14);
 nomb_clie.arr [nomb_clie.len] = '\0';
 nombre_zona.arr [nombre_zona.len] = '\0';
 nomb_ciudad.arr [nomb_ciudad.len] = '\0';
 codigo_ven.arr  [codigo_ven.len]  = '\0';
 codigo_nom.arr  [codigo_nom.len]  = '\0';
 strcpy(cvendedor.arr,codigo_ven.arr );
 cvendedor.len = strlen(cvendedor.arr);

 strcpy(wnomb_clie,nomb_clie.arr);
// printf("1) codigo_emp <%s>, fecha_ini <%s> fecha_fin <%s>, cvendedor<%s>, codigo_nom<%s>, wnomb_clie<%s> ",codigo_emp.arr,fecha_ini.arr, fecha_fin.arr, cvendedor.arr, codigo_nom.arr, wnomb_clie); getchar();

 while (staora == 0) {
       imprime_zonas();
       EXEC SQL FETCH C8 INTO :codigo_ven,
                              :codigo_nom,
                              :nomb_clie,
                              :nombre_zona,
                              :nomb_ciudad,
                              :valor_neto_z[1],
                              :valor_neto_z[2],
                              :valor_neto_z[3],
                              :valor_neto_z[4],
                              :valor_neto_z[5],
                              :valor_neto_z[6],
                              :valor_neto_z[7],
                              :valor_neto_z[8],
                              :valor_neto_z[9],
                              :valor_neto_z[10],
                              :valor_neto_z[11],
                              :valor_neto_z[12],
                              :valor_total_z;

       strorg(nomb_clie.arr,1,14);
       nomb_clie.arr [nomb_clie.len]     = '\0';
       strorg(nombre_zona.arr,1,14);
       nombre_zona.arr [nombre_zona.len] = '\0';
       strorg(nomb_ciudad.arr,1,14);
       nomb_ciudad.arr [nomb_ciudad.len] = '\0';
       codigo_ven.arr [codigo_ven.len]   = '\0';
       codigo_nom.arr [codigo_nom.len]   = '\0';

       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C7.2 (%d)\n", staora);

       if (strcmp(nomb_clie.arr,wnomb_clie)) {
           sprintf(mensajes,"SUB-TOTAL ZONA %d",anod+1);
           totaliza(0);
//           printf("pase-1"); getchar();
           ventas_zona();
           inicio=0;
           strcpy(wnomb_clie,nomb_clie.arr);
           imprime_recaudos();
           fprintf(fp,"\n");
           con_lin++;
           strcpy(cvendedor.arr,codigo_ven.arr );
           cvendedor.len = strlen(cvendedor.arr);
//           printf("2) codigo_emp <%s>, fecha_ini <%s> fecha_fin <%s>, cvendedor<%s>, codigo_nom<%s>, wnomb_clie<%s> ",codigo_emp.arr,fecha_ini.arr, fecha_fin.arr, cvendedor.arr, codigo_nom.arr, wnomb_clie); getchar();
           staora  = 0;
       }
 }
 sprintf(mensajes,"SUB-TOTAL ZONA %d",anod+1);
 totaliza(0);
// printf("pase-2"); getchar();
 ventas_zona();
 imprime_recaudos();
 sprintf(mensajes,"TOTAL ZONAS %d",anod+1);
 totaliza(1);

 tit_ciu = 1;
 if (con_lin > 56)
    titulo_opticasg();
// titulo_zona();

 staora = 0;
 EXEC SQL OPEN C11D;
 while (staora == 0) {

       EXEC SQL FETCH C11D INTO :valor_neto[1],
                                :valor_neto[2],
                                :valor_neto[3],
                                :valor_neto[4],
                                :valor_neto[5],
                                :valor_neto[6],
                                :valor_neto[7],
                                :valor_neto[8],
                                :valor_neto[9],
                                :valor_neto[10],
                                :valor_neto[11],
                                :valor_neto[12],
                                :valor_total;

       staora  = sqlca.sqlcode;
       if (staora ==  1403) break;
       if (staora == -1405)
           staora  = 0;
       else if (staora)
                fprintf (stderr, "Error leyendo C11D (%d)\n", staora);
       for (i=0;i<=1;++i)
            acumulo_totales(i);
 }
 sprintf(mensajes,"TOTAL ZONAS %d",anod);

 porcentualiza(1);

 EXEC SQL CLOSE C8;
 EXEC SQL CLOSE C11D;

 porcentualiza_pagos(1);

 borro_totales(0);
 borro_totalesa(0);
 borro_totalesb(0);
 borro_totales(1);
 borro_totalesa(1);
 borro_totalesb(1);
 con_lin=66;

}
fin de la original */

void titulo_opticasg()
{
 int i;

 tit_ciu = 1;
// if (con_lin > 56)
    titulos_og();
 if (tit_zon==1) {
     fprintf(fp,"\n\n%s%16s%s%s%s%s\n\n",enfatizado_on,ancho_on,"OPTICAS DEL GRUPO"," ",ancho_off,enfatizado_off);
     fprintf(fp,"%194s\n",         "ASESOR         DEPARTAMENTO   CIUDAD             FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION     FACTURACION");
     fprintf(fp,"%s%47s",enfatizado_on," ");

     for (i=m;i<=12;i++) {
          strcpy(cadena,mes[i-1]);
          strupp(cadena);
          fprintf(fp,"%14s",cadena);
     }
     for (i=1;i<m;i++) {
          strcpy(cadena,mes[i-1]);
          strupp(cadena);
          fprintf(fp,"%14s",cadena);
     }
     fprintf(fp,"%15s\n","TOTAL");

     fprintf(fp,"%s%50s",enfatizado_on," ");

     for (i=m;i<=12;i++) {
         sprintf (cadena,"%4d",a);
         fprintf(fp,"%5s%-9s"," ",fmtnum("z,zz9",cadena,r_t));
     }

     for (i=1;i<m;i++) {
         sprintf (cadena,"%4d",a+1);
         fprintf(fp,"%5s%-9s"," ",fmtnum("z,zz9",cadena,r_t));
     }

     fprintf(fp,"%s%5s\n\n",enfatizado_off," ");

     con_lin += 8;
 }
}

void imprime_zonas()
{
 int i;
 if (con_lin > 60)
    titulos_og();

 if (inicio==1) {
     strcpy(nomb_clie.arr," ");
 }
 fprintf(fp,"%-15s%-15s%-15s ",nomb_clie.arr,nombre_zona.arr,nomb_ciudad.arr);
 inicio=1;
 for (i=m;i<=12;i++) {
     sprintf (cadena,"%6.2f",valor_neto_z[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }
 for (i=1;i<m;i++) {
     sprintf (cadena,"%6.2f",valor_neto_z[i]);
     fprintf(fp,"%14s",fmtnum("z,zzz,zzz,zz9",cadena,r_t));
 }

 sprintf (cadena,"%6.2f",valor_total_z);
 fprintf(fp,"%16s\n",fmtnum("zz,zzz,zzz,zz9",cadena,r_t));

 con_lin+=1;
 for (i=0;i<=1;++i)
      acumulo_totales_z(i);
}

void borro_totales(i)
int i;
{

 for (j=1;j<=12;j++) {
     vect[i].val_netoa[j] = vect[i].val_neto[j];
     vect[i].val_neto[j] =0;
 }
 vect[i].val_totala = vect[i].val_total;
 vect[i].val_total =0;

}

void borro_totalesa(i)
int i;
{

 for (j=1;j<=12;j++) {
     vect[i].val_netoa[j] =0;
 }
 vect[i].val_totala =0;

}

void borro_totalesb(i)
int i;
{

 for (j=1;j<=12;j++) {
     vect[i].val_neto[j] =0;
     vect[i].val_netoa[j] =0;
//     printf("<%d,%d> <%15.0f> <%15.0f>\n",i,j,vect[i].val_neto[j],vect[i].val_netoa[j]);
 }
 vect[i].val_total =0;
 vect[i].val_totala =0;
// getchar();
 // printf("<%d> <%15.0f> <%15.0f>",i,vect[i].val_total,vect[i].val_totala); getchar();

}

void acumulo_totales(i)
int i;
{

 for (j=1;j<=12;j++) {
     vect[i].val_neto[j]     +=valor_neto[j];
 }
 vect[i].val_total      +=valor_total;

}

void acumulo_totales_z(i)
int i;
{

 for (j=1;j<=12;j++) {
     vect[i].val_neto[j]     +=valor_neto_z[j];
 }
 vect[i].val_total      +=valor_total_z;

}

void empresa()
{
 strcpy (numero_quincena.arr,nro_quincena);
 numero_quincena.len =  strlen(numero_quincena.arr);
 codigo_emp.len      =  strlen(codigo_emp.arr);

 /* EXEC SQL select cf.ano, cf.mes_proceso, cf.ptaje_iva,
               to_date(
               decode(to_number(cf.numero_quincena),
                  1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||lpad(1,2,0)),
                  2,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||16)),'yyyymmdd'),
               to_date(to_char(to_date(
               decode(to_number(cf.numero_quincena),
                  1,to_number(cf.ano||lpad(cf.mes_proceso,2,0)||lpad(15,2,0)),
                  2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd'))),'yymmdd'),'yyyymmdd'),'yyyymmdd'),
               retefte
        into  :ano, :mes_proceso, :ptaje_iva, :fecinicial, :corte, :retefte
	from  control_fac cf
        where cf.codigo_emp   = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select cf.ano ,cf.mes_proceso ,cf.ptaje_iva ,to_date(decode(\
to_number(cf.numero_quincena),1,to_number(((cf.ano||lpad(cf.mes_proceso,2,0))|\
|lpad(1,2,0))),2,to_number(((cf.ano||lpad(cf.mes_proceso,2,0))||16))),'yyyymmd\
d') ,to_date(to_char(to_date(decode(to_number(cf.numero_quincena),1,to_number(\
((cf.ano||lpad(cf.mes_proceso,2,0))||lpad(15,2,0))),2,to_number(to_char(last_d\
ay(to_date((cf.ano||lpad(cf.mes_proceso,2,0)),'yymm')),'yyyymmdd'))),'yymmdd')\
,'yyyymmdd'),'yyyymmdd') ,retefte into :b0,:b1,:b2,:b3,:b4,:b5  from control_f\
ac cf where cf.codigo_emp=:b6";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3057;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&ano;
 sqlstm.sqhstl[0] = (unsigned int  )4;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&mes_proceso;
 sqlstm.sqhstl[1] = (unsigned int  )4;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&ptaje_iva;
 sqlstm.sqhstl[2] = (unsigned int  )4;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&fecinicial;
 sqlstm.sqhstl[3] = (unsigned int  )92;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&corte;
 sqlstm.sqhstl[4] = (unsigned int  )92;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&retefte;
 sqlstm.sqhstl[5] = (unsigned int  )4;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[6] = (unsigned int  )12;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
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



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Control_Fac(C4) (%d)\n", sqlca.sqlcode);

 fecinicial.arr [fecinicial.len] = '\0';
 corte.arr      [corte.len]      = '\0';

 /* EXEC SQL select nits.nombre
          into  :nomb_emp
          from   empresas, nits
          where  empresas.codigo_nit = nits.codigo_nit and
                 empresas.codigo_emp = :codigo_emp; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select nits.nombre into :b0  from empresas ,nits where (empr\
esas.codigo_nit=nits.codigo_nit and empresas.codigo_emp=:b1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3100;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nomb_emp;
 sqlstm.sqhstl[0] = (unsigned int  )202;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&codigo_emp;
 sqlstm.sqhstl[1] = (unsigned int  )12;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
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



 if (sqlca.sqlcode != 1403 && sqlca.sqlcode != 0)
     fprintf (stderr, "Error leyendo Empresa(C5) (%d)\n", sqlca.sqlcode);

 nomb_emp.arr   [nomb_emp.len] = '\0';
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos()
{
 int i;

 con_pag++;
 if (!strcmp(codigo_emp.arr,"3"))
    strcpy(nomb_emp.arr," ");
 fprintf(fp,"%s",salte_pagina);
 strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
 fprintf(fp,"%s%s%s%s%s\n\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
 if( serv == 0 )
   fprintf(fp,"%s%s%s%s%2.2f%s%6s%26s",diezcpi,condensado_on,ancho_on,"RESUMEN DE FACTURACION (",retefte,"% RETE.FTE. APLICADO)",flista(),"(CREDITO+CONTADO)");
 else  {
   if (!strcmp(codigo_emp.arr,"1"))
       fprintf(fp,"%s%s%s%45s",diezcpi,condensado_on,ancho_on,"SERVICIOS DE ADMINISTRACION");
   else
       fprintf(fp,"%s%s%s%40s",diezcpi,condensado_on,ancho_on,"MATERIA PRIMA");
 }
 fprintf(fp,"%17s %d\n","PAGINA ",con_pag);
 fprintf(fp,"%46s%s%s\n","REPORTE MENSUAL",ancho_off,diezcpi);
 strorg(fechas,1,strlen(fechas));
 fprintf(fp,"%s%62s%s\n\n",enfatizado_on,fechas,enfatizado_off);
 con_lin=6;
 
 if (tit_zon==1) { 
     fprintf(fp,"%s%194s\n",condensado_on,"ASESOR         DEPARTAMENTO   CIUDAD             FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION     FACTURACION");
     con_lin++; 
     }    
 else
     fprintf(fp,"%s%s%36s",condensado_on,"CODIGO ","C L I E N T E / O P T I C A");
 fprintf(fp,"%168s\n",                        "      FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION     FACTURACION");
 fprintf(fp,"%s%47s",enfatizado_on," ");

 for (i=m;i<=12;i++) {
      strcpy(cadena,mes[i-1]);
      strupp(cadena);
      fprintf(fp,"%14s",cadena);
 }
 for (i=1;i<m;i++) {
      strcpy(cadena,mes[i-1]);
      strupp(cadena);
      fprintf(fp,"%14s",cadena);
 }
 fprintf(fp,"%15s\n","TOTAL");

 fprintf(fp,"%s%50s",enfatizado_on," ");

 for (i=m;i<=12;i++) {
     sprintf (cadena,"%4d",a);
     fprintf(fp,"%5s%-9s"," ",fmtnum("z,zz9",cadena,r_t));
 }

 for (i=1;i<m;i++) {
     sprintf (cadena,"%4d",a+1);
     fprintf(fp,"%5s%-9s"," ",fmtnum("z,zz9",cadena,r_t));
 }

 fprintf(fp,"%s%5s\n\n",enfatizado_off," ");

 con_lin += 4;
 if (tit_ciu == 0) {
    titulo_ciudad();
    tit_ciu=1;
 }
}
/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

void titulos_og()
{
 int i;

 con_pag++;
 if (!strcmp(codigo_emp.arr,"3"))
    strcpy(nomb_emp.arr," ");
 fprintf(fp,"%s",salte_pagina);
 strful(cadena,(int)(42-strlen(nomb_emp.arr))/2,' ');
 fprintf(fp,"%s%s%s%s%s\n\n",diezcpi,ancho_on,cadena,nomb_emp.arr,ancho_off);
 if( serv == 0 )
   fprintf(fp,"%s%s%s%s%2.2f%s%6s%26s",diezcpi,condensado_on,ancho_on,"RESUMEN DE FACTURACION (",retefte,"% RTF APLICADO)",flista(),"(CREDITO+CONTADO)");
 else  {
   if (!strcmp(codigo_emp.arr,"1"))
       fprintf(fp,"%s%s%s%45s",diezcpi,condensado_on,ancho_on,"SERVICIOS DE ADMINISTRACION");
   else
       fprintf(fp,"%s%s%s%40s",diezcpi,condensado_on,ancho_on,"MATERIA PRIMA");
 }
 fprintf(fp,"%17s %d\n","PAGINA ",con_pag);
 fprintf(fp,"%46s%s%s\n","REPORTE MENSUAL",ancho_off,diezcpi);
 strorg(fechas,1,strlen(fechas));
 fprintf(fp,"%s%62s%s\n\n",enfatizado_on,fechas,enfatizado_off);
 fprintf(fp,"%s",condensado_on);
 con_lin=6;

 if(opticasg==1) {
    fprintf(fp,"\n%s%16s%s%s%s%s\n\n",enfatizado_on,ancho_on,"OPTICAS DEL GRUPO"," ",ancho_off,enfatizado_off);
    opticasg=0;
    con_lin+=3;
 }
 fprintf(fp,"%194s\n",         "ASESOR         DEPARTAMENTO   CIUDAD             FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION   FACTURACION     FACTURACION");
 fprintf(fp,"%s%47s",enfatizado_on," ");

 for (i=m;i<=12;i++) {
      strcpy(cadena,mes[i-1]);
      strupp(cadena);
      fprintf(fp,"%14s",cadena);
 }
 for (i=1;i<m;i++) {
      strcpy(cadena,mes[i-1]);
      strupp(cadena);
      fprintf(fp,"%14s",cadena);
 }
 fprintf(fp,"%15s\n","TOTAL");

 fprintf(fp,"%s%50s",enfatizado_on," ");

 for (i=m;i<=12;i++) {
     sprintf (cadena,"%4d",a);
     fprintf(fp,"%5s%-9s"," ",fmtnum("z,zz9",cadena,r_t));
 }

 for (i=1;i<m;i++) {
     sprintf (cadena,"%4d",a+1);
     fprintf(fp,"%5s%-9s"," ",fmtnum("z,zz9",cadena,r_t));
 }

 fprintf(fp,"%s%5s\n\n",enfatizado_off," ");

 con_lin+=4;
}
/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

char *flista()
{
   if (atoi(p_lista.arr) == 5) 
       return " - CECOP";
   else
       return "";
}
