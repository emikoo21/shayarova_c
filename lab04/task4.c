#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int n1, n2, n3;
    char name[50];
    
    fp = fopen("test.txt", "w");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    fprintf(fp, "%d %d %d\n", 1, 2, 3);
    fprintf(fp, "%s\n", "Hello World");
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    fscanf(fp, "%d %d %d", &n1, &n2, &n3);
    fscanf(fp, "%s", name);
    printf("Numbers: %d, %d, %d\n", n1, n2, n3);
    printf("String: %s\n", name);
    fclose(fp);
    
    return 0;
}