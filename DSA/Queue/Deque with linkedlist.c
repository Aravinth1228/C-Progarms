// Deque with linked list implementation in C
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

typedef struct Deque {
    struct Node* front;
    struct Node* rear;
} Deque;

Deque* createDeque() {
    Deque* deque = (Deque*)malloc(sizeof(Deque));
    deque->front = NULL;
    deque->rear = NULL;
    return deque;
}

int isEmpty(Deque* deque) {
    return deque->front == NULL;
}

void insertFront(Deque* deque, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = deque->front;

    if (isEmpty(deque)) {
        deque->rear = newNode;
    }
    deque->front = newNode;
}

void insertRear(Deque* deque, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty(deque)) {
        deque->front = deque->rear = newNode;
    } else {
        deque->rear->next = newNode;
        deque->rear = newNode;
    }
}

int deleteFront(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque underflow at front!\n");
        return -1;
    }
    struct Node* temp = deque->front;
    int value = temp->data;
    deque->front = deque->front->next;

    if (deque->front == NULL) {
        deque->rear = NULL;
    }
    free(temp);
    return value;
}
int deleteRear(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque underflow at rear!\n");
        return -1;
    }
    struct Node* temp = deque->front;
    int value;

    if (deque->front == deque->rear) {
        value = deque->rear->data;
        free(deque->rear);
        deque->front = deque->rear = NULL;
        return value;
    }

    while (temp->next != deque->rear) {
        temp = temp->next;
    }
    value = deque->rear->data;
    free(deque->rear);
    deque->rear = temp;
    deque->rear->next = NULL;

    return value;
}

void display(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty.\n");
        return;
    }
    struct Node* temp = deque->front;
    printf("Deque elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){

    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    Deque* deque = createDeque();
    for(int i = 0; i < num; i++){
        int value;
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        insertRear(deque, value);
    }
    display(deque);
    printf("Deleting from front: %d\n", deleteFront(deque));
    display(deque);
    printf("Deleting from rear: %d\n", deleteRear(deque));
    display(deque);
    free(deque);
    printf("Deque operations completed.\n");
 return 0;

}
/*
Enter the number of elements: 5
Enter value 1: 1
Enter value 2: 2
Enter value 3: 3
Enter value 4: 4
Enter value 5: 5
Deque elements: 1 2 3 4 5 
Deleting from front: 1
Deque elements: 2 3 4 5 
Deleting from rear: 5
Deque elements: 2 3 4
Deque operations completed.*/
