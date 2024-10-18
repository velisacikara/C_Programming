
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define		SIZE		10

int main()
{
	/*
	NOT: Rastgele sayý üretme
	Aþaðýdaki kod bloðu 0 ile 100 arasýnda rastgele sayýlar üretmektedir.
	*/
	/*
	srand(time(NULL));
	int random_number = rand() % 100;
	*/

	int first_array[SIZE];
	int second_array[SIZE];

	for (int i = 0; i < SIZE; ++i) // Ýlk diziye rastgele eleman atama iþlemi
	{
		first_array[i] = rand() % 50;
	}

	for (int i = 0; i < SIZE; ++i) // ilk diziyi ikinci diziye kopyalama iþlemi
	{
		second_array[i] = first_array[i];
	}

	for (int i = 0; i < SIZE; ++i) // oluþturulan dizileri ekrana yazdýrma iþlemi
	{
		printf("first_array[%d] = %d	second_array[% d] = % d\n", i, first_array[i], i, second_array[i]);
	}

}