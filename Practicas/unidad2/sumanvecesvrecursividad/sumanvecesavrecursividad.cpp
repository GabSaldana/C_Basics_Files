#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int suma(int num ,int v);
int main(int argc, char *argv[])
{
	int num=3,v=3,res;

    printf("Dame el valorde del numero a sumar\n");
    scanf("%d",&num);	
    printf("Dame el valor de las veces\n");
    scanf("%d",&v);
	res=suma(num,v);
	printf("El valor es:%d\n",res);
	system("PAUSE");
	return 0; 				
}

int suma(int num ,int v)
{
	if(v==1){
		return num;
	}
	else
	{
		return num+suma(num,v-1);
	}
	
}

