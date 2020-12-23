#include"search.h"
int main(){
	//1
	printf("*折半查找\n");	
	int a[N] = {1,3,4,6,9,11,17,21,22,23,29};
	selectsort(a,N);
	display(a,N);
	printf("请输入带查找元素：\n");
	int x;
	scanf("%d",&x);
	int t = binarysearch(a,N,x);
	if(t == -1){
		printf("没有要查找的数据\n\n");
	}
	else printf("你要查找的数据在第%d个位置\n\n",t+1);

	//2
	printf("*二叉排序树查找\n");
	pnode root = NULL;
	datatype nodeArray[N] = {15,6,18,3,7,17,20,2,4,13,9};
	display(nodeArray,N);
	create(&root,nodeArray,N);
	printf("请输入要查找的元素：\n");
	datatype locate;
	scanf("%d",&locate);
	if(search(root,locate) != NULL)printf("数据中有你要查找的数%d\n\n",search(root,locate)->key);
	else printf("数据中无此元素\n\n");
	
	//3
	printf("*哈希查找\n");
	int result,y;
   	HashTable hashTable;
    	int arr[HASHSIZE] = {3,4,6,22,11,21,23,22,19,33,17};
    	InitHashTable(&hashTable);
    	for (int i = 0;i < HASHSIZE;i++){
        	Insert(&hashTable,arr[i]);
   	}
 	DisplayHashTable(&hashTable);
	printf("请输入要查找的数：\n");
	scanf("%d",&y);
    	result = Search(&hashTable,y);
    	if (result == -1){
        	printf("没有找到此元素！\n\n");
    	}else{
        printf("此元素在哈希表第%d个位置\n\n",result+1);
	}	
}










