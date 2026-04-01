#include <stdio.h>

int my_strlen(char str[]){
    char* p = str;
    int len = 0;
    while (*p){
        len++;
        p++;
    }
    return len;
}
int main () {
    char a[] = "Hello, World!";
    printf("%d\n", my_strlen(a));
    return 0;
}