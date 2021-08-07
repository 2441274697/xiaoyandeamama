#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//调整奇偶数顺序：
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左边开始找到一个偶数
		while (arr[left] % 2 == 1)
		{
			left++;
		}
		//从右边找到一个奇数
		while (arr[right] % 2 == 0)
		{
			right--;
		}
		//这两个数交换
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);//实现奇偶数顺序的调整
	print(arr, sz);//打印出来数组
	return 0;
}

////调整奇偶数顺序
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[right];
//			arr[right] = arr[left];
//			arr[left] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}

////喝汽水问题
//int main()
//{
//	//有多少钱
//	int money = 0;
//	printf("请输入有多少钱：");
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;
//	if (money == 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = 2 * money - 1;
//	}
//	//int total = money;//total是一共喝掉的可乐
//	////int empty = money;//empty是剩余的空瓶
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty % 2 + empty / 2;
//	//}
//	printf("一共有多少瓶：%d\n", total);
//	return 0;
//}

////喝汽水问题
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty /2;
//		empty = empty / 2 + empty %2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 }, { 9802, "wang", 19 }, { 9803, "zhao", 18 } };
//	fun(students + 1);
//	return 0;
//}

////      *
////     ***
////    *****
////   *******
////  *********
//// ***********
////*************
//// ***********
////  *********
////   *******
////    *****
////     ***
////      *
////打印菱形
//int main()
//{
//	//打印上半部分：
//	printf("请输入上半部分的行数：");
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 1 + 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}