#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    for (int i = 1; i < 100; i++) {
        if ((i % 3 == 0) && (i % 5 == 0)){
            printf("FizzBuzz\n");
        }
        if ((i % 3 == 0) && (i % 5 != 0)){
            printf("Fizz\n");
        }
        if ((i % 3 != 0) && (i % 5 == 0)){
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}