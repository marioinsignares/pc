#include <stdio.h>
main (argc,argv)
int argc;
char *argv[];
{
	file *fp;
    char ch;

	if(argc != 2) {
	    printf("Ha olvidado introducir el nombre del archivo\n");
		exit(0);
	}

	if((fp=fopen(argv[1],"r")) = NULL) {
		printf("No se puede abrir el archivo\n");
		exit(0);
	}

    ch=getc(fp);
	while (ch != EOF) {
		putchar(ch);
		ch=getc(fp);
	}

	fclose(fp);
}
