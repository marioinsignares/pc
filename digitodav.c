/*****************************************************************
* FACTURAS.C Version 1.1 - Rev 1.3 - Nov. 8/91.
* FACTURAS.C Version 2.0 - Rev 1.0 - Jul. 21/93.
* FACTURAS.C Version 2.1 - Rev 1.1 - Abr. 18/95.
* FACTURAS.C Version 3.0 - Rev 1.0 - Feb. 17/98.
* FACTURAS.C Version 3.1 - Rev 1.1 - Sep. 10/99.
*
* facturas.c Programa de facturacion para listar las facturas de la quincena
*
* Uso : facturas codigo_emp tipo_cliente cliente_ini cliente_fin device
* copias userid/password
*
* Mario E. Santiago I. Creado Junio 21-1990.
* Teodoro Tarud & Cia Ltda.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int factura();
char cadenas[15];

int factura()
{
int  ndig1 = 0;
int  ndig2 = 0;
char cCal[2];
double ncal;
double doble, x, numero;
int i;
char s[2];

   doble = 1.0;
   for (i=strlen(cadenas)-1;i>=0;i--) {
      ncal = doble/2;
      sprintf(s,"%c",cadenas[i]);
      numero = atof(s);
      if (modf(ncal,&x)!=0) {
          ncal = numero*2;
      }
      else
          ncal = numero;
      if (ncal > 9) {
          sprintf(cCal,"%2.0f",ncal);
          sprintf(s,"%c",cCal[0]);
          ncal = atof(s);
          sprintf(s,"%c",cCal[1]);
          ncal += atof(s);
      }
      ndig1 += ( int ) ncal;
      doble++;
   }
   if (ndig1 > 9) {
       sprintf(cCal,"%d",ndig1);
       sprintf(s,"%c",cCal[1]);
       ndig1 = atoi(s);
   }


   doble = 1.0;
   for (i=strlen(cadenas)-1;i>=0;i--) {
      ncal = doble/2;
      sprintf(s,"%c",cadenas[i]);
      numero = atof(s);
      if (modf(ncal,&x)==0) {
          ncal = numero*3;
      }
      else
          ncal = numero;
      if (ncal > 9) {
          sprintf(cCal,"%2.0f",ncal);
          sprintf(s,"%c",cCal[0]);
          ncal = atof(s);
          sprintf(s,"%c",cCal[1]);
          ncal += atof(s);
      }
      ndig2 += ( int ) ncal;
      doble++;
   }
   if (ndig2 > 9) {
       sprintf(cCal,"%d",ndig2);
       sprintf(s,"%c",cCal[1]);
       ndig2 = atoi(s);
   }
   sprintf(s,"%d%d",ndig1,ndig2);
   return( atoi(s));
}

