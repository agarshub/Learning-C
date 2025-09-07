/* Write a program to read the age days in week and print it (1-7). */

#include<stdio.h>
int main()
{
    int day;
    printf("Enter the day of the week: ");
    scanf("%d",&day);

    if(day==1)
    {
        printf("Monday");
    }
    else if(day==2)
    {
        printf("Tuesday\n");
    }
    else if(day==3)
    {
        printf("Wednesday\n");
    }
    else if(day==4)
    {
        printf("Thursday\n");
    }
    else if(day==5)
    {
        printf("Friday\n");
    }
    else if(day==6)
    {
        printf("Saturday\n");
    }
    else if(day==7)
    {
        printf("Sunday\n");
    }
    else
    {
        printf("Invalid day of the week!");
    }
    return 0;
}