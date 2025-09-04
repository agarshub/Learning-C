/* Write a program to read the number of days in the year and check whether the days belongs to leap year or not. */

#include<stdio.h>
int main()
{
    int days;
    printf("Enter the number of days in the year: ");
    scanf("%d", &days);
    (days == 366) ? printf("The year is a leap year.\n") : (days == 365) ? printf("The year is not a leap year.\n") : printf("Invalid input. A year can have either 365 or 366 days.\n");
    return 0;
}