#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ػ�����
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char sr[10] = 0;
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣺���ĵ��Ի���60��ػ��������룺��������ȡ���ر�\n");
//	scanf("%s", sr);
//	if (strcmp(sr, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("��ȡ���ػ�\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}



//strcpy
//#include <string.h>
//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}



//memset
#include <string.h>
int main()
{
	char arr[] = "hello world!";
	memset(arr, '*', 5);
	printf("%s", arr);
	return 0;
}