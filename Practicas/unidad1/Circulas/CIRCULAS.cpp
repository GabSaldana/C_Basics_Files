#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int c;
  printf("Hola, por favor inserta el ultimo digito de tu placa:\n");
  scanf("%d",&c);
  if(c==5 || c==6)
          printf("No circulas el Lunes\n");  
  else
  {
      if(c==7 || c==8)
              printf("No circulas el Martes\n");  
      else
      {
          if(c==3 || c==4)
                    printf("No circulas el Miercoles\n");
          else
          {
              if(c==1 || c==2)
                        printf("No circulas el Jueves\n");
              else
              {
                  if(c==9 || c==0)
                          printf("No circulas el Viernes\n");
                  else
                       printf("No es valida la placa.\n");     
              }    
          }    
      }   
  }    
  system("PAUSE");	
  return 0;
}
