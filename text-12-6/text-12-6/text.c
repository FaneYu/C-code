#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ASCII码形式存储
//int main()
//{
//    int acc[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int sz = 0;
//    sz = sizeof(acc) / sizeof(acc[0]);
//    int i = 0;
//    while (i < sz)
//    {
//        printf("%c", acc[i]);
//        i++;
//    }
//    return 0;
//}



//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    scanf("%4d%2d%2d", &year, &month, &date);
//    printf("year=%d\n", year);
//    printf("month=%02d\n", month);
//    printf("date=%02d\n", date);
//    return 0;
//}



//依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩
//int main()
//{
//    int id = 0;
//    float c = 0.0f;
//    float much = 0.0f;
//    float eng = 0.0f;
//    scanf("%d;%f,%f,%f", &id, &c, &much, &eng);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, much, eng);
//    return 0;
//}



//输出printf(“Hello world!”)的返回值
//int main()
//{
//    int n = printf("Hello world!");
//    printf("\n%d\n", n);
//    return 0;
//}



//输出C和C++输出Hello world的代码
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;\n");
//    return 0;
//}



//获得4个最大数，编程找到最大的数
//int main()
//{
//    int arr[4] = { 0 };
//    int i = 0;
//    while (i < 4)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//    }
//    int max = arr[0];
//    i = 1;
//    while (i < 4)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//        i++;
//    }
//    printf("%d\n", max);
//    return 0;
//}



//给定一个球体的半径，计算其体积
//int main()
//{
//    double n = 0;
//    double V = 0;
//    scanf("%lf", &n);
//    V = 4 / 3.0 * 3.1415926 * n * n * n;
//    printf("%.3lf\n", V);
//    return 0;
//}



//计算BMI指数
int main()
{
    int weight = 0;
    int high = 0;
    scanf("%d %d", &weight, &high);
    float BMI = 0.0f;
    BMI = weight / (high / 100.0) / (high / 100.0);
    printf("%.2f\n", BMI);
    return 0;
}