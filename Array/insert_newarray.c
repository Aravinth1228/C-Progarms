#include<stdio.h>
int main(){
    int arr[100], n, i, j, pos, newElement;
    printf("Enter the index:");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position:");
    scanf("%d", &pos);
    printf("Enter the new element:");
    scanf("%d", &newElement);
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = newElement;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
/*
Enter the index:5
Enter the elements of the array:
1
2
3
4
5
Enter the position:2
Enter the new element:10
Array after insertion:
1 2 10 3 4 5
*/