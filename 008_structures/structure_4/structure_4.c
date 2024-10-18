
#include <stdio.h>

/* Ders 199 Byte Alignment*/
/*************************************************/

/*Ýþlemcinin kendine ait bir kelime uzunluðu vardýr.
Tanýmlanan deðiþken kaç byte olursa olsun derleyici kendi tanýmlanmýþ byte deðeri kadar yer ayýrýr.
Örneðin char 1 byte olmasýna raðmen derleyici onun için 4 byte yer ayýrýr.
c1 - 1000 adresine,
ival - 1004 adresine,
c2 / 1008 adresine yerleþtirilir.
Böylece toplamda 1000 - 1011 12 byte yer kullanýlmýþ olur.
c1 için tanýmlanan 4 byte'lýk yerin 3 byte'ý boþta kalýr.
Kalan 3 byte'lýk yere int sýðmaz, oralar boþ kalýr.
Hafýzada hole'ler oluþur. 
Bunu önlemek için pragma pack(1) kullanýlýr.
Derleyici o hole'leri hizalar, doldurur.
BU HOLE'LERÝN OLUÞMASINI ÖNLEMEK ÝÇÝN #PRAGMA PACK(1) TANIMLAMASI KULLANILIR.
*/

/*    #pragma pack(1)    */

typedef struct {
	char c1; // 4
	int ival; // 4
	char c2; // 4
}Data1; // 12

typedef struct {
	char c1; // 1
	char c2; // 1 (ama sonrasýnda int kalan 2 byte'lýk yere sýðmayacaðý için 4 byte alan harcanmýþ olur.)
	int ival; // 4
}Data2; // 8

typedef struct {
	char c1; // 1
	char c2; // 1  (Toplam 4 byter gider, yukarýdaki gibi.)
	int ival; // 4
	char c3; // 1 (Toplam 4 byte gider.)
}Data3;


typedef struct {
	char c1; // 1
	char c2; // 1  (Toplam 4 byter gider, yukarýdaki gibi.)
	int ival; // 4
	char c3; // 1
	char c4; // 1	(Toplam 4 byte gider.)
}Data4;

typedef struct {
	char c1; // 1
	char c2; // 1  (Toplam 4 byter gider, yukarýdaki gibi.)
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
	
	/* enum Yapýsý */

	typedef enum { n = 20, s = 18, e, w} Direction;
	
	Direction asd = w;

	printf("%d\n", asd);


}