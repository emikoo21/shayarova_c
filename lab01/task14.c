#include <stdio.h>
int main() {
    int a, b, c;
    printf("Адреса переменных:\n");
    printf("a: %p\n", (void*)&a);
    printf("b: %p\n", (void*)&b);
    printf("c: %p\n", (void*)&c);
    printf("\nРазница между адресами:\n");
    printf("b - a = %ld байт\n", (char*)&b - (char*)&a);
    printf("c - b = %ld байт\n", (char*)&c - (char*)&b);
    printf("c - a = %ld байт\n", (char*)&c - (char*)&a);
    printf("\nОБЪЯСНЕНИЕ:\n");
    printf("Переменные располагаются в стеке последовательно\n");
    printf("Каждая переменная int занимает %lu байт\n", sizeof(int));
    printf("Разница между адресами обычно кратна размеру int\n");
    printf("Это связано с выравниванием (alignment) для быстрого доступа\n");
    return 0;
}
