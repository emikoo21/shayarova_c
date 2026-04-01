#include <stdio.h>

int max3(int a, int b, int c){
    if (a > b && a > c){
        return a;
    }
    else if (b > a && b > c){
        return b;
    }
    return c;
}
int main () {
    int x, y, d;
    scanf("%d %d %d", &x, &y, &d);
    printf("%d\n", max3(x, y, d));
    return 0;
}