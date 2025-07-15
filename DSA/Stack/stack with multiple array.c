// stack with multiple arrays
#include<stdio.h>
#define MAX 100
typedef struct Stack {
    int arr[MAX];
    int top;
} Stack;
 
int isEmpty(Stack *s) {
    return s->top == -1;
}
int isFull(Stack *s) {
    return s->top == MAX - 1;
}
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack is full\n");
        return;
    }
    s->arr[++(s->top)] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->arr[(s->top)--];
}

int display(Stack *s) {

    for (int i = s->top; i >= 0; i--) {
        printf("%d\n", s->arr[i]);
    }
    return 0;
}
int main(){
    Stack s1;
    Stack s2;
 
    s2.top = -1;
    int n;
    s1.top = -1;
   printf("Enter the limit:\n");
   scanf("%d", &n);
   printf("Enter value to push: ");
    for (int i = 0; i < n; i++) {
        int value;

        scanf("%d", &value);
        push(&s1, value);
    }
    printf("Displaying value:\n");
    display(&s1);
    printf("Popping values:\n");
    pop(&s1);
    display(&s1);
    return 0;
}
/*
*/