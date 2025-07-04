// LinkedList
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} list;

int main() {
    int n, i, m;
    list *head = NULL, *temp = NULL, *tail = NULL, *current = NULL;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        temp = (list*)malloc(sizeof(list));
        if (temp == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        printf("Enter the data: ");
        scanf("%d", &m);
        temp->data = m;
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    printf("Linked List: ");
    current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    return 0;
}