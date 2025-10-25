#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib") //加载多媒体库
#pragma comment(linker, "/subsystem:windows /entry:mainCRTStartup")
#ifdef _UNICODE
#pragma comment(linker, "/entry:wWinMainCRTStartup /subsystem:windows")
#endif
int flag = 0; //标志位 0 黑棋 1 白棋
int ChessMap[20][20] = { 0 }; //棋盘数组 
void initGame()
{
	//创建界面 宽 高 单位px 像素
	initgraph(600, 500);
	//插入图片（贴图三部曲）
	//1.定义变量
	IMAGE img;
	//2.赋值(加载图片)
	loadimage(&img, "bk3.jpg");
	//3.显示输出(贴图),左上角坐标(0,0)
	putimage(0, 0, &img);


	//五子棋棋盘绘制
	//线条颜色
	setlinecolor(BLACK);
	//画线
	for (int i = 0; i < 20; i++)
	{
		line(0, 25 * i, 500, 25 * i);
		line(25 * i, 0, 25 * i, 500);
		line(500, 0, 500, 500);
	}

	//插入文字
	//1.设置文字颜色和背景颜色
	settextstyle(15, 0, _T("宋体")); // 或者 "微软雅黑"
	setbkmode(0);
	settextcolor(BLACK);
	//2.根据坐标插入文字
	outtextxy(520, 0, "五子棋游戏");
	outtextxy(515, 60, "玩家1：黑棋");
	outtextxy(515, 100, "玩家2：白棋");
}
int jude(int MapX, int MapY)//判断输赢函数
{
	int temp = 2 - flag % 2; //判断当前棋子颜色
	//判断竖是否连在一起
	for (int i = MapX - 4, j = MapY; i <= MapX; i++)
	{
		if (i >= 1 && i < 16 && temp == ChessMap[i][j] && temp == ChessMap[i + 1][j] && temp == ChessMap[i + 2][j] && temp == ChessMap[i + 3][j] && temp == ChessMap[i + 4][j])
		{
			return 1;
		}
	
	}
	//判断横是否连在一起
	for (int i = MapX , j = MapY - 4; j<= MapY; j++)
	{
		if (i >= 1 && i < 16 && temp == ChessMap[i][j] && temp == ChessMap[i][j + 1] && temp == ChessMap[i][j + 2] && temp == ChessMap[i][j + 3] && temp == ChessMap[i][j + 4])
		{
			return 1;
		}
	}
	//判断左斜是否连在一起
	for (int i = MapX - 4; i <= MapX; i++)
	{
		int j = MapY - 4 + (i - (MapX - 4));
		if (j > MapY) break;
		if (i >= 1 && i < 16 && j >= 1 && j < 16 && temp == ChessMap[i][j] && temp == ChessMap[i + 1][j + 1] && temp == ChessMap[i + 2][j + 2] && temp == ChessMap[i + 3][j + 3] && temp == ChessMap[i + 4][j + 4])
		{
			return 1;
		}
	}
	//判断右斜是否连在一起
	for (int i = MapX - 4, j = MapY + 4; i <= MapX && j >= MapY; i++, j--)
	{
		if (i >= 1 && i < 16 && j <= 19 && j > 4 && temp == ChessMap[i][j] && temp == ChessMap[i + 1][j - 1] && temp == ChessMap[i + 2][j - 2] && temp == ChessMap[i + 3][j - 3] && temp == ChessMap[i + 4][j - 4])
		{
			return 1;
		}
	}
	return 0;
}
void playGame()
{
	int ChessX=0, ChessY=0; //棋子坐标
	int MapX = 0, MapY = 0; //棋盘坐标
	//获取鼠标消息
	MOUSEMSG Msg;
	HWND hWnd = GetHWnd(); //获取当前窗口句柄
	while (1)
	{
		Msg = GetMouseMsg();//获取鼠标消息
		for (int i = 1; i < 20; i++)
		{
			for (int j = 1; j < 20; j++)
			{
				//abs函数 绝对值函数
				if (abs(Msg.x - j * 25) < 12 && abs(Msg.y - i * 25) < 12)
				{
					ChessX = j * 25;
					ChessY = i * 25;
					MapX = i;
					MapY = j;
				}
			}
		}
		if (Msg.uMsg == WM_LBUTTONDOWN)
		{
			if (ChessMap[MapX][MapY] != 0)
			{
				MessageBox(NULL, "该位置已有棋子，请重新落子", "提示", MB_OK);
				continue;
			}
			if (flag % 2 == 0)
			{
				setfillcolor(BLACK); //设置填充颜色
				solidcircle(ChessX, ChessY, 10); //画实心圆
				ChessMap[MapX][MapY] = 1; //黑棋用1表示
			}
			else 
			{
				setfillcolor(WHITE); //设置填充颜色
				solidcircle(ChessX, ChessY, 10); //画实心圆
				ChessMap[MapX][MapY] = 2; //白棋用2表示
			}
			flag++;//标志位切换
		}
		if (jude(MapX, MapY))
		{
			if (1 == flag % 2)
			{
				MessageBox(hWnd,"玩家1：黑棋胜利","Game Over",MB_OK);
				return;
			}
			else
			{
				MessageBox(hWnd,"玩家2：白棋胜利","Game Over",MB_OK);
				return;
			}
		}
	}
}

int main()
{
	mciSendString("play music.mp3",0,0,0);
	initGame();
	playGame();

	//卡屏
	//char ch = getchar();
	//关闭界面
	closegraph();
	return 0;
}
