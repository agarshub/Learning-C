/* Write a program to find the nultiplication table of a given number.*/

#include <stdio.h>
int main()
{
    int n, i=1, prod;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication table of %d is:\n", n);
    while(i<=10)
    {
        prod = n * i; // multiply n with i to get the product
        printf("%d * %d = %d\n", n, i, prod);
        i++;
    }
    return 0;
}