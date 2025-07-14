// game.h
#pragma once
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

// 显示棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

// 玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

// 电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

// 检查游戏状态
char CheckWin(char board[ROW][COL], int row, int col);