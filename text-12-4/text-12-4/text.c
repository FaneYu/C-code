#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���1-100֮�������
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



//if else���
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 30)
//		printf("����\n");
//	else if (age >= 30 && age < 50)
//		printf("����\n");
//	else
//		printf("����\n");
//	return 0;
//}



//switch���
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("��һ\n");
//		break;
//	case 2:
//		printf("�ܶ�\n");
//		break;
//	case 3:
//		printf("����\n");
//		break;
//	case 4:
//		printf("����\n");
//		break;
//	case 5:
//		printf("����\n");
//		break;
//	case 6:
//		printf("����\n");
//		break;
//	case 7:
//		printf("����\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}



//while���
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