//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////下标引用操作符：[]
////#include<stdio.h>
////int main()
////{
////	char arr[] = "abcdef";
////	printf("%c\n", arr[3]);
////	int i = 0;
////	for (i = 0; i <= 6; i++)
////	{
////		printf("%c\n", arr[i]);
////	}
////	return 0;
////}
////C语言中字符'\0'被打印出来是什么：
//int main()
//{
//	printf("%c", '\0');
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//	随机值
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}
//函数递归的经典案例：汉诺塔问题
//#include<stdio.h>
//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf("%c-->%c\n", A, C);
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf("%c-->%c\n", A, C);
//		hanoi(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}
//求第n个斐波那契数（不考虑溢出）
//使用递归的方法：
//虽然递归的方法可以求出结果，但是求解的过程过于繁琐，计算机工作效率低。
//所以不建议使用递归的方法。
//Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int num = 0;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//Fib(int n)
//{
//	if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("第%d个斐波那契数为：%d\n",n, ret);
//	return 0;
//}
//求n的阶乘：
//第三种：使用递归来实现
//#include<stdio.h>
////n的阶乘等于n*（n-1的阶乘）
//int Fac(int n)
//{
//	if (n != 1)
//	{
//		return n*Fac(n - 1);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int fac = 0;
//	scanf("%d", &n);
//	fac = Fac(n);
//	printf("n的阶乘为：%d\n", fac);
//	return 0;
//}
//第二种：使用函数来实现
//#include<stdio.h>
//int Fac(int n)
//{
//	int i = 0;
//	int jc = 1;
//	for (i = 1; i <= n; i++)
//	{
//		jc *= i;
//	}
//	return jc;
//}
//int main()
//{
//	int n = 0;
//	int fac = 0;
//	scanf("%d", &n);
//	fac=Fac(n);
//	printf("%d\n", fac);
//	return 0;
//}
//第一种：使用循环来实现
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int Fac = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		Fac *= i;
//	}
//	printf("n的阶乘为：%d\n", Fac);
//	return 0;
//}
