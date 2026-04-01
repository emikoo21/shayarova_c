#include <stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Person{
    char name[100];
    struct Date birthDate;
};

int main(){
    struct Person person;
    scanf("%s", person.name);
    scanf("%d %d %d", &person.birthDate.day, &person.birthDate.month, &person.birthDate.year);

    printf("\nHuman data:\n");
    printf("Name: %s\n", person.name);
    printf("Birthday: %d.%d.%d\n", person.birthDate.day, person.birthDate.month, person.birthDate.year);

    if (person.birthDate.year > 2000) {
        printf("\nThis person was born after 2000\n");
    } else {
        printf("\nThis person was born in 2000 or earlier\n");
    }
    
    return 0;
}