
#include <stdio.h>

/*
Example-1
Girilen sayidan itibaren ters yöne doðru ardýþýk toplama yapan kod örneði
Örneðin; kullanýcý 5 girerse 5+4+3+2+1 toplamýndan sonuç 15 olur.
*/
/*
int toplama(int a)

{
    int sum = 0;
    while (a > 0)
    {
        sum += a;
        a--;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter a number: \n");

    scanf_s("%d", &num);


    printf("summing result: %d", toplama(num));

    return 0;
}
*/

/*
Example-2
Faktoriyel hesabý
*/
/*
int factorial(int a)
{
    int fact = 1;

    while (a > 1)
    {
        fact *= a;
        a--;
    }
    return fact;
}

int main()
{
    int num;
    printf("Enter a number to find its factorial: \n");
    scanf_s("%d", &num);
    printf("%d! = %d", num, factorial(num));


    return 0;
}
*/

/*
 ternary operator denemesi
*/
/*
int main()
{
    int grade;
    printf("Enter your grade: \n");
    scanf_s("%d", &grade);
    (grade >= 80 ? printf("AA") : (grade>=60 ? printf("BB"): (grade >= 40 ? printf("CC") : printf("FF"))));
    
    return 0;
}
*/

/*
 Example-3
 do_while example
 Girilen sayinin kaç basamaklý olduðunu bulma
 */
/*
int basamak_bulucu(int a)
{
    int count = 0;
    do
    {
        a = a / 10;
        count++;

    } while (a>0);

    return count;
}

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf_s("%d", &num);
    printf("Basamak sayisi: %d", basamak_bulucu(num));



    return 0;
}
*/

/*
 Example-4
 Asal sayý bulma
 */
/*
int main()
{
    int num;
    printf("enter a number:  \n");
    scanf_s("%d", &num);

    int flag = 0;
    for (int i = 2; i < num; ++i)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("%d asal sayi degildir.", num);
    else
        printf("%d asal sayidir.", num);
}
*/

int main()
{

}


