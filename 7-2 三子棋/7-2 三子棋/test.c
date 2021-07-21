//测试三子棋游戏
#include"game.h"
void meau()
{
	printf("********************************\n");
	printf("*****  1.play      0.exit  *****\n");
	printf("********************************\n");
}
//游戏的实现：
void game()
{
	char ret = ' ';
	//创建一个数组，用于存放走出的棋盘信息：
	char board[ROW][COLUMN] = { 0 };
	//初始化棋盘：
	Initialize_board(board,ROW,COLUMN);
	//显示棋盘：
	Display_board(board,ROW,COLUMN);
	//下棋：
	while (1)
	{
		Player_move(board, ROW, COLUMN);
		Display_board(board, ROW, COLUMN);
		//判断玩家是否获胜：
		ret = Is_win(board,ROW,COLUMN);//玩家赢返回*电脑赢#平局O继续C  
		if (ret != 'C')
		{
			break;
		}
		Computer_move(board, ROW, COLUMN);
		Display_board(board, ROW, COLUMN);
		ret = Is_win(board, ROW, COLUMN);//判断电脑是否获胜：
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家获胜！\n");
	}
	else if (ret == '#')
	{
		printf("电脑获胜！\n");
	}
	else if (ret == 'B')
	{
		printf("平局！\n");
	}
}
void test()
{
	int intput = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meau();
		printf("请选择:>");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			printf("开始三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while(intput);
}
int main()
{
	test();
	return 0;
}