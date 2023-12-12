#include "stack.h"
#include <stdio.h>

void print_elem(Stack* st) {
  ListNode* tmp = st->list.head;
  while (tmp != NULL) {
    printf("%d\n", tmp->data);
    tmp = tmp->next;
  }
}

int main() {
  Stack st;
  
  push(&st,14);  
  push(&st,15);  
  push(&st,16);
  push(&st,17);
  pop(&st);
  pop(&st);
  print_elem(&st);

   printf("Top element of the stack is` %d\n",  top(&st)->data);
}
