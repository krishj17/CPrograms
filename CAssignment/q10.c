#include<stdio.h>   // printf("%d ",(int)pow(5,2));
#include<math.h>

int main(){
    int n=407;
    int save=n,check=n;
    int digit=0,r,sum=0;

    while(check>0){
        digit=digit+1;
        check=check/10;
    }

    while(n>0){
        r=n%10;
        sum=sum+ round(pow(r,digit)); // pow stores values in double and sometimes the value becomes 124.9999,              
        n=n/10;                       // so here if we try to convert it into an integer then it will store 124.
    }                                 // Thus, we have to use round function to round it up to 125.
    
    if(sum==save){
        printf("Its armstrong no");
    }
    else{
        printf("Its not a armstrong no");
    }
    return 0;
}
