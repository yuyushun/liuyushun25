#include<stdio.h>
#include<stdlib.h>
#ifndef search_h
#define search_h
#include<time.h>
#define N 11
#define HASHSIZE 11
#define NULLKEY -1
typedef int datatype;
void display(int a[],int);

//折半查找
void selectsort(int a[],int n);                //直接选择排序
int binarysearch(int a[],int n,int x);         //折半查找

//二叉排序树查找
typedef struct node{
        datatype key;                //关键字
        struct node *left;           //左孩子指针
        struct node *right;          //右孩子指针
        struct node *parent;         //指向父节点指针
}node,*pnode;

void insert(pnode *root,datatype key);                         //插入结点
void create(pnode *root,datatype *keyArray,int length);        //创造树
pnode search(pnode root,datatype key);                         //查找元素

//哈希查找
typedef struct HashTable{
	int *elem;
	int count;
}HashTable;

void InitHashTable(HashTable *hashTable);            //初始化哈希表
datatype Hash(int key);                              //哈希函数
void Insert(HashTable *hashTable,int key);           //插入
datatype Search(HashTable *hashTable,int key);       //查找
void DisplayHashTable(HashTable *hashTable);         //打印


#endif
