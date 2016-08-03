#include <stdio.h>
#include <stdlib.h>
void fisica(void);
void quimica(void);
void matematicas(void);

int main(int argc, char *argv[])
{
    int opcion;
  
  do{
		printf("\nMenu General");
		printf("\n1. Fisica");
		
		printf("\n2. Quimica");
		printf("\n3. Matematicas");
		printf("\n4. Salir");
		printf("\nIngresa tu opcion: ");
		//opcion=getchar();
		scanf("%d", &opcion);
		system("CLS");
		printf("\nOpcion seleccionada: %d\n", opcion);
		switch(opcion)
		              {
                       case 1:
                            fisica();
                            break;
                       case 2:
                            quimica();
                            break;
                       case 3:
                            matematicas();
                            break;
                             
                            
                                            
                      }                 
		system("PAUSE");
		fflush(stdin);
		system("CLS");
  }while(opcion!=4);
	//system("PAUSE");
	printf("Adios\n\n");
    system("PAUSE");	
    return 1;
}
void fisica(void)
{
    int op1;
    float f,a,cm,m;
    
    printf("\n0. Fisica");
			do{
			printf("\n1. Calculo de la masa a partir de la aceleracion");
			printf("\n2. Convertircm a metros");
			printf("\n3. Salir");
			printf("\nIngresa tu opcion: ");
			scanf("%d", &op1);
			
			system("CLS");
			printf("\nOpcion seleccionada: %d\n", op1);
		
		fflush(stdin);
		system("CLS");
	
		if(op1==1){
	    	
	printf("\ndame la fuerza ");
			scanf("%f",&f);
			printf("\ndame la aceleracion ");
			scanf("%f",&a);
			m=a/f;
			printf("\nla masa es%f",m);
			
			}
	if(op1==2)
	{

	printf("\nDame los cm");
			scanf("%f",&cm);
			m=cm/100;
			printf("\nLos m son %f",m);
        }
			}while(op1!=3);
	    printf("Adios\n");
	    system("PAUSE");	
   
}
void quimica(void)
{
    int op2;
    float mol,l,kg,mi;
    
    printf("\n0. Quimica");
			do{
			printf("\n1. Calculo de la molaridad");
			printf("\n2.Conversion litros a kg");
			printf("\n3. Salir");
			printf("\nIngresa tu opcion: ");
			scanf("%d", &op2);
			system("PAUSE");
			system("CLS");
			printf("\nOpcion seleccionada: %d\n", op2);
		
		fflush(stdin);
		system("CLS");
	
		if(op2==1){
	    	
	printf("\ndame la cantidad de moles ");
			scanf("%f",&mol);
			printf("\ndame los litros ");
			scanf("%f",&l);
			mi=mol/l;
			printf("\nla masa es%f",mi);
			
			}
	if(op2==2)
	{

	printf("\nDame los litros");
			scanf("%f",&l);
			kg=1*l;
			printf("\nLos kg son %f",kg);
        }
			}while(op2!=3);
	    printf("Adios\n");
	    system("PAUSE");	
 
}
void matematicas(void)
{
    int op3;
    float n,r,cm,m;
    
    printf("\n0. Matematicas");
			do{
			printf("\n1. raíz cuadrada");
			printf("\n2. Convertir cm a metros");
			printf("\n3. Salir");
			printf("\nIngresa tu opcion: ");
			scanf("%d", &op3);
			system("PAUSE");
			system("CLS");
			printf("\nOpcion seleccionada: %d\n", op3);
		
		fflush(stdin);
		system("CLS");
	
		if(op3==1){
	    	
	printf("\ndame el numero ");
			scanf("%f",&n);
			r=sqrt(n);
			printf("\nla raiz es%f",r);
			
			}
	if(op3==2)
	{

	printf("\nDame los cm");
			scanf("%f",&cm);
			m=cm/100;
			printf("\nLos m son %f",m);
        }
			}while(op3!=3);
	    printf("Adios\n");
	    system("PAUSE");	
    
}

