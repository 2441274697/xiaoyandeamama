#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
//��������Ϸ
//���Ի�����һ���������������
#include<stdio.h>
#include<time.h>
void meau()
{
	printf("*****************************\n");
	printf("*****  1.play   0.exit  *****\n");
	printf("*****************************\n");
}
//RAND_MAX-(0-32767֮��)
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	//printf("������\n");
	while (1)
	{
		printf("�������:->");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���! ���ǣ�%d\n", ret);
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
		printf("��ѡ��:->");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			game();//��Ϸ�ڲ�
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (intput);
	return 0;
}



//�˷��ھ����žų˷��ھ���
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

//��10�����������ֵ
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