// Stack implementation using linked list in C
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the orginal stack: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
   int push, pop;
    scanf("%d %d", &push, &pop);
    printf("Pushed element: %d\n", push);
    printf("Popped element: %d\n", pop);

    printf("Final stack: ");
    for(int i = 0; i < n; i++){
        if(a[i] == pop){
            continue; 
        }
        printf("%d ", a[i]);
    }

    return 0;
}