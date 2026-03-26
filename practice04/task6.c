#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "hello world";
    char* p = str;
    int i = 0;
    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            if (i % 2 == 0) {
                printf("%c", *p);
            } else {
                printf("%c", *p - 32);
            }
            i++;
        } else {
            printf("%c", *p);
        }
        p++;
    }
    printf("\n");
    return 0;
}