#include <stdio.h>

int count_char(char str[], char c){
    char* p = str;
    int count = 0;
    while (*p){
        if (*p == c) {
            count++;
        }
        p++;
    }
    return count;
}
int main () {
    char b;
    scanf("%c", &b);
    char a[] = "Hello, World!";
    printf("%d\n", count_char(a, b));
    return 0;
}