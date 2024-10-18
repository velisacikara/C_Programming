
#include <stdio.h>

/* Ders 199 Byte Alignment*/
/*************************************************/

/*��lemcinin kendine ait bir kelime uzunlu�u vard�r.
Tan�mlanan de�i�ken ka� byte olursa olsun derleyici kendi tan�mlanm�� byte de�eri kadar yer ay�r�r.
�rne�in char 1 byte olmas�na ra�men derleyici onun i�in 4 byte yer ay�r�r.
c1 - 1000 adresine,
ival - 1004 adresine,
c2 / 1008 adresine yerle�tirilir.
B�ylece toplamda 1000 - 1011 12 byte yer kullan�lm�� olur.
c1 i�in tan�mlanan 4 byte'l�k yerin 3 byte'� bo�ta kal�r.
Kalan 3 byte'l�k yere int s��maz, oralar bo� kal�r.
Haf�zada hole'ler olu�ur. 
Bunu �nlemek i�in pragma pack(1) kullan�l�r.
Derleyici o hole'leri hizalar, doldurur.
BU HOLE'LER�N OLU�MASINI �NLEMEK ���N #PRAGMA PACK(1) TANIMLAMASI KULLANILIR.
*/

/*    #pragma pack(1)    */

typedef struct {
	char c1; // 4
	int ival; // 4
	char c2; // 4
}Data1; // 12

typedef struct {
	char c1; // 1
	char c2; // 1 (ama sonras�nda int kalan 2 byte'l�k yere s��mayaca�� i�in 4 byte alan harcanm�� olur.)
	int ival; // 4
}Data2; // 8

typedef struct {
	char c1; // 1
	char c2; // 1  (Toplam 4 byter gider, yukar�daki gibi.)
	int ival; // 4
	char c3; // 1 (Toplam 4 byte gider.)
}Data3;


typedef struct {
	char c1; // 1
	char c2; // 1  (Toplam 4 byter gider, yukar�daki gibi.)
	int ival; // 4
	char c3; // 1
	char c4; // 1	(Toplam 4 byte gider.)
}Data4;

typedef struct {
	char c1; // 1
	char c2; // 1  (Toplam 4 byter gider, yukar�daki gibi.)
	int ival; // 4
	char c3; // 1	(Toplam 4 gider.)
	int ival2; // 4
	char c4; // 1	(Toplam 4 byte gider.)
}Data5;


int main()
{
	printf("size of Data: %zu\n", sizeof(Data1));
	printf("size of Data: %zu\n", sizeof(Data2));
	printf("size of Data: %zu\n", sizeof(Data3));
	printf("size of Data: %zu\n", sizeof(Data4));
	printf("size of Data: %zu\n", sizeof(Data5));

	printf("\n\n\n\n");
	
	/* enum Yap�s� */

	typedef enum { n = 20, s = 18, e, w} Direction;
	
	Direction asd = w;

	printf("%d\n", asd);


}