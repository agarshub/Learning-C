/*
Write a program to find the sum of all even factors of the given number.
*/

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++)
    {
        if (n % i == 0 && i % 2 == 0) // Check if i is a factor and if the factor is even
        {
            sum += i; // Add the even factor to sum
        }
    }
    
    printf("Sum of all even factors of %d is: %d\n", n, sum);
    return 0;
}