
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define		SIZE		10

int main()
{
	/*
	NOT: Rastgele say� �retme
	A�a��daki kod blo�u 0 ile 100 aras�nda rastgele say�lar �retmektedir.
	*/
	/*
	srand(time(NULL));
	int random_number = rand() % 100;
	*/

	int first_array[SIZE];
	int second_array[SIZE];

	for (int i = 0; i < SIZE; ++i) // �lk diziye rastgele eleman atama i�lemi
	{
		first_array[i] = rand() % 50;
	}

	for (int i = 0; i < SIZE; ++i) // ilk diziyi ikinci diziye kopyalama i�lemi
	{
		second_array[i] = first_array[i];
	}

	for (int i = 0; i < SIZE; ++i) // olu�turulan dizileri ekrana yazd�rma i�lemi
	{
		printf("first_array[%d] = %d	second_array[% d] = % d\n", i, first_array[i], i, second_array[i]);
	}

}