#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,j,A[3][3];
  for(i=0;i<3;i++)
  {
        for(j=0;j<3;j++)
        {
                        printf("Dame un numero para A[%d][%d]\n",i,j);
                        scanf("%d",&A[i][j]);                
        }
        printf("\n");      
  }
  printf("La transpuesta de la matriz es : \n");
    for(i=0;i<3;i++)
  {
        for(j=0;j<3;j++)
        {
                        printf("A[%d][%d]= %d  ",j,i,A[j][i]);               
        }
        printf("\n");      
  }                
  system("PAUSE");	
  return 0;
}
