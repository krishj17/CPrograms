#include <stdio.h> // print fibonacci series of the number entered.
int fib(int n);

int main() {
    int n=6; 
    printf("ans=%d",fib(n));
    return 0;
}

int fib(int n) {
        if(n==0) {
            return 0;
        }
        if(n==1) {
            return 1;
        }
    int fibs = fib(n-1);
    printf("s%d ",fibs);

    int fibe = fib(n-2);
    printf("e%d ",fibe);
    
    int fibt = fibs + fibe;
    return fibt;
}

