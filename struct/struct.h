#ifndef struct_h
#define struct_h
#include<stdio.h>
#include<stdlib.h>

typedef int DataType;

typedef struct node_{
              DataType data;
              struct node_ *next;
}Node;

typedef struct list_{
              Node *head;
              Node *tail;
	      Node *current;
}List;

void initList(List *);                       //初始化链表
void addHead(List *, DataType);              //头插
void addTail(List *, DataType);              //尾插
void delNode(List *, DataType);              //删除某一个元素
int getdatalist(List *, int );               //求链表某一个位置的值
void dispList(List *);                       //链表输出

#endif
