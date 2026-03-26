#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    scanf("%d", &n);
    int a [n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int m = 0;
    int b = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > m) {
            m = a[i];
            b = i;
        }
    }
    for (int i = 0; i < n; i++){
        if (i > b){
            a[i] = 0;
            printf("%d ", a[i]);
        } else {
            printf("%d ", a[i]);
        }
    }
    return 0;
}