#include<stdio.h>   

int main(){
    int n=49;
    int i;
    for(i=2; i<=n; i++){
        if(i==n){
            printf("its a prime no");
            break;
        }
        if(n%i==0){
            printf("its not a prime no"); 
            break;
        }
    }
    
    return 0;
}
