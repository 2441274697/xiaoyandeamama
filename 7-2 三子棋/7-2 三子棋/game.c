#include"game.h"

void Initialize_board(char board[ROW][COLUMN], int row, int column)
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
void Display_board(char board[ROW][COLUMN], int row, int column)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < column; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < column - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < column; j++)
			{
				printf("___");
				if (j < column - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void Player_move(char board[ROW][COLUMN], int row, int column)
{
	printf("玩家走:>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入位置：");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= row) && (y <= column && y >= 1))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已下棋，请重新选择下棋位置！\n");
			}
		}
		else
		{
			printf("下棋位置超出棋盘范围，请重新输入！\n");
		}
	}
}
void Computer_move(char board[ROW][COLUMN], int row, int column)
{
	printf("电脑走：>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % column;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int Is_full(char board[ROW][COLUMN], int row, int column)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			if (board[i][j] == ' ')
			{
				return 1;
			}
		}
	}
	return 0;
}
char Is_win(char board[ROW][COLUMN], int row, int column)
{
	int i = 0;
	int j = 0;
	//三行：
	for (i = 0; i < row; i++)
	{
		if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//三列：
	for (j = 0; j < column; j++)
	{
		if ((board[0][j] == board[1][j] && board[1][j] == board[2][j]) && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if ((board[0][2] == board[1][1] && board[2][0] == board[1][1]) && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (Is_full(board,ROW,COLUMN) == 0)
	{
		return 'B';
	}
	return 'C';
}