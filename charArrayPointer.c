#include<stdio.h>

void main(){
    char *ch[10]={"krish","jariwala"};

    printf("%s", (*(ch+1)+4));
}