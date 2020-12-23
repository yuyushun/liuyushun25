#include"point.h"
void test1(){
	printf("1、交换数\n");
	datatype t,var1,var2,var3;
	printf("请输入三个数：\n");
	scanf("%d%d%d",&var1,&var2,&var3);
	int *ptr_var1,*ptr_var2,*ptr_var3;
	ptr_var1 = &var1; ptr_var2 = &var2; ptr_var3 = &var3;
	printf("输入值： var1=%d   var2=%d   var3=%d\n",var1,var2,var3);
	printf("地址：  var1:%p   var2:%p   var3:%p\n",&var1,&var2,&var3);
	t = *ptr_var1;
	*ptr_var1 = *ptr_var3;
	*ptr_var3 = *ptr_var2;
	*ptr_var2 = t;
	printf("交换后： var1=%d   var2=%d   var3=%d\n",*ptr_var1,*ptr_var2,*ptr_var3);
	return;
}

void swap(int *p1,int *p2)
{
        int p;
        p=*p1;*p1=*p2;*p2=p;
}

void test2(){
	printf("2、指向较大数\n");
	int a,b;
        int *pt1,*pt2 ;
        printf("请输入两个数\n");
        scanf("%d%d",&a,&b);
        pt1=&a; pt2=&b;
        if(a<b) swap(pt1,pt2);
        printf("pt1=%d\npr2=%d\n",*pt1,*pt2);
}

void test3(){
	printf("3、申请内存空间\n");
        int *ptr_arr,*q;
        int n,m;
        printf("输入申请内存大小：");
        scanf("%d",&n);
        if(n<0){printf("请重新输入大于0的数！");exit(1);}
        ptr_arr = (int*)malloc(n);
        if(!ptr_arr){printf("内存分配失败！");exit(1);}
        *ptr_arr = n;
        printf("初始化值：ptr_arr = %d\n",*ptr_arr);
        printf("地址: ptr_arr %p\n",ptr_arr);
        printf("请输入增加内存大小：\n");
        scanf("%d",&m);
        n = n+m;
        ptr_arr = (int*)realloc(ptr_arr,n);
        *ptr_arr = *ptr_arr+m;
        printf("增加后\n");
        printf("值：ptr_arr = %d\n",*ptr_arr);
        printf("地址：ptr_arr %p\n",ptr_arr);
        free(ptr_arr);

}

void test4(){
        printf("4、变量自增,指针运算\n");
	int var1;
        int *ptr_var1;
        printf("请输入值：");
        scanf("%d",&var1);
        ptr_var1 = &var1;
        printf("变量自增：%d\n",++var1);
        printf("指针运算再自增：%d\n",++(*ptr_var1));
}
