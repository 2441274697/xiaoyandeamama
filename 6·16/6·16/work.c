#define _CRT_SECURE_NO_WARNINGS
//���������������������������Լ��
#include<stdio.h>
int main()
{

	return 0;
}
////��ӡ1-100������3�ı���������
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1;i<=100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////���������Ӵ�С�����
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d,%d,%d", a, b, c);//�����ֵ�ŵ�a����������b�����c��С�����
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i;
//	char password[20] = {0};
//	for (i=0;i<3;i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("���������������󣬵�¼ʧ��\n");
//	}
//	return 0;
//}
//

//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "yan qing long is a handsome man";
//	char arr2[] = "                               ";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//

//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 9, 10,11 };
//	int sz = sizeof(arr) / (sizeof arr[0]);//��������arr��Ԫ�ظ�����
//	int k = 8;//������arr�в�����kֵ��ͬ��Ԫ�ء�
//	int left = 0;//��ʼ���±��ֵ
//	int right = sz - 1;//��ʼ���±��ֵ������arrԪ�ظ�����һ��
//	int mid = 0;//�����м��±ꣻ
//	while (left<=right)
//	{
//		mid = (left + right) / 2;//�м��±�������±������±��ƽ��ֵ��
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}