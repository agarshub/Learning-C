/* use ternary operator to find if a number is positive or not. */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
 
    (n > 0) ? printf("The number is positive.\n") : printf("The number is not positive.\n");
    return 0;
}

/*
(n>0) is the condition to be checked.
if the condition is true the expression before the colon (:) is executed.
if the condition is false the expression after the colon (:) is executed.

The ternary operator(?, :) is a shorthand for the if-else statement.
where ? means if and : means else.
*/