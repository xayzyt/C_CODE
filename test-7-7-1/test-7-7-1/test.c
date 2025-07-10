#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main() {
	//关机程序
	//电脑运行起来一分钟内关机
	//如果输入hehe就取消关机
	char input[10] = { 0 };
	 system("shutdown -s -t 60"); //设置电脑在60秒后关机
	again:
	printf("电脑将在60秒后关机,如输入我是猪就取消关机\n");
	scanf("%s", input);
	if(strcmp(input, "我是猪") == 0) //比较两个字符串是否相等，不能使用==,而是使用库函数：strcmp
	{
		system("shutdown -a"); //取消关机命令
		printf("取消关机成功\n");
	}
	else
	{
		goto again; //如果输入的不是hehe，就跳转到again标签处，重新执行关机命令
	}
	return 0;
}