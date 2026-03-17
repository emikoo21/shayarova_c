#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a;
    scanf("%d", &a);
    for (int i = a; i >= 1; i--) {
        if (i % 4 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}