#include <stdio.h>

void inc_array(int arr[], int n){
    for (int i = 0; i < n; i++){
        arr[i]++;
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int a;
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++){
        scanf("%d", &b[i]);
    }
    inc_array(b, a);
    return 0;
}