#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main() {
	//�ػ�����
	//������������һ�����ڹػ�
	//�������hehe��ȡ���ػ�
	char input[10] = { 0 };
	 system("shutdown -s -t 60"); //���õ�����60���ػ�
	again:
	printf("���Խ���60���ػ�,�������������ȡ���ػ�\n");
	scanf("%s", input);
	if(strcmp(input, "������") == 0) //�Ƚ������ַ����Ƿ���ȣ�����ʹ��==,����ʹ�ÿ⺯����strcmp
	{
		system("shutdown -a"); //ȡ���ػ�����
		printf("ȡ���ػ��ɹ�\n");
	}
	else
	{
		goto again; //�������Ĳ���hehe������ת��again��ǩ��������ִ�йػ�����
	}
	return 0;
}