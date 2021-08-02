#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

struct Stu
{
	char name[20];
	int age;
};

int main()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}

//int main()
//{
//
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址；
//
//	int(*pfArr[4])(int, int);//pfArr是一个函数指针数组，数组中存放着函数指针
//
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr是一个指针，指针指向一个数组，该数组有四个元素，指向的数组每个元素类型为函数指针
//	//ppfArr是一个指针，指向一个函数指针数组，也就是ppfArr是一个指向函数指针数组的指针
//	return 0;
//}

//函数指针数组的用途：
//转移表
//计算器

//void menu()
//{
//	printf("*******************************\n");
//	printf("*****   1.Add     2.Sub   *****\n");
//	printf("*****   3.Mul     4.Div   *****\n");
//	printf("*****   5.Xor     0.exit  *****\n");
//	printf("*******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x*y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x^y;
//}
//
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
////int main()
////{
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	int(*pfArr[6])(int, int) = { 0, Add, Sub, Mul, Div,Xor };
////	do
////	{
////		menu();
////		printf("请选择：");
////		scanf("%d", &input);
////		if (input >= 1 && input <= 5)
////		{
////			printf("请重新输入两个操作数：");
////			scanf("%d%d", &x, &y);
////			printf("结果为：%d\n", pfArr[input](x, y));
////		}
////		else if (input == 0)
////		{
////			printf("退出游戏\n");
////		}
////		else
////		{
////			printf("输入错误，请重新输入!\n");
////		}
////	}while (input);
////	return 0;
////}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*, const char*) = &my_strcpy;
////写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);
//int main()
//{
//	
//	return 0;
//}