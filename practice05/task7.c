#include <stdio.h>

void b(int n){
    for (int i = 1; i <= n; i++){
        printf("%d ", i);
    }
    printf("\n");
}
int main () {
   int a;
    scanf("%d", &a);
    b(a);
    return 0;
}