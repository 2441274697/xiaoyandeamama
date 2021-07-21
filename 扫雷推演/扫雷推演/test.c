#include"game.h"
void menu()
{
	printf("**********************************\n");
	printf("*****         1.play         *****\n");
	printf("*****         0.exit         *****\n");
	printf("**********************************\n");
}
void game()
{
	//printf("扫雷游戏\n");//第一步游戏框架完成，检测。
	//1.用数组对雷的信息存储：
	char mine[ROWS][COLUMNS];//1.已经布置好的棋盘信息：
	char show[ROWS][COLUMNS];//2.排查出的棋盘信息：
	//2.初始化棋盘：
	Initialize_board(mine,ROWS,COLUMNS,'0');//初始化mine棋盘
	Initialize_board(show,ROWS,COLUMNS,'*');//初始化show棋盘
	//3.打印棋盘：
	//Display_board(mine, ROW, COLUMN);//打印mine数组
	Display_board(show, ROW, COLUMN);//打印show数组
	//4.布置雷：
	Set_mine(mine,ROW,COLUMN);
	Display_board(mine, ROW, COLUMN);//检查雷是否被布置好
	//5.扫雷：
	Find_mine(mine, show, ROW, COLUMN);
}
void test()
{
	srand((unsigned)time(NULL));//设置随机生成起点
	int intput = 0;
	do
	{
		menu();
		printf("请输入选择:>");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (intput);
}
int main()
{
	test();
	return 0;
}