#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
	float promedio;
	int numeros[10],mayor,menor,i,suma=0;
	for(i=0;i<10;i++)
	{
		printf("Dame un numero\n");
		scanf("%d",&numeros[i]);
		suma=numeros[i]+suma;

	}
	    menor=numeros[0];
		mayor=numeros[0];
	for(i=1;i<10;i++)
	{
		if(mayor<numeros[i])
		mayor=numeros[i];
           
           if(menor>numeros[i])
           {
           	 menor=numeros[i];
           }
          else
          {
          	menor=menor;
          }
           
	}
	promedio=suma/10;
	printf("El promedio es %f \nEl mayor es %d\n El menor es %d\n",promedio,mayor,menor);
	system("PAUSE");
	return 0;
	
	}
	
	
