#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ʾ����ַ��������ƶ������м���
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



//��ģ���û���¼�龰�������������
//#include <string.h>
//int main()
//{
                                 	//����������abcdef
//	char password[6] = { 0 };
//	int a = 0;
//	for (a = 0; a < 3; a++)
//	{
//		printf("���������룺");
//		scanf("%s", &password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��¼�ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("�������,\n");
//		}
//	}
//	if (a == 3);
//	{
//		printf("����������࣬���˳�����\n");
//	}
//	return 0;
//}



//��������Ϸ
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
//	int num = rand() % 100 + 1;                     //��1--100֮�������
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess > num)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else if (guess < num)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else
//		{
//			printf("�¶��ˣ�\n");
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
//		printf("��ѡ�� ");
//		scanf("%d", &inpute);
//		switch (inpute)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		dafault:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while(inpute);
//	return 0;
//}



//goto ���
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