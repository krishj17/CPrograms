#include<stdio.h>           // Calculate LCM.
int main(){         
    int n=12;
    int i=2, a=1;
    while(n>1){
        if(n%i==0){
            //a=a*i;
            printf("%d ",i);
            n=n/i;
        }
        else{
            i++;
        }   
    }
    return 0;
}