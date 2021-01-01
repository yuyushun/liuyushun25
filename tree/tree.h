#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#ifndef tree_h
#define tree_h
int c_Node;     //节点数
int c_Leaf;     //叶子数
int depth;//二叉树高度
typedef char ElemType;

typedef struct Node         //节点
{
    ElemType data;          //节点数据
    struct Node *lchild;        //左孩子
    struct Node *rchild;        //右孩子
} biNode, *biTree;

void createTree(biNode **root);
void preOrder(biNode *root);
void inOrder(biNode *root);
void postOrder(biNode *root);
void cal_Node(biNode *root);
void cal_Leaf(biNode *root);
void printLeaf(biNode *root);
int cal_Depth(biNode *root);

#endif
