#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

typedef struct Person {
    char name[100];
    int age;
    float height;
    int year;
} Person;

typedef struct PersonArr {
    Person *p;
    int count;
    int memory;
} PersonArr;

void addPerson(PersonArr *a);
void all(PersonArr *a);
void sort_name(PersonArr *a);
void sort_age(PersonArr *a);
void statis(PersonArr *a);
void search_name(PersonArr *a);
void search_age(PersonArr *a);
void save_binary(PersonArr *a);
void load_binary(PersonArr *a);
void exit_p(PersonArr *a);

void (*menu[])(PersonArr *) = {
    addPerson,
    all,
    sort_name,
    sort_age,
    statis,
    search_name,
    search_age,
    save_binary,
    load_binary,
    exit_p,
};

#define smenu (sizeof(menu) / sizeof(menu[0]))

void addMemory(PersonArr *a){
    if (a->count >= a->memory){
        if (a->memory == 0){
            a->memory = 2;
        } else {
            a->memory *= 2;
        }
        a->p = realloc(a->p, a->memory * sizeof(Person));
        if (a->p == NULL){
            printf("Error\n");
            exit(1);
        }
    }
}

int validName(char *name){
    if (strlen(name) == 0){
        return 0;
    } 
    for (int i = 0; name[i]; i++){
        if (!isalpha((unsigned char)name[i]) && name[i] != ' '){
            return 0;
        }
    }
    return 1;
}

int calAgefrYear(int byear){
    time_t t = time(NULL);
    struct tm *today = localtime(&t);
    int cyear = today->tm_year + 1900;
    return cyear - byear;
}

void n(char *str){
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n'){
        str[len-1] = '\0';
    }
}

#define print(x) _Generic((x), \
    int: printf("%d", (x)), \
    float: printf("%.2f", (x)), \
    const char*: printf("%s", (x)), \
    char*: printf("%s", (x)) \
)

void addPerson(PersonArr *a){
    Person nPerson;
    char b[100];
    int v = 0;

    while (!v){
        printf("Enter name: ");
        fgets(b, sizeof(b), stdin);
        n(b);
        if (validName(b)){
            v = 1;
            strcpy(nPerson.name, b);
        } else {
            printf("Error: not only letters\n");
        }
    }

    v = 0;
    while (!v){
        printf("Enter age: ");
        if (scanf("%d", &nPerson.age) == 1 && nPerson.age > 0){
            v = 1;
        } else {
            printf("Error: not positive integer\n");
            while (getchar() != '\n');
        }
    }

    v = 0;
    while (!v){
        printf("Enter height: ");
        if (scanf("%f", &nPerson.height) == 1 && nPerson.height > 0){
            v = 1;
        } else {
            printf("Error: not positive number\n");
            while (getchar() != '\n');
        }
    }

    v = 0;
    while (!v){
        printf("Enter birth year: ");
        if (scanf("%d", &nPerson.year) == 1 && nPerson.year > 1900 && nPerson.year < 2026){
            v = 1;
        } else {
            printf("Error: invalid birth year\n");
            while (getchar() != '\n');
        }
    }

    while (getchar() != '\n');

    addMemory(a);
    a->p[a->count] = nPerson;
    a->count++;
    printf("Person added successfully\n");
}

void all(PersonArr *a){
    if (a->count == 0){
        printf("No records\n");
        return;
    }
    for (int i = 0; i < a->count; i++){
        printf("Name: %s\nAge: ", a->p[i].name);
        print(a->p[i].age);
        printf("\nHeight: ");
        print(a->p[i].height);
        printf("\nBirth year: ");
        print(a->p[i].year);
        printf("\n");
    }
}

void sort_name(PersonArr *a){
    if (a->count <= 1){
        printf("Too few records to sort\n");
        return;
    }

    for (int i = 0; i < a->count - 1; i++){
        for (int j = 0; j < a->count - i - 1; j++){
            if (strcmp(a->p[j].name, a->p[j+1].name) > 0){
                Person temp = a->p[j];
                a->p[j] = a->p[j+1];
                a->p[j+1] = temp;
            }
        }
    }
    printf("Sorted by name\n");
}

void sort_age(PersonArr *a){
    if (a->count <= 1){
        printf("Too few records to sort\n");
        return;
    }

    for (int i = 0; i < a->count - 1; i++){
        for (int j = 0; j < a->count - i - 1; j++){
            if (a->p[j].age > a->p[j+1].age){
                Person temp = a->p[j];
                a->p[j] = a->p[j+1];
                a->p[j+1] = temp;
            }
        }
    }
    printf("Sorted by age\n");
}

void statis(PersonArr *a){
    if (a->count == 0){
        printf("No data\n");
        return;
    }
    float totalAge = 0;
    float maxHeight = 0;
    for (int i = 0; i < a->count; i++){
        totalAge += a->p[i].age;
        if (a->p[i].height > maxHeight){
            maxHeight = a->p[i].height;
        }
    }
    float avgAge = totalAge / a->count;
    printf("Average age: ");
    print(avgAge);
    printf("\nMax height: ");
    print(maxHeight);
    printf("\n");
}

void search_name(PersonArr *a){
    char searchName[100];
    printf("Enter name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    n(searchName);

    int found = 0;
    for (int i = 0; i < a->count; i++){
        if (strcmp(a->p[i].name, searchName) == 0){
            printf("Found: %s | Age: %d | Height: %.2f | Birth year: %d\n",
                   a->p[i].name, a->p[i].age, a->p[i].height, a->p[i].year);
            found = 1;
        }
    }
    if (!found){
        printf("Not found\n");
    }
}

void search_age(PersonArr *a){
    int minAge, maxAge;
    printf("Enter min age: ");
    scanf("%d", &minAge);
    printf("Enter max age: ");
    scanf("%d", &maxAge);
    while (getchar() != '\n');

    int found = 0;
    for (int i = 0; i < a->count; i++){
        if (a->p[i].age >= minAge && a->p[i].age <= maxAge){
            printf("%s | Age: %d | Height: %.2f | Birth year: %d\n",
                   a->p[i].name, a->p[i].age, a->p[i].height, a->p[i].year);
            found = 1;
        }
    }
    if (!found){
        printf("No persons in this age range\n");
    }
}

void save_binary(PersonArr *a){
    FILE *f = fopen("p.bin", "wb");
    if (f == NULL) {
        printf("Error opening file for writing\n");
        return;
    }
    fwrite(&a->count, sizeof(int), 1, f);
    fwrite(a->p, sizeof(Person), a->count, f);
    fclose(f);
    printf("Saved %d records to p.bin\n", a->count);
}

void load_binary(PersonArr *a){
    FILE *f = fopen("p.bin", "rb");
    if (f == NULL) {
        printf("Error opening file for reading\n");
        return;
    }
    int nCount;
    fread(&nCount, sizeof(int), 1, f);
    if (nCount <= 0){
        printf("No valid data in file\n");
        fclose(f);
        return;
    }

    free(a->p);
    
    a->memory = nCount;
    a->count = nCount;
    a->p = malloc(a->memory * sizeof(Person));
    if (a->p == NULL){
        printf("Memory error\n");
        fclose(f);
        return;
    }

    fread(a->p, sizeof(Person), a->count, f);
    fclose(f);
    printf("Loaded %d records from p.bin\n", a->count);
}

void exit_p(PersonArr *a){
    printf("Exiting...\n");
    free(a->p);
    a->p = NULL;
    a->count = 0;
    a->memory = 0;
}

int main(){
    PersonArr a = {NULL, 0, 0};
    int choice;

    printf("Personal data manager\n");
    printf("1. Add person\n");
    printf("2. Print all\n");
    printf("3. Sort by name\n");
    printf("4. Sort by age\n");
    printf("5. Statistics\n");
    printf("6. Search by name\n");
    printf("7. Search by age range\n");
    printf("8. Save to binary\n");
    printf("9. Load from binary\n");
    printf("10. Exit\n");

    while (1){
        printf("\nChoice: ");
        if (scanf("%d", &choice) != 1){
            while (getchar() != '\n');
            printf("Invalid input, please enter number 1-10\n");
            continue;
        }
        while (getchar() != '\n');

        if (choice >= 1 && choice <= smenu){
            menu[choice - 1](&a);
            if (choice == 10){
                break;
            }
        } else {
            printf("Invalid choice, please enter 1-10\n");
        }
    }

    return 0;
}