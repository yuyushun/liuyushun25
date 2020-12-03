#include"stack.h"


//初始化链栈

void Initstack(lstack *stack){
	stack ->top = NULL;
	stack ->size = 0;
	return;
}


//元素x进栈
void Push(lstack *stack,datatype x){
	if(stack == NULL){exit(1);}
	Node *node = (Node*)malloc(sizeof(Node));
	node ->data = x;
	node ->next = stack ->top;
	stack ->top = node;
	stack ->size++;
	 
}



//元素出栈
void Pop(lstack *stack){
	if(stack == NULL){exit(1);}
	stack ->top = stack ->top ->next;
	stack ->size--;
	return;
}




//栈的长度
int Length(lstack *stack){
	if(stack == NULL){printf("该栈不存在\n"); exit(1);}
	return stack ->size;
}




//取栈顶元素
datatype GetTop(lstack *stack){
	return stack ->top ->data;
}


//判断是否为空栈
void Empty(lstack *stack){
	if(stack ->size < 1){printf("链栈为空\n");}
	else{printf("链栈不为空\n");}
	return;
}





//输出栈
void Dispstack(lstack *stack){
	printf("此栈链：\n");
	Node *node = stack ->top;
	int i = 1;
	while(node != NULL){
		printf("第%d个元素：%d\n",i,node ->data);
		node = node ->next;
		i++;}
	return;
}




            


//表达式求值


int priority(Elemtype x){
	switch(x){
		case'+':
		case'-':
		case'=':return 1;
		case'*':
		case'/':return 2;
		case'(':return 3;
                }
}

double comptu(double x, double y, Elemtype z){
	switch(z){
		case'+':return x+y;
		case'-':return x-y;
		case'*':return x*y;
		case'/':return x/y;
	}
}


int Evaluate(){
	printf("请输入计算式：");
	Elemtype z;Elemtype s2[500];double s1[500];Elemtype t[1001];
	scanf("%s",t);
	int top1 = -1,top2 = -1; double x,y;
	for (int i = 0; i<strlen(t); i++){
		if(t[i]>='0'&&t[i]<='9'){
			double v = 0;
			while(t[i]>='0'&&t[i]<='9'){
				v = 10*v+t[i]-'0';
				i++;
			}
			if(t[i] == '.'){
				int r = 10;
				i++;
				while(t[i]>='0'&&t[i]<='9'){
					v = v + (t[i]-'0')/r;
					r = 10*r;
					i++;
				}
			}
			s1[++top1] = v;
		}if(t[i] == ')'){
			while (s2[top2] != '('){
				y = s1[top1--];
				x = s1[top1--];
				z = s2[top2--];
				s1[++top1]=comptu(x,y,z);
			}
			top2--;}else{
				while(top2 !=-1&&s2[top1]!='('&&priority(t[i])<=priority(s2[top2])){
					y = s1[top1--];
					x = s1[top1--];
					z = s2[top2--];
					s1[++top1] = comptu(x,y,z);
				}
				s2[++top2] = t[i];
			}
	}
	printf("%s",t);
	printf("=%.2f\n",s1[top1]);
}
































