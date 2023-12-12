#include "stack.h"
#include "list.h"

#include <memory.h>
#include <stdlib.h>
#include <stdio.h>
int is_init = 0;

void init_stack(Stack* head) {
  List lst = {
    .head = NULL,
    .tail = NULL
  };

  head->list = lst;
  head->size = 0;
  is_init = 1;
}

void push(Stack* stack, int value) {
  if (is_init == 0) {
    init_stack(stack);
  }

  if (stack->list.head == NULL) {
    stack->list.head = malloc(sizeof(ListNode));
    stack->list.head->data = value;
    stack->list.tail = stack->list.head;
    stack->list.head->next = NULL;
  }
  else {
    ListNode* tmp = malloc(sizeof(ListNode));
    tmp->data = value;
    tmp->next = stack->list.head;
    stack->list.head = tmp;
  }
  ++stack->size;
}

void pop(Stack* stack) {

  if (stack->list.head != NULL) {
    ListNode* tmp = stack->list.head;
    stack->list.head = tmp->next;
    tmp->next = NULL;
    free(tmp);
  }
}

ListNode* top(Stack* stack) {
  return stack->list.head;
}
