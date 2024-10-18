// operators-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	printf("Operators-2\n\n");
	/*
	for içinde oluþturulan deðiþkenler sadece for döngüsü içinde kullanýlýr.
	Sonradan döngü dýþýnda iken ayný isimde deðiþken oluþturulabilir.
	*/

	/*
	for (int i = 1, sum = 0; i < 5; i++)
	{
		sum += i;
		printf("i = %d - sum = %d\n",i, sum);
	}
	*/



	/*
	ternary operator
	üç operandý var
	exp1 ? exp2 : exp3
	exp1 herhangi bir true ya da false deðeri olan bir koþul
	exp2 koþul doðruysa yapýlacak iþlem
	exp3 koþul yanlýþsa yapýlacak iþlem
	*/
	
	/*
	printf("\n\nBuyuk olan sayiyi bulma\n\n");

	int x = 210, y = 20;

	int buyuk_sayi = (x > y ? x : y);
	printf("Buyuk sayi: %d\n\n", buyuk_sayi);
	

	int a = 10, b = 30;
	printf("\nBuyuk sayi = %d\n\n", (a > b ? a : b));
	*/
	/*
	int i = 0;

	i = (i == 0 ? 100 : 200);
	printf("\ni = %d\n\n", i);
	*/

	/*
	int k = 10;
	k = (k == 5 ? printf("True\n\n") : printf("False\n\n"));

	*/

	/*
	int c = 16;
	float f = 4.4;
	printf("sizeof(c) = %zu\n", sizeof(c));
	printf("sizeof(int) = %zu\n", sizeof(int));
	printf("sizeof(signed int) = %zu\n", sizeof(signed int));
	printf("sizeof(unsigned int) = %zu\n", sizeof(unsigned int));
	printf("sizeof(f) = %zu\n", sizeof(f));
	printf("sizeof(float) = %zu\n", sizeof(float));
	printf("sizeof(double) = %zu\n", sizeof(double));
	printf("sizeof(c+f) = %zu\n", sizeof(c+f));

	*/



}
