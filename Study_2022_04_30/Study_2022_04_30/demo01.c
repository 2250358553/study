#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����һ�������������ж��ٸ�1����������㣩
// ��bug,���ܼ��㸺���Ķ�����
//int number(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//�Ż�----------------
//int number(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//�Ż�--------------n & (n - 1)
//int number(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d ",number(a));
//	return 0;
//}

//дһ���������ж��ǲ���2��n�η�

//void number(int n)
//{
//	if ((n!=0) && (n & (n - 1)) == 0)
//	{
//		printf("��");
//	}
//	else
//		printf("����");
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	number(a);
//	return 0;
//}

//дһ�������������������Ķ�����λ��ͬ�ĸ���
//int number_a(int x, int y)
//{
//	int count = 0;
//	int ret = x ^ y;//���Ȼ������м���1�����м�����ͬ��
//	return number(ret);
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	printf("%d", number_a(n, m));
//	return 0;
//}


//дһ����������ӡ�����������λ�е�����λ��ż��λ
//void number_b(int n)
//{
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	number_b(a);
//	return 0;
//}
//-----------------------------------------------------------------------------------------------------------------

//��������������С������
//int number_min(int x, int y)
//{
//	int temp = 0;
//	int min = x > y ? x : y;
//	if (x > y)
//	{
//		temp = y;
//		y = x;
//		x = temp;
//	}
//	while ((min % x) != 0 || (min % y) != 0)
//	{
//		min++;
//	}
//	return min;
//}

//�Ż�---------------------------
//int number_min(int x, int y)
//{
//	int i = 1;
//	while ((x * i) % y != 0)
//	{
//		i++;
//	}
//	return x * i;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", number_min(a, b));
//	return 0;
//}
//--------------------------------------------------------------------------------------------------------------------------


//�����ַ������������øı�������
// I like beijing. --> beijing. like I
//void string_revers(char* left, char* right)
//{
//	//���������������������������������ֵ
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		//���һ�ν����󣬷ֱ����м��ƶ�
//		left++;
//		right--;
//	}
//}
//
//void word_revers(char* parr)
//{
//	
//	while (*parr)
//	{
//		//����һ��parr ��end
//		char* end = parr;
//		//�ҵ��ո���߽�����־��ͣ��
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		//������ĵ��ʽ���string_revers��ת
//		string_revers(parr, end - 1);
//		//�ж��Ƿ�Ҫ�����ƶ�
//		if (*end == ' ' && *end != '\0')
//		{
//			//��תһ�����ʺ�����������������һ����������ĸ
//			parr = end + 1;
//		}
//		else
//		{
//			//�ҵ�������־������ֵ��parr
//			parr = end;
//		}
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	//���ַ�����ת
//	//like you --> uoy ekil
//	string_revers(arr,arr+len-1);
//	//�����ʷ�ת
//	word_revers(arr);
//	printf("%s", arr);
//	return 0;
//}
//--------------------------------------------------------------------------------------------------------------------------


int main()
{
	int a = 10;
	//00000000 00000000 00000000 00001010
	//00		00			00		0a
	//128
	//00000000000000000000000010000000
	//
	return 0;
}







