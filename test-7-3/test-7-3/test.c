#include <stdio.h>
#include<string.h>

//int main() {
	// �ַ����Ķ���
	//char ch = 'A';// �����ַ�
	//
	//char str1[] = "Hello, World!";// �ַ�������
	////�ַ���������־��'\0'�������ַ����ĳ�����13
	//char str2[] = { 'H', 'e', 'l', 'l', 'o' ,'\0'};// �ַ�����
	//// �ַ�����û�н�����־'\0'�����Գ�����5
	////��Ҫ�Լ���ӽ�����־
	//printf("%s\n", str1); // ����ַ���
	//printf("%s\n", str2); // ����ַ�����
	//int len = strlen("Hello"); // �����ַ�������
	//printf("%d\n", len); // ����ַ�������
	//printf("%d\n", strlen("hello"));
	//printf("%d\n", strlen(str2)); // ����ַ�������

	////ת���ַ�


	//printf("%c\n",'\130'); // ����ַ�'X'
	////X��ASCII���88,\130��ʮ���Ƶ�88,\130�ǰ˽��Ƶ�130

	//printf("%c\n", '\x58'); // ����ַ�'X'
	////X��ASCII���88��\x58��ʮ�����Ƶ�58




	//ѡ�����
//int main() {
//	int intput = 0;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��1/0��\n");
//	scanf_s("%d", &intput);
//	if (intput == 1) 
//	{
//		printf("��offer\n");
//	} 
//	else
//	{
//		printf("������\n");
//	} 
//	
//	return 0;
//}


// ѭ�����
//whileѭ��
//int main() {
//
//	int line = 0;
//	printf("�������\n");
//	while (line<20000)
//	{
//		printf("д����:%d\n",line);
//		line++;
//
//	}
//
//	if(line>=20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//
//
//
//
//	return 0;
//}

//����
//��������
//int Add(int x, int y)
//{
//		//��������
//	int sum= x + y;
//	return sum;
//}
//int main() {
//	int n1 = 0;
//	int n2 = 0;
//	//������������
//	scanf_s("%d %d", &n1, &n2);
//	//���
//	int sum = Add(n1, n2);
//	//������
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//����

int main()
{
	// ����һ������
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
	//printf("%d\n", arr[8]); // �����һ��Ԫ��
	int i = 0;
	while (i<10)	
	{

		printf("%d ", arr[i]); // �������Ԫ��
		i++;
	}




	return 0;
}
