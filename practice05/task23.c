#include <stdio.h>

void max2(int a, int b, int *res){
    if (a > b){
        *res = a;
    }else{
        *res = b;
    }
    printf("%d\n", *res);
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int c;
    max2(x, y, &c);
    return 0;
}