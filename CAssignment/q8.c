#include<stdio.h>   

int main(){
    int n=25352, save=n; 
    int r,sum=0;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(save==sum){
        printf("Its a palindrome no");
    }
    else{
        printf("Its not a palindrome no");
    }
    return 0;
}
