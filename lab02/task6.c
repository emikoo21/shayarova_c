#include <stdio.h>

union Data{
    int i;
    float f;
    char c;
};

struct Variant{
    union Data data;
    int type;
};

int main(){
    union Data data;
    
    data.i = 10;
    printf("int: %d\n", data.i);
    printf("float: %f\n", data.f);
    printf("char: %c\n\n", data.c);
    
    data.f = 3.14;
    printf("int: %d\n", data.i);
    printf("float: %f\n", data.f);
    printf("char: %c\n\n", data.c);
    
    data.c = 'A';
    printf("int: %d\n", data.i);
    printf("float: %f\n", data.f);
    printf("char: %c\n\n", data.c);
    
    struct Variant var;
    scanf("%d", &var.type);
    
    if (var.type == 1){
        scanf("%d", &var.data.i);
        printf("Integer: %d\n", var.data.i);
    } else if (var.type == 2){
        scanf("%f", &var.data.f);
        printf("Float: %f\n", var.data.f);
    } else if (var.type == 3){
        scanf(" %c", &var.data.c);
        printf("Char: %c\n", var.data.c);
    }
    
    return 0;
}