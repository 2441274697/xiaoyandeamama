#include<stdio.h>
//������������ʲô��
//��������������Ԫ�صĵ�ַ��&arr[0]==arr;
//������������
//��һ�֣�sizeof�������������������������������飬sizeof����������������������Ĵ�С����λ���ֽڡ�
//int main()
//{
//	int arr[] = { 3, 8, 2, 1, 4, 3 };
//	printf("%d\n", sizeof(arr));//������Ϊ��24����λΪ:�ֽڡ�
//	return 0;
//}
//�ڶ��֣�&��������&��������ȡ��ַ��������ȡ��������������ĵ�ַ��������������Ԫ�صĵ�ַ��
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
//������������ʲô��
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

//�Ľ������ĳһ��ȫ���Ķ�û�н�����Ҳ����˵�Ѿ�������ң���ֱ�ӽ�������ð������
//void bubble_sort(int arr[],int sz,int* sum)
//{
//	//����ð�������������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{s
//		//����ÿһ�˵�Ԫ�رȽϴ�����
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
//	//ð����������bubble_sort()
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
//ʵ��һ��ð�������� bubble_sort ����һ��������������
//void bubble_sort(int arr[],int sz)
//{
//	//����ð�������������
//	int i = 0;//����ѭ������������
//	//sz��arrԪ�ظ�����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������Ԫ�رȽϴ���
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
//	//����bubble_sort������ð������������arr����Ԫ��������
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