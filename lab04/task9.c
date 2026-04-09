#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char ch;
    
    fp = fopen("test.txt", "w+");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    fprintf(fp, "HelloWorld");
    fseek(fp, 5, SEEK_SET);
    ch = getc(fp);
    printf("Char at pos 5: %c\n", ch);
    fclose(fp);
    
    return 0;
}