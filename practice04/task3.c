#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "Hello, World!";
    char* end = str;
    while (*end != '\0') {
        end++;
    }
    end--;
    char* p = end;
    while (p >= str) {
        printf("%c", *p);
        p--;
    }
    printf("\n");
    return 0;
}