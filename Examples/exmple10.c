//Age calculate with last two digits
#include<stdio.h>
int main(){
    int birth_year, current_year, age = 0;
    printf("Enter your birth year: ");
    scanf("%d", &birth_year);
    printf("Enter current year: ");
    scanf("%d", &current_year);
    if(current_year < birth_year) {
       age = (100 + current_year) - birth_year;
    }
    else {
       age = current_year - birth_year;
    }
    printf("Your age is: %d\n", age);
    return 0;
}
/*
Enter your birth year: 62
Enter current year: 00
Your age is: 38
*/