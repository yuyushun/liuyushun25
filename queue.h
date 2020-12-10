#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#ifndef queue_h
#define queue_h

typedef int datatype;

typedef struct node{
	datatype data;
	struct node *next;
}node;

typedef struct queue{
	node *front;
	node *rear;
	int size;		
}queue;


typedef struct denode{
	struct denode *left;
	struct denode *right;
	datatype data;
}denode;

typedef struct dequeue{
	denode *front;
	denode *rear;
	int size;
}Deque;
	

//链队列
void init_queue(queue *lqueue);                     //初始化
void empty(queue *lqueue);                         //判断是否为空
void push(queue *lqueue,datatype x);               //元素入队
void pop(queue *lqueue);                           //元素出队
void get_front(queue *lqueue);                      //链队头元素
void get_rear(queue *lqueue);                       //链队尾元素
void length(queue *lqueue);                        //链队长度
void dis_queue(queue *lqueue);                      //输出链队

//优先队列(最大数先出)
void pri_pop(queue *lqueue);

//双端队列
void init_deque(Deque *deque);
void push_front(Deque *deque,datatype x);
void push_rear(Deque *deque,datatype x);
void pop_front(Deque *deque);
void pop_rear(Deque *deque);
void get_defront(Deque *deque);
void get_derear(Deque *deque);
void dempty(Deque *deque);
void delength(Deque *deque);
void dis_deque(Deque *deque);



#endif
