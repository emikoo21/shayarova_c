#include <stdio.h>

int b(int n){
    int sum = 0;
    while (n != 0){
        n = n / 10;
        sum++;
    }
    return sum;
}
int main () {
   int a;
    scanf("%d", &a);
    printf("%d\n", b(a));
    return 0;
}