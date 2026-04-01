#include <stdio.h>

int is_palindrome_str(char str[]){
    char* start = str;
    char* end = str;
    while(*end){
        end++;
    }
    end--;
    while(*start){
        if (*start != *end){
            return '0';
        }
        start++;
        end--;
    }
    return '1';
}

int main(){
    char a[] = "sts";
    printf("%c\n", is_palindrome_str(a));
    return 0;
}