#include <stdio.h>
#include <windows.h>

int is_even(int x) {
    int s = 0;
    if (x % 2 == 0) {
        s = 1;
    }
    return s;
}
int main () {
    int a;
    scanf("%d", &a);
    printf("%d", is_even(a));
    return 0;
}