#include <stdio.h>

#pragma pack(1)


/* Ders 195 */
/*******************************************************************************/
typedef struct Student {
	char m_name[20];
	char m_surname[20];
	int m_mathexams[3];
	int m_studentno;
}Student;

void print_structure(Student a)
{
	printf("Name: %s\nSurname: %s\n", a.m_name, a.m_surname);
	printf("Math Exams: %d, %d, %d\n", a.m_mathexams[0], a.m_mathexams[1], a.m_mathexams[2]);
	printf("Student No: %d\n", a.m_studentno);
	printf("\n\n");
}

void print_structure_with_pointer(const Student* ptra)
{/*const anahtar kelimesi sturct elemanlarýnda deðiþiklik yapýlmayacaðý zaman eklenir.
 Elemanlarda herhangi bir deðiþiklik veya güncelleme yapýlamaz.*/

	printf("Name: %s\nSurname: %s\n", ptra->m_name, ptra->m_surname);
	printf("Math Exams: %d, %d, %d\n", ptra->m_mathexams[0], ptra->m_mathexams[1], ptra->m_mathexams[2]);
	printf("Student No: %d", ptra->m_studentno);
	printf("\n\n");
}

/*******************************************************************************/


/* Ders 196 */
/*******************************************************************************/

typedef struct Data {
	int a;
	int b;
}Data;


Data f_return_struct(Data data) // struct return eden fonksiyon
{
	return data;
}

Data* f_return_struct_pointer(const Data* dataptr) // struct adresini return eden fonksiyon
{
	return dataptr;
}

/*******************************************************************************/


int main()
{

/* Ders 195 */
/*******************************************************************************/
	Student s1 = { "Veli", "Sacikara", {70, 80, 90}, 191110063 };

	print_structure(s1);
	Student* ptrs1 = &s1;

	/* Ýkisi de ayný iþlem. Call by Reference yapýsý kullanýldý. */
	print_structure_with_pointer(&s1); // s1'in adresi gönderildi.
	print_structure_with_pointer(ptrs1); // s1'in adresini tutan pointer gönderildi.


	printf("\n\n\n\n");
/*******************************************************************************/

/* Ders 196 */
/*******************************************************************************/
	Data d1 = { 4, 8 };
	printf("%d, %d\n", d1.a, d1.b);
	Data d2 = f_return_struct(d1);
	printf("%d, %d\n", d2.a, d2.b);
	Data* d3ptr = f_return_struct_pointer(&d1);
	printf("%d, %d\n", d3ptr->a, d3ptr->b);

/*******************************************************************************/
}






