#include <stdio.h>
#include <windows.h>

int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);  
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Сумма: %d + %d = %d\n", a, b, a + b);
    printf("Разность: %d - %d = %d\n", a, b, a - b);
    printf("Произведение: %d * %d = %d\n", a, b, a * b);
    printf("Деление: %d / %d = %d\n", a, b, a / b);
    return 0;
}