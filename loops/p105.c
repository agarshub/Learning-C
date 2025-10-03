/*
write a program to find the even factors of a given number using && operator.
*/

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Even factors of %d are: ", n);
    for (i=1; i<=n; i++)
    {
        if (n % i == 0 && i % 2 == 0) // Check if i is a factor and if the factor is even
        {
            printf("%d ", i);
        }
    }
    return 0;
}