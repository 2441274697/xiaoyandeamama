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
	//�������飺�洢�������
	char board[ROW][COLUMN] = { 0 };
	//������ɣ���������г�ʼ����Ϊʹ��ʼ����������׼�������ۡ�
	//��������Ԫ�س�ʼ��Ϊ' ';
	Initialize_board(board);
	//��ʾ�������ݣ�
	Display_board(board);
	//��ʼ��Ϸ
	while (1)
	{
		//����ƶ���
		Player_move(board);
		Display_board(board);
		//����������ˣ������Ϸ�Ƿ����
		//ret�����ռ���������Ӯ�����Ϊ*������Ϊ#��ƽ��ΪP������ΪC
		ret = Is_win(board);
		if (ret != 'C')
		{
			break;
		}
		//�����ƶ���
		Computer_move(board);
		Display_board(board);
		//�����Ϸ�Ƿ����
		ret = Is_win(board);
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
	else
	{
		printf("ƽ�֣�\n");
	}
}
void test()
{
	//����������ã�
	srand((unsigned)time(NULL));
	//��Ҫ�û�����һ������������Ϸ�Ľ��С�
	int intput = 0;
	//do...whileѭ��:ʵ����Ϸ���ٿ�ʼ��ӡҳ�棬�û��پ�����
	do
	{
		//��Ϸ����meau()������ʵ�֣�
		meau();
		//�û��������־�����Ϸ�Ƿ���У�
		printf("������:>");
		scanf("%d", &intput);
		//������Ϸҳ��ѡ��������ֵ�жϣ�
		switch (intput)
		{
		case 1:
			printf("��ʼ��Ϸ��\n");
			//��ʼ��Ϸ��
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("����ֵ�������������룡\n");
			break;
		}
		//0��ʱ���˳���Ϸ��Ҳ���˳�ѭ�����ʿ�����intput��
	} while (intput);
}
int main()
{
	//��Ϸ�Ļ������test()������
	test();
	return 0;
}