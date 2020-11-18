#include"listg.h" 

//初始化链表
void initList(List *list){
	    list->head = NULL;
	    list->tail = NULL;
            list->current = NULL;
	    return;
 }


//头插和尾插
void addHead(List *list, DataType data){
 //1、创建一个节点
     Node *node = (Node *)malloc(sizeof(Node));
	   node->data = data;
           node->next = NULL;
			   
 //2、插入节点准备
if(list->head == NULL){
      list->tail = node; }
   else{
      node->next = list->head;
       }
//3、插入节点
      list->head = node;
      return;
}


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

//在链表list的第k个位置插入元素x
void listinsert(List *list, int k, DataType x){
	if(k<1)exit(1);
	Node *p =list->head;
	int i = 1;
	while (p && i<k-1){
		p = p->next;
		i++;      }
        if(!p)exit(1);
	Node *s = (Node*)malloc(sizeof(Node));
	s->data = x;
	s->next = p->next;
	p->next = s;
}




//删除元素data
void delNode(List *list, DataType data){
      Node *prev = list->head;
      Node *node = prev->next;
								    
      while(node != NULL){
      if(node->data == data){
         prev->next = prev->next->next;}
      else{  
	 prev->next = node;
          }
      }
}



//删除链表list的第k个元素
void listdelete(List *list, int k){
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



//判断链表是否为空
int empty(List *list){
       if(list->head == NULL){printf("链表为空\n");}
       else{printf("链表不为空\n");}
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




//查找值为data的元素
Node *getNode(List *list, DataType data){
      Node *node = (Node *)malloc(sizeof(Node));
      node = list->head;
      while(node != NULL){
      if(data == node->data){return node;}
      else{node = node->next;}
		         }
      return NULL;
		                         }



//获取链表长度
int getLength(List *list){
      Node *node = (Node*)malloc(sizeof(Node));
      node = list->head;
      int i = 0;
      while(node != NULL){node = node->next;i++;}
      return i;
                         }




//输出链表
void dispList(List *list){
      Node *node = (Node *)malloc(sizeof(Node));
      node = list->head;												      int i = 0;
      while(node != NULL){printf("第%d个数据: %d\n", i + 1, node->data);
            node = node->next;i++;														  }
      return;
 }



 

//清空链表
void Clearlist(List *list){
	Node *p,*q;
	p = list->head;
	while(p){
		q = p;
		p = p->next;
		free(q);
	        }
        list->tail = NULL;
}





//约瑟夫问题
int yuesefu(){
	int k = 0;
	Node *p,*q,*r;
	p = q = (Node*)malloc(sizeof(Node));
	p->data = 1;
	for(int i = 2;i<=n;i++){
		r = (Node*)malloc(sizeof(Node));
		r->data = i;
		q->next = r;
		q = r;}
	q->next = p;
	q = p;

/*     while(q->next != q){
		k++;
		if(k == m){
			p->next = q->next;
			free(q);
			q = p->next;
			k = 0;}
		else{p = q;q = q->next;}
	}
	printf("最后一个人编号：%d\n",q->data);
        
}
*/

	while(q->next != q){
		if(k<m-1){p = q;q = q->next;k++;}
		else{p->next = q->next;free(q);q = p->next;k=0;}
		}
	printf("约瑟夫最后一人编号：%d\n",q->data);      
	}


		









