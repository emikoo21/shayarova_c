#include <stdio.h>
#include <stdlib.h>

struct Person{
    char name[100];
    int age;
};

int main(){
    FILE *fp;
    struct Person people[3] = {{"Vika", 16}, {"Ivan", 20}, {"Anna", 19}};
    struct Person read_people[3];
    
    fp = fopen("people.bin", "wb");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    fwrite(people, sizeof(struct Person), 3, fp);
    fclose(fp);
    
    fp = fopen("people.bin", "rb");
    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    fread(read_people, sizeof(struct Person), 3, fp);
    fclose(fp);
    
    for (int i = 0; i < 3; i++){
        printf("%s, %d\n", read_people[i].name, read_people[i].age);
    }
    
    return 0;
}