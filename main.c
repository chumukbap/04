#include <stdio.h>

int main(void)
{
    int year;

    printf("Input the year: ");
    scanf("%d", &year);

    printf("is the year %d a leap year? : %d\n",
           year,
           ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)));
    return 0;
}