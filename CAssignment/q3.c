#include<stdio.h>

int main(){
    int n1=500, n2=150, n3=40;
    if(n1>n2 && n1>n3){
        printf("%d is largest",n1);
    }
    else if(n2>n1 && n2>n3){
        printf("%d is largest",n2);
    }
    else if(n3>n1 && n3>n2){
        printf("%d is largest",n3);
    }
    return 0;
}