/* Write a prodgram to find the factorial of the given numbers. */

#include <stdio.h>
int main()
{
    int n, fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n>0)
    {
        fact*=n; // multiply n with fact and store the result in fact
        n--;
    }
    printf("The value of n is%d\n",n);
    printf("Factorial is: %d\n", fact);
    return 0;
}