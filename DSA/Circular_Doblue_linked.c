#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *prev;
    struct node *next;
} node;

int main() {
    int n, i;
    node *newNode, *head, *tail, *temp, *old;

    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter the values:\n");

    head = (node *)malloc(sizeof(node));
    scanf("%d", &head->data);
    head->next = head;  
    head->prev = head;  
    old = head;

    for (i = 1; i < n; i++) {
        newNode = (node *)malloc(sizeof(node));
        scanf("%d", &newNode->data);
        newNode->next = head;        
        newNode->prev = old;         
        old->next = newNode;          
        head->prev = newNode;         
        old = newNode;                
    }

    tail = old;

    
    printf("Circular Doubly Linked List (forward):\n");
    temp = head;
    do {
        printf("%d", temp->data);
        temp = temp->next;
        if (temp != head)
            printf(" <-> ");
    } while (temp != head);
    printf(" -> (back to head)\n");

    
    printf("Circular Doubly Linked List (reverse):\n");
    temp = tail;
    do {
        printf("%d", temp->data);
        temp = temp->prev;
        if (temp != tail)
            printf(" <-> ");
    } while (temp != tail);
    printf(" -> (back to tail)\n");

    return 0;
}
