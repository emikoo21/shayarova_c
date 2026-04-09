#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int arr[] = {1, 2, 3, 4, 5};
    int read[5];
    
    fp = fopen("data.bin", "wb");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    fwrite(arr, sizeof(int), 5, fp);
    fclose(fp);
    
    fp = fopen("data.bin", "rb");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    fread(read, sizeof(int), 5, fp);
    fclose(fp);
    
    for (int i = 0; i < 5; i++){
        printf("%d ", read[i]);
    }
    printf("\n");
    
    return 0;
}