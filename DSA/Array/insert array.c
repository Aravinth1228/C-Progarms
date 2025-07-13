#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    int element;
    scanf("%d", &element);
    printf("Enter the position: ");
    int position;
    scanf("%d", &position);
    if(position < 0 || position > n){
        printf("Invalid position!\n");
    } else {
        for(int i=n-1; i>=position; i--){
            arr[i+1] = arr[i];
        }
        arr[position] = element;
        n+=1; // Increase the size of the array
        printf("Array after insertion:\n");
        for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
        printf("Element inserted successfully.\n");
    }
}/*
Enter the size of the array: 5
Enter the elements of the array:
1
2
3
5
6
Enter the element to insert: 4
Enter the position: 3
Array after insertion:
1 2 3 4 5 6 Element inserted successfully.*/
