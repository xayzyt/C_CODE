#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ע�⣺д����ʱ�������Ҫ�ı�ʵ�ε�ֵ������ʹ��ָ����Ϊ�βΣ�������ı�ʵ�ε�ֵ������ʹ��ֵ���ݡ�
// �β���ʵ�ε���ʱ�������βεĸı䲻��Ӱ��ʵ�ε�ֵ��
//void swap(int* a, int* b) {
//	int z = 0;
//	z = *a;  // ��a��ֵ������ʱ����z
//	*a = *b;  // ��b��ֵ����a
//	*b = z;  // ����ʱ����z��ֵ����b
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a = %d, b = %d\n", a, b);
//	//����a��b��ֵ
//	swap(&a, &b);	
//	printf("������a = %d, b = %d\n", a, b);
//	return 0;
//}

//дһ�������ж�һ�����Ƿ�������

//��ӡ100-200֮�������
//������ֻ�ܱ�1�������������������Ҵ���1��
int main() {

	int i = 0;
	int cout = 0; //����ͳ�������ĸ���
	for (i = 100; i <= 200; i++) {
		//�ж�i�Ƿ�������
		//�Ǿʹ�ӡ����
		int flag = 1; //����i������
		int j = 0;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				//��������
				flag = 0; //��flag��Ϊ0
				break;
			}
		}
		if (flag == 1) {
			//i������
			cout++;
			printf("%d ", i);
		}
	}
	printf("\n�����ĸ���Ϊ��%d\n", cout);
	return 0;
}