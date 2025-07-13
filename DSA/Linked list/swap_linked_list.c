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

    int pos1, pos2;
    printf("Enter the position 1:");
    scanf("%d", &pos1);
    printf("Enter the position 2:");
    scanf("%d", &pos2);

    node *curr1 = head, *curr2 = head;

    int count1 = 1, count2 = 1;

    while (count1 < pos1) {
        curr1 = curr1->next;
        count1++;   
    }

    while (count2 < pos2)  {
        curr2 = curr2->next;
        count2++;
    }

    int temp_data = curr1->data;
    curr1->data = curr2->data;
    curr2->data = temp_data;


    printf("Singly linked list values after swapping:\n");
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
2
3
4
5
Singly linked list values:
1 -> 2 -> 3 -> 4 -> 5 -> NULL
Enter the position 1:1
Enter the position 2:5
Singly linked list values after swapping:
5 -> 2 -> 3 -> 4 -> 1 -> NULL*/
