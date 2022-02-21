#include <stdio.h>
#include "stack.h"
int main()
{
	int vec[] = {1, 2, 3, 4, 5, 6};
	Stack stack = stackinit(6);
	for(int i=5;i>=0;i--)
	{
		stackpush(&stack, vec[i]);
	}
	while (stack.len > 0)
	{
		printf("%d\n", stackpop(&stack));
	}
	stackdelete(&stack);
}
