#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    int *ptr = (int *)malloc(3*sizeof(int));
    if(ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for(i=0;i<3;i++){
        printf("Enter value for element %d: ", i+1);
        scanf("%d", ptr+i);
    }
    ptr=(int*)realloc(ptr, 5*sizeof(int));
    for(i=3;i<5;i++){
        printf("Enter value for new element %d: ", i+1);
        scanf("%d", ptr+i);
    }
    for(i=0;i<5;i++){
        printf("%d : %d\n", &ptr[i], *(ptr+i));
    }
    free(ptr);
    return 0;
}