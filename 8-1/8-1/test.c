#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Stu
{
	char name[20];
	int age;
};

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//ʵ��bubble_sort�����ĳ���Ա������֪��δ��������������ͣ���֪�������Ƚ�Ԫ�ص���������
void bubble_sort(void* base, int sz, int width,int (*cmp)(void* e1,void* e2))
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//����
				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

int cmp_int(const void*e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}

void test4()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ�Ҫ�����������ʲô����
	//Ҳ����Ӧ��֪����αȽ������е�����Ԫ��
	bubble_sort(arr, sz, sizeof(arr[0]),cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_stu_by_age(const void*e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void*e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test5()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	/*bubble_sort(s, sz, sizeof(s[0]),cmp_stu_by_age);*/
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);

}

int main()
{
	/*test4();*/
	test5();
	return 0;
}

//void qsort(void*base, size_t num, size_t width, int (*cmp)(const void* e1, const void* e2));
//��һ��������Ҫ������������Ԫ�ص�ַ
//�ڶ��������������������Ԫ�ظ���
//�����������������������ÿ��Ԫ�صĴ�С
//���ĸ�����������ָ�룬�Ƚ�����Ԫ�صĺ�����ַ
//�������ʹ�����Լ�ʵ��
//����ָ������������ǣ������������Ԫ�صĵ�ַ