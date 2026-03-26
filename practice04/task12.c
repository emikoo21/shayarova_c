#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str[] = "I love C";
    char* words[10];
    int wordCount = 0;
    char* p = str;
    while (*p != '\0') {
        while (*p == ' ') {
            p++;
        }
        if (*p == '\0') {
            break;
        }
        words[wordCount] = p;
        wordCount++;
        while (*p != ' ' && *p != '\0') {
            p++;
        }
        if (*p == ' ') {
            *p = '\0';
            p++;
        }
    }
    for (int i = wordCount - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}