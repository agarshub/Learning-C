/*
Write a program to find the factors of a number
*/

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Factors of %d are: ", n);
    for (i=1; i<=n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

/*
n=6
Factors of 6 are: 1 2 3 6

logic:
A factor of a number is an integer that divides the number evenly (without leaving a remainder).
To find the factors of a number n,
we can iterate through all integers from 1 to n and check if they divide n evenly using the modulus operator (%).
If n % i == 0, then i is a factor of n.

*/