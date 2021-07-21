#define _CRT_SECURE_NO_WARNINGS
//给定两个数，求这两个数的最大公约数
#include<stdio.h>
int main()
{

	return 0;
}
////打印1-100间所有3的倍数的数字
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1;i<=100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////将三个数从大到小输出：
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d,%d,%d", a, b, c);//将最大值放到a中输出，其次b输出，c最小输出。
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i;
//	char password[20] = {0};
//	for (i=0;i<3;i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，登录失败\n");
//	}
//	return 0;
//}
//

//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "yan qing long is a handsome man";
//	char arr2[] = "                               ";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//

//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 9, 10,11 };
//	int sz = sizeof(arr) / (sizeof arr[0]);//计算数组arr中元素个数。
//	int k = 8;//在数组arr中查找与k值相同的元素。
//	int left = 0;//起始左下标的值
//	int right = sz - 1;//起始右下标的值，等于arr元素个数减一。
//	int mid = 0;//定义中间下标；
//	while (left<=right)
//	{
//		mid = (left + right) / 2;//中间下标等于左下标与右下标的平均值。
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}