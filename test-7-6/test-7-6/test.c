#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��֧��ѭ�����
int main()
{//��֧���
	/*int a = 10;
	if(a = 3)
		printf("hehe");
	*/

	/*int age = 10;
	if (age < 18) {
		printf("δ����\n");
	}
	else {

	printf("����\n");

}
*/
	//���֧

	/*int age = 30;
	if (age < 18) {
		printf("δ����\n");
	}
	else if (age>=18 && age<=60) {
		printf("����\n");
	}
	else {
		printf("����\n");
	}*/


	//����else
	
	/*int a = 0;
	int b = 2;
	if (a == 1) {
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
*/

	//�ж�һ�����Ƿ�Ϊ����
	/*int num;
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("ż��\n");
	}
	else {
		printf("����\n");
	}

	//���1-100֮�����������
	int i = 1;
	while (i<=100) {
		if(i % 2 == 1) {
			printf("%d ", i);
			
		}
		i++;
	
	}
	*/
	//switch���
	/*int day;
	printf("������һ������(1-7): ");
	scanf("%d", &day);
	switch (day)
	{// ע�⣺switch���ı��ʽ�������������ͻ�ö������
	case 1:
		printf("����һ\n");
		break; // ע�⣺break�����������switch��䣬��ִֹ�к�����case
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������������1-7֮������֡�\n");
		break; // default��֧�ǿ�ѡ�ģ���������ڣ�ͨ���������
	}
	*/

	//ѭ�����
	//whileѭ��
	int i = 1;
	while (i<=10) {
		i++;
		if (5 == i) {
			//break; // ��i����5ʱ������ѭ��
			continue; // ��i����5ʱ����������ѭ����������һ��ѭ��,������벻��ִ��
		}
		printf("%d\n",i);
		
	}

	return 0;
}
