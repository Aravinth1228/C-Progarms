#include <stdio.h>
#include <string.h>

void reverse(char* s) {
    int l = 0, r = strlen(s) - 1;
    while (l < r) {
        char t = s[l]; s[l] = s[r]; s[r] = t;
        l++; r--;
    }
}

int main() {
    char str[1001];
    fgets(str, 1001, stdin);
    str[strcspn(str, "\n")] = '\0';
    
    char* w = strtok(str, " ");
    while (w) {
        if (strlen(w) % 2) reverse(w);
        printf("%s", w);
        w = strtok(NULL, " ");
        if (w) printf(" ");
    }
    return 0;
}/*
hi iam aravinth
hi mai aravinth*/
