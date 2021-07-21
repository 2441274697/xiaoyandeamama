#include<stdio.h>
//数组名到底是什么：
//数组名是数组首元素的地址。&arr[0]==arr;
//有两种特例：
//第一种：sizeof（数组名），数组名代表着整个数组，sizeof（数组名）等于整个数组的大小，单位是字节。
//int main()
//{
//	int arr[] = { 3, 8, 2, 1, 4, 3 };
//	printf("%d\n", sizeof(arr));//输出结果为：24。单位为:字节。
//	return 0;
//}
//第二种：&数组名：&数组名，取地址数组名，取出的是整个数组的地址，而不是数组首元素的地址。
//int main()
//{
//	int arr[] = { 3, 7, 4, 8, 9, 3, 2, 4, 7 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}
//数组名到底是什么：
//int main()
//{
//	int arr[] = { 2, 1, 4, 5, 6, 7, 8 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[1]-&arr[0]);
//	printf("%p\n", &arr[1]);
//	printf("%d\n", *arr);
//	printf("%d\n", *arr+1);
//	return 0;
//}

//改进：如果某一次全部的都没有交换，也就是说已经排序好乱，则直接结束后面冒泡排序。
//void bubble_sort(int arr[],int sz,int* sum)
//{
//	//计算冒泡排序的趟数：
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{s
//		//计算每一趟的元素比较次数：
//		int j = 0;
//		int n = 0;
//		for (j = 0,n=0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int ret = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = ret;
//				n++;
//			}
//			*sum += 1;
//		}
//		if (n == 0)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {22,33,66,88,55,666,222,1024,360};
//	//冒泡排序函数：bubble_sort()
//	int sum = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, &sum);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n%d\n", sum);
//	return 0;
//}
//实现一个冒泡排序函数 bubble_sort ，将一个整型数组排序。
//void bubble_sort(int arr[],int sz)
//{
//	//计算冒泡排序的趟数：
//	int i = 0;//利用循环制造趟数。
//	//sz是arr元素个数。
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序：元素比较次数
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int ret = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = ret;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	//利用bubble_sort函数（冒泡排序函数）将arr数组元素排升序：
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	//int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	//int arr[][4] = { { 1, 2, 3, 4 }, {5,6,7,8} };
//	int arr[4][5] = { { 1, 2, 3, 4, 5 }, { 3, 4, 5, 6, 7 }, { 4, 5, 6, 7, 8 }, { 2, 3, 4, 5, 6 } };
//	int i = 0;
//	int j = 0;
//	int szc = sizeof(arr[0]) / sizeof(arr[0][0]);
//	int szl = sizeof(arr) / (szc*4);
//	printf("%d\n", szl);
//	printf("%d\n", szc);
//	for (i = 0; i < szl; i++)
//	{
//		for (j = 0; j < szc; j++)
//		{
//			printf("%p\n",&arr[i][j]);
//		}
//	}
//	return 0;
//}