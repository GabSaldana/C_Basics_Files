#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int exponencial(int bas ,int exp);
int main(int argc, char *argv[])
{
	int exp,bas,res;

    printf("Dame el valorde la base\n");
    scanf("%d",&bas);	
    printf("Dame el valor de el exponente\n");
    scanf("%d",&exp);
	res=exponencial(bas,exp);
	printf("El valor es:%d\n",res);
	system("PAUSE");
	return 0; 				
}


int exponencial(int bas, int exp)
{
if(exp==0){

return 1;
}
else
{

return bas*exponencial(bas ,exp-1);
}

}
