#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>


//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%c", a[256]);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	//00000000000000000000000000000000
//	//00000000000000000000000000001001
//	//00000000000000000000000000000000
//	//10000000000000000000000000000001
//	//
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	//00000000000000000000000000000000
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	unsigned int j = 10;
//	//00000000000000000000000000000000
//	//00000000000000000000000000001010
//	//11111111111111111111111111101100
//	//11111111111111111111111111110110
//	//%d������ӡʮ�����з�������
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010
//	printf("%d\n", i + j);
//	return 0;
//}
//int main()
//{
//	char a = 128;
//	//10000000
//	//11111111111111111111111110000000
//	char b = -128;
//	printf("%u\n", a);
//	printf("%u\n", b);
//	return 0;
//}
//int main()
//{
//	char a = 127;
//	//01111111
//	char b = 1;
//	//00000001
//	char c = a + b;
//	//10000000
//	//1111111111111111111111111111111110000000
//	//1111111111111111111111111111111101111111
//	//1000000000000000000000000000000010000000
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//-128��ԭ�룺
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111����
//	//11111111111111111111111110000000����
//	//10000000
//	//11111111111111111111111110000000����
//	//%u����ӡ�޷���ʮ�������֣����������߸�����ֱ�Ӵ�ӡ�������Ӧ��ֵ
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	//-1
//	//10000000000000000000000000000001�� -1ԭ��
//	//11111111111111111111111111111110�� -1����
//	//11111111111111111111111111111111�� -1����
//	//����-1�Ķ����Ʊ�ʾ��ʽ
//	//Ҫ�ŵ�char�У�charֻ��һ���ֽڼ�8��bit����Ҫ�����ض�
//	//��ŵ��ַ��ͱ���a��-1
//	//11111111
//	//Ҫ��ӡ����������
//	//�з���char
//	//11111111111111111111111111111111����
//	//11111111111111111111111111111110����
//	//10000000000000000000000000000001ԭ��
//	//�����-1
//	signed char b = -1;
//	//ͬ��char
//	unsigned char c = -1;
//	//�����ضϣ�
//	//11111111
//	//�޷�������������
//	//00000000000000000000000011111111
//	//Ϊ255
//	printf("%d,%d,%d", a, b, c);//-1,
//	return 0;
//}

//ָ�����͵����壺
//ָ�����;�����ָ������ò������ܷ��ʼ����ֽڣ�char* p��*p�ܷ���һ���ֽڣ�int* p ��*p�ܷ����ĸ��ֽ�
//ָ�����;�����ָ��Ĳ�����������ָ��+1��-1���ӵ��Ǽ����ֽڣ�char* p��p+1������һ���ֽڵĵ�ַ��int* p��p+1�������ĸ��ֽ�
//int main()
//{
//	int a = 0x11223344;
//	/*int *p = &a;*///���ʲ��ı����ĸ��ֽڵ�����
//	/*char* p = (char*)&a;*///���ʲ��ı���һ���ֽڵ�����
//	/**p = 0;*/
//	return 0;
//}
//check_system()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int check_system()
//{
//	int a = 1;
//	return *(char*)&a;//����1��С�ˣ�����0����ˡ�
//}
//int main()
//{
//	//дһ�δ���������ǵ�ǰ�������ֽ���
//	//�����������1��С��
//	//�����������0�����
//	int ret = check_system();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	//000000000000000000000000000010100
//	//0x00000014
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	//00000000000000000000000000010100����ԭ��
//	//00000000000000000000000000010100��������
//	//00000000000000000000000000010100��������
//	//0x00000014
//	int b = -20;
//	//10000000000000000000000000001010ԭ��
//	//11111111111111111111111111110101����
//	//1111 1111 1111111111111111 1111 0110����
//	//0xffffff6
//	return 0;
//}
////void �޲�
//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(100);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	short int b = 10;
//	signed short int b = 10;
//	return 0;
//}
//strlen()������ʵ�֣�
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);//��ָ֤�����Ч��
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//#include<assert.h>
//#include<stdio.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ���
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy
//	//�ַ���������
//	char arr1[] = "###";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}