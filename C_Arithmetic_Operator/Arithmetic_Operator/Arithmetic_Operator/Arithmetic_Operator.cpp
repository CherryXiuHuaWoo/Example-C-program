// Arithmetic_Operator.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int i = 0, j = 0;
	int n = 0, m = 0;

	//Example 1 : i++
	printf(" Example 1： i++\r\n");
	printf(" i   = %2d\r\n", i);	
	printf(" i++ = %2d\r\n", i++);	//先使用 i 做输出，再 i = i + 1
	printf(" After i++, i = %2d\r\n", i);	

	//Example 2 : ++j
	printf("\r\n Example 2： ++j\r\n");
	printf(" j   = %2d\r\n", j);
	printf(" ++j = %2d\r\n", ++j);	//先 j = j + 1，再使用 j 做输出
	printf(" After ++j, j = %2d\r\n", j);

	//Example 3 : n--
	printf("\r\n Example 3： n--\r\n");
	printf(" n   = %2d\r\n", n);
	printf(" n-- = %2d\r\n", n--);	//先使用 n 做输出，再 n = n + 1
	printf(" After n--, n = %2d\r\n", n);

	//Example 4 : --m
	printf("\r\n Example 4： --m\r\n");
	printf(" m   = %2d\r\n", m);
	printf(" --m = %2d\r\n", --m);	//先 m = m - 1，再使用 m 做输出
	printf(" After --m, m = %2d\r\n", m);

	getchar();
    return 0;
}

