#include <stdio.h>

int find(int arr[], int n, int x){
    for (int i = 0; i < n; i++){
        if (arr[i] == x) {
            return i;
        }
    }
}
int main () {
    int a;
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++){
        scanf("%d", &b[i]);
    }
    int c;
    scanf("%d", &c);
    printf("%d\n", find(b, a, c));
    return 0;
}