#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归求解
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		{
//		return 0;
//	}
//}
//int main() {
//	//编写函数不允许创建临时变量，求字符串长度。
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//求n的阶乘
//递归实现
//int fac(int n)
//{
//	if (n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//求斐波那契数列的第n项
//斐波那契数列的定义：f(0)=0,f(1)=1,f(n)=f(n-1)+f(n-2)(n>=2)
// 递归实现
//int Fib(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
// 迭代实现
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	int a = 1, b = 1, c = 0;
//	for (int i = 3; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//写代码将三个整数从大到小输出
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//给定两个数，求最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int small = 0;
//	scanf("%d %d", &a ,& b);
//	if (a < b)
//	{
//		small = a;
//	}
//	else
//	{
//		small = b;
//	}
//	int i = 0;
//	int gcd = 0; // 最大公约数初始值为0
//	for (i = 1; i <= small; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			gcd = i;
//		}
//	}
//	printf("%d", gcd);
//	
//	return 0;
//}
//辗转相除法求最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c=a%b)
//	{
//		a = b;     // 将b赋值给a
//		b = c;     // 将余数赋值给b
//	}
//	printf("%d\n", b); // 输出最大公约数
//	return 0;
//}

//数1-100有多少个9
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//	//算个位的
//		if (i % 10 == 9) {
//			count++;
//		}	
//	//算十位的
//		if (i / 10 == 9) {
//			count++;
//		}	
//	}
//	printf("%d", count);
//	return 0;
//}


//求十个整数最大值

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//		for (i = 1; i < 10; i++)
//		{
//			if (arr[i] > arr[0])
//			{
//				max = arr[i];
//			}
//		}
//	printf("%d", max);
//	return 0;
//}

//在屏幕打印9*9乘法表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++) {
//
//			printf("% d * %d = % -2d \t ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

