#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[100];
    int age;
};

int main(){
    int n;
    struct Student *students = NULL;
    int max, index;
    
    scanf("%d", &n);
    
    students = (struct Student*)malloc(n * sizeof(struct Student));
    if (students == NULL){
        printf("Error\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++){
        printf("Name %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }
    
    for (int i = 0; i < n; i++){
        printf("%s, %d\n", students[i].name, students[i].age);
    }
    
    max = students[0].age;
    index = 0;
    for (int i = 1; i < n; i++){
        if (students[i].age > max){
            max = students[i].age;
            index = i;
        }
    }
    
    printf("\nOldest: %s, %d\n", students[index].name, students[index].age);
    
    free(students);
    students = NULL;
    
    return 0;
}