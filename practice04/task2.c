#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "Hello, World!";
    char* p = str;
    int length = 0;
    while (*p != '\0') {
        length++;
        p++;
    }
    printf("Длина строки: %d\n", length);
    return 0;
}