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
    printf("Array created successfully.\n");
    // Display the array
    printf("The elements of the array are:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
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
Array created successfully.
The elements of the array are:
1 2 3 4 5
*/