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
		printf("请输入选择：");
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