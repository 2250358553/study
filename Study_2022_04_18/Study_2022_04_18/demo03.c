#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//typedef�ؼ���--�����ض���
//typedef unsigned int u8;
//int main()
//{
//	unsigned int a = 10;
//	u8 a = 10;//�������һģһ��
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------


//�ؼ���static--��̬��	���ξֲ�����	����ȫ�ֱ���	���κ���
void test()
{
	static int a = 1;//�ı��˱���a���������ڣ��������Ǹı��˱���a�Ĵ洢����
	a++;
	printf("%d ", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}












