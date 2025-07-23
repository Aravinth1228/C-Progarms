//Priority Queue with Array Implementation in C
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int arr[MAX];
    int priority[MAX];
    int size;
} PriorityQueue;

void 
