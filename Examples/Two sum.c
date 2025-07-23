#include<stdio.h>
int main(){
    int n, target;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    scanf("%d", &arr[0]);
    for(int i = 1; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);
    int found = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
}