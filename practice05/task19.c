#include <stdio.h>

int count_vowels(char str[]){
    char* p = str;
    int count = 0;
    while (*p){
        if ((*p == 'A') || (*p == 'U') || (*p == 'E') || (*p == 'O') || (*p == 'I') || (*p == 'Y') || (*p == 'a') || (*p == 'u') || (*p == 'e') || (*p == 'o') || (*p == 'i') || (*p == 'y')){
            count++;
        }
        p++;
    }
    return count;
}
int main () {
    char a[] = "Hello, World!";
    printf("%d\n", count_vowels(a));
    return 0;
}