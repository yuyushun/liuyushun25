#include"stack.h"

int main(){
	printf("\n*链栈的实现\n");
	lstack *stack = (lstack*)malloc(sizeof(lstack));
	Initstack(stack);
	Push(stack,6);
	Push(stack,24);
	Push(stack,11);
	Push(stack,21);
	Push(stack,1);
	Empty(stack);
	Pop(stack);
	printf("栈顶元素：%d\n",GetTop(stack));
	printf("链栈长度：%d\n",Length(stack));
	Dispstack(stack);
	printf("\n*表达式求值\n");
	Evaluate();
	return 0;
}

	
