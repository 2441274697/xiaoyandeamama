#include <stdio.h>
void main()
{
	/*考生在此设计程序*/
	int a = 0;
	int b = 0;
	int c = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int num = 0;
	int money = (500 - (50 * 2 + 10 * 7 + 5 * 15));
	for (a = 2,  A= 0; A*a <= money; A++)
	{
		for (b = 7, B= 0; a*A + b*B <= money; B++)
		{
			for (c = 15, C = 0; A*a + B*b + c*C <= money; C++)
			{
				num++;
			}
		}
	}
	printf("%d\n", num);
}