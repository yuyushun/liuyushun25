#include"graph.h"

int main()
{
    graph ga;
    int i,j;
    printf("*图邻接矩阵存储和图的遍历\n");
    printf("\n1.输入图的基本信息：");
    createGraph(&ga);
    printf("\n2.无向图的邻接矩阵：\n");
    for (i=0;i<ga.vexnum;i++)
    {
        for (j=0;j<ga.vexnum;j++)
            printf("%3d",ga.arcs[i][j]);
        printf("\n");
    }
//    printf("\n3.图的遍历：\n");
    init_visit(); /*初始化访问数组*/
    tdfs(&ga);    /*深度优先搜索图*/
    init_visit();
    tbfs(&ga);    /*广度优先搜索图*/
    return 0;
}
