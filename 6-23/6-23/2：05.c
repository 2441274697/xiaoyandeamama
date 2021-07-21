//#define _CRT_SECURE_NO_WARNINGS
//
////求n的阶乘：
////第一种方法：循环
//#include<stdio.h>
////int main()
////{
////	int n = 1;
////	int jc = 1;
////	scanf("%d", &n);
////	for (int i = 1; i <= n; i++)
////	{
////		 jc *= i;
////	}
////	printf("%d", jc);
////	return 0;
////}
////第二种方法：函数
//
//
//int main()
//{
//	int n = 0;
//	//int x = 0;
//	//int y = 0;
//	//scanf("x=%f,y=%f", &x, &y);
//	//printf("\\");
//	int a = 1, b = 1;
//	if (a < 1)
//		if (b < 2)  b = 0;
//	
//		else      b = 2;
//	
//	printf("%d\n", b);
//
//	return 0;
//}









//编写函数，求字符串的长度，不允许创建临时变量；
//编写一个函数，创建临时变量，求字符串的长度
//第二种方法：自定义一个函数，使用临时变量，求字符串长度：
//int my_strlen(char* str)
//{
//	int num = 0;
//	while (*str!='\0')
//	{
//		num++;
//		str++;
//	}
//	return num;
//}
//第三种方法：编写函数，不允许创建临时变量，求字符串的长度：
//int my_strlen(char* str)
//{
//	if (*str != 0)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "yqlzmy";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//第一种：strlen()函数求字符串长度
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "yqlzmy";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}









//接收一个无符号整型值，按顺序打印出它的每一位。
//void print(int n)
//{
//	if (n >= 10)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//print(1234)
//	//print(123) printf(4)
//	//print(12) printf(3)printf(4)
//	//printf(1)printf(2)printf(3)printf(4)
//	print(num);
//	return 0;
//}
//史上最简单的递归：
//int i = 0;
//int main()
//{
//	printf("yql is handsome,%d\n",++i);
//	main();
//}
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
