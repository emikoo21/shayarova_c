#include <stdio.h>

enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

struct Event{
    char name[100];
    enum Day day;
};

int main(){
    enum Day today = WEDNESDAY;
    
    switch (today){
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Wednesday\n");
            break;
        case THURSDAY:
            printf("Thursday\n");
            break;
        case FRIDAY:
            printf("Friday\n");
            break;
        case SATURDAY:
            printf("Saturday\n");
            break;
        case SUNDAY:
            printf("Sunday\n");
            break;
    }
    
    struct Event event;
    scanf("%s", event.name);
    int dayNum;
    scanf("%d", &dayNum);
    event.day = (enum Day)dayNum;
    
    printf("Event: %s, Day: %d\n", event.name, event.day);
    
    return 0;
}