//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int i=0;
//	char x;
//	printf("Enter a string:");
//	while((x=getchar())!='\n')
//    {
//        if(i==0)
//        {
//            i=1;
//            printf("Digit=");
//        }
//        printf("%d",x-'0');
//    }
//	return 0;
//
//}
#include<stdio.h>
#define N 10
void fun(int* p)
{
	int i;
	int j;
	int minLndex = 0;
	int min;
	int maxLindex = 0;
	int max;
	for (i = 1,min = *p; i < N; i++)
	{
		if (min > *(p + i))
		{
			min = *(p + i);
			minLndex = i;
		}
	}
	for (j= 1,max = *p; j< N; j++)
	{
		if (max < *(p + j))
		{
			max = *(p + j);
			maxLindex = j;
		}
	}
	printf("max=%d,i=%d\n", *(p + maxLindex), maxLindex);
	printf("min=%d,j=%d\n", *(p + minLndex), minLndex);
}
int main()
{
    int i;
	int a[N];
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	fun(a);
}
