#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int mian()
//{
//	//指针数组
//	int* arr1[4];
//	//数组指针
//	int arr2[4];
//	int (*pa)[4] = &arr2;
//
//	char* arr3[6];
//	int (*p3)[6] =  &arr3;
//
//	return 0;
//}

//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//
//int main()
//{
//	//函数指针：指向函数的指针
//	//printf("%p\n", test);
//	//printf("%p\n", &test);//函数名就是函数的地址
//
//	/*int (*pf)(const char*) = test;
//	(*pf)("abc");*/
//
//
//	()
//	return 0;
//}



//函数指针的使用
//写一个简单的计算器程序，支持加、减、乘、除四种运算。
void menu()
{
	printf("*****************************\n");
	printf("***** 1.add      2.sub ******\n");
	printf("***** 3.mul      4.div ******\n");
	printf("***** 0.exit          ******\n");

}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int calc(int (*pf)(int, int))
{
	int x = 0, y = 0;
	int ret = 0;
	printf("请输入2个操作数：>");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
	return ret;
}

int main()
{
	int input = 0;
	int x = 0, y = 0;	
	int ret = 0;
	do
	{
		menu();
		printf("请选择：");

		scanf("%d", &input);
		
		switch (input)
		{
			case 1:
				/*printf("请输入2个操作数：>");
				scanf("%d %d", &x, &y);
				ret = Add(x, y);
				printf("%d + %d = %d\n", x, y, ret);*/
				calc(Add);
				break;
			case 2:
				/*printf("请输入2个操作数：>");
				scanf("%d %d", &x, &y);
				ret = Sub(x, y);
				printf("%d - %d = %d\n", x, y, ret);*/
				calc(Sub);
				break;
			case 3:
				/*printf("请输入2个操作数：>");
				scanf("%d %d", &x, &y);
				ret = Mul(x, y);
				printf("%d * %d = %d\n", x, y, ret);*/
				calc(Mul);
				break;
			case 4:
				/*printf("请输入2个操作数：>");
				scanf("%d %d", &x, &y);
				if (y == 0)
				{
					printf("除数不能为0！\n");
					break;
				}
				ret = Div(x, y);
				printf("%d / %d = %d\n", x, y, ret);*/
				calc(Div);
				break;
			case 0:

				printf("退出程序！\n");

				break;
			default:
				printf("输入错误，请重新输入！\n");
				break;

		}
	} while (input);


	return 0;
}