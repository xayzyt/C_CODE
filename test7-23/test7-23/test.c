#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	//���ַ�������
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d", len);
//
//	return 0;
//}

//��̳�������
//1.�����ʹ���
//2.�����ʹ���
//3.����ʱ���� //1��2��û���⣬�����������Ҫ��
int main()
{
	//int a //�����ʹ���δ�ӣ�
	//�ȱ���������
	int a = 0;
	int b = 10;
	int c = Add(a,b);//�޷����������Ӵ���û�ж��庯�������Ҳ���
	printf(" %d", c);
	//����ʱ����ͨ�����Խ��
	return 0;
}