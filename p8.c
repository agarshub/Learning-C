/* Write a program to find the remainder of the two numbers. */

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c = a % b;
    printf("The remainder is: %d",c);
    return 0;
}

// % is the modulus operator. It is used to find the remainder of the division of two integers.

/*
 a      b         c
100    200       300  (address of a, b, c) - just for example
----   ----      ----
 5     2         1    (value of a, b, c)

    5 % 2 = 1

    5 / 2 = 2.5 (quotient)
    
    5 = 2 * 2 + 1 (dividend = divisor * quotient + remainder)


    remainder = 1

*/