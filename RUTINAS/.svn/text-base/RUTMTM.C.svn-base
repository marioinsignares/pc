/*
* (rutina)
***********************************************
* FECHA_SYSTEM:
*    devuelve la fecha del sistema en en el siguiente formato:
*      Mes nn de yyyy.
*
*      donde Mes es el nombre del mes ej: Diciembre
*            nn es el dia
*            yyyy es el a|o.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <sys/types.h>

int ciclo2();
int decimal();
void strltr();
void strrtr();
void rellene();
void reemplaze();

char   mes[12][12] = {
               "Enero ",
               "Febrero ",
               "Marzo ",
               "Abril ",
               "Mayo ",
               "Junio ",
               "Julio ",
               "Agosto ",
               "Septiembre ",
               "Octubre ",
               "Noviembre ",
               "Diciembre "
              };

char   mec[12][12] = {
               "Ene ",
               "Feb ",
               "Mar ",
               "Abr ",
               "May ",
               "Jun ",
               "Jul ",
               "Ago ",
               "Sep ",
               "Oct ",
               "Nov ",
               "Dic "
              };

char   meq[24][7] = {
               "Ene 15",
               "Ene 31",
               "Feb 15",
               "Feb 28",
               "Mar 15",
               "Mar 31",
               "Abr 15",
               "Abr 30",
               "May 15",
               "May 31",
               "Jun 15",
               "Jun 30",
               "Jul 15",
               "Jul 31",
               "Ago 15",
               "Ago 31",
               "Sep 15",
               "Sep 30",
               "Oct 15",
               "Oct 31",
               "Nov 15",
               "Nov 30",
               "Dic 15",
               "Dic 31"
              };

char  fecha_devuelve[30];
static char *fecha_dev;

void fecha_system(f)
char f[];
{
  char    temp[10];
  struct   tm *ptr;
  time_t   lt;

  lt  = time(NULL);
  ptr = localtime(&lt);

  sprintf  (temp,"%d de 19%d",ptr->tm_mday,ptr->tm_year);
  strcpy   (fecha_devuelve,mes[ptr->tm_mon]);
  strcat   (fecha_devuelve, temp);
  fecha_dev=fecha_devuelve; 
  strcpy(f,fecha_dev);
}

/*
* (rutina)
******************************
* FECHA_ORACLE:
*    Convierte una fecha ORACLE de forma DD-MMM-AA en formato
*    mes, DD de 19AA.
*
*/
void fecha_oracle(f)
char    f[];
{
char	dd[3],
	mm[4],
	aa[3],
	temp[30];

    dd[0] = f[0]; dd[1] = f[1]; dd[2] = '\0';
    aa[0] = f[7]; aa[1] = f[8]; aa[2] = '\0';
    mm[0] = f[3]; mm[1] = f[4]; mm[2] = f[5]; mm[3] = '\0';

    if ((strcmp(mm,"JAN"))==0) strcpy (f,mes[0]);
    if ((strcmp(mm,"ENE"))==0) strcpy (f,mes[0]);
    if ((strcmp(mm,"FEB"))==0) strcpy (f,mes[1]);
    if ((strcmp(mm,"MAR"))==0) strcpy (f,mes[2]);
    if ((strcmp(mm,"APR"))==0) strcpy (f,mes[3]);
    if ((strcmp(mm,"ABR"))==0) strcpy (f,mes[3]);
    if ((strcmp(mm,"MAY"))==0) strcpy (f,mes[4]);
    if ((strcmp(mm,"JUN"))==0) strcpy (f,mes[5]);
    if ((strcmp(mm,"JUL"))==0) strcpy (f,mes[6]);
    if ((strcmp(mm,"AUG"))==0) strcpy (f,mes[7]);
    if ((strcmp(mm,"AGO"))==0) strcpy (f,mes[7]);
    if ((strcmp(mm,"SEP"))==0) strcpy (f,mes[8]);
    if ((strcmp(mm,"OCT"))==0) strcpy (f,mes[9]);
    if ((strcmp(mm,"NOV"))==0) strcpy (f,mes[10]);
    if ((strcmp(mm,"DEC"))==0) strcpy (f,mes[11]);
    if ((strcmp(mm,"DIC"))==0) strcpy (f,mes[11]);

    sprintf (temp,"%d de 19%s",atoi(dd),aa);
    strcat  (f, temp);
}

/*
* (rutina)
******************************
* FECHA_ORACLE:
*    Convierte una fecha ORACLE de forma DD-MMM-AA en formato
*    mes, DD    AA.
*
*/
void fecha_cheques(f)
char    f[];
{
char	dd[3],
	mm[4],
	aa[3],
	temp[30];

    dd[0] = f[0]; dd[1] = f[1]; dd[2] = '\0';
    aa[0] = f[7]; aa[1] = f[8]; aa[2] = '\0';
    mm[0] = f[3]; mm[1] = f[4]; mm[2] = f[5]; mm[3] = '\0';

    if ((strcmp(mm,"JAN"))==0) strcpy (f,mes[0]);
    if ((strcmp(mm,"ENE"))==0) strcpy (f,mes[0]);
    if ((strcmp(mm,"FEB"))==0) strcpy (f,mes[1]);
    if ((strcmp(mm,"MAR"))==0) strcpy (f,mes[2]);
    if ((strcmp(mm,"APR"))==0) strcpy (f,mes[3]);
    if ((strcmp(mm,"ABR"))==0) strcpy (f,mes[3]);
    if ((strcmp(mm,"MAY"))==0) strcpy (f,mes[4]);
    if ((strcmp(mm,"JUN"))==0) strcpy (f,mes[5]);
    if ((strcmp(mm,"JUL"))==0) strcpy (f,mes[6]);
    if ((strcmp(mm,"AUG"))==0) strcpy (f,mes[7]);
    if ((strcmp(mm,"AGO"))==0) strcpy (f,mes[7]);
    if ((strcmp(mm,"SEP"))==0) strcpy (f,mes[8]);
    if ((strcmp(mm,"OCT"))==0) strcpy (f,mes[9]);
    if ((strcmp(mm,"NOV"))==0) strcpy (f,mes[10]);
    if ((strcmp(mm,"DEC"))==0) strcpy (f,mes[11]);
    if ((strcmp(mm,"DIC"))==0) strcpy (f,mes[11]);

    sprintf (temp,"%12s%d    %s",f,atoi(dd),aa);
    strcpy  (f, temp);
}

/*
* (rutina)
******************************
* FECHA_ORACLE3:
*    Convierte una fecha ORACLE de forma AAMMDD en formato
*    mes, DD de 1.9AA.
*
*/
void fecha_oracle3(f)
char    f[];
{
char	dd[3],
	mm[3],
	aa[3],
	temp[30];

    aa[0] = f[0]; aa[1] = f[1]; aa[2] = '\0';
    mm[0] = f[2]; mm[1] = f[3]; mm[2] = '\0';
    dd[0] = f[4]; dd[1] = f[5]; dd[2] = '\0';

    sprintf (temp,"%d de ",atoi(dd));
    strcpy  (f,temp);

    if ((strcmp(mm,"01"))==0) strcat (f,mes[0]);
    if ((strcmp(mm,"02"))==0) strcat (f,mes[1]);
    if ((strcmp(mm,"03"))==0) strcat (f,mes[2]);
    if ((strcmp(mm,"04"))==0) strcat (f,mes[3]);
    if ((strcmp(mm,"05"))==0) strcat (f,mes[4]);
    if ((strcmp(mm,"06"))==0) strcat (f,mes[5]);
    if ((strcmp(mm,"07"))==0) strcat (f,mes[6]);
    if ((strcmp(mm,"08"))==0) strcat (f,mes[7]);
    if ((strcmp(mm,"09"))==0) strcat (f,mes[8]);
    if ((strcmp(mm,"10"))==0) strcat (f,mes[9]);
    if ((strcmp(mm,"11"))==0) strcat (f,mes[10]);
    if ((strcmp(mm,"12"))==0) strcat (f,mes[11]);

    sprintf (temp," de 1.9%s",aa);
    strcat  (f, temp);
}

/*
* (rutina)
******************************
* FECHA_ORACLE4:
*    Convierte una fecha ORACLE de forma AAMMDD en formato
*    DD-MMM-AA.
*
*/
void fecha_oracle4(f)
char    f[];
{
char	dd[3],
	mm[3],
	aa[3],
	temp[30];

    aa[0] = f[0]; aa[1] = f[1]; aa[2] = '\0';
    mm[0] = f[2]; mm[1] = f[3]; mm[2] = '\0';
    dd[0] = f[4]; dd[1] = f[5]; dd[2] = '\0';

    if ((strcmp(mm,"01"))==0) strcpy (f,"ENE");
    if ((strcmp(mm,"02"))==0) strcpy (f,"FEB");
    if ((strcmp(mm,"03"))==0) strcpy (f,"MAR");
    if ((strcmp(mm,"04"))==0) strcpy (f,"ABR");
    if ((strcmp(mm,"05"))==0) strcpy (f,"MAY");
    if ((strcmp(mm,"06"))==0) strcpy (f,"JUN");
    if ((strcmp(mm,"07"))==0) strcpy (f,"JUL");
    if ((strcmp(mm,"08"))==0) strcpy (f,"AGO");
    if ((strcmp(mm,"09"))==0) strcpy (f,"SEP");
    if ((strcmp(mm,"10"))==0) strcpy (f,"OCT");
    if ((strcmp(mm,"11"))==0) strcpy (f,"NOV");
    if ((strcmp(mm,"12"))==0) strcpy (f,"DIC");

    sprintf (temp,"%s-%s-%s",dd,f,aa);
    strcpy  (f, temp);
}

/*
* (rutina)
******************************
* FECHA_ORACLE:
*    Convierte una fecha ORACLE de forma DD-MMM-AA en formato
*    mes, DD de 1.9AA.
*
*/
void fecha_oracle2(f)
char    f[];
{
char	dd[3],
	mm[4],
	aa[3],
	temp[30];

    dd[0] = f[0]; dd[1] = f[1]; dd[2] = '\0';
    aa[0] = f[7]; aa[1] = f[8]; aa[2] = '\0';
    mm[0] = f[3]; mm[1] = f[4]; mm[2] = f[5]; mm[3] = '\0';

    sprintf (temp,"%d de ",atoi(dd));
    strcpy  (f,temp);

    if ((strcmp(mm,"JAN"))==0) strcat (f,mes[0]);
    if ((strcmp(mm,"ENE"))==0) strcat (f,mes[0]);
    if ((strcmp(mm,"FEB"))==0) strcat (f,mes[1]);
    if ((strcmp(mm,"MAR"))==0) strcat (f,mes[2]);
    if ((strcmp(mm,"APR"))==0) strcat (f,mes[3]);
    if ((strcmp(mm,"ABR"))==0) strcat (f,mes[3]);
    if ((strcmp(mm,"MAY"))==0) strcat (f,mes[4]);
    if ((strcmp(mm,"JUN"))==0) strcat (f,mes[5]);
    if ((strcmp(mm,"JUL"))==0) strcat (f,mes[6]);
    if ((strcmp(mm,"AUG"))==0) strcat (f,mes[7]);
    if ((strcmp(mm,"AGO"))==0) strcat (f,mes[7]);
    if ((strcmp(mm,"SEP"))==0) strcat (f,mes[8]);
    if ((strcmp(mm,"OCT"))==0) strcat (f,mes[9]);
    if ((strcmp(mm,"NOV"))==0) strcat (f,mes[10]);
    if ((strcmp(mm,"DEC"))==0) strcat (f,mes[11]);
    if ((strcmp(mm,"DIC"))==0) strcat (f,mes[11]);

    sprintf (temp," de 1.9%s",aa);
    strcat  (f, temp);
}

/*
* (rutina)
******************************
* FECHA_CORTA:
*    Convierte una fecha ORACLE de forma DD-MMM-AA en formato
*    Mmm, DD/19AA.
*
*/
void fecha_corta(f)
char    f[];
{
char	dd[3],
	mm[4],
	aa[3],
	temp[30];

    dd[0] = f[0]; dd[1] = f[1]; dd[2] = '\0';
    aa[0] = f[7]; aa[1] = f[8]; aa[2] = '\0';
    mm[0] = f[3]; mm[1] = f[4]; mm[2] = f[5]; mm[3] = '\0';

    if ((strcmp(mm,"JAN"))==0) strcpy (f,mec[0]);
    if ((strcmp(mm,"ENE"))==0) strcpy (f,mec[0]);
    if ((strcmp(mm,"FEB"))==0) strcpy (f,mec[1]);
    if ((strcmp(mm,"MAR"))==0) strcpy (f,mec[2]);
    if ((strcmp(mm,"APR"))==0) strcpy (f,mec[3]);
    if ((strcmp(mm,"ABR"))==0) strcpy (f,mec[3]);
    if ((strcmp(mm,"MAY"))==0) strcpy (f,mec[4]);
    if ((strcmp(mm,"JUN"))==0) strcpy (f,mec[5]);
    if ((strcmp(mm,"JUL"))==0) strcpy (f,mec[6]);
    if ((strcmp(mm,"AUG"))==0) strcpy (f,mec[7]);
    if ((strcmp(mm,"AGO"))==0) strcpy (f,mec[7]);
    if ((strcmp(mm,"SEP"))==0) strcpy (f,mec[8]);
    if ((strcmp(mm,"OCT"))==0) strcpy (f,mec[9]);
    if ((strcmp(mm,"NOV"))==0) strcpy (f,mec[10]);
    if ((strcmp(mm,"DEC"))==0) strcpy (f,mec[11]);
    if ((strcmp(mm,"DIC"))==0) strcpy (f,mec[11]);

    sprintf (temp,"%d/19%s",atoi(dd),aa);
    strcat  (f, temp);
}

/*
* (rutina)
******************************
* FECHA_NUMERO
*    Convierte una fecha ORACLE de forma DD-MMM-AA en formato
*    DD  MM  AA   
*
*/
void fecha_numero(f)
char    f[];
{
char	dd[3],
	mm[4],
	aa[3],
	temp[30];

    dd[0] = f[0]; dd[1] = f[1]; dd[2] = '\0';
    aa[0] = f[7]; aa[1] = f[8]; aa[2] = '\0';
    mm[0] = f[3]; mm[1] = f[4]; mm[2] = f[5]; mm[3] = '\0';

    if ((strcmp(mm,"JAN"))==0) strcpy (f,"01");
    if ((strcmp(mm,"ENE"))==0) strcpy (f,"01");
    if ((strcmp(mm,"FEB"))==0) strcpy (f,"02");
    if ((strcmp(mm,"MAR"))==0) strcpy (f,"03");
    if ((strcmp(mm,"APR"))==0) strcpy (f,"04");
    if ((strcmp(mm,"ABR"))==0) strcpy (f,"04");
    if ((strcmp(mm,"MAY"))==0) strcpy (f,"05");
    if ((strcmp(mm,"JUN"))==0) strcpy (f,"06");
    if ((strcmp(mm,"JUL"))==0) strcpy (f,"07");
    if ((strcmp(mm,"AUG"))==0) strcpy (f,"08");
    if ((strcmp(mm,"AGO"))==0) strcpy (f,"08");
    if ((strcmp(mm,"SEP"))==0) strcpy (f,"09");
    if ((strcmp(mm,"OCT"))==0) strcpy (f,"10");
    if ((strcmp(mm,"NOV"))==0) strcpy (f,"11");
    if ((strcmp(mm,"DEC"))==0) strcpy (f,"12");
    if ((strcmp(mm,"DIC"))==0) strcpy (f,"12");

    sprintf (temp,"%s %s %s",dd,f,aa);
    strcpy  (f, temp);
}

/*
* (rutina)
******************************
* FECHA_NUMERO3
*    Convierte una fecha ORACLE de forma DD-MMM-AA en formato
*    DD   MM   AA   
*
*/
void fecha_numero3(f)
char    f[];
{
char	dd[3],
	mm[4],
	aa[3],
	temp[13];

    dd[0] = f[0]; dd[1] = f[1]; dd[2] = '\0';
    aa[0] = f[7]; aa[1] = f[8]; aa[2] = '\0';
    mm[0] = f[3]; mm[1] = f[4]; mm[2] = f[5]; mm[3] = '\0';

    if ((strcmp(mm,"JAN"))==0) strcpy (f,"01");
    if ((strcmp(mm,"ENE"))==0) strcpy (f,"01");
    if ((strcmp(mm,"FEB"))==0) strcpy (f,"02");
    if ((strcmp(mm,"MAR"))==0) strcpy (f,"03");
    if ((strcmp(mm,"APR"))==0) strcpy (f,"04");
    if ((strcmp(mm,"ABR"))==0) strcpy (f,"04");
    if ((strcmp(mm,"MAY"))==0) strcpy (f,"05");
    if ((strcmp(mm,"JUN"))==0) strcpy (f,"06");
    if ((strcmp(mm,"JUL"))==0) strcpy (f,"07");
    if ((strcmp(mm,"AUG"))==0) strcpy (f,"08");
    if ((strcmp(mm,"AGO"))==0) strcpy (f,"08");
    if ((strcmp(mm,"SEP"))==0) strcpy (f,"09");
    if ((strcmp(mm,"OCT"))==0) strcpy (f,"10");
    if ((strcmp(mm,"NOV"))==0) strcpy (f,"11");
    if ((strcmp(mm,"DEC"))==0) strcpy (f,"12");
    if ((strcmp(mm,"DIC"))==0) strcpy (f,"12");

    sprintf (temp,"%s   %s   %s",dd,f,aa);
    strcpy  (f, temp);
}

/*
* (rutina)
******************************
* NUMERO_FECHA3
*    Convierte una fecha ORACLE de forma DD-MMM-AA en formato
*    AA   MM   DD   
*
*/
void numero_fecha3(f)
char    f[];
{
char	dd[3],
	mm[4],
	aa[3],
	temp[30];

    dd[0] = f[0]; dd[1] = f[1]; dd[2] = '\0';
    aa[0] = f[7]; aa[1] = f[8]; aa[2] = '\0';
    mm[0] = f[3]; mm[1] = f[4]; mm[2] = f[5]; mm[3] = '\0';

    if ((strcmp(mm,"JAN"))==0) strcpy (f,"01");
    if ((strcmp(mm,"ENE"))==0) strcpy (f,"01");
    if ((strcmp(mm,"FEB"))==0) strcpy (f,"02");
    if ((strcmp(mm,"MAR"))==0) strcpy (f,"03");
    if ((strcmp(mm,"APR"))==0) strcpy (f,"04");
    if ((strcmp(mm,"ABR"))==0) strcpy (f,"04");
    if ((strcmp(mm,"MAY"))==0) strcpy (f,"05");
    if ((strcmp(mm,"JUN"))==0) strcpy (f,"06");
    if ((strcmp(mm,"JUL"))==0) strcpy (f,"07");
    if ((strcmp(mm,"AUG"))==0) strcpy (f,"08");
    if ((strcmp(mm,"AGO"))==0) strcpy (f,"08");
    if ((strcmp(mm,"SEP"))==0) strcpy (f,"09");
    if ((strcmp(mm,"OCT"))==0) strcpy (f,"10");
    if ((strcmp(mm,"NOV"))==0) strcpy (f,"11");
    if ((strcmp(mm,"DEC"))==0) strcpy (f,"12");
    if ((strcmp(mm,"DIC"))==0) strcpy (f,"12");

    sprintf (temp,"%s   %s   %s",aa,f,dd);
    strcpy  (f, temp);
}

/*
* (rutina)
******************************
* NUMERO_FECHA
*    Convierte una fecha ORACLE de forma DD-MMM-AA en formato
*    AA MM DD   
*
*/
void numero_fecha(f)
char    f[];
{
char	dd[3],
	mm[4],
	aa[3],
	temp[30];

    dd[0] = f[0]; dd[1] = f[1]; dd[2] = '\0';
    aa[0] = f[7]; aa[1] = f[8]; aa[2] = '\0';
    mm[0] = f[3]; mm[1] = f[4]; mm[2] = f[5]; mm[3] = '\0';

    if ((strcmp(mm,"JAN"))==0) strcpy (f,"01");
    if ((strcmp(mm,"ENE"))==0) strcpy (f,"01");
    if ((strcmp(mm,"FEB"))==0) strcpy (f,"02");
    if ((strcmp(mm,"MAR"))==0) strcpy (f,"03");
    if ((strcmp(mm,"APR"))==0) strcpy (f,"04");
    if ((strcmp(mm,"ABR"))==0) strcpy (f,"04");
    if ((strcmp(mm,"MAY"))==0) strcpy (f,"05");
    if ((strcmp(mm,"JUN"))==0) strcpy (f,"06");
    if ((strcmp(mm,"JUL"))==0) strcpy (f,"07");
    if ((strcmp(mm,"AUG"))==0) strcpy (f,"08");
    if ((strcmp(mm,"AGO"))==0) strcpy (f,"08");
    if ((strcmp(mm,"SEP"))==0) strcpy (f,"09");
    if ((strcmp(mm,"OCT"))==0) strcpy (f,"10");
    if ((strcmp(mm,"NOV"))==0) strcpy (f,"11");
    if ((strcmp(mm,"DEC"))==0) strcpy (f,"12");
    if ((strcmp(mm,"DIC"))==0) strcpy (f,"12");

    sprintf (temp,"%s %s %s",aa,f,dd);
    strcpy  (f, temp);
}

/*
* (rutina)
******************************
* NUMERO_FECHAF
*    Convierte una fecha ORACLE de forma DD-MMM-AA en formato
*    AA/MM/DD   
*
*/
void numero_fechaf(f)
char    f[];
{
char dd[3],
	 mm[4],
	 aa[3],
	 temp[10];

     dd[0] = f[0]; dd[1] = f[1]; dd[2] = '\0';
     aa[0] = f[7]; aa[1] = f[8]; aa[2] = '\0';
     mm[0] = f[3]; mm[1] = f[4]; mm[2] = f[5]; mm[3] = '\0';

    if ((strcmp(mm,"JAN"))==0) strcpy (f,"01");
    if ((strcmp(mm,"ENE"))==0) strcpy (f,"01");
    if ((strcmp(mm,"FEB"))==0) strcpy (f,"02");
    if ((strcmp(mm,"MAR"))==0) strcpy (f,"03");
    if ((strcmp(mm,"APR"))==0) strcpy (f,"04");
    if ((strcmp(mm,"ABR"))==0) strcpy (f,"04");
    if ((strcmp(mm,"MAY"))==0) strcpy (f,"05");
    if ((strcmp(mm,"JUN"))==0) strcpy (f,"06");
    if ((strcmp(mm,"JUL"))==0) strcpy (f,"07");
    if ((strcmp(mm,"AUG"))==0) strcpy (f,"08");
    if ((strcmp(mm,"AGO"))==0) strcpy (f,"08");
    if ((strcmp(mm,"SEP"))==0) strcpy (f,"09");
    if ((strcmp(mm,"OCT"))==0) strcpy (f,"10");
    if ((strcmp(mm,"NOV"))==0) strcpy (f,"11");
    if ((strcmp(mm,"DEC"))==0) strcpy (f,"12");
    if ((strcmp(mm,"DIC"))==0) strcpy (f,"12");

    sprintf (temp,"%s/%s/%s",aa,f,dd);
    strcpy  (f, temp);
}

/*
* (rutina)
******************************
* FECHA_NUMEROJ
*    Convierte una fecha ORACLE de forma DD-MMM-AA en formato
*    AAMMDD   
*
*/
void numero_fechaj(f)
char    f[];
{
char	dd[3],
	mm[4],
	aa[3],
	temp[30];

    dd[0] = f[0]; dd[1] = f[1]; dd[2] = '\0';
    aa[0] = f[7]; aa[1] = f[8]; aa[2] = '\0';
    mm[0] = f[3]; mm[1] = f[4]; mm[2] = f[5]; mm[3] = '\0';

    if ((strcmp(mm,"JAN"))==0) strcpy (f,"01");
    if ((strcmp(mm,"ENE"))==0) strcpy (f,"01");
    if ((strcmp(mm,"FEB"))==0) strcpy (f,"02");
    if ((strcmp(mm,"MAR"))==0) strcpy (f,"03");
    if ((strcmp(mm,"APR"))==0) strcpy (f,"04");
    if ((strcmp(mm,"ABR"))==0) strcpy (f,"04");
    if ((strcmp(mm,"MAY"))==0) strcpy (f,"05");
    if ((strcmp(mm,"JUN"))==0) strcpy (f,"06");
    if ((strcmp(mm,"JUL"))==0) strcpy (f,"07");
    if ((strcmp(mm,"AUG"))==0) strcpy (f,"08");
    if ((strcmp(mm,"AGO"))==0) strcpy (f,"08");
    if ((strcmp(mm,"SEP"))==0) strcpy (f,"09");
    if ((strcmp(mm,"OCT"))==0) strcpy (f,"10");
    if ((strcmp(mm,"NOV"))==0) strcpy (f,"11");
    if ((strcmp(mm,"DEC"))==0) strcpy (f,"12");
    if ((strcmp(mm,"DIC"))==0) strcpy (f,"12");

    sprintf (temp,"%s%s%s",aa,f,dd);
    strcpy  (f, temp);
}

/*
* (rutina)
******************************
* ESPACIOS:
*    Devuelve una cantidad de espacios definidos por el usuario.
*    Se utiliza en el formateo de titulos y lineas de impresion.
*
*
*/

#define	ESPACIO 0x20
char	linea[255];

char espacios(tab)
int	tab;
{
	int	n;

	for 	(n=0; n < tab; n++) {
		 linea[n] = ESPACIO;
        }

	linea[n]= '\0';
	return (char )linea;
}
/*
* (rutina)
***********************************************
* STRPOS:
*    Devuelve la posicion de un patron dentro del arreglo.
*      strpos(patron,arreglo)
*
*      donde patron es una cadena a buscar
*            arreglo es una cadena 
*
*/
#define  SI    1
#define  NO    0

int strpos(s1,s2)  
char s1[ ],s2[ ];
{
int i,hallo,p;
hallo = NO;
p     = NO;

for (i=0; s2[i]!='\0' && !hallo; ++i)
     if (s1[0]==s2[i])
	hallo=ciclo2(s1,s2,i);

     if (hallo) 
        p=i;

     return p;
}
int ciclo2(s1,s2,i)
char s1[ ],s2[ ];
int  i;
{
int p1,p2,hallo,fin;

p1	= 1;
p2	= i+1;
hallo	= SI ;
fin     = NO ;

for (p1=1;s1[p1] != '\0' && !fin; ++p1,++p2)
    if (s1[p1] != s2[p2] && s1[p1] != '\0')
       {
	hallo = NO;
	fin   = SI;
       }
    else
	if (s1[p1] == '\0')
	   fin = SI;
	else
	    if (s2[p2] == '\0')
	       {
		hallo = NO; fin = SI ;
	       }
    return (hallo);
}

/*
* (rutina)
***************************************************************************
* STRCPI:
*    Rutina que Hace la funcion del STRCPY sin manejar los nulos en
*    strcpi (cad_pasa,desde,cuantos,cad_recibe,desde_recibe)
*
*    donde cad_pasa es la cadena que pasa
*          desde es la posicion inicial
*          cuantos es el numero de caracteres a tomar
*          cad_recibe es la cadena que recibe
*          desde_recibe es la posicion desde donde se almacena en cad_recibe
*/

void strcpi (cad_pasa,desde,cuantos,cad_recibe,desde_recibe)
       char *cad_pasa;
       int  desde,cuantos;
       char *cad_recibe;
       int  desde_recibe;
{
       int   i  , 
             van;
       van=0;
       i=0;
       desde--;
       desde_recibe--;
       for   (i=desde;van<cuantos;i++)
             {
             cad_recibe[desde_recibe]=cad_pasa[i];
             desde_recibe++;
             van++;
             }
}
/*
* (rutina)
***********************************************
* STRORG:
*    Modifica una cadena cortando desde una posicion tantos caracteres.
*      strorg(cadena,desde,cuantos)
*
*      donde cadena es una cadena a trabajar
*            desde es la posicion inicial
*	     cuantos es el numero de caracteres a tomar
*/
int strorg(cadena,desde,cuantos)
char 	*cadena;
int   	desde,
	cuantos;
{
int		qhay;
char		letras[255];
register	int i;

    qhay = (int)strlen(cadena);
    desde--;
    cuantos--;

    if (desde   < 0   ) return -1;
    if (cuantos > qhay) return -2;
    if (desde   > qhay) return -3;
    if (cuantos < 0   ) return -4;

    for (i=0; i <= cuantos; i++)
	{
	 letras[i]   = cadena[desde];
	 desde++;
	}

    letras[i] = '\0';
    strcpy (cadena, letras);
    return 0;
}
/*
* (rutina)
***********************************************
* STRORGS:
*    Modifica una cadena cortando desde una posicion tantos caracteres
     sin el caracter \0 nulo.
*      strorgs(cadena,desde,cuantos)
*
*      donde cadena es una cadena a trabajar
*            desde es la posicion inicial
*	     cuantos es el numero de caracteres a tomar
*/
int strorgs(cadena,desde,cuantos)
char 	*cadena;
int   	desde,
	cuantos;
{
int		qhay;
char		letras[255];
register	int i;

    qhay = (int)strlen(cadena);
    desde--;
    cuantos--;

    if (desde   < 0   ) return -1;
    if (cuantos > qhay) return -2;
    if (desde   > qhay) return -3;
    if (cuantos < 0   ) return -4;

    for (i=0; i <= cuantos; i++)
	{
	 letras[i]   = cadena[desde];
	 desde++;
	}
    strcpy (cadena, letras);
    return 0;
}
/*
* (rutina)
***********************************************
* STRFUL:
*    Llena una cadena con una cantidad de caracteres especifico.
*      strful(cadena,cuantos,caracter)
*
*      donde cadena es una cadena a trabajar
*	     cuantos es el numero de caracteres a tomar
*            caracter es el caracter a rellenar encerrado en comillas
*	     sencillas.
*	     ejemplo: strful (cadena,100,'A');
*/
void strful(cadena,cuantos,caracter)
char *cadena;
int   cuantos;
char  caracter;
{
char *temporal;

    temporal = malloc(255);
    memset (temporal, (int) '\0',     255);
    memset (temporal, (int) caracter, cuantos);

    strcpy (cadena, temporal);
    free (temporal);
}
/*
* (rutina)
***********************************************
* STRAJU:
*    Rellena con ceros a la izquierda una variable tipo cadena.
*      straju(cadena,longitud)
*
*      donde cadena es una cadena a trabajar
*	     longitud es la longitud total del cadena incluyendo
*            los ceros a la izquierda.  Si el contenido de longitud  
*	     es igual a la longitud de cadena, entonces no se hace 
*	     ningun relleno.
*	     ejemplo: straju (cadena,12);
*/
void straju(cadena,longitud)
char *cadena;
int   longitud;
{
char  temporal[255];
int   cuantos;

    cuantos  = longitud - strlen(cadena);

    if (cuantos)
       {
        strful (temporal, cuantos, '0');
	strcat (temporal, cadena);
	strcpy (cadena, temporal);
       }
}
/*
* (rutina)
***********************************************
* VALFEC: Valida una fecha numerica en formato
*	  AAMMDD.
*
* parametros : f   = string, contiene fecha numerica
* retorna    : f   = string, contiene fecha en formato
*		     Diciembre 22/90.
*		     0 si la fecha numerica esta Ok.
*		     1 si esta errada.
*		     9 si la longitud de f es diferente de 6.
*
*/
char   fec_mes[12][12] = {
               "ENE",
               "FEB",
               "MAR",
               "ABR",
               "MAY",
               "JUN",
               "JUL",
               "AGO",
               "SEP",
               "OCT",
               "NOV",
               "DIC"
              };

int valfec(f)
char f[];
{
char	dio[7];
char	mes[7];
char	ano[7];
char	fecw[30];

    if (strlen(f) != 6)
       return 9;

    strcpy (dio, f);
    strcpy (mes, f);
    strcpy (ano, f);

    strorg (dio, 5, 2);
    strorg (mes, 3, 2);
    strorg (ano, 1, 2);

    if (atoi(dio) < 1 ||
	atoi(dio) > 31)
       return 1;

    if (atoi(mes) < 1 ||
	atoi(mes) > 12)
       return 1;

    if (atoi(ano) < 1 ||
	atoi(ano) > 99)
       return 1;

    strcpy (fecw, dio);
    strcat (fecw, "-");
    strcat (fecw, fec_mes[atoi(mes)-1]);
    strcat (fecw, "-");
    strcat (fecw, ano);

    fecha_oracle (fecw);
    strcpy (f, fecw);
    return 0;
}
/*
* (rutina)
***********************************************
* STRUPP: Convierte una cadena en mayusculas. 
*
* parametros : cadena = string a convertir en mayusculas.
*
*/

#define a_may(x) ((islower(x)) ? x - 'a' + 'A' : x)

void strupp(cadena)
char	*cadena;
{
int	indice;

    for (indice=0; cadena[indice] != '\0'; ++indice)
	cadena[indice] = a_may(cadena[indice]);
}
/*
* (rutina)
***********************************************
* STRLOW: Convierte una cadena en minusculas. 
*
* parametros : cadena = string a convertir en minusculas.
*
*/

#define a_min(x) ((isupper(x)) ? x + 'a' - 'A' : x)

void strlow(cadena)
char	*cadena;
{
int	indice;

    for (indice=0; cadena[indice] != '\0'; ++indice)
	cadena[indice] = a_min(cadena[indice]);
}
/*
* (rutina)
***********************************************
* STRTRI: Elimina blancos a ambos lados de una
*	  variable alfanumerica.
*
* parametros : cadena
*              donde cadena = variable a ser modificada
*			      con el resultado.
*
* retorna    : ningun parametro.        
*
*/

char	destino[255];

void strtri (cadena)
char	cadena[];
{
    strcpy (destino, cadena);
    strltr (destino);
    strrtr (destino);
    strcpy (cadena, destino);
}
/*
* (rutina)
***********************************************
* STRRTR: Elimina blancos a la derecha de una
*	  variable alfanumerica.
*
* parametros : cadena
*              donde cadena = variable a ser modificada
*			      con el resultado.
*
* retorna    : ningun parametro.        
*
*/

void strrtr (cadena)
char	cadena[];
{
int	punto;

    strcpy (destino, cadena);
    for (punto= (int)strlen(destino)-1; destino[punto]==' '; punto--)
	;

    if (punto < (int)strlen(destino))
       strorg (destino, 1, punto+1);

    strcpy (cadena, destino);
}
/*
* (rutina)
***********************************************
* STRLTR: Elimina blancos a la izquierda de una
*	  variable alfanumerica.
*
* parametros : cadena
*              donde cadena = variable a ser modificada
*			      con el resultado.
*
* retorna    : ningun parametro.        
*
*/

void strltr (cadena)
char	cadena[];
{
int	punto;

    strcpy (destino, cadena);
    for (punto=0; destino[punto]==' '; punto++)
	;

    if (punto)
       strorg (destino, punto+1, strlen(destino)-punto);

    strcpy (cadena, destino);
}
/*
* (rutina)
***********************************************
* USO: Formatea una salida numerica.
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

int uso (cadena, formato, valor)
char	cadena[];
char	formato[];
double	valor;
{
int	punto;
int	posalf;
int	i;
int	mant = 0;
    if (!valor) {
       for (i=0;i <= (int)strlen(formato)-1;i++) {
            if (formato[i]!='z')
               if (formato[i]!=',')
                   if (formato[i]!='.')
                       punto=1;
       }
       i=0;
       if (!punto) {
           for (i=0;i <= (int)strlen(formato)-1;i++)
                cadena[i]=' ';
           return 0;
       }
    }
    strcpy (desticad, formato);
    punto = strpos (".", desticad);
    sprintf (alfa, "%19.4lf", valor);
    strltr  (alfa); 
    posalf= strpos (".", alfa);

    if (!posalf)
       posalf = (int)strlen(alfa);

    if (punto)
       decimal();

    if (!punto)
       punto  = (int)strlen(desticad);

    posalf--;
    posalf--;
    punto--;

    if (posalf>punto)
       {
	    rellene();
        strcpy (cadena, desticad);
	    return 0;
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
    return 0;
}

void reemplaze(i,posalf)
int	i,posalf;
{
    if (posalf<0)
       desticad[i] = ' ';
    else
       desticad[i] = alfa[posalf];

}

void rellene()
{
int	i;

    for (i=0; desticad[i]!='\0'; i++)
	desticad[i]='*';
}

int decimal()
{
int	strpnt;
int	i;
int	largo;

    i = strpos (".", alfa);
    strpnt= strpos (".", desticad);
    largo = (int)strlen (desticad);

    if (!i)
       {
	    while (strpnt <= (int)strlen(desticad))
	           desticad[strpnt++]='0';
	    return 0;
       }

    for (strpnt=strpnt; strpnt<largo; i++)
	if (i < (int)strlen(alfa))
	   desticad[strpnt++]=alfa[i];

    for (strpnt=strpnt; strpnt<largo; strpnt++)
	desticad[strpnt]='0';

    desticad[strpnt] = '\0';
    return 0;
}

/*
* (rutina)
***********************************************
* USO: Redondea un numero
*
* parametros : numero
*
* retorna    : el numero redondeado
*
*/

double redondo(numero)
double numero;
{
 double dec, tmp;
 double qq;
 dec=modf(numero,&qq);
 if (!dec)
     return numero;
 tmp=numero-dec;
 if (dec < .5)
     dec=0;
 else dec=1;
 return(tmp+dec);
}

/*
* (rutina)
***********************************************
* TRUNCA: Trunca un numero
*
* parametros : numero
*
* retorna    : el numero truncado (sin decimales)
*
*/

double trunca(numero)
double numero;
{
 double dec, tmp;
 double qq;
 dec=modf(numero,&qq);
 if (!dec)
     return numero;
 tmp=numero-dec;
 return(tmp);
}

/*
* (rutina)
*****************************************************
* REDONDO4: Redondea un numero entero a 25, 50, 75 o 100 
*
* parametros : numero
*
* retorna    : el numero redondeado
*
*/

double redondo4(numero)
double numero;
{
 double dec, tmp;
 double qq;
 numero=numero/100;
 dec=modf(numero,&qq);
 if (!dec)
     return numero;
 tmp=numero-dec;
 if (dec > .87) {
     tmp=tmp+1;
     dec=.0;
 }
 else {
      if (dec > .62)
         dec=.75;
      else {
           if (dec > .37)
              dec=.50;
           else {
                if (dec > .11)
                   dec=.25;
                else dec=0;
           }
      }
 }
 return((tmp+dec)*100);
}

/*
* (rutina)
***********************************************
* CEIL2: Devuelve el menor entero mayor o igual que el numero
* pasado como parametro y lo representa como doble. por ejem:
* dado 1.02, ceil() devuelve 2.0. dado -1.02 ceil() devuelve -1.
*
* parametros : numero
*
* retorna    : el numero menor entero mayor o igual.
*
*/

double ceil2(numero)
double numero;
{
 double dec, tmp;
 double qq;
 dec=modf(numero,&qq);
 tmp=numero-dec;
 if (numero > 0) {
    if (dec >.00001) 
       tmp+=1;
    else {
         if (dec == 0)
             tmp+=1;
    }
 }
 return(tmp);
}

/*
* (rutina)
***********************************************
* CONV_DOBLE: Convierte a doble un string
*
* parametros : numero
*
* retorna    : el numero en formato doble
*
*/

double conv_doble(ini)
char *ini;
{
char *fin;
double d1;
fin=ini;
  while(*ini) {
     d1=strtod(ini,&fin);
     ini=fin;
     /* saltan los no digitos */
     while(!isdigit(*ini) && *ini) ini++;
  }
return d1;
}

/*
* (rutina)
***********************************************
* VER_LOGIN: Haya el login del usuario 
*
* parametros : ninguno
*
* retorna    : El login del usuario
*
*/

void ver_login(l)
char l[];
{
}

#include "rut3000.c"
