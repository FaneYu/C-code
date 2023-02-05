#include <stdio.h>

//复习
//int main()
//{
//	printf("(xue xi?)");
//	return 0;
//}

//验证转义字符\a
//int main()
//{
//	printf("\a");
//	return 0;
//}

//初识选择语句
//int main()
//{
//	int input = 0;
//	printf("规划每天的内容\n");
//	printf("要不要自律（1/0)");
//	scanf("%d",&input);
//	
//	if(input == 1)
//	    printf("获得好身材\n");
//	else
//	    printf("获得一个啤酒肚\n");
//	return 0;
//}

//初识循环语句
//int main()
//{
//	int number = 0;
//	while(number<10000)
//	{
//		printf("做俯卧撑%d次\n",number); 
//		number ++;
//	}
//	if(number == 10000)
//	{
//		printf("获得强大的胸肌和三头\n");
//	}
//	return 0;
//}

//初识函数
//int A(int x, int y)             //创建一个函数方便下面的代码调用
//{
//	int z = 0;
//	z=x+y;
//	
//	return z;
//}
//int B(int c, int d)             //括号内是媒介，对应着下面的num
//{
//	int e = 0;
//	e=c*d;
//	return e;
//}
//
//int main()
//{
//	int num1=0;
//	int num2=0;
//	int num3=0;
//	int num4=0;
//	
//	scanf("%d %d %d %d",&num1, &num2, &num3, &num4);
//	int sum1 = A(num1, num2);
//	int sum2 = B(num3, num4);
//	
//	printf("%d\n",sum1);
//	printf("%d\n",sum2);
//	
//	return 0;
//}

//初识数组
int main()
{
	int one[7] = {3,4,5,6,7,8,9};
	int i = 0;                 //代表下标
	while(i<7)                 //代表个数
	{
		printf("%d,",one[i]);
		
		i ++;
		
	}
	return 0;
}
