#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int ch;
    
    fp = fopen("test.txt", "w");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    putc('A', fp);
    putc('B', fp);
    putc('C', fp);
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