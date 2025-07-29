#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]); // 访问二维数组中的元素
//		}
//		printf("\n");
//	}
//}
void print2(int(*p)[5]/*代表第一行*/, int r, int c)
{
	int i = 0;
	for(i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j)); // 访问二维数组中的元素
		}
		printf("\n");
	}
}

int main()
{
	//进阶指针
	//字符指针
	//char ch = 'w';
	//char *pc = &ch;
	//*pc = 'b';
	//printf("ch = %c\n", ch); // 输出: ch = b

	//char* p = "abcdef";//将首字符也就是'a'的地址赋给p
	//printf("p = %s\n", p); // 输出: p = abcdef	
	//

	////p1和p2指向同一字符串常量
	//const char* p1 = "abcdef";
	//const char* p2 = "abcdef";
	//if (p1 == p2)
	//{
	//	printf("p1和p2指向同一地址\n");
	//}
	//else
	//{
	//	printf("p1和p2指向不同地址\n");
	//}

	//指针数组:是数组，用来存放指针的数组
	
	//int arr1[10];//整型数组
	//char ch[5];//字符数组
	//int* arr2[6];//存放整型指针的数组
	//char* arr3[6];//存放字符指针的数组

	//int arr1[] = { 1,2,3,4,5 };
	//int arr2[] = { 2,3,4,5,6 };
	//int arr3[] = { 3,4,5,6,7 };

	//int* parr[3] = { arr1, arr2, arr3 }; // 指针数组，存放整型数组的指针

	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for(j = 0;j<5;j++)
	//	{ 
	//		printf("%d ", * (parr[i] + j)); // 访问指针数组中的元素
	//	}
	//	printf(" \n");
	//}


	//数组指针:是指针，用来存放数组的指针,存放数组的地址

	//int* p3[10];//指针数组
	//int (*p4)[10]; // 数组指针，指向一个包含10个整数的数组,十个元素是int型


	////数组名通常表示首元素地址，但有两种特例需要注意：
	//int arr[10] = { 0 };
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	////1.但是这里sizeof内部单独放一个数组名，这里数组名表示整个数组的大小，而不是首元素的地址
	//int sz = sizeof(arr);
	//printf("sz = %d\n", sz); // 输出: sz = 40 (假设int为4字节)
	////2.还有一种特例&数组名，这里依然表示整个数组的地址
	//printf("%p\n", &arr); // 输出: 地址与arr相同
	//printf("%p\n", &arr+1); // 输出: 地址与arr相同

	//int* p5 = arr; // p5指向arr的首元素
	//int(* p6)[10] = &arr; // p6指向arr的整个数组,[]里面的十必须有
	//printf("%p\n", p6);// 输出: p6的地址
	//printf("%p", *p6);// 输出: p6指向的数组的首元素地址

	//char* arr4[5] = { 0 };
	//char* (*pc)[5] = &arr4;//指针数组的指针

	//二级指针
	//char ch2 = 'a';
	//char* p7 = &ch2; // 一级指针，指向字符
	//char** p8 = &p7; // 二级指针，指向一级指针

	//数组指针不常用法
	//int arr[] = {1,2,3,4,5};
	//int (*p)[5] = &arr; // 数组指针，指向一个包含5个整数的数组
	//int j = 0;
	//for (j = 0; j < 5; j++)
	//{
	//	printf("%d \n", (*p)[j]); // 访问数组指针中的元素
	//}
	//for (j = 0; j < 5; j++)
	//{
	//	printf("%d \n", *(*p + j)); // 访问数组指针中的元素
	//}
	//for (j = 0; j < 5; j++)
	//{
	//	printf("%d \n", *p);//*P相当于数组名，代表首元素地址

	//}
	//


	//数组指针常见用法
	int arr[3][5] = { {1,2,3,4,5}, {6,7,8,9,0}, {1,1,3,4,5} };
	/*print1(arr,3,5);*/
	print2(arr/*把第一行地址传过去*/, 3, 5);//二维数组中，arr代表第一行的地址，其实是一维数组中的&arr
	return 0;
}