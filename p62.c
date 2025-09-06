/* Write a programn to read a value and find whether the given value is digit. */

#include<stdio.h>
int main()
{
    int val;
    printf("Enter the value: ");
    scanf("%d",&val);

    if ((val>=0) && (val<=9))
    {
        printf("Digit\n");
    }
}