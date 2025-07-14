// game.c
#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            board[i][j] = ' ';
        }
    }
}

void DisplayBoard(char board[ROW][COL], int row, int col) {
    for (int i = 0; i < row; i++) {
        // ����������ʾ
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < row - 1)
            printf("---|---|---\n");
    }
}

void PlayerMove(char board[ROW][COL], int row, int col) {
    int x = 0;
    int y = 0;
    printf("������壺\n");
    while (1) {
        printf("����������(��:1 2):");
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col) {
            if (board[x - 1][y - 1] == ' ') {
                board[x - 1][y - 1] = '*';
                break;
            }
            else {
                printf("��λ���ѱ�ռ�ã�\n");
            }
        }
        else {
            printf("����Ƿ������������룡\n");
        }
    }
}

void ComputerMove(char board[ROW][COL], int row, int col) {
    printf("�������壺\n");
    int x = 0;
    int y = 0;
    while (1) {
        x = rand() % row;
        y = rand() % col;
        if (board[x][y] == ' ') {
            board[x][y] = '#';
            printf("��������: %d %d\n", x + 1, y + 1);
            break;
        }
    }
}

char CheckWin(char board[ROW][COL], int row, int col) {
    // �����
    for (int i = 0; i < row; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return board[i][0];
        }
    }

    // �����
    for (int j = 0; j < col; j++) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
            return board[0][j];
        }
    }

    // ���Խ���
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return board[0][2];
    }

    // ���ƽ��
    int isFull = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (board[i][j] == ' ') {
                isFull = 0;
                break;
            }
        }
        if (!isFull) break;
    }

    if (isFull) return 'Q'; // ƽ��
    return 'C';             // ������Ϸ
}