#include <stdio.h>

int sum_array(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
int main () {
    int a;
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++){
        scanf("%d", &b[i]);
    }
    printf("%d\n", sum_array(b, a));
    return 0;
}