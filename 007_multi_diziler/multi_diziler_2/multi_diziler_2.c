
#include <stdio.h>

#define	ROW_SIZE	5
#define COL_SIZE	3

int main()
{
	//int value = 0;
	int a[ROW_SIZE][COL_SIZE] = { 0 };

	for (int row = 0; row < ROW_SIZE; ++row)
	{
		//value = row;
		for (int col = 0; col < COL_SIZE; ++col)
			//a[row][col] = value++;
			a[row][col] = row + col;
	}

	for (int row = 0; row < ROW_SIZE; ++row)
	{
		for (int col = 0; col < COL_SIZE; ++col)
			printf("%d	", a[row][col]);
		printf("\n");
	}


}
