#include <stdio.h> // print sum, product & average using pointer.

void calc(int a, int b, int *sum, int *pdt, int *avg);

int main() {
    int x=20, y=30;
    int sum, pdt, avg;
    calc(x,y,&sum,&pdt,&avg);
    printf("sum = %d\n", sum);
    printf("pdt = %d\n", pdt);
    printf("avg = %d\n", avg);
}

void calc(int a, int b, int *sum, int *pdt, int *avg) {
    *sum = a+b;
    *pdt = a*b;
    *avg = (a+b)/2;
}


