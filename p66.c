/* Write a program to read the year and find whether its leap year or not. */

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year\n");
    }
    return 0;
}