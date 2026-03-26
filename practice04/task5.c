#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "Hello!!! World!!!";
    char* p = str;
    int count = 0;
    while (*p != '\0') {
        if (*p == '!') {
            count++;
        }
        p++;
    }
    if (count > 3) {
        printf("STOP\n");
    } else {
        printf("OK\n");
    }
    return 0;
}