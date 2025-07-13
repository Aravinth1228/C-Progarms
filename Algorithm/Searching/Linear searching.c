#include<stdio.h>
int main(){
    int n,i,search,flag =0;
    printf("Enter the size of A:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values of A :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   printf("Enter the element to search:\n");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(a[i]==search){
            printf("%d Element found at index %d\n",search,i);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Element not found in the array.\n");
    }
    return 0;
}/*
Enter the size of A:
5
Enter the values of A :
1
5
2
3
4
Enter the element to search:
5
5 Element found at index 1
*/