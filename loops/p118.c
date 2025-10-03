/* Write a prodgram to find the factorial of the given numbers. */

#include <stdio.h>
int main()
{
    int n, fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    int dup=n;
    while(dup>0)
    {
        fact*=dup; // multiply dup with fact and store the result in fact
        dup--;
    }
    printf("The value of n is %d\n",n);
    printf("Factorial is: %d\n", fact);
    return 0;
}