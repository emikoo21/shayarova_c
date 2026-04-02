#include <stdio.h>
#include <stdlib.h>

struct Person{
    char name[100];
    int age;
};

int main(){
    FILE *fp;
    struct Person p1 = {"Vika", 16};
    struct Person p2;
    
    fp = fopen("person.bin", "wb");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    fwrite(&p1, sizeof(struct Person), 1, fp);
    fclose(fp);
    
    fp = fopen("person.bin", "rb");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    fread(&p2, sizeof(struct Person), 1, fp);
    fclose(fp);
    
    printf("%s, %d\n", p2.name, p2.age);
    
    return 0;
}