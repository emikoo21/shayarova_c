#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b = 0;
    scanf("%d", &a);
    int c;
    for (int i = 0; i < a; i++) {
        scanf("%d", &c);
        if (c > 10) {
            printf("%d\n", c);
        }
    }
    return 0;
}