#include <stdio.h>
#include <windows.h>

int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);  
    int a;
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("Четное\n");
    } else {
        printf("Нечетное\n");
    }
    return 0;
}