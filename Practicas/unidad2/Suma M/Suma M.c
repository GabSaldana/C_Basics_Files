#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,j,A[3][3],B[3][3],C[3][3];
  for(i=0;i<3;i++)
  {
        for(j=0;j<3;j++)
        {
                        printf("Dame un numero para A[%d][%d]\n",i,j);
                        scanf("%d",&A[i][j]);                
        }
        printf("\n");      
  }
  for(i=0;i<3;i++)
  {
        for(j=0;j<3;j++)
        {
                        printf("Dame un numero para B[%d][%d]\n",i,j);
                        scanf("%d",&B[i][j]);                
                        C[i][j]=A[i][j]+B[i][j];
        }
        printf("\n");      
  }
  printf("La Suma de las matrices es : \n");
    for(i=0;i<3;i++)
  {
        for(j=0;j<3;j++)
        {
                        printf("C[%d][%d]= %d  ",i,j,C[i][j]);               
        }
        printf("\n");      
  }                
  system("PAUSE");	
  return 0;
}
