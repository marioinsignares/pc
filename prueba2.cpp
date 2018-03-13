#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


main()
{

int x,contf,sw4,n,num,opcion;
char x1[3],n1[3],num1[3];
int validar(char n1[3]);
void PYF(char n1[3],char num1[3]);
int entero(char n1[3]);


cprintf ("Punto y Fama\n");

puts ("\nMenu\n");

puts ("1.  Escoger numero");
puts ("2.  Generar numero aleatoriamente");
puts ("3.  Salir");
printf ("\nDigite la opcion deseada\n");
scanf ("%d",&opcion);
/*
 clrscr();
*/
 if (opcion==3)
  goto fin;

 if (opcion==1)
 {
  sw4=0;
  while(validar(n1)!=0)
    {
    printf("\nDigite el numero a adivinar\n");
    scanf("%d",&n);
    itoa(n,n1,10);
    }
    sw4=0;
    contf=0;
    while .t.
		((contf!=4)||(validar(num1)!=0))
     {
     printf("\nDigite el numero deseado\n");
     scanf ("%d",&num);
     itoa(num,num1,10);
     PYF(n1,num1);
     }
 }

 if (opcion==2)
 sw4=0;
   {
    while (validar(x1)==0)
    {
/*
		randomize();
*/
     x=rand()/10000;
     itoa(x,x1,10);
    }
     contf=0;
     while((contf!=4)||(validar(x1)==0))
       {
        printf("\nDigite el numero deseado\n");
        scanf("%d",&num);
/*
        clrscr();
*/
        PYF(x1,num1);
       }
   }


 getch();
 fin:
 return 0;
 }

/*
int entero(char n1[3]){
 int c;
 int sw;
 c=0;
 sw=0;
 while((c<4)&&(sw==0))
 {
  if(isdigit(n1[c]))
   c++;
  else
   sw=1;
   }
 return(sw);
}

*/

int validar(char n1[3])
{
int z;
int sw4;
char cadena[5];
 itoa( atoi(n1),cadena,10 );
 z=strcmp( cadena,n1 );
/* 
 z=entero(n1);
 sw4=0;
*/
 if ((z==0)&&(strlen(n1)==4)&&((n1[1]!=n1[2])&&(n1[1]!=n1[3])&&(n1[1]!=n1[4])&&(n1[2]!=n1[3])&&(n1[2]!=n1[4])&&(n1[3]!=n1[4])))
    sw4=1;
 else
    sw4=0;
 printf("Numero Invalido, reintente\n");
 return( sw4 );
 }


void PYF(char n1[3],char num1[3])
{
int contf;
contf=0;
int d;
d=0;

 for(int i=0;i<=3;i++)
 {
    int j=0;
      if(n1[i]==num1[i])
      {
        contf++;
        printf("F");
      }
        while (j<=3)
        {
          if((n1[i]==num1[j])&&(i!=j))
          {
             printf("P");
             d++;
          }
          j++;
        }
 }

   if(contf==4)
    printf("\nGanaste!!!\n");

   if((contf+d)==0)
    printf("N");

}

