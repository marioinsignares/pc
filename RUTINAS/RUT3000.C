/*
**********************************************************
* Convierte cantidad en numeros a letras.
*
*   Parametros: _valor, letras
*               _valor  = cantidad en numeros a convertir.
*               letras  = resultado de la conversion.
*/

static	char	unidad[30][50];
static	char	decena[10][50];
static	char	centena[10][50];
static	char	especial[10][50];

static	int	cargada;

char	_linmnto[255],
	_letcrso[255],
	_nromnto[255],
	_nromntw[255],
	_nrocrso[255], 
	_axe[255], 
	_axe1[255],
	tempor[255],
	achr1[10],
	achr2[10],
	achr3[10],
	achr4[10];

int	_lartotl,
	_pundeci,
	_larente,
	_canloop,
	_canprim,
	_cerfalt,
	_totdata,
	_voym,
    	_loop;

int cuerpo();
void copiar();
void coprest();
void primero();
void cargar();

int monletr(_valor,letras)
double	_valor;
char	letras[];
{
    
    if (!cargada)
       cargar();

    strcpy(_linmnto,"");strcpy(_nrocrso,"");
    strcpy(_letcrso,"");strcpy(_nromnto,"");strcpy(_nromntw,"");
    _totdata = 0; _voym    = 0;
    _lartotl = 0; _pundeci = 0; _larente = 0;
    _canloop = 0; _canprim = 0; _cerfalt = 0;

    sprintf (_nromnto , "%lf", _valor); /* Cambio por Alfabetico */
    _lartotl = strlen(_nromnto);        /* Cantidad total de chr */
    strcpy (_axe,"-1");
       
    _pundeci = strpos(".",_nromnto);    /* En que posicion esta el punto */

    if (_pundeci == 0)
       {
        strcat (_nromnto , ".00");
        _pundeci=strpos(".",_nromnto);
       }

    if (_pundeci == 1)
       {  
	strcpy (tempor, "0");
	strcat (tempor, _nromnto);
        strcpy (_nromnto, _nromntw);
        _pundeci   = 2;
       }

    strcpy (tempor, _nromnto);
    strorg (tempor,1,_pundeci-1);    /* Escojo la parte entero */
    strcpy (_nromntw,tempor) ;
    _larente = strlen(_nromntw);     /* Cantidad de Chr en parte entera */
    _canloop = _larente / 3;         /* nro de vueltas completas */

    if (_canloop > 4)
       {
        printf ("Demasiado Grande el Nro a Convertir");
        return 1;
       } 

    _canprim = _larente % 3;  /* primera vuelta a realizar */

    if (_canprim == 0) 
       {
        primero();
        goto r300;
       }
        
    _cerfalt    = 3 - _canprim;
    strful (_nrocrso, _cerfalt, '0');
    strcpy (tempor, _nromntw);
    strorg (tempor, 1, _canprim);
    strcat (_nrocrso, tempor);
    
    _totdata    = _canprim;
    _voym       = _canloop + 2;
    primero();
    cuerpo();

r300:  _voym=_canloop+1;

/*
Inicial loop para todas la parte entera del numero 
*/
    
    for (_loop = 1; _loop <= _canloop; _loop++)
        {   
	 strcpy (tempor, _nromntw);
	 strorg (tempor, _totdata+1, 3);
	 strcpy (_nrocrso, tempor);
         _totdata = _totdata + 3;
         cuerpo();
         _voym--;
        } 
       	
      /* Para los centavos haga lo ultimo */

    if (atoi(_nromntw) == 0)
       {
        copiar("CERO ");
        strcpy (_axe , "-1");
        _canloop = 0;
       }

    if (_canloop > 2 && atoi(_axe) == 0)
       copiar("DE ");
    else
        if (_canloop == 2 && atoi(_axe) == 0 && _canprim > 0)
           copiar("DE ");
    if (_canprim == 1 && atoi(_axe) < 0)
       if (atoi(_nromntw) == 1) 
          copiar("PESO ");
       else 
           copiar("PESOS ");
    else 
        if (_canloop > 0 && atoi(_axe) != -1)
           copiar("PESOS ");
        else
            if (_canloop > 0 && atoi(_axe) == -1)
               copiar("PESOS ");
            else
                if (_canloop < 2 && atoi(_nromntw) > 1)
                   copiar("PESOS ");
                else
                    copiar("PESO "); 

    _voym=1;

    strcpy (tempor, _nromnto);
    strorg (tempor, _pundeci+1, 2);
    strcat (tempor, "/100 ");
    copiar ("CON ");
    copiar (tempor);
/*
'   _nrocrso=STRING$(1,"0")+MID$(_nromnto,_pundeci+1,2)
'   copiar("CON ");
'   if (atoi(_nrocrso) == 0)
'         copiar("CERO ");
'   cuerpo();
'   copiar("CTVS M/CTE ");
*/
    copiar("M/CTE "     );
    strcpy (letras, _linmnto);
    return 0;
}
int cuerpo()
{
    strcpy (tempor, _nrocrso); strorg (tempor, 1, 1); strcpy (achr1, tempor);
    strcpy (tempor, _nrocrso); strorg (tempor, 2, 1); strcpy (achr2, tempor);
    strcpy (tempor, _nrocrso); strorg (tempor, 3, 1); strcpy (achr3, tempor);
    strcpy (tempor, _nrocrso); strorg (tempor, 2, 2); strcpy (achr4, tempor);
       
    if (atoi(_nrocrso) == 0) return 0;
    
    if (atoi(achr1)    == 1 && atoi(achr4) == 0)
       {
        copiar("CIEN ");
        coprest();
        return 0;
       }
          
    if (atoi(achr1)   == 0)
       if (atoi(achr3) == 0)
          {  
           copiar(decena[atoi(achr2)]);
           coprest();
           return 0;
          } 
    else
        if (atoi(achr4) > 29)
           {
            copiar(decena[atoi(achr2)]); copiar("Y ");
            copiar(unidad[atoi(achr3)]); coprest();
            return 0;
           }
        else
            {
             copiar(unidad[atoi(achr4)]);
             coprest();
             return 0;
            }

    copiar(centena[atoi(achr1)]);
    
    if (atoi(achr4) == 0)
       {
        coprest();
        return 0;
       }
        
    if (atoi(achr3) == 0)
       {  
        copiar(decena[atoi(achr2)]);
        coprest();
        return 0;
       } 
    else
        if (atoi(achr4) > 29)
           {
            copiar(decena[atoi(achr2)]); copiar("Y " );
            copiar(unidad[atoi(achr3)]); coprest();
            return 0;
           } 
        else
            {
             copiar(unidad[atoi(achr4)]);
             coprest();
             return 0;
            }
}             
void copiar(cadena)
char	cadena[];
{
    strcat ( _linmnto , cadena);
}    
void coprest()
{  
    if (_voym > 2)
       if (atoi(_nrocrso) == 1 && _voym == 4)
          copiar("MILLON "); 
    else 
        if (atoi(_nrocrso) == 1 && _voym == 6 && atoi(_axe) == 0)
           copiar("BILLON "); 
        else 
            copiar(especial[_voym]);
    if (_voym == 5)
       {
	strcpy (tempor, _axe);
	strorg (tempor, 1, 3);
	strcpy (_axe1, tempor);
        if (atoi(_axe)==0 || atoi(_axe1) == 0)
           copiar("MILLONES ");
       }
}           
void primero()
{
    if (_larente < 4) return;
    
    if (_canprim == 0)
       {
	strcpy (tempor, _nromntw);
	strorg (tempor, 4, strlen(_nromntw)-3);
        strcpy (_axe,   tempor);
       }
    else
	{
	 strcpy (tempor, _nromntw);
	 strorg (tempor, _canprim+1, strlen(_nromntw)-_canprim);
	 strcpy (_axe,   tempor);
        }
}
void cargar()
{
    strcpy( unidad[1] ,"UN ");
    strcpy( unidad[2] ,"DOS ");
    strcpy( unidad[3] ,"TRES ");
    strcpy( unidad[4] ,"CUATRO ");
    strcpy( unidad[5] ,"CINCO ");
    strcpy( unidad[6] ,"SEIS ");
    strcpy( unidad[7] ,"SIETE ");
    strcpy( unidad[8] ,"OCHO ");
    strcpy( unidad[9] ,"NUEVE ");
    strcpy( unidad[10],"DIEZ ");
    strcpy( unidad[11],"ONCE ");
    strcpy( unidad[12],"DOCE ");
    strcpy( unidad[13],"TRECE ");
    strcpy( unidad[14],"CATORCE ");
    strcpy( unidad[15],"QUINCE ");
    strcpy( unidad[16],"DIECISEIS ");
    strcpy( unidad[17],"DIECISIETE ");
    strcpy( unidad[18],"DIECIOCHO ");
    strcpy( unidad[19],"DIECINUEVE ");
    strcpy( unidad[20],"VEINTE ");
    strcpy( unidad[21],"VEINTIUN ");
    strcpy( unidad[22],"VEINTIDOS ");
    strcpy( unidad[23],"VEINTITRES ");
    strcpy( unidad[24],"VEINTICUATRO ");
    strcpy( unidad[25],"VEINTICINCO ");
    strcpy( unidad[26],"VEINTISEIS ");
    strcpy( unidad[27],"VEINTISIETE ");
    strcpy( unidad[28],"VEINTIOCHO ");
    strcpy( unidad[29],"VEINTINUEVE ");

    strcpy( decena[1] ,"DIEZ ");
    strcpy( decena[2] ,"VEINTE ");
    strcpy( decena[3] ,"TREINTA ");
    strcpy( decena[4] ,"CUARENTA ");
    strcpy( decena[5] ,"CINCUENTA ");
    strcpy( decena[6] ,"SESENTA ");
    strcpy( decena[7] ,"SETENTA ");
    strcpy( decena[8] ,"OCHENTA ");
    strcpy( decena[9] ,"NOVENTA ");
 
    strcpy( centena[1],"CIENTO ");
    strcpy( centena[2],"DOSCIENTOS ");
    strcpy( centena[3],"TRESCIENTOS ");
    strcpy( centena[4],"CUATROCIENTOS ");
    strcpy( centena[5],"QUINIENTOS ");
    strcpy( centena[6],"SEISCIENTOS ");
    strcpy( centena[7],"SETECIENTOS ");
    strcpy( centena[8],"OCHOCIENTOS ");
    strcpy( centena[9],"NOVECIENTOS ");

    strcpy( especial[1],"CTVS M/CTE ");
    strcpy( especial[2],"PESOS ");
    strcpy( especial[3],"MIL ");
    strcpy( especial[4],"MILLONES ");
    strcpy( especial[5],"MIL ");
    strcpy( especial[6],"BILLONES ");

    cargada = 1;
}    
