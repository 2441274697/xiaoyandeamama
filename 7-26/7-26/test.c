#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//二维数组的元素是每一行
//	//二维数组的首元素是第一行的内容
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5], int x, int y)//形参为一个数组指针，存放着arr首元素的地址，arr首元素为第一行的元素
////所以p指向的地址为arr第一行的地址，p指向的数组元素个数为5
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//同理得：
//			printf("%d ", p[i][j]);
//			//printf("%d ", (*(p + i))[j]);
//			///*(*(p+i)):相当于第i+1行的数组名
//			//(*(p + i))[j]:第i+1行第j+1个元素值*/
//			//*(*(p + i) + j) == (*(p + i))[j];
//			/*printf("%d ",*(*(p+i)+j));*///*p相当于arr第一行的数组名，相当于arr第一行元素的地址
//			//数组指针p指向的是第一行元素，p加1跳过一行元素来到第二行
//			//*(p+i)是第i+1行的数组名，及第i+1行的首元素地址
//			//*(p+i)+j 是第i+1行首元素地址加j个int长度，即第i+1行第j+1个元素的地址
//			//*(*(p+i)+j): 第i+1行第j+1个元素的内容
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	/*print1(arr, 3, 5);*/
//	print2(arr, 3, 5);//实参为arr首元素的地址，arr首元素是第一行元素
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	/*int(*pa)[10] = &arr;*/
//	int* p = arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//	}*/
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//	//*pa相当于数组名arr
//	//}
//	return 0;
//}