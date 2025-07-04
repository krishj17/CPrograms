#include <stdio.h>    // & means - address of || 

int main() {
    char age[]="hello";
    char *ptr;   // pointer decleration.
    ptr = &age[0]; // &age means address of age. here ptr and &age stores address of age variable.

    printf("%d\n", *ptr);   // prints value of age variable
    printf("%d\n", ptr);    // prints address of age variable
    printf("%u\n", &age);   // prints address of age variable
    printf("%d\n", age);    // prints value of age variable
    return 0;
}


