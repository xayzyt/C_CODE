#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void bubble_sort(int arr[],int sz)
{
	
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	////数组
	////二维数组
	//int arr1[3][4] = { 1,2,3,4,5,6, };
	////int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };//三行四列
	////可以省略行数不能省略列数
	//int arr2[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//三行四列
	//int i = 0, j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr2[i][j]);
	//	}
	//	printf("\n");
	//}
	
	//把数组的内容排成升序，冒泡排序
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}