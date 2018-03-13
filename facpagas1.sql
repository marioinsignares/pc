rem Listado de facturas pagadas;
set verify off
rem set termout off
set pagesize 63;
set newpage 0;
set echo off;
set feedback off;
set linesize 120;
set pause off;

col nombemp     new_value nom_emp noprint
col nitemp      new_value nita    noprint
col ancho_on    new_value ao      noprint
col ancho_off   new_value af      noprint
col elite       new_value el      noprint
col normal      new_value no      noprint
col fechoy      new_value fhoy    noprint
col fechai      new_value fei     noprint
col fechaf      new_value fef     noprint

ttitle left el '              ' nom_emp -
skip 1 -
  left '               Nit : ' nita  -
skip 1 -
  left 'Fecha Proceso: ' fhoy '                       Pagina : ' format 999 sql.pno -
skip 1 -
  center ' F A C T U R A S   C A N C E L A D A S ' skip 1 -
  center 'Fecha inicial: ' fei ' Fecha final: ' fef skip 2;

column vendedor       heading 'Vendedor'         FORMAT A25;
column zona           heading 'Zona'             format A16;
column ciudad         heading 'Ciudad'           format A21;
column fecha_pago     heading 'Fecha|Pago'       format A12;
column numero_factura heading 'Numero|Factura'   format 9999999;
column VALOR          heading 'Valor|Pago'       format $99,999,999,999;
column incremen1      heading 'Fecha|Factura'    format $999,999,999;

break on vendedor skip 2;
compute sum of VALOR on vendedor;

ACCEPT codigo_emp     CHAR PROMPT 'Digite codigo de la empresa : ';
ACCEPT impresora      CHAR PROMPT 'Digite la impresora a usar  : ';
ACCEPT fecha_inicial  CHAR PROMPT 'Digite la fecha inicial     : ';
ACCEPT fecha_final    CHAR PROMPT 'Digite la fecha final       : ';
ACCEPT codigo_veni    CHAR PROMPT 'Digite el vendedor inicial  : ';
ACCEPT codigo_venf    CHAR PROMPT 'Digite el vendedor final    : ';
ACCEPT codciu         CHAR PROMPT 'Digite el codigo de la ciudad    : ';
rem spool LPT2

set pagesize 60;

select v.nombre vendedor, z.nombre zona, c.nombre ciudad, numero_factura, sum(f.valor_neto) VALOR, n.nombre nombemp, n.nit nitemp, sysdate fechoy,
       to_char(to_date(&fecha_inicial,'yyyymmdd'),'DD-MON-YYYY') fechai,        to_char(to_date(&fecha_final,'yyyymmdd'),'DD-MON-YYYY') fechaf,
       ancho_on, ancho_off, elite, normal
from facturas f, ciudades c, nits n, empresas e, nomemple ep, vendedores v, zonas z, impresora
where e.codigo_emp  = &codigo_emp                        and
      e.codigo_nit  = n.codigo_nit                       and
      to_number(to_char(f.fecha_pago,'yyyymmdd')) >= &fecha_inicial and
      to_number(to_char(f.fecha_pago,'yyyymmdd')) <= &fecha_final   and
      f.estado_cartera = 1 and
      f.valor_neto > 0     and
      f.tipo_factura   = e.codigo_emp                    and
      substr(f.codigo_cliente,1,2) = c.codigo            and
      c.vendedor       = v.codigo                        and
      e.codigo_emp     = ep.codigo_emp                   and
      v.codigo_nom     = ep.codigo                       and
      z.codigo         = c.zona                          and
      ep.codigo       >= &codigo_veni                    and
      ep.codigo       <= &codigo_venf                    and 
      impresora.impresora = '&impresora'                 and
      substr(codigo_cliente,1,2) = &codciu' and
      not exists (select 'x' from opticasp
                  where codigo_cliente = f.codigo_cliente)
group by v.nombre, z.nombre, c.nombre, n.nombre, n.nit, numero_factura, ancho_on, ancho_off, elite, normal, sysdate
order by v.nombre, z.nombre, c.nombre
/

ttitle left el '              ' nom_emp -
skip 1 -
  left '               Nit : ' nita  -
skip 1 -
  left 'Fecha Proceso: ' fhoy '                       Pagina : ' format 999 sql.pno -
skip 1 -
  center ' F A C T U R A S   C A N C E L A D A S (OPTICAS DEL GRUPO)' skip 1 -
  center 'Fecha inicial: ' fei ' Fecha final: ' fef skip 2;

select v.nombre vendedor, z.nombre zona, c.nombre ciudad, numero_factura, sum(f.valor_neto) VALOR, n.nombre nombemp, n.nit nitemp, sysdate fechoy,
       to_char(to_date(&fecha_inicial,'yyyymmdd'),'DD-MON-YYYY') fechai,        to_char(to_date(&fecha_final,'yyyymmdd'),'DD-MON-YYYY') fechaf,
       ancho_on, ancho_off, elite, normal
from facturas f, ciudades c, nits n, empresas e, nomemple ep, vendedores v, zonas z, impresora
where e.codigo_emp  = &codigo_emp                        and
      e.codigo_nit  = n.codigo_nit                       and
      to_number(to_char(f.fecha_pago,'yyyymmdd')) >= &fecha_inicial and
      to_number(to_char(f.fecha_pago,'yyyymmdd')) <= &fecha_final   and
      f.estado_cartera = 1 and
      f.valor_neto > 0     and
      substr(f.codigo_cliente,1,2) = c.codigo and
      c.vendedor       = v.codigo                       and
      e.codigo_emp     = ep.codigo_emp                   and
      v.codigo_nom     = ep.codigo                       and
      z.codigo         = c.zona                          and
      ep.codigo       >= &codigo_veni                    and
      ep.codigo       <= &codigo_venf                    and 
      impresora.impresora = '&impresora'                 and
      substr(codigo_cliente,1,2) = &codciu' and
      exists (select 'x' from opticasp
              where codigo_cliente = f.codigo_cliente)
group by v.nombre, z.nombre, c.nombre, n.nombre, n.nit, numero_factura, ancho_on, ancho_off, elite, normal, sysdate
order by v.nombre, z.nombre, c.nombre
/
spool off