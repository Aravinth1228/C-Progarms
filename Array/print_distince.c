#include<stdio.h>
int main(){
    int a[50];
    int n, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
 int count=0;
    for(i = 0; i < ; i++){
        for(j = 0; j < n; j++){
            if(a[i] == a[j]){
                count += 1;
            }
        }
        if (count == 1){
            printf("\n%d ", a[i]);
        }
    }

   printf("\nNumber of distinct elements: %d\n", count);
    return 0;
    }/*
Enter the number of elements in the array: 5
Enter the elements of the array: 1
2
2
2
3
Number of distinct elements:  3*/