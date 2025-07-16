#include <stdio.h>
#define MAX 100
int queue[MAX];
int front = -1, rear = -1;
int isEmpty() {
    if (front == -1) {
        return 1;
    }
    return 0;
}

int isFull() {
    if (rear == MAX - 1 || front > rear) {
        return 1;
    }
    return 0;
}

int enqueue(int value){
    if (isFull()) {
        printf("Queue is full\n");
        return -1;
    }
    if (front == -1) {
        front = 0; 
    }
    queue[++rear] = value;
    return 0;
}

int dequeue(){
    if(isEmpty()){
        printf("Queue is Empty\n");
        return -1;
    }
     int data;
     data = queue[front];
     front++;
     printf("Dequeued value: %d\n", data);
    
    return data;
}
int display(){
    for(int i= front;i<=rear;i++){
        printf("%d -> ", queue[i]);
    }
    printf("NULL\n");
    return 0;
}

int main(){
    int n;
    printf("Enter the Limit:");
    scanf("%d", &n);
    printf("Enter value to enqueue: ");
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        enqueue(a[i]);
    }
    printf("Displaying values:\n");
    display(); 
    printf("Displaying values after dequeue:\n");
    dequeue();
    display();
    return 0;
}
/*
Enter the Limit:5
Enter value to enqueue: 1
2
3
4
5
Displaying values:
1 -> 2 -> 3 -> 4 -> 5 -> NULL
Displaying values after dequeue:
Dequeued value: 1
2 -> 3 -> 4 -> 5 -> NULL
*/