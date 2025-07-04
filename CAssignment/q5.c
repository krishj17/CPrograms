#include<stdio.h>

int main(){
    int n=7,sum=1;
    while(n>0){
        sum=sum*n;
        n--;
    }
    printf("%d ",sum);
    return 0;
}
