#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////枚举
//enum Day
//{
//	Mon,//0
//	Tue,//1
//	Wed,//2
//	Thu,
//	Fri,
//	Sat,
//	Sun
//};
//
//
//
//int main()
//{
//	enum Day d = Fri;
//	//这样打印出来是0，1，2
//	printf("%d\n",Mon);
//	printf("%d\n", Tue);
//	printf("%d\n", Wed);
//
//
//
//
//	return 0;
//}


//联合:联合体是一个特殊的结构体，它的所有成员共享同一块内存空间。
union Un
{
	int a;
	char c;
};
//联合体的大小是它最大成员的大小
struct St
{
	int a;
	char c;
};
//判断大小端
int check_sys()
{
	int a = 1;
	return *(char*)& a;
}
int check_sys1()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c; // 如果是小端，u.c = 1；如果是大端，u.c = 0
}
int main()
{
	union Un u;
	printf("sizeof(u) = %d\n", sizeof(u)); // 输出: sizeof(u) = 4

	printf("sizeof(St) = %d\n", sizeof(struct St)); // 输出: sizeof(St) = 8

	/*int ret = check_sys();*/
	int ret = check_sys1();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	//联合体大小的计算
	//联合体的大小是它最大成员的大小
	//当最大成员大小不是最大对齐数的整数倍时，联合体的大小会向上对齐到最大对齐数的整数倍。
	union An
	{
		char arr[5];
		int d;
	};
	printf("sizeof(An) = %d\n", sizeof(union An)); // 输出: sizeof(An) = 8
	// 这里的最大对齐数是4，所以联合体的大小是8。

	return 0;
}