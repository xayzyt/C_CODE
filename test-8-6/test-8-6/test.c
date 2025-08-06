#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	//内存函数
	//1.memcpy:内存拷贝函数
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	memcpy(arr2, arr1, sizeof(arr1)); //将arr1的内容拷贝到arr2
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	//2.memmove:内存移动函数
	int arr3[] = { 1,2,3,4,5 };
	memmove(arr3 + 2, arr3, 3 * sizeof(int)); //将arr3的前3个元素移动到后面2个位置
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");
	//3.memcmp:内存比较函数
	//注意：memcmp函数比较的是内存的内容，而不是数组的长度
	int arr4[] = { 1,2,3,4,5 };
	int arr5[] = { 1,2,3,4,5 };
	int result = memcmp(arr4, arr5, sizeof(arr4)); //比较arr4和arr5的内容		
	if (result == 0)
	{
		printf("arr4 and arr5 are equal.\n");
	}
	
	else if (result < 0)
	{
		printf("arr4 is less than arr5.\n");
	}
	else
	{
		printf("arr4 is greater than arr5.\n");
	}
	//4.memset:内存设置函数
	int arr6[5] = { 0 };
	memset(arr6, 0, sizeof(arr6)); //将arr6的所有元素设置为0
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr6[i]);
	}
	printf("\n");




	return 0;
}