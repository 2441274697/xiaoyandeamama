#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 6
//void main()
//{
//	int i, j;
//	for (i = 1; i <= N; i++)
//	{
//		for (j = 1; j <= N; j++)
//		if (i>j)				/*$ERROR$*/
//			printf("0");
//		else
//			printf("1");	/*$ERROR$*/
//		printf("\n");			/*$ERROR$*/
//	}
//}
//#include <stdio.h>
//void main()
//{
//	int a[3][4] = { { 12, 24, 43, 10 }, { 6, 17, 20, 8 }, { 16, 32, 45, 9 } };
//	int i, j, max;
//	max = a[0][0];
//	i = 0;						/*$ERROR$*/
//	while (i<3)
//	{
//		for (j = 0; j<4; j++)
//		if (a[i][j]>max)
//			max = a[i][j];	/*$ERROR$*/
//		i++;					/*$ERROR$*/
//	}
//	printf("max=%d\n", max);
//}
//#include <stdio.h>
//void main()
//{
//	char str[81];
//	int i, c;        /*����c��Ÿ���*/
//	gets(str);    /*$BLANK$*/
//	c = 0;          /*$BLANK$*/
//	i = 1;
//	while (str[i] != '\0')
//	{
//		if (str[i - 1] == 'I'&&str[i] == 'T')
//			c++; /*$BLANK$*/
//		i++;
//	}
//	printf("%d\n", c);
//}
//#include <stdio.h>
//#include <math.h>
//void main()
//{
//	/*�����ڴ���Ƴ���*/
//	int a, b, c;
//	int x1=1, x2=0;
//	scanf("%d%d%d", &a, &b, &c);
//	int dt = b*b - 4 * a * c;
//	if (dt >= 0)
//	{
//		x1 = (-b + sqrt(dt)) / 2 * a;
//		x2 = (-b - sqrt(dt)) / 2 * a;
//		printf("%d,%d\n", x1, x2);
//	}
//}
//#include <stdio.h>
//void main()
//{
//	/*�����ڴ���Ƴ���*/
//	double  n = 0.0;
//	double s = 0.0;
//	double x = 0.0;
//	for (n = 1.0; s <= 2020; n++)
//	{
//		x = n / (n + 2);
//		s += x;
//	}
//	printf("%d\n", (int)(n - 1));
//}
//#include <stdio.h>
//void main()
//{
//	int a[32] = { 578, 58, 57, 59, 55, 51, 58, 45, 52, 45, 41, 48, 43, 49, 42, 40, 49, 35, 33, 33, 30, 39, 31, 32, 26, 29, 36, 15, 19, 19, 18, 14 };
//	/*�����ڴ���Ƴ���*/
//	int i = 0;
//	int sum = a[0];
//	for (i = 1; i <= 31; i++)
//	{
//		sum += a[i];
//		printf("%d ", sum);
//	}
//}
//int main()
//{
//	char c1, c2;
//	scanf("%c%c", &c1, &c2);
//	printf("%c,%c", c1, c2);
//	return 0;
//}
//#include <stdio.h>
//#define N 5
//void main()
//{
//	int a[N], i, j, k, temp;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &a[i]);	/*$ERROR$*/
//	}
//	for (i = 0; i<N - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j<N; j++)
//		if (a[k]>a[j])
//			k = j;
//		if (k != i)
//		{
//			temp = a[i];	/*$ERROR$*/
//			a[i] = a[k];
//			a[k] = temp;
//		}
//	}
//	for (i = 0; i < N; i++)		/*$ERROR$*/
//		printf("%d ", a[i]);
//	printf("\n");
////}
//#include <stdio.h>
//void main()
//{
//	/*�����ڴ���Ƴ���*/
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//		printf("Mon\n");
//		break;
//	case 2:
//		printf("Tue\n");
//		break;
//	case 3:
//		printf("Wed\n");
//		break;
//	case 4:
//		printf("Thu\n");
//		break;
//	case 5:
//		printf("Fri\n");
//		break;
//	case 6:
//		printf("Sat\n");
//		break;
//	case 7:
//		printf("Sun\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//}
//#include <stdio.h>
//void main()
//{
//	/*�����ڴ���Ƴ���*/
//	double i = 0.0;
//	double s = 0.0;
//	double x = 1.0;
//	for (; i <= 18.0; i++)
//	{
//		for (; x <= i; x++)
//		{
//			x *= 3.0;
//		}
//		s += (1 / x);
//	}
//	printf("%.5f", s);
//}
//#include <stdio.h>
//void main()
//{
//	/*С��1*/
//	int a[29] = { -1, -1, 125, 134, 165, 167, 173, -1, -1, 120, 119, 165, 145, 186, -1, -1, 197, 215, 179, 154, 185, -1, -1, 121, 128, 147, 155, 127, -1 };
//	/*С��2*/
//	int b[29] = { -1, -1, 175, 185, 155, 130, 166, -1, -1, 166, 175, 135, 185, 196, -1, -1, 186, 185, 195, 163, 174, -1, -1, 121, 243, 225, 288, 259, -1 };
//	/*�����ڴ���Ƴ���*/
//	int i = 0;
//	float day = 0;
//	float sum = 0;
//	for (i = 0; i <= 28; i++)
//	{
//		if (a[i] != -1)
//		{
//			day++;
//			sum += (a[i] + b[i]);
//		}
//	}
//	printf("%.2f,%.2f", sum, sum / day);
//}
//int main()
//{
//	char c1 = 'a';
//	char c2 = 'b';
//	printf("%c", (c1, c2));
//	return 0;
//}
//int main()
//{
//	int x = 3, y = 10;
//	if (x = 1)
//		y = x;
//	y = y + 1;
//	printf("%d,%d\n", x, y);
//	return 0;
//}
//#include <stdio.h>
//void main()
//{
//	int n, i, t, count;
//	count = 0;			/*$ERROR$*/
//	for (n = 1; n <= 1000; n++)
//	{
//		t = 1;
//		for (i = 2; i <= n / 2; i++)
//		if (n%i == 0)	/*$ERROR$*/
//			t = t + i;
//		if (t == 100)		/*$ERROR$*/
//		{
//			count++;
//			printf("%d\n", n);
//		}
//	}
//	printf("count=%d\n", count);
//}
//int main()
//{
//	/*�����ڴ���Ƴ���*/
//	int x = 1.0;
//	float pay = 0.0;
//	scanf("%d", &x);
//	if (x > 0 && x <= 180)
//	{
//		pay = (x*(0.57));
//	}
//	if (x > 180 && x <= 240)
//	{
//		pay = (x*(0.62) - 9);
//	}
//	if (x > 240)
//	{
//		pay = (x*(0.8) - 52.2);
//	}
//	printf("%lf\n", pay);
//}
//#include <stdio.h>
//void main()
//{
//	/*�����ڴ���Ƴ���*/
//	double n;
//	double x = 0.0;
//	double s = 0.0;
//	for (n = 1.0; n <= 500; n++)
//	{
//		x = 1 / (n + 1)*(2 * n - 1);
//		s += x;
//	}
//	printf("%.5lf\n", s);
//}
//#include <stdio.h>
//#define float double
//void main()
//{
//	float a[] = { 6660.58, -627.45, -206, -960.78, -223, -476, -887, -1220, 6586.86, -118, -161, -702, -578, -333, -443, -1514, 341, 8765.4, -452, -188, -351, -129, -892, -768, 6758.54, -825.85, -286, -360.58, -228, -876, -1987, -220, 6812.46, -138.87, -1165, -1012, -528, -5336, -443, -514, 2341, -930, -95, 6861.42, -627.45, -906, -860.78, -623, -876, -387, 0 };
//	/*�����ڴ���Ƴ���*/
//	int i = 0;
//	double sumi = 0.0;
//	double sumo = 0.0;
//	double sum = 0.0;
//	while (a[i] != 0)
//	{
//		if (a[i] > 0)
//		{
//			sumi += a[i];
//		}
//		else
//		{
//			sumo += a[i];
//		}
//		sum += a[i];
//		i++;
//	}
//	printf("�����ܶ�Ϊ��%.2f\n\n֧���ܶ�Ϊ��%.2f\n\n����ܶ�Ϊ��%.2f\n\n", sumi, sumo, sum);
//}
//#include <stdio.h>
//void main()
//{
//	int i, j, m;
//	char ch;
//	scanf("%d", &m);				/*$ERROR$*/
//	i = 1;
//	while (i <= 2 * m + 1)
//	{
//		for (j = 1; j <= 2 * m + 1; j++)
//		{
//			if (i == 1 || i + j == 2 * m + 2 || i == 2 * m + 1)
//				ch = '*';
//			else
//				ch = ' ';
//			printf("%c", ch);	/*$ERROR$*/
//		}
//		printf("\n");
//		i++;					/*$ERROR$*/
//	}
//}
//#include <stdio.h>
//#define PI 3.14159
//void main()
//{
//	/*�����ڴ���Ƴ���*/
//	double r = 0.0;
//	double h = 0.0;
//	double v = 0.0;
//	scanf("%lf%lf", &r, &h);
//	v = PI*r*r*h;
//	printf("%lf\n", v);
//}
//#include <stdio.h>
//#define float double
//void main()
//{
//	/*�����ڴ���Ƴ���*/
//	double i = 0.0;//����ѭ��,��ĸ
//	double j = -1.0;//����
//	double x = 0.0;//һ��
//	double s = 1.0;//s
//	double u = 1.0;//����
//	for (i = 1.0; i <= 18; i++)
//	{
//		u *= 3.0;
//		x = j*(u / (2.0 * i + 1.0));
//		s += x;
//		j = -j;
//	}
//	printf("%.5f\n", s);
//}
//#include <stdio.h>
//void main()
//{
//	int a[201] = { 0, 1, 2 };
//	/*�����ڴ���Ƴ���*/
//	int i = 0;
//	double sum = 0.0;
//	for (i = 3; i <= 200; i++)
//	{
//		a[i] = a[i - 2] + (2 * a[i - 1]) % i;
//	}
//	for (i = 0; i <= 200; i++)
//	{
//		sum += a[i];
//	}
//	printf("%.2f	%.2f\n", sum, sum / 200);
//}
//#include <stdio.h>
//void main()
//{
//	int i, j;
//	char ch = 'A';
//	i = 1;					/*$ERROR$*/
//	while (i <= 5)
//	{
//		j = 1;
//		while (j<i)
//		{
//			printf(" ");	/*���һ���ո�*/
//			j++;			/*$ERROR$*/
//		}
//		j = 1;
//		while (j <= 5)
//		{
//			printf("%c", ch);
//			j++;
//		}
//		printf("\n");
//		ch = ch + 1;			/*$ERROR$*/
//		i++;
//	}
//}
//#include <stdio.h>
//#include <string.h>
//void mcopy(char *s, char *t, int n)
//{
//	int l = strlen(s);
//	int i;
//	for (i = 0; i<n - 1; i++)  /*�ƶ�ԭ�ַ�����ָ��*/
//		s++;
//	for (; i<l; i++)
//	{
//		*t = *s;
//		t++;
//		s++;			/*$ERROR$*/
//	}
//	*t = '\0';
//}
//void main()
//{
//	int n;
//	char s[50], t[50];
//	printf("������һ���ַ�����\n");
//	gets(s);
//	printf("������һ����������ʾ�Ӵ�����ʼλ�ã�\n");
//	scanf("%d", &n);		/*$ERROR$*/
//	mcopy(s, t, n);			/*$ERROR$*/
//	printf("ԭ�ַ�����%s\n", s);
//	printf("���ƺ�����ַ�����%s\n", t);
//}
#include <stdio.h>
void main()
{
	/*�����ڴ���Ƴ���*/
	int age = 0;
	scanf("%d", &age);
	switch (age)
	{
	case 2:
	case 3:
		printf("��С��");
		break; 
	case 4:
			printf("���а�");
			break; 
	case 5:
	case 6:
			printf("�����");
			break;
	}
}
