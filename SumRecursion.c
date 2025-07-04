#include <stdio.h> // print sum of n number using recursion.

int sum(int n);

int main(){
    int n=5;
    printf("%d", sum(n));
    return 0;
}

int sum(int n) {
    if(n==1){
        return 1;
    }
    int sumnmo= sum(n-1);
    int sumn= sumnmo + n;
    return sumn;
} 