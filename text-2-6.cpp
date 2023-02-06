#include <stdio.h>
//前置/后置++--
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("%d\n",b);
//	printf("%d\n",a);
//	return 0;
//}


//三目操作符
//int main()
//{
//	int a=0;
//	int b=1;
//	int max=0;
//	max = a>b ? a : b;
//	printf("%d\n",max);
//	
//	return 0;
//}


//static修饰局部变量

void one()
{
	static int a=1;
	a++;
	printf("%d,",a);
	
}
int main()
{
	int l = 0;
	while(l<5)
	{
		one();
		
		l++;
	}
	return 0;
}
