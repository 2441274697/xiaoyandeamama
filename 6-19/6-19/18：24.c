#define _CRT_SECURE_NO_WARNINGS






//关机程序；
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	char intput[20] = { 0 };
//	system("shutdown -s -t 120");
//	while (1)
//	{
//		printf("请注意：你的电脑将在两分钟内关机。\n如果不想关机，请输入：我是猪。\n请输入：->");
//		scanf("%s", intput);
//		if (strcmp(intput, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//
//		}
//		else
//		{
//			printf("输入错误!\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int disaster=1;
//	for (;;)
//	{
//		for (;;)
//		{
//
//			for (;;)
//			{
//				if (disaster)
//				{
//					goto error;
//				}
//				printf("出不来啦\n");
//			}
//		}
//	}
//error:
//	printf("跳出来啦\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	
//	printf("hello yql\n");
//	goto again;
//	printf("六点半了\n");
//	again:
//	printf("去上课\n");
//	return 0;
//}