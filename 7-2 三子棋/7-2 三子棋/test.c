//������������Ϸ
#include"game.h"
void meau()
{
	printf("********************************\n");
	printf("*****  1.play      0.exit  *****\n");
	printf("********************************\n");
}
//��Ϸ��ʵ�֣�
void game()
{
	char ret = ' ';
	//����һ�����飬���ڴ���߳���������Ϣ��
	char board[ROW][COLUMN] = { 0 };
	//��ʼ�����̣�
	Initialize_board(board,ROW,COLUMN);
	//��ʾ���̣�
	Display_board(board,ROW,COLUMN);
	//���壺
	while (1)
	{
		Player_move(board, ROW, COLUMN);
		Display_board(board, ROW, COLUMN);
		//�ж�����Ƿ��ʤ��
		ret = Is_win(board,ROW,COLUMN);//���Ӯ����*����Ӯ#ƽ��O����C  
		if (ret != 'C')
		{
			break;
		}
		Computer_move(board, ROW, COLUMN);
		Display_board(board, ROW, COLUMN);
		ret = Is_win(board, ROW, COLUMN);//�жϵ����Ƿ��ʤ��
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��һ�ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ��\n");
	}
	else if (ret == 'B')
	{
		printf("ƽ�֣�\n");
	}
}
void test()
{
	int intput = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meau();
		printf("��ѡ��:>");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			printf("��ʼ��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while(intput);
}
int main()
{
	test();
	return 0;
}