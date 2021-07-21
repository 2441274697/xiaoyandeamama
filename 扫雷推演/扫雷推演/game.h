#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define ROW 9
#define COLUMN 9
#define ROWS ROW+2
#define COLUMNS COLUMN+2
#define EASY_COUNT 80

void Initialize_board(char mine[ROWS][COLUMNS], int rows, int columns, char set);
void Display_board(char board[ROWS][COLUMNS], int row, int column);
void Set_mine(char mine[ROWS][COLUMNS], int row, int column);
void Find_mine(char mine[ROWS][COLUMNS], char show[ROWS][COLUMNS], int row, int column);
int Get_mine_count(char mine[ROWS][COLUMNS], int x, int y);