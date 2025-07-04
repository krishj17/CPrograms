#include <stdio.h>
void revarry(int arr[], int n);
int main() {
    int arr[4]={10,20,30,40};
        revarry(arr, 4);
    return 0;
}

void revarry(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int first=arr[i];
        int second=arr[n-i-1];
        arr[i]=second;
        arr[n-i-1]=first;
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}