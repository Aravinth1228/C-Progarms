#include<stdio.h>
int main(){
    int arr[100],n,i,j,mid;
    printf("Enter the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the key to search:");
    scanf("%d",&key);
    int low = 0, high = n - 1;
    mid =(low + high) / 2;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == key){
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    printf("Element not found\n");
    return 0;
}/*
Enter the array:5
1
2
3
4
5
Enter the key to search:4
Element found at index 3
*/