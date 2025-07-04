#include<stdio.h> // compare two strings without using strcmp function.

int check(char ch1[], char ch2[]);
int main(){
    char ch1[]="krish";
    char ch2[]="krish";

    if(check(ch1, ch2)==1){
        printf("same");
    }
    return 0;
}
int check(char ch1[], char ch2[]){
    for(int i=0; ch1[i]!='\0' || ch2[i]!='\0'; i++){
        if(ch1[i]==ch2[i]){
            continue;
        }
        else{
            printf("different");
            return 0;
        }
    }
    return 1;
} 