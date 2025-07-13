#include<stdio.h>
int main(){
    int n,i,pos = 0, del_num;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to delete: ");
    scanf("%d", &del_num);
    for(i=0; i<n; i++){
        if(arr[i] == del_num){
            pos = i;
            break;
        }
    }
    if(n == 0){
        printf("Element not found in the array.\n");
    } else {
        for(i=pos; i<n-1; i++){
            arr[i] = arr[i+1];
        }
        n-=1;
        printf("Array after deletion:\n");
        for(i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
        printf("Element deleted successfully.\n");
    }
    return 0;
}/*
Enter the size of the array: 5
Enter the elements of the array:
1
2
3
4
5
Enter the element to delete: 5
Array after deletion:
1 2 3 4 Element deleted successfully.*/
