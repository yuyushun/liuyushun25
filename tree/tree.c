#include"tree.h"

int c_Node = 0;     //节点数
int c_Leaf = 0;     //叶子数
int depth = 0;      //二叉树高度

//先序建立二叉树
void createTree(biNode **root)
{

    ElemType data;
    scanf("%c",&data);
    if(data == '#')
    {
        (*root)=NULL;
    }

    else
    {
        *root = (biNode *)malloc(sizeof(biNode));
        if((*root) == NULL)
        {
            printf("分配空间失败!\n");
            exit(0);
        }
        (*root)->data = data;
        createTree(&((*root)->lchild));
        createTree(&((*root)->rchild));
    }

}

//先序遍历二叉树
void preOrder(biNode *root)
{
    if(root)
    {
        printf("%c ",root->data);
        preOrder(root->lchild);
        preOrder(root->rchild);
    }

}


//中序遍历二叉树
void inOrder(biNode *root)
{
    if(root)
    {
        inOrder(root->lchild);
        printf("%c ",root->data);
        inOrder(root->rchild);
    }

}


//后序遍历二叉树
void postOrder(biNode *root)
{
    if(root)
    {
        postOrder(root->lchild);
        postOrder(root->rchild);
        printf("%c ",root->data);
    }
}


//统计节点数
void cal_Node(biNode *root)
{
    if(root){
        c_Node++;
        cal_Node(root->lchild);
        cal_Node(root->rchild);
    }
}

//统计叶子数
void cal_Leaf(biNode *root)
{
    if(root)
    {
        if(root->lchild==NULL&&root->rchild==NULL)c_Leaf++;
        cal_Leaf(root->lchild);
        cal_Leaf(root->rchild);
    }
}

//打印叶子数据
void printLeaf(biNode *root)
{
    if(root)
    {
        if(root->lchild==NULL&&root->rchild==NULL)
            printf("%c ",root->data);
        printLeaf(root->lchild);
        printLeaf(root->rchild);
    }
}

//计算二叉树深度                            
int cal_Depth(biNode *root)
{
    if(root == NULL) return 0;
    if(root)
    {
        int hl = cal_Depth(root->lchild);
        int hr = cal_Depth(root->rchild);
        return hl>hr?hl+1:hr+1;
    }
}


