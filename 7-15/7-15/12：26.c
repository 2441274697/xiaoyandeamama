
//ָ��+-����
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
//ָ��ָ��ռ��ͷţ��Ͱ�ָ������ΪNULL
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
//3.ָ��ָ����ڴ�ռ��ͷ�
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
//2.ָ��Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		//��p�ĵ�ַ����arr��ַ�ķ�Χʱ��p����Ұָ��
//		*(p++) = i;
//	}
//	return 0;
//}
//1.ָ��δ��ʼ���γ�Ұָ��
//int main()
//{
//	//int a;
//	//�ֲ���������ʼ����Ĭ��Ϊ���ֵ��
//	int* p;
//	//�ֲ�ָ���������ʼ����Ĭ��Ϊ���ֵ��ָ��ָ���λ��δ֪��ΪҰָ�룻
//	*p = 20;
//	//�����һ���ڴ�ռ䱻�趨����20���������ʮ��Σ�գ���Ӧ�ñ���ֹ��
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
//	//ָ�����;�����ָ��Ĳ�����ָ����һ����Զ��
//	int a = 0x11223344;
//	int * pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	//��һ���ĸ��ֽ�
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	//��һ��һ���ֽ�
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