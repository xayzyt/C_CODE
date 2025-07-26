#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	/*char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a = %d\n", a);	
	printf("b = %d\n", b);
	printf("c = %d\n", c);*/

	//char a = 128;
	//printf("a = %u\n", a);// 这里的 %u 会导致未定义行为，因为 a 的值超出了 signed char 的范围
	//printf("a = %d\n", a);// 这里的 %d 会导致未定义行为，因为 a 的值超出了 signed char 的范围

	int i = -20;
	
	unsigned int j = 10;
	printf("%d\n", i + j);
	
	return 0;
}
