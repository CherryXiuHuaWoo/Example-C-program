// C_variable-length_Array.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

/*
 * Function: Create a variable-length Array,VLA
 *			 The Array Length is the input parameter ArrayLength.
 */
void CreateVariableLengthArray(int ArrayLength)
{
	int A_array[ArrayLength];
	int i = 0;

	printf("A_array[%d] = {", ArrayLength);

	for (i = 0; i < ArrayLength; i++)
	{
		A_array[i] = i;
		printf("%d, ", A_array[i]);
	}
	printf("}\r\n");
}


int main()
{
	char arraylength = 0;

	printf("Enter the length of Array:\r\n");

	scanf_s("%c", &arraylength, 10);
	CreateVariableLengthArray(arraylength);

	getchar();
    return 0;
}

