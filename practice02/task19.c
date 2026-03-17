#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a;
    scanf("%d", &a);
    for (int i = 1; i < a; i++) {
        if (i % 2 == 0){
            printf("%d\n", i * i);
        }
    }
    return 0;
}