#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "password123";
    char* p = str;
    int hasDigit = 0;
    int hasLetter = 0;
    while (*p != '\0') {
        if (*p >= '0' && *p <= '9') {
            hasDigit = 1;
        }
        if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')) {
            hasLetter = 1;
        }
        p++;
    }
    if (hasDigit && hasLetter) {
        printf("Пароль надежный\n");
    } else {
        printf("Пароль ненадежный\n");
    }
    return 0;
}