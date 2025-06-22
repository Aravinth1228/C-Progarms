/*
My name is Binfon and I am tribal. I couldn't understand how you measure days, weeks, months and year. Please make me to understand about the days, weeks, months and year. Dear Friend, Make Binfon to understand what is meant by days, week, months and year. Teach him about the conversion of days in to years, weeks and days using a program.

INPUT FORMAT:

Input consists of an integer which corresponds to the number of days.

OUTPUT FORMAT:

The output consists of three integers.

The first integer corresponds to the total years.

The second integer corresponds to the total weeks.

The third integer corresponds to the total days.

Sample Input

373

Sample Output

1

1

1*/
#include<stdio.h>
int main(){
    int n_day;
    printf("Enter the Days :");
    scanf("%d",&n_day);

    int year = n_day / 365;
    int rem_days = n_day % 365;
    int week = rem_days / 7;
    int days = rem_days % 7;
    printf("year:%d\nWeek:\%d\nDay :%d", year, week, days);
    return 0;
}
/*
Enter the Days :373
year:1
Week:1
Day:1
*/