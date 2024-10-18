
#include <stdio.h>
//#include <string.h>

struct numbers
{
    int ma;
    int mb;
} n1, n2;


struct Student
{
    char mname[10];
    char msname[10];
    int mmath;
    int mbiology;
} s1 = { "Veli", "Sacikara", 85, 95 }, s2;


typedef struct  person{
    char mname[10];
    char msname[10];
    int mage;

}person, xxx;



typedef struct car {
    int mrenk_kod;
    int mmodel_year;
    int mmotor_power;
}car;



int
main()
{
    n1.ma = 10;
    n1.mb = 20;

    n2 = n1;
    printf("%d %d\n", n1.ma, n1.mb);
    printf("%d %d\n", n2.ma, n2.mb);


    printf("Name: %s, Surname: %s, Math: %d, Biology: %d\n", s1.mname, s1.msname, s1.mmath, s1.mbiology);
    //strcpy(s2.mname, s1.mname);
    s2.mmath = s1.mmath;
    printf("Name: %s, Surname: %s, Math: %d, Biology: %d\n", s2.mname, s2.msname, s2.mmath, s2.mbiology);

    printf("\n\n");




    person p1 = { "Ahmet", "Yilmaz", 40 };
    strcpy(p1.mname, "Mehmet");
    p1.mage = 20;

    printf("Name: %s, Surname: %s, Age: %d\n", p1.mname, p1.msname, p1.mage);

    xxx p2 = { "Murat", "Ak", 10 };

    printf("Name: %s, Surname: %s, Age: %d\n", p2.mname, p2.msname, p2.mage);

    p2.mage = p1.mage;

    printf("Name: %s, Surname: %s, Age: %d\n", p1.mname, p1.msname, p1.mage);


    printf("\n\n");

    car c1;
    car* pc1 = &c1;

    pc1->mrenk_kod = 1;
    pc1->mmodel_year = 2001;
    pc1->mmotor_power = 100;

    printf("Renk kod: %d Model year: %d Motor power: %d\n", c1.mrenk_kod, c1.mmodel_year, c1.mmotor_power);
    printf("Renk kod: %d Model year: %d Motor power: %d\n", pc1->mrenk_kod, pc1->mmodel_year, pc1->mmotor_power);





   



    return 0;
}
