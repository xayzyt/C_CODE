#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	if (b == 0)
//	{
//		printf("除数不能为0\n");
//		exit(1);
//	}
//	return a / b;
//}
//
//
//int main()
//{
//	//函数指针数组：存放函数地址的数组
//	int (*pf)(int, int) = add;
//	int (*arr[4])(int,int) = {add, sub, mul, div};//函数指针的数组
//
//	return 0;
//}

void Swap(char*buf1,char*buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;

	}

}
void bubble_sort(void* base, int size,int width,int(*cmp)(const void* e1, const void* e2))
{
	//冒泡排序,只能排序整型数据
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		int flag = 1; //假设数组是排好序的
		int j = 0;
		for (j = 0; j < size-1-i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
				flag = 0; //如果发生交换，说明数组不是排好序的

			}
			//if (arr[j] > arr[j + 1])
			//{
			//	//交换
			//	int temp = arr[j];
			//	arr[j] = arr[j + 1];
			//	arr[j + 1] = temp;
			//	flag = 0; //如果发生交换，说明数组不是排好序的
			}
			if (flag == 1)
			{
				break; //如果没有发生交换，说明数组已经排好序了，可以提前结束循环

			}

		}

	}


//快速排序
//void qsort( void* base,//原始数据位置
//			size_t num,//待排序数据元素的个数
//			size_t width,//待排序数据元素的大小
//			int(* cmp)(const void* e1, const void* e2));//函数指针，比较函数

//比较两个整型
int cmp_int(const void* e1, const void* e2)
{
	//but void*指针不能直接解引用，需要先转换成整型指针
	//void*指针是通用指针，可以指向任何类型的数据
	return (*(int*)e1 - *(int*)e2);

}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//把数组排成升序
	int size = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr,size);
	qsort(arr, size, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

struct stu
{
	char name[20];
	int age;
};
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);

}
void test2()
{
	//使用qsort排序结构数据
	struct stu s[] = { {"zhangsan", 20}, {"lisi", 18}, {"wangwu", 22} };
	int size = sizeof(s) / sizeof(s[0]);
	qsort(s, size, sizeof(s[0]), cmp_stu_by_name);
}
void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//把数组排成升序
	int size = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr,size);
	bubble_sort(arr, size, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}