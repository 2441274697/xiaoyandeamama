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
//	printf("%p\n", p + 0x1);//0x100014//0x100000���ṹ������struct Test�Ĵ�СΪ20���ֽڣ�����һ������
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

////�ַ�����
//int main()
//{
//	//���ڶ�ά����a[3][4]���ԣ�
//	//�������Ϊa������Ԫ��:a[0],a[1],a[2]
//	//����ÿ��Ԫ�ض��Ǹ����飬������Ϊa[0],a[1],a[2]
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48a����������sizeof����������������������������Ĵ�С�����������������Ĵ�С
//	printf("%d\n", sizeof(a[0][0]));//4��һ�е�һ��Ԫ�صĴ�С
//	printf("%d\n", sizeof(a[0]));//16//sizeof(��һ������������):������ǵ�һ������Ĵ�С//���ڶ�ά����a��������Ԫ�طֱ�Ϊ��a[0],a[1],a[2].ÿһ��Ԫ�ض���һ�����飬������Ҳ����Ԫ����
//	printf("%d\n", sizeof(a[0] + 1));//4//��һ�еڶ���Ԫ�صĵ�ַ//a[0]����ֱ�ӷ���sizeof�У������ŵ�һ��Ԫ�ص���Ԫ�ص�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4//��һ�еڶ���Ԫ�صĴ�С//a[0]��һ�е�һ��Ԫ�ص�ַ��a[0]+1�ǵ�һ�еڶ���Ԫ�ص�ַ��*(a[0]+1)��һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a + 1));//4//a��ʾ��һ��Ԫ�صĵ�ַ����һ��ʾ�ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16//�ڶ���Ԫ�صĴ�С//a��ʾ��һ��Ԫ�صĵ�ַ��a+1��ʾ�ڶ���Ԫ�صĵ�ַ��*��a+1)��ʾ�ڶ���Ԫ��
//	printf("%d\n", sizeof(&a[0] + 1)); //4�ڶ��еĵ�ַ//&a[0]ȡ��������������ĵ�ַ������������һ�У�����Ϊ�ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16�ڶ��еĴ�С//&a[0]��ȡ����һ��ȫ���ĵ�ַ����1������һ�У��ǵڶ��еĵ�ַ��*�������ǵڶ��е�ȫ������
//	printf("%d\n", sizeof(*a));//16a��һ�еĵ�ַ��*a�ǵ�һ�е����ݣ������һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));//16//sizeof()�ڲ����������㣬�����������ͼ����С������a[0],������ķ��ʵ�����
//
//	/*char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));6
//	printf("%d\n", strlen(arr + 0));6
//	printf("%d\n", strlen(*arr));err
//	printf("%d\n", strlen(arr[1]));err
//	printf("%d\n", strlen(&arr));6
//	printf("%d\n", strlen(&arr + 1));���ֵ
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
//	//char* p = "abcdefg";//pһ���ַ�ָ�룬������ַ�����a�ĵ�ַ
//
//	//printf("%d\n", strlen(p));6
//	//printf("%d\n", strlen(p + 1));5
//	//printf("%d\n", strlen(*p));err
//	//printf("%d\n", strlen(p[0]));err
//	//printf("%d\n", strlen(&p));���ֵ
//	//printf("%d\n", strlen(&p + 1));���ֵ
//	//printf("%d\n", strlen(&p[0] + 1));5
//
//	//printf("%d\n", sizeof(p));//����ָ�����p�Ĵ�С
//	//printf("%d\n", sizeof(p + 1));//p+1ָ��b����b�ĵ�ַ
//	//printf("%d\n", sizeof(*p));//*p�����ַ����ĵ�һ���ַ�
//	//printf("%d\n", sizeof(p[0]));//int arr[10]; arr[0]==*(arr+0) p[0]=*(p+0)=='a';
//	//printf("%d\n", sizeof(&p));//��ַ
//	//printf("%d\n", sizeof(&p + 1));//��ַ
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", strlen(arr));//���ֵ������ĵ�һ��Ԫ�ؿ�ʼ����ȡ����һ�����ڵ����������ֵ
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//
//	//printf("%d\n", sizeof(arr));//6��������Ĵ�С
//	//printf("%d\n", sizeof(arr + 0));//4��Ԫ�ص�ַ
//	//printf("%d\n", sizeof(*arr));//1��һ��Ԫ�صĴ�С
//	//printf("%d\n", sizeof(arr[1]));//1�ڶ���Ԫ�صĴ�С
//	//printf("%d\n", sizeof(&arr));//4ȡ�������������ַ�Ĵ�С
//	//printf("%d\n", sizeof(&arr + 1));//4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4
//
//	return 0;
//}



////һά����
//int main()
//{
//	//��������������Ԫ�صĵ�ַ���������������
//	//1.sizeof(������)�������������������飬�������������������Ĵ�С
//	//2.&������:ȡ����������������ĵ�ַ
//	int a[] = { 1, 2, 3, 4 };          
//	printf("%d\n", sizeof(a));         //������������������������Ĵ�СΪ16
//	printf("%d\n", sizeof(a + 0));     //��������ʾ������Ԫ�صĵ�ַ��Ϊ������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*a));	       //������Ԫ�ص�ַ��������������Ԫ�أ�������Ԫ�صĴ�С
//	printf("%d\n", sizeof(a + 1));	   //��������ʾ������Ԫ�صĵ�ַ��Ϊ����ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a[1]));      //����ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));        //����ĵ�ַ����Ϊ��ַ��4
//	printf("%d\n", sizeof(*&a));       //��������ĵ�ַ�����õ��������飬Ϊ��������Ĵ�С
//	printf("%d\n", sizeof(&a + 1));    //������������ĵ�ַ����һ����ַ����Ϊ��ַ
//	printf("%d\n", sizeof(&a[0]));     //��һ��Ԫ�ص�ַ�Ĵ�С
//	printf("%d\n", sizeof(&a[0] + 1)); //�ڶ���Ԫ�ص�ַ��С
//	return 0;
//}

////bubble_sort�����ĸĽ���
////ð���㷨
//
////���bubble_sort�����ĳ���Ա���ң�����֪��Ҫ����������������
////base:void*���ͣ������������͵�����
////sz:int���ͣ����������Ԫ�ظ���
////width:int���ͣ���֪���������ͣ�C�����޷��������ͣ���width��ʾ��������Ԫ�صĴ�С����λΪ�ֽ�
////cmp������ָ�����ͣ���������Ԫ��֮��ıȽϷ�ʽ���з���ֵ�涨
////�ı���������bubble_sort�ķ���ֵ����Ϊvoid*
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;//buf1Ϊchar*���ͣ�*buf1Ϊchar����
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void*e1, void*e2))
//{
//	int i = 0;//����
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;//�Ƚϴ���
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//��Ԫ�صıȽ�
//			//baseΪ��Ԫ�ص�ַwidthΪ���
//			//base+width���ڵڶ���Ԫ�صĵ�ַ
//			//��Ԫ�رȽϣ��Ƚϵ������ڵ�����Ԫ�صĴ�С
//			//��j=0��ʼ��base+i*width���ǵ�i+1��Ԫ�صĵ�ַ
//			//base+(i+1)*width���ǵ�i+2��Ԫ�صĵ�ַ
//			if (cmp((char*)base+i*width,(char*)base+(i+1)*width)>0)
//			{
//				Swap(((char*)base+i*width),((char*)base+(i+1)*width),width);//ð���㷨����ǰһ���Ⱥ�һ���󣬼�����ֵ�����㣬�򽻻���Ԫ�ص�����
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