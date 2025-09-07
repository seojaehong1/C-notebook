#include <stdio.h>
#include "stackS.h"

int top = -1; 

int isStackEmpty() {
    if(top == -1) return 1;
    else return 0;
}

int isStackFull() {
    if(top == STACK_SIZE - 1) return 1;
    else return 0;
}

void push(element item) {
    if(isStackFull()) {
        printf("Stack is full!\n");
        return;
    }
    else {
        stack[++top] = item;
    }
}

element pop(void) {
    if(isStackEmpty()) {
        printf("\n\n Stack is empty!\n");
        return 0;
    }
    else return stack[top--];
}

element peek(void) {
    if(isStackEmpty()) {
        printf("\n\n Stack is empty!\n");
        return 0;
    }
    else return stack[top];
}

void printStack(void) {
    int i;
    printf("\n STACK [ ");
    for(i =0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("] ");
}