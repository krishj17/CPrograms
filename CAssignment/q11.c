#include<stdio.h>

int main(){

    int n1=20,n2=2;
    int add,min,mul,div,mod;
    char ch;
    printf("Enter (+ - * / %): ");
    scanf("%c",&ch);

    switch(ch){
        case '+':
            add=n1+n2;
            printf("%d ",add);
            break;
        case '-':
            min=n1-n2;
            printf("%d ",min);
            break;
        case '*':
            mul=n1*n2;
            printf("%d ",mul);
            break;
        case '/':
            div=n1/n2;
            printf("%d ",div);
            break;
        case '%':
            mod=n1%n2;
            printf("%d ",mod);
            break;
        default:
            printf("Wrong choice");
    }

    return 0;
}
