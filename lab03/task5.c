#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, index;
    int *arr = NULL;
    int *tmp = NULL;
    scanf("%d", &n);
    
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL){
        printf("Error\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &index);
    
    for (int i = index; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    
    n--;
    
    tmp = (int*)realloc(arr, n * sizeof(int));
    if (tmp != NULL){
        arr = tmp;
    }
    
    printf("After: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    arr = NULL;
    
    return 0;
}