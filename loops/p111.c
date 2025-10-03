/*Write a program to find whether a number is prime or not in another way..*/

#include <stdio.h>
int main()
{
    int n,i=2,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<n) // Check divisibility from 2 to n-1
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==0 && n>1) // A prime number has no divisors other than 1 and itself
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
    return 0;
}