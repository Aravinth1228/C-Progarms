#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("Enter the N value: ");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n, sizeof(int));
    if(ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for(i=0;i<n;i++){
        printf("Enter value for element : ");
        scanf("%d", ptr+i);
    }
    for(i=0;i<n;i++){

        printf("\n%d : %d ",&ptr[i],*(ptr+i));
    }
    printf("\n");

}