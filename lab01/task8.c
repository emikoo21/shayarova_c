#include <stdio.h>
#include <limits.h>
int main() {
    int x = 2147483647;
    printf("x = %d\n", x);
    printf("x + 1 = %d\n", x + 1);
    printf("\nОБЪЯСНЕНИЕ:\n");
    printf("2147483647 - это максимальное значение для int (2^31 - 1)\n");
    printf("При добавлении 1 происходит переполнение\n");
    printf("Бит знака меняется, и число становится минимальным: -2147483648\n");    
    return 0;
}
