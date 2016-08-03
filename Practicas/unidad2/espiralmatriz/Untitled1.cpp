 


#include <stdio.h>
#include <stdlib.h>
int MAX=100;
int main(int argc, char *argv[])
{
	
int i,j,cont,nm,n,m	,A[MAX][MAX],p;

    printf("Dame el valor n (columnas)de la matriz\n");
    scanf("%d",&n);
    printf("Dame el valor m (renglones)de la matriz\n"); 
    scanf("%d",&m);
    printf(" A[%d][%d]\n",n,m);
for(i=0;i<n;i++)
  {
        for(j=0;j<m;j++)
        {
                        printf("Dame un numero para A[%d][%d]\n",i,j);
                        scanf("%d",&A[i][j]);                
        }
        printf("\n");      
  }
  
  
    printf("La matriz es: \n");
  
   for(j=0;j<m;j++)
  {
        for(i=0;i<n;i++)
        {
                        printf("A[%d][%d]= %d  ",i,j,A[i][j]);               
        }
        printf("\n");      
  }
  
  cont=0;
  nm=n*m;
  	
  for(p=0;p<=(n+m)/4;p++)
  	{
  	
  	
  	
  	j=p;
  	for(i=p;i<=n-(p+1);i++)
  		{
  		 cont=cont++;
  		 if(cont<n*m+1)
  		 printf("%d,",A[i][j]); 
  		}
  		
  	i=n-(p+1);	
  	for(j=p+1;j<=m-(p+1);j++)
  		{
  		cont=cont++;
  		 if(cont<n*m+1)
  		 printf("%d,",A[i][j]);
  		}
  		
   j=m-(p+1);	
  	for(i=n-(p+2);p<=i;i--)
  		{
  		cont=cont++;
  		 if(cont<n*m+1)
  		 printf("%d,",A[i][j]);
  	
		}	
		
	i=p;	
	for(j=m-(p+2);(p+1)<=j;j--)
	       {
			cont=cont++;
  		 if(cont<n*m+1)
  		 printf("%d,",A[i][j]);	
			
		}
		

      }

  	
  	
  	system ("PAUSE");
  	return 1;
  }
