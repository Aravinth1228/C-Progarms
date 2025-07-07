#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

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

    return 0;
}
