// test.c
#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu() {
    printf("******************************\n");
    printf("********  1.play   ***********\n");
    printf("********  0.exit   ***********\n");
    printf("******************************\n");
}

void game() {
    char board[ROW][COL] = { 0 };
    // 初始化棋盘
    InitBoard(board, ROW, COL);
    DisplayBoard(board, ROW, COL);

    char result = 'C';
    while (1) {
        // 玩家下棋
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        result = CheckWin(board, ROW, COL);
        if (result != 'C') break;

        // 电脑下棋
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        result = CheckWin(board, ROW, COL);
        if (result != 'C') break;
    }

    // 显示游戏结果
    if (result == '*') {
        printf("玩家获胜！\n");
    }
    else if (result == '#') {
        printf("电脑获胜！\n");
    }
    else if (result == 'Q') {
        printf("平局！\n");
    }
}

int main() {
    srand((unsigned int)time(NULL)); // 设置随机数种子
    int input = 0;

    do {
        menu();
        printf("请选择：");
        scanf("%d", &input);
        switch (input) {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误，请重新输入！\n");
            break;
        }
    } while (input);

    return 0;
}