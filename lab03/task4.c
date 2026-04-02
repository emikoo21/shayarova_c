#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    int *arr = NULL;
    int *tmp = NULL;
    scanf("%d", &n);
    
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL){
        printf("Error\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &m);
    
    tmp = (int*)realloc(arr, m * sizeof(int));
    if (tmp != NULL){
        arr = tmp;
    } else {
        printf("Error realloc\n");
        free(arr);
        return 1;
    }
    
    if (m > n){
        for (int i = n; i < m; i++) {
            scanf("%d", &arr[i]);
        }
    }
    
    printf("New: ");
    for (int i = 0; i < m; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Size 3\n");
    tmp = (int*)realloc(arr, 3 * sizeof(int));
    if (tmp != NULL){
        arr = tmp;
    }
    
    printf("After: ");
    for (int i = 0; i < 3; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    arr = NULL;
    
    return 0;
}