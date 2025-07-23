#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int reversed = 0, original = n;
    while(n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if(original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
}/*121
Palindrome
*/