#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ASCII����ʽ�洢
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



//����һ���˵ĳ������ڣ����������գ������������е��ꡢ�¡��շֱ������
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



//��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ�������Ļ�������ѧ����ѧ�ţ�3�Ƴɼ�
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



//���printf(��Hello world!��)�ķ���ֵ
//int main()
//{
//    int n = printf("Hello world!");
//    printf("\n%d\n", n);
//    return 0;
//}



//���C��C++���Hello world�Ĵ���
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;\n");
//    return 0;
//}



//���4�������������ҵ�������
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



//����һ������İ뾶�����������
//int main()
//{
//    double n = 0;
//    double V = 0;
//    scanf("%lf", &n);
//    V = 4 / 3.0 * 3.1415926 * n * n * n;
//    printf("%.3lf\n", V);
//    return 0;
//}



//����BMIָ��
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