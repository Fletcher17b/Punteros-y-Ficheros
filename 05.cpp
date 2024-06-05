#include <stdio.h>
#include <iostream>

using namespace std;

struct person
{
    int age;
    string id;
};

void modify_personX(struct person a) {
   a.age = 10;

   cout <<"age: "<<a.age<<endl;
}

void modify_personX_BUT_BETTER(struct person *a) {
   a->age = 10;

   cout <<"age but better: "<<a->age<<endl;
}

int main() {
    person person_1;
    person person_2;
    modify_personX(person_1);
    modify_personX_BUT_BETTER(&person_2);
    
    cout << "age: "<<person_1.age<<endl;
    cout << "age: "<<person_2.age<<endl;

    
    return 0;
}