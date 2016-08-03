#include <stdio.h>
#include <stdlib.h>
int A ;
int B;
int C;
int main(int argc, char *argv[])
{
  printf("usuario inserta el primer numero \n");
  scanf("%d",&A);
  printf("usuario inserte el segundo numero  \n");
  scanf("%d",&B); 
  printf("usuario inserte el tercer numero  \n");
  scanf("%d",&C);
  
  if(A>C)//if1
  {
 
    if(A>B)//if2 
           printf(" El numero mayor es  %d",A);   
    else //if2
           printf("El numero mayor es %d",B);
  }         
 else //if1
             { 
                  if (B>C)
              {//3
              printf("El numero mayor es %d ",B);
              }//3
              else 
               {//4
               printf ("El  numero mayor es  %d",C);
               }//4
              
              }
     
  system("PAUSE");	
  return 0;
}
