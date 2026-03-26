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
    int b = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] <= a[i + 1]) {
            b += 1;
        }
    }
    if (b == n - 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}