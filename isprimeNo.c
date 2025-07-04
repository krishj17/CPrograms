#include<stdio.h>      // chec if a no is prime or not.    
int main(){         
    int n=7,i;
    for(i=2; i<n; i++){
        if(n%i==0){
            printf("its not a prime no");
            return 0;
        }
    }
    printf("its a prime no");
    return 0;
}
