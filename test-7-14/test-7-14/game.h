// game.h
#pragma once
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

// ��ʾ����
void DisplayBoard(char board[ROW][COL], int row, int col);

// �������
void PlayerMove(char board[ROW][COL], int row, int col);

// ��������
void ComputerMove(char board[ROW][COL], int row, int col);

// �����Ϸ״̬
char CheckWin(char board[ROW][COL], int row, int col);