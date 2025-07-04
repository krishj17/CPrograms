#include <stdio.h>       // Arguments VS Parameters

// Function Declaration
void table(int n);

int main(){
    int n=2;
    table(n);   /* arguments--1)Values that are passed in function call.
                              2)Used to send values.
                              3)also called Actual Parameter. */
}

// Definition
void table(int n){  /*parameters--1)Values in function declaration & definition.
                                  2)Used to receive values.
                                  3)also called formal parameter. */
    for(int i=1; i<=10; i++){
        printf("%d\n",n*i);
    }

}