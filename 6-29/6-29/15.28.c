//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////�±����ò�������[]
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
////C�������ַ�'\0'����ӡ������ʲô��
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
//	printf("%d\n", strlen(arr2));//	���ֵ
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}
//�����ݹ�ľ��䰸������ŵ������
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
//���n��쳲��������������������
//ʹ�õݹ�ķ�����
//��Ȼ�ݹ�ķ����������������������Ĺ��̹��ڷ��������������Ч�ʵ͡�
//���Բ�����ʹ�õݹ�ķ�����
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
//	printf("��%d��쳲�������Ϊ��%d\n",n, ret);
//	return 0;
//}
//��n�Ľ׳ˣ�
//�����֣�ʹ�õݹ���ʵ��
//#include<stdio.h>
////n�Ľ׳˵���n*��n-1�Ľ׳ˣ�
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
//	printf("n�Ľ׳�Ϊ��%d\n", fac);
//	return 0;
//}
//�ڶ��֣�ʹ�ú�����ʵ��
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
//��һ�֣�ʹ��ѭ����ʵ��
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
//	printf("n�Ľ׳�Ϊ��%d\n", Fac);
//	return 0;
//}
