#define _CRT_SECURE_NO_WARNINGS

//逗号表达式：
//逗号表达式，就是用逗号隔开的多个表达式
//逗号表达式，是从左向右依次执行
//整个表达式的结果是最后一个表达式的结果
int main()
{
	return 0;
}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}
//条件操作符：
//exp1?exp2:exp3
//若表达式1的结果为真（非零），则执行表达式2；
//若表达式1的结果为假（为零），则执行表达式3；
//用条件操作符实现求两个数的较大值：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a > b ? a : b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 1, b = 0;
//	//(a > 5) ? (b = 3) : (b = -3);
//	//printf("%d", b);
//	return 0;
//}
////360笔试题：
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	/*i = a++&&++b&&d++;*/
//	printf("a = %d\n b = %d\n c = %d\nd=%d\n,a,b,c,d");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//	//逻辑与：&&；逻辑或：||
//	//int a = 0;
//	//int b = 8;
//	//int c = a||b;
//	//printf("%d\n", c);
//	//(数据类型)：强制类型转换。
//	/*int a = (int)3.14;*/
//	////++
//	//int a = 0;
//	//printf("++a = %d\n", ++a);
//	//printf("a = %d\n", a);
//	//printf("a++ = %d\n",a++);
//	//printf("a = %d\n", a);
//	////~：按位取反：按二进制位取反。
//	////二进制补码取反，得到的依旧是补码，要想直观看到需要转化为原码
//	//int a = 11;
//	//a = a | (1 << 2);
//	//printf("%d\n", a);
//	////000000000000000000000000001011
//	////按位或：|如下：
//	////000000000000000000000000000100
//	////得到：
//	////000000000000000000000000001111
//	////改回去：
//	////按位与&
//	////111111111111111111111111111011
//	////000000000000000000000000000100
//	//a = a&(~(1 << 2));
//	//printf("%d\n", a);
//	//int a = 15;
//	//printf("%d\n", ~a);
//	//000000000000000000000000001111
//	//111111111111111111111111110000
//	//111111111111111111111111101111
//	//100000000000000000000000010000
//
//
//	//sizeof:求操作数的长度：
//	//short s = 0;
//	//int a = 10;
//	//printf("%d\n", sizeof(s = s + 5));
//	//printf("%d\n",s);
//	/*int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));*/
//	/*int a = 10;
//	int b = 10;
//	printf("%d\n", sizeof a+b);*/
//		
//	//& 取地址操作符:
//	//* 解引用操作符：
//	//a = 10;
//	//int* p = &a;
//	//printf("a = %d,p = %d,&a = %d,*p = %d", a, p, &a, *p);
//	//*p = 20;
//	//printf("\n%d\n", a);
//	//-:负值操作符：
//	/*a = -5;
//	a = -a;*/
//	//!:逻辑反操作
//	//0变为1，非零变为0
//	//int a = 10;
//	//int b = 0;
//	//printf("!%d = %d\n", a, !a);
//	//printf("!%d = %d\n", b, !b);
//	////a为假打印呵呵：
//	//if (!a)
//	//{
//	//	printf("呵呵\n");
//	//}
//	////a为真打印呵呵：
//	//if (a)
//	//{
//	//	printf("呵呵\n");
//	//}
//	//return 0;
//}
//
//////复合操作符：
////int main()
////{
////	int a = 0;
////	a = a + 2;
////	a += 2;
////	a -= 2;
////	a = a - 2;
////	a <<= 3;
////	a = a << 3;
////	a >>= 2;
////	a = a >> 2;
////	a *= 3;
////	a = a * 3;
////	a /= 3;
////	a = a / 3;
////	a = a & 1;
////	a &= 1;
////}
//////编写代码实现：统计一个整数存储在内存中二级制中一的个数:
//////正确的方法：
////#include<stdio.h>
////int main()
////{
////	int num = 0;
////	int i = 0;
////	int count = 32;
////	scanf("%d", &num);
////	//第一种：
////	//for (i = 0; i < 32; i++)
////	//{
////	//	if ((num >> i) & 1 == 1)
////	//	{
////	//		count++;
////	//	}
////	//}
////	printf("%d\n", count);
////	return 0;
////}
////#include<stdio.h>
//////第一种方法：取模二除二，缺点：正整数和0符合，但是负整数不符合，故不适合
////int main()
////{
////	int num = 0;
////	int count = 0;
////	scanf("%d", &num);
////	while (num)
////	{
////		if (num % 2 == 1)
////		{
////			count++;
////		}
////		num /= 2;
////	}
////	printf("%d\n", count);
////	return 0;
////}
//////实现两个数的交换，不能创建临时变量：
////#include<stdio.h>
////int main()
////{
////	int a = 3;
////	int b = 5;
////	//3：按位异或法：最优解。
////	a = a^b;
////	b = a^b;
////	a = a^b;
////	printf("a = %d,a = %d\n", a, b);
////	//2:加减法：优点：不创建变量，缺点：未考虑数值溢出的情况。
////	/*a = a + b;
////	b = a - b;
////	a = a - b;
////	printf("a = %d,b = %d\n", a, b);*/
////	//1：创建临时变量tmp:
////	/*int tmp = 0;
////	tmp = a;
////	a = b;
////	b = tmp;
////	printf("a = %d,b = %d\n", a, b);
////	return 0;*/
////}
//////&按位与,|按位或，^按位异或;
////int main()
////{
////	int a = 5;
////	int b = 3;
////	int c = a^b;
////	printf("%d\n", c);
////	//a:		00000000000000000000000000000101
////	//b:		00000000000000000000000000000011
////	//按位异或	00000000000000000000000000000110
////	//按位或:	00000000000000000000000000000111
////	//按位与&:	00000000000000000000000000000001
////	return 0;
////}
////#include<stdio.h>
////int main()
////{
////	//double a = 5 % 2.0;
////	//printf("%lf\n", a);
////	////int a = 5 / 2;
////	////printf("a = %d\n", a);
////	//return 0;
////	int a = -4;
////	int b = a >> 200;
////	printf("%d\n", b);
////}
////int main()
////{
////	int a = -64 * 64 * 64 * 64 * 64 * 2;
////	int b = -64 * 64 * 64 * 64 * 64 * 2;
////	printf("%d\n", a);
////	return 0;
////}