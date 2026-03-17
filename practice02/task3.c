#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a;
    scanf("%d", &a);
    for (int i = 3; i < a; i += 3) {
        printf("%d\n", i);
    }
    return 0;
}