#include<stdio.h> // WOP to print largest of number in an array.

int main(){
    int arr[5]={10,9,7,4,18};
    int x=arr[0];
    
    for(int i=1; i<5; i++){
        if(x<arr[i]){
            x=arr[i];
        }
    }
    printf("Largest number = %d", x);
    return 0;
}