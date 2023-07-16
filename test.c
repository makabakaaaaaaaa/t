#define _CRT_SECURE_NO_WARNINGS	
#include<string.h>
#include<stdio.h>
#include"game.h"
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	displayboard(board,ROW,COL);
	while (1)
	{
		playerturn(board,ROW,COL);
		displayboard(board,ROW,COL);
		ret=is_win(board,ROW,COL);
		if (ret == '*')
		{
			printf("Congrantulations!You win!\n");
		}
		if (ret == 'q')
		{
			printf("DRAW！\n");
		}
		if (ret != 'c')
		{
			break;
		}
		computerturn(board,ROW,COL);
		displayboard(board,ROW,COL);
		ret=is_win(board,ROW,COL);
		if (ret == '#')
		{
			printf("I am sorry that you fail\n");
		}
		if (ret == 'q')
		{
			printf("DRAW!\n");
		}
		if (ret != 'c')
		{
			break;
		}
		
	}
}
void menu()
{
	printf("*******************\n");
	printf("***1.play 0.exit***\n");
	printf("*******************\n");
	printf("choose number:");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("错误，请重新输入：\n");
			break;
		}
	} while (input);
}
main()
{
	test();
	return 0;
}