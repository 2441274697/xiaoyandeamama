#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = -1;
//	printf("%p\n", a);
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014//0x100000，结构体类型struct Test的大小为20个字节，跳过一个类型
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}

//int main()
//{
//	/*int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));*/
//	return 0;
//}

////字符数组
//int main()
//{
//	//对于二维数组a[3][4]而言：
//	//可以理解为a有三个元素:a[0],a[1],a[2]
//	//其中每个元素都是个数组，数组名为a[0],a[1],a[2]
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48a是数组名，sizeof（数组名）数组名代表整个数组的大小，计算的是整个数组的大小
//	printf("%d\n", sizeof(a[0][0]));//4第一行第一列元素的大小
//	printf("%d\n", sizeof(a[0]));//16//sizeof(第一行数组数组名):计算的是第一行数组的大小//对于二维数组a，有三个元素分别为：a[0],a[1],a[2].每一个元素都是一个数组，数组名也就是元素名
//	printf("%d\n", sizeof(a[0] + 1));//4//第一行第二个元素的地址//a[0]不是直接放在sizeof中，代表着第一行元素的首元素地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4//第一行第二个元素的大小//a[0]第一行第一个元素地址，a[0]+1是第一行第二个元素地址，*(a[0]+1)第一行第二个元素的地址
//	printf("%d\n", sizeof(a + 1));//4//a表示第一行元素的地址，加一表示第二行元素的地址
//	printf("%d\n", sizeof(*(a + 1)));//16//第二行元素的大小//a表示第一行元素的地址，a+1表示第二行元素的地址，*（a+1)表示第二行元素
//	printf("%d\n", sizeof(&a[0] + 1)); //4第二行的地址//&a[0]取出的是整个数组的地址，加以跳过第一行，所以为第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16第二行的大小//&a[0]是取出第一行全部的地址，加1跳过第一行，是第二行的地址，*解引用是第二行的全部内容
//	printf("%d\n", sizeof(*a));//16a第一行的地址，*a是第一行的内容，计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//16//sizeof()内部不参与运算，根据他的类型计算大小，等于a[0],不会真的访问第四行
//
//	/*char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));6
//	printf("%d\n", strlen(arr + 0));6
//	printf("%d\n", strlen(*arr));err
//	printf("%d\n", strlen(arr[1]));err
//	printf("%d\n", strlen(&arr));6
//	printf("%d\n", strlen(&arr + 1));随机值
//	printf("%d\n", strlen(&arr[0] + 1));5*/
//
//	/*printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));*/
//
//
//	//char* p = "abcdefg";//p一个字符指针，存放着字符串中a的地址
//
//	//printf("%d\n", strlen(p));6
//	//printf("%d\n", strlen(p + 1));5
//	//printf("%d\n", strlen(*p));err
//	//printf("%d\n", strlen(p[0]));err
//	//printf("%d\n", strlen(&p));随机值
//	//printf("%d\n", strlen(&p + 1));随机值
//	//printf("%d\n", strlen(&p[0] + 1));5
//
//	//printf("%d\n", sizeof(p));//计算指针变量p的大小
//	//printf("%d\n", sizeof(p + 1));//p+1指向b，是b的地址
//	//printf("%d\n", sizeof(*p));//*p就是字符串的第一个字符
//	//printf("%d\n", sizeof(p[0]));//int arr[10]; arr[0]==*(arr+0) p[0]=*(p+0)=='a';
//	//printf("%d\n", sizeof(&p));//地址
//	//printf("%d\n", sizeof(&p + 1));//地址
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", strlen(arr));//随机值从数组的第一个元素开始向后读取，是一个大于等于六的随机值
//	//printf("%d\n", strlen(arr + 0));//随机值
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//随机值
//	//printf("%d\n", strlen(&arr + 1));//随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//
//	//printf("%d\n", sizeof(arr));//6整个数组的大小
//	//printf("%d\n", sizeof(arr + 0));//4首元素地址
//	//printf("%d\n", sizeof(*arr));//1第一个元素的大小
//	//printf("%d\n", sizeof(arr[1]));//1第二个元素的大小
//	//printf("%d\n", sizeof(&arr));//4取出来整个数组地址的大小
//	//printf("%d\n", sizeof(&arr + 1));//4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4
//
//	return 0;
//}



////一维数组
//int main()
//{
//	//数组名是数组首元素的地址，有两种特殊情况
//	//1.sizeof(数组名)：数组名代表整个数组，计算出来的是整个数组的大小
//	//2.&数组名:取出来的是整个数组的地址
//	int a[] = { 1, 2, 3, 4 };          
//	printf("%d\n", sizeof(a));         //特殊情况，计算的是整个数组的大小为16
//	printf("%d\n", sizeof(a + 0));     //数组名表示数组首元素的地址，为数组首元素的地址
//	printf("%d\n", sizeof(*a));	       //数组首元素地址解引用是数组首元素，数组首元素的大小
//	printf("%d\n", sizeof(a + 1));	   //数组名表示数组首元素的地址，为数组第二个元素的地址
//	printf("%d\n", sizeof(a[1]));      //数组第二个元素的大小
//	printf("%d\n", sizeof(&a));        //数组的地址，仍为地址，4
//	printf("%d\n", sizeof(*&a));       //整个数组的地址解引用得整个数组，为整个数组的大小
//	printf("%d\n", sizeof(&a + 1));    //跳过整个数组的地址的下一个地址，仍为地址
//	printf("%d\n", sizeof(&a[0]));     //第一个元素地址的大小
//	printf("%d\n", sizeof(&a[0] + 1)); //第二个元素地址大小
//	return 0;
//}

////bubble_sort函数的改进：
////冒泡算法
//
////设计bubble_sort函数的程序员（我）并不知道要接收哪种数据类型
////base:void*类型，接收所有类型的数组
////sz:int类型，接收数组的元素个数
////width:int类型，不知道哪种类型，C语言无法接收类型，故width表示接收数组元素的大小，单位为字节
////cmp：函数指针类型，接收数组元素之间的比较方式，有返回值规定
////改变数组排序，bubble_sort的返回值类型为void*
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;//buf1为char*类型，*buf1为char类型
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void*e1, void*e2))
//{
//	int i = 0;//趟数
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;//比较次数
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两元素的比较
//			//base为首元素地址width为宽度
//			//base+width等于第二个元素的地址
//			//两元素比较，比较的是相邻的两个元素的大小
//			//故j=0开始，base+i*width就是第i+1个元素的地址
//			//base+(i+1)*width就是第i+2个元素的地址
//			if (cmp((char*)base+i*width,(char*)base+(i+1)*width)>0)
//			{
//				Swap(((char*)base+i*width),((char*)base+(i+1)*width),width);//冒泡算法，若前一个比后一个大，即返回值大于零，则交换两元素的内容
//			}
//		}
//	}
//}
//
//int cmp_int(const void*e1, const void*e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//
//void test()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}