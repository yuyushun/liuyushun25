#include"queue.h"

//链队列
//链队列初始化
void init_queue(queue *lqueue){
	lqueue->front = lqueue->rear = (node*)malloc(sizeof(node));
	lqueue->size = 0;
	printf("\n*链队列----链队列初始化\n");
}


//是否为空
void empty(queue *lqueue){
	if(lqueue->front == lqueue->rear){
		printf("此链队列此时为空\n");
	}
	else printf("此链队列此时不为空\n");
}


//元素x进队列
void push(queue *lqueue,datatype x){
	node *p = (node*)malloc(sizeof(node));
	p->data = x;
	p->next = NULL;
	lqueue->rear->next = p;
	lqueue->rear = p;
	lqueue->size++;
printf("输入元素：%d\t",x);
}


//元素出队列
void pop(queue *lqueue){
	if(lqueue->front->next == NULL){printf("输出错误！队列中无元素!\n");exit(1);}
	node *p = (node*)malloc(sizeof(node));
	p = lqueue->front->next;
	lqueue->front = p->next;
	lqueue->size--;
	printf("输出元素：%d\t",p->data);
	free(p);
}

//对列头元素
void get_front(queue *lqueue){
	if(lqueue->front->next != NULL){
		printf("队列头元素：%d\n",lqueue->front->data);
	}
	else{
		printf("队列头元素：无\n");
	}

}


//队列尾I元素
void get_rear(queue *lqueue){
	if(lqueue->rear != NULL){
		printf("队列尾元素：%d\n",lqueue->rear->data);
	}
	else{
		printf("队列尾元素：无\n");
	}
}


//队列长度
void length(queue *lqueue){
	printf("队列长度：%d",lqueue->size);
}


//打印队列
void dis_queue(queue *lqueue){
	node *p = (node*)malloc(sizeof(node));
	p = lqueue->front;
	printf("\n此链队列：");
//	while( p!= NULL){                       //1
	for(int m = 0;m<lqueue->size;m++){	//2
	printf("%d  ",p->data);
		p = p->next;
	}
	printf(".\n");
}


//优先队列(最大值先输出)
void pri_pop(queue *lqueue){
	printf("优先队列：");
	if(lqueue->front == NULL){exit(1);}
	while(lqueue->size != 0){
	int p = lqueue->front->data;
	node *t = (node*)malloc(sizeof(node));
	t = lqueue->front;
	for(int m=0;m<lqueue->size-1;m++){
		t = t->next;
		if(p<t->data){p = t->data;t->data = lqueue->front->data;lqueue->front->data = p;}
	}
	printf("%d  ",lqueue->front->data);
	lqueue->front=lqueue->front->next;
	lqueue->size--;
	}
	printf(".");
}





//双端队列
//初始化
void init_deque(Deque *deque){
	printf("\n*双端队列----双端队列初始化\n");
	deque->front = deque->rear = (denode*)malloc(sizeof(denode));
	deque->size = 0;
}


void push_front(Deque *deque,datatype x){
	denode *p = (denode*)malloc(sizeof(denode));
	p->data = x;
	p->left = NULL;
	p->right = deque->front;
	deque->front->left = p;
	deque->front = p;
	deque->size++;
	printf("队头输入：%d\t",x);
}


void push_rear(Deque *deque,datatype x){
	denode *p = (denode*)malloc(sizeof(node));
	p->data = x;
	p->left = deque->rear;	
	deque->rear->left->right = p;
	deque->rear = p;
	deque->size++;
	printf("队尾输入：%d\t",x);
}


void pop_front(Deque *deque){
	denode *p = (denode*)malloc(sizeof(denode));
	p = deque->front;
	deque->front = p->right;
	deque->size--;
	printf("队头输出：%d\t",p->data);
	free(p);

}


void pop_rear(Deque *deque){
	denode *p = (denode*)malloc(sizeof(denode));
	p = deque->rear;
	deque->rear = p->left;
	deque->size--;
	printf("队尾输出：%d\t",p->data);
	free(p);
}


void get_defront(Deque *deque){
	printf("双端队列头元素：%d\n",deque->front->data);
}


void get_derear(Deque *deque){
	printf("双端队列尾元素：%d\n",deque->rear->data);
}


void delength(Deque *deque){
	printf("双端队列长度：%d\n",deque->size);
}

void dempty(Deque *deque){
	if(deque->size == 0){printf("此时双端队列为空\n");}
	else{printf("此时双端队列不为空");}
}




void dis_deque(Deque *deque){
	printf("\n此双端队列：");
	denode *p = (denode*)malloc(sizeof(denode));
	p = deque->front;
//	while(p != NULL){                                  //1
	for(int m = 0;m<deque->size;m++){                  //2
	printf("%d  ",p->data);
		p = p->right;
	}
	printf(".\n");
}













