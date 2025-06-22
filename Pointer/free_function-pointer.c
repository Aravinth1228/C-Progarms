#include<stdio.h>
#include<stdlib.h>
int *getting_pointer(){
    int i;
    int *ptr = (int *)malloc(5 * sizeof(int));
    for(i = 0; i < 5; i++){
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", ptr + i);
    }
    return ptr;
}
int main(){
    int i, n = 0;
    int *ptr = getting_pointer();
    for(i = 0; i < 5; i++){
      n+= *(ptr + i);
    }
    printf("Sum of elements: %d\n", n);
    free(ptr);
    ptr = NULL;
    return 0;
}