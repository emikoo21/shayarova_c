#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a;
    scanf("%d", &a);
    int c, m;
    scanf("%d", &c);
    m = c;
    for (int i = 1; i < a; i++) {
        scanf("%d", &c);
        if (c > m) {
            m = c;
        }
    }
    printf("%d\n", m);
    return 0;
}