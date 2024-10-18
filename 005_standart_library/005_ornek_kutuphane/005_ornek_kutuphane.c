
#include <stdio.h>
#include"MyLibrary.h"

int main()
{
	printf("****Kendi .h uzantili dosyamizi olusturmak****\n");
	printf("Kullanilan fonksiyonlar olusturulan dosyalardan gelmektedir.\n");
	printf("%d\n", Find_Max(5, 3));
	printf("%d! = %d\n", 5, Find_Factorial(5));


	return 0;
}
