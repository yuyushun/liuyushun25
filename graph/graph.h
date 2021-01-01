#ifndef graph_h
#define graph_h
#include<stdio.h>
#define N 20
#define TRUE 1
#define FALSE 0
int visited[N];        /*访问标志数组*/
typedef struct     /*队列的定义*/
{
    int data[N];
    int front,rear;
}queue;

typedef struct      /*图的邻接矩阵*/
{
    int vexnum,arcnum;
    char vexs[N];
    int arcs[N][N];
}
graph;

void createGraph(graph *g);      //建立一个无向图的邻接矩阵
void dfs(int i,graph *g);         //从第i个顶点出发深度优先搜索
void tdfs(graph *g);             //深度优先搜索整个图
void bfs(int k,graph *g);        //从第k个顶点广度优先搜索
void tbfs(graph *g);            //广度优先搜索整个图
void init_visit();              //初始化访问标识数组

#endif
