#include <stdio.h>

int main() {
    int n, a=2, b=1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if(n>0){
        printf("Luca Series: ");
        for(int i=1; i<=n; i++){
            if(i==1){
                printf("%d ", a);

            } else if(i==2){
                printf("%d ", b);
            } else {
                next = a + b;
                printf("%d ", next);
                a = b;
                b = next;
            }
        }
    } else {
        printf("Please enter a number greater than 0.");
    }
    printf("\n");
    return 0;
}
