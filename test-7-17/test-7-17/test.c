#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//	{
	//int* p = NULL;
	//if (p != NULL)
	//{
	//	*p = 10; // This line will cause a segmentation fault if p is NULL
	//}
	//else
	//{
	//	printf("Pointer is NULL, cannot dereference.\n");
	//}
	//printf("%d", *p);
	

	//指针运算
	//*vp ++,先解引用然后（vp）加加，只是地址加加
	//（*vp）++，先解引用然后（*vp）加加，值加加

	/*int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);*/
	//数组下标写法
	/*for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}*/

	//指针下标写法
	//int* p = arr;
	//for (i = 0; i < sz; i++)
	//{
	//	*p = 1;
	//	p++; // 指针加加，指向下一个元素
	//}

	//int* p = arr;
	//for (i = 0; i < sz; i++)
	//{
	//	*(p + i) = 1; // 使用指针运算来访问数组元素
	//}

	/*int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);*/
	//指针减指针得到的是中间元素的个数,但是不是所有的指针都能相减
	//指向同一数组的指针可以相减，得到的是两个指针之间的元素个数

//	
//	return 0;
//}

//int my_strlen(char* str)
//{
	/*int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;*/

	//指针减指针
//	char* start = str; // 保存起始地址
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start; // 返回字符串长度
//}

//int main()
//{
//	int len = my_strlen("abcdefg");
//	printf("%d\n", len);
//	return 0;
//}

//数组与指针的关系：arr[i]= *(arr+i)


//二级指针

	/*int main() 
	{*/
	//	int a = 10;
	//	int* pa = &a; // pa是一个指向int类型的指针，指向变量a的地址,一级指针变量
	//	//*pa = 20; // 修改a的值为20
	//	//printf("a = %d\n", a); // 输出a的值
	//	int** ppa = &pa; // ppa是一个指向int*类型的指针，指向一级指针pa的地址,二级指针变量
	//	**ppa = 30; // 修改a的值为30
	//	printf("a = %d\n", a); // 输出a的值
	//	return 0;
	//	//二级指针是用来指向一级指针的指针，它可以用于动态分配二维数组或处理复杂的数据结构。
	//}
	//


//指针数组
//存放指针的数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//...........
//	int arr[10];
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	//指针数组
//	int* parr[10] = { &a,&b,&c };
//	printf("a = %d, b = %d, c = %d\n", *parr[0], *parr[1], *parr[2]);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("parr[%d] = %d\n", i, *parr[i]);
//	}
//
//
//
//	return 0;
//}


int main()
{

	int arr[3][4] = { 1,2,3,4,5,6,9,7,8,10,11 ,12};
	/*int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}*/

	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };
	int* parr[3] = { arr1,arr2,arr3 };

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d", *(*(parr+i)+j));//相当于parr[i][j]
		}
		printf("\n");
	}
	return 0;
}