#include <stdio.h>
#include <stdlib.h>
int subcadena(char*,char*, char C1[], char C2[]);
int main(int argc, char *argv[])
{
    int res;
    
    char  C1[30],C2[30],*p1,*p2;
    
    printf("\nDame tu cadena 1\n");
    gets(C1);
    printf("\nDame tu cadena 2\n");
    gets(C2);
    p1=C1;
    p2=C2;
    res=subcadena(p1,p2,C1,C2);
    if (res)
    printf("Si esta dentro");
    else
    printf("NO esta dentro");
    
    system("PAUSE");
    return 0;
}

int subcadena (char *p1, char *p2,char C1[],char C2[]){
int res,i,L1,L2;
                 

	L1=0;
	L2=0;
	while(*p1!='\0')
	{
	
	L1+=1;
	p1++;
    }
	while(*p2!='\0')
	{

	L2+=1;
	p2++;
   
   }
   
   p1=p1-L1;;
   p2=p2-L2;
   
   if(L1>L2)
   {
   	for(i=0;i<L1;i++)
   	{
   		if(*p2==*p1)
   		{
   			p1++;
   			p2++;
   			res=1;
   			if(*p2=='\0')
   			break;
   		}
   		else
   		{
   			p1++;;
   			res=0;
   		}
   	}
   	
   }
   else
   {
   	for(i=0;i<L2;i++)
   	{
   		if(*p1==*p2)
   		{
   			p2++;
   			p1++;
   			res=1;
   			if(*p1=='\0')
   			break;
   		}
   		else
   		{
   			p2++;
   			res=0;
   		}
   	}
   }
   return res;
}
