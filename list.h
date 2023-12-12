#ifndef LIST_H
#define LIST_H


typedef struct ListNode{
  struct ListNode* next;
  int data;
}ListNode;

typedef struct {
  ListNode* head;
  ListNode* tail;
}List;

void list_init(List* head);

#endif
