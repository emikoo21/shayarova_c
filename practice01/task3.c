#include <stdio.h>

int main () {   
    printf("int: %zu байт\n", sizeof(int));
    printf("float: %zu байт\n", sizeof(float));
    printf("double: %zu байт\n", sizeof(double));
    printf("char: %zu байт\n", sizeof(char));
    return 0;
}