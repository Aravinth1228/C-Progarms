#include <stdio.h>

int main() {
    
    int sum = 0;
    printf("Enter numbers (enter -1 to stop):\n");
    while (1) {
        int num;
        scanf("%d", &num);
        if (num == -1) {
            break;      
        }
    
        sum += num;

        printf("Current sum: %d\n", sum);
    } 
    printf("Sum: %d\n", sum); 
    return 0;
}