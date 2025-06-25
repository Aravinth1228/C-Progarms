#include<stdio.h>
#include<string.h>

int main() {
    char c[100];
    printf("Enter the String: ");
    gets(c);

    int len = strlen(c);
    for(int i = 0; i < len/2; i++) {
        char ch = c[i];
        c[i] = c[len - i - 1];
        c[len - i - 1] = ch;
    }

    printf("\nReverse : %s", c);

    return 0;
}/*
Enter the String: hello

Reverse : olleh
*/