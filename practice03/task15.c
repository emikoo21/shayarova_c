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
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += a[i];
        }
    }
    printf("%d\n", sum);
    return 0;
}