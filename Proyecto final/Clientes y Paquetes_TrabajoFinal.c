#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declaracion de estructuras
typedef struct Cliente{
       char RFC[13];
       char Nombre[60];
       int paq;
       char Tipo[15];
       char Estatus;
       } Cliente;

typedef struct Paquete{
        int numPaquete;
        char nombre[100];
        char des[100];
        float costo;
        } Paquete;
//Declaracion de prototipos de funcion

void marco(void);
void alta(Cliente*,FILE*);//pasamos apuntador tipo estructura y file
void baja(Cliente*,FILE*);//pasamos apuntador tipo file, cadena y apuntador tipo sturct
int buspaq(void);
void paq(void);
void nuevopaq(void);
void menupaq(void);
void fac(char[]);
void Bus(FILE*,char[],Cliente*);//puntero tipo file, cadena y puntero tipo struct
int busbus(FILE*,char[],Cliente*);//puntero tipo file, cadena y puntero tipo struct
int igual(char[],char[]);//dos cadenas
void rep(void);
float imppaq(int,char);


//Funcion Principal//!!!!!!!---- MENU------!!!!!!!!!////////////////////////////////////

int main(int argc, char *argv[])
{
   int op; 
   Cliente n;//estructura tipo cliente
   FILE *Fichero;
   char RFC[13];
   //ABRIMOS EL ARCHIVO Clientes en modo lectura
   Fichero=fopen("Clientes","r");
   if(!Fichero)//si existe entonces...
   Fichero=fopen("Clientes","w");//abrelo para escritura
   fclose(Fichero); //cierralo
   paq();
   do{
           marco();
           printf("\n\t\t\tSelecciona una opcion:\n\t\t\t1.Dar de alta a un nuevo cliente.\n\t\t\t2.Dar de baja a un cliente.\n\t\t\t3.Dar de alta un nuevo paquete.\n\t\t\t4.Facturación.\n\t\t\t5.Busqueda.\n\t\t\t6.Realizar reporte.\n\t\t\t7.Salir\nElija su opcion: ");
           scanf("%d",&op);
           switch(op)
           {
            case 1:
            	//llamada a la funcion dar de alta 
                 fflush(stdin);
				 alta(&n,Fichero);//pasamos la estructura n y elarchivo
                 fflush(stdin);
				 break;
            case 2:
            	//llamada a la funcion dar de baja
                 fflush(stdin);
				 baja(&n,Fichero);//pasamos el fichero y la estructura n(t.cliente)
                 fflush(stdin);
				 break;
            case 3:
            	//llamada a la funcion menu de paquetes y nuevo paquete
            	 fflush(stdin);
				 menupaq();
				 nuevopaq();
				 fflush(stdin);
                 break;
            case 4:
            	//llamada a la fucnion factura
            	 fflush(stdin);
            	 printf("\nPorfi dame un RFC: ");//buscando por RFC
			     scanf("%s",&RFC);
                 fac(RFC);//pasamos el RFC
                 fflush(stdin);
                 break;
            case 5:
            	//llamada a la fucncion busqueda
            	 fflush(stdin);
 			     printf("\nPorfi dame un RFC: ");//buscando por RFC
			     scanf("%s",&RFC);//Guardadndo la cadena RFC para posteriormente compararla
                 Bus(Fichero,RFC,&n);//pasando el archivo, RFC y la estructura n
                 fflush(stdin);
                 break;
            case 6:
                 rep();
                 break;          
          }
             }while(op!=7);
  system("PAUSE");	
  return 0;
}

///////////////////////////////////Marco////////////////////////////////////////////////////
 
 void marco(){
   system("CLS");
   printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
   printf(":::::::::::::::::::::: Instituto--Politecnico--Nacional :::::::::::::::::::::::\n");
   printf("::::::::::::::::::::::: Escuela--Superior--de--Computo ::::::::::::::::::::::::\n");
   printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");    
      }
      
//////////////////////FUNCIÓN DAR DE ALTA/////////////////////////////////////////////////

void alta(Cliente* p,FILE *Fichero){//recibe un apuntador a la estructura Clientey oto al Archivo
 Fichero=fopen("Clientes","a");//abrimos un fichero llamado Clientes en modo escritura al final, si no existe se crea
 if(Fichero==NULL)//si Fichero no existe entonces...
 {
   printf("\nEl fichero no exixte, por favor cree el archivo antes\n");
   return;
 }
     //recibo los valores de
	 marco();
	 menupaq(); 
     printf("\nDame un nombre: \n");
     scanf("%s",&p->Nombre);//lo guarda en el campo nombre
     fflush(stdin);
     printf("Dame un RFC: \n");
     scanf("%s",&p->RFC);//lo guarda en el campo RFC
     fflush(stdin);
     printf("Dame un numero de paquete: \n");
     scanf("%d",&p->paq);//lo guarda en el campo paq
     fflush(stdin);
     printf("Dime el tipo de Cliente que es: \n");
     scanf("%s",&p->Tipo);//lo guarda en el campo Tipo
     fflush(stdin);
     p->Estatus='A';//EL ESTATUS DEL CLIENTE ES DADO DE ALTA
     
 fwrite(p,sizeof(struct Cliente),1,Fichero);//Procedemos a escribir en el Fichero los datos
 fclose(Fichero);//Lo cerramos
   system("PAUSE");	
}

//////////////////////////////////FUNCION BUSQUEDA///////////////////////////////////

void Bus(FILE *Fichero,char RFC[],Cliente *p){//pasamos el apuntador al fichero,la cadena a introducir Y apuntador a la estructura Cliente
 int numero=busbus(Fichero,RFC,p);//llamada a bus bus que regresa un numero
 int r;
 Fichero=fopen("Clientes","r");//ABRIMOS EL ARCHIVO para lectura
 //printf("\n%d",numero);
 fread(p,sizeof(struct Cliente),1,Fichero);//Leemos el Archivo
  do
   {
   	r=igual(RFC,p->RFC);//LLAMADA A LA FUNCION pasamos la cadena y el apuntador a el campo RFC
    if(r==1)//si r vale 1 entonces ...
	{
      if(numero==1){//si numero vale 1 tiene estatus A
       printf("\nNumero\tNombre\t\tRFC\tPaquete\tTipo\tEstatus\n");
       printf("\n%d\t%s\t\t%s\t%d\t%s\t%c\n",numero,p->Nombre,p->RFC,p->paq,p->Tipo,p->Estatus);
       system("PAUSE");
	   fclose(Fichero);
	   return;
      }
      else{
       printf("\nUsuario con RFC -> %s <- dado de baja\n",RFC);
       system("PAUSE");
	   fclose(Fichero);
	   return;
	   }
      //fread(p,sizeof(struct Cliente),1,Fichero);//lee lo primero que se encuentre
    }
    fread(p,sizeof(struct Cliente),1,Fichero);//lo vuelve a leer
   }while(!feof(Fichero));//lo sigue leyendo mientras no se termine el fichero
        printf("\nNo se encontro el usuario con RFC -> %s <-\n",RFC);
     system("PAUSE");
fclose(Fichero);//lo cerramos
}

///////////////FUNCION QUE RETORNA EL NUMERO DE REGISTROS DENTRO///////////////////////////////////////////////////////

int busbus(FILE *Fichero,char RFC[],Cliente *p){
   int r,numero=0;
   Fichero=fopen("Clientes","r");//ABRIMOS EL ARCHIVO EN LECTURA
   fread(p,sizeof(struct Cliente),1,Fichero);//LEEMOS EL ARCHIVO
   do
   {
   	r=igual(RFC,p->RFC);//Checamos el RFC para poder contar que numero tiene SI TIENE 1->A SI TIENE 2 ->B
    if(r==1)
      numero+=1;                   
    fread(p,sizeof(struct Cliente),1,Fichero);//lo LEEMOS
   }while(!feof(Fichero));//Lo seguimos leyendo mientras no se termine el Archivo!
   //printf("\n%d",numero);
   fclose(Fichero);//LO CERRAMOS
   return numero;//regresamos numero SI TIENE 1->A SI TIENE 2 ->B
}

//////////////////FUNCION QUE COMPARA DOS CADENAS////////////////////////

int igual(char str[],char cad[])// recibe a RFC y lo nombra str y recive el valor al que apuntap en el campo RFC
{
	int i,res;
	res=0;
	for(i=0;i<30;i++)
    {
     if(str[i]==cad[i])//Si la cadena RFC en i es igual a RFC en i
     {
	   res=1;
     }
	 else
	 {
	   res=0;
	   break;	
	 }
     if(str[i] == '\0')// si la cadena RFC termino ya no sigas
       break;
    }
	return res;
}

////////////////////FUNCION QUE COLOCA ESTATUS"DADO DE BAJA"//////////////////////////////
  
void baja(Cliente* p,FILE *Fichero){//recibe un apuntador a la estructura Clientey oto al Archivo
 Fichero=fopen("Clientes","a");//abrimos un fichero llamado Clientes en modo escritura al final, si no existe se crea
 if(Fichero==NULL)//si Fichero no existe entonces...
 {
   printf("\nEl fichero no exixte, por favor cree el archivo antes\n");
   return;
 }
     //recibo los valores de 
     printf("Dame un nombre: \n");
     scanf("%s",&p->Nombre);//lo guarda en el campo nombre
     fflush(stdin);
     printf("Dame un RFC: \n");
     scanf("%s",&p->RFC);//lo guarda en el campo RFC
     fflush(stdin);
     printf("Dame un numero de paquete: \n");
     scanf("%d",&p->paq);//lo guarda en el campo paq
     fflush(stdin);
     printf("Dime el tipo de Cliente que es: \n");
     scanf("%s",&p->Tipo);//lo guarda en el campo Tipo
     fflush(stdin);
     p->Estatus='B';//EL ESTATUS DEL CLIENTE ES DADO DE BAJA
 fwrite(p,sizeof(struct Cliente),1,Fichero);//Procedemos a escribir en el Fichero los datos
 fclose(Fichero);//Lo cerramos
   system("PAUSE");	
}

//////////////////////////////FUNCION PAQUETES/////////////////////////////////////////////////////////

void paq(){
   FILE *Fichero;//apuntador fichero
   Paquete n,*p=&n;//apuntador a la direccion de la estrucutra
   int i;
   //ABRIMOS EL ARCHIVO Clientes en modo lectura
   Fichero=fopen("Paquetes","r");
   if(!Fichero)//si existe entonces...
     Fichero=fopen("Paquetes","w");//abrelo para escritura
   else{
   	fclose(Fichero);//si no lo cerramos
   	return;
   }
   fclose(Fichero); //cierralo
   Fichero=fopen("Paquetes","a");//abrimos un fichero llamado Clientes en modo agregar
   if(Fichero==NULL)//si Fichero no existe entonces...
   {
    printf("\nEl fichero no exixte, por favor cree el archivo antes\n");
    return;
   }
   //Primer paquete
   p->numPaquete=1;
   strcat(p->nombre,"PaqueteGuste");//agregamos el nobre al final 
   p->costo=350.49;
   strcat(p->des,"Solo Voz");//agregamos la descripcion
   fwrite(p,sizeof(struct Paquete),1,Fichero);//escribimos lo anterior en el Fichero
   for(i=0;i<100;i++)
   {
    p->nombre[i]='\0';//vaciamos a nombre para volver a escribir
    p->des[i]='\0';//vaciamos a des para volver a escribir
   }
   //Segundo paquete
   p->numPaquete=2;
   strcat(p->nombre,"PaqueteEscoja");
   p->costo=549.99;
   strcat(p->des,"Voz y Video");
   fwrite(p,sizeof(struct Paquete),1,Fichero);
   for(i=0;i<100;i++)
   {
    p->nombre[i]='\0';
    p->des[i]='\0';
   }
   //Tercer paquete
   p->numPaquete=3;
   strcat(p->nombre,"PaqueteEnchufes");
   p->costo=699.99;
   strcat(p->des,"Voz, Video y Datos");
   fwrite(p,sizeof(struct Paquete),1,Fichero);
   
   fclose(Fichero);	
}

///////////////////////////////FUNCION DEBUSQUEDA DE PAQUETES/////////////////////////////////

int buspaq(){ 
 FILE *Fichero;
 Paquete n,*p=&n;
 int numero=1;
 Fichero=fopen("Paquetes","r");//ABRIMOS EL ARCHIVO
 fread(p,sizeof(struct Paquete),1,Fichero);//Leemos el Archivo
 //printf("\n%d\t%s\t\t%s\t%d\n",numero,p->Nombre,p->RFC,p->paq);
 //printf("\nNumero\tNombre\t\tRFC\tPaquete\tTipo\tEstatus\n");
  do
   {  
    numero++;                   
    fread(p,sizeof(struct Paquete),1,Fichero);//lo leemos
   }while(!feof(Fichero));//Lo seguimos leyendo mientras no se termine el Archivo!
 fclose(Fichero);//lo cerramos
 return numero;//REGRESAMOS EL NUMERO De paquetes que hay
}

//////////////////////////////Fucion que imprime el paquete/////////////////////////////////

float imppaq(int numero,char op){
	FILE *Fichero;
	Paquete n,*p=&n;
	Fichero=fopen("Paquetes","r");
	fread(p,sizeof(struct Paquete),1,Fichero);
	do{
		if(numero==p->numPaquete){
			if(op=='S'){
			printf("\nEl nombre del paquete es: %s",p->nombre);
			printf("\nEl costo del paquete es: %.2f",p->costo);
			printf("\nEl costo sin I.V.A: %.2f",p->costo-(p->costo*0.16));
			printf("\nLo que contiene el paquete: %s\n",p->des);
			}
			fclose(Fichero);
			return p->costo;
		}
		fread(p,sizeof(struct Paquete),1,Fichero);
	}while(!feof(Fichero));
	printf("\nNo existe el paquete!!");
	fclose(Fichero);
	return 0;
}

//////////////////////////////FUNCION NUEVO PAQUETE/////////////////////////////////////////

void nuevopaq(){
	FILE *Fichero;
	Paquete n,*p=&n;
 Fichero=fopen("Paquetes","a");//abrimos un fichero llamado Paquetes en modo escritura al final, si no existe se crea
 if(Fichero==NULL)//si Fichero no existe entonces...
 {
   printf("\nEl fichero no exixte, por favor cree el archivo antes\n");
   return;
 }
     
     p->numPaquete=buspaq();// recibe el numero
     strcat(p->nombre,"Paquete");//Colocamos Paquete
     printf("\nDame un nombre para el paquete: \n");
     scanf("%s",&p->nombre);//lo guarda en el campo nombre + Paquete
     fflush(stdin);
     printf("Dame un costo: \n");
     scanf("%f",&p->costo);//lo guarda en el campo costo
     fflush(stdin);
     printf("Dime que servicios quieres para el paquete: \n");
     gets(p->des);//lo guarda en el campo des
     fflush(stdin);
     fwrite(p,sizeof(struct Paquete),1,Fichero);//Lo escribe
     fclose(Fichero);
}

//////////////////////////FUNCION MENU PAQUTES//////////////////////////////////////////////

void menupaq(){
	
	FILE *Fichero;
	Paquete n,*p=&n;
	Fichero=fopen("Paquetes","r");//Lo abre
	marco();
	fread(p,sizeof(struct Paquete),1,Fichero);//Lo lee
	printf("\nNumero\tNombre\t\t\tCosto\tDescripcion");
	do
    {  
     printf("\n%d\t%s\t\t%.2f\t%s",p->numPaquete,p->nombre,p->costo,p->des);//imprimimos lo que tenemos en paquetes               
     fread(p,sizeof(struct Paquete),1,Fichero);//lo volvemos a leer
    }while(!feof(Fichero));
    fclose(Fichero);
}
/////////////////////////////FUNCION DE FATURACION////////////////////////////////////////

void fac(char RFC[]){
	FILE *Fichero;
	Cliente n,*p=&n;
	int numero=busbus(Fichero,RFC,p);//llamada a bus bus que regresa un numero
    int r;
    float costo;
    Fichero=fopen("Clientes","r");//ABRIMOS EL ARCHIVO para lectura
    //printf("\n%d",numero);
    fread(p,sizeof(struct Cliente),1,Fichero);//Leemos el Archivo
    do
    {
    	r=igual(RFC,p->RFC);//LLAMADA A LA FUNCION pasamos la cadena y el apuntador a el campo RFC
        if(r==1)//si r vale 1 entonces ...
	    {
          if(numero==1){//si numero vale 1 tiene estatus A
           marco();
           printf("\n\t\tF A C T U R A");
           printf("\nTip o de cliente: %s",p->Tipo);
		   printf("\nEl nombre del cliente es: %s",p->Nombre);
		   printf("\nEl RFC es: %s",p->RFC);
		   printf("\nEl numero de paquete es: %d",p->paq);
		   costo=imppaq(p->paq,'S');
		   system("PAUSE");
           fclose(Fichero);
           return;
          }
        }
        fread(p,sizeof(struct Cliente),1,Fichero);//lo vuelve a leer
    }while(!feof(Fichero));//lo sigue leyendo mientras no se termine el fichero
    fclose(Fichero);//lo cerramos
    system("PAUSE");
}

/////////////////////////////////FUNCION REPORTE///////////////////////////////////////////

void rep(){
	FILE *Fichero,*Fichero2;
	Cliente n,*p=&n,*p2=&n;
    int r,clientes,i,clientesB;
    float costo,costoB;
    char RFC[13];
    for(i=0;i<13;i++)
         RFC[i]='\0';
    Fichero=fopen("Clientes","r");//ABRIMOS EL ARCHIVO para lectura
    //printf("\n%d",numero);
    fread(p,sizeof(struct Cliente),1,Fichero);//Leemos el Archivo
    do
    {
    	strcat(RFC,p->RFC);
    	r=busbus(Fichero,RFC,p2);//LLAMADA A LA FUNCION pasamos la cadena y el apuntador a el campo RFC
        if(r==1)//si r vale 1 entonces ...
	    {
           clientes++;
		   costo+=imppaq(p->paq,'N');
        }
        else{
        	clientesB++;
        	costoB+=imppaq(p->paq,'N');
        }
        fread(p,sizeof(struct Cliente),1,Fichero);//lo vuelve a leer
        for(i=0;i<13;i++)
         RFC[i]='\0';
    }while(!feof(Fichero));//lo sigue leyendo mientras no se termine el fichero
    printf("\nNumero de clientes dados de Alta: %d",clientes);
    printf("\nGanancias totales de este mes: %.2f\n",costo);
    printf("\nNumero de clientes dados de Baja: %d",clientesB/2);
    printf("\nPerdidas totales de este mes: %.2f\n",costoB/2);
    fclose(Fichero);//lo cerramos
    system("PAUSE");
}
