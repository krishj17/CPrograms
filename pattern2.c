#include<stdio.h>
#include<string.h>

int main(){
    int i,j,k,l;
    int a;
    for(i=1; i<=5; i++){
        for(k=5; k>=i; k--){
            printf("  ");
        }
        for(j=1; j<=i; j++){
            printf("%d ",j);
        }
        j--;
        while(j>1){
            j--;
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}