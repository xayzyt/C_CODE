#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//声明一个结构体类型
//struct people
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};

//struct people
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p1, p2;//p1和p2是用struct people定义的结构体变量

struct people
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
};
struct student
{
	struct people p; //结构体嵌套
	int num;
	float f;//浮点数在内存中不能精确保存
};
void print1(struct people* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);
}
void print2(struct people p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);
}
int main()
{
	//结构体
	//定义一个结构体类型
	struct people p1 = { "张三","1552367462","男",175};
	struct student s = { {"李四","1552367462","女",165}, 1005, 99.5 };
	print1(&p1);//首选传地址
	print2(p1);
	return 0;
}

