
#include"MyLibrary.h"

int Find_Max(int n1, int n2)
{
	if (n1 > n2)
		return n1;
	return n2;
}

int Find_Factorial(int num)
{
	int result = 1;
	while (num > 1)
		result *= num--;
	return result;
}
