void menu()
{
	printf("********************************\n");
	printf("*****        1.play        *****\n");
	printf("*****        0.exit        *****\n");
	printf("********************************\n");
}
void game()
{
	
}
void test()
{
	int intput = 0;
	do
	{
		menu();
		printf("������ѡ��");
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