#include <stdio.h>

int main () {   
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    float x = (float)(a + b + c) / 3;
    printf("%f\n", x);
    return 0;
}