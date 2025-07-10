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

	//计算n的阶乘
	/*int n = 0;
	int i = 1;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		ret = ret * i;
	}
	printf("n的阶乘是：%d\n", ret);*/

	//计算一的阶乘加到十的阶乘
	/*int i = 1;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++) {
		ret = ret * i;
		sum = sum + ret;
	}
	printf("1的阶乘加到10的阶乘是：%d\n", sum);*/

	//在一个有序数组中查找一个数
	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == k) {
			printf("找到了，位置是：%d\n", i);
			break;
		}
	}
	if (i == sz) {
		printf("没有找到\n");
	}*/

	//在一个有序数组中查找一个数，二分查找
	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;
	int k = 0;
	scanf("%d", &k);
	while (left <= right){
		int mid = (left + right) / 2;
		if (arr[mid] == k) {
			printf("找到了，位置是：%d\n", mid);
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
		printf("没有找到\n");
	}*/


	//编写代码，演示多个字符哦那个两端移动，向中间汇聚
	//char arr1[] = "welcome to bit!!!";
	//char arr2[] = "#################";
	//int left = 0;
	//int right = strlen(arr1) - 1;	
	//while (left <= right) {
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(1000);
	//	//清空屏幕
	//	system("cls");//system是一个库函数，可以执行系统命令
	//	left++;
	//	right--;
	//		
	//}

	//编写代码，模拟用户登录情景，并且只能登录三次。
	//int i = 0;
	//char password[20] = { 0 };
	//for (i = 0; i < 3; i++)
	//{
	//	printf("请输入密码:");
	//	scanf("%s", password);//数组名本来就是地址不取地址
	//	if (strcmp(password, "abcdef") == 0) //比较两个字符串是否相等，不能使用==,而是使用库函数：strcmp
	//	{
	//		printf("登陆成功\n");
	//		break;
	//	}
	//	else
	//		printf("密码错误");

	//}
	//if (i == 3)
	//{
	//	printf("三次错误，退出");
	//}
//	return 0;  
//}
//void menu() {
//	printf("***********************************\n");
//	printf("********** 1.开始猜数字 ***********\n");
//	printf("********** 2.退出游戏 *************\n");
//	printf("***********************************\n");
//}
//void game() {
//	//生成随机数1-100
//	int guess = 0;
//	int ret = rand()%100+1;
//	//printf("随机数是：%d\n", ret);
//	//猜数字游戏
//	while (1){
//	printf("猜数字游戏开始\n");
//	scanf("%d", &guess);
//	if(guess<ret) {
//		printf("猜小了\n");
//	}
//	else if(guess>ret) {
//		printf("猜大了\n");
//	}
//	else {
//		printf("恭喜你，猜对了\n");
//		break;
//	}
//	}
//}
//int main()
//{
//		int choice = 0;
//		srand((unsigned int)time(NULL));//时间戳,放在main函数中，保证每次运行程序时生成的随机数不同
//		do
//		{
//			menu();
//			printf("请选择：");
//			scanf("%d", &choice);
//			switch (choice)
//			{
//			case 1:
//				game();
//				break;
//			case 2:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("输入错误，请重新输入\n");
//				break;
//			}
//		} while (choice);
//	return 0;
//}

//go to语句
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("hehe\n");
//	goto again; //跳转到again标签处


	//关机程序
	//电脑运行起来一分钟内关机
	//如果输入hehe就取消关机
	//char input[10] = { 0 };
	// system("shutdown -s -t 60"); //设置电脑在60秒后关机
	//again:
	//printf("电脑将在60秒后关机,如输入我是猪就取消关机\n");
	//scanf("%s", input);
	//if(strcmp(input, "我是猪") == 0) //比较两个字符串是否相等，不能使用==,而是使用库函数：strcmp
	//{
	//	system("shutdown -a"); //取消关机命令
	//	printf("取消关机成功\n");
	//}
	//else
	//{
	//	goto again; //如果输入的不是hehe，就跳转到again标签处，重新执行关机命令
	//}


	//函数
	//库函数
	//char arr1[20] = { 0 };
	//char arr2[] = { "hello"};
	//strcpy(arr1, arr2); //将arr2的内容复制到arr1中
	//printf("arr1 = %s\n", arr1);


	//char arr3[20] = { "hello world"};
	//memset(arr3, 'x', 5); //将arr3的前5个字符设置为'x'
	//printf("arr3 = %s\n", arr3); //输出arr3的内容



//	return 0;
//}


//自定义函数
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
//	//求较大值
//	int m = get_max(a, b);
//	printf("较大值是：%d\n", m);
//
//
//
//
//	return 0;
//}


//写一个函数交换两个整数的值
//当实参传递给形参时，实参的值会被复制到形参中，形参和实参是两个不同的变量，修改形参不会影响实参
//void swap(int x, int y) {
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//	
//	printf("交换函数内： x= %d, y = %d\n", x, y);
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d, b = %d\n", a, b);
//	swap(a, b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//
//	return 0;
//}


// 定义交换函数：通过指针交换两个整数的值
// 参数：px - 指向第一个整数的指针，py - 指向第二个整数的指针
void swap(int* px, int* py) {
	int z = *px;   // 临时保存px指向的值（即第一个数）
	*px = *py;     // 将py指向的值赋给px指向的内存（第一个数 = 第二个数）
	*py = z;       // 将临时保存的值赋给py指向的内存（第二个数 = 原第一个数）
}
int main() {
	int a = 0;      // 声明整数a并初始化为0
	int b = 0;      // 声明整数b并初始化为0
	// 从用户输入获取两个整数
	scanf("%d %d", &a, &b);
	// 打印交换前的值
	printf("交换前: a = %d, b = %d\n", a, b);
	// 调用swap函数：传入a和b的地址
	swap(&a, &b);   // & 操作符获取变量的内存地址
	// 打印交换后的值
	printf("交换后: a = %d, b = %d\n", a, b);

	return 0;       // 程序正常结束
}