#include <stdio.h>
#include <limits.h>

int max_array(int arr[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main () {
    int a;
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++){
        scanf("%d", &b[i]);
    }
    printf("%d\n", max_array(b, a));
    return 0;
}