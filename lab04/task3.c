#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char str[100];
    
    fp = fopen("test.txt", "w");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    fputs("First\n", fp);
    fputs("Second\n", fp);
    fputs("Third\n", fp);
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    printf("File content:\n");
    while (fgets(str, sizeof(str), fp) != NULL){
        printf("%s", str);
    }
    fclose(fp);
    
    return 0;
}