#include <stdio.h>

int count_even(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0) {
            count += 1;
        }
    }
    return count;
}
int main () {
    int a;
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++){
        scanf("%d", &b[i]);
    }
    printf("%d\n", count_even(b, a));
    return 0;
}