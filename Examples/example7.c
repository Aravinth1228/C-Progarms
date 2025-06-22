/*Rabina is interested so much in gardening and she plants more trees in her garden. 
She plants trees in the order of rows and columns. She numbered the trees in column wise order.
 She planted mango tree only in the second column from both first and last.
  But later when the trees grew up she forgot where she planted mango trees.
   So help her to find whether the given tree number is a number of mango trees or not.
    Display whether "It is a mango tree" or "It is not a mango tree".

INPUT FORMAT:
Input consists of 3 integers.
First input corresponds to the number of rows.
Second input corresponds to the number of columns.
Third input corresponds to the tree number
Output :Display whether "It is a mango tree" or "It is not a mango tree".*/ 


#include <stdio.h>

int main() {
    int r, c, t;
    scanf("%d%d%d", &r, &c, &t);
    int col = (t - 1) % c + 1;
    printf((col == 2 || col == c - 1) ? "It is a mango tree\n" : "It is not a mango tree\n");
    return 0;
}