// C_One-Dimensional_Array.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


char g_A_Array[] = {0, 1, 2, 3, 4, 5};
char g_B_Array[10] = {0, 1, 2, 3, 4, 5};
char g_C_Array[10] = { 0 };
int main()
{
	/*g_A_Array*/
	printf("g_A_Array's length is %d\r\n", sizeof(g_A_Array));

	printf("g_B_Array[%d] = {", sizeof(g_B_Array));
	for (int i = 0; i < sizeof(g_B_Array); i++)
	{
		if (i == (sizeof(g_B_Array) - 1))
		{
			printf("%d", g_B_Array[i]);
		}
		else
		{
			printf("%d, ", g_B_Array[i]);
		}
		
	}
	printf("}\r\n");

	printf("g_C_Array[%d] = {", sizeof(g_C_Array));
	for (int i = 0; i < sizeof(g_C_Array); i++)
	{
		if (i == (sizeof(g_C_Array) - 1))
		{
			printf("%d", g_C_Array[i]);
		}
		else
		{
			printf("%d, ", g_C_Array[i]);
		}
	}
	printf("}\r\n");

	getchar();
    return 0;
}

