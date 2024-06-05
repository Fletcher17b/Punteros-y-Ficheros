#include <stdio.h>
#include <stdbool.h>

int main() {

    char arr[] = "Hola!";  
    char *ptr = arr; 
    printf("%c\n", *ptr); 
    printf("%c\n", *(ptr+1));
    printf("%c\n", *(ptr+2));
    printf("%c\n", *(ptr+3));
    printf("%c\n", *(ptr+4));

}

