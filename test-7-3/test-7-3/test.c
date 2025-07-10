#include <stdio.h>
#include<string.h>

//int main() {
	// 字符串的定义
	//char ch = 'A';// 单个字符
	//
	//char str1[] = "Hello, World!";// 字符串数组
	////字符串结束标志是'\0'，所以字符串的长度是13
	//char str2[] = { 'H', 'e', 'l', 'l', 'o' ,'\0'};// 字符数组
	//// 字符数组没有结束标志'\0'，所以长度是5
	////需要自己添加结束标志
	//printf("%s\n", str1); // 输出字符串
	//printf("%s\n", str2); // 输出字符数组
	//int len = strlen("Hello"); // 计算字符串长度
	//printf("%d\n", len); // 输出字符串长度
	//printf("%d\n", strlen("hello"));
	//printf("%d\n", strlen(str2)); // 输出字符串长度

	////转义字符


	//printf("%c\n",'\130'); // 输出字符'X'
	////X是ASCII码的88,\130是十进制的88,\130是八进制的130

	//printf("%c\n", '\x58'); // 输出字符'X'
	////X是ASCII码的88，\x58是十六进制的58




	//选择语句
//int main() {
//	int intput = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗（1/0）\n");
//	scanf_s("%d", &intput);
//	if (intput == 1) 
//	{
//		printf("好offer\n");
//	} 
//	else
//	{
//		printf("卖红薯\n");
//	} 
//	
//	return 0;
//}


// 循环语句
//while循环
//int main() {
//
//	int line = 0;
//	printf("加入比特\n");
//	while (line<20000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//
//	}
//
//	if(line>=20000)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//
//
//
//
//	return 0;
//}

//函数
//函数声明
//int Add(int x, int y)
//{
//		//函数定义
//	int sum= x + y;
//	return sum;
//}
//int main() {
//	int n1 = 0;
//	int n2 = 0;
//	//输入两个整数
//	scanf_s("%d %d", &n1, &n2);
//	//求和
//	int sum = Add(n1, n2);
//	//输出结果
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//数组

int main()
{
	// 定义一个数组
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
	//printf("%d\n", arr[8]); // 输出第一个元素
	int i = 0;
	while (i<10)	
	{

		printf("%d ", arr[i]); // 输出数组元素
		i++;
	}




	return 0;
}
