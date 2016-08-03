#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{

int i,j,primo,n;
printf("Dame un limite\n");
scanf("%d",&n);
primo=1;
printf("Tus numeros primos son:\n");
for(i=2;i<n;i++)

{
	
	for(j=2;j<i;j++)
	if((i%j)==0)
	primo=0;
	if(primo)
	printf("%d",i);
	printf("\n");
	
	primo=1;
	
}

    system("PAUSE");
	return 0;
}
