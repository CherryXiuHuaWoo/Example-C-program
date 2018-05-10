// C_String.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string.h"

#define CharA	'a'
#define StringA "a"
#define StringB "Hello World!"

int main()
{
	int i;

	printf("Length of Char \'%c\' is %d.\r\n", CharA, sizeof(CharA) / sizeof(char));

	printf("string \"%s\" Memory Utilization:\r\n");
	for (i = 0; i < sizeof(StringA) / sizeof(char); i++)
	{
		printf("\'%c\',", &StringA + i);
	}
	printf("\r\nLength of string \"%s\" is %d.\r\n", StringA, sizeof(StringA) / sizeof(char));
	printf("Length of string \" %s\" is %d.\r\n", StringB, sizeof(StringB) / sizeof(char));

	getchar();
    return 0;
}

