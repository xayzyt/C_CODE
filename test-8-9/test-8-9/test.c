#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct S1
{
	char c1;  // 1 byte
	int i1;   // 4 bytes
	char c2;  // 1 byte
};
struct S2
{
	char c1;  // 1 byte
	char c2;  // 1 byte
	int i1;   // 4 bytes
};
// 结构体内存对齐
//规则：1. 结构体的大小必须是其最大成员的大小的整数倍
//      2. 结构体的每个成员都必须按照其类型的对齐方式进行对齐
//		3. 嵌套结构体的对齐方式是其最大成员的对齐方式 

#pragma pack(4) // 修改默认对齐方式为4字节,原来是8字节
struct S
{
	int i;
	double d;
};
#pragma pack()  // 恢复默认对齐方式

//修改默认对齐数

int main()
{
	//结构体内存对齐
	printf("%d\n", sizeof(struct S1));
	printf("%d\n", sizeof(struct S2));

	// 结构体成员的偏移量
	printf("%d\n", offsetof(struct S1, c1));
	printf("%d\n", offsetof(struct S1, i1));
	printf("%d\n", offsetof(struct S1, c2));
	
	printf("%d\n", sizeof(struct S));
	return 0;
}