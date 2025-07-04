#include<stdio.h>
#include<conio.h>

void main(){
    int n=54745,r,rn=0;
    int on=n;
    while(n!=0){
        r=n%10;
        rn=rn*10+r;
        n=n/10;
    }
    if(on==rn){
        printf("yes");
    }
    else {
        printf("no");
    }
    
}