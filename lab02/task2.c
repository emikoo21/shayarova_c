#include <stdio.h>

struct Student{
    char name[100];
    int age;
    float grade;
};

int main(){
    struct Student student[5];
    int max = 0;

    for (int i = 0; i < 5; i++){
        scanf("%s", student[i].name);
        scanf("%d", &student[i].age);
        scanf("%f", &student[i].grade);
    }

    for (int i = 0; i < 5; i++){
        printf("Name: %s\n", student[i].name);
        printf("Age: %d\n", student[i].age);
        printf("Average grade: %.1f\n", student[i].grade);
    }

    for (int i = 1; i < 5; i++){
        if (student[i].grade > student[max].grade) {
            max = i;
        }
    }
    
    printf("Name: %s\n", student[max].name);
    printf("Age: %d\n", student[max].age);
    printf("Average grade: %.1f\n", student[max].grade);
    return 0;
}