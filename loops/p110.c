/*
Write a program to read a number and find whether the given no is prime or not.
*/

#include <stdio.h>
int main()
{
    int n,i=1,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
    return 0;
}