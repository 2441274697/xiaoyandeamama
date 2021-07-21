
//指针+-整数
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	int i = 0;
//	/*for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p += 2;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p -= 2;
//	}
//	return 0;
//}
//指针指向空间释放，就把指针设置为NULL
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	if (pa == NULL)
//	{
//		printf("1");
//	}
//	return 0;
//}
//3.指针指向的内存空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	printf("%d", *p);
//	return 0;
//}
//2.指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		//当p的地址超过arr地址的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}
//1.指针未初始化形成野指针
//int main()
//{
//	//int a;
//	//局部变量不初始化，默认为随机值；
//	int* p;
//	//局部指针变量不初始化，默认为随机值，指针指向的位置未知，为野指针；
//	*p = 20;
//	//随机的一个内存空间被设定成了20，这种情况十分危险，故应该被禁止。
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int * p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	//指针类型决定了指针的步长（指针走一步多远）
//	int a = 0x11223344;
//	int * pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	//走一步四个字节
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	//走一步一个字节
//	printf("%p\n", pc + 1);
//	return 0;
//}
//int main()
//{
//	/*int c = 1;
//	int b = c+c--;
//	printf("%d\n", b);*/
//	return 0;
//}