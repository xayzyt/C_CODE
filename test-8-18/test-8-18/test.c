#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//开辟十个整型空间
	// malloc和calloc的区别：如果想初始化为0，使用calloc；如果不需要初始化，使用malloc
	//calloc
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n",strerror(errno));
		return 1;
	}
	int i;
	
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p+i));
	}
	free(p);
	p = NULL; //防止野指针
	printf("\n");
	//realloc:调整内存大小
	int* pp = (int*)malloc(40);
	if (pp == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用
	//1，2，3，4，5，6，7，8，9，10
	int j;
	for(j = 0; j < 10; j++)
	{
		*(pp + j) = j + 1;
	}
	//扩容
	int* ppp = (int*)realloc(pp,80);
	if (ppp != NULL)
	{
		pp = ppp; //如果realloc成功，原来的指针会被释放，所以需要将新指针赋值给原指针
	}
	for (j = 0; j < 10; j++)
	{
		printf("%d ", *(pp + j));
	}
	free(pp);
	pp = NULL; //防止野指针
	//realloc 同样可以开辟新的内存空间
	//如果第一个参数为NULL，realloc的行为和malloc相同
	int* pppp = (int*)realloc(NULL, 100);

	return 0;
}