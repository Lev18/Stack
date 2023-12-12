#include "stack.h"
#include <stdio.h>

void print_elem(Stack* st) {
  while (st->list.head != NULL) {
    printf("%d\n", st->list.head->data);
    st->list.head = st->list.head->next;
  }
}

int main() {
  Stack st;
  init_stack(&st);
   push(&st,14);  
   push(&st,15);  
   push(&st,16); 
   push(&st,17);
   print_elem(&st);
}
