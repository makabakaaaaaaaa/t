#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"game.h"
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{

			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		
	}
}
void playerturn(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("请输入落子坐标：");
	while (1)
	{
		scanf_s("%d %d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("已落子！请重新输入坐标：");
			}
		}
		else
		{
			printf("输入坐标不在棋盘内！请重新输入坐标：");
		}
	}
}
void computerturn(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑回合：\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}
int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
		
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	int k = is_full(board, ROW, COL);
	if (k== 0)
	{
		return 'c';
	}
	else
	{
		return 'q';
	}
	return 'c';
}

