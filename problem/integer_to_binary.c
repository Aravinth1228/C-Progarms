 #include<stdio.h>
    int main() {
        int num, binary[32], i = 0;
        scanf("%d", &num);
    
       while (num > 0) {
            binary[i] = num % 2;
            num /= 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        return 0;
    }
/*
10
1010
*/