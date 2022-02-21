#pragma once
typedef struct Stack
{
	int* vec;
	unsigned int len;
	unsigned int maxlen;
} Stack;

Stack stackinit(unsigned int maxlen);
void stackpush(Stack* stack, int val);
int stackpop(Stack* stack);
void stackdelete(Stack* stack);
