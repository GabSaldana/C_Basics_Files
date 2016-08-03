#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//prototipo
float distancia (float [],float[]);
int main(int argc, char *argv[])

{
	
float X[2],Y[2],d;
int i;
for(i=0;i<2;i++)
{
printf(" Dame el valor X %d\n",i);
scanf("%f",&X[i]);
printf(" Dame el valor Y %d\n",i);
scanf("%f",&Y[i]);

}
//LLAMADO A LA DISTANCIA
d=distancia(X,Y);

printf(" La distancia es %f\n",d);
system ("PAUSE");
return 1;

}

//cuerpo de la funcion
float distancia (float X [],float Y [])

{
	float RX,RY,d;
RX=X[1]-X[0];
RY=Y[1]-Y[0];
d=sqrt(pow (RX,2.0)+pow (RY,2.0));
return d;
}	
	
	
