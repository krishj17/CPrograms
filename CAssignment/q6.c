#include<stdio.h>   // 0 1 1 2 3 5 8 13
                    // 0 1 2 3 4 5 6 7
int main(){
    int n=7,sum=0; 
    int n1=0, n2=1;
    while(n!=-1){
        printf("%d ",n1);
        sum=n1+n2;
        n1=n2;
        n2=sum;
        n--;
    }
      
    return 0;
}
