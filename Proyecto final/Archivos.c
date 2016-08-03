#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sRegistro{
        char Nombre[30];
        int Edad;
        float Sueldo;
        } reg;
        
        
void CrearFichero(FILE*,char[]);
void InsertarDatos(FILE*,char[]);
void LeerDatos(FILE*,char[]);
        
int main(int argc, char *argv[])
{
  int op,i;
  char nom[10];
  char dir[30];
  FILE *Fichero;
  do{
  system("CLS");
  printf("1.Crear Archivo\n2.Insertar datos\n3.Leer Datos\n4.Salir\nSu opcion es: ");
  scanf("%d",&op);
  switch(op){
             case 1:
                  printf("\nDame un nombre para el archivo\n");
                  scanf("%s",&nom);
                  strcat(dir,"./Nombre/");
                  strcat(dir,nom);
                  CrearFichero(Fichero,dir);
                  break;
             case 2:
                  printf("\nDame un nombre para el archivo\n");
                  scanf("%s",&nom);
                  strcat(dir,"./Nombre/");
                  strcat(dir,nom);
                  InsertarDatos(Fichero,dir);
                  break;
             case 3:
                  printf("\nDame un nombre para el archivo\n");
                  scanf("%s",&nom);
                  strcat(dir,"./Nombre/");
                  strcat(dir,nom);
                  LeerDatos(Fichero,dir);
                  break;
             }
    for(i=0;i<30;i++)
    dir[i]='\0';
  }while(op!=4);
  system("PAUSE");	
  return 0;
}

void CrearFichero(FILE *Fichero,char nom[]){
   Fichero=fopen(nom,"r");
   if(!Fichero)
   {
     Fichero=fopen(nom,"w");
     printf("\nEl fichero se a creado\n");
   }
   else
     printf("\nEl fichero ya existe\n");
   fclose(Fichero);
     system("PAUSE");    
}

void InsertarDatos(FILE *Fichero,char nom[]){
 reg n;
 reg *p;
 p=&n;
 Fichero=fopen(nom,"a");
 if(Fichero==NULL)
 {
   printf("\nEl fichero no exixte, por favor cree el archivo antes\n");
   return;
 }
 printf("\nDame un nombre\n");
 scanf("%s",&p->Nombre);
 printf("\nDame la edad\n");
 scanf("%d",&p->Edad);
 printf("\nDame el Sueldo\n");
 scanf("%f",&p->Sueldo);
 fwrite(p,sizeof(struct sRegistro),1,Fichero);
 fclose(Fichero);
   system("PAUSE");
}

void LeerDatos(FILE *Fichero,char nom[]){
 int numero=1;
 reg n;
 reg *p;
 p=&n;
 Fichero=fopen(nom,"r");
 if(Fichero==NULL)
 {
   printf("\nEl fichero no exixte, por favor cree el archivo antes\n");
   return;                
 }     
 fread(p,sizeof(struct sRegistro),1,Fichero);
 printf("\nNumero\tNombre\tEdad\tSueldo\n");
 while(!feof(Fichero))
 {
  printf("\n%d\t%s\t%d\t%.2f\n",numero,p->Nombre,p->Edad,p->Sueldo);
  fread(p,sizeof(struct sRegistro),1,Fichero);
  numero++;                   
 }
 fclose(Fichero);
   system("PAUSE");
}
