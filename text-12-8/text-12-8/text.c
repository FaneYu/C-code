#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算1！+ 2！+ 3！+ 4！+ ... + 10！
//int main()
//{
//	int i = 0;
//	int x = 1;
//	int sum = 1;
//	int ret = 0;
//	for (x = 1; x <= 10; x++)
//	{
//		sum = 1;
//		for (i = 1; i <= x; i++)
//		{
//			sum = sum * i;
//		}
//		ret = sum + ret;
//	}
//	printf("%d ", ret);
//	return 0;
//}



//for循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 6)
//			continue;
//		if (i == 6)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}



//do while循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		/*if (i == 6)
//		{
//			break;
//		}*/
//		i++;
//		if (i == 6)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	} while (i <= 10);
//	return 0;
//}



//二分查找法
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 9;
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < i)
		{
			left = mid + 1;
		}
		else if (arr[mid] > i)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标为：%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到。\n");
	return 0;
}