#define _CRT_SECURE_NO_WARNINGS 1




//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	//����ָ��
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pfArr[4])(char*, const char*);
//	return 0;
//}
//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x*y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
////����ָ������
//int main()
//{
//	//ָ������
//	//int* arr[5];//���ָ�������
//	//����ָ������
//	//��Ҫһ�����飬���������Դ���ĸ������ĵ�ַ-����ָ�������
//	int(*p)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2,3));
//	}
//	return 0;
//}
////signal��һ����������
////signal�����������������������������ͷֱ�Ϊint��void(*p)(int)
////signal�����ķ�������Ϊһ������ָ�룬�ú���ָ��ָ��ĺ���������int��ָ��ĺ����ķ�������Ϊvoid
//void(*signal(int, void(*)(int)))(int);
////�򻯣�
//typedef void(*f_t)(int);
//f_t signal(int, f_t);
//int main()
//{
//
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}

//int main()
//{
//	void(*p) (char*) = Print; //����һ������ָ����Print�����ĵ�ַ
//	//pΪ����ָ��
//	//pָ��ĺ�������ֻ��һ�����Ҳ�������Ϊchar*
//	//pָ��ĺ����ķ�������Ϊvoid
//	void(*p1) (char*) = &Print;
//	(*p)("hello yql");
//	//(*p):˵����pΪָ��:(* )
//	//(*p)():(* )():˵��pΪ����ָ��
//	//(char*)��˵�������Ĳ���ֻ��һ������һ������������Ϊchar*
//	//void ˵�������ķ�������Ϊvoid
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*printf("%d\n", Add(a, b));*/
//	/*printf("%p\n", Add);
//	printf("%p\n", &Add);*/
//	//&Add��Add�ĵ�ַ��ͬ�����������Ǻ����ĵ�ַ
//	//����ָ�롪ָ������ָ�룬����ź����ĵ�ַ
//	//����ָ������д��
//	//int/*�����ķ�������*/(*p) (int, int) = Add;/*ָ��ָ����Ǻ����Ĳ�������*/
//	int(*p) (int, int) = &Add;
//  pΪ����ָ�룬ָ��ĺ���������������������������Ϊint��int��pָ��ĺ�����������Ϊint
//	printf("%d\n", (*p)(2, 3));
//	return 0;
//}
//void test(int** p)
//{}
//
//int main()
//{
//	int *ptr;
//	int**pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);
//	return 0;
//}
//void test(int* p)
//{
//}
//
//void test2(char* p)
//{}
//int main()
//{
//	int a = 10;
//	test(&a);
//	int* p1 = &a;
//	test(p1);
//
//	return 0;
//}

//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int arr[3][])//err:��ά�������ʡ���в�����ʡ����
//{}
//void test3(int arr[][])//err:��ά�������ʡ���в�����ʡ����
//{}
//void test(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	/*test(arr);
//	test1(arr);
//	test2(arr);
//	test3(arr);*/
//	test(arr);
//	return 0;
//}

////void test(int arr[])
////{}
////void test(int arr[10])
////{}
//void test(int* arr)//ʵ��Ϊ����������arr1����������������Ԫ�صĵ�ַ���β���ָ�����arr������arr1������������Ԫ�صĵ�ַ
//{}
////void test(int* arr[20])
////{}
////void test(int* arr[])
////{}
//void test(int** arr)//ʵ��Ϊָ��������arr2����������Ԫ�صĵ�ַ������Ԫ��Ϊָ��������൱��һ��ָ�룬�β�Ӧ�ö���ָ��������һ��ָ��ĵ�ַ
//{}

//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr1);
//	test(arr2);
//	return 0;
//}