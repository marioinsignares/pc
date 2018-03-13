#include "stdio.h"
void exit();
void main()
{
 FILE *fp;
 float f=12.23;
 if ((fp = fopen("prueba", "w")) == NULL) {
     fprintf (stderr,"Error abriendo archivo pipe \n");
     exit (1);
 }
 fwrite("linea-1",7,1,fp);
 fclose(fp);
 exit(0);
}
