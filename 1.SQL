select n.nit, substr(e.nombre,1,decode(instr(e.nombre,' '),0,length(e.nombre),instr(e.nombre,' '))), 
       decode(instr(e.nombre,' '),0,' ',substr(e.nombre, instr(e.nombre,' '), length(e.nombre))),
       e.primer_ap, segun_ap, substr(ctacte,1,4)||substr(ctacte,6,7),
       substr(ctacte,14,1)
from   nomemple e, nits n
where  e.codigo_nit    = n.codigo_nit     and
       e.estado_lab    <> 'R'             and
       e.cesantias     = 'PORVENIR'           and
       e.codigo_emp    = 1
/
