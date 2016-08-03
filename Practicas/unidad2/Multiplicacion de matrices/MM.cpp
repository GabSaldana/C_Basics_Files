#include <stdio.h>
#include <stdlib.h>
#define MAX 100 
int main(int argc, char *argv[])
{
    int i,j,o,p,A[MAX][MAX],B[MAX][MAX],C[MAX][MAX],y,n,m;
    
    printf("Dame el valor  (renglones)de la matriz A\n"); 
    scanf("%d",&m);
	printf("Dame el valor  (columnas)de la matriz A\n");
    scanf("%d",&n);
    printf(" A[%d][%d]\n",m,n);
    
for(j=0;j<m;j++)
  {
        for(i=0;i<n;i++)
        {
                        printf("Dame un numero para A[%d][%d]\n",j,i);
                        scanf("%d",&A[j][i]);                
        }
        printf("\n");      
  }
  
    printf("Dame el valor  (renglones)de la matriz B\n"); 
    scanf("%d",&p);
	printf("Dame el valor  (columnas)de la matriz B\n");
    scanf("%d",&o);
    printf(" A[%d][%d]\n",p,o);
    
for(j=0;j<p;j++)
  {
        for(i=0;i<o;i++)
        {
                        printf("Dame un numero para B[%d][%d]\n",j,i);
                        scanf("%d",&B[j][i]);                
        }
        printf("\n");      
  }
  

  
  for(j=0;j<m;j++)
  {
  	  for(i=0;i<o;i++)
  	  
  	  {
  	    for(y=0;y<n;y++)
		  {
		  	C[j][i]=C[j][i]+(A[j][y]*B[y][i]);
		  }	
  	  }
  }
  
  
for(j=0;j<m;j++)
  {
        
        { for(i=0;i<o;i++)
        
        printf(" C[%d][%d]=%d\n",i,j,C[i][j]);
                        
        }
        printf("\n");      
  }
                  
  system("PAUSE");	
  return 0;
}
