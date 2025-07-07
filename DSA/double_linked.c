#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *prev;
    struct node *next;
} node;

int main() {
    int n,i;
    node *newNode, *old, *head, *tail, *temp;

    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter the values:\n");
    head = (node *)malloc(sizeof(node));
    scanf("%d", &head->data);
    head->next = NULL;
    head->prev = NULL;
    tail = head;

    for (i = 1; i < n; i++) {
        newNode = (node *)malloc(sizeof(node));       
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    printf("Doubly linked list values (forward):\n");
    temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL)
            printf(" <-> ");
        temp = temp->next;
    }
    printf(" -> NULL\n");

    printf("Doubly linked list values (reverse):\n");
    temp = tail;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->prev != NULL)
            printf(" <-> ");
        temp = temp->prev;
    }
    printf(" -> NULL\n");

    return 0;
}
