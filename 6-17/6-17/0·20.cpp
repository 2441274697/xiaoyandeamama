//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	int i = 3;
//	float sum = 0;
//	printf("%lf\n", 1 / i);
//	printf("%lf\n", 1.0 / i);
//	printf("%lf\n", 1.00 / i);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0; 
//
//
//	for(i = 101; i <=200; i+=2)
//	{
//		for (j = 2;j <= i/2; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j >i/2)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//#include<stdio.h>
////打印1000-2000年间的闰年
//int main()
//{
//	int count = 0;//用count来接受闰年的次数。
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		////判断是否为闰年规则：
//		////1.能被4整除，不能被一百整除；
//		////2.能被400整除；
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//第二种方法，更加简洁。
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//
//	printf("\n%d\n", count);
//	return 0;
//}

//求两个数的最大公约数
//#include<stdio.h>
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("m和n的最大公约数为：%d", n);
//	return 0;
//}