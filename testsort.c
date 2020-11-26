#include"sort.c"


int main(int argc, char **argv)                    //分别实现四种排序。
{
	int a[] = {21,11,20,14,52,65,32,45};
	int asize = sizeof(a)/sizeof(int);
	printf("\n* 原 排 序：");
	outA(a, asize);
	printf("\n  冒泡排序：");
       	bubble(a, asize);
	outA(a, asize);
	int b[] = {11,15,24,20,33,45,87,10};
	printf("\n\n* 原 排 序：");
	outA(b, asize);
	printf("\n  插入排序：");
	insert(b, asize);
	outA(b, asize);
	int c[] = {21,26,17,14,52,99,32,45};
	printf("\n\n* 原 排 序：");
	outA(c, asize);
	printf("\n  选择排序：");
	Select(c, asize);
	outA(c, asize);
	int d[] = {65,45,42,33,22,11,49,39};
	printf("\n\n* 原 排 序：");
	outA(d, asize);
	printf("\n  快速排序：");
	pquick(d, 0, asize);
	outA(d, asize);
	printf("\n");
	return 0;
}

