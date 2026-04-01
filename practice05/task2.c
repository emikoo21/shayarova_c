#include <stdio.h>
#include <windows.h>

int sum(int a, int b) {
    return a + b;
}
int main () {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d + %d = %d", x, y, sum(x, y));
    return 0;
}