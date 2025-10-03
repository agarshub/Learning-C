/*write a program to find the product of n natural numbers*/

#include <stdio.h>
int main()
{
    int n, i=1, prod=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(i<=n)
    {
        prod*=i; // multiply all natural numbers from 1 to n
        i++;
    }
    printf("Product of first %d natural numbers is: %d\n", n, prod);
    return 0;
}