
#include <stdio.h>
// Bu dosyada nesnelerin �m�r kategorisi ve macro kullan�m� �rnekleri vard�r.

/*
nesnelerin �m�r kategorisi
�� t�r nesne vard�r: 
1. Otomatik �m�rl�: Belli bir kod aral���nda hayata gelip o kod blo�u bittikten sonra hayat� sonlanan nesnelere denir.
2. Statik �m�rl�: Program ba�lar ba�lamaz hayata gelip program sonlanana kadar bulunan nesnelere denir. 
3. Dinamik �m�rl�: �stedi�imiz zaman hayata getirip istedi�imiz zaman sonland�rabilece�imiz nesnelere denir. (Dinamik bellek y�netimi k�sm�nda)
Global k�s�mda tan�mlanan nesneler direkt olarak static nesne �eklinde �retilir. static anahtar kelimesine gerek yoktur.
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
MACRO ve FUNCTION LIKE MACRO �rnekleri

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
#else	bu �� ifade ayn� if - else ile ayn� �ekilde �al���r

# ifdef : Bu ifade 'e�er tan�ml�ysa' anlam�na gelir a�a��da �rne�i vard�r.
# undef : define ile olu�turulan makroyu siler.
#ifndef : if not defined anlam�na gelir.

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
