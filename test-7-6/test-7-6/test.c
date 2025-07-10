#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//分支和循环语句
int main()
{//分支语句
	/*int a = 10;
	if(a = 3)
		printf("hehe");
	*/

	/*int age = 10;
	if (age < 18) {
		printf("未成年\n");
	}
	else {

	printf("成年\n");

}
*/
	//多分支

	/*int age = 30;
	if (age < 18) {
		printf("未成年\n");
	}
	else if (age>=18 && age<=60) {
		printf("成年\n");
	}
	else {
		printf("老年\n");
	}*/


	//悬空else
	
	/*int a = 0;
	int b = 2;
	if (a == 1) {
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
*/

	//判断一个数是否为奇数
	/*int num;
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("偶数\n");
	}
	else {
		printf("奇数\n");
	}

	//输出1-100之间的所有奇数
	int i = 1;
	while (i<=100) {
		if(i % 2 == 1) {
			printf("%d ", i);
			
		}
		i++;
	
	}
	*/
	//switch语句
	/*int day;
	printf("请输入一个数字(1-7): ");
	scanf("%d", &day);
	switch (day)
	{// 注意：switch语句的表达式必须是整数类型或枚举类型
	case 1:
		printf("星期一\n");
		break; // 注意：break语句用于跳出switch语句，防止执行后续的case
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
	case 7:
		printf("星期日\n");
		break;
	default:
		printf("输入错误，请输入1-7之间的数字。\n");
		break; // default分支是可选的，但如果存在，通常放在最后
	}
	*/

	//循环语句
	//while循环
	int i = 1;
	while (i<=10) {
		i++;
		if (5 == i) {
			//break; // 当i等于5时，跳出循环
			continue; // 当i等于5时，跳过本次循环，继续下一次循环,下面代码不会执行
		}
		printf("%d\n",i);
		
	}

	return 0;
}
