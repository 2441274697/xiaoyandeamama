#define _CRT_SECURE_NO_WARNINGS
//дһ�������������������ͱ���������
//#include<stdio.h>
//ָ��
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	int* pa=&a;//����ָ�����pa������������д����a���ڴ��ַ��
//	printf("pa=%d\n", pa);
//	printf("&a=%d\n", &a);
//	*pa = 20;//�����ò�������ͨ����ָ�����pa������ͨ��pa�д�ŵ�a�ĵ�ַ�ҵ�a������a��ŵ����ݸ���Ϊ20��
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
//	//1�����������ڲ�
//	//int tem = 0;
//	//tem = a;
//	//a = b;
//	//b = tem;
//	//swap1:��֪���Զ��庯��д����
//	//swap1(a,b);
//	//��ȷ��swap2()�Զ��庯��д����
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
//memset������ʹ�ã�(memory set)
//#include<stdio.h>
//#include<memory.h>
//int main()
//{
//	char arr[12] = "hello world";
//	//���õ�ֵ�������ָ���ڴ�Ŀռ䣬�����������bug
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
//�ӷ�����
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