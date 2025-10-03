/* 
Write a program to find if a number is perfect or not using factor logic..
*/

#include <stdio.h>
int main()
{
    int n, i=1, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(i<n)
    {
        if(n%i==0)
        {
            sum+=i; // add all factors except the number itself
        }
        i++;
    }

    if(n==sum && n>0) // A perfect number is equal to the sum of its proper divisors
    // note that here n>0 is used because perfect numbers are positive integers
    {
        printf("%d is a perfect number\n", n);
    }
    else
    {
        printf("%d is not a perfect number\n", n);
    }
    return 0;
}