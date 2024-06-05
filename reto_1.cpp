#include <stdio.h>
#include <stdbool.h>
#include <iostream>

using namespace std;

struct persona {
    char nombre[30];
    char apellido[30];
    int edad;
};


persona get_info() { 
   persona temp;
   
   cout << "Ingrese un nombre: ";
   fscanf(stdin,"%s",temp.nombre);
   fflush(stdin);

   cout << "\nIngrese un apellido: ";
   fscanf(stdin,"%s",temp.apellido);
   fflush(stdin);

   cout << "\nIngrese la edad: ";
   fscanf(stdin,"%d",&temp.edad);
   fflush(stdin);

   return temp;
}


int main() {
    FILE *archivo = fopen("archivo.txt","w");
    FILE *archivo_binario = fopen("archivo_binario.bin","w");

    if (archivo == NULL) {
        cout << "Error al abrir archivo";
        return 1;
    }

    persona persona1 = get_info();
    persona persona2;
    persona *p_persona1 = &persona1;

    fwrite(p_persona1,1,sizeof(persona),archivo_binario);
    fprintf(archivo,"%s \n%s\n%d",persona1.nombre,persona1.apellido,persona1.edad);

    


    fclose(archivo);
    fclose(archivo_binario);

    FILE *archivo2 = fopen("archivo.txt","r");
    fscanf(archivo, "%s", persona2.nombre);
    fscanf(archivo, "%s", persona2.apellido);
    fscanf(archivo, "%d", &persona2.edad);
    
    cout <<persona2.nombre;

    fclose(archivo2);
    
 
    return 0;
}

