/* Write a program to find the even factors of a given number.*/

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Even factors of %d are: ", n);
    for (i=1; i<=n; i++)
    {
        if (n % i == 0) // Check if i is a factor
        {
            if (i % 2 == 0) // Check if the factor is even
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}

/*
to check if a number is a factor and that factor is even or not we use an if statement inside an if statement..
This is known as nested if statement.
*/