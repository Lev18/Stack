#ifndef  STACK_H
#define STACK_H

#include "list.h"

typedef struct {
  List list;
  int size;
}Stack;

void init_stack(Stack* stack);
void push(Stack* head, int data);
void pop(Stack* stack);
void top(Stack* stack);

#endif
