#include"game.h"
void Initialize_board(char mine[ROWS][COLUMNS],int rows,int columns,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			mine[i][j] = set;
		}
	}
}
void Display_board(char board[ROWS][COLUMNS],int row,int column)
{
	int i = 0;
	int j = 0;
	//´òÓ¡ÐÐºÅ
	for (i = 0; i <= column; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//´òÓ¡ÁÐºÅ
		for (j = 1; j <= column; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void Set_mine(char mine[ROWS][COLUMNS], int row, int column)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
int Get_mine_count(char mine[ROWS][COLUMNS],int x,int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}
void Find_mine(char mine[ROWS][COLUMNS], char show[ROWS][COLUMNS], int row, int column)
{
	int x = 0, y = 0;
	int count = row*column-EASY_COUNT;
	while (count)
	{
		printf("ÇëÊäÈë×ø±ê:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= column)
		{
			if (mine[x][y] == '0')
			{
				show[x][y] = Get_mine_count(mine, x, y) + '0';
				Display_board(show, ROW, COLUMN);
				count--;
			}
			else
			{
				printf("\nºÜÒÅº¶£¬ÓÎÏ·Ê§°Ü£¡\n");
				Display_board(mine, ROW, COLUMN);
				break;
			}
		}
		else
		{
			printf("ÊäÈë³¬³ö·¶Î§£¬ÇëÖØÐÂÊäÈë£¡\n");
		}
	}
	if (count == 0)
	{
		printf("¹§Ï²Äã£¬ÓÎÏ·Ê¤Àû£¡\n");
	}
}
