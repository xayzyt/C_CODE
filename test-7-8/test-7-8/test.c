#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//int main()
//{
	//do-while loop
	/*int i = 1;
	do {
		printf("%d", i);
		i++;
	}
	while (i <= 10);*/

	//����n�Ľ׳�
	/*int n = 0;
	int i = 1;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		ret = ret * i;
	}
	printf("n�Ľ׳��ǣ�%d\n", ret);*/

	//����һ�Ľ׳˼ӵ�ʮ�Ľ׳�
	/*int i = 1;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++) {
		ret = ret * i;
		sum = sum + ret;
	}
	printf("1�Ľ׳˼ӵ�10�Ľ׳��ǣ�%d\n", sum);*/

	//��һ�����������в���һ����
	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == k) {
			printf("�ҵ��ˣ�λ���ǣ�%d\n", i);
			break;
		}
	}
	if (i == sz) {
		printf("û���ҵ�\n");
	}*/

	//��һ�����������в���һ���������ֲ���
	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;
	int k = 0;
	scanf("%d", &k);
	while (left <= right){
		int mid = (left + right) / 2;
		if (arr[mid] == k) {
			printf("�ҵ��ˣ�λ���ǣ�%d\n", mid);
			break;
}
		else if (arr[mid] < k) {
			left = mid + 1;
}
		else if (arr[mid] > k) {
			right = mid - 1;
}
}
	if (left > right) {
		printf("û���ҵ�\n");
	}*/


	//��д���룬��ʾ����ַ�Ŷ�Ǹ������ƶ������м���
	//char arr1[] = "welcome to bit!!!";
	//char arr2[] = "#################";
	//int left = 0;
	//int right = strlen(arr1) - 1;	
	//while (left <= right) {
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(1000);
	//	//�����Ļ
	//	system("cls");//system��һ���⺯��������ִ��ϵͳ����
	//	left++;
	//	right--;
	//		
	//}

	//��д���룬ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
	//int i = 0;
	//char password[20] = { 0 };
	//for (i = 0; i < 3; i++)
	//{
	//	printf("����������:");
	//	scanf("%s", password);//�������������ǵ�ַ��ȡ��ַ
	//	if (strcmp(password, "abcdef") == 0) //�Ƚ������ַ����Ƿ���ȣ�����ʹ��==,����ʹ�ÿ⺯����strcmp
	//	{
	//		printf("��½�ɹ�\n");
	//		break;
	//	}
	//	else
	//		printf("�������");

	//}
	//if (i == 3)
	//{
	//	printf("���δ����˳�");
	//}
//	return 0;  
//}
//void menu() {
//	printf("***********************************\n");
//	printf("********** 1.��ʼ������ ***********\n");
//	printf("********** 2.�˳���Ϸ *************\n");
//	printf("***********************************\n");
//}
//void game() {
//	//���������1-100
//	int guess = 0;
//	int ret = rand()%100+1;
//	//printf("������ǣ�%d\n", ret);
//	//��������Ϸ
//	while (1){
//	printf("��������Ϸ��ʼ\n");
//	scanf("%d", &guess);
//	if(guess<ret) {
//		printf("��С��\n");
//	}
//	else if(guess>ret) {
//		printf("�´���\n");
//	}
//	else {
//		printf("��ϲ�㣬�¶���\n");
//		break;
//	}
//	}
//}
//int main()
//{
//		int choice = 0;
//		srand((unsigned int)time(NULL));//ʱ���,����main�����У���֤ÿ�����г���ʱ���ɵ��������ͬ
//		do
//		{
//			menu();
//			printf("��ѡ��");
//			scanf("%d", &choice);
//			switch (choice)
//			{
//			case 1:
//				game();
//				break;
//			case 2:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("�����������������\n");
//				break;
//			}
//		} while (choice);
//	return 0;
//}

//go to���
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("hehe\n");
//	goto again; //��ת��again��ǩ��


	//�ػ�����
	//������������һ�����ڹػ�
	//�������hehe��ȡ���ػ�
	//char input[10] = { 0 };
	// system("shutdown -s -t 60"); //���õ�����60���ػ�
	//again:
	//printf("���Խ���60���ػ�,�������������ȡ���ػ�\n");
	//scanf("%s", input);
	//if(strcmp(input, "������") == 0) //�Ƚ������ַ����Ƿ���ȣ�����ʹ��==,����ʹ�ÿ⺯����strcmp
	//{
	//	system("shutdown -a"); //ȡ���ػ�����
	//	printf("ȡ���ػ��ɹ�\n");
	//}
	//else
	//{
	//	goto again; //�������Ĳ���hehe������ת��again��ǩ��������ִ�йػ�����
	//}


	//����
	//�⺯��
	//char arr1[20] = { 0 };
	//char arr2[] = { "hello"};
	//strcpy(arr1, arr2); //��arr2�����ݸ��Ƶ�arr1��
	//printf("arr1 = %s\n", arr1);


	//char arr3[20] = { "hello world"};
	//memset(arr3, 'x', 5); //��arr3��ǰ5���ַ�����Ϊ'x'
	//printf("arr3 = %s\n", arr3); //���arr3������



//	return 0;
//}


//�Զ��庯��
//int get_max(int x, int y)
//{
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//��ϴ�ֵ
//	int m = get_max(a, b);
//	printf("�ϴ�ֵ�ǣ�%d\n", m);
//
//
//
//
//	return 0;
//}


//дһ��������������������ֵ
//��ʵ�δ��ݸ��β�ʱ��ʵ�ε�ֵ�ᱻ���Ƶ��β��У��βκ�ʵ����������ͬ�ı������޸��ββ���Ӱ��ʵ��
//void swap(int x, int y) {
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//	
//	printf("���������ڣ� x= %d, y = %d\n", x, y);
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a = %d, b = %d\n", a, b);
//	swap(a, b);
//	printf("������a = %d, b = %d\n", a, b);
//
//	return 0;
//}


// ���彻��������ͨ��ָ�뽻������������ֵ
// ������px - ָ���һ��������ָ�룬py - ָ��ڶ���������ָ��
void swap(int* px, int* py) {
	int z = *px;   // ��ʱ����pxָ���ֵ������һ������
	*px = *py;     // ��pyָ���ֵ����pxָ����ڴ棨��һ���� = �ڶ�������
	*py = z;       // ����ʱ�����ֵ����pyָ����ڴ棨�ڶ����� = ԭ��һ������
}
int main() {
	int a = 0;      // ��������a����ʼ��Ϊ0
	int b = 0;      // ��������b����ʼ��Ϊ0
	// ���û������ȡ��������
	scanf("%d %d", &a, &b);
	// ��ӡ����ǰ��ֵ
	printf("����ǰ: a = %d, b = %d\n", a, b);
	// ����swap����������a��b�ĵ�ַ
	swap(&a, &b);   // & ��������ȡ�������ڴ��ַ
	// ��ӡ�������ֵ
	printf("������: a = %d, b = %d\n", a, b);

	return 0;       // ������������
}