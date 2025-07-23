#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	//求字符串长度
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d", len);
//
//	return 0;
//}

//编程常见错误
//1.编译型错误
//2.链接型错误
//3.运行时错误 //1，2都没问题，但结果不是想要的
int main()
{
	//int a //编译型错误，未加；
	//先编译再链接
	int a = 0;
	int b = 10;
	int c = Add(a,b);//无法解析，链接错误，没有定义函数或者找不到
	printf(" %d", c);
	//运行时错误通过调试解决
	return 0;
}