#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

int main() {
    int n, i;
    node *newNode, *old, *head, *tail, *temp;

    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter the values:\n");

    head = (node *)malloc(sizeof(node));
    scanf("%d", &head->data);
    head->next = NULL;
    old = head;

    for (i = 1; i < n; i++) {
        newNode = (node *)malloc(sizeof(node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        old->next = newNode;
        old = newNode;
    }

    tail = old;
    old->next = head;  
    printf("Circular linked list values:\n");
    temp = head;
    do {
        printf("%d", temp->data);
        temp = temp->next;
        if (temp != head)
            printf(" -> ");
    } while (temp != head);
    printf(" -> (back to head)\n");

    return 0;
}
