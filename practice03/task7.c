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
    double b = 0;
    for (int i = 0; i < n; i++) {
        b += a[i];
    }
    double cr = b / n;
    printf("%lf\n", cr);
    return 0;
}