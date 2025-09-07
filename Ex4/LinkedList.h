#pragma once

typedef struct ListNode
{
    char data[4];
    struct ListNode* link;
    
} listNode;

typedef struct{
    listNode* head;

} linkedList_h;

linkedList_h* createLinkedList_h(void);
void freeLinkedList_h(linkedList_h* L);
void printList(linkedList_h* L);
void insertLinkedList(linkedList_h *L, char *x);
void middleLinkedList(linkedList_h* L, listNode* pre, char *x);
void lastLinkedList(linkedList_h* L, char *x);
void deleteNode(linkedList_h* L,  listNode* p);
listNode* searchNode(linkedList_h* L, char *x);
void revers(linkedList_h* L);
