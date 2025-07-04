#include <stdio.h>  // print max of two value using pointer.
void minmax(int x, int y, int *max);
int main() {
    int a=32, b=54, max;
    minmax(a,b,&max);
    printf("maximum = %d", max);
}

void minmax(int x, int y, int *max) {
    if(x>y)
        *max=x;
    else
        *max=y;
}