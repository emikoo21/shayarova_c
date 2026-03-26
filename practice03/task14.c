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
    int m = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > m) {
            m = a[i];
        }
    }
    int b = 0;
    for (int i = 0; i < n; i++) {
        if ((a[i] > b) && (a[i] < m)) {
            b = a[i];
        }
    }
    printf("%d\n", b);
    return 0;
}