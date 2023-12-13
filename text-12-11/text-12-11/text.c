#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//演示多个字符从两端移动，向中间汇聚
//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "ming tian hui geng hao!";
//	char arr2[] = "***********************";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}



//简单模拟用户登录情景，最多输入三次
//#include <string.h>
//int main()
//{
                                 	//假设密码是abcdef
//	char password[6] = { 0 };
//	int a = 0;
//	for (a = 0; a < 3; a++)
//	{
//		printf("请输入密码：");
//		scanf("%s", &password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登录成功！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误,\n");
//		}
//	}
//	if (a == 3);
//	{
//		printf("输入次数过多，已退出程序。\n");
//	}
//	return 0;
//}



//猜数字游戏
//#include <stdlib.h>
//#include <time.h>
//void mune()
//{
//		printf("***************************\n");
//		printf("*******   1. play   *******\n");
//		printf("*******   0. exit   *******\n");
//		printf("***************************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	int num = rand() % 100 + 1;                     //猜1--100之间的数字
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > num)
//		{
//			printf("猜大了！\n");
//		}
//		else if (guess < num)
//		{
//			printf("猜小了！\n");
//		}
//		else
//		{
//			printf("猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int inpute = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		mune();
//		printf("请选择： ");
//		scanf("%d", &inpute);
//		switch (inpute)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏。\n");
//			break;
//		dafault:
//			printf("选择错误，重新选择。\n");
//			break;
//		}
//	} while(inpute);
//	return 0;
//}



//goto 语句
int main()
{
    int a = 0;
    int i = 0;
    int b = 0;
    for (i = 1; i <= 10; i++)
    {
        for (a = 0; a < 20; a++)
        {
            for (b = 1; b <= 100; b++)
            {
                if (b == 5)
                    goto sex;
            }
        }
    }
sex:
    printf("hello world!\n");
    return 0;
}