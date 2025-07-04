#include<stdio.h>
int main(){
    int num=7564, sum=0;

    while(num!=1 && num!=4){            // we have taken num!=4 because if the number  
        while(num>0){                   // enters into an infinite loop then it WILL 
            sum=sum+( (num%10)*(num%10) );  // evantually reach 4. (Its BOUND to reach 4)
            num=num/10;
        }
        num=sum;
        sum=0;
        printf("%d ",num);
    }
    if(num==1)
        printf("its a happy no");
    else
        printf("its not a happy number");

    return 0;
}