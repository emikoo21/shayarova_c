#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "aaabbcc";
    char* p = str;
    while (*p != '\0') {
        printf("%c", *p);
        while (*p == *(p + 1)) {
            p++;
        }
        p++;
    }
    printf("\n");
    return 0;
}