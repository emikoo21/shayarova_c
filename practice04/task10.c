#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "HelloWorld";
    char* p = str;
    int length = 0;
    while (*p != '\0') {
        length++;
        p++;
    }
    p = str;
    int half = length / 2;
    for (int i = 0; i < half; i++) {
        printf("%c", *p);
        p++;
    }
    printf("\n");
    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }
    printf("\n");
    return 0;
}