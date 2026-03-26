#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "Hello, World!";
    char* p = str;
    while (*p != '\0') {
        printf("%c ", *p);
        p++;
    }
    printf("\n");
    return 0;
}