#include <stdio.h>
#include <windows.h>

int square(int x) {
    return x * x;
}
int main () {
    int a;
    scanf("%d", &a);
    printf("%d\n", square(a));
    return 0;
}