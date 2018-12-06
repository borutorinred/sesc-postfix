#include <stdlib.h>
#include "stack.h"

void StackPush(Stack **s, int val) {
  Stack *prev = *s;
  *s = (Stack*)malloc(sizeof(Stack));
  (*s)->val = val;
  (*s)->prev = prev;
}

int StackPop(Stack **s) {
  int val = (*s)->val;
  Stack *prev = (*s)->prev;
  free(*s);
  *s = prev;
  return val;
}

int StackHas(Stack **s, int n) {
  Stack *i = *s;
  for (; n > 0 && i != NULL; n--)
    i = i->prev;
  return n;
}
