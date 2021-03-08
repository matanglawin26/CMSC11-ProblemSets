#include <stdio.h>

int main(){
    int a = 10,b=-3,c=-5,x;
    // #1
    x = ++a * b + c-b + 10/c - ++c + a;  // a = 11, c = -4, x = -22
    printf("x1: %d\n",x);

    // #2
    x = a + b + c == 4 + a <= b; // x = 0
    printf("x2: %d\n",x);

    // #3
    x = a || b && ++b + c; // b = -2, x = 1
    printf("x3: %d\n",x);

    // #4
    x = a && b && ++b + c;
    printf("x4: %d\n",x); //b = -2, x = 1
    
    return 0;
}