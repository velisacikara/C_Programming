
#include <stdio.h>
// Bu dosyada nesnelerin ömür kategorisi ve macro kullanýmý örnekleri vardýr.

/*
nesnelerin ömür kategorisi
Üç tür nesne vardýr: 
1. Otomatik Ömürlü: Belli bir kod aralýðýnda hayata gelip o kod bloðu bittikten sonra hayatý sonlanan nesnelere denir.
2. Statik Ömürlü: Program baþlar baþlamaz hayata gelip program sonlanana kadar bulunan nesnelere denir. 
3. Dinamik Ömürlü: Ýstediðimiz zaman hayata getirip istediðimiz zaman sonlandýrabileceðimiz nesnelere denir. (Dinamik bellek yönetimi kýsmýnda)
Global kýsýmda tanýmlanan nesneler direkt olarak static nesne þeklinde üretilir. static anahtar kelimesine gerek yoktur.
*/
/*
int f1()
{
	int x = 10;
	printf("f1 icindeki static olmayan x = %d\n", x);
	++x;
}

int f2()
{
	static 	int x = 10;
	printf("f2 icindeki static olan x = %d\n", x);
	++x;
}

int main()
{
	printf("Automatic Storage Duration\n");
	f1();
	f1();
	f1();
	f1();
	printf("\nStatic Storage Duration\n");
	f2();
	f2();
	f2();
	f2();
}
*/


/*
MACRO ve FUNCTION LIKE MACRO Örnekleri

*/
/*
#define	SIZE	50	// macro
#define	FALSE	0
#define	TRUE	1
#define	NEW_LINE "\n"

#define max_bul(a,b)	((a>b)?(a):(b))	// function like macro

int main()
{
	printf(NEW_LINE);
	printf("max value: %d", max_bul(5, 3));
	printf(NEW_LINE);
	printf(NEW_LINE);
	printf("max value: %.f", max_bul(2.3, 4.4));
	printf(NEW_LINE);
	printf(NEW_LINE);
}
*/

/*
Conditional Compiling
#if 
#elif
#else	bu üç ifade ayný if - else ile ayný þekilde çalýþýr

# ifdef : Bu ifade 'eðer tanýmlýysa' anlamýna gelir aþaðýda örneði vardýr.
# undef : define ile oluþturulan makroyu siler.
#ifndef : if not defined anlamýna gelir.

*/

/*
#define	VERSION	8

int main()
{

#if VERSION>0 && VERSION<=5
	printf("VERSION 0 ile 5 arasinda: %d", VERSION);
#elif VERSION>5 && VERSION<=10
	printf("VERSION 5 ile 10 arasinda: %d", VERSION);
#elif VERSION>10 && VERSION<=15
	printf("VERSION 10 ile 15 arasinda: %d", VERSION);
#else
	printf("VERSION 0 ile 15 arasinda degil: %d", VERSION);

#endif

}
*/

#define STM32F4_DISCOVERY

//#undef	STM32F4_DISCOVERY


int main()
{
#ifdef STM32F4_DISCOVERY
	printf("Microcontroller is running.");

#else
	printf("Another Microcontroller is running.");


#endif

}
