#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//����һ���ṹ������
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
//}p1, p2;//p1��p2����struct people����Ľṹ�����

struct people
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
};
struct student
{
	struct people p; //�ṹ��Ƕ��
	int num;
	float f;//���������ڴ��в��ܾ�ȷ����
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
	//�ṹ��
	//����һ���ṹ������
	struct people p1 = { "����","1552367462","��",175};
	struct student s = { {"����","1552367462","Ů",165}, 1005, 99.5 };
	print1(&p1);//��ѡ����ַ
	print2(p1);
	return 0;
}

