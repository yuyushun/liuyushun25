#include"tree.h"

int main()
{
    printf("先序输入二叉树数据(# = NULL)：");
    biNode *root;
    createTree(&root);
    printf("先序遍历结果：");
    preOrder(root);
    printf("\n\n中序遍历结果:  ");
    inOrder(root);
    printf("\n\n后序遍历结果： ");
    postOrder(root);
    cal_Node(root);
    cal_Leaf(root);
    printf("\n\n节点数: %d\n",c_Node);
    printf("叶子点数：%d\n",c_Leaf);
    printf("打印叶子节点: ");
    printLeaf(root);
    printf("\n二叉树高度：%d\n",cal_Depth(root));

}
