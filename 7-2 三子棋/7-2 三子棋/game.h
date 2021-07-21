#define ROW 3
#define COLUMN 3
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//º¯ÊýÉùÃ÷£º
void Initialize_board(char board[ROW][COLUMN], int row, int column);
void Display_board(char board[ROW][COLUMN], int row, int column);
void Player_move(char board[ROW][COLUMN], int row, int column);
void Computer_move(char board[ROW][COLUMN], int row, int column);
char Is_win(char board[ROW][COLUMN], int row, int column);
int Is_full(char board[ROW][COLUMN], int row, int column);
