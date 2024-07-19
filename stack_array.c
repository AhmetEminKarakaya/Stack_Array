#include "stack_array.h"

HndStack initstack()
{
	HndStack hnd = (HndStack)malloc(sizeof(Stack));
	if (hnd == NULL)
	{
		printf("initstack Error...");
		exit(EXIT_FAILURE);
	}
	hnd->top = 0;

	return hnd;
}

int isFull(HndStack hnd)
{
	return hnd->top == STACK_SIZE;
}

int isEmpty(HndStack hnd)
{
	return hnd->top == 0;
}

void push(HndStack hnd, int val)
{
	if (isFull(hnd))
		printf("Stack is full...");
	
	hnd->data[hnd->top++] = val;	
}

int pop(HndStack hnd)
{
	if (isEmpty(hnd))
		printf("Stack is empty...");

	return hnd->data[--hnd->top];
}

void destroy(HndStack hnd)
{
	free(hnd);
}

void makeempty(HndStack hnd)
{
	hnd->top = 0;
}