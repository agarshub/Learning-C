/*
Write a program to find the sum of all odd factors of the given number.
*/

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++)
    {
        if (n % i == 0 && i % 2 != 0) // Check if i is a factor and if the factor is odd
        {
            sum += i; // Add the odd factor to sum
        }
    }
    
    printf("Sum of all odd factors of %d is: %d\n", n, sum);
    return 0;
}