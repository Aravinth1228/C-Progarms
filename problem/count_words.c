#include<stdio.h>
int main(){
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ') {
            count++;
        }
    }
    printf("Number of words: %d\n", count + 1);
    return 0;
} /*
Enter a string: hi i am Aravith   
Number of words: 4*/
