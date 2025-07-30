#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	指针传参
//	二级指针传参
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);//取一级指针的地址，就是二级指针
//	return 0;
//}

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int arr[5] = { 0 };
	//&数组名——>整个数组的地址
	int (*p)[5] = &arr;//数组指针
	//&函数名——>函数的地址
	printf("%p\n", &add);//函数的地址
	printf("%p\n", add);//函数的地址
	//函数名就是函数的地址
	int (*pf)(int, int) = &add; //函数指针
	
	int ret = (*pf)(2, 3);
	printf("ret = %d\n", ret);

	return 0;
}