#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//	{
	//int* p = NULL;
	//if (p != NULL)
	//{
	//	*p = 10; // This line will cause a segmentation fault if p is NULL
	//}
	//else
	//{
	//	printf("Pointer is NULL, cannot dereference.\n");
	//}
	//printf("%d", *p);
	

	//ָ������
	//*vp ++,�Ƚ�����Ȼ��vp���Ӽӣ�ֻ�ǵ�ַ�Ӽ�
	//��*vp��++���Ƚ�����Ȼ��*vp���Ӽӣ�ֵ�Ӽ�

	/*int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);*/
	//�����±�д��
	/*for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}*/

	//ָ���±�д��
	//int* p = arr;
	//for (i = 0; i < sz; i++)
	//{
	//	*p = 1;
	//	p++; // ָ��Ӽӣ�ָ����һ��Ԫ��
	//}

	//int* p = arr;
	//for (i = 0; i < sz; i++)
	//{
	//	*(p + i) = 1; // ʹ��ָ����������������Ԫ��
	//}

	/*int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);*/
	//ָ���ָ��õ������м�Ԫ�صĸ���,���ǲ������е�ָ�붼�����
	//ָ��ͬһ�����ָ�����������õ���������ָ��֮���Ԫ�ظ���

//	
//	return 0;
//}

//int my_strlen(char* str)
//{
	/*int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;*/

	//ָ���ָ��
//	char* start = str; // ������ʼ��ַ
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start; // �����ַ�������
//}

//int main()
//{
//	int len = my_strlen("abcdefg");
//	printf("%d\n", len);
//	return 0;
//}

//������ָ��Ĺ�ϵ��arr[i]= *(arr+i)


//����ָ��

	/*int main() 
	{*/
	//	int a = 10;
	//	int* pa = &a; // pa��һ��ָ��int���͵�ָ�룬ָ�����a�ĵ�ַ,һ��ָ�����
	//	//*pa = 20; // �޸�a��ֵΪ20
	//	//printf("a = %d\n", a); // ���a��ֵ
	//	int** ppa = &pa; // ppa��һ��ָ��int*���͵�ָ�룬ָ��һ��ָ��pa�ĵ�ַ,����ָ�����
	//	**ppa = 30; // �޸�a��ֵΪ30
	//	printf("a = %d\n", a); // ���a��ֵ
	//	return 0;
	//	//����ָ��������ָ��һ��ָ���ָ�룬���������ڶ�̬�����ά��������ӵ����ݽṹ��
	//}
	//


//ָ������
//���ָ�������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//...........
//	int arr[10];
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	//ָ������
//	int* parr[10] = { &a,&b,&c };
//	printf("a = %d, b = %d, c = %d\n", *parr[0], *parr[1], *parr[2]);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("parr[%d] = %d\n", i, *parr[i]);
//	}
//
//
//
//	return 0;
//}


int main()
{

	int arr[3][4] = { 1,2,3,4,5,6,9,7,8,10,11 ,12};
	/*int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}*/

	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };
	int* parr[3] = { arr1,arr2,arr3 };

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d", *(*(parr+i)+j));//�൱��parr[i][j]
		}
		printf("\n");
	}
	return 0;
}