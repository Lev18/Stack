#include "stack.h"
#include "list.h"

#include <memory.h>
#include <stdlib.h>
#include <stdio.h>


void init_stack(Stack* head) {
  List lst = {
    .head = NULL,
    .tail = NULL
  };

  head->list = lst;
  head->size = 0;
}

void push(Stack* stack, int value) {
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
}
