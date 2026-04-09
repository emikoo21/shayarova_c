#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    
    fp = fopen("test.txt", "w");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    printf("File has been opened successfully\n");
    fclose(fp);
    
    return 0;
}