#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "aaabbc";
    char* p = str;
    int count;
    while (*p != '\0') {
        count = 1;
        while (*(p + 1) == *p) {
            count++;
            p++;
        }
        printf("%c%d", *p, count);
        p++;
    }
    printf("\n");
    return 0;
}