#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输出1-100之间的奇数
//int main()
//{
//	int num = 0;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//			printf("%d ", num);
//		num++;
//	}
//	return 0;
//}



//if else语句
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 30)
//		printf("成年\n");
//	else if (age >= 30 && age < 50)
//		printf("中年\n");
//	else
//		printf("老年\n");
//	return 0;
//}



//switch语句
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("周一\n");
//		break;
//	case 2:
//		printf("周二\n");
//		break;
//	case 3:
//		printf("周三\n");
//		break;
//	case 4:
//		printf("周四\n");
//		break;
//	case 5:
//		printf("周五\n");
//		break;
//	case 6:
//		printf("周六\n");
//		break;
//	case 7:
//		printf("周日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}



//while语句
int main()
{
	int a = 1;
	while (a <= 10)
	{
		//if (a == 7)
		//	break;
		//printf("%d ", a);
		//a++;
		a++;
		if (a == 7)
			continue;
		printf("%d ", a);
	}
	return 0;
}