#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int ch;
    
    fp = fopen("test.txt", "r");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    
    while ((ch = getc(fp)) != EOF){
        putchar(ch);
    }
    
    if (feof(fp)){
        printf("\nEOF reached\n");
    }
    if (ferror(fp)){
        printf("Read error\n");
    }
    
    fclose(fp);
    
    return 0;
}