#include <stdio.h>
#include <iostream>

using namespace std;


struct person
{
    char nombre[30];
    int edad;
    float altura;
    float peso;
};


int main() {
    
    person person1;
    cout << sizeof(int)<<endl;
    cout << sizeof(float)<<endl;

    cout << sizeof(person1);
    

    return 0;
}