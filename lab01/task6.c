#include <stdio.h>
int main() {
    int a = 5, b = 2;
    int result_int = a / b;
    printf("Целочисленное деление: %d / %d = %d\n", a, b, result_int);
    float result_float = (float)a / b;
    printf("Деление с float: %d / %d = %.1f\n", a, b, result_float);
    return 0;
}
