#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b = 0;
    scanf("%d", &a);
    while (a != 0) {
        b += 1;
        scanf("%d", &a);
    }
    printf("%d\n", b);
    return 0;
}