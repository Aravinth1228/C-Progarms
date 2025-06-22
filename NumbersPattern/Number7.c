#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter the size of the right triangle pattern: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("%d ", j);
        }
        for(int k = n ; k >= (n-i+1); k--){
            printf("%d ", k);
        }
    
        printf("\n");
    }
    return 0;
}
// 12345
// 12354
// 12543
// 15432
// 54321