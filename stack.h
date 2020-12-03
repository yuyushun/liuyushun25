#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#ifndef stack_h
#define stack_h

typedef int datatype;
typedef char Elemtype;

typedef struct node{
	datatype data;
	struct node *next;
}Node;



typedef struct stack{
	Node *top;
	int size;
}lstack;
   

void Initstack(lstack *);
void Push(lstack *, datatype);
void Pop(lstack *);
int Length(lstack *);
datatype GetTop(lstack *);
void Empty(lstack *);
void Dispstack(lstack *);
int Evaluate();









#endif
