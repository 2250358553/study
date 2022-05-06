#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>

//��̬�ڴ濪�� - malloc
//int main()
//{
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ", *(p + j));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//��̬�ڴ���� - calloc
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	free(p);
//	p = NULL;	
//}

//��̬�ڴ濪�� - realloc
int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		perror("main");
		return 0;
	}
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	//�ռ䲻����������10��int�Ĵ�С
	int* newp = (int*)realloc(p, 10 * sizeof(int));
	if (newp != NULL)
	{
		p = newp;
	}
	free(p);
	p = NULL;
}
























