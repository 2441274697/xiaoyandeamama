#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
//猜数字游戏
//电脑会生成一个随机数，猜数字
#include<stdio.h>
#include<time.h>
void meau()
{
	printf("*****************************\n");
	printf("*****  1.play   0.exit  *****\n");
	printf("*****************************\n");
}
//RAND_MAX-(0-32767之间)
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	//printf("猜数字\n");
	while (1)
	{
		printf("请猜数字:->");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了! 答案是：%d\n", ret);
			break;
		}
	}
}
int main()
{
	int intput = 0;
	srand((unsigned int)time(NULL));
	do
	{
		
		meau();
		printf("请选择:->");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			game();//游戏内部
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (intput);
	return 0;
}



//乘法口诀表，九九乘法口诀表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求10个整数的最大值
//#include<stdio.h>
//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz - 1; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}