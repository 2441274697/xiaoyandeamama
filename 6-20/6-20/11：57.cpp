#define _CRT_SECURE_NO_WARNINGS
//写一个函数来交换两个整型变量的内容
//#include<stdio.h>
//指针
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	int* pa=&a;//定义指针变量pa，即这个变量中存放着a的内存地址。
//	printf("pa=%d\n", pa);
//	printf("&a=%d\n", &a);
//	*pa = 20;//解引用操作符，通过对指针变量pa操作，通过pa中存放的a的地址找到a，并将a存放的内容更改为20；
//	printf("%d\n", a);
//	return 0;
//}
//void swap1(int x, int y)
//{
//	int tem = 0;
//	tem = y;
//	y = x;
//	x = tem;
//}
//
//void swap2(int* x,int* y)
//{
//	int tem = 0;
//	tem = *y;
//	*y = *x;
//	*x = tem;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	//1：在主函数内部
//	//int tem = 0;
//	//tem = a;
//	//a = b;
//	//b = tem;
//	//swap1:无知的自定义函数写法。
//	//swap1(a,b);
//	//正确的swap2()自定义函数写法。
//	swap2(&a,&b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//int get_max(int x,int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int max = 0;
//	int a = 10;
//	int b = 20;
//	max = get_max(a, b);
//	printf("%d\n", max);
//	max = get_max(100, 250);
//	printf("%d\n", max);
//	return 0;
//}
//memset函数的使用：(memory set)
//#include<stdio.h>
//#include<memory.h>
//int main()
//{
//	char arr[12] = "hello world";
//	//设置的值如果大于指向内存的空间，会溢出，出现bug
//	printf("%s\n", arr);
//	memset(arr,'*',6);
//	printf("%s\n", arr);
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "yql";
//	char arr2[20] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%d", strlen(arr2));
//	return 0;
//}
//加法函数
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//
//int main()
//{
//	int sum = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}