#define _CRT_SECURE_NO_WARNINGS		
#define ROW 4
#define COL 4
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playerturn(char board[ROW][COL], int row, int col);
void computerturn(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row, int col);
int is_full(char board[ROW][COL], int row, int col);
