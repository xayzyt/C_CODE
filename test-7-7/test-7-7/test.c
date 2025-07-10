#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	/*int ch = getchar();
	printf("%c\n", ch);
	putchar(ch);
	*/
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/


	/*int id = 0;
	float c = 0.0f;
	float math = 0.0f;
	float english = 0.0f;
	scanf("%d;%f,%f,%f", &id, &c, &math, &english);
	printf("The each subject score of No.%d is %.2f, %.2f, %.2f\n", id, c, math, english);*/


	//for循环
	//for(表达式1; 表达式2; 表达式3)
	//打印1-10
	//int i = 0;
	//for (int i = 1; i <= 10; i++)
	//{
	//	if(i == 5)
	//	{
	//		//break; //跳出循环
	//		continue; //跳过本次循环
	//	}
	//	printf("%d ", i);
	//}

	//for循环的判断部分省略意味着判断恒成立
	/*for(;;)
	{
		printf("Hello World!\n");
	
	}*/

	//for循环嵌套
	//打印9*9个heheh
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("heheh\n");
		}
	
	}
	


	 
	return 0;
}