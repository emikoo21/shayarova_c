#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *arr;
    scanf("%d", &n);
    
    arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL){
        printf("Error\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    arr = NULL;
    
    return 0;
}