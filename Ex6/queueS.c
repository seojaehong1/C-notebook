#include <stdio.h>
#include <stdlib.h>
#include "queueS.h"

QueueType* createQueue(void){
    QueueType* Q;
    Q = (QueueType*)malloc(sizeof(QueueType));
    Q->front = -1;
    Q->rear = -1;
    return Q;
}

int isQueueEmpty(QueueType* Q){
    if(Q -> rear == Q_SIZE -1){
        printf("Queue is full\n\t");
        return 1;
    }
     else return 0;
}

void enQueue(QueueType* Q, element item){
    if(isQueueFull(Q)) return 0;
    else{
        Q -> rear++;
        Q -> queue[Q->rear] = item;
    }
}

element deQueue(QueueType* Q){
    if(isQueueEmpty(Q)) return 0;
    else{
        Q -> front++;
        return Q -> queue[Q->front];
    }
}

element peekQ(QueueType* Q){
    if(isQueueEmpty(Q)) return 0;
    else{
        return Q -> queue[Q->front + 1];
    }
}

void printQ(QueueType* Q){
    int i;
    if(isQueueEmpty(Q)) return;
    printf("Queue : [");
    for(i = Q -> front + 1; i <= Q -> rear; i++){
        printf("%3c ", Q -> queue[i]);
    printf(" ]");
    }
}