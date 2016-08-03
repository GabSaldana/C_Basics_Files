#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{


	int n,i,j;
	
	printf("Dame ellimite de la piramide\n");
	scanf(" %d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
	
	  // printf("%d",i);
	   for(j=0;j<i;j++)
	   printf("*");
	   printf("\n");
	}
	for(i=n;i>0;i--)
	{
		for(j=i;j!=0;j--)
		printf("*");
		printf("\n");
	}
	
	

	return 0;

}
