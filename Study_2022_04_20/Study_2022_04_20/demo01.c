#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ʶ�ṹ��-���Դ������µ�����
//����һ����
//struct Book
//{
//	char name[10];
//	float price;
//	int id;
//};
//int main()
//{
//	struct Book b = { "��մ�",23.5,123123 };//�ṹ��Ĵ����ͳ�ʼ��
//	printf("%s %f %d\n", b.name, b.price, b.id);//�ṹ�����.��Ա����
//	struct Book* p = &b;
//
//	printf("%s %f %d\n",(*p).name,(*p).price,(*p).id);//�ڶ���д��
//
//	printf("%s %f %d\n", p->name, p->price, p->id);//������д��  �ṹ��ָ�� -> ��Ա������
//
//
//	return 0;
//}
//-------------------------------------------------------------------------------------------------------------

//getchar()��putchar()
//int main()
//{
//	int ch = getchar();
//	putchar(ch);//���һ���ַ�
//	return 0;
//}
//-------------------------------------------------------------------------------------------------------------


//����n!
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf_s("%d", &n);
//	for(i = n; i > 1; i--)
//	{
//		sum *=i ;
//	}
//	printf("%d", sum);
//	return 0;
//}
//-------------------------------------------------------------------------------------------------------------


//���� 1! + 2! + ...... + 10!
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int value = 0;
//	for (i = 10; i > 0; i--)
//	{
//		int sum = 1;
//		for (j = i; j > 0; j--)
//		{
//			sum *= j;
//		}
//		value += sum;
//	}
//	printf("%d\n", value);
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------


//�ڶ���
//int main()
//{
//	int i = 0;
//	int j = 1;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j = j * i;
//		sum = sum + j;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//���ֲ���
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if(arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�±�Ϊ = %d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("������\n");
		}
	}
	return 0;
}






















































































































