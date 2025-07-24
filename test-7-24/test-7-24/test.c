#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++);//在debug下会死循环，而在release下会循环13次打印13次
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

int main()
{
	//有符号整形和无符号整形
	unsigned int a = 0xFFFFFFFF;
	int b = 0xFFFFFFFF;
	//数据在内存中存放为补码
	printf("a = %u\n", a); // 输出：a = 4294967295
	printf("b = %d\n", b); // 输出：b = -1
	// 这两个变量的值是相同的，但它们的类型不同。
	// 有符号整形（int）可以表示正数和负数，而无符号整形（unsigned int）只能表示非负数。
	//正整数原码，反码，补码都是一样的
	//负整数的原码是符号位为1，其余位为数值的绝对值的二进制表示
	//负整数的反码是符号位不变，其余位取反
	//负整数的补码是反码加1
	//在C语言中，整数的表示方式是有符号的和无符号的。
	//有符号整形可以表示负数，而无符号整形只能表示非负数。

	//大小端存储
	unsigned int num = 0x12345678;
	unsigned char* p = (unsigned char*)&num;// 将整数的地址转换为无符号字符指针
	if (*p == 0x78) {
		printf("小端存储\n");
	} else if (*p == 0x12) {
		printf("大端存储\n");
	} else {
		printf("未知存储方式\n");
	}
	// 在小端存储中，低位字节存储在低地址，高位字节存储在高地址。
	// 在大端存储中，高位字节存储在低地址，低位字节存储在高地址。
	// 在C语言中，整数的存储方式是由编译器决定的。
	// 在大多数现代计算机中，整数的存储方式是小端存储。
	
	return 0;
}
