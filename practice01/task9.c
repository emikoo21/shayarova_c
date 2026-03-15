#include <stdio.h>

int main () {   
    int a;
    scanf("%d", &a);
    if ((a % 2 == 0) && (a % 3 == 0)) {
        printf("%d\n", a / 2);
         printf("%d\n", a / 3);
    } else {
        printf("Не делиться");
    }
    return 0;
}