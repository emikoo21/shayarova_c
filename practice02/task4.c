#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b = 0;
    scanf("%d", &a);
    for (int i = 5; i < a; i += 5) {
        b += i;
    }
    printf("%d\n", b);
    return 0;
}