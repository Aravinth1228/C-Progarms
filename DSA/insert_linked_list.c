#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node* insert(node *head) {
    int i, pos, element;
    node *newNode, *p;

    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    newNode = (node *)malloc(sizeof(node));
    newNode->data = element;
    newNode->next = NULL;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        p = head;
        for (i = 0; i < pos - 2 && p != NULL; i++) {
            p = p->next;
        }

        if (p == NULL) {
            printf("Position out of bounds.\n");
        } else {
            newNode->next = p->next;
            p->next = newNode;
        }
    }

    return head;
}

int main() {
    int n, i;
    node *newNode, *old, *head, *temp;

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

    printf("Singly linked list values:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        temp = temp->next;
        if (temp != NULL)
            printf(" -> ");
    }
    printf(" -> NULL\n");

  
    head = insert(head);

    printf("Updated singly linked list values:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        temp = temp->next;
        if (temp != NULL)
            printf(" -> ");
    }
    printf(" -> NULL\n");

    return 0;
}
/*
Enter the limit: 5
Enter the values:
1
3
4
5
6
Singly linked list values:
1 -> 3 -> 4 -> 5 -> 6 -> NULL
Enter the position to insert: 2
Enter the element to insert: 3
Updated singly linked list values:
1 -> 3 -> 3 -> 4 -> 5 -> 6 -> NULL
*/