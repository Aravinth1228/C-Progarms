#include<stdio.h>
int main(){
    int n,i,arr[100],j,del;
    printf("Enter the array :");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the delete element\n");
    scanf("%d",&del);
    for(i=0;i<n;i++){
        if(arr[i]==del){
            for(j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            n--;
        }
    }
    printf("The new array is\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
/*
Enter the array :5
Enter the elements of the array
:1
2
3
4
5
Enter the delete element
3
The new array is
1 2 4 5
*/