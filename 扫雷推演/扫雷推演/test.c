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
	//printf("ɨ����Ϸ\n");//��һ����Ϸ�����ɣ���⡣
	//1.��������׵���Ϣ�洢��
	char mine[ROWS][COLUMNS];//1.�Ѿ����úõ�������Ϣ��
	char show[ROWS][COLUMNS];//2.�Ų����������Ϣ��
	//2.��ʼ�����̣�
	Initialize_board(mine,ROWS,COLUMNS,'0');//��ʼ��mine����
	Initialize_board(show,ROWS,COLUMNS,'*');//��ʼ��show����
	//3.��ӡ���̣�
	//Display_board(mine, ROW, COLUMN);//��ӡmine����
	Display_board(show, ROW, COLUMN);//��ӡshow����
	//4.�����ף�
	Set_mine(mine,ROW,COLUMN);
	Display_board(mine, ROW, COLUMN);//������Ƿ񱻲��ú�
	//5.ɨ�ף�
	Find_mine(mine, show, ROW, COLUMN);
}
void test()
{
	srand((unsigned)time(NULL));//��������������
	int intput = 0;
	do
	{
		menu();
		printf("������ѡ��:>");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (intput);
}
int main()
{
	test();
	return 0;
}