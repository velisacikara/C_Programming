

#include <stdio.h>

#define	SIZE	5

int main()
{
	int a[SIZE] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < SIZE; i++)
	{
		printf("a[%d] = %d ", i, a[i]);
	}	
	printf("\n");
	printf("\n");

	for (int i = 0, temp = 0; i < SIZE / 2; i++)
	{
		temp = a[SIZE - i - 1];
		a[SIZE - i -1] = a[i];
		a[i] = temp;
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("a[%d] = %d ", i, a[i]);
	}
	printf("\n");
	printf("\n");



	return 0;
}