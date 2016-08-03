#include <stdio.h>
#include <stdlib.h>
float opc;
int main(int argc, char *argv[])
{
	printf("Introduce tu calificación\n");
	scanf("%f",&opc);
	if(opc>=0 && opc<=5.9)
	{
	printf("REPROBADO ,FUERA DE MI CLASE\n");
		
	}
else
{
	if(opc>=6 && opc<=7)
	{
		printf("SUFICIENTE PERO NO TE CREAS \n");
	}
    else
    {
    if(opc>=7.1 && opc<=8.4)	
    {
    	printf("CHEVERE, BIEN\n");
    }
    
    else
    {
    	if( opc>=8.5 && opc<=8.9 )
    	{
    		printf("MUY BIEN MUCHACHITO\n");
    	}
       else
       {
       	if(opc>=9 && opc<=10 )
       	{
       		printf("SEMI DIOS , EXCELENTE\n");
       		
       	}
       	else
       	{
       		printf("ESA CALIFICACION NO EXISTE\n");
       	}
       }
       
	}
    
    }
}
	
}
