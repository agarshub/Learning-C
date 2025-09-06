/* Write a program to read the no & check whether it is five digit number or not. */

#include<stdio.h>
int main()
{
    long int n;
    printf("Enter the int value: ");
    scanf("%d",&n);

    if((n>=10000) && (n<=99999))
    {
        printf("Five Digit No");
    }
    else
    {
        printf("Not five digit No");
    }
}