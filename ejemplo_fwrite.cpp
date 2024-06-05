#include <stdio.h>
#include <iostream>

using namespace std;

struct persona {
   char name[50];

};

int main() {
    
    FILE *fichero = fopen("archivo.txt", "w");

    char variable[] = "Lo que queremos escribir";

    if (fichero == NULL) {
        cout << "Error al abrir archivo";
        return 1;
    }

    fwrite(variable,1,sizeof(variable),fichero);

    remove("fichero.txt");
    
    fclose(fichero);

    return 0;
}