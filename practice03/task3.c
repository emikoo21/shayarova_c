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
    int m = a[0];
    int b = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < m) {
            m = a[i];
            b = i;
        }
    }
    printf("Наименьшее число: %d, индекс: %d\n", m, b);
    return 0;
}