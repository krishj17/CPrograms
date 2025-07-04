#include <stdio.h>
#include <conio.h>
#include <string.h>  
void main()   
{  
    char str1[10]=("hello");
    char str2[10]=("world");
    char str3[10];

    printf("string length = %d \n", strlen(str1));

    strcpy(str3,str1);
    printf("string copy = %s \n", str3);

    strcat(str1,str2);
    printf("string concatnet = %s \n", str1);

    strcmp(str1,str2);
    printf("string compare = %d \n", strcmp(str1,str2));
   
}  