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
    // ��ʼ������
    InitBoard(board, ROW, COL);
    DisplayBoard(board, ROW, COL);

    char result = 'C';
    while (1) {
        // �������
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        result = CheckWin(board, ROW, COL);
        if (result != 'C') break;

        // ��������
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        result = CheckWin(board, ROW, COL);
        if (result != 'C') break;
    }

    // ��ʾ��Ϸ���
    if (result == '*') {
        printf("��һ�ʤ��\n");
    }
    else if (result == '#') {
        printf("���Ի�ʤ��\n");
    }
    else if (result == 'Q') {
        printf("ƽ�֣�\n");
    }
}

int main() {
    srand((unsigned int)time(NULL)); // �������������
    int input = 0;

    do {
        menu();
        printf("��ѡ��");
        scanf("%d", &input);
        switch (input) {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ��������������룡\n");
            break;
        }
    } while (input);

    return 0;
}