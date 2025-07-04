# include <stdio.h>
                // keep taking input from user until he enters an odd number odd=1,3,5
int main() {
    int n; // n=2;
    printf("enter first no: ");
    scanf("%d",n);

    while(n>0) {
       
        if(n%2){
            printf("odd");
            break;
        }
        else{
            printf("even \n");
            printf("enter number: ");
            scanf("%d",&n);
        }

    }
    return 0;
}