#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//选择语句
//int main()
//{
//	int input = 0;
//	printf("要好好敲代码吗?(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("会获得一个好offer。\n");
//	}
//	else
//	{
//		printf("会回家种地。\n");
//	}
//	return 0;
//}


//循环语句
//int main()
//{
//	int fine = 0;
//	while (fine < 20000)
//	{
//		printf("写代码:%d\n",fine);
//		fine++;
//	}
//	if (fine == 20000)
//	{
//		printf("成为大牛\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//	return 0;
//}



//函数
//int arr(int x, int y)
//{
//	return (x + y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = arr(a, b);
//	int c = 100;
//	int d = 200;
//	int kfc = arr(c, d);	
//	printf("%d\n", sum);
//	printf("%d\n", kfc);
//	return 0;
//}


//数组
int main()
{
	int tof[5] = { 10,11,12,13,14 };
	    //printf("%d\n", tof[4]);
	int a = 0;
	while (a < 5)
	{
		printf("%d ", tof[a]);
		a = a + 1;
	}
	return 0;
}



