// Relational_Operator.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdlib.h>

#define ARRAY_LENGTH	8
int main()
{
	int a[ARRAY_LENGTH] = { 0 };
	int temp = 0;

	printf(" 起泡法排序\r\n The original Array: a[%d] = {", ARRAY_LENGTH);
	for (int i = 0; i < ARRAY_LENGTH; i++)
	{
		a[i] = rand();	//生产随机数
		if (i == ARRAY_LENGTH - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("}\r\n");

	for(int j = 0; j < ARRAY_LENGTH - 1; j++)
	{
		for(int k = 0; k < ARRAY_LENGTH - j - 1; k++)
		{
			temp = a[k];

			//每次将相邻两个数比较，将小的调到前头。
			if (a[k] > a[k + 1])	
			{
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}

		//每排序一次，打印一次结果。
		printf(" Time%d: a[%d] = {", j, ARRAY_LENGTH);
		for (int i = 0; i < ARRAY_LENGTH; i++)
		{
			if (i == ARRAY_LENGTH - 1)
			{
				printf("%d", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
		}
		printf("}\r\n");
	}
	getchar();
    return 0;
}

