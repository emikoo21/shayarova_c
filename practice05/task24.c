#include <stdio.h>

void calc(int a, int b, int *sum, int *mul){
    *sum = a + b;
    *mul = a * b;
    printf("%d + %d = %d\n", a, b, *sum);
    printf("%d * %d = %d\n", a, b, *mul);
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int c, d;
    calc(x, y, &c, &d);
    return 0;
}