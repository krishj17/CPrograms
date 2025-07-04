# include <stdio.h> 

int main() {
    int n=153;
    int save=n; //save=153;
    int a,b=0;

    while(n>0) {
        a=n%10; // a=3;
        b=b + a*a*a; // b=27+0
        n=n/10; // n=15.3 which is 15 because its int. now loop repeats till n becomes 0.
    }

    if(b==save)
        printf("it is");
    else
        printf("it is not");

    return 0;
}