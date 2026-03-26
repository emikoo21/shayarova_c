#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "book";
    char* p = str;
    int found = 0;
    while (*p != '\0' && *(p + 1) != '\0') {
        if (*p == *(p + 1)) {
            found = 1;
            break;
        }
        p++;
    }
    if (found) {
        printf("Да\n");
    } else {
        printf("Нет\n");
    }
    return 0;
}