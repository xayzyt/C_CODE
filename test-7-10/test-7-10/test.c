#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//int main() {
//	
//	//��ӡ1000��2000��֮�����������
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{   
//		// ������жϹ���
//		// 1. �ܱ�4���������ܱ�100����
//		// 2. �ܱ�400����
//		if ((year % 4==0) && (year % 100 != 0))
//		printf("%d ", year);
//		if (year % 400 == 0)
//		printf("%d ", year);
//	}
//
//
//
//	return 0;
//}

//дһ�������ж�һ���ǲ�������
//void judge(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0))
//		printf("%d������\n",year);
//	if (year % 400 == 0)
//		printf("%d������\n", year);
//	else
//		printf("%d��������\n", year);
//}
//int main()
//{
//	int year = 0;
//	//printf("������һ�����: ");
//	//scanf("%d", &year);
//	for (year = 1000; year <= 2000; year++)
//	{
//		judge(year);
//	}
//	
//
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[], int k,int sz)
//{//arrʵ����һ��ָ����������鴫��ֻ�Ǵ�������ַ��������Ҫ��������Ĵ�Сsz
//	int left = 0; // ��߽�
//	int right = sz - 1; // �ұ߽�
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2; // �м�λ��
//		if (arr[mid] == k) {
//			return mid; // �ҵ�Ԫ�أ������±�
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1; // ���Ұ벿�ּ�������
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1; // ����벿�ּ�������
//		}
//	}
//	return -1; // û���ҵ�Ԫ�أ�����-1
//}
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7; // Ҫ���ҵ�Ԫ��
//	int sz = sizeof(arr) / sizeof(arr[0]); // ����Ĵ�С
//	//�ҵ��Ļ������±꣬�Ҳ����Ļ�����-1
//	int ret = binary_search(arr, k,sz);
//	if (ret != -1) {
//		printf("Ԫ�� %d �������е��±���: %d\n", k, ret);
//	} else {
//		printf("Ԫ�� %d ����������\n", k);
//	}
//	return 0;
//}
// дһ��������ÿ����һ�κ�����num��ֵ��1
//void Add(int* num)
//{
//	*num += 1; // ͨ��ָ���޸�ȫ�ֱ�����ֵ
//	//(*num)++; // Ҳ��������д
//}
//int main() {
//	
//	int num = 0; // ȫ�ֱ���
//	Add(&num); // ���ú�����num��ֵ��1
//	printf("num��ֵ��: %d\n", num); // ���num��ֵ
//	Add(&num); // ���ú�����num��ֵ��1
//	printf("num��ֵ��: %d\n", num); // ���num��ֵ
//	return 0;
//}



//������Ƕ�׵���
//��������Ƕ�׵��ã���һ���������Ե�����һ������
//��������Ƕ�׶��壬��һ��������������һ�������Ķ����ж���



//��ʽ����
//int main()
//{
//	int len = strlen("hello");
//	int capcity = sizeof("hello"); 
//	printf("�ַ���������: %d\n", len); // ����ַ�������
//	printf(" %d\n", capcity); // ����ַ���������������������'\0'��
//	// ��ʽ�����ַ������ַ�
//	printf("%d\n", strlen("hello")); // ����ַ������ȼ�1
//	
//
//	printf("%d", printf("%d", printf("%d", 43))); // ���100������ֵ��printf�ķ���ֵ����������ַ���
//	// printf�����ķ���ֵ��������ַ���
//
//	return 0;
//}

//�����������Ͷ���
// ����������
//int add(int a, int b); // �������������߱��������������ơ��������ͺͷ���ֵ����
//int main() {
//    int result = add(3, 5); // ���ú���
//    printf("Result: %d\n", result); // ������
//    return 0;
//}
////�����Ķ���
//int add(int a, int b) {
//    return a + b; // �����壬ִ�о���Ĳ���
//}

#include "add.h"//����ͷ�ļ�

//int main() {
//	    int result = add(3, 5); // ���ú���
//	    printf("Result: %d\n", result); // ������
//	    return 0;
//	}
//

//�����ĵݹ�
//����ĵݹ���ָ�������䶨����ֱ�ӻ��ӵص��������ݹ�ͨ�����ڽ�����Էֽ�Ϊ��С����������⡣
//�ݹ麯��ͨ�������������֣���׼����͵ݹ��������׼����ǵݹ����ֹ���������ݹ�������Ǻ�����������Ĳ��֡�


//����1234.���1 2 3 4

void print(unsigned int num)
{
	if (num > 9) {
		print(num / 10); // �ݹ���ã������λ
	}
	printf("%d ", num % 10); // ��ӡ��ǰλ

}
int main() {
	unsigned int num = 1234; // ���������
	print(num); // ���ú�����ӡ����

	return 0;
}