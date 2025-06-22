/*
Four kids Peter, Susan, Edmond and Lucy travel through a wardrobe to the land of Narnia. Narnia is a fantas world of magic with mythical beasts and talking animals.While exploring the land of narnia Lucy found Mr.Tumnus the two legged stag, and she followed it, down a narrow path She and Mr.Tumnus became friend and he offered a cup of coffee to Lucy in his small hut.It was time for Lucy to return to her family and so she bid good bye to Mr.Tumnus and while leaving Mr.Tumnus told that it is quite difficult to find the route back as it was already dark.He told her to see the trees while returning back and said that the first tree with two digits number will help her find the way and the way to go back to her home is the sum of digits of the tree and that numbered way will lead her to the tree next to the wardrobe where she can find the others.Lucy was already confused, so pls help her in finding the route to her home....

Sample Output

Input Format:

Input consists of an integer corresponding to the 2-digit number. Output Format:

Output consists of an integer corresponding to the sum of its digits.

Sample Input

23

Sample Output 5*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the 2 digit Number :");
    scanf("%d",&n);
    int num1 = n % 10;
    int num2 = n / 10;
    printf("%d",num1+num2);
    return 0;
}
/*
Enter the 2 digit Number :23
5
*/