#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ָ��

/*int main()
{
	int a = 10;//���ڴ�����4�ֽڿռ�
	//&a; //ȡ����a�ĵ�ַ
	printf("a�ĵ�ַ�ǣ�%p\n", &a);
	int * p = &a; //����һ��ָ�����p��ָ��a�ĵ�ַ
	//ָ��p�洢��a�ĵ�ַ
	//int˵��pָ��Ķ���a��������ͬ
	char ch = 'A';
	char * pc = &ch; //����һ���ַ�ָ�����pch��ָ���ַ�����ch�ĵ�ַ

	*p; //ͨ��ָ��p���ʱ���a��ֵ
	*p = 20; //ͨ��ָ��p�޸ı���a��ֵ
	printf("a��ֵ�ǣ�%d\n", a);
	
	//ָ�������С
	//ָ������Ĵ�Сȡ���ڵ�ַ��Ҫ���ռ�
	//ָ������Ĵ�С�����ϵͳ�й�
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(p));//ָ�����p�Ĵ�С




	
	return 0;
}
*/

//�ṹ��
	//�ṹ���ǰѵ�һ���͵ı�����ϳ�һ���µ�����
struct Student {
	int id;
	char name[20];
	float score;
};//����һ���ṹ������Student
//ע�⣬�ṹ�嶨���û������ռ䣬ֻ�Ƕ�����һ�����ͣ��ֺŲ���û��
void print(struct Student *ps) {
	//���������ǽṹ������
	printf("id: %d, name: %s, score: %.2f\n", (*ps).id, (*ps).name, (*ps).score);
	//ͨ��ָ����ʽṹ���Ա
	//��һ�ַ�ʽ��ʹ��->�����
	printf("id: %d, name: %s, score: %.2f\n", ps->id, ps->name, ps->score);
}

int main() {

	struct Student s = { 20,"zhangsan",95.0 }; //����һ���ṹ�����s������ʼ��

	printf(" %d %s %f", s.id, s.name, s.score);//����ṹ�����s�ĳ�Ա
	print(&s); //���ݽṹ�����s�ĵ�ַ������print
	return 0;
}