#include<stdio.h>   

int main(){
    int n=2573; 
    int r,sum=0;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    printf("%d ",sum);
    return 0;
}
