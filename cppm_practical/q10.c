#include <stdio.h>

int main() {
    // first loop is for printing the rows
    for (int i=0; i<5; i++) {

        // loop for printing leading whitespaces
        for (int j=5; j>i; j--) {
            printf("@");
        }

        // loop for printing * character
        for (int k=0; k<=i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}