#include <stdio.h>
int main() {
    int num1, num2;
    printf("Введите два числа: ");
    scanf("%d %d", &num1, &num2);
    if (num2 != 0) {
        printf("%d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Ошибка: деление на ноль!\n");
    }
    return 0;
}
