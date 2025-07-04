#include <stdio.h>      // h e l l o   w o r l d
#include <string.h>     // 0 1 2 3 4 5 6 7 8 9 10
int main(){
    char str[]="hello world"; // 11
    /* printf("%s",strrev(str)); */
    
    // for journal use strrev----------------
    int j=strlen(str);  // j=11
    char str2[j];     
    
    for(int i=0; i<j; i++){
        str2[i]=str[j-i-1]; // -1 so that it dosent print \0. if it does then it wont print anything after \0.
    }
    str2[j] = '\0';
    printf("%s",str2);
    return 0;
} 
