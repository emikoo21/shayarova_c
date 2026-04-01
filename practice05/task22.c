#include <stdio.h>

void swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("%d %d\n", *a, *b);
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    return 0;
}