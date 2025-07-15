#include <stdio.h>

int main() {
    int arr[100], digits[1000], n, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int num = arr[i];
      
        while (num > 0) {
            digits[count++] = num % 10;
            num /= 10;
        }
    }

    // Sort digits in descending order
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (digits[j] < digits[j + 1]) {
                int temp = digits[j];
                digits[j] = digits[j + 1];
                digits[j + 1] = temp;
            }
        }
    }

    printf("Maximum number: ");
    for (int i = 0; i < count; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");

    return 0;
}
/*Enter number of elements: 4
Enter 4 numbers:
92
46
53
2
Maximum number: 9654322
*/