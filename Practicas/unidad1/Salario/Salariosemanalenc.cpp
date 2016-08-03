#include <stdio.h>
#include <stdlib.h>
float Q ,G,A,b,i,s,X,r1,V,W;
int cua=40;
int main(int argc, char *argv[])
{
  printf("Inserte el costo por hora\n");
  scanf("%f",&Q);
  printf("usuario inserte el numero de horas trabajadas \n");
  scanf("%f",&X);
if(40<=X )
{
r1=X-cua;

	if(r1<=5)
        {
	     V=(((r1*2)+cua)*Q);
	     ;printf("Tusalario es:%f\n",V);	
        }
            else

           {
   			G=r1-5;
		    A=G*3;
			b=A+10;
			i=b+40;
			s=i*Q;
			printf("tu salario es %f pesos\n",s);
           }
 }
else
{
	W=X*Q/1;
	;printf("Tu salario es%fpesos\n",W);
}

}

