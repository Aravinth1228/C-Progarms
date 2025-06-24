#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }
    printf("Number of characters: %d\n", count);
    return 0;
}/*
Enter a string: hello
Number of characters: 5
*/