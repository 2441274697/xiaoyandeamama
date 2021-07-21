

#include<stdio.h>
#include<stdlib.h>
int i;//全局变量不初始化，默认值为0；
int main()
{
	i--;//i的值为-1;
	if (i > sizeof(i))
	//sizeof()---计算变量或者类型的大小，计算出的值默认大于零.
	//用的是unsigned int,即无符号整型，这时int和unsigned int 进行比较计算
	//int发生算术转换：int转换为更大的unsigned int
	//1000000000000000000000000000001
	//1111111111111111111111111111110
	//1111111111111111111111111111111
	//转换为：无符号整型：
	//1111111111111111111111111111111
	//即2的三十三次方减一：大于四
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	system("pause");//system—是一个库函数，system库函数，用来执行系统命令，pause暂停的意思。
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////对一个整型数组进行冒泡排序：
//#include<stdio.h>
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void MPPX(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 14, 2, 3, 45, 6, 7, 89, 43, 233, 34 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	MPPX(arr, sz);
//	printf("\n\n\n");
//	Print(arr, sz);
//	return 0;
//}
////交换数组
////交换数组a和数组b的内容，数组一样大
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int b[10] = { 0 };
//	int tmp = 0;
//	int sz = sizeof(a) / sizeof(a[0]);//两数组一样大,类型相同，元素个数相同
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("a%d = %-2d   b%d = %-2d\n", i, a[i], i, b[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("a%d = %-2d   b%d = %-2d\n", i, a[i], i, b[i]);
//	}
//	return 0;
//}
//void Initialize_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
////对一个整型数组进行逆序打印：
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*Initialize_arr(arr, sz);*/
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//指针数组：用来存放指针的数组。
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 8;
//	int d = 9;
//	int* arr[] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ",*arr[i]);
//	}
//	return 0;
//}
//二级指针：
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//将存储着a地址的一级指针pa的地址存储到二级指针ppa中
//	int** ppa = &pa;
//	//用ppa（二级指针）取出来pa(一级指针)
//	printf("%p\n", &a);
//	printf("%p\n", *ppa);
//	//用二级指针打印出一级指针指向的变量：
//	printf("%d\n", **ppa);
//	////三级指针：
//	//int*** pppa = &ppa;
//	////四级指针：
//	//int**** ppppa = &pppa;
//	return 0;
//}
//把数组名当作地址存放到一个指针中：
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		/*printf("%d ", arr[i]);*/
//		printf("%d ", *(p + i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	//for (i = 0; i < 10; i++)
//	//{
//	//	//用指针来访问数组：
//	//	printf("%p ====== %p\n", &arr[i], p + i);
//	//}
//	return 0;
//}
//数组名：数组首元素的地址：
//有两种例外：
//1.&(数组名),取地址（数组名）：这时数组名不是数组首元素的地址，而是整个数组，取出来的是整个数组的地址：
//2.sizeof(数组名)：sizeof(数组名)，这时的数组名也不是数组首元素的地址，而是整个数组的大小，sizeof计算出的是整个数组的大小。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//比较数组名 和 数组首元素地址 的地址大小，若相同，则说明数组名是数组首元素的地址。
//	/*printf("%p\n", arr);
//	printf("%p\n", &arr[0]);*/
//	//比较&（数组名）与数组名的区别：
//	/*printf("%p\n", arr);
//	printf("%p\n", &arr);*/
//	//结果相同，数组名和&（数组名）相同吗？区别在哪？
//	/*printf("%p\n", arr+1);
//	printf("%p\n", &arr + 1);*/
//	//结果不同，数组名+1地址变为数组第二个元素的地址。
//	//而&（数组名）+1地址变为数组最后一个元素后面一个内存空间的地址。
//	//跳跃了整个数组的地址，所以&（数组名）取出来的是整个数组的地址
//	//比较arr和arr[0]的大小
//	/*printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));*/
//	//arr[0]的大小为4个字节，int型，而arr的大小为40=4*10个字节，故arr代表整个数组此时，求出来的是整个数组所占内存大小。
//	return 0;
//}
//#include<stdio.h>
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	/*for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}*/
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "yqlzhenshuai";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}