#include <stdio.h> // write using function to calculate area of square,rectangle & circle.

int areasq(int s);
int arearect(int l, int b);
float areacir(float r);

int main() {
    int s=12,l=20,b=10;
    float r=25;
    printf("square: %d\n", areasq(s));
    printf("rectangel: %d\n", arearect(l,b));
    printf("circle: %f\n", areacir(r));
    return 0;
}

int areasq(int s){
    return s*s;
}
int arearect(int l, int b){
    return l*b;
}
float areacir(float r){
    float a=3.14*r*r;
    return a;
}