
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <graphics.h>
#include <time.h>
#include <conio.h>
HWND hwnd;
void Welcome()
{
	//绘制矩形框
	initgraph(640, 480);

	//贴图三部曲
	//1.定义图片
	IMAGE img;
	//2.加载图片
	loadimage(&img, "bk.jpg", 640, 480);
	//3.显示图片
	putimage(0, 0, &img);

	//设置文字颜色
	settextcolor(WHITE);

	//设置背景模式
	setbkmode(0);

	//设置文字字体
	settextstyle(50, 0, "微软雅黑");

	//插入文字
	outtextxy(205, 50, "打字练习系统");
	settextcolor(RED);
	//设置文字字体
	settextstyle(30, 0, "微软雅黑");
	//插入文字
	outtextxy(360, 350, "按任意键开始游戏");
	outtextxy(360, 400, "欢迎进入打字练习系统");
	
	int ch = _getch(); // 处理返回值，避免警告
	(void)ch; // 如果不需要使用返回值，可用此方式消除未使用警告
}
void playgame()
{
	srand((unsigned)time(NULL));
	//清屏
	cleardevice();
	hwnd = GetHWnd();//获取当前窗口句柄
	char MyChar;
	int MyCharX, MyCharY;
	char GetKey;//获取按键值
	int error = 0;
	int score = 0;
	char Str_error[128];//错误次数转换字符串
	char Str_score[128];//得分转换字符串

	while (1)
	{
		//随机产生字母A~Z
		MyChar = rand() % 26 + 'A';
		MyCharX = rand() % 610;
		settextcolor(WHITE);
		//设置文字字体
		settextstyle(30, 0, "微软雅黑");
		//字符串拼接
		sprintf_s(Str_error, "错误次数：%d", error);
		sprintf_s(Str_score, "得分：%d", score);
		

		for (MyCharY = 0; MyCharY <= 480; MyCharY++)
		{
			cleardevice();
			//显示错误次数和得分
			outtextxy(10, 10, Str_error);
			outtextxy(500, 10, Str_score);
			outtextxy(MyCharX, MyCharY, MyChar);
			Sleep(10);
			//检测键盘是否有按键按下
			if (_kbhit())
			{
				GetKey = _getch();
				if (GetKey == MyChar || GetKey - 32 == MyChar)
				{
					score++;
					break;
					
				}
				else
				{
					//消息弹框
					//MessageBox(hwnd, "游戏结束！", "提示", MB_OK);
					//exit(0);
					error++;
					break;
				}
			}
		}
		if (MyCharY > 480)
		{
			error++;
			
		}
		if (error >= 5)
		{
			MessageBox(hwnd, "游戏结束！", "提示", MB_OK);
			exit(0);
		}
	}
}

int main()
{
	Welcome();
	playgame();
	

	//卡屏
	getchar();
	return 0;
}

