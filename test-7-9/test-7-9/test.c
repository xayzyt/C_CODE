#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//注意：写函数时，如果想要改变实参的值，必须使用指针作为形参，如果不改变实参的值，可以使用值传递。
// 形参是实参的临时拷贝，形参的改变不会影响实参的值。
//void swap(int* a, int* b) {
//	int z = 0;
//	z = *a;  // 将a的值存入临时变量z
//	*a = *b;  // 将b的值赋给a
//	*b = z;  // 将临时变量z的值赋给b
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d, b = %d\n", a, b);
//	//交换a和b的值
//	swap(&a, &b);	
//	printf("交换后：a = %d, b = %d\n", a, b);
//	return 0;
//}

//写一个函数判断一个数是否是素数

//打印100-200之间的素数
//素数是只能被1和它本身整除的数，且大于1。
int main() {

	int i = 0;
	int cout = 0; //用来统计素数的个数
	for (i = 100; i <= 200; i++) {
		//判断i是否是素数
		//是就打印出来
		int flag = 1; //假设i是素数
		int j = 0;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				//不是素数
				flag = 0; //将flag置为0
				break;
			}
		}
		if (flag == 1) {
			//i是素数
			cout++;
			printf("%d ", i);
		}
	}
	printf("\n素数的个数为：%d\n", cout);
	return 0;
}