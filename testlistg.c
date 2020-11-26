#include "listg.h"

 int main(int argc, char **argv)
{
     List *list = (List *)malloc(sizeof(List));
     initList(list);
     addHead(list, 4);
     addHead(list, 6);
     addHead(list, 8);
     addHead(list, 10);
     addTail(list, 9);
     listinsert(list, 2,100);
     listdelete(list, 4);
     empty(list);
     dispList(list);
     getdatalist(list, 2);
     printf("链表长度: %d\n", getLength(list));
     yuesefu();
     return 0;     
}
