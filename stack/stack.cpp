#include <cstdio>
#include <cstdlib>
#include "stack.h"

Stack stackinit(unsigned int maxlen)
{
	int* vec = (int*)calloc(maxlen, sizeof(int));
	return {vec, 0, maxlen};
}

void stackpush(Stack* stack, int val)
{
	if (stack->len >= stack->maxlen)
	{
		printf("Stack plin\n");
		return;
	}
	stack->vec[stack->len] = val;
	stack->len++;
}

int stackpop(Stack* stack)
{
	if (stack->len == 0)
	{
		printf("Stack gol\n");
		return INT_MAX;
	}
	stack->len--;
	return stack->vec[stack->len];
}

void stackdelete(Stack* stack)
{
	free(stack->vec);
}
