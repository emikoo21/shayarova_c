#include <stdio.h>

void remove_negatives(int arr[], int n){
    for (int i = 0; i < n; i++){
        if (arr[i] >= 0){
            printf("%d ", arr[i]);
        }
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
    remove_negatives(b, a);
    return 0;
}