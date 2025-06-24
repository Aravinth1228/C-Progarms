#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int alpha = 0, sym = 0, num = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            alpha++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            num++;
        }
        else {
            sym++;
        }
    }

    printf("Alphabets          : %d\n", alpha);
    printf("Numbers            : %d\n", num);
    printf("Special Characters : %d\n", sym);

    return 0;
}
/*
Enter a string: hello@123
Alphabets: 5
Numbers: 3
Special Characters: 1
*/
