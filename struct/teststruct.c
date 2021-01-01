#include"struct.h"

int main(){
	List *list = (List *)malloc(sizeof(List));
	initList(list);
	addHead(list,8);
	addHead(list,100);
	addHead(list,10);
	addTail(list,4);
	addTail(list,9);
	addTail(list,2);
	delNode(list,6);
	getdatalist(list,1);
	dispList(list);
	return 0;
}


