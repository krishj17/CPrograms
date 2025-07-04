            // NOTE: Here in the output there is space problem in the last row because
            //       two digit numbers take two space. Example: (--1-) (-15-)
#include<stdio.h>
#include<conio.h>

void main(){
    int i,j,k=1;

    for(i=1; i<=5; i++){

        for(j=1; j<=i; j++){
            printf("%d ", k);
            k=k+1;
        }

        printf("\n");
    }
    getch();
}