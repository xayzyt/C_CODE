#define _CRT_SECURE_NO_WARNINGS
#include <graphics.h>   // 图形库头文件
#include <conio.h>     // 控制台输入输出头文件
#include <stdio.h>     // 标准输入输出头文件
#include <stdlib.h>    // 标准库头文件
#include <time.h>
#define N 5 //定义宏时去掉分号
int Map[N]; //定义一个数组，存放每一列的黑块位置
int MapX, MapY,Score = 0; //存放鼠标点击位置

//随机产生黑块坐标
void InitBlack()
{
	for (int i = 0; i < N - 1; i++)
	{
		Map[i] = rand() % N; //0~4
		
	}
	
}
//根据Map数组，绘制黑块
void DrawBlack()
{
	for(int i =0;i<N-1;i++)
	{
		setfillcolor(BLACK);
		fillrectangle(Map[i]*100,i*120,100+Map[i]*100,120+i*120);
	}
}

void Draw()
{
	BeginBatchDraw(); //开始批量绘图
	cleardevice(); //清屏
	//设置线条颜色
	setlinecolor(BLACK);
	setfillcolor(WHITE);
	//4行5列,每个格子宽100，高120
	//本质上格子是矩形
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			fillrectangle(j * 100, i * 120, 100 + j * 100, 120 + i * 120);
		}
	}
	//fillrectangle(0,0,100,120);   //填充矩形
	setfillcolor(BLACK);
	DrawBlack();
	EndBatchDraw(); //结束批量绘图
}

bool Play()
{
	MOUSEMSG msg;
	msg = GetMouseMsg();//获取鼠标消息
	switch (msg.uMsg)
	{
	case WM_LBUTTONDOWN://鼠标左键按下
		//计算对应下标
		MapY = msg.y / 120; 
		MapX = msg.x / 100;
		if (Map[3] == MapX && MapY == 3)
		{
			for (int i = 3; i > 0; i--)
			{
				Map[i] = Map[i - 1];
			}
			Map[0] = rand() % N;//随机产生新的黑块
			Score += 10;
			
		}
		else
		{
	
			return true;
		}
		break;
	}
	return  false;
}

int main()
{
	srand((unsigned)time(NULL));//设置随机数种子
	//1.创建界面（参数单位px）
	initgraph(500, 480);

	MOUSEMSG msg;//定义鼠标消息变量
	msg = GetMouseMsg();//获取鼠标消息24 

	InitBlack();//初始化黑块位置
	while (1)
	{
		Draw();
		if (Play() == true)
		{
			char str[128];
			sprintf(str,"总计消除格子%d个，总计得分%d",Score/10,Score);
			MessageBox(GetHWnd(),str,"Game Over",MB_OK);
			exit(0);//退出程序
		}
	}
	
	
	getchar();//卡屏，保持界面

	
	return 0;
}
