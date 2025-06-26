#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if( ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u') {
            str[i] = '\$';
        }
    }

    printf("%s\n", str);
    return 0;
}/*
Enter a string: hello
h$ll$
*/