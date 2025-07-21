// Multiple queuse in c
#include<stdio.h>
#define MAX 100
typedef struct Queue {
    int arr[MAX];
    int front, rear;
} Queue;

int deq