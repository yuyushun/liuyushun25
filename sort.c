#include<stdlib.h>
#include<stdio.h>


//输出排序
void outA(int a[], int asize){
	for(int i=0;i<asize;i++){
		printf("  %d  ",a[i]);
	}
	printf("。");
	}



//冒泡排序
void bubble(int a[], int asize){
	int i = 1;int j;int k;
	while(i<asize){
		for(j=0;j<asize-i;j++){
			if(a[j]>a[j+1]){
				k = a[j+1];
				a[j+1] = a[j];
                                a[j] = k;
			}
		}
	i++;
	}
	return;
}



//插入排序
void insert(int a[], int asize){
	int i, j, k;
	for(i = 1;i<asize;i++){
		k = a[i];
		j = i-1;
		while(k<a[j] && j>=0){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = k;
	}
	return;
}


//选择排序
void Select(int a[], int asize){
	int i, j , k, t;
	for(i = 0; i<asize; i++){
		k = a[i];
		t = i;	
		j = i+1;
		while(j<asize){
		if(a[j] < k){k = a[j]; t = j;}
		j++; }
		a[t] = a[i];
		a[i] = k;
	}
return;
}


//快速排序
void pquick(int a[], int m, int asize){
        if(m<asize){
	int i = m, j = asize-1, k;
	k = a[i];
	while(i<j){
		while(i<j && a[j]>k){j--;}
		if(i<j){a[i] = a[j];i++;}
		while(i<j && a[i]<=k){i++;}
		if(i<j){a[j] = a[i];j--;}
	}
	a[i] = k;
	pquick(a, 0, i-1);
	pquick(a, i+1, asize);
}
}
















