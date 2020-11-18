#ifndef listg_h
#define listg_h
#include <stdlib.h>
#include <stdio.h> 
#define n 20
#define m 3

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
 
void initList(List *);                             //初始化链表
void addHead(List *, DataType);                    //头插
void addTail(List *, DataType);                    //尾插
void listinsert(List *,int k, DataType);             //在链表某一个位置插入一个元素
void listdelete(List *, int );                     //删除某一个位置的元素 
void delNode(List *, DataType);                    //删除某一个元素
int empty(List *);                                 //判断链表是否为空
Node *getNode(List *, DataType);                   //查找某一个值的元素
int getdatalist(List *, int );                     //求链表某一个位置的值
int getLength(List *);                             //获取链表长度
void dispList(List *);                             //链表输出
void Clearlist(List *);                            //清空链表
int yuesefu();                                     //约瑟夫问题
#endif       
