




#include <stdio.h>
#include <stdlib.h>
#include<math.h>
	//prototipo
int mayor(int,int[]);

int main(int argc, char *argv[])

{
	int numeros[3],i,M,mayo;
	
	for(i=1;i<4;i++)	
	{
	printf(" Dame  un numero\n");
	scanf("%d",&numeros[i]);

	}
	//lamar a la funicion
	M=mayor( mayo,numeros) ;
	printf("El mayor es:%d\n",M);
	system("PAUSE");
	return 0;
}


//cuerpo de la funcion
	int mayor(int mayo,int numeros[]) 
{
	int M,i;

	mayo=numeros[0];
	for(i=1;i<4;i++)
	
		if(mayo<numeros[i])
		mayo=numeros[i];
		M=mayo;
	return M;
	

}	

	
