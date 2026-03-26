#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "Hello, World!";
    char* p = str;
    while (*p != '\0') {
        char c = *p;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("*");
        } else {
            printf("%c", c);
        }
        p++;
    }
    printf("\n");
    return 0;
}