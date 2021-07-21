#define _CRT_SECURE_NO_WARNINGS


////自定义一个binary_search函数用于折半查找（二分查找）：
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
//		printf("在该数组中找不到该值\n");
//	}
//	else
//	{
//		printf("找到了，下标为：%d\n", ret);
//	}
//	return 0;
//}

//自定义一个is_leap_year函数打印1000-2000年间的闰年：
//#include<stdio.h>
//int is_leap_year(int i)//函数的返回值定义为零和一
//{
//	if ((i % 4 == 0 && i % 100 != 0)||(i % 400 == 0))
//		return 1;
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)//for循环产生一千到两千年的数字
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//写一个函数判断一个100-200之间的数是否为素数：
//#include<stdio.h>
//#include<math.h>
////自定义函数is_prime,返回值为0或1，故函数的返回值类型应该为int
//int is_prime(int x)//函数实参i为整型。
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
//	//for循环：产生一百到两百的数字。
//	for (i = 101; i <= 200; i+=2)
//	{
//		//自定义一个is_prime函数，判断i是否为素数。若为素数，函数范围值为1；若不为素数，函数返回值为0。
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//写一个函数能输入两个整数并互换值
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
//		printf("%d与%d相等\n",x,y);
//		return x;
//	}
//}
////实际参数的适用范围：一个确定的值——以便传递给形式参数一个确定的值。
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d,b = %d\n", a, b);
//	//实参可以为地址常量：
//	swap(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	int ret = get_max(100, 300);
//	printf("%s = %d\n","get_max",ret);
//	//实参可以为常量：
//	get_max(100, 100);
//	//实际参数可以为变量：
//	printf("%s = %d\n", "get_max(a,b)", get_max(a, b));
//	//实际参数可以为表达式，实际参数可以为函数，可以为函数表达式：
//	get_max(100+900, get_max(7, 10*10*10+1)-1);
//	return 0;
//}