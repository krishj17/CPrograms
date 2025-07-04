#include <stdio.h>
#include<math.h>

int main() {
    int n=153;
    int save=n; //save=153;
    int check=n;
    int a,b=0,p=0;
    // PART 1-------
    while(check>0) {
        p=p+1;
        check=check/10;
    }
    // PART 2-------
    if(p==3){
        while(n>0) {
        a=n%10; // a=3;
        b=a*a*a +b; // b=27+0
        n=n/10; // n=15.3 which is 15 because its int. now loop repeats till n becomes 0.
        }
    }
    else{
        while(n>0) {
            a=n%10; 
            b=pow(a,p) +b; 
            n=n/10; 
        }
    }
    // PART 3-------
    if(b==save)
        printf("it is Armstrong");
    else
        printf("it is not Armstrong");
 
    return 0;
}