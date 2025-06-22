#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("Enter the N value: ");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n * sizeof(int));
    if(ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

        for(i=0;i<n;i++){
           printf("Enter value for element :");
           scanf("%d", ptr+i);
        }
        printf("Allocated memory values: ");
        for(i=0;i<n;i++){
            printf("%d ",*(ptr+i));
        }
        printf("\n");

    free(ptr); 
    return 0;
}