#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//��ά�����Ԫ����ÿһ��
//	//��ά�������Ԫ���ǵ�һ�е�����
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
//void print2(int (*p)[5], int x, int y)//�β�Ϊһ������ָ�룬�����arr��Ԫ�صĵ�ַ��arr��Ԫ��Ϊ��һ�е�Ԫ��
////����pָ��ĵ�ַΪarr��һ�еĵ�ַ��pָ�������Ԫ�ظ���Ϊ5
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//ͬ���ã�
//			printf("%d ", p[i][j]);
//			//printf("%d ", (*(p + i))[j]);
//			///*(*(p+i)):�൱�ڵ�i+1�е�������
//			//(*(p + i))[j]:��i+1�е�j+1��Ԫ��ֵ*/
//			//*(*(p + i) + j) == (*(p + i))[j];
//			/*printf("%d ",*(*(p+i)+j));*///*p�൱��arr��һ�е����������൱��arr��һ��Ԫ�صĵ�ַ
//			//����ָ��pָ����ǵ�һ��Ԫ�أ�p��1����һ��Ԫ�������ڶ���
//			//*(p+i)�ǵ�i+1�е�������������i+1�е���Ԫ�ص�ַ
//			//*(p+i)+j �ǵ�i+1����Ԫ�ص�ַ��j��int���ȣ�����i+1�е�j+1��Ԫ�صĵ�ַ
//			//*(*(p+i)+j): ��i+1�е�j+1��Ԫ�ص�����
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	/*print1(arr, 3, 5);*/
//	print2(arr, 3, 5);//ʵ��Ϊarr��Ԫ�صĵ�ַ��arr��Ԫ���ǵ�һ��Ԫ��
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
//	//	//*pa�൱��������arr
//	//}
//	return 0;
//}