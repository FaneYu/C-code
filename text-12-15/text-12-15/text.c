#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//关机程序
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char sr[10] = 0;
//	system("shutdown -s -t 60");
//again:
//	printf("请注意：您的电脑还有60秒关机，若输入：我是猪，则取消关闭\n");
//	scanf("%s", sr);
//	if (strcmp(sr, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("已取消关机\n");
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