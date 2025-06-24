#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int i = 0;
   

    for (i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
        if (str[i + 1] != '\0')
         printf(" ");
    }

    printf("\n");
    return 0;
}/*
Enter a string: hello
h e l l o
*/