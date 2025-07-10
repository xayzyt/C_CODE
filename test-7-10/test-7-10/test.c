#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//int main() {
//	
//	//打印1000到2000年之间的所有闰年
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{   
//		// 闰年的判断规则
//		// 1. 能被4整除但不能被100整除
//		// 2. 能被400整除
//		if ((year % 4==0) && (year % 100 != 0))
//		printf("%d ", year);
//		if (year % 400 == 0)
//		printf("%d ", year);
//	}
//
//
//
//	return 0;
//}

//写一个函数判断一年是不是闰年
//void judge(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0))
//		printf("%d是闰年\n",year);
//	if (year % 400 == 0)
//		printf("%d是闰年\n", year);
//	else
//		printf("%d不是闰年\n", year);
//}
//int main()
//{
//	int year = 0;
//	//printf("请输入一个年份: ");
//	//scanf("%d", &year);
//	for (year = 1000; year <= 2000; year++)
//	{
//		judge(year);
//	}
//	
//
//	return 0;
//}

//写一个函数，实现一个整形有序数组的二分查找
//int binary_search(int arr[], int k,int sz)
//{//arr实际是一个指针变量，数组传参只是穿过来地址，所以需要传入数组的大小sz
//	int left = 0; // 左边界
//	int right = sz - 1; // 右边界
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2; // 中间位置
//		if (arr[mid] == k) {
//			return mid; // 找到元素，返回下标
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1; // 在右半部分继续查找
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1; // 在左半部分继续查找
//		}
//	}
//	return -1; // 没有找到元素，返回-1
//}
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7; // 要查找的元素
//	int sz = sizeof(arr) / sizeof(arr[0]); // 数组的大小
//	//找到的话返回下标，找不到的话返回-1
//	int ret = binary_search(arr, k,sz);
//	if (ret != -1) {
//		printf("元素 %d 在数组中的下标是: %d\n", k, ret);
//	} else {
//		printf("元素 %d 不在数组中\n", k);
//	}
//	return 0;
//}
// 写一个函数，每调用一次函数，num的值加1
//void Add(int* num)
//{
//	*num += 1; // 通过指针修改全局变量的值
//	//(*num)++; // 也可以这样写
//}
//int main() {
//	
//	int num = 0; // 全局变量
//	Add(&num); // 调用函数，num的值加1
//	printf("num的值是: %d\n", num); // 输出num的值
//	Add(&num); // 调用函数，num的值加1
//	printf("num的值是: %d\n", num); // 输出num的值
//	return 0;
//}



//函数的嵌套调用
//函数可以嵌套调用，即一个函数可以调用另一个函数
//函数不能嵌套定义，即一个函数不能在另一个函数的定义中定义



//链式访问
//int main()
//{
//	int len = strlen("hello");
//	int capcity = sizeof("hello"); 
//	printf("字符串长度是: %d\n", len); // 输出字符串长度
//	printf(" %d\n", capcity); // 输出字符串的容量（包括结束符'\0'）
//	// 链式访问字符串的字符
//	printf("%d\n", strlen("hello")); // 输出字符串长度加1
//	
//
//	printf("%d", printf("%d", printf("%d", 43))); // 输出100，返回值是printf的返回值，即输出的字符数
//	// printf函数的返回值是输出的字符数
//
//	return 0;
//}

//函数的声明和定义
// 函数的声明
//int add(int a, int b); // 函数声明，告诉编译器函数的名称、参数类型和返回值类型
//int main() {
//    int result = add(3, 5); // 调用函数
//    printf("Result: %d\n", result); // 输出结果
//    return 0;
//}
////函数的定义
//int add(int a, int b) {
//    return a + b; // 函数体，执行具体的操作
//}

#include "add.h"//包含头文件

//int main() {
//	    int result = add(3, 5); // 调用函数
//	    printf("Result: %d\n", result); // 输出结果
//	    return 0;
//	}
//

//函数的递归
//程序的递归是指函数在其定义中直接或间接地调用自身。递归通常用于解决可以分解为更小子问题的问题。
//递归函数通常包括两个部分：基准情况和递归情况。基准情况是递归的终止条件，而递归情况则是函数调用自身的部分。


//输入1234.输出1 2 3 4

void print(unsigned int num)
{
	if (num > 9) {
		print(num / 10); // 递归调用，处理高位
	}
	printf("%d ", num % 10); // 打印当前位

}
int main() {
	unsigned int num = 1234; // 输入的数字
	print(num); // 调用函数打印数字

	return 0;
}