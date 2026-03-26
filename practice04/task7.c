#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "hello world";
    char symbol;
    printf("Введите символ для удаления: ");
    scanf("%c", &symbol);
    char* p = str;
    while (*p != '\0') {
        if (*p != symbol) {
            printf("%c", *p);
        }
        p++;
    }
    printf("\n");
    return 0;
}