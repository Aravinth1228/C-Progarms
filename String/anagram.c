#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2) {
        printf("Not an anagram\n");
        return 0;
    }
    int count[256] = {0};

    for(int i = 0; i < len1; i++) {
        count[str1[i]]++;
        count[str2[i]]++;
    }

    printf("Anagram\n");
    return 0;
}