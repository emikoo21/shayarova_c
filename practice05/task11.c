#include <stdio.h>

int sum_digits(int n){
    int sum = 0;
    if (n == 0){
        sum = 0;
        return sum;
    }
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main () {
   int a;
    scanf("%d", &a);
    printf("%d\n", sum_digits(a));
    return 0;
}