#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    scanf("%d", &n);
    int a [n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    int b = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            b += 1;
        }
    }
    printf("%d\n", b);
    return 0;
}