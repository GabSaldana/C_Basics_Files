#include <stdio.h>
#include <stdlib.h>
float A,B,C;
int main(int argc, char *argv[])

{
  printf("Introdusca un numero\n");
  scanf("%f",&A);	
  printf("Inserte otro numero\n");
  scanf("%f",&B);
  printf("usuario inserte un tercer numero \n");
  scanf("%f",&C);
  
  if(A>B & A>C)
  { 
  printf("ELMPRIMER NUMERO ES %f\n",A);
     if(B>C)
     {
     printf("EL SEGUNDO NUMERO ES %f\n",B);
	 printf("EL TERCER NUMERO ES %f\n",C);	
     }
    else
     {
  	 printf("EL SEGUNDO NUMERO ES %f\n",C);
	 printf("EL TERCER NUMERO ES %f\n",B);
     }
  
  }
   
   else
   {
   	if(B>A & B>C)
   	{
   	printf("EL PRIMER NUMERO ES %f\n",B);
	   	
	   	if(A>C)
	   	{
	   	 printf("EL SEGUNDO NUMERO ES %f\n",A);
	   	 printf("EL TERCER NUMERO ES %f\n",C);
	   	}
	   	
	   	else
	   	{
	   		printf("EL SEGUNDO ES %f\n",C);
	   		printf("EL TERCER NUMERO ES %f\n",A);
	
	   	}
	  	
	   	
   }
   	else
   	{
   		if(C>A & C>B)
   		{
   			printf("EL PRIMER NUMREO ES%f\n",C);
   			if(A>B)
   			{
   				printf("EL SEGUNDO ES %f\n",A);
   				printf("EL TERCER NUMERO ES %f\n",B);
   			}
   		    else
   		    {
   		    	printf("EL SEGUNDO NUMERO ES %f\n",B);
				printf("EL TERCER NUMERO ES %f\n",A);   
			
   		    }
   		}
   		else
   		{
   			printf("TODOS SON IGUALES\n");
		   }
   		
   	}
   }
  
  
  
  
  
}

