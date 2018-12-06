typedef struct Stack Stack;
struct Stack {
  int val;
  Stack *prev;
};

void StackPush(Stack **s, int val);
int StackPop(Stack **s);
int StackHas(Stack **s, int n);
