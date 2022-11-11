#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//
//int my_sizof(int arr);
//
//int my_sizof(int arr[])
//{
//    int zs = sizeof(arr) / sizeof(arr[0]);
//    return zs;
//}
//int main()
//{
//    int a = 1;
//    int x = 0;
//    char* p = (char*) & a;
//    if (*p == 1)
//    {
//        x = 1;
//    }
//    int arr[10] = {0};
//    int shuliang = my_sizof(arr);
//    
//    printf("%d\n", shuliang );
//    return 0;
//}

//int main()
//{
//
//	char ch[] = "abcdef";
//		char* p = &ch;
//		printf("%s\n" ,ch);
//		printf("%c\n", *p);
//		return 0;
//
//
//}

//
//int main()
//{
//	char* p = "abcdef";
//	*p = 'w';
//	printf("%c\n", *p);
//	/*printf("%s\n", p);*/
//
//	return 0;
//
//}
//
//int main()
//{
//	char ch[] = "abcdef";
//	char* p = &ch;
//	printf("%s\n", ch);
//	printf("%c\n", *p);// p 指向数组首地址 输出的为 a
//	printf("%s\n", p);// 输出的为整个字符串
//	return 0;
//}
//int main()
//{
//    char* p = "abcdef";
//    printf("%c\n", *p);
//    printf("%s\n", p);
//    return 0;
//}
//int main()
//{
//    char* p = "abcdef";
//    *p = 'w';
//    printf("%c\n", *p);
//    return 0;
//}
//int main()
//{
//    char ch1[] = "abcdef";
//    char ch2[] = "abcdef";
//    char* p1 = "abcdef";
//    char* p2 = "abcdef";
//    if (ch1 == ch2)
//    {
//        printf("T\n");
//    }
//    else {
//        printf("F\n");
//    }
//    if (p1 == p2)
//    {
//        printf("T\n");
//    }
//    else {
//        printf("F\n");
//    }
//    return 0;
//}
//
//char* arr[10];
//char* (* pc)[10] = &arr;
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int(* p)[5] = &arr1;
//	printf("%d\n", *p[2]);
//	return 0;
//}

//int main()
//{
//    int arr1[] = { 1,2,3,4 };
//    int arr2[] = { 2,3,4,5 };
//    int arr3[] = { 3,4,5,6 };
//    int* p[3] = { &arr1, &arr2, &arr3 };
//    int i = 0, j = 0;
////    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 4; j++)
//        {
//            printf("%d ", *p[i] + j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

    //void arr2(int(*p)[4], int x, int y)
    //{
    //    int i = 0, j = 0;
    //    for (i = 0; i < x; i++)
    //    {
    //        
    //        for (j = 0; j < y; j++)
    //        {
    //            printf("%d  ", *(*(p + i) + j));
    //        }
    //        printf("\n");
    //    }
    //}

    //int main()
    //{
    //    int arr[3][4] = { {1,2,3,4},{11,12,13,14},{21,22,23,24} };
    //    arr2(arr, 3, 4);
    //    return 0;
    //}
    //int main()
    //{
    //    int arr[10] = { 1,2,3,4,5,6,7,8,9 };
    //    int sz = sizeof(arr) / sizeof(arr[0]);
    //    printf("%d ", sz);
    //    return 0;
    //}

//void test(int* p, int x)
//{
//    int i = 0;
//    for (i = 0; i < x; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//}
//
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int* p = arr;
//    test(p, sz);
//    return 0;
//}
//
//int Add(int x, int y)
//{
//    int c = x + y;
//    return c;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = Add(a, b);
//    printf("%p\n", &Add);
//    printf("%p\n", Add);
//    return 0;
//}

int Add(int x, int y)
{
    int c = x + y;
    return c;
}
int main()
{
    int a = 10;
    int b = 20;
    int c = Add(a, b);
    printf("%p\n", &Add);//打印Add地址
    printf("%p\n", Add);//打印地址

    int (*pa)(int, int) = Add;//存放Add地址
    printf("%d\n", (*pa)(2, 3));
    return 0;
}