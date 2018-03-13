/*
* (rutina)
***********************************************
* USING: Formatea una salida numerica.
*
* parametros : cadena, formato, valor        
*              donde cadena = variable a ser modificada
*			      con el resultado.
*		     formato= formato para representacion.
*		     valor  = valor a formatear.
*
* retorna    : ningun parametro.        
*
*/

char	desticad[255];
char	alfa[255];

using (cadena, formato, valor)
char	cadena[];
char	formato[];
double	valor;
{
int	punto;
int	posalf;
int	i;
int	mant = 0;
    if (!valor) {
       for (i=0;i<=strlen(formato)-1;i++) {
            if (formato[i]!='z')
               if (formato[i]!=',')
                   if (formato[i]!='.')
                       punto=1;
       }
       i=0;
       if (!punto) {
           for (i=0;i<=strlen(formato)-1;i++)
                cadena[i]=' ';
           return;
       }
    }
    strcpy (desticad, formato);
    punto = strpos (".", desticad);
    sprintf (alfa, "%19.4lf", valor);
    strltr  (alfa); 
    posalf= strpos (".", alfa);

    if (!posalf)
       posalf = strlen(alfa);

    if (punto)
       decimal();

    if (!punto)
       punto  = strlen(desticad);

    posalf--;
    posalf--;
    punto--;

    if (posalf>punto)
       {
	rellene();
        strcpy (cadena, desticad);
	return;
       }

    for (        ; posalf>=0;     punto--)
	{
	 if (desticad[punto]=='*') mant = 1;
	 if (desticad[punto]=='#' ||
	     desticad[punto]=='*') reemplaze(punto,posalf--);
	 if (desticad[punto]==',' &&
	     posalf         < 0   &&
	     mant           ==1  ) desticad[punto] = '*';
	 if (desticad[punto]==',' &&
	     posalf         < 0   &&
	     mant           ==0  ) desticad[punto] = ' ';
	 if (desticad[punto]==',') continue;
	 if (desticad[punto]=='*' &&
	     posalf         < 0  ) continue;
	}

    for (        ; punto>=0;     punto--)
	{
	 if (desticad[punto]=='*' &&
	     posalf         < 0  ) continue;
	 if (desticad[punto]=='#') desticad[punto] = ' ';
	 if (desticad[punto]=='\'') desticad[punto] = ' ';
	 if (desticad[punto]==',' &&
	     posalf         < 0   &&
	     mant           ==1  ) desticad[punto] = '*';
	 if (desticad[punto]==',' &&
	     posalf         < 0   &&
	     mant           ==0  ) desticad[punto] = ' ';
	}

    strcpy (cadena, desticad);
    return;
}

