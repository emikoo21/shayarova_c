#include <stdio.h>

int main () {   
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    float x = (float)a / b;
    printf("%.1f\n", x);
    return 0;
}