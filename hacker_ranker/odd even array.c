#include <stdio.h>

int main() {
    int n, i, evenIdx = 0, oddIdx = 0;
    printf("Enter the limit: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even[evenIdx++] = arr[i];
        else
            odd[oddIdx++] = arr[i];
    }

    int e = 0, o = 0;  
    while(e < evenIdx && o < oddIdx) {
        printf("%d %d ", even[e++], odd[o++]);
    } 
    while(e < evenIdx) {
        printf("%d ", even[e++]);
    } 
    while(o < oddIdx) {
        printf("%d ", odd[o++]);
    }

    return 0;
}
/*Enter the limit: 10
Enter the elements of the array:
2
3
4
5
4
7
8
9
6
10
Alternating Even and Odd numbers: 2 3 4 5 4 7 8 9 6 10 */