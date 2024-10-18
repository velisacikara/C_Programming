
#include <stdio.h>
#pragma pack(1)
#include <string.h>


/* Ders 197 */
/*******************************************************************/
#define SIZE 3

typedef struct Student {
	char name[10];
	char surname[10];
	int student_no;
}Student;
/*******************************************************************/

/* Ders 198 */
/*******************************************************************/

typedef struct Family {
	char father_name[10];
	char mother_name[10];
	int number_of_siblings;
}Family;

typedef struct Employee {
	char name[10];
	char surname[10];
	int age;
	Family family_info;
}Employee;
/*******************************************************************/





int main()
{
	/* Ders 197 */
/*******************************************************************/

	Student sinif_8a[SIZE] = { {"Veli", "Sacikara", 1}, {"Ahmet", "Yilmaz", 2}, {"Murat", "Kara", 3} };

	for (int i = 0; i < SIZE; ++i)
		printf("Name: %s Surname: %s, Student No: %d\n", sinif_8a[i].name, sinif_8a[i].surname, sinif_8a[i].student_no);

/*******************************************************************/

/* Ders 198 */
/*******************************************************************/

	printf("\n\n\n\n");
	Employee e1;
	e1.age = 22;
	e1.family_info.number_of_siblings = 1;

	printf("Age: %d\n", e1.age);
	printf("Number of siblings: %d\n", e1.family_info.number_of_siblings);
/*******************************************************************/







}