#include<stdio.h>           // Calculate LCM of two numbers.
int main(){         
    int n1=15,n2=25;
    int i=2, a=1, lcm;
    

    while(n1>1 || n2>1){
        if(n1%i==0 && n2%i==0){
            a=a*i;
            n1=n1/i;
            n2=n2/i;
        }
        else if(n1%i==0){
            a=a*i;
            n1=n1/i;
        }
        else if(n2%i==0){
            a=a*i;
            n2=n2/i;
        }
        else{
            i++;
        }   
    }
    printf("LCM=%d",a);
    return 0;
}
