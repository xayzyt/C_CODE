#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	//动态内存管理
	//1. malloc:开辟一块指定大小的内存空间,其空间在堆区
	int*p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n",strerror(errno));
		return 1;
	}
	//使用这块内存空间
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	//输出这块内存空间
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	//2.free:释放一块内存空间
	free(p);
	p = NULL; //防止野指针

	while (1)
	{
		int* pp = (int*)malloc(10 * sizeof(int)); //不断申请内存
	}
	
	return 0;
}