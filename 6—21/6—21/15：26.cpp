#define _CRT_SECURE_NO_WARNINGS


////�Զ���һ��binary_search���������۰���ң����ֲ��ң���
//#include<stdio.h>
//int binary_search(int arr[],int k)
//{
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0]))-1;
//	int mid = 0;
//	while (1)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] = k)
//		{
//			return mid;
//		}
//		else if (left >= right)
//		{
//			return -1;
//		}
//	}
//}
//int main()
//{
//	int ret = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("�ڸ��������Ҳ�����ֵ\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	}
//	return 0;
//}

//�Զ���һ��is_leap_year������ӡ1000-2000�������꣺
//#include<stdio.h>
//int is_leap_year(int i)//�����ķ���ֵ����Ϊ���һ
//{
//	if ((i % 4 == 0 && i % 100 != 0)||(i % 400 == 0))
//		return 1;
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)//forѭ������һǧ����ǧ�������
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//дһ�������ж�һ��100-200֮������Ƿ�Ϊ������
//#include<stdio.h>
//#include<math.h>
////�Զ��庯��is_prime,����ֵΪ0��1���ʺ����ķ���ֵ����Ӧ��Ϊint
//int is_prime(int x)//����ʵ��iΪ���͡�
//{
//	int j = 0;
//	
//	for (j = 2; j <= x/2; j++)
//	{
//		if (x%j == 0)
//			return 0;
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	//forѭ��������һ�ٵ����ٵ����֡�
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�Զ���һ��is_prime�������ж�i�Ƿ�Ϊ��������Ϊ������������ΧֵΪ1������Ϊ��������������ֵΪ0��
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//дһ��������������������������ֵ
//#include<stdio.h>
//void swapp(int* x,int*y)
//{
//	int tem;
//	tem = *x;
//	*x = *y;
//	*y = tem;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	swapp(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}
//#include<stdio.h>
//void swap(int* x, int* y)
//{
//	int tem = 0;
//	tem = *x;
//	*x = *y;
//	*y = tem;
//}
//int get_max(int x,int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else if (x < y)
//	{
//		return y;
//	}
//	else
//	{
//		printf("%d��%d���\n",x,y);
//		return x;
//	}
//}
////ʵ�ʲ��������÷�Χ��һ��ȷ����ֵ�����Ա㴫�ݸ���ʽ����һ��ȷ����ֵ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d,b = %d\n", a, b);
//	//ʵ�ο���Ϊ��ַ������
//	swap(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	int ret = get_max(100, 300);
//	printf("%s = %d\n","get_max",ret);
//	//ʵ�ο���Ϊ������
//	get_max(100, 100);
//	//ʵ�ʲ�������Ϊ������
//	printf("%s = %d\n", "get_max(a,b)", get_max(a, b));
//	//ʵ�ʲ�������Ϊ���ʽ��ʵ�ʲ�������Ϊ����������Ϊ�������ʽ��
//	get_max(100+900, get_max(7, 10*10*10+1)-1);
//	return 0;
//}