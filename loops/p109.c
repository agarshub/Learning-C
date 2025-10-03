/*
Write a program to find the sum of all factors all even factors and odd factors of a given number.
*/

#include <stdio.h>
int main()
{
    int n, i, sum = 0, sume = 0, sumo = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        if (n % i == 0) // Check if i is a factor
        {
            sum += i; // Add the factor to sum
            
            if (i % 2 == 0) // Check if the factor is even
            {
                sume += i; // Add the even factor to sume
            }
            else
            {
                sumo += i; // Add the odd factor to sumo
            }
        }
    }
    
    printf("Sum of all factors of %d is: %d\n", n, sum);
    printf("Sum of all even factors of %d is: %d\n", n, sume);
    printf("Sum of all odd factors of %d is: %d\n", n, sumo);

    return 0;
}