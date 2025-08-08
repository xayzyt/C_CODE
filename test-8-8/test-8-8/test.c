#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struct Stu
//{
//	//相关属性
//	char name[20];
//	int age;
//
//}s1, s2;//s1和s2是全局变量，类型为struct Stu
int main()
{
	//内置类型
	

	//自定义结构体
	//结构体类型的定义
	//学生
	//struct Stu
	//{
	//	//相关属性
	//	char name[20];
	//	int age;

	//};

	struct Stu
	{
		//相关属性
		char name[20];
		int age;

	}s1, s2;//s1和s2是局部变量，类型为struct Stu

	//匿名结构体
	//只能用一次
	struct
	{
		char name[20];
		int age;
	} s3, s4;
	// s3和s4是局部变量，类型为匿名结构体
	
	//结构体自引用
	struct Node
	{
		int data;//数据域
		struct Node* next;//指针域
	};

	//结构体变量的定义和初始化
	struct Point
	{
		int x;
		int y;
	}p1 = {2,3};

	return 0;
}