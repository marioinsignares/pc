select decode(to_number(&quincena),
              1,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm'),'yyyymm')||15),
              2,to_number(to_char(last_day(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm')),'yyyymmdd')))
              fecha_fin
from control_fac cf
where codigo_emp = 1

