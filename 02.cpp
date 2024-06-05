#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    
    int p = 100;
    int* ptr = &p;

    cout << p<<endl;
    cout << &p<<endl;

    cout << ptr<<endl;
    cout << *ptr<<endl;

    return 0;
}