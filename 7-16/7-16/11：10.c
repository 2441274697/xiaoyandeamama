

#include<stdio.h>
#include<stdlib.h>
int i;//ȫ�ֱ�������ʼ����Ĭ��ֵΪ0��
int main()
{
	i--;//i��ֵΪ-1;
	if (i > sizeof(i))
	//sizeof()---��������������͵Ĵ�С���������ֵĬ�ϴ�����.
	//�õ���unsigned int,���޷������ͣ���ʱint��unsigned int ���бȽϼ���
	//int��������ת����intת��Ϊ�����unsigned int
	//1000000000000000000000000000001
	//1111111111111111111111111111110
	//1111111111111111111111111111111
	//ת��Ϊ���޷������ͣ�
	//1111111111111111111111111111111
	//��2����ʮ���η���һ��������
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	system("pause");//system����һ���⺯����system�⺯��������ִ��ϵͳ���pause��ͣ����˼��
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
////��һ�������������ð������
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
////��������
////��������a������b�����ݣ�����һ����
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int b[10] = { 0 };
//	int tmp = 0;
//	int sz = sizeof(a) / sizeof(a[0]);//������һ����,������ͬ��Ԫ�ظ�����ͬ
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
////��һ������������������ӡ��
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
//ָ�����飺�������ָ������顣
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
//����ָ�룺
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//���洢��a��ַ��һ��ָ��pa�ĵ�ַ�洢������ָ��ppa��
//	int** ppa = &pa;
//	//��ppa������ָ�룩ȡ����pa(һ��ָ��)
//	printf("%p\n", &a);
//	printf("%p\n", *ppa);
//	//�ö���ָ���ӡ��һ��ָ��ָ��ı�����
//	printf("%d\n", **ppa);
//	////����ָ�룺
//	//int*** pppa = &ppa;
//	////�ļ�ָ�룺
//	//int**** ppppa = &pppa;
//	return 0;
//}
//��������������ַ��ŵ�һ��ָ���У�
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
//	//	//��ָ�����������飺
//	//	printf("%p ====== %p\n", &arr[i], p + i);
//	//}
//	return 0;
//}
//��������������Ԫ�صĵ�ַ��
//���������⣺
//1.&(������),ȡ��ַ��������������ʱ����������������Ԫ�صĵ�ַ�������������飬ȡ����������������ĵ�ַ��
//2.sizeof(������)��sizeof(������)����ʱ��������Ҳ����������Ԫ�صĵ�ַ��������������Ĵ�С��sizeof�����������������Ĵ�С��
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//�Ƚ������� �� ������Ԫ�ص�ַ �ĵ�ַ��С������ͬ����˵����������������Ԫ�صĵ�ַ��
//	/*printf("%p\n", arr);
//	printf("%p\n", &arr[0]);*/
//	//�Ƚ�&������������������������
//	/*printf("%p\n", arr);
//	printf("%p\n", &arr);*/
//	//�����ͬ����������&������������ͬ���������ģ�
//	/*printf("%p\n", arr+1);
//	printf("%p\n", &arr + 1);*/
//	//�����ͬ��������+1��ַ��Ϊ����ڶ���Ԫ�صĵ�ַ��
//	//��&����������+1��ַ��Ϊ�������һ��Ԫ�غ���һ���ڴ�ռ�ĵ�ַ��
//	//��Ծ����������ĵ�ַ������&����������ȡ����������������ĵ�ַ
//	//�Ƚ�arr��arr[0]�Ĵ�С
//	/*printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));*/
//	//arr[0]�Ĵ�СΪ4���ֽڣ�int�ͣ���arr�Ĵ�СΪ40=4*10���ֽڣ���arr�������������ʱ���������������������ռ�ڴ��С��
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