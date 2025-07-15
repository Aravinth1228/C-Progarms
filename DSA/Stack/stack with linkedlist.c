// Stack implementation using linked list in C
#include <stdio.h>
#include <stdlib.h> // Added for malloc and free

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* top = NULL;
void isEmpty() {
    if(top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }
} 

void peek() {
    if(top == NULL) {
        printf("Stack is empty, no top element\n");
    } else {
        printf("Top element is: %d\n", top->data);
    }
} 

void push(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

void pop(){
    if(top == NULL) {
        printf("Stack underflow\n");
        return;
    }
    struct Node* temp = top;
    top = top->next;
    free(temp);
}

int main(){
    int n;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    printf("Enter the Values:");
    for(int i = 0; i < n; i++){
        
        int value;
        scanf("%d", &value);
        push(value);
    }
    printf("Stack after push operations: ");
    Node* current = top;
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    isEmpty();
    peek();
    pop();
    printf("Stack after pop operation: ");
    current = top;
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    return 0;
}/*Enter the Limit: 5
Enter the Values:1
2
3
4
5
Stack after push operations: 5 -> 4 -> 3 -> 2 -> 1 -> NULL
Stack is not empty
Top element is: 5
Stack after pop operation: 4 -> 3 -> 2 -> 1 -> NULL
*/