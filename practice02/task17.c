#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b = 1;
    scanf("%d", &a);
    while (a != 0) {
        if (a > 0) {
            b *= a;
        }
        scanf("%d", &a);
    }
    printf("%d\n", b);
    return 0;
}