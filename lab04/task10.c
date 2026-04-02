#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    long size;
    
    fp = fopen("test.txt", "r");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    printf("File size: %ld bytes\n", size);
    fclose(fp);
    
    return 0;
}