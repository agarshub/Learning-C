/*
Write a program to read the value and find whether it is odd.
If it is odd find whether it is divisible by 5 or not.
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if (n%2!=0)
    {
        if(n%5==0)
        {
            printf("Odd and divisible by 5");
        }
        else
        {
            printf("Odd but Not divisible by 5");
        }
    }
    else
    {
        printf("Even Number\n");
    }
    return 0;
}