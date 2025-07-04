#include<stdio.h>        // print prime no between two numbers. 
int main(){         
    int s=3,e=27,j;
    for(s; s<e; s++){

        for(j=2; j<s; j++){
            if(s%j==0){
                break;   
            }
            if(j+1==s){
                printf("%d ",s);
            } 
        }  
    }
    return 0;
}
