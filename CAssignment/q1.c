#include<stdio.h>

int main(){

    int n1=14, n2=12, temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("n1=%d & n2=%d",n1,n2);

    return 0;
}
