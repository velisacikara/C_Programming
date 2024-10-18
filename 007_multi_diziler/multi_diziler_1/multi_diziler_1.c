
#include <stdio.h>

#define	ROW_SIZE	4
#define COL_SIZE	3

int main()
{
	int a[ROW_SIZE][COL_SIZE] = { {1,2,3},
				   {4,5,6},
				   {7,8,9},
				   {10,11,12} };

	for (int row = 0; row < ROW_SIZE; ++row)
	{
		for (int col = 0; col < COL_SIZE; ++col)
			printf("a[%d][%d] = %d	", row, col, a[row][col]);
		printf("\n\n");
	}
}
