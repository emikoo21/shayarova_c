#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *arr;
    int max, min, sum;
    scanf("%d", &n);
    
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL){
        printf("Error\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    min = arr[0];
    sum = 0;
    
    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
        sum += arr[i];
    }
    
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("Sum: %d\n", sum);
    
    free(arr);
    arr = NULL;
    
    return 0;
}