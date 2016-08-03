
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,j,A[3][3],B[3][3];
  for(i=0;i<3;i++)
  {
        for(j=0;j<3;j++)
        {
                        printf("Dame un numero para A[%d][%d]\n",i,j);
                        scanf("%d",&A[i][j]); 
						 B[j][i]=A[i][j];               
        }
        printf("\n");      
  }
 
     printf("La transpuestade la matriz es: \n");
    for(i=0;i<3;i++)
  {
        for(j=0;j<3;j++)
        {
                     
					   printf(" B[%d][%d]=%d\n",j,i,B[j][i]);              
        }
        printf("\n");      
  } 
   
 
  
	              
  system("PAUSE");	
  return 0;
}

