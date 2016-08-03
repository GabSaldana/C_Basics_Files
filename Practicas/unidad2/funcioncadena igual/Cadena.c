
#include <stdio.h>
#include <stdlib.h>
//prototipo
int igual(char str[],char cad[]);	
int main(int argc, char *argv[])
{

	char str[30],cad[30],res;
	printf("Introduce tu cadena\n");
	gets(str);
	printf("Introduce tu segunda cadena\n");
	gets(cad);
	//llamada
	res=igual(str,cad);	
	printf("Si la cadena ES igual--> 1\n");
	printf("Si la cadena NO es igual--> 0\n");
	printf("%d\n",res);	
  	system("PAUSE");
	return 0;
}
int igual(char str[],char cad[])
{
	int i,res;
	res=0;
	for(i=0;i<30;i++)
    {
     if(str[i]==cad[i])
     {
	   res=1;
    }
	else
	{
	res=0;
	break;	
	}
    if(str[i] == '\0')
    break;
    }
		
	return res;

}
