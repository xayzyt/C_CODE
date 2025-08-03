#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//字符串函数
	// 1. strlen:求字符串长度，返回值类型为size_t，size_t是无符号整数类型
	char arr[] = "abcdef";//abcdef\0
	int len = strlen(arr); //计算字符串长度，不包括'\0'，返回6
	printf("%d\n",len);

	// 2. strcpy:复制字符串，将源字符串复制到目标字符串
	char arr2[20];
	strcpy(arr2, arr); //将arr的内容复制到arr2中
	printf("%s\n", arr2); //输出arr2的内容


	// 3. strcat:连接字符串，将源字符串追加到目标字符串的末尾
	char arr3[40] = "hello"; //目标字符串
	strcat(arr3, arr); //将arr追加到arr3的末尾
	printf("%s\n", arr3); //输出arr3的内容

	// 4. strcmp:比较两个字符串，返回值为0表示相等，正数表示大于，负数表示小于
	char arr4[] = "abc";
	char arr5[] = "abcdef";
	int result = strcmp(arr4, arr5); //比较arr4和arr5
	printf("strcmp结果: %d\n", result); //输出比较结果
	if (result == 0) {
		printf("arr4和arr5相等\n");
	} else if (result > 0) {
		printf("arr4大于arr5\n");
	} else {
		printf("arr4小于arr5\n");
	}

	// 5. strncat:连接字符串，追加指定长度的源字符串到目标字符串末尾
	char arr6[40] = "hello"; //目标字符串
	strncat(arr6, arr, 3); //将arr的前3个字符追加到arr6末尾
	printf("strncat结果: %s\n", arr6); //输出连接后的字符串

	// 6. strncpy:复制字符串，复制指定长度的源字符串到目标字符串
	char arr7[20];
	strncpy(arr7, arr, 3); //将arr的前3个字符复制到arr7
	arr7[3] = '\0'; //手动添加字符串结束符
	printf("strncpy结果: %s\n", arr7); //输出复制后的字符串

	// 7. strncmp:比较两个字符串，比较指定长度的字符，返回值为0表示相等，正数表示大于，负数表示小于
	int result2 = strncmp(arr4, arr5, 3); //比较arr4和arr5的前3个字符
	if (result2 == 0) {
		printf("arr4和arr5的前3个字符相等\n");
	} else if (result2 > 0) {
		printf("arr4的前3个字符大于arr5的前3个字符\n");
	} else {
		printf("arr4的前3个字符小于arr5的前3个字符\n");
	}

	//8.strstr:查找子字符串
	char* sub = strstr(arr3, "llo"); //查找"llo"在arr3中的位置
	if (sub != NULL) {
		printf("子字符串'llo'在arr3中的位置: %s\n", sub); //输出子字符串及其后续内容
	} else {
		printf("未找到子字符串'llo'\n");
	}
	//9.strtok:将字符串分割成多个子字符串
	char str[] = "hello,world,example"; //待分割字符串
	char* token = strtok(str, ","); //使用逗号作为分隔符
	while (token != NULL) {
		printf("分割出的子字符串: %s\n", token); //输出每个子字符串
		token = strtok(NULL, ","); //继续分割下一个子字符串
	}	
	//10.strerror:获取错误信息
	char* error_message = strerror(ENOENT); //获取文件不存在的错误信息
	printf("错误信息: %s\n", error_message); //输出错误信息



	return 0;
}