#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a;
    scanf("%d", &a);
    int c, m;
    scanf("%d", &c);
    if (c % 2 == 0) {
        m = c;
    } else {
        m = 2;
    }
    for (int i = 1; i < a; i++) {
        scanf("%d", &c);
        if ((c < m) && (c % 2 == 0)) {
            m = c;
        }
    }
    printf("%d\n", m);
    return 0;
}