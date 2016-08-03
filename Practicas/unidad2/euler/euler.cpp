#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int factorial(int);
int main(int argc, char *argv[])
{ 
    float i,x,euler,res;
    printf("Dame el valor de x\n");
    scanf("%f",&x);
    euler=0;
    for(i=0;i<x+1;i++)
    {
                       res=factorial(i);
                       euler=(pow(x,i)/res)+euler;
                       } 
    printf("Tu valor es :%f",euler);
    system("PAUSE");
    return 0;                   
    }
                       
   int factorial(int i)
   {
       int  res;
       if(i==0)
       return 1;
       res=i*factorial(i-1);
       return res;
        }
