#include"struct.h"

//初始化链表
void initList(List *list){                                                                                                 list->head = NULL;
            list->tail = NULL;
	   list->current = NULL;
	    return;
 }


//头插
void addHead(List *list, DataType data){
        Node *node = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	if(list->head == NULL){
                 list->tail = node; }
        else{
                node->next = list->head;
        }
        list->head = node;
        return;
}

//尾插
void addTail(List *list, DataType data){
      Node *node = (Node *)malloc(sizeof(Node));
      node->data = data;
      node->next = NULL;
      if(list->head == NULL){
         list->head = node; }
      else{
         list->tail->next = node;
           }
         list->tail = node;

      return;
}


//删除元素data
void delNode(List *list, int k){
	if(k<1)exit(1);
	Node *p = list->head;
	int i = 1;
	while (p->next && i<k-1){
	       p = p->next;i++; }
        if(p->next == NULL)exit(1);
	Node *q = p->next;
	p->next = q->next;
	free(q);
}

//查找链表list的第k个元素的值
int getdatalist(List *list, int k){
        if(k<1)exit(1);
        Node *p = list->head;
        int i = 1;
        while(p && i<k){
                p = p->next;
                i++;   }
        if(!p)exit(1);
         p->data;
        int a = p->data;
        printf("第%d个位置的值为%d\n",k,a);
        return 0;

}


//输出链表
void dispList(List *list){
      Node *node = (Node *)malloc(sizeof(Node));
      node = list->head;                                                                                                      int i = 0;
      while(node != NULL){printf("第%d个数据: %d\n", i + 1, node->data);
            node = node->next;i++;                                                                                                                }
      return;
}


