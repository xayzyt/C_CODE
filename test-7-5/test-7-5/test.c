#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//指针

/*int main()
{
	int a = 10;//向内存申请4字节空间
	//&a; //取变量a的地址
	printf("a的地址是：%p\n", &a);
	int * p = &a; //定义一个指针变量p，指向a的地址
	//指针p存储了a的地址
	//int说明p指向的对象a的类型相同
	char ch = 'A';
	char * pc = &ch; //定义一个字符指针变量pch，指向字符变量ch的地址

	*p; //通过指针p访问变量a的值
	*p = 20; //通过指针p修改变量a的值
	printf("a的值是：%d\n", a);
	
	//指针变量大小
	//指针变量的大小取决于地址需要多大空间
	//指针变量的大小与操作系统有关
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(p));//指针变量p的大小




	
	return 0;
}
*/

//结构体
	//结构体是把单一类型的变量组合成一个新的类型
struct Student {
	int id;
	char name[20];
	float score;
};//定义一个结构体类型Student
//注意，结构体定义后并没有申请空间，只是定义了一个类型，分号不能没有
void print(struct Student *ps) {
	//函数参数是结构体类型
	printf("id: %d, name: %s, score: %.2f\n", (*ps).id, (*ps).name, (*ps).score);
	//通过指针访问结构体成员
	//另一种方式是使用->运算符
	printf("id: %d, name: %s, score: %.2f\n", ps->id, ps->name, ps->score);
}

int main() {

	struct Student s = { 20,"zhangsan",95.0 }; //定义一个结构体变量s，并初始化

	printf(" %d %s %f", s.id, s.name, s.score);//输出结构体变量s的成员
	print(&s); //传递结构体变量s的地址给函数print
	return 0;
}