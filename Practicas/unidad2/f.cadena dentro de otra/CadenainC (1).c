#include <stdio.h>
#include <stdlib.h>
//prototipo
int dentro(char[],char[],int,int);	
int main(int argc, char *argv[])
{
	int cont1,cont2,contaux=0,r=1,res,i;
	char  C1[30],C2[30];
	printf("\nDame tu cadena 1");
	gets(C1);
	printf("\nDame tu cadena 2");
	gets(C2);
	
	for(i=0;i<30;i++)
	{
	if(C1[i]!='\0')
	cont1+=1;
	if(C2[i]!='\0')
	cont2+=1;
	}
	
	res=dentro(C1,C2,cont1,cont2);
	printf("Si la cadena esta dentro-->1\n");
	printf("Si la cadena NO esta dentro-->0\n");
	printf("%d\n",res);
	
	
  	system("PAUSE"); 
	return 0;
}

int dentro(char C1[],char C2[], int cont1, int cont2)

{
  int i,contaux=0,res;	
  if(cont1>cont2)	
  for(i=0;i<cont1;i++)
  {
	if(C2[contaux]==C1[i])
	{
	  contaux+=1;
	  res=1;
	  if(C2[contaux]=='\0')
	  break;
	}
    else
    {
   	  contaux=0;
      res=0;
    }
  }
  else
	for(i=0;i<cont2;i++)
    {
	  if(C1[contaux]==C2[i])
	  {
	    contaux+=1;
	    res=1;
	    if(C1[contaux]=='\0')
	    break;	    
      }
      else
      {
        res=0;
     	contaux=0;
      }
     }

return res;
}
