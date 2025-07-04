#include <stdio.h>   

int main() {
    
    for(int i=1; i<=4; i++) {
        
        for(int k=4;k>=i;k--){
            printf(" ");
        }
        for(int n=1; n<=i; n++) {
            if(i==3 && n==2){
                printf("1 ");
                printf("2 ");
                printf("1 ");
            }
            if(i==4 && n==2|| n==3){
                printf("3 ");
            }
            printf("* ");
        }
        printf("\n");
    }
}
