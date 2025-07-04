#include <stdio.h>

int main() {
    int r=5;
    // outer loop to print the rows
    for(int i=1; i<=r; i++) {

        // inner loop to print the numbers
        for(int j=1; j<=i; j++) {
        printf("%d ", j); 
        }

        printf("\n");
    }
    return 0;
}
