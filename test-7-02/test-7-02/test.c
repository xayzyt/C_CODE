#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//变量分为局部变量和全局变量，局部变量只能在函数内部使用，全局变量（即大括号外部）可以在整个程序中使用
// 全局变量和局部变量同名时，局部变量会覆盖全局变量的值
//int main()
//{
//	short age = 20;
//	int height = 180;
//	float weight = 88.5;
//
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a = %d\n", a); // 局部变量
//	
//	return 0;
//}
//写一个代码计算两个整数的和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	// 输入两个整数
//	scanf(" %d %d", &num1, &num2);
//	// 计算和
//	int sum = num1 + num2;
//	// 输出结果
//	printf("%d\n", sum);
//	// 返回0表示程序正常结束
//	return 0;
//}
 

//变量的作用域和生命周期
//局部变量的作用域是函数内部，全局变量作用域为全部，生命周期是函数调用时创建，函数结束时销毁；
//int main() {
//	
//	{
//		int a = 10; // 局部变量
//		printf("a = %d\n", a); // 输出局部变量
//	}
//	//printf("a = %d\n", a); // 这里会报错，因为a的作用域只在上面的块中
//
//	return 0;
//}


//C语言中常量分为三种：字面常量、const修饰的常量、#define定义的常量、枚举常量
// 字面常量：直接在代码中写的值，如10、3.14等
// const修饰的常变量：使用const关键字定义的常量，如const int a = 10;
// #define定义的常量：使用#define宏定义的常量，如#define PI 3.14
// 枚举常量：使用enum定义的常量，如enum Color { RED, GREEN, BLUE }; 其中RED、GREEN、BLUE就是枚举常量

// 字面常量和const修饰的常量
//int main() {
//
//	30; // 字面常量
//	'a'; // 字符常量
//	'abc'; // 字符串常量
//	const int a = 10; // const修饰的常变量
//	a = 20; // 错误，const修饰的常量不能修改
//	
//	return 0;
//}

// // #define定义的常量
//#define max 100
//int main() {
//	printf("max = %d\n", max); // 输出宏定义的常量
//	int a = max; // 使用宏定义的常量
//	printf("a = %d\n", a); // 输出变量a的值
//
//
//	return 0; // 返回0表示程序正常结束
//}

// 枚举常量
enum Color
{
	RED, GREEN, BLUE
}; // 定义枚举类型Color，包含三个枚举常量RED、GREEN、BLUE;
int main()
{
	enum Color color = RED; // 定义枚举变量color，并赋值为RED

	return 0; // 返回0表示程序正常结束
}
