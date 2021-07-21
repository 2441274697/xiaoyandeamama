#define _CRT_SECURE_NO_WARNINGS
//宏定义：行ROW，列COLUMN
#define ROW 3
#define COLUMN 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//函数的声明：
void Initialize_board(char board[ROW][COLUMN]);
void Display_board(char board[ROW][COLUMN]);
void Player_move(char board[ROW][COLUMN]);
void Computer_move(char board[ROW][COLUMN]);
char Is_win(char board[ROW][COLUMN]);
int Is_full(char board[ROW][COLUMN]);

