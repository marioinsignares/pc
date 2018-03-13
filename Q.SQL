             select nvl(infa,'0'), decode(clase,'RC','0',nvl(infb,'0')),
                    nvl(infc,'0'), nvl(infd,'0'),
                    comprobante, clase, descripcion, fecha,
                    nvl(valor_deb,0), nvl(valor_cre,0), d.codigo_nit
             from   movto_d d, movto_c c, bancos b
             where  d.codigo_emp     = c.codigo_emp                and
                    d.ano_mes        = c.ano_mes                   and
                    d.consecutivo    = c.consecutivo               and
                    c.codigo_emp     =  &codigo_emp                and
                    c.fecha         >= to_date('&fechai2','yymmdd')  and
                    c.fecha         <= to_date('&fechaf' ,'yymmdd')  and
                    d.cuenta         = b.cuenta                    and
                    c.codigo_emp     = b.codigo_emp                and
                    b.codigo         =  '&codigo_bco'                and
                    d.infa           =  '&cta_cte' 
             order by c.fecha;
