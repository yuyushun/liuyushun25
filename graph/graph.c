#include"graph.h"


//建立无向图的邻接矩阵
void createGraph(graph *g)
{
    int i,j;
    char v;
    g->vexnum=0;
    g->arcnum=0;
    i=0;
    printf("\n输入顶点序列(以#结束)：\n");
    while ((v=getchar())!='#')
    {
        g->vexs[i]=v;          
        i++;
    }
    g->vexnum=i;             
    for (i=0;i<g->vexnum;i++)     
        for (j=0;j<g->vexnum;j++)
            g->arcs[i][j] = 0;
    printf("\n输入边的信息(顶点序号,顶点序号)，以(-1,-1)结束：\n");
    scanf("%d,%d",&i,&j);      
    while (i!=-1)                
    {
        g->arcs[i][j] = 1;    
        g->arcnum++;
        scanf("%d,%d",&i,&j);
    }
}

//从第i个顶点出发深度优先搜索
void dfs(int i,graph *g)
{
    int j;
    printf("%c", g->vexs[i]);
    visited[i] = TRUE;
    for (j = 0; j < g->vexnum; j++)
        if (g->arcs[i][j] == 1 && !visited[j])
            dfs(j, g);
}

//深度优先搜索整个图
void tdfs(graph *g)
{
    int i;
    printf("\n从顶点%C开始深度优先搜索序列：",g->vexs[0]);
    for (i=0;i<g->vexnum;i++)
        if (visited[i] != TRUE)   
            dfs(i,g);
    printf("\n");
}

//从第k个顶点广度优先搜索
void bfs(int k,graph *g)
{
    int i,j;
    queue qlist,*q;
    q=&qlist;
    q->rear=0;
    q->front=0;
    printf("%c",g->vexs[k]);
    visited[k]=TRUE;
    q->data[q->rear]=k;
    q->rear=(q->rear+1)%N;
    while (q->rear!=q->front)                
    {
        i=q->data[q->front];
        q->front=(q->front+1)%N;
        for (j=0;j<g->vexnum;j++)
            if ((g->arcs[i][j]==1)&&(!visited[j]))
            {
                printf("%c",g->vexs[j]);
                visited[j]=TRUE;
                q->data[q->rear] = j;     
                q->rear = (q->rear + 1) % N;     
            }
    }
}

//广度优先搜索整个图
void tbfs(graph *g)
{
    int i;
    printf("\n从顶点%C开始广度优先搜索序列：",g->vexs[0]);
    for (i=0;i<g->vexnum;i++)
        if (visited[i]!=TRUE)
            bfs(i,g);                       
    printf("\n");
}

void init_visit()  
{
    int i;
    for (i=0;i<N;i++)
        visited[i]=FALSE;
}
