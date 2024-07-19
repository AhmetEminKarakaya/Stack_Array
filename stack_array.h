#pragma once

#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 20

typedef struct Stack
{
	int data[STACK_SIZE];
	int top;
}Stack,*HndStack;

HndStack initstack();
int isFull(HndStack hnd);
int isEmpty(HndStack hnd);
void push(HndStack hnd, int val);
int pop(HndStack hnd);
void destroy(HndStack hnd);
void makeempty(HndStack hnd);
