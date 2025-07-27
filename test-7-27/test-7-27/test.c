#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//unsigned char i = 0;
int main()
{

	//unsigned int i;
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%u", i); 
	//}//死循环

	//char a[1000];//char类型只能放进去-128到127的值 
	//int i = 0;
	//for (i = 0; i < 1000; i++)
	//{
	//	a[i] = -1 - i;

	//}
	//printf("%d",strlen(a));//128+127


	//unsigned char取值范围是0~255
	/*for (i = 0; i <= 125; i++)
	{
		printf("hello,world!\n");
	}*/


	//浮点数在内存中的存储
	int n = 9;
	float* pFloat = (float*)&n; //将int类型的地址强制转换为float类型的地址
	printf("n = %d, *pFloat = %f\n", n, *pFloat); //输出n的值和通过pFloat访问的值
	//注意：这里的输出可能会因为浮点数的表示方式而导致结果不符合预期
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	//输出结果可能会因为浮点数的表示方式而导致结果不符合预期
	printf("pFloat的值为：%f\n", *pFloat);
	//输出结果可能会因为浮点数的表示方式而导致结果不符合预期
	return 0;
}