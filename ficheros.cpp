#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
   // Abrimos o creamos archivo


    FILE *file = fopen("archivo.txt", "r");

    char arr[30];

    // Verificamos que se abrio o creo correctamente

    if (file == NULL) {
        cout << "Error al abrir archivo";
        return 1;
    }

    scanf("%s", arr);
    
    // modificamos archivo, en este caso escribimos el string dado
    fprintf(file, "%s",arr);

    // Cerramos archivo

    fclose(file);


    return 0;
}