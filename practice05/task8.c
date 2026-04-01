#include <stdio.h>

int sum_to_n(int n){
    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum += i;
    }
    return sum;
}
int main () {
    int a;
    scanf("%d", &a);
    printf("%d\n", sum_to_n(a));
    return 0;
}