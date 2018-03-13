#include <stdio.h>
#include <string.h>

#define	MAXSTR	80
#define	EXITO		1
#define	FRACASO		0

/* typedef int BOOL; */


/*----------------------------------------------------------------------
  funcion que formatea numeros.
  parametros : formato - cadena con el formato que tomara el
	       numero. Formatos validos :
	       $ signo de pesos
	       Z supresion de ceros
	       * proteccion de cheques
	       . punto decimal
	       , coma
	       B insercion de espacios en blanco
	       0 insercion de ceros
	       / insercion del caracter '/'
	       num - cadena con el numero de entrada.
	       numfmt - cadena que contendra al numero
			formateado.
  salida :     retorna un puntero a 'numfmt'. Esta cadena
	       contiene el numero formateado. Si la parte entera
	       del numero es truncada, la salida es una cadena
	       de '*'.
  Emplea tres constantes predefinidas : MAXSTR 80
					EXITO	  1
					FRACASO	  0
  jose torres. Sept/89.
  --------------------------------------------------------------------*/
char	*fmtnum(formato,num,numfmt)
char	*formato;
char	*num;
char	*numfmt;
{
	register char	*ptrnum;
	register char	*ptrfmt;
	char	*pf;
        char    *pnum;
	char	fmt[MAXSTR];
	int	sigue;
        int     i;
	double  atof();
	int	sin_enteros   = FRACASO;
	int	sin_decimales = FRACASO;

        if (*formato=='\0')
        {
	  strcpy(numfmt,num);
	  return(numfmt);
	}

	strcpy(fmt,formato);
	*numfmt='\0';

	if ( *num == '\0' ) { *numfmt = '\0'; return((char *)0); }
	/*--- quita espacios o ceros a izquierda y derecha */
	for ( ptrnum=num; (*ptrnum==' ' || *ptrnum=='0') && *ptrnum!='\0'; ptrnum++ );
	num = ptrnum;
	while ( *ptrnum ) ptrnum++;
	for (ptrnum--; *ptrnum==' ' && ptrnum>=num; *(ptrnum--)='\0');

	/*--- alinear por el pto decimal o fin de la cadena */
	for (ptrfmt=fmt; *ptrfmt!='\0' && *ptrfmt!='.' ; ptrfmt++);
	for (ptrnum=num; *ptrnum!='\0' && *ptrnum!='.' ; ptrnum++);
	/*--- elimina ceros a la izquierda si son decimales */
	if ( *ptrnum == '.' ) {
		pf = ptrnum;
		while ( *ptrnum++ );
		for ( ptrnum-=2; *ptrnum == '0' && *ptrnum != '.'; ptrnum--)
			*ptrnum = '\0';
		ptrnum = pf;
	}


	/*--- formatea la parte entera de la cadena */
	ptrfmt--;
	ptrnum--;
	sigue = EXITO;
	while (sigue) {
		if ( ptrfmt == fmt )
			sigue = FRACASO;
		switch (*ptrfmt) {
		case 'z':
		case 'Z':
			if ( ptrnum>=num )
				*ptrfmt-- = *ptrnum--;
			else
				*ptrfmt-- = ' ';
			break;
		case '9':
			if ( ptrnum>=num )
				*ptrfmt-- = *ptrnum--;
			else
				*ptrfmt-- = '0';
			break;
		case '$':
			if ( ptrnum>=num )
				*ptrfmt-- = *ptrnum--;
			else 	{
				sigue = FRACASO;
				}
			break;
		case ',':
			if ( ptrnum>=num && *ptrnum != '-' )
				ptrfmt--;
			else if ( ptrnum>=num )
				*ptrfmt-- = *ptrnum--;
			else if ( *(ptrfmt-1) == '*' )
				*ptrfmt-- = '*';
			else {
				*ptrfmt = ' ';
				pf = ptrfmt--;
				do *pf = *(pf+1);
				while ( *pf++ );
			}
			break;
		case '*':
			if ( ptrnum>=num )
				*ptrfmt-- = *ptrnum--;
			else
				ptrfmt--;
			break;
		case 'b':
		case 'B':
			*ptrfmt-- = ' ';
			break;
		case '-':
			*ptrfmt-- = '-';
			break;
		case '0':
		case '/':
			ptrfmt--;
			break;
		default:
			sigue = FRACASO;
		} /* swicth */
	} /* while */

	/*-- verifica que no se trunco la parte entera del numero */
	if ( ptrnum>=num ) {
		for (ptrfmt=fmt; *ptrfmt!='\0' ; *ptrfmt++='*');
		strcpy(numfmt,fmt);
		return(numfmt);
		}

	if ( ptrfmt < fmt )
		strcpy(numfmt,fmt);
	else
		strcpy(numfmt,ptrfmt);

	/*--- formatea la parte decimal de la cadena */
	for (ptrfmt=numfmt; *ptrfmt && *ptrfmt!='.' ; ptrfmt++);
	for (ptrnum=num; *ptrnum && *ptrnum!='.' ; ptrnum++);
	if ( *ptrnum=='.' )
		ptrnum++;
	if ( *ptrfmt++=='.' ) {
                pnum=num;
                for (i=0;*(pnum+i)!='.';i++);
                pnum+=i;
                if ( atof(num) - atof(pnum) == 0 )
		     sin_enteros = EXITO;
                if ( atof(pnum) == 0 )
		     sin_decimales = EXITO;
		/*if ( (int) atof(num) == 0 )
		     sin_enteros = EXITO;
		if ( atof(num) - (int) atof(num) == 0 )
		     sin_decimales = EXITO;*/
		sigue = EXITO;
		while (sigue) {
			if ( *ptrfmt=='\0' )
				sigue = FRACASO;
			switch (*ptrfmt) {
			case 'z':
			case 'Z':
				if ( *ptrnum!='\0' )
					*ptrfmt++ = *ptrnum++;
				else if ( sin_enteros && sin_decimales )
					*ptrfmt++ = ' ';
				else
					*ptrfmt++ = '0';
				break;
			case '9':
				if ( *ptrnum!='\0' )
					*ptrfmt++ = *ptrnum++;
				else
					*ptrfmt++ = '0';
				break;
			case '$':
				if ( *ptrnum!='\0' )
					*ptrfmt++ = *ptrnum++;
				else
					*ptrfmt++ = '0';
				break;
			default:
				sigue = FRACASO;
			} /* swicth */
		} /* while */
	} /* if */
	ptrfmt = numfmt;
	sin_enteros = EXITO;
	while ( *ptrfmt && sin_enteros ) {
		if ( *ptrfmt >= '0' && *ptrfmt <= '9' )
			sin_enteros = FRACASO;
		ptrfmt++;
	}
	if ( sin_enteros ) {
		ptrfmt = numfmt;
		while ( *ptrfmt ) {
			if ( *ptrfmt != ' ' )
				*ptrfmt = ' ';
			ptrfmt++;
		}
	}
	return(numfmt);
} /*fmtnum*/
