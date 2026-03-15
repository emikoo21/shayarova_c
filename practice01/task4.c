#include <stdio.h>

int main () {  
    int a = 10; 
    printf("%d\n", a);
    printf("Адрес: %p\n", (void*)&a);
    return 0;
}