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
    int b = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > a[i+1]){
            b = a[i];
            a[i] = a[i+1];
            a[i+1] = b;
            printf("%d ", a[i]);            
        } else {
            printf("%d ", a[i]);
        }
    }
    return 0;
}