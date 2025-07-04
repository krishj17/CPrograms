#include <stdio.h>

int main() {
    int n = 5, a=0;  // Number of rows

    // Loop through each row
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 5; j > i; j--) {
            printf("  ");
        }

        // Print the series for the row
        for (int k = 0; k <= i; k++) {
         a=a+1;
            if (a % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}