#include <stdio.h>
#include <windows.h>

void charge(int arr1[], int a, int arr2[], int b) {
    int r[100];
    int rs = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (arr1[i] == arr2[j]) {
                int c = 0;
            for (int k = 0; k < rs; k++) {
                    if (r[k] == arr1[i]) {
                        c = 1;
                        break;
                    }
                }
                if (!c) {
                    r[rs] = arr1[i];
                    rs++;
                }
                break;
            }
        }
    }
    for (int i = 0; i < rs; i++) {
        printf("%d ", r[i]);
    }
    printf("\n");
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 3, 5, 6, 7};
    int a = sizeof(arr1) / sizeof(arr1[0]);
    int b = sizeof(arr2) / sizeof(arr2[0]);
    charge(arr1, a, arr2, b);
    return 0;
}