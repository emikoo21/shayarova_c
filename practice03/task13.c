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
    int b = a[0];
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", a[i+1]);
    }
    printf("%d", b);
    printf("\n");
    return 0;
}