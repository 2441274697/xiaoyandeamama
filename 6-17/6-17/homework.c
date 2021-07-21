
#include<stdio.h>

int mian()
{
	int a = 1, b = 1;
	a += b += 1;
	{
		int a = 10, b = 10;
		a += b += 10;
		printf("b=%d,", b);
	}
	a *= a *= b *= 10;
	printf("a=%2d\n", a);
	return 0;
}
//int d = 1;
//int fun(int p)
//{
//	int d = 5;
//	d += p++;
//	printf("%d	", d);
//	return 0;
//}
//main()
//{
//	int a = 3;
//	fun(a);
//	d += a++;
//	printf("%d\n", d);
//}
//int func(int a, int b)
//{
//	static int m, i = 2;
//	i += m + 1;
//	m = i + a + b;
//	return(m);
//}
//main()
//{
//	int k = 4, m = 1, p;
//	p = func(k, m);
//	printf("%d,", p);
//	p = func(k, m);
//	printf("%d\n", p);
//}
//three()
//{
//	extern int x, y;
//	int a = 25, b = 10;
//	x = a - b;
//	y = a + b;
//	return;
//}
//int x, y;
//main()
//{
//	int a = 15, b = 5;
//	x = a + b;
//	y = a - b;
//	three();
//	printf("%d,%d\n", x, y);
//}/