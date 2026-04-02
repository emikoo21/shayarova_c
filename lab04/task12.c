#include <stdio.h>
#include <stdlib.h>

struct Person{
    char name[100];
    int age;
};

int main(){
    FILE *fp;
    struct Person p;
    struct Person read_p;
    int choice;
    
    printf("1 - Write, 2 - Read\n");
    printf("Choice: ");
    scanf("%d", &choice);
    getchar();
    
    if (choice == 1){
        printf("Name: ");
        fgets(p.name, sizeof(p.name), stdin);
        for (int i = 0; p.name[i] != '\0'; i++){
            if (p.name[i] == '\n'){
                p.name[i] = '\0';
                break;
            }
        }
        printf("Age: ");
        scanf("%d", &p.age);
        
        fp = fopen("database.bin", "wb");
        if (fp == NULL){
            printf("Error\n");
            return 1;
        }
        fwrite(&p, sizeof(struct Person), 1, fp);
        fclose(fp);
        printf("Written\n");
    }
    else if (choice == 2){
        fp = fopen("database.bin", "rb");
        if (fp == NULL){
            printf("Error\n");
            return 1;
        }
        while (fread(&read_p, sizeof(struct Person), 1, fp) == 1){
            printf("%s, %d\n", read_p.name, read_p.age);
        }
        fclose(fp);
    }
    
    return 0;
}