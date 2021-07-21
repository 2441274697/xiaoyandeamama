#include"game.h"
//函数的实现：
void Initialize_board(char board[ROW][COLUMN])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COLUMN; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Display_board(char board[ROW][COLUMN])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COLUMN; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < COLUMN - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COLUMN; j++)
			{
				printf("___");
				if (j < COLUMN - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void Player_move(char board[ROW][COLUMN])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入下棋坐标：>");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= ROW) && (y >= 1 && y <= COLUMN))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已下棋，请重新选择位置！\n");
			}
		}
		else
		{
			printf("输入坐标超出棋盘范围，请重新输入！\n");
		}
	}
}
void Computer_move(char board[ROW][COLUMN])
{
	printf("电脑下棋:>\n");
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COLUMN;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int Is_full(char board[ROW][COLUMN])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COLUMN; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char Is_win(char board[ROW][COLUMN])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) && (board[i][0] != ' '))
		{
			return board[i][0];
		}
	}
	for (j = 0; j < COLUMN; j++)
	{
		if ((board[0][j] == board[1][j] && board[1][j] == board[2][j]) && (board[0][j]!= ' '))
		{
			return board[0][j];
		}
	}
	if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) && (board[1][1] != ' '))
	{
		return board[1][1];
	}
	if ((board[0][2] == board[1][1] && board[1][1] == board[2][0]) && (board[1][1] != ' '))
	{
		return board[1][1];
	}
	if (Is_full(board)==1)
	{
		return 'P';
	}
	return 'C';
}