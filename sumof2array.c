#include<stdio.h>
int main(){
    int arr1[2][2], arr2[2][2], arr3[2][2];

    // INPUT ---------------
    for(int t=1; t<=2; t++){
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                if(t==1){
                    printf("Enter value of array A - [%d][%d]: ", i,j);
                    scanf("%d",&arr1[i][j]);
                }
                else{
                    printf("Enter value of array B - [%d][%d]: ", i,j);
                    scanf("%d",&arr2[i][j]);
                }
            }  
        }
    }

    // PRINTING -------------
    printf("Array A:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n"); 
    }
    printf("Array B:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n"); 
    }

    // SUM --------
    printf("\n\nSum of array A & B is: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}