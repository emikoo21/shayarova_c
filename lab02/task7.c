#include <stdio.h>

enum Course {FIRST, SECOND, THIRD, FOURTH};

struct Student{
    char name[100];
    int age;
    enum Course course;
    float grade;
};

void addStudent(struct Student *students, int *count){
    printf("Enter name: ");
    scanf("%s", students[*count].name);
    printf("Enter age: ");
    scanf("%d", &students[*count].age);
    printf("Enter course (0-FIRST, 1-SECOND, 2-THIRD, 3-FOURTH): ");
    int courseNum;
    scanf("%d", &courseNum);
    students[*count].course = (enum Course)courseNum;
    printf("Enter average grade: ");
    scanf("%f", &students[*count].grade);
    (*count)++;
}

void printStudents(struct Student *students, int count){
    for (int i = 0; i < count; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Course: %d\n", students[i].course);
        printf("Average grade: %.1f\n", students[i].grade);
    }
}

int compareNames(char *name1, char *name2){
    int i = 0;
    while (name1[i] != '\0' && name2[i] != '\0') {
        if (name1[i] != name2[i]) {
            return 0;
        }
        i++;
    }
    return (name1[i] == '\0' && name2[i] == '\0');
}

void searchByName(struct Student *students, int count, char *name){
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (compareNames(students[i].name, name)) {
            printf("\nStudent found:\n");
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Course: %d\n", students[i].course);
            printf("Average grade: %.1f\n", students[i].grade);
            found = 1;
        }
    }
    if (!found) {
        printf("Student not found\n");
    }
}

void sortByGrade(struct Student *students, int count){
    struct Student temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (students[i].grade < students[j].grade) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main(){
    struct Student students[100];
    int count = 0;
    int choice;
    char searchName[100];
    
    do{
        printf("\n1. Add student\n");
        printf("2. Print all students\n");
        printf("3. Search by name\n");
        printf("4. Sort by grade\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        switch (choice){
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                printStudents(students, count);
                break;
            case 3:
                printf("Enter name to search: ");
                scanf("%s", searchName);
                searchByName(students, count, searchName);
                break;
            case 4:
                sortByGrade(students, count);
                printf("Sorted by grade\n");
                printStudents(students, count);
                break;
        }
    } while (choice != 5);
    
    return 0;
}