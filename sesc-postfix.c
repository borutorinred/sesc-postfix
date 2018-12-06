#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

void assertStackHas(Stack **s, int n) {
  if (StackHas(s, n)) {
    printf("_error\n");
    exit(0);
  }
}

int main(void) {
  Stack *s = NULL;
  char ch;
  while(scanf("%c", &ch) && ch != '\n') {
    if ('0' <= ch && ch <= '9')
      StackPush(&s, ch - '0');
    else if (ch == '~') {
      assertStackHas(&s, 1);
      int a = StackPop(&s);
      StackPush(&s, -a);
    }
    else if (ch == '+') {
      assertStackHas(&s, 2);
      int b = StackPop(&s);
      int a = StackPop(&s);
      StackPush(&s, a + b);
    }
    else if (ch == '-') {
      assertStackHas(&s, 2);
      int b = StackPop(&s);
      int a = StackPop(&s);
      StackPush(&s, a - b);
    }
    else if (ch == '*') {
      assertStackHas(&s, 2);
      int b = StackPop(&s);
      int a = StackPop(&s);
      StackPush(&s, a * b);
    }
    else if (ch == '/') {
      assertStackHas(&s, 2);
      int b = StackPop(&s);
      int a = StackPop(&s);
      StackPush(&s, a / b);
    }
    else if (ch == '%') {
      assertStackHas(&s, 2);
      int b = StackPop(&s);
      int a = StackPop(&s);
      StackPush(&s, a % b);
    }
  }

  if (StackHas(&s, 1) != 0 || StackHas(&s, 2) == 0) {
    printf("-error\n");
    exit(0);
  }

  printf("%d", StackPop(&s));

  return 0;
}

