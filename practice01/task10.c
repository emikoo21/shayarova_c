#include <stdio.h>
#include <windows.h>

int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);  
    int a;
    scanf("%d", &a);
    printf("%d\n", a & 1);
    printf("%d\n", a | 1);
    printf("%d\n", a ^ 1);
    printf("%d\n", ~a);
    return 0;
}