#include<stdio.h>  // program to print sum of two no using functions.
int sum(int a, int b);

int main() {
    int a=20,b=30;
    printf("%d", sum(a,b));
    
    return 0;
}

int sum(int a,int b) {
    return a+b;
}