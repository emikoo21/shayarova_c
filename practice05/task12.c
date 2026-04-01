#include <stdio.h>

void print_array(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
int main () {
    int a;
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++){
        scanf("%d", &b[i]);
    }
    print_array(b, a);
    return 0;
}