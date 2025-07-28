#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


void move_odd_even(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while(left<right)
	{ 
	//从左向右找偶数停下来
	while ((left < right)&&arr[left] % 2 == 1)
	{
		left++;
	}
	//从右向左找奇数停下来
	while ((left < right) && arr[left] % 2 == 0)
	{
		right--;
	}
	//交换偶数和奇数的位置
	if (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
}
int main() {

	/*float f = 5.5;*/
	//5.5
	//二进制表示为101.1
	//科学计数法表示为1.011*2^2或者-1^0*1.011*2^2
	//s=0,E=2,M=011,M为有效位存储时可以先去掉最高位的1
	//存储时E需要加偏移值，float的偏移值为127，double的偏移值为1023
	//存储的二进制序列为：0（s）   10000001（129）  011（M） 00000000 00000000 00000000 00000000
	//十六进制为：0x40 b0 00 00；存入小端为：0x00 0x00 0xb0 0x40

	/*int n = 9;
	float* p = (float*)&n;
	printf("n = %d, *p = %f\n", n, *p);
	*p = 9.0;
	printf("n = %d, *p = %f\n", n, *p);*/


	//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序，使得所有奇数位于数组的前半部分，所有偶数位于数组的后半部分。
	
		

	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++) {
		scanf("%d", &arr[i]);
	}
	//调整数组，使奇数在前，偶数在后
	move_odd_even(arr,sz);

	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	//输出结果：奇数在前，偶数在后


		return 0;
}