/*****************************************************************
* ORDENES.C Version 1.0 - Rev 1.2 - May. 29/90.
*
* ordenes.c. Listado de Ordenes de Produccion.
*
* Uso : ordenes numero_orden ano_mes device userid/password
*
* Mario E. Santiago I. Creado Junio 7-1990.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <csrdef.h>
#include <bool.h>
struct  csrdef  curs[8];
#include "/oracle5/oracle/c/libs/impresora.c"
#include "/oracle5/oracle/c/libs/rutmtm.c"
#include "/oracle5/oracle/c/libs/editar.c"

				     /* Parametros de comunicacion con ORACLE */
#define C1   (&curs[1])
#define C2   (&curs[2])
#define C3   (&curs[3])
#define C4   (&curs[4])
#define C5   (&curs[5])
#define C6   (&curs[6])
#define C7   (&curs[7])
#define C8   (&curs[8])

#define TITULO_1 "TEODORO TARUD & CIA LTDA."
#define TITULO_2 "Nit. 890.112.740-2"
#define A_F1     "###,###.##"

char    *uid            = "xxxxxxxx/xxxxxxxx";
/* C1 */
char 	*selord 	= 
         "select numero_orden, codigo_cliente, n.nombre, c.nombre,\
               cl.nombre, o.tipo_material, o.tipo_lista,\
               to_char(fecha_control,'DD-MON-YY hh:mi:ss am'),\
               nvl(valor_material,0),\
               nvl(valor_bis_mont,0), nvl(valor_trat,0),\
               nvl(valor_color,0),    nvl(valor_desctos,0),\
               nvl(valor_otros,0),    nvl(valor_total,0),\
               nvl(diam_pedido,0), o.consecutivo, \
               o.numero_caja, o.color_caja, estado\
        from   nits n,ordenes_c o,ciudades c, clase cl\
        where  n.codigo_nit in (select codigo_nit\
                                from   clientes\
                                where  clientes.codigo_cliente in\
                                (select codigo_cliente\
                                 from ordenes_c\
                                 where numero_orden = to_number(:1)))   and\
               n.codigo_ciu     = c.codigo                              and\
               o.clase_material = cl.clase_material                     and\
               numero_orden     = to_number(:1)";
/* C2 */
char 	*selordd	= 
       "select lado_lente, d.tipo_material, d.colorv,\
               esfera, nvl(cilindro,0), nvl(eje,0), nvl(prisma,0),\
               nvl(base,0), nvl(adicion,0), cantidad,\
               valor_venta, codigo_articulo, terminado\
        from   ordenes_c o, ordenes_d d\
        where  d.consecutivo   = o.consecutivo                              and\
               d.ano_mes       = to_number(to_char(fecha_documento,'yymm')) and\
               numero_orden    = to_number(:1)\
               order by lado_lente";
/* C3 */
char 	*seltip1 	= 
         "select nombre\
          from   tipos\
          where  tipo_material = (:1) and\
                 tipo_lista    = (:2)";
/* C4 */
char 	*seltip2 	= 
         "select nombre\
          from   tipos\
          where  tipo_material = (:1)";
/* C5 */
char 	*selalm 	= 
         "select nombre\
          from   almacen\
          where  codigo_articulo = (:1)";
/* C6 */
char 	*selcov 	= 
         "select nombre\
          from   coloresv\
          where  colorv = (:1)";

/* C7 */
char    *selordo        =
       "select s.nombre, o.cantidad, o.cantidad*o.valor_unidad\
        from   ordenes_o o, servicios_len s, ordenes_c c\
        where  o.tipo_servicio = s.tipo_servicio and\
               o.tipo_trabajo  = s.tipo_trabajo  and\
               o.consecutivo   = c.consecutivo                              and\
               o.ano_mes       = to_number(to_char(fecha_documento,'yymm')) and\
               numero_orden    = to_number(:1) and\
               o.tipo_servicio = (:2)\
        order by s.secuencia";
                 
/* C8 */
char    *selordr        =
       "select observacion, gabeta, factura\
        from   ordenes_r\
        where  numero_orden    = to_number(:1)";

                                            /* Variables globales del usuario */
int     con_pag;                                   /* Contador de Paginas */
int     con_lin=22;                                /* Contador de Lineas  */
char    orden[9];
char    periodo[5];
char    fecha[10];
char    hora[12];
        		                /* Variables de recepcion para datos */
char    *lado_lente;
char    *terminado;
double  numero_orden;
float   numero_caja;
char    *color_caja;
char    *estado;
char    *colorv;
char    colorva[2];
char    *codigo_cliente;
char    *nomb_clie;
char    *nomb_ciu;
char    *nomb_clase;
char    *tipo_material;
char    *d_tipo_material;
char    tipo_mat[3];
char    tipo_lis[6];
int     tip;
char    nombre_tipo[25];
char    *nomb_tipo;
char    *nomb_tipol;
char    *nomb_tipoa;
char    *tipo_lista;
char    *nomb_color;
char    *fecha_control;
char    *codigo_articulo;
char    *observacion;
int     gaveta;
float   factura;
char    codigo_art[12];
int     ano_mes;
char    tipo_servicio[3];
double  valor_material;
double  valor_bis_mont;
double  valor_trat;
double  valor_color;
double  valor_desctos;
double  valor_otros;
double  valor_total;
float   esfera;
float   cilindro;
int     eje;
float   prisma;
char    *base;
float   adicion;
float   diametro;
int     cantidad;
int     cantidad_srv;
double  consecutivo;
double  valor_venta;
char    *nomb_servicio;
double  valor_servicio;
double  subtotal;
int     i;
char    cadena[20];
char    lineas[132];
char    r_t[20];

main(argc, argv)
int     argc;
char    *argv[];
{

char	printer[6];
char    cmd[128];
char	device[6];
int	status = 0;

    if (argc < 3)
       {
	printf ("Incorrecta invocacion:\n");
	printf ("Uso : ordenes numero_orden device userid/password\n");
	printf ("      device : t salida por terminal\n");
	printf ("               Px salida por impresora (x nro printer)\n");
	printf ("               userid/password nombre usuario y password\n");
        exit (1);
       }

       strcpy (orden,   argv[1]);
       strcpy (device,  argv[2]);
       strlow (device);

    if (!strpos ("/", argv[3]))
       {
        printf ("user id/password incorrecto.\n");
	exit (1);
       }

    strcpy (uid,    argv[3]);

/******************************************************
 * Establecer conexion concurrente con ORACLE (orlon) *
 ******************************************************/
    oraest = conectar();

    if (oraest==-1915)
       {
	fprintf (stderr,"Oracle Base de Datos no esta activa. SGA (%d)\n",
		 	oraest);
        exit (1);
       }
    else
       if (oraest==-1017)
	  {
	   fprintf (stderr,"User Name/Password es Invalido. Re-intente.\n");
	   exit (1);
	  }
       else
          if (oraest)
	     exit (1);

    busco_impresora(device);
    abre_impresora("1");

/*****************************************************
 * Crea o Abre un cursor en area de datos. (oopen)   *
 *****************************************************/

    if (abrirc1())
       exit (1);

    if (abrirc2())
       exit (2);

    if (abrirc3())
       exit (3);

    if (abrirc4())
       exit (4);

    if (abrirc5())
       exit (5);

    if (abrirc6())
       exit (6);

    if (abrirc7())
       exit (7);

    if (abrirc8())
       exit (8);

/***********************************************
 * Pasa la sentencia SQL a ORACLE. (osql3).    *
 * e identifica la localizacion y tipo  de  un *
 * area en el programa para recuperar datos de *
 * ORACLE. (odefin).                           *
 ***********************************************/

    if (selc1())
       exit (1);

    if (selc2())
       exit (2);

    if (selc3())
       exit (3);

    if (selc4())
       exit (4);

    if (selc5())
       exit (5);

    if (selc6())
       exit (6);

    if (selc7())
       exit (7);

    if (selc8())
       exit (8);

/**********************************************
 * Procesar una sentencia SQL (oexec).        *
 **********************************************/
    if (oexec (C1))
       errrpt (C1);

    if (oexec (C2))
       errrpt (C2);

    if (oexec (C8))
       errrpt (C8);

/************************************************
 * Recuperar datos en el area de datos definida *
 * una fila al tiempo. (ofetch).                *
 * Aqui se hace la primera lectura del cursor 0.*
 ************************************************/
    oraest  = ofetch (C8);
    if (oraest)
       errrpt (C8);
    oraest  = ofetch (C1);
    if (oraest)
       errrpt (C1);
    oraest  = ofetch (C2);
    if (oraest)
       errrpt (C2);
    strcpy(fecha,fecha_control);
    strorg(fecha,1,9);
    strcpy(hora,fecha_control);
    strorg(hora,11,11);

    fprintf (fp, "%s%s%c\r",line_feed6,set_vertical,22);
    titulos();

    while (oraest == 0)
          {
           if (!strcmp(lado_lente,"S")) {
              strcpy(codigo_art,codigo_articulo);
              strcpy(nomb_clase," ");
              diametro=0;
              leer_material();
           }
           else ver_tipo_material();
           if (strcmp(colorv,"")) {
               strcpy(colorva,colorv);
               leer_coloresv();
           }
           if (con_lin > 18)
              titulos();
           strcpy (cadena,codigo_articulo);
           strorg (cadena,3,1);
           if (!strcmp(cadena,"1")||!strcmp(cadena,"6")) {
               if (cantidad > 1)
                   strcpy(lado_lente," ");
           }
           fprintf (fp, "%s%3s  ",diezcpi,lado_lente);
           fprintf (fp, "%-13s  " ,nomb_clase);
           fprintf (fp, "%-25s  " ,nombre_tipo);
           fprintf (fp, "%-10s  " ,nomb_color);
           fprintf (fp, "%4.0f  ",diametro);
           fprintf (fp, "%6.2f  ",esfera);
           fprintf (fp, "%8.2f  ",cilindro);
           fprintf (fp, "%3d  "  ,eje);
           fprintf (fp, "%6.1f  ",prisma);
           fprintf (fp, "%4s  "  ,base);
           fprintf (fp, "%7.2f  ",adicion);
           fprintf (fp, "%8d  ",cantidad);
           sprintf (cadena, "%7.0f",cantidad*valor_venta);
           fmtnum("z,zzz,zz9",cadena,r_t);
           fprintf (fp, "%9s\n",r_t);
           con_lin++;
           oraest = ofetch (C2);               /* Lee otra Orden */
          }
           totales();
           Rx_procesor();
           for (i=0;i<22-con_lin;i++)
               fprintf(fp,"\n");

    cierre_impresora();
/*    if (oraest)
       errrpt (C1); */

/************************************************
 * Borrar el cursor. (oclose).                  *
 ***********************************************/
    oclose (C1);
/************************************************
 * Desconectarse de ORACLE. (ologof)            *
 ************************************************/
    ologof (LDA);
    exit   (0);
}

ver_tipo_material()
{
 tip=atoi(d_tipo_material);
 if (!strcmp(d_tipo_material,"11")) {
     strcpy(tipo_mat,d_tipo_material);
     tipos2();
 }
 else if (tip >= 60 && tip <= 65) {
          strcpy(tipo_mat,"11");
          if (!strcmp(terminado,"T"))
             strcpy(tipo_mat,"6");
          tipos2();
      }
      else if (strcmp(d_tipo_material,"")) {
               strcpy(tipo_mat,d_tipo_material);
               tipos2();
           }
           else if (!strcmp(tipo_material,"11") && !strcmp(tipo_lista,"LEN")) {
                    strcpy(tipo_mat,tipo_material);
                    strcpy(tipo_lis,tipo_lista);
                    tipos1();
                }
                else {
                      strcpy(tipo_mat,tipo_material);
                      tipos2();
                     }
}

tipos1()
{
 if (oexec (C3))
     errrpt (C3);
 oraest  = ofetch (C3);
 strcpy(nombre_tipo,nomb_tipol);
 if (oraest)
     errrpt (C3);
}

tipos2()
{
 if (oexec (C4))
     errrpt (C4);
 oraest  = ofetch (C4);
 strcpy(nombre_tipo,nomb_tipo);
 if (oraest)
     errrpt (C4);
}

leer_material()
{
 if (oexec (C5))
     errrpt (C5);
 oraest  = ofetch (C5);
 strcpy(nombre_tipo,nomb_tipoa);
 if (oraest)
     errrpt (C5);
}

leer_coloresv()
{
 if (oexec (C6))
     errrpt (C6);
 oraest  = ofetch (C6);
 if (oraest)
     errrpt (C6);
}

leer_servicios()
{
 if (oexec (C7))
     errrpt (C7);
 oraest  = ofetch (C7);
}

imprimo_servicios()
{
 while (!oraest) {
       subtotal+=valor_servicio;
       sprintf (cadena,"%6d",cantidad_srv);
       fprintf (fp,"%74s%9s",nomb_servicio,fmtnum("zzz,zz9",cadena,r_t));
       sprintf (cadena,"%6.2f",valor_servicio);
       fprintf (fp,"%11s\n",fmtnum("zzz,zz9",cadena,r_t));
       con_lin+= 1;
       oraest  = ofetch (C7);
 }
}

/************************
* TOTALES()
*    Imprime totales en el archivo de spool.
*/

totales()
{
    int rc;
    char *fmtnum(), r_t[80];
    if (strcmp (lado_lente,"S")) {
       if (valor_material != valor_total) {
           if (con_lin > 18)
               titulos();
           sprintf (cadena,"%6.2f",valor_material);
           fprintf (fp,"%94s\n%s%74s%s%20s\n","----------",enfatizado_on,"VALOR MATERIAL : .........................",enfatizado_off,fmtnum("$$$,$$9",cadena,r_t));
           con_lin+= 2;
       }
    }
    subtotal = valor_material;

    strcpy(tipo_servicio,"TR");
    leer_servicios();
    if (!oraest) {
       if (con_lin > 18)
          titulos();
       fprintf (fp,"%s%49s%s\r",enfatizado_on,"TRATAMIENTO : ",enfatizado_off);
       imprimo_servicios();
    }

    strcpy(tipo_servicio,"CO");
    leer_servicios();
    if (!oraest) {
       if (con_lin > 18)
          titulos();
       fprintf (fp,"%s%49s%s\r",enfatizado_on,"COLOR : ",enfatizado_off);
       imprimo_servicios();
    }

    strcpy(tipo_servicio,"BM");
    leer_servicios();
    if (!oraest) {
       if (con_lin > 18)
          titulos();
       fprintf (fp,"%s%49s%s\r",enfatizado_on,"BISEL Y MONTAJE : ",enfatizado_off);
       imprimo_servicios();
    }

    rc=0;
    strcpy(tipo_servicio,"RC");
    leer_servicios();
    if (!oraest) {
       if (con_lin > 18)
          titulos();
       fprintf (fp,"%s%49s%s\r",enfatizado_on,"SERV. A MONTURA - ELEM. DE RECAMBIO : ",enfatizado_off);
       imprimo_servicios();
       rc=1;
    }

    strcpy(tipo_servicio,"RP");
    leer_servicios();
    if (!oraest) {
       if (con_lin > 18)
          titulos();
       if (rc == 0)
          fprintf (fp,"%s%49s%s\r",enfatizado_on,"SERV. A MONTURA - REPARACION : ",enfatizado_off);
       else fprintf (fp,"%s%49s%s\r",enfatizado_on,"REPARACION : ",enfatizado_off);
       imprimo_servicios();
    }

    strcpy(tipo_servicio,"OT");
    leer_servicios();
    if (!oraest) {
       if (con_lin > 18)
          titulos();
       fprintf (fp,"%s%49s%s\r",enfatizado_on,"OTROS : ",enfatizado_off);
       imprimo_servicios();
    }

    if (subtotal != valor_total) {
       if (con_lin > 18)
          titulos();
       sprintf (cadena,"%6.2f",subtotal);
       fprintf (fp,"%94s\n%s%74s%s%20s\n","----------",enfatizado_on,"SUBTOTAL : .........................",enfatizado_off,fmtnum("z,zzz,zz9",cadena,r_t));
       con_lin+= 2;
    }
    if (valor_desctos > 0) {
       if (con_lin > 18)
           titulos();
       sprintf (cadena,"%6.2f",valor_desctos);
       fprintf (fp,"%s%74s%s%10s\n",enfatizado_on,"DESCUENTOS : .........................",enfatizado_off,fmtnum("zzz,zz9",cadena,r_t));
       con_lin+= 1;
    }
    sprintf (cadena,"%6.2f",valor_total);
    fprintf (fp,"%94s\n%s%74s%s%20s%s\n","==========",enfatizado_on,"TOTAL : .........................",enfatizado_off,fmtnum("$$,$$$,$$9",cadena,r_t),diezcpi);
    con_lin+= 2;
    con_pag=0;
}
/************************
* Rx_procesor
*    Imprime Rx_procesor.
*/

Rx_procesor()
{
/*  system("rx_procesor"); */
}

/************************
* TITULOS()
*    Imprime titulos en el archivo de spool.
*/

titulos()
{
  for (i=0;i<22-con_lin;i++)
       fprintf(fp,"\n");
  con_pag++;
  strcpy(cadena,fecha);
  strcpy(cadena,fecha_corta(cadena));
  fprintf (fp,"%s%s%s%8s%11s%s%35s%s%s%24s%2d\n",condensado_on,diezcpi,elite,"Fecha : ",cadena,enfatizado_on,TITULO_1,enfatizado_off,diezcpi,"Pagina No. ",con_pag);
  fprintf (fp,"%67s\n",TITULO_2);
  fprintf (fp,"%s%95s\n%99s\n\n",elite,"CRA. 52 No. 79 - 89 BARRANQUILLA - AP.AEREO No. 51166","CONM. 459300 - 459517 - 459281 - 459049 - 459354 - Fax 455552");
  fprintf (fp,"%8s%11s%31s%18s%s%s%s%7.0f%s%s%s\n","Hora  : ",hora," ","Orden No.",enfatizado_on,ancho_on,alto_on,numero_orden,ancho_off,alto_off,enfatizado_off);
  fprintf (fp,"%-6s%s  %-40s%s%26s %5.0f\n",codigo_cliente,enfatizado_on,nomb_clie,enfatizado_off,"Consecutivo No.",consecutivo);
  fprintf (fp,"        %s%-21s%s%38s %s%s%5.0f%s%s%s%s\n",enfatizado_on,nomb_ciu,enfatizado_off,"Caja No.",enfatizado_on,ancho_on,numero_caja,"-",color_caja,ancho_off,enfatizado_off);
  sprintf (cadena,"%6.0f",factura);
  fprintf (fp,"Doc.  : %s",fmtnum("zzzzzz",cadena,r_t));
  sprintf (cadena,"%5d",gaveta);
  fprintf (fp," Gaveta: %5s    Paciente : %-30s\n",fmtnum("zzzzz",cadena,r_t),observacion);
  fprintf (fp,"%s%s%s%s  ",diezcpi,subrayado_on,"D/I",subrayado_off);
  fprintf (fp,"%s%s%s  ",subrayado_on,"CLASE MAT.   ",subrayado_off);
  fprintf (fp,"%s%s%s  ",subrayado_on,"TIPO MATERIAL            ",subrayado_off);
  fprintf (fp,"%s%s%s  ",subrayado_on,"          ",subrayado_off);
  fprintf (fp,"%s%s%s  ",subrayado_on,"DIAM",subrayado_off);
  fprintf (fp,"%s%s%s  ",subrayado_on,"ESFERA",subrayado_off);
  fprintf (fp,"%s%s%s  ",subrayado_on,"CILINDRO",subrayado_off);
  fprintf (fp,"%s%s%s  ",subrayado_on,"EJE",subrayado_off);
  fprintf (fp,"%s%s%s  ",subrayado_on,"PRISMA",subrayado_off);
  fprintf (fp,"%s%s%s  ",subrayado_on,"BASE",subrayado_off);
  fprintf (fp,"%s%s%s  ",subrayado_on,"ADICION",subrayado_off);
  fprintf (fp,"%s%s%s  ",subrayado_on,"CANTIDAD",subrayado_off);
  fprintf (fp,"%s%s%s%s\n",elite,subrayado_on,"    VALOR",subrayado_off);
  con_lin = 10;
  if (!strcmp(estado,"R")) {
      fprintf (fp,"%30s%s%s\n",ancho_on,"**** A N U L A D A ****",ancho_off);
      con_lin++;
  }
}

/*****************************************
* CONECTAR:
*    Rutina que permite hacer conexion con ORACLE.
*    Si hay error este es devuelto en oraest, oraest4 devuelve el error sin
*    modificaciones.
*
*/

conectar()
{
  return (
      orlon(LDA, HST, uid, -1, (char *)0, -1, -1) ? errlda (LDA, "orlon") : 0) ;
}
  
/*****************************************
* ABRIRC1: 
*    Apertura del cursor utilizado durante esta
*    sesion de ORACLE.
*
*    Cualquier error ocurrido sera devuelto en : oraest y oraest4.
*
*/

abrirc1()
{
  return (
      oopen(C1, LDA, (char *)0, -1, -1, (char *)0, -1) ? errrpt (C1) : 0 );
}
  
/*****************************************
* ABRIRC2: 
*    Apertura del cursor utilizado durante esta
*    sesion de ORACLE.
*
*    Cualquier error ocurrido sera devuelto en : oraest y oraest4.
*
*/

abrirc2()
{
  return (
      oopen(C2, LDA, (char *)0, -1, -1, (char *)0, -1) ? errrpt (C2) : 0 );
}

/*****************************************
* ABRIRC3: 
*    Apertura del cursor utilizado durante esta
*    sesion de ORACLE.
*
*    Cualquier error ocurrido sera devuelto en : oraest y oraest4.
*
*/

abrirc3()
{
  return (
      oopen(C3, LDA, (char *)0, -1, -1, (char *)0, -1) ? errrpt (C3) : 0 );
}

/*****************************************
* ABRIRC4: 
*    Apertura del cursor utilizado durante esta
*    sesion de ORACLE.
*
*    Cualquier error ocurrido sera devuelto en : oraest y oraest4.
*
*/

abrirc4()
{
  return (
      oopen(C4, LDA, (char *)0, -1, -1, (char *)0, -1) ? errrpt (C4) : 0 );
}


/*****************************************
* ABRIRC5: 
*    Apertura del cursor utilizado durante esta
*    sesion de ORACLE.
*
*    Cualquier error ocurrido sera devuelto en : oraest y oraest4.
*
*/

abrirc5()
{
  return (
      oopen(C5, LDA, (char *)0, -1, -1, (char *)0, -1) ? errrpt (C5) : 0 );
}

/*****************************************
* ABRIRC6: 
*    Apertura del cursor utilizado durante esta
*    sesion de ORACLE.
*
*    Cualquier error ocurrido sera devuelto en : oraest y oraest4.
*
*/

abrirc6()
{
  return (
      oopen(C6, LDA, (char *)0, -1, -1, (char *)0, -1) ? errrpt (C6) : 0 );
}

/*****************************************
* ABRIRC7: 
*    Apertura del cursor utilizado durante esta
*    sesion de ORACLE.
*
*    Cualquier error ocurrido sera devuelto en : oraest y oraest4.
*
*/

abrirc7()
{
  return (
      oopen(C7, LDA, (char *)0, -1, -1, (char *)0, -1) ? errrpt (C7) : 0 );
}

/*****************************************
* ABRIRC8: 
*    Apertura del cursor utilizado durante esta
*    sesion de ORACLE.
*
*    Cualquier error ocurrido sera devuelto en : oraest y oraest4.
*
*/

abrirc8()
{
  return (
      oopen(C8, LDA, (char *)0, -1, -1, (char *)0, -1) ? errrpt (C8) : 0 );
}

/*****************************************
* SELC1:
*   Asocia un SQL con el cursor C1 y define
*   las variables a utilizar con este cursor.
*
*/

selc1()
{
    if (osql3(C1, selord, -1))
       return errrpt (C1);
    
    if (odefin(C1, 1, UCP(&numero_orden), sizeof(numero_orden), DOUBLE,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 2, codigo_cliente = malloc(6), 6, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 3, nomb_clie = malloc(41), 41, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 4, nomb_ciu = malloc(21), 21, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 5, nomb_clase = malloc(14), 14, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 6, tipo_material = malloc(3), 3, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 7, tipo_lista = malloc(6), 6, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 8, fecha_control = malloc(50), 50, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 9, UCP(&valor_material), sizeof(valor_material), DOUBLE,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 10, UCP(&valor_bis_mont), sizeof(valor_bis_mont), DOUBLE,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 11, UCP(&valor_trat), sizeof(valor_trat), DOUBLE,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 12, UCP(&valor_color), sizeof(valor_color), DOUBLE,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 13, UCP(&valor_desctos), sizeof(valor_desctos), DOUBLE,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 14, UCP(&valor_otros), sizeof(valor_otros), DOUBLE,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 15, UCP(&valor_total), sizeof(valor_total), DOUBLE,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 16, UCP(&diametro), sizeof(diametro), FLOAT,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 17, UCP(&consecutivo), sizeof(consecutivo), DOUBLE,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 18, UCP(&numero_caja), sizeof(numero_caja), FLOAT,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1); 

    if (odefin(C1, 19, color_caja = malloc(2), 2, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1);

    if (odefin(C1, 20, estado = malloc(2), 2, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C1);

    if (obndrn(C1, 1, orden, (int)9, CHRSTR, -1,
		(short *)0, (char *)0, -1, -1) )
       return errrpt (C1); 

}

/*****************************************
* SELC2:
*   Asocia un SQL con el cursor C2 y define
*   las variables a utilizar con este cursor.
*
*/

selc2()
{
    if (osql3(C2, selordd, -1))
       return errrpt (C2);
    
    if (odefin(C2, 1, lado_lente = malloc(2), 2, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2);

    if (odefin(C2, 2, d_tipo_material = malloc(3), 3, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2); 

    if (odefin(C2, 3, colorv = malloc(3), 3, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2); 

    if (odefin(C2, 4, UCP(&esfera), sizeof(esfera), FLOAT,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2); 

    if (odefin(C2, 5, UCP(&cilindro), sizeof(cilindro), FLOAT,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2); 

    if (odefin(C2, 6, UCP(&eje), sizeof(eje), INT,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2); 

    if (odefin(C2, 7, UCP(&prisma), sizeof(prisma), FLOAT,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2); 

    if (odefin(C2, 8, base = malloc(2), 2, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2); 

    if (odefin(C2, 9, UCP(&adicion), sizeof(adicion), FLOAT,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2); 

    if (odefin(C2, 10, UCP(&cantidad), sizeof(cantidad), INT,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2); 

    if (odefin(C2, 11, UCP(&valor_venta), sizeof(valor_venta), DOUBLE,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2); 

    if (odefin(C2, 12, codigo_articulo = malloc(13), 13, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2);

    if (odefin(C2, 13, terminado = malloc(2), 2, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C2);

    if (obndrn(C2, 1, orden, (int)9, CHRSTR, -1,
		(short *)0, (char *)0, -1, -1) )
       return errrpt (C2); 

}

/*****************************************
* SELC3:
*   Asocia un SQL con el cursor C3 y define
*   las variables a utilizar con este cursor.
*
*/

selc3()
{
    if (osql3(C3, seltip1, -1))
       return errrpt (C3);
    
    if (odefin(C3, 1, nomb_tipol = malloc(26), 26, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C3);

    if (obndrn(C3, 1, tipo_mat, (int)3, CHRSTR, -1,
		(short *)0, (char *)0, -1, -1) )
       return errrpt (C3); 

    if (obndrn(C3, 2, tipo_lis, (int)6, CHRSTR, -1,
		(short *)0, (char *)0, -1, -1) )
       return errrpt (C3); 

}

/*****************************************
* SELC4:
*   Asocia un SQL con el cursor C4 y define
*   las variables a utilizar con este cursor.
*
*/

selc4()
{
    if (osql3(C4, seltip2, -1))
       return errrpt (C4);
    
    if (odefin(C4, 1, nomb_tipo = malloc(26), 26, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C4);

    if (obndrn(C4, 1, tipo_mat, (int)3, CHRSTR, -1,
		(short *)0, (char *)0, -1, -1) )
       return errrpt (C4); 

}


/*****************************************
* SELC5:
*   Asocia un SQL con el cursor C5 y define
*   las variables a utilizar con este cursor.
*
*/

selc5()
{
    if (osql3(C5, selalm, -1))
       return errrpt (C5);
    
    if (odefin(C5, 1, nomb_tipoa = malloc(26), 26, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C5);

    if (obndrn(C5, 1, codigo_art, (int)13, CHRSTR, -1,
		(short *)0, (char *)0, -1, -1) )
       return errrpt (C5); 

}

/*****************************************
* SELC6:
*   Asocia un SQL con el cursor C6 y define
*   las variables a utilizar con este cursor.
*
*/

selc6()
{
    if (osql3(C6, selcov, -1))
       return errrpt (C6);
    
    if (odefin(C6, 1, nomb_color = malloc(11), 11, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C6); 

    if (obndrn(C6, 1, colorva, (int)3, CHRSTR, -1,
		(short *)0, (char *)0, -1, -1) )
       return errrpt (C6); 

}

/*****************************************
* SELC7:
*   Asocia un SQL con el cursor C7 y define
*   las variables a utilizar con este cursor.
*
*/

selc7()
{
    if (osql3(C7, selordo, -1))
       return errrpt (C7);
    
    if (odefin(C7, 1, nomb_servicio = malloc(26), 26, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C7); 

    if (odefin(C7, 2, UCP(&cantidad_srv), sizeof(cantidad_srv), INT,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C7); 

    if (odefin(C7, 3, UCP(&valor_servicio), sizeof(valor_servicio), DOUBLE,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C7); 

    if (obndrn(C7, 1, orden, (int)9, CHRSTR, -1,
		(short *)0, (char *)0, -1, -1) )
       return errrpt (C7); 

    if (obndrn(C7, 2, tipo_servicio, (int)3, CHRSTR, -1,
		(short *)0, (char *)0, -1, -1) )
       return errrpt (C7); 

}


/*****************************************
* SELC8:
*   Asocia un SQL con el cursor C8 y define
*   las variables a utilizar con este cursor.
*
*/

selc8()
{
    if (osql3(C8, selordr, -1))
       return errrpt (C8);
    
    if (odefin(C8, 1, observacion = malloc(31), 31, CHRSTR,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C8); 

    if (odefin(C8, 2, UCP(&gaveta), sizeof(gaveta), INT,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C8); 

    if (odefin(C8, 3, UCP(&factura), sizeof(factura), FLOAT,-1,
		(short *)0, (char *)0, -1, -1, (short *)0, (short *)0) )
       return errrpt (C8); 

    if (obndrn(C8, 1, orden, (int)9, CHRSTR, -1,
		(short *)0, (char *)0, -1, -1) )
       return errrpt (C8); 

}

