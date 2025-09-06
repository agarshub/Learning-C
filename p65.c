/* Write a program to read a valuer and find whether the given value is even or odd. */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Mumber\n");
    }
    return 0;
}