#define _CRT_SECURE_NO_WARNINGS 1




//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	//函数指针
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
////函数指针数组
//int main()
//{
//	//指针数组
//	//int* arr[5];//存放指针的数组
//	//函数指针数组
//	//需要一个数组，这个数组可以存放四个函数的地址-函数指针的数组
//	int(*p)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2,3));
//	}
//	return 0;
//}
////signal是一个函数声明
////signal函数有两个参数，函数参数的类型分别为int，void(*p)(int)
////signal函数的返回类型为一个函数指针，该函数指针指向的函数参数是int，指向的函数的返回类型为void
//void(*signal(int, void(*)(int)))(int);
////简化：
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
//	void(*p) (char*) = Print; //创建一个函数指针存放Print函数的地址
//	//p为函数指针
//	//p指向的函数参数只有一个并且参数类型为char*
//	//p指向的函数的返回类型为void
//	void(*p1) (char*) = &Print;
//	(*p)("hello yql");
//	//(*p):说明了p为指针:(* )
//	//(*p)():(* )():说明p为函数指针
//	//(char*)：说明函数的参数只有一个，这一个参数的类型为char*
//	//void 说明函数的返回类型为void
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
//	//&Add与Add的地址相同：函数名就是函数的地址
//	//函数指针—指向函数的指针，存放着函数的地址
//	//函数指针该如何写呢
//	//int/*函数的返回类型*/(*p) (int, int) = Add;/*指针指向的是函数的参数类型*/
//	int(*p) (int, int) = &Add;
//  p为函数指针，指向的函数参数有两个，函数类型依次为int，int，p指向的函数返回类型为int
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
//void test2(int arr[3][])//err:二维数组可以省略行不可以省略列
//{}
//void test3(int arr[][])//err:二维数组可以省略行不可以省略列
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
//void test(int* arr)//实参为整型数组名arr1，数组名是数组首元素的地址，形参用指针变量arr来接收arr1：接收数组首元素的地址
//{}
////void test(int* arr[20])
////{}
////void test(int* arr[])
////{}
//void test(int** arr)//实参为指针数组名arr2，是数组首元素的地址，数组元素为指针变量，相当于一级指针，形参应用二级指针来接收一级指针的地址
//{}

//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr1);
//	test(arr2);
//	return 0;
//}