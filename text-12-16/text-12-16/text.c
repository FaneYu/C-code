#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//дһ�����������ҳ����������е����ֵ
//int max(int x, int y)
//{
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = max(a, b);
//	printf("%d\n", c);
//	return 0;
//}



//дһ���������Խ����������ͱ���������
//void xof(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰa=%d,b=%d\n", a,b);
//	xof(&a, &b);
//	printf("������a=%d,b=%d\n", a,b);
//	return 0;
//}



//дһ�������ж�һ�����ǲ�������
#include <math.h>
int ofeh(int x)
{
	int y = 0;
	for (y = 2; y <= sqrt(x); y++)
	{
		if (x % y == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	if (ofeh(i) == 1)
	{
		printf("%d������\n",i);
	}
	else
	{
		printf("%d��������\n", i);
	}
	return 0;
}