#include <stdio.h>

void to_upper(char str[]){
    char* p = str;
    while(*p){
        if (*p != ' '){
            *p -= 32;
            printf("%c", *p);
        }else{
            printf("%c", *p);
        }
        p++;
    }
    printf("\n");
}

int main(){
    char a[] = "hello world";
    to_upper(a);
    return 0;
}