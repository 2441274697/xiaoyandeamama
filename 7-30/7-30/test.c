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
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ��
//
//	int(*pfArr[4])(int, int);//pfArr��һ������ָ�����飬�����д���ź���ָ��
//
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr��һ��ָ�룬ָ��ָ��һ�����飬���������ĸ�Ԫ�أ�ָ�������ÿ��Ԫ������Ϊ����ָ��
//	//ppfArr��һ��ָ�룬ָ��һ������ָ�����飬Ҳ����ppfArr��һ��ָ����ָ�������ָ��
//	return 0;
//}

//����ָ���������;��
//ת�Ʊ�
//������

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
//	printf("������������������");
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
////		printf("��ѡ��");
////		scanf("%d", &input);
////		if (input >= 1 && input <= 5)
////		{
////			printf("����������������������");
////			scanf("%d%d", &x, &y);
////			printf("���Ϊ��%d\n", pfArr[input](x, y));
////		}
////		else if (input == 0)
////		{
////			printf("�˳���Ϸ\n");
////		}
////		else
////		{
////			printf("�����������������!\n");
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
//		printf("��ѡ��->");
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
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




//char* my_strcpy(char* dest, const char* src);
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*) = &my_strcpy;
////дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);
//int main()
//{
//	
//	return 0;
//}