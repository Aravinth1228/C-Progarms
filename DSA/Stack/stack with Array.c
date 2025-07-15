#include<stdio.h>
int top = -1;
int stack[100];

void push(int value) {
    if(top == 99) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = value;
    }
}

void pop() {
    if(top == -1) {
        printf("Stack underflow\n");
    } else {
        top--;
    }
}

void peek() {
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

void isEmpty() {
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }
}

int main() {
    int n;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    printf("Enter the Values:");
    for(int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        push(value);
    }
    printf("Stack after push operations: ");
    for(int i = top; i >= 0; i--) {
        printf("%d -> ", stack[i]);
    }
    printf("NULL\n");
    isEmpty();
    peek();
    pop();
    printf("Stack after pop operation: ");
    for(int i = top; i >= 0; i--) {
        printf("%d -> ", stack[i]);
    }
    printf("NULL\n");
    return 0;
}/*Enter the Limit: 5
Enter the Values:5
1
2
3
4
Stack after push operations: 4 -> 3 -> 2 -> 1 -> 5 -> NULL
Stack is not empty
Top element is: 4
Stack after pop operation: 3 -> 2 -> 1 -> 5 -> NULL*/