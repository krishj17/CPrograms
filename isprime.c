#include <stdio.h> // check if a number is prime or not.
int isPrime(int N)
{
    if (N<=1) {
        return 0;
    }

  
    for (int i=2; i<N; i++) {

        if (N%i==0) {
            return 0;
        }
    }

    return 1;
}

int main() {

    int N = 25;
    printf("Is %d prime?\n", N);

    if (isPrime(N)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}