#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	/*char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a = %d\n", a);	
	printf("b = %d\n", b);
	printf("c = %d\n", c);*/

	//char a = 128;
	//printf("a = %u\n", a);// ����� %u �ᵼ��δ������Ϊ����Ϊ a ��ֵ������ signed char �ķ�Χ
	//printf("a = %d\n", a);// ����� %d �ᵼ��δ������Ϊ����Ϊ a ��ֵ������ signed char �ķ�Χ

	int i = -20;
	
	unsigned int j = 10;
	printf("%d\n", i + j);
	
	return 0;
}
