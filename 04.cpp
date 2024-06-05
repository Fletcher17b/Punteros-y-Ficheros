#include <stdio.h>
#include <iostream>

using namespace std;


void porValor(int num) {
    num = num + 1;
    cout << "Dentro de la funcion porValor: " << num<<endl;
}


void porReferencia(int *num) {
    *num = *num + 1;
    cout<<endl << "Dentro de la funcion porReferencia: " << *num<<endl;
}

int main() { 

    int numero = 12;
    cout << "OG numba: "<< numero<<endl<<endl;
    porValor(numero);

    cout << "Numero en main despues de pasar por valor: "<<numero<<endl;

    porReferencia(&numero);

    cout << "Numero en main despues de pasar por referencia: "<<numero<<endl;

    return 0;
}
