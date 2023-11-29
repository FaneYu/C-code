#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//typedef
//typedef unsigned int u_int;
//int main()
//{
//	 unsigned int a = 0;
//	 u_int b = 2;
//	 a = 10;
//	 b = 20;
//	 printf("%d\n", a);
//	 printf("%d\n", b);
//	return 0;
//}



//static修饰局部变量
//void han()
//{
//	static int b = 0;
//	b++;
//	printf("%d ", b);
//}
//int main()
//{
//	int a = 0;
//	while (a < 5)
//	{
//		han();
//		a++;
//	}
//	return 0;
//}



//static修饰全局变量
//extern int a;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}



//static修饰函数
//extern int sum(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int c = sum(a, b);
//	printf("%d\n", c);
//	return 0;
//}



//define定义的宏
#define num(x, y) ((x) + (y))
int main()
{
	int a = 10;
	int b = 30;
	int c = num(a, b);
	printf("%d\n", c);
	return 0;
}