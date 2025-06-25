#include<stdio.h>
#include<string.h>
int main(){
    char A[50];
    printf("Enter first string: ");
    gets(A);
    char B[50];
    printf("Enter second string: ");
    gets(B);

    int count = 0;
    for(int i =0 ;i<strlen(A); i++){
        if(A[i] == B[i]){
            count+=1;
        }
    }
    if(count==strlen(A)){
        printf("Both strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}/*
Enter first string: hello
Enter second string: hello
Both strings are equal.
*/