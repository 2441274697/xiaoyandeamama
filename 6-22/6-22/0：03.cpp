#define _CRT_SECURE_NO_WARNINGS
//��Ȥ����ʽ���ʵ����ӡ�printf�����������޿������
//#include<stdio.h>
//int main()
//{
//	//printf()�����ķ���ֵ��printf��ӡ���ַ�������
//
//	printf("%d\n",printf("%d\n", printf("%d\n", printf("%s\n","lalala"))));
//	//lalala
//	//7
//	//2
//	//2
//	//
//	//
//	return 0;
//}
//�Զ���һ����������ÿ�����룬���ص�ֵ����һ��
//ʵ�ֺ�������ʽ�����������ޣ�
//ʵ�ֺ������õ��������ޣ�
//int add1(int num)
//{
//	num += 1;
//	return num;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	num = add1(num);
//	printf("%d,,,%d,,,%d\n", num, add1(num), add1(add1(num)));
//	return 0;
//}
//��������ʽ���ʣ�
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	//int length = 0;
//	//length = strlen("abcd");
//	//printf("%d\n", length);
//	//return 0;
//	//��������ʽ����д����ֱ�ӰѺ����ķ���ֵ��Ϊ��һ������������ֵ��ע�⣬���Ժ����������ޣ���
//	//printf("%d\n", strlen("abcd"));
//
//}




//������Ƕ�׵��ã�
//#include<stdio.h>
//void new_line()
//{
//	printf("yql is handsome\n");
//}
//void num_line(int num)
//{
//	int i = 1;
//	for (; i <= num; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	int num = 4;
//	num_line(num);
//	return 0;
//}
//�Զ���һ��Add1������ʹÿ�������ֵnum+1:
//#include<stdio.h>
////�����ڲ�ֱ�Ӹı�num��ֵ������Ҫ����ֵ
//void Add1(int* x)//ʵ��Ϊnum�ĵ�ַ���β�Ӧ��ָ����������գ�ָ������Ǵ�ŵ�ַ�ı�����
//{
//	*x += 1;//*�����ò�������ͨ�����βΣ�ָ�����x�д�ŵ�sum�ĵ�ַ�����ҵ�sum���ı�sum�д�ŵ�ֵ��
//}
//int main()
//{
//	int num = 0;
//	printf("%d\n", num);
//	;
//	//ʵ������1�����أ��ı�ʵ�Σ��������õķ�ʽӦ��Ϊ���ô�ַ���ã�
//	Add1(&num);
//	Add1(&num); 
//	Add1(&num);
//	printf("%d\n", num);
//	return 0;
//}
//#include<stdio.h>
//int sasa(int x)
//{
//	while (1)
//	{
//		return x;
//	}
//}
//int main()
//{
//	int a = 0;
//	int sa = sasa(a);
//	printf("%d\n", sa);
//	return 0;
//}
//#include<stdio.h>
////����Ԫ�ظ���==����Ĵ�С/һ��Ԫ�صĴ�С��
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	printf("%d\n%d\n%d\n", sizeof(arr), sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//�Զ���һ��binary_search���������۰���ң����ֲ��ң���
//#include<stdio.h>
//int binary_search(int arr1[],int k1,int sz1)
//{
//	int left = 0;
//	int right =sz1-1;
//	int mid = 0;
//	while (1)
//	{
//		mid = (left + right) / 2;
//		if (arr1[mid] > k1)
//		{
//			right = mid - 1;
//		}
//		else if (arr1[mid] < k1)
//		{
//			left = mid + 1;
//		}
//		else if (arr1[mid]=k1)
//		{
//			return mid;
//		}
//		if (left>right)
//		{
//			return -1;
//		}
//
//	}
//	
//}
//int main()
//{
//	int ret = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 7, 7, 8, 9, 10 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 11;
//	ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�ڸ��������Ҳ�����ֵ\n");
//	}
//	else if (ret!=-1)
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