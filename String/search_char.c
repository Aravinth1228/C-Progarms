#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char ch;
    printf("Enter the character to search: ");
    scanf(" %c", &ch);
    int found = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("Found\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Not Found\n");
    }

    return 0;
}/*
Enter a string: hi im aravinth
Enter the character to search: t
Found
*/