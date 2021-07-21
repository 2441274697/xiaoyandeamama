#include"game.h"
void meau()
{
	printf("*******************************\n");
	printf("*****  1.play     0.exit  *****\n");
	printf("*******************************\n");
}
void game()
{
	char ret = ' ';
	//创建数组：存储下棋过程
	char board[ROW][COLUMN] = { 0 };
	//创建完成，对数组进行初始化，为使初始化的棋盘做准备，美观。
	//将数组中元素初始化为' ';
	Initialize_board(board);
	//显示棋盘内容：
	Display_board(board);
	//开始游戏
	while (1)
	{
		//玩家移动：
		Player_move(board);
		Display_board(board);
		//玩家下完棋了，检测游戏是否结束
		//ret来接收检测结果：玩家赢检测结果为*，电脑为#，平局为P，继续为C
		ret = Is_win(board);
		if (ret != 'C')
		{
			break;
		}
		//电脑移动：
		Computer_move(board);
		Display_board(board);
		//检测游戏是否结束
		ret = Is_win(board);
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
	else
	{
		printf("平局！\n");
	}
}
void test()
{
	//随机起点的设置：
	srand((unsigned)time(NULL));
	//需要用户输入一个量：决定游戏的进行。
	int intput = 0;
	//do...while循环:实现游戏至少开始打印页面，用户再决定：
	do
	{
		//游戏界面meau()函数来实现：
		meau();
		//用户输入数字决定游戏是否进行：
		printf("请输入:>");
		scanf("%d", &intput);
		//根据游戏页面选项对输入的值判断：
		switch (intput)
		{
		case 1:
			printf("开始游戏！\n");
			//开始游戏：
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入值错误，请重新输入！\n");
			break;
		}
		//0的时候退出游戏，也可退出循环，故可以填intput。
	} while (intput);
}
int main()
{
	//游戏的基本框架test()函数：
	test();
	return 0;
}