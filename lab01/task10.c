#include <stdio.h>
int main() {
    int a = 5, b = 10;    
    printf("До обмена: a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("После обмена: a = %d, b = %d\n", a, b);
    return 0;
}
