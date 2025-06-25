#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char copy[100];
    printf("Enter a string: ");
    gets(str);
    int i;
    for(i = 0; str[i] != '\0'; i++){
        copy[i] = str[i];
    }
    copy[i] = '\0';
    printf("Copied string: %s\n", copy);
    return 0;
}/*
Enter a string: hello
Copied string: hello
*/