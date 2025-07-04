#include<stdio.h>
#include<conio.h>

void main() {
    int a, b, choice;
    int add,sub,multiply,divide,modlus;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf(" Add = 1 \n Subtract = 2\n Multiply = 3 \n Divide = 4 \n Modlus = 5 \n");
    printf("Enter your Choice:");
    scanf("%d", &choice);

    switch(choice) {
    case 1:
        add=a+b;
        printf("%d", add); 
        break;
    case 2: 
        sub=a-b;
        printf("%d", add);
        break;
    case 3:
        multiply=a*b;
        printf("%d", multiply);
        break;
    case 4:
        divide=a/b;
        printf("%d", divide);
        break;
    case 5:
        modlus=a%b;
        printf("%d", modlus);
        break;
    default:
        printf("invalid choice");
        break;
    }
    getch();
}