/*
Write a program to find the sum of all factosrs of a given number.
*/

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++)
    {
        if (n % i == 0) // Check if i is a factor
        {
            sum += i; // Add the factor to sum
        }
    }
    
    printf("Sum of all factors of %d is: %d\n", n, sum);
    return 0;
}