select decode(to_number(&numero_quincena),
                    1,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm'),'yyyymm')||lpad(1,2,0)),
                    2,to_number(to_char(to_date(cf.ano||lpad(cf.mes_proceso,2,0),'yymm'),'yyyymm')||16)) fecha_ini
from control_fac cf
where codigo_emp = 1
