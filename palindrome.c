#include<stdio.h> // WOP to check if a number is palindrome or not.

void main(){
    int n=76567;
    int original = n;
    int r, rn=0;
    while(n>0){
        r=n%10;
        rn=(rn*10)+r;
        n=n/10;
    }
    if(rn==original)
        printf("Its palindrome no");
    else
        printf("Its not a palindrome no");
}