#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int mian()
//{
//	//位段
//	// 位段是结构体中的一种特殊成员，它允许我们定义一个结构体的成员变量占用特定位数。
//	struct A
//	{
//		 int _a : 3; // 占用3位
//		 int _b : 5; // 占用5位
//		 int _c : 10; // 占用10位
//		 int _d : 30; // 占用30位
//	} ;
//
//	//位段的内存分配
//	// 位段的内存分配是按照位来进行的，而不是按照字节。
//	//初始给4个字节的内存空间
//	
//	return 0;
//}


struct S
{
	char a : 3; // 占用3位
	char b : 4; // 占用4位
	char c : 5; // 占用5位
	char d : 4; // 占用4位
};

int mian()
{
	struct S s = {0};
	s.a = 10; // 设置a为10
	s.b = 12; // 设置b为12
	s.c = 3; // 设置c为3
	s.d = 4; // 设置d为4
	return 0;
}