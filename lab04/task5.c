#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char str[200];
    int ch;
    
    fgets(str, sizeof(str), stdin);
    
    fp = fopen("test.txt", "w");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    fputs(str, fp);
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    printf("File content: ");
    while ((ch = getc(fp)) != EOF){
        putchar(ch);
    }
    printf("\n");
    fclose(fp);
    
    return 0;
}