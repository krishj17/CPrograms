#include<stdio.h> // Lets see how array and pointers are the same based on functionality.

void main(){
    int a[]={6,2,1,5,3};
    int *ptr;
    ptr=a; // here pointer ptr stores address of first element of a. Thus here there is no need to use (&) symbol.

    printf("%d ", a); // prints address of 1st element of a
    printf("%d ", a[0]); // prints value of 1st element of a
    printf("%d ", ptr); // prints address of 1st element of a
    printf("%d ", *ptr); // prints value of 1st element of a

    printf("%d ", a+1); // prints address of 2nd element of a
    printf("%d ", *(a+1)); // prints value of 2nd element of a
    printf("%d ", *(ptr+1)); // prints value of 2nd element of a
    // Thus now we can say that both array and pointers are the same.
}