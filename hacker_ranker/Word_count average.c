#include<stdio.h>

int main(){
    int len,sum=0;
    float avg=0;
    char str[100];
    printf("Enter the number of words: ");
    scanf("%d", &len);
    printf("Enter the string: ");
    scanf("%s", str);

    for(int i=0;i<len;i++){
        sum += str[i];
    }
     avg = (float) sum / len;
     printf("Average ASCII value: %.2f\n", avg);
     return 0;
}
/*Enter the number of words: 6
Enter the string: source
Average ASCII value: 109.50
*/